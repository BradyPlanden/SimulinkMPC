/* f_mpc.h */

#ifndef _PTRDIFF_T
#define _PTRDIFF_T
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;
#endif

#ifndef _F_MPC_H
#define _F_MPC_H

extern void fmpcsolve(const double *A, const double *B, const double *At, const double *Bt, const double *eyen, const double *eyem, const double *Q, const double *R, const double *Qf, const double *zmax, const double *zmin, const double *x, const double *z0, int T, ptrdiff_t n, ptrdiff_t m, ptrdiff_t nz, ptrdiff_t niters, const double kappa, double *z, double *U, double *X);

extern void gfgphp(double *Q, double *R, double *Qf, double *zmax, double *zmin, double *z, int T, ptrdiff_t n, ptrdiff_t m, ptrdiff_t nz, double *gf, double *gp, double *hp);

extern void rdrp(double *A, double *B, double *Q, double *R, double *Qf, double *z, double *nu, double *gf, double *gp, double *b, int T, ptrdiff_t n, ptrdiff_t m, ptrdiff_t nz, double kappa, double *rd, double *rp, double *Ctnu);

extern void resdresp(double *rd, double *rp, int T, ptrdiff_t n, ptrdiff_t nz, double *resd, double *resp, double *res);
        
extern void dnudz(double *A, double *B, double *At, double *Bt, double *eyen, double *eyem, double *Q, double *R, double *Qf, double *hp, double *rd, double *rp, int T, ptrdiff_t n, ptrdiff_t m, ptrdiff_t nz, double kappa, double *dnu, double *dz);

#endif /* f_mpc_h */
