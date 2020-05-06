//
//  main.c
//
//  Created by Brady Planden on 08/04/2020.
//  Copyright © 2020 Brady Planden. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <Accelerate/Accelerate.h>



int main() {
    /* problem setup */
    int i, j, m, n, nz, T, niters, nsteps, info;
    double kappa;
    double *dptr, *dptr1, *dptr2, *y1, *y2, *plhs[3];
    double *At, *Bt, *x, *u;
    double *zmax, *zmin, *Xhist, *Uhist, *z, *eyen, *eyem;
    double *K, *Rtilde, *Rlower, *tempnm, *xterm, *uterm;
    double *umaxp, *uminp, *xmaxp, *xminp, *zmaxp, *zminp;
    double *telapsed;
    clock_t t1, t2;
    
    
    const int ione = 1;
    const int itwo = 2;
    const int ithree = 3;
    const int iseven = 7;
    const double fone = 1;
    const double ftwo = 2;
    const double fzero = 0;
    const double fmone = -1;
    int quiet = 0;
   
    
    
    /* Define Model Parameters */
    double A[5*5] =
        {  -0.233378550296557, 0.642525969497126, -0.100733522528759, 0.0614685339034665, 0.158841328952754, -0.898620639567301, 0.641581122758581, 0.391580501847139, 0.575545703289866, -0.720900490810589, 0.0676196288067954, -0.0203040083247382, -0.317410150490652, 0.0319836957324000, 0.385394336066720, 0.155207969184060, 0.176581670059644, 1.17787838423283, -0.0516044893506082, 0.875948645888029, -0.618547359026497, 0.0942217880196703, -0.0735886799222262, -0.449071459327629, -0.373228718774620};
    double B[5*3] =
         {0.950129285147175, 0.762096833027395, 0.615432348100095, 0.231138513574288, 0.45646766516834, 0.791937037427035,
          0.606842583541787, 0.0185036432482244, 0.921812970744803, 0.485982468709300, 0.821407164295253, 0.738207245810665,
          0.891298966148902, 0.444703364353194, 0.176266144494618};
    
    /* Define Optimisation Weights*/
    double Q[5*5] = {1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1};
    double R1[3*3] = {1,0,0,0,1,0,0,0,1};
    double *R = R1;
    double Qf[5*5] = {1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1};
    
    /* Define Constraints*/
    double xmax[5] = {10,10,10,10,10};
    double xmin[5] = {-10,-10,-10,-10,-10};
    double umax[3] = {0.2,0.2,0.2};
    double umin[3] = {-0.2,-0.2,-0.2};
    
    n = 5; // define n dimension
    m = 3; // define m dimension
    T = 10;
    kappa = 0.01;
    niters = 5;
    nsteps = 100;
    nz = T*(n+m);

    /* Initialising Controller States and Accuators*/
    double X1[5*10] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    double U1[3*10] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    double x0[5] = {0,0,0,0,0};
    double *X0 = X1;
    double *U0 = U1;
    
    /* Defining Noise Variable*/
    double w[5*20] = {-0.0942937869379045,-0.442108695215731,-0.297234781439727,-0.484726072970964,-0.0813505322724938,0.338118445052387,0.00281288399625090,-0.306568843594785,0.197898481859863,-0.00344755029689714,0.160227556441602,0.227113216929677,0.202739913240377,0.294821080200926,0.479746896788841,-0.363481257740290,0.161442576382325,0.0827916815612309,-0.274050131855554,-0.290930595561580,0.435469699107605,-0.147131867783000,-0.301278257338510,0.246785676564429,0.346221417824325,-0.480360486135183,0.209471392703387,0.182223223591384,-0.121626999487329,0.399769175169610,-0.158029381729784,-0.190709840209042,0.0465711518291062,0.456843448444877,-0.228552741358200,-0.488243312646882,-0.215591410250055,-0.0765037431489493,0.0798068732495990,-0.120181629649209,0.416904439913408,0.313166497303758,0.103792479193819,-0.0549035677120532,0.0251524963051724,0.181277161282135,-0.0711076346590033,-0.197235599223391,0.360011604886820,0.321629160735343,-0.210274104143762,0.338496044938081,-0.0551197953270878,0.0225903490807078,-0.247670653126010,0.393897966445253,-0.0307757147889989,0.0155117521407628,0.260365009804344,0.283328649867713,-0.0897297930090547,-0.490138699339076,-0.227812075030040,0.431814578461665,-0.297352642349613,-0.120518981972002,-0.195382633130606,0.0416738538980876,0.353655130662768,0.144910384193844,-0.158806430585117,0.0680724610077758,0.194567240425548,0.380142207411327,0.375741899818074,-0.300861932794262,-0.435218877036728,-0.166048520028241,0.0298231167160661,0.180845751397230,0.393649530913534,-0.361109118043050,-0.301185732238938,-0.0340056583245760,0.172137468474288,0.331796017609607,-0.310346252452825,-0.349127023850235,0.0935629125396816,0.317974340839245,0.0340790176266005,-0.129586443367884,0.121310130795413,-0.327043858724763,0.237305988465256,-0.201276987897786,0.488334938277631,-0.0670934038932709,0.140526498989835,-0.0389048733433011};
    

    /* Output Definition */
    plhs[0] = malloc(sizeof(double)*n*nsteps);
    plhs[1] = malloc(sizeof(double)*m*nsteps);
    plhs[2] = malloc(sizeof(double)*1*1);
    Xhist = plhs[0];
    Uhist = plhs[1];
    telapsed = plhs[2];

    At = malloc(sizeof(double)*n*n);
    Bt = malloc(sizeof(double)*n*m);
    eyen = malloc(sizeof(double)*n*n);
    eyem = malloc(sizeof(double)*m*m);
    z = malloc(sizeof(double)*nz);
    x = malloc(sizeof(double)*n);
    u = malloc(sizeof(double)*m);
    y1 = malloc(sizeof(double)*n);
    y2 = malloc(sizeof(double)*n);
    zmax = malloc(sizeof(double)*nz);
    zmin = malloc(sizeof(double)*nz);
    K = malloc(sizeof(double)*n*m);
    Rtilde = malloc(sizeof(double)*m*m);
    Rlower = malloc(sizeof(double)*m*m);
    tempnm = malloc(sizeof(double)*n*m);
    xterm = malloc(sizeof(double)*n);
    uterm = malloc(sizeof(double)*m);
    umaxp = malloc(sizeof(double)*m);
    uminp = malloc(sizeof(double)*m);
    xmaxp = malloc(sizeof(double)*n);
    xminp = malloc(sizeof(double)*n);
    zmaxp = malloc(sizeof(double)*nz);
    zminp = malloc(sizeof(double)*nz);
    
    /* eyen, eyem */
    for (i = 0; i < n*n; i++) eyen[i] = 0; // Loop from i = 0 to n*n and initialise eyen to {0}
    dptr = eyen; //  alloc eyen size to dptr
    for (i = 0; i < n; i++) // loop from i = 0 to n
    {
        *dptr = 1;
        dptr = dptr+n+1;
    }

    for (i = 0; i < m*m; i++) eyem[i] = 0; // Loop from i = 0 to n*n and initialise eyen to {0}
    dptr = eyem;
    for (i = 0; i < m; i++)
    {
        *(dptr+i*m+i) = 1;
    }

    for (i = 0; i < n; i++) x[i] = x0[i];
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
    for (i = 0; i < nz; i++) z[i] = z[i] > zmaxp[i] ? zmaxp[i] : z[i];
    for (i = 0; i < nz; i++) z[i] = z[i] < zminp[i] ? zminp[i] : z[i];

    /* Rtilde */
    for (i = 0; i < m*m; i++) Rtilde[i] = R[i];
    cblas_dgemm(CblasRowMajor,CblasNoTrans,CblasNoTrans,n,m,n,fone,Qf,n,B,m,fzero,tempnm,m); // Computes a real, double precision, matrix-matrix product with general matrices.
    cblas_dgemm(CblasRowMajor,CblasTrans,CblasNoTrans,m,m,n,fone,B,m,tempnm,m,fone,Rtilde,m); // Computes a real, double precision, matrix-matrix product with general matrices.
    
    /* K */
    cblas_dgemm(CblasRowMajor,CblasTrans,CblasNoTrans,m,n,n,fone,B,n,Qf,n,fzero,tempnm,n); // Computes a real, double precision, matrix-matrix product with general matrices.
    cblas_dgemm(CblasRowMajor,CblasNoTrans,CblasNoTrans,m,n,n,fone,tempnm,n,A,n,fzero,K,n); // Computes a real, double precision, matrix-matrix product with general matrices.
    for (i = 0; i < m*m; i++) Rlower[i] = Rtilde[i];
    dposv_("l",&m,&n,Rlower,&m,K,&m,&info); //Computes the solution to the system of linear equations with a symmetric or Hermitian positive-definite coefficient matrix A and multiple right-hand sides.
    for (i = 0; i < n*m; i++) K[i] = -K[i];

    /* uminp, umaxp, xminp, xmaxp */
    for (i = 0; i < m; i++) uminp[i] = umin[i] + 0.01*(umax[i]-umin[i]);
    for (i = 0; i < m; i++) umaxp[i] = umax[i] - 0.01*(umax[i]-umin[i]);
    for (i = 0; i < n; i++) xminp[i] = xmin[i] + 0.01*(xmax[i]-xmin[i]);
    for (i = 0; i < n; i++) xmaxp[i] = xmax[i] - 0.01*(xmax[i]-xmin[i]);

   // t1 = clock();
    for (i = 0; i < nsteps; i++)
    {
        fmpcsolve(A,B,At,Bt,eyen,eyem,Q,R,Qf,zmax,zmin,x,z,T,n,m,nz,niters,kappa);
        
        /* save x and u to Xhist and Uhist */
        dptr = Xhist+i*n; dptr1 = x;
        for (j = 0; j < n; j++)
        {
            *dptr = *dptr1;
            dptr++; dptr1++;
        }
        dptr = Uhist+i*m; dptr1 = u; dptr2 = z;
        for (j = 0; j < m; j++)
        {
            *dptr = *dptr2;
            *dptr1 = *dptr2;
            dptr++; dptr1++; dptr2++;
        }

        /* compute x = A*x + B*u + w */
        cblas_dgemv(CblasRowMajor,CblasNoTrans,n,n,fone,A,n,x,ione,fzero,y1,ione);
        cblas_dgemv(CblasRowMajor,CblasNoTrans,n,m,fone,B,m,u,ione,fzero,y2,ione);
        cblas_daxpy(n,fone,y2,ione,y1,ione);
        cblas_daxpy(n,fone,w+n*i,ione,y1,ione);
        dptr = x; dptr1 = y1;
        for (j = 0; j < n; j++)
        {
            *dptr = *dptr1;
            dptr++; dptr1++;
        }

        /* shift z for warm start and compute terminal controls*/
        dptr = z;
        for (j = 0; j < nz-n-m; j++)
        {
            *dptr = *(dptr+n+m);
            dptr++;
        }
        cblas_dgemv(CblasRowMajor,CblasNoTrans,m,n,fone,K,n,z+nz-2*n-m,ione,fzero,uterm,ione);
        cblas_dgemv(CblasRowMajor,CblasNoTrans,n,n,fone,A,n,z+nz-2*n-m,ione,fzero,xterm,ione);
        cblas_dgemv(CblasRowMajor,CblasNoTrans,n,m,fone,B,m,u,ione,fzero,y2,ione);
        cblas_daxpy(n,fone,y2,ione,xterm,ione);
        for (j = 0; j < m; j++) uterm[j] = uterm[j] > umaxp[j] ? umaxp[j] : uterm[j];
        for (j = 0; j < m; j++) uterm[j] = uterm[j] < uminp[j] ? uminp[j] : uterm[j];
        for (j = 0; j < n; j++) xterm[j] = xterm[j] > xmaxp[j] ? xmaxp[j] : xterm[j];
        for (j = 0; j < n; j++) xterm[j] = xterm[j] < xminp[j] ? xminp[j] : xterm[j];

        for (j = 0; j < m; j++) z[nz-n-m+j] = uterm[j];
        for (j = 0; j < n; j++) z[nz-n+j] = xterm[j];
    }

    // t2 = clock();
    //*telapsed = (double)(t2-t1)/(CLOCKS_PER_SEC);
    return 0;
    
    
    
    
   
    
    
     /* for (i = 0; i < nsteps; i++)
     {
    fmpcsolve(A,B,At,Bt,eyen,eyem,Q,R,QF,zmax,zmin,x,z,T,n,m,nz,niters,kappa);
    
     }
   A = mxGetPr(mxGetField(prhs[0],0,"A"));
       B = mxGetPr(mxGetField(prhs[0],0,"B"));
       Q = mxGetPr(mxGetField(prhs[0],0,"Q"));
       R = mxGetPr(mxGetField(prhs[0],0,"R"));
       Qf = mxGetPr(mxGetField(prhs[1],0,"Qf"));
       xmax = mxGetPr(mxGetField(prhs[0],0,"xmax"));
       xmin = mxGetPr(mxGetField(prhs[0],0,"xmin"));
       umax = mxGetPr(mxGetField(prhs[0],0,"umax"));
       umin = mxGetPr(mxGetField(prhs[0],0,"umin"));
       n = (int)mxGetScalar(mxGetField(prhs[0],0,"n"));
       m = (int)mxGetScalar(mxGetField(prhs[0],0,"m"));
       T = (int)mxGetScalar(mxGetField(prhs[1],0,"T"));
       kappa = (double)mxGetScalar(mxGetField(prhs[1],0,"kappa"));
       niters = (int)mxGetScalar(mxGetField(prhs[1],0,"niters"));
       quiet = (int)mxGetScalar(mxGetField(prhs[1],0,"quiet"));
       nsteps = (int)mxGetScalar(mxGetField(prhs[1],0,"nsteps"));

    */


}
