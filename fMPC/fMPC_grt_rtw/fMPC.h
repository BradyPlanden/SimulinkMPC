/*
 * fMPC.h
 *
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * Code generation for model "fMPC".
 *
 * Model version              : 1.51
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Fri May 22 19:27:21 2020
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_fMPC_h_
#define RTW_HEADER_fMPC_h_
#include <string.h>
#include <float.h>
#include <stddef.h>
#ifndef fMPC_COMMON_INCLUDES_
# define fMPC_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* fMPC_COMMON_INCLUDES_ */

#include "fMPC_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

/* user code (top of header file) */
#include "f_mpc.h"

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Delay_DSTATE[12];             /* '<Root>/Delay' */
  real_T Delay1_DSTATE[150];           /* '<Root>/Delay1' */
} DW_fMPC_T;

/* Parameters (default storage) */
struct P_fMPC_T_ {
  real_T A[144];                       /* Variable: A
                                        * Referenced by:
                                        *   '<Root>/Plant_Model'
                                        *   '<Root>/C Caller'
                                        */
  real_T At[144];                      /* Variable: At
                                        * Referenced by: '<Root>/C Caller'
                                        */
  real_T B[36];                        /* Variable: B
                                        * Referenced by:
                                        *   '<Root>/Plant_Model'
                                        *   '<Root>/C Caller'
                                        */
  real_T Bt[36];                       /* Variable: Bt
                                        * Referenced by: '<Root>/C Caller'
                                        */
  real_T Q[144];                       /* Variable: Q
                                        * Referenced by: '<Root>/C Caller'
                                        */
  real_T Qf[144];                      /* Variable: Qf
                                        * Referenced by: '<Root>/C Caller'
                                        */
  real_T R[9];                         /* Variable: R
                                        * Referenced by: '<Root>/C Caller'
                                        */
  real_T eyem[9];                      /* Variable: eyem
                                        * Referenced by: '<Root>/C Caller'
                                        */
  real_T eyen[144];                    /* Variable: eyen
                                        * Referenced by: '<Root>/C Caller'
                                        */
  real_T kappa;                        /* Variable: kappa
                                        * Referenced by: '<Root>/C Caller'
                                        */
  real_T nm;                           /* Variable: nm
                                        * Referenced by:
                                        *   '<Root>/Plant_Model'
                                        *   '<Root>/C Caller'
                                        */
  real_T x0[12];                       /* Variable: x0
                                        * Referenced by: '<Root>/Delay'
                                        */
  real_T z0[150];                      /* Variable: z0
                                        * Referenced by: '<Root>/Delay1'
                                        */
  real_T zmax[150];                    /* Variable: zmax
                                        * Referenced by: '<Root>/C Caller'
                                        */
  real_T zmin[150];                    /* Variable: zmin
                                        * Referenced by: '<Root>/C Caller'
                                        */
  int32_T T;                           /* Variable: T
                                        * Referenced by:
                                        *   '<Root>/Plant_Model'
                                        *   '<Root>/C Caller'
                                        */
  int32_T m;                           /* Variable: m
                                        * Referenced by: '<Root>/C Caller'
                                        */
  int32_T n;                           /* Variable: n
                                        * Referenced by: '<Root>/C Caller'
                                        */
  int32_T niters;                      /* Variable: niters
                                        * Referenced by: '<Root>/C Caller'
                                        */
  int32_T nz;                          /* Variable: nz
                                        * Referenced by: '<Root>/C Caller'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<Root>/Delay'
                                        */
  uint32_T Delay1_DelayLength;         /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<Root>/Delay1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_fMPC_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_fMPC_T fMPC_P;

/* Block states (default storage) */
extern DW_fMPC_T fMPC_DW;

/* Model entry point functions */
extern void fMPC_initialize(void);
extern void fMPC_step(void);
extern void fMPC_terminate(void);

/* Real-time Model object */
extern RT_MODEL_fMPC_T *const fMPC_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'fMPC'
 * '<S1>'   : 'fMPC/Plant_Model'
 */
#endif                                 /* RTW_HEADER_fMPC_h_ */
