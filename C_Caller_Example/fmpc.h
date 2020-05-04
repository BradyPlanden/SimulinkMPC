/* fmpc.h */

#ifndef fmpc_h
#define fmpc_h

extern void mpc(int T, int m, int n, int niters, double kappa, double *A, double *B, double *Q, double *Qf, double *R, double *xmin, double *xmax, double *umin, double *umax, double *X0, double *U0, double *x0, double *U, double *X);

extern void fmpcsolve(double *A, double *B, double *At, double *Bt, double *eyen, double *eyem, double *Q, double *R, double *Qf, double *zmax, double *zmin, double *x, double *z, int T, int n, int m, int nz, int niters, double kappa);

extern void gfgphp(double *Q, double *R, double *Qf, double *zmax, double *zmin, double *z, int T, int n, int m, int nz, double *gf, double *gp, double *hp);

extern void rdrp(double *A, double *B, double *Q, double *R, double *Qf, double *z, double *nu, double *gf, double *gp, double *b, int T, int n, int m, int nz, double kappa, double *rd, double *rp, double *Ctnu);

extern void resdresp(double *rd, double *rp, int T, int n, int nz, double *resd, double *resp, double *res);
        
extern void dnudz(double *A, double *B, double *At, double *Bt, double *eyen, double *eyem, double *Q, double *R, double *Qf, double *hp, double *rd, double *rp, int T, int n, int m, int nz, double kappa, double *dnu, double *dz);

#endif /* fmpc_h */
