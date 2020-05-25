#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "fmpc.h"
#include "cblas.h"
#include "clapack.h"
#include <Accelerate/Accelerate.h>


const int ione = 1;
const int itwo = 2;
const int ithree = 3;
const int iseven = 7;
const double fone = 1;
const double ftwo = 2;
const double fzero = 0;
const double fmone = -1;
int quiet = 1;
int one = 1;


void mpc(int T, int m, const int n, int niters, double kappa,
        double *A, double *B, double *Q, double *Qf, double *R, double *xmin,
        double *xmax, double *umin, double *umax, double *X0, double *U0, double *x0,
        double *U, double *X)
{
    int i, j, nz;
    double *dptr, *dptr1, *dptr2;
    double *At, *Bt, *zmax, *zmin;
    double *x, *zmaxp, *zminp, *z, *eyen, *eyem;
    
    
    nz = T*(n+m);
    
    
    /* Dynamic Allocation -- Consider changing to Static for runtime performance*/
    At = malloc(sizeof(double)*n*n);
    Bt = malloc(sizeof(double)*n*m);
    eyen = malloc(sizeof(double)*n*n);
    eyem = malloc(sizeof(double)*m*m);
    z = malloc(sizeof(double)*nz);
    x = malloc(sizeof(double)*n);
    zmax = malloc(sizeof(double)*nz);
    zmin = malloc(sizeof(double)*nz);
    zmaxp = malloc(sizeof(double)*nz);
    zminp = malloc(sizeof(double)*nz);
    
    /* eyen, eyem */
    dptr = eyen;
    for (i = 0; i < n*n; i++)
    {
        *dptr = 0;
        dptr++;
    }
    dptr = dptr-n*n;
    for (i = 0; i < n; i++)
    {
        *dptr = 1;
        dptr = dptr+n+1;
    }

    dptr = eyem;
    for (i = 0; i < m*m; i++)
    {
        *dptr = 0;
        dptr++;
    }
    dptr = dptr-m*m;
    for (i = 0; i < m; i++)
    {
        *(dptr+i*m+i) = 1;
    }
    dptr = x; dptr1 = x0;
    for (i = 0; i < n; i++)
    {
        *dptr = *dptr1;
        dptr++; dptr1++;
    }
    dptr = z;
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < m; j++)
        {
            *dptr = *(U0+i*m+j);
            dptr++;
        }
        for (j = 0; j < n; j++)
        {
            *dptr = *(X0+i*n+j);
            dptr++;
        }
    }
    
    /* At, Bt */
    cblas_dgemm(CblasColMajor,CblasTrans,CblasNoTrans,n,n,n,fone,A,n,eyen,n,fzero,At,n); // Computes a real, double precision, matrix-matrix product with general matrices.
    cblas_dgemm(CblasColMajor,CblasNoTrans,CblasTrans,m,n,m,fone,eyem,m,B,n,fzero,Bt,n); // Computes a real, double precision, matrix-matrix product with general matrices.

    /* zmax, zmin */
    dptr1 = zmax;
    dptr2 = zmin;
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < m; j++)
        {
            *dptr1 = *(umax+j);
            *dptr2 = *(umin+j);
            dptr1++; dptr2++;
        }
        for (j = 0; j < n; j++)
        {
            *dptr1 = *(xmax+j);
            *dptr2 = *(xmin+j);
            dptr1++; dptr2++;
        }
    }
    
    
    /* zmaxp, zminp */
    for (i = 0; i < nz; i++) zminp[i] = zmin[i] + 0.01*(zmax[i]-zmin[i]);
    for (i = 0; i < nz; i++) zmaxp[i] = zmax[i] - 0.01*(zmax[i]-zmin[i]);

    /* project z */
    for (i = 0; i < nz; i++) z[i] = z[i] > zmaxp[i] ? zmaxp[i] : z[i]; // Loop through Z and constrain values to defined maximum
    for (i = 0; i < nz; i++) z[i] = z[i] < zminp[i] ? zminp[i] : z[i]; // Loop through Z and constrain values to defined minimum
    
    
    /* Call fmpc*/
    fmpcsolve(A,B,At,Bt,eyen,eyem,Q,R,Qf,zmax,zmin,x,z,T,n,m,nz,niters,kappa);
    
    dptr = z;
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < m; j++)
        {
            *(U+i*m+j) = *dptr;
            dptr++;
        }
        for (j = 0; j < n; j++)
        {
            *(X+i*n+j) = *dptr;
            dptr++;
        }
    }

    free(At); free(Bt); free(eyen); free(eyem);
    free(z); free(x); free(zmax); free(zmin);
    return;  
    
}


/* ----------------------------------------------------------------------------------- */
    
