/* fmpc.h */

#ifndef MWSIZE_MAX
#define mwIndex int 
#define mwSignedIndex const int
#define mwSize int
#endif

#ifndef _FMPC_H
#define _FMPC_H

double mpc(mwSignedIndex T, mwSignedIndex m, mwSignedIndex n, mwSignedIndex niters, double kappa, double *A, double *B, double *Q, double *Qf, double *R, double *xmin, double *xmax, double *umin, double *umax, double *X0, double *U0, double *x0, double *U, double *X);

extern void fmpcsolve(double *A, double *B, double *At, double *Bt, double *eyen, double *eyem, double *Q, double *R, double *Qf, double *zmax, double *zmin, double *x, double *z0, mwSignedIndex T, mwSignedIndex n, mwSignedIndex m, mwSignedIndex nz, mwSignedIndex niters, double kappa);

extern void gfgphp(double *Q, double *R, double *Qf, double *zmax, double *zmin, double *z, mwSignedIndex T, mwSignedIndex n, mwSignedIndex m, mwSignedIndex nz, double *gf, double *gp, double *hp);

extern void rdrp(double *A, double *B, double *Q, double *R, double *Qf, double *z, double *nu, double *gf, double *gp, double *b, mwSignedIndex T, mwSignedIndex n, mwSignedIndex m, mwSignedIndex nz, double kappa, double *rd, double *rp, double *Ctnu);

extern void resdresp(double *rd, double *rp, mwSignedIndex T, mwSignedIndex n, mwSignedIndex nz, double *resd, double *resp, double *res);
        
extern void dnudz(double *A, double *B, double *At, double *Bt, double *eyen, double *eyem, double *Q, double *R, double *Qf, double *hp, double *rd, double *rp, mwSignedIndex T, mwSignedIndex n, mwSignedIndex m, mwSignedIndex nz, double kappa, double *dnu, double *dz);

#endif /* fmpc_h */
