#include "customcode_iVOBNwHUXJzsSWjouXtyaE.h"
#ifdef __cplusplus
extern "C" {
#endif


/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
DLL_EXPORT_CC extern const char_T *get_dll_checksum_iVOBNwHUXJzsSWjouXtyaE(void);
DLL_EXPORT_CC extern void rdrp_iVOBNwHUXJzsSWjouXtyaE(real_T *A, real_T *B, real_T *Q, real_T *R, real_T *Qf, real_T *z, real_T *nu, real_T *gf, real_T *gp, real_T *b, const int64_T T, const int64_T n, const int64_T m, const int64_T nz, real_T kappa, real_T *rd, real_T *rp, real_T *Ctnu);
DLL_EXPORT_CC extern void dnudz_iVOBNwHUXJzsSWjouXtyaE(real_T *A, real_T *B, real_T *At, real_T *Bt, real_T *eyen, real_T *eyem, real_T *Q, real_T *R, real_T *Qf, real_T *hp, real_T *rd, real_T *rp, const int64_T T, const int64_T n, const int64_T m, const int64_T nz, real_T kappa, real_T *dnu, real_T *dz);
DLL_EXPORT_CC extern void resdresp_iVOBNwHUXJzsSWjouXtyaE(real_T *rd, real_T *rp, const int64_T T, const int64_T n, const int64_T nz, real_T *resd, real_T *resp, real_T *res);
DLL_EXPORT_CC extern void gfgphp_iVOBNwHUXJzsSWjouXtyaE(real_T *Q, real_T *R, real_T *Qf, real_T *zmax, real_T *zmin, real_T *z, const int64_T T, const int64_T n, const int64_T m, const int64_T nz, real_T *gf, real_T *gp, real_T *hp);
DLL_EXPORT_CC extern void fmpcsolve_iVOBNwHUXJzsSWjouXtyaE(const real_T *A, const real_T *B, const real_T *At, const real_T *Bt, const real_T *eyen, const real_T *eyem, const real_T *Q, const real_T *R, const real_T *Qf, const real_T *zmax, const real_T *zmin, const real_T *x, const real_T *z0, const int64_T T, const int64_T n, const int64_T m, const int64_T nz, const int64_T niters, const real_T kappa, real_T *z, real_T *U, real_T *X);

/* Function Definitions */
DLL_EXPORT_CC const uint8_T *get_checksum_source_info(int32_T *size);
#ifdef __cplusplus
}
#endif