void fmpcsolve(double *A, double *B, double *At, double *Bt, double *eyen,
         double *eyem, double *Q, double *R, double *Qf, double *zmax, double *zmin, 
         double *x, double *z0, int T, int n, int m, int nz, int niters, double kappa) 
{
    int maxiter = niters;
    int iiter, i, cont;
    double alpha = 0.01;
    double beta = 0.9;
    double tol = 0.1;
    double s;
    double resd, resp, res, newresd, newresp, newres;
    double *b, *z, *nu, *Ctnu;
    double *dnu, *dz;
    double *gf, *gp, *hp, *newgf, *newgp, *newhp;
    double *rd, *rp, *newrd, *newrp;
    double *dptr, *dptr1, *dptr2, *dptr3;
    double *newnu, *newz, *newCtnu;

    /* memory allocation */
    b = malloc(sizeof(double)*T*n);
    dnu = malloc(sizeof(double)*T*n);
    dz = malloc(sizeof(double)*nz);
    nu = malloc(sizeof(double)*T*n);
    Ctnu = malloc(sizeof(double)*nz);
    z = malloc(sizeof(double)*nz);
    gp = malloc(sizeof(double)*nz);
    hp = malloc(sizeof(double)*nz);
    gf = malloc(sizeof(double)*nz);
    rp = malloc(sizeof(double)*T*n);
    rd = malloc(sizeof(double)*nz);
    newnu = malloc(sizeof(double)*T*n);
    newz = malloc(sizeof(double)*nz);
    newCtnu = malloc(sizeof(double)*nz);
    newgf = malloc(sizeof(double)*nz);
    newhp = malloc(sizeof(double)*nz);
    newgp = malloc(sizeof(double)*nz);
    newrp = malloc(sizeof(double)*T*n);
    newrd = malloc(sizeof(double)*nz);

    for (i = 0; i < n*T; i++) nu[i] = 0;
    for (i = 0; i < n*T; i++) b[i] = 0;
    cblas_dgemv(CblasRowMajor,CblasNoTrans,n,n,fone,A,n,x,ione,fzero,b,ione); // Computes a real, double precision matrix-vector product using a general matrix.
    dptr = z; dptr1 = z0;
    for (i = 0; i < nz; i++) 
    {
        *dptr = *dptr1;
        dptr++; dptr1++;
    }
    if (quiet == 0)
    {   
        printf("\n iteration \t step \t\t rd \t\t\t rp\n");
    }
    for (iiter = 0; iiter < maxiter; iiter++)
    {
        gfgphp(Q,R,Qf,zmax,zmin,z,T,n,m,nz,gf,gp,hp);
        rdrp(A,B,Q,R,Qf,z,nu,gf,gp,b,T,n,m,nz,kappa,rd,rp,Ctnu);
        resdresp(rd,rp,T,n,nz,&resd,&resp,&res);
        if (res < tol) break;

        dnudz(A,B,At,Bt,eyen,eyem,Q,R,Qf,hp,rd,rp,T,n,m,nz,kappa,dnu,dz); 

        s = 1;
        
        /* feasibility search */
        while (1)
        {
            cont = 0;
            dptr = z; dptr1 = dz; dptr2 = zmax; dptr3 = zmin;
            for (i = 0; i < nz; i++)
            {
                if (*dptr+s*(*dptr1) >= *dptr2) cont = 1;
                if (*dptr+s*(*dptr1) <= *dptr3) cont = 1;
                dptr++; dptr1++; dptr2++; dptr3++;
            }
            if (cont == 1)
            {
                s = beta*s;
                continue;
            }
            else
                break;
        }
        dptr = newnu; dptr1 = nu; dptr2 = dnu;
        for (i = 0; i < T*n; i++)
        {
            *dptr = *dptr1+s*(*dptr2);
            dptr++; dptr1++; dptr2++;
        }
        dptr = newz; dptr1 = z; dptr2 = dz;
        for (i = 0; i < nz; i++)
        {
            *dptr = *dptr1+s*(*dptr2);
            dptr++; dptr1++; dptr2++;
        }

        /* insert backtracking line search */
        while (1)
        {
            gfgphp(Q,R,Qf,zmax,zmin,newz,T,n,m,nz,newgf,newgp,newhp);
            rdrp(A,B,Q,R,Qf,newz,newnu,newgf,newgp,b,T,n,m,nz,kappa,newrd,newrp,newCtnu);
            resdresp(newrd,newrp,T,n,nz,&newresd,&newresp,&newres);
            if (newres <= (1-alpha*s)*res) break;
            s = beta*s;
            dptr = newnu; dptr1 = nu; dptr2 = dnu;
            for (i = 0; i < T*n; i++)
            {
                *dptr = *dptr1+s*(*dptr2);
                dptr++; dptr1++; dptr2++;
            }
            dptr = newz; dptr1 = z; dptr2 = dz;
            for (i = 0; i < nz; i++)
            {
                *dptr = *dptr1+s*(*dptr2);
                dptr++; dptr1++; dptr2++;
            }
        }
        
        dptr = nu; dptr1 = newnu; 
        for (i = 0; i < T*n; i++)
        {
            *dptr = *dptr1;
            dptr++; dptr1++;
        }
        dptr = z; dptr1 = newz;
        for (i = 0; i < nz; i++)
        {
            *dptr = *dptr1;
            dptr++; dptr1++;
        }
        if (quiet == 0)
        {
            printf("    %d \t\t %5.4f \t %0.5e \t\t %0.5e\n",iiter,s,newresd,newresp);
        }
    }
    dptr = z0; dptr1 = z;
    for (i = 0; i < nz; i++)
    {
        *dptr = *dptr1;
        dptr++; dptr1++;
    }

    free(b); free(dnu); free(dz); free(nu); free(Ctnu);
    free(z); free(gp); free(hp); free(gf); free(rp); free(rd);
    free(newnu); free(newz); free(newCtnu); free(newgf); free(newhp);
    free(newgp); free(newrp); free(newrd);
    return;
}

