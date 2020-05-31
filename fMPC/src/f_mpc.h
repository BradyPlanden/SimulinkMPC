/* f_mpc.h */

#ifndef _F_MPC_H
#define _F_MPC_H

extern void fmpcsolve(const double *A, const double *B,  const double *At,  const double *Bt,  const double *eyen,  const double *eyem,  const double *Q,  const double *R,  const double *Qf,  double *zmax,  double *zmin,  double *x,  double *z0, int T,  int n,  int m,  int nz,  int niters, double kappa, double *z, double *U, double *X);

extern void gfgphp(double *Q, double *R, double *Qf, double *zmax, double *zmin, double *z, int T,  int n,  int m,  int nz, double *gf, double *gp, double *hp);

extern void rdrp(double *A, double *B, double *Q, double *R, double *Qf, double *z, double *nu, double *gf, double *gp, double *b, int T,  int n,  int m,  int nz, double kappa, double *rd, double *rp, double *Ctnu);

extern void resdresp(double *rd, double *rp, int T,  int n,  int nz, double *resd, double *resp, double *res);
        
extern void dnudz(double *A, double *B, double *At, double *Bt, double *eyen, double *eyem, double *Q, double *R, double *Qf, double *hp, double *rd, double *rp, int T,  int n,  int m,  int nz, double kappa, double *dnu, double *dz);

#endif /* f_mpc_h */