/* computes the search directions dz and dnu */
void dnudz(double *A, double *B, double *At, double *Bt, double *eyen,
        double *eyem, double *Q, double *R, double *Qf, double *hp, double *rd, 
        double *rp, int T, int n, int m, int nz, double kappa, double *dnu, double *dz)
{
    int i,j,info,nT;
    double *dptr, *dptr1, *dptr2, *dptr3, *temp, *tempmatn, *tempmatm;
    double *PhiQ, *PhiR, *Yd, *Yud, *Ld, *Lld, *Ctdnu, *gam, *v, *be, *rdmCtdnu;
    double *PhiinvQAt, *PhiinvRBt, *PhiinvQeye, *PhiinvReye, *CPhiinvrd;
    nT = n*T;

    /* allocate memory */
    PhiQ = malloc(sizeof(double)*n*n*T);
    PhiR = malloc(sizeof(double)*m*m*T);
    PhiinvQAt = malloc(sizeof(double)*n*n*T);
    PhiinvRBt = malloc(sizeof(double)*m*n*T);
    PhiinvQeye = malloc(sizeof(double)*n*n*T);
    PhiinvReye = malloc(sizeof(double)*m*m*T);
    CPhiinvrd = malloc(sizeof(double)*n*T);
    Yd = malloc(sizeof(double)*n*n*T);
    Yud = malloc(sizeof(double)*n*n*(T-1));
    Ld = malloc(sizeof(double)*n*n*T);
    Lld = malloc(sizeof(double)*n*n*(T-1));
    gam = malloc(sizeof(double)*n*T);
    v = malloc(sizeof(double)*n*T);
    be = malloc(sizeof(double)*n*T);
    temp = malloc(sizeof(double)*n);
    tempmatn = malloc(sizeof(double)*n*n);
    tempmatm = malloc(sizeof(double)*m*m);
    Ctdnu = malloc(sizeof(double)*nz);
    rdmCtdnu = malloc(sizeof(double)*nz);

    /* form PhiQ and PhiR */
    for (i = 0; i < T-1; i++)
    {
        dptr = PhiQ+n*n*i; dptr1 = Q;
        for (j = 0; j < n*n; j++)
        {
            *dptr = 2*(*dptr1);
            dptr++; dptr1++;
        }
        dptr = PhiQ+n*n*i; dptr1 = hp+m*(i+1)+n*i;
        for (j = 0; j < n; j++)
        {
            *dptr = *dptr+kappa*(*dptr1);
            dptr = dptr+n+1; dptr1++;
        }
        dptr = PhiR+m*m*i; dptr1 = R;
        for (j = 0; j < m*m; j++)
        {
            *dptr = 2*(*dptr1);
            dptr++; dptr1++;
        }
        dptr = PhiR+m*m*i; dptr1 = hp+i*(n+m);
        for (j = 0; j < m; j++)
        {
            *dptr = *dptr+kappa*(*dptr1);
            dptr = dptr+m+1; dptr1++;
        }
    }
    
    dptr = PhiR+m*m*(T-1); dptr1 = R;
    for (j = 0; j < m*m; j++)
    {
        *dptr = 2*(*dptr1);
        dptr++; dptr1++;
    }
    dptr = PhiR+m*m*(T-1); dptr1 = hp+(T-1)*(n+m);
    for (j = 0; j < m; j++)
    {
        *dptr = *dptr+kappa*(*dptr1);
        dptr = dptr+m+1; dptr1++;
    }
    dptr = PhiQ+n*n*(T-1); dptr1 = Qf;
    for (j = 0; j < n*n; j++)
    {
        *dptr = 2*(*dptr1);
        dptr++; dptr1++;
    }
    dptr = PhiQ+n*n*(T-1); dptr1 = hp+m*T+n*(T-1);
    for (j = 0; j < n; j++)
    {
        *dptr = *dptr+kappa*(*dptr1);
        dptr = dptr+n+1; dptr1++;
    }

    /* compute PhiinvQAt, PhiinvRBt, PhiinvQeye, PhiinvReye */
    for (i = 0; i < T; i++)
    {
        dptr = PhiinvQAt+n*n*i; dptr1 = At;
        for (j = 0; j < n*n; j++)
        {
            *dptr = *dptr1;
            dptr++; dptr1++;
        }
        dptr = dptr-n*n; dptr1 = PhiQ+n*n*i;
        dposv_("l",&n,&n,dptr1,&n,dptr,&n,&info); //Computes the solution to the system of linear equations with a symmetric or Hermitian positive-definite coefficient matrix A and multiple right-hand sides.
        dptr = PhiinvQeye+n*n*i; dptr1 = eyen;
        for (j = 0; j < n*n; j++)
        {
            *dptr = *dptr1;
            dptr++; dptr1++;
        }
        dptr = dptr-n*n; dptr1 = PhiQ+n*n*i;
        dtrtrs_("l","n","n",&n,&n,dptr1,&n,dptr,&n,&info); //Solves a system of linear equations with a triangular coefficient matrix, with multiple right-hand sides.
        dtrtrs_("l","t","n",&n,&n,dptr1,&n,dptr,&n,&info); //Solves a system of linear equations with a triangular coefficient matrix, with multiple right-hand sides.
    }
    for (i = 0; i < T; i++)
    {
        dptr = PhiinvRBt+m*n*i; dptr1 = Bt;
        for (j = 0; j < n*m; j++)
        {
            *dptr = *dptr1;
            dptr++; dptr1++;
        }
        dptr = dptr-m*n; dptr1 = PhiR+m*m*i;
        dposv_("l",&m,&n,dptr1,&m,dptr,&m,&info); //Computes the solution to the system of linear equations with a symmetric or Hermitian positive-definite coefficient matrix A and multiple right-hand sides.
        dptr = PhiinvReye+m*m*i; dptr1 = eyem;
        for (j = 0; j < m*m; j++)
        {
            *dptr = *dptr1;
            dptr++; dptr1++;
        }
        dptr = dptr-m*m; dptr1 = PhiR+m*m*i;
        dtrtrs_("l","n","n",&m,&m,dptr1,&m,dptr,&m,&info); //Solves a system of linear equations with a triangular coefficient matrix, with multiple right-hand sides.
        dtrtrs_("l","t","n",&m,&m,dptr1,&m,dptr,&m,&info); //Solves a system of linear equations with a triangular coefficient matrix, with multiple right-hand sides.
    }
    
    /* form Yd and Yud */
    dptr = Yud; dptr1 = PhiinvQAt; 
    for (i = 0; i < n*n*(T-1); i++)
    {
        *dptr = -(*dptr1);
        dptr++; dptr1++;
    }
    dptr2 = Yd; dptr3 = PhiinvQeye;
    for (i = 0; i < n*n; i++)
    {
        *dptr2 = *dptr3;
        dptr2++; dptr3++;
    }
    dptr2 = dptr2-n*n;
    cblas_dgemm(CblasRowMajor,CblasNoTrans,CblasNoTrans,n,n,m,fone,B,n,PhiinvRBt,n,fone,dptr2,n); // Computes a real, double precision, matrix-matrix product with general matrices.
    for (i = 1; i < T; i++)
    {
        dptr = Yd+n*n*i; dptr1 = PhiinvQeye+n*n*i;
        for (j = 0; j < n*n; j++)
        {
            *dptr = *dptr1;
            dptr++; dptr1++;
        }
        dptr1 = PhiinvRBt+m*n*i; dptr = dptr-n*n;
        cblas_dgemm(CblasRowMajor,CblasNoTrans,CblasNoTrans,n,n,m,fone,B,n,dptr1,n,fone,dptr,n); // Computes a real, double precision, matrix-matrix product with general matrices.
        dptr1 = PhiinvQAt+n*n*(i-1);
        cblas_dgemm(CblasRowMajor,CblasNoTrans,CblasNoTrans,n,n,n,fone,A,n,dptr1,n,fone,dptr,n); // Computes a real, double precision, matrix-matrix product with general matrices.
    }

    /* compute Lii */
    dptr = Ld; dptr1 = Yd; 
    for (i = 0; i < n*n; i++)
    {
        *dptr = *dptr1;
        dptr++; dptr1++; 
    }
    dptr = dptr-n*n; 
    dposv_("L",&n,&one,dptr,&n,temp,&n,&info); //Computes the solution to the system of linear equations with a symmetric or Hermitian positive-definite coefficient matrix A and multiple right-hand sides.
    for (i = 1; i < T; i++)
    {
        dptr = Ld+n*n*(i-1); dptr1 = Yud+n*n*(i-1); dptr2 = Lld+n*n*(i-1);
        for (j = 0; j < n*n; j++)
        {
            *dptr2 = *dptr1;
            dptr2++; dptr1++;
        }
        dptr2 = dptr2-n*n;
        dtrtrs_("l","n","n",&n,&n,dptr,&n,dptr2,&n,&info); //Solves a system of linear equations with a triangular coefficient matrix, with multiple right-hand sides.
        dptr1 = tempmatn;
        for (j = 0; j < n*n; j++)
        {
            *dptr1 = *dptr2;
            dptr1++; dptr2++;
        }
        dptr1 = dptr1-n*n; dptr2 = dptr2-n*n;
        cblas_dgemm(CblasRowMajor,CblasTrans,CblasNoTrans,n,n,n,fone,dptr1,n,eyen,n,fzero,dptr2,n); // Computes a real, double precision, matrix-matrix product with general matrices.
        dptr = Ld+n*n*i; dptr1 = Yd+n*n*i;
        for (j = 0; j < n*n; j++)
        {
            *dptr = *dptr1;
            dptr++; dptr1++;
        }
        dptr = dptr-n*n;
        cblas_dgemm(CblasRowMajor,CblasNoTrans,CblasTrans,n,n,n,fmone,dptr2,n,dptr2,n,fone,dptr,n); // Computes a real, double precision, matrix-matrix product with general matrices.
        dposv_("L",&n,&one,dptr,&n,temp,&n,&info); //Computes the solution to the system of linear equations with a symmetric or Hermitian positive-definite coefficient matrix A and multiple right-hand sides.
    }

    /* compute CPhiinvrd */
    dptr = CPhiinvrd; dptr1 = rd+m;
    for (i = 0; i < n; i++)
    {
        *dptr = *dptr1;
        dptr++; dptr1++;
    }
    dptr = dptr-n;
    cblas_dtrsv(CblasRowMajor,CblasLower,CblasNoTrans,CblasNonUnit,n,PhiQ,n,dptr,ione); //Solves a system of linear equations whose coefficients are in a triangular matrix.
    cblas_dtrsv(CblasRowMajor,CblasLower,CblasTrans,CblasNonUnit,n,PhiQ,n,dptr,ione); //Solves a system of linear equations whose coefficients are in a triangular matrix.
    dptr2 = temp; dptr1 = rd;
    for (i = 0; i < m; i++)
    {
        *dptr2 = *dptr1;
        dptr2++; dptr1++;
    }
    dptr2 = dptr2-m;
    cblas_dtrsv(CblasRowMajor,CblasLower,CblasNoTrans,CblasNonUnit,m,PhiR,m,dptr2,ione); //Solves a system of linear equations whose coefficients are in a triangular matrix.
    cblas_dtrsv(CblasRowMajor,CblasLower,CblasTrans,CblasNonUnit,m,PhiR,m,dptr2,ione); //Solves a system of linear equations whose coefficients are in a triangular matrix.
    cblas_dgemv(CblasRowMajor,CblasNoTrans,n,m,fmone,B,m,temp,ione,fone,dptr,ione); // Computes a real, double precision matrix-vector product using a general matrix.
    
    for (i = 1; i < T; i++)
    {
        dptr = CPhiinvrd+n*i; dptr1 = rd+m+i*(n+m);
        for (j = 0; j < n; j++)
        {
            *dptr = *dptr1;
            dptr++; dptr1++;
        }
        dptr = dptr-n; dptr3 = PhiQ+n*n*i;
        cblas_dtrsv(CblasRowMajor,CblasLower,CblasNoTrans,CblasNonUnit,n,dptr3,n,dptr,ione); //Solves a system of linear equations whose coefficients are in a triangular matrix.
        cblas_dtrsv(CblasRowMajor,CblasLower,CblasTrans,CblasNonUnit,n,dptr3,n,dptr,ione); //Solves a system of linear equations whose coefficients are in a triangular matrix.
        dptr2 = temp; dptr1 = rd+i*(m+n);
        for (j = 0; j < m; j++)
        {
            *dptr2 = *dptr1;
            dptr2++; dptr1++;
        }
        dptr3 = PhiR+m*m*i; dptr2 = dptr2-m;
        cblas_dtrsv(CblasRowMajor,CblasLower,CblasNoTrans,CblasNonUnit,m,dptr3,m,dptr2,ione); //Solves a system of linear equations whose coefficients are in a triangular matrix.
        cblas_dtrsv(CblasRowMajor,CblasLower,CblasTrans,CblasNonUnit,m,dptr3,m,dptr2,ione); //Solves a system of linear equations whose coefficients are in a triangular matrix.
        cblas_dgemv(CblasRowMajor,CblasNoTrans,n,m,fmone,B,m,temp,ione,fone,dptr,ione); // Computes a real, double precision matrix-vector product using a general matrix.
        dptr2 = temp; dptr1 = rd+(i-1)*(n+m)+m;
        for (j = 0; j < n; j++)
        {
            *dptr2 = *dptr1;
            dptr2++; dptr1++;
        }
        dptr3 = PhiQ+n*n*(i-1); dptr2 = dptr2-n;
        cblas_dtrsv(CblasRowMajor,CblasLower,CblasNoTrans,CblasNonUnit,n,dptr3,n,dptr2,ione); //Solves a system of linear equations whose coefficients are in a triangular matrix.
        cblas_dtrsv(CblasRowMajor,CblasLower,CblasTrans,CblasNonUnit,n,dptr3,n,dptr2,ione); //Solves a system of linear equations whose coefficients are in a triangular matrix.
        cblas_dgemv(CblasRowMajor,CblasNoTrans,n,n,fmone,A,n,temp,ione,fone,dptr,ione); // Computes a real, double precision matrix-vector product using a general matrix.
    }

    /* form be */
    dptr = be; dptr1 = rp; dptr2 = CPhiinvrd;
    for (i = 0; i < n*T; i++)
    {
        *dptr = (*dptr2)-(*dptr1);
        dptr++; dptr1++; dptr2++;
    }

    /* solve for dnu */
    dptr = v; dptr1 = be;
    for (i = 0; i < n; i++)
    {
        *dptr = -(*dptr1);
        dptr++; dptr1++;
    }
    dptr = dptr-n;
    cblas_dtrsv(CblasRowMajor,CblasLower,CblasNoTrans,CblasNonUnit,n,Ld,n,dptr,ione); //Solves a system of linear equations whose coefficients are in a triangular matrix.
    for (i = 1; i < T; i++)
    {
        dptr = v+i*n; dptr1 = v+(i-1)*n; dptr2 = be+i*n; 
        for (j = 0; j < n; j++)
        {
            *dptr = *dptr2;
            dptr++; dptr2++;
        }
        dptr = dptr-n; dptr3 = Lld+n*n*(i-1);
        cblas_dgemv(CblasRowMajor,CblasNoTrans,n,n,fmone,dptr3,n,dptr1,ione,fmone,dptr,ione); // Computes a real, double precision matrix-vector product using a general matrix.
        dptr3 = Ld+n*n*i;
        cblas_dtrsv(CblasRowMajor,CblasLower,CblasNoTrans,CblasNonUnit,n,dptr3,n,dptr,ione); //Solves a system of linear equations whose coefficients are in a triangular matrix.
    }
    dptr = dnu+n*(T-1); dptr1 = v+n*(T-1);
    for (i = 0; i < n; i++)
    {
        *dptr = *dptr1;
        dptr++; dptr1++;
    }
    dptr = dptr-n; dptr3 = Ld+n*n*(T-1);
    cblas_dtrsv(CblasRowMajor,CblasLower,CblasTrans,CblasNonUnit,n,dptr3,n,dptr,ione); //Solves a system of linear equations whose coefficients are in a triangular matrix.
    for (i = T-1; i > 0; i--)
    {
        dptr = dnu+n*(i-1); dptr1 = dnu+n*i; dptr2 = v+n*(i-1); 
        for (j = 0; j < n; j++)
        {
            *dptr = *dptr2;
            dptr++; dptr2++;
        }
        dptr = dptr-n; dptr3 = Lld+n*n*(i-1);
        cblas_dgemv(CblasRowMajor,CblasTrans,n,n,fmone,dptr3,n,dptr1,ione,fone,dptr,ione); // Computes a real, double precision matrix-vector product using a general matrix.
        dptr3 = Ld+n*n*(i-1);
        cblas_dtrsv(CblasRowMajor,CblasLower,CblasTrans,CblasNonUnit,n,dptr3,n,dptr,ione); //Solves a system of linear equations whose coefficients are in a triangular matrix.
    }

    /* form Ctdnu */
    for (i = 0; i < T-1; i++)
    {
        dptr = Ctdnu+i*(n+m); dptr1 = dnu+i*n;
        cblas_dgemv(CblasRowMajor,CblasNoTrans,m,n,fmone,Bt,n,dptr1,ione,fzero,dptr,ione); // Computes a real, double precision matrix-vector product using a general matrix.
        dptr = Ctdnu+i*(n+m)+m; dptr2 = dnu+(i+1)*n;
        for (j = 0; j < n; j++)
        {
            *dptr = *dptr1;
            dptr++; dptr1++;
        }
        dptr = dptr-n;
        cblas_dgemv(CblasRowMajor,CblasNoTrans,n,n,fmone,At,n,dptr2,ione,fone,dptr,ione); // Computes a real, double precision matrix-vector product using a general matrix.
    }
    
    dptr = Ctdnu+(T-1)*(n+m); dptr1 = dnu+(T-1)*n;
   cblas_dgemv(CblasRowMajor,CblasNoTrans,m,n,fmone,Bt,n,dptr1,ione,fzero,dptr,ione); // Computes a real, double precision matrix-vector product using a general matrix.
    dptr = dptr+m; 
    for (i = 0; i < n; i++)
    {
        *dptr = *dptr1;
        dptr++; dptr1++;
    }
    dptr = rdmCtdnu; dptr1 = Ctdnu; dptr2 = rd;
    for (i = 0; i < nz; i++)
    {
        *dptr = -(*dptr1)-(*dptr2);
        dptr++; dptr1++; dptr2++;
    }

    /* solve for dz */
    for (i = 0; i < T; i++)
    {
        dptr = dz+(i+1)*m+i*n; dptr1 = rdmCtdnu+(i+1)*m+i*n;
        dptr2 = PhiinvQeye+n*n*i;
        cblas_dgemv(CblasRowMajor,CblasNoTrans,n,n,fone,dptr2,n,dptr1,ione,fzero,dptr,ione); // Computes a real, double precision matrix-vector product using a general matrix.
    }
    for (i = 0; i < T; i++)
    {
        dptr = dz+i*(m+n); dptr1 = rdmCtdnu+i*(m+n);
        dptr2 = PhiinvReye+m*m*i;
        cblas_dgemv(CblasRowMajor,CblasNoTrans,m,m,fone,dptr2,m,dptr1,ione,fzero,dptr,ione); // Computes a real, double precision matrix-vector product using a general matrix.
    }
    free(PhiQ); free(PhiR); free(PhiinvQAt); free(PhiinvRBt); free(PhiinvQeye);
    free(PhiinvReye); free(CPhiinvrd); free(Yd); free(Yud); free(Ld); free(Lld);
    free(gam); free(v); free(be); free(temp); free(tempmatn); free(tempmatm); 
    free(Ctdnu); free(rdmCtdnu);
    return;
}

/* computes rd and rp */
void rdrp(double *A, double *B, double *Q, double *R, double *Qf, double *z, double *nu, 
        double *gf, double *gp, double *b, int T, int n, int m, int nz, 
        double kappa, double *rd, double *rp, double *Ctnu)
{
    int i, j;
    double *Cz;
    double *dptr, *dptr1, *dptr2;

    Cz = malloc(sizeof(double)*T*n);
    
    /* compute Cz */
    dptr = Cz; dptr1 = z+m;
    for (i = 0; i < n; i++)
    {
        *dptr = *dptr1;
        dptr++; dptr1++;
    }
    cblas_dgemv(CblasRowMajor,CblasNoTrans,n,m,fmone,B,m,z,ione,fone,Cz,ione); // Computes a real, double precision matrix-vector product using a general matrix.
    for (i = 2; i <= T; i++)
    {
        dptr = Cz+(i-1)*n; dptr1 = z+m+(i-2)*(n+m); 
        dptr2 = z+m+(i-1)*(m+n);
        for (j = 0; j < n; j++)
        {
            *dptr = *dptr2;
            dptr++; dptr2++;
        }
        dptr = dptr-n; 
        cblas_dgemv(CblasRowMajor,CblasNoTrans,n,n,fmone,A,n,dptr1,ione,fone,dptr,ione); // Computes a real, double precision matrix-vector product using a general matrix.
        dptr1 = dptr1+n;
        cblas_dgemv(CblasRowMajor,CblasNoTrans,n,m,fmone,B,m,dptr1,ione,fone,dptr,ione); // Computes a real, double precision matrix-vector product using a general matrix.
    }
    /*
    dptr = Cz+(T-1)*n; dptr1 = z+m+(T-2)*(n+m);
    cblas_dgemv(CblasRowMajor,CblasNoTrans,n,n,fmone,A,n,dptr1,ione,fzero,dptr,ione);
    dptr1 = dptr1+n;
    cblas_dgemv(CblasRowMajor,CblasNoTrans,n,m,fmone,B,n,dptr1,ione,fone,dptr,ione);
    dptr1 = z+nz-n;
    for (i = 0; i < n; i++)
    {
        *dptr = *dptr+*dptr1;
        dptr++; dptr1++;
    }
    */

    /* compute Ctnu */
    dptr = Ctnu; dptr1 = Ctnu+m; dptr2 = nu;
    for (i = 1; i <= T-1; i++)
    {
        cblas_dgemv(CblasRowMajor,CblasTrans,n,m,fmone,B,m,dptr2,ione,fzero,dptr,ione); // Computes a real, double precision matrix-vector product using a general matrix.
        dptr = dptr+n+m;
        for (j = 0; j < n; j++)
        {
            *dptr1 = *dptr2;
            dptr1++; dptr2++;
        }
        dptr1 = Ctnu+m+(i-1)*(n+m);
        cblas_dgemv(CblasRowMajor,CblasTrans,n,n,fmone,A,n,dptr2,ione,fone,dptr1,ione); // Computes a real, double precision matrix-vector product using a general matrix.
        dptr1 = dptr1+n+m;
    }
    cblas_dgemv(CblasRowMajor,CblasTrans,n,m,fmone,B,m,dptr2,ione,fzero,dptr,ione); // Computes a real, double precision matrix-vector product using a general matrix.
    dptr = Ctnu+nz-n; dptr1 = nu+(T-1)*n;
    for (i = 0; i < n; i++)
    {
        *dptr = *dptr1;
        dptr++; dptr1++;
    }

    dptr = rp; dptr1 = Cz; dptr2 = b;
    for (i = 0; i < n*T; i++)
    {
        *dptr = *dptr1-*dptr2;
        dptr++; dptr1++; dptr2++;
    }
    dptr = rd; dptr1 = Ctnu; dptr2 = gf;
    for (i = 0; i < nz; i++)
    {
        *dptr = *dptr1+*dptr2;
        dptr++; dptr1++; dptr2++;
    }
    cblas_daxpy(nz,kappa,gp,ione,rd,ione);
    free(Cz);
    return;
}

/* computes gf, gp and hp */
void gfgphp(double *Q, double *R, double *Qf, double *zmax, double *zmin, double *z,
        int T, int n, int m, int nz, double *gf, double *gp, double *hp)
{
    int i;
    double *dptr, *dptr1, *dptr2;
    double *gp1, *gp2;

    gp1 = malloc(sizeof(double)*nz);
    gp2 = malloc(sizeof(double)*nz);

    dptr = gp1; dptr1 = zmax; dptr2 = z;
    for (i = 0; i < nz; i++)
    {
        *dptr = 1.0/(*dptr1-*dptr2);
        dptr++; dptr1++; dptr2++;
    }
    dptr = gp2; dptr1 = zmin; dptr2 = z;
    for (i = 0; i < nz; i++)
    {
        *dptr = 1.0/(*dptr2-*dptr1);
        dptr++; dptr1++; dptr2++;
    }
    dptr = hp; dptr1 = gp1; dptr2 = gp2;
    for (i = 0; i < nz; i++)
    {
        *dptr = (*dptr1)*(*dptr1) + (*dptr2)*(*dptr2);
        dptr++; dptr1++; dptr2++;
    }
    dptr = gp; dptr1 = gp1; dptr2 = gp2;
    for (i = 0; i < nz; i++)
    {
        *dptr = *dptr1-*dptr2;
        dptr++; dptr1++; dptr2++;
    }
    
    dptr = gf; dptr1 = z; 
    for (i = 0; i < T-1; i++)
    {
        cblas_dgemv(CblasRowMajor,CblasNoTrans,m,m,ftwo,R,m,dptr1,ione,fzero,dptr,ione); // Computes a real, double precision matrix-vector product using a general matrix.
        dptr = dptr+m; dptr1 = dptr1+m;
        cblas_dgemv(CblasRowMajor,CblasNoTrans,n,n,ftwo,Q,n,dptr1,ione,fzero,dptr,ione); // Computes a real, double precision matrix-vector product using a general matrix.
        dptr = dptr+n; dptr1 = dptr1+n;
    }
    cblas_dgemv(CblasRowMajor,CblasNoTrans,m,m,ftwo,R,m,dptr1,ione,fzero,dptr,ione); // Computes a real, double precision matrix-vector product using a general matrix.
    dptr = dptr+m; dptr1 = dptr1+m;
    cblas_dgemv(CblasRowMajor,CblasNoTrans,n,n,ftwo,Qf,n,dptr1,ione,fzero,dptr,ione); // Computes a real, double precision matrix-vector product using a general matrix.

    free(gp1); free(gp2);
    return;
}

/* computes resd, resp, and res */
void resdresp(double *rd, double *rp, int T, int n, int nz, double *resd, 
        double *resp, double *res)
{
    int nnu = T*n;
    *resp = cblas_dnrm2(nnu,rp,ione);
    *resd = cblas_dnrm2(nz,rd,ione);
    *res = sqrt((*resp)*(*resp)+(*resd)*(*resd));
    return;
}
