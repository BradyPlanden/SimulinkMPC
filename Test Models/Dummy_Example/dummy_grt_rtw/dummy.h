/*
 * dummy.h
 *
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * Code generation for model "dummy".
 *
 * Model version              : 1.48
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Tue May 12 17:22:49 2020
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_dummy_h_
#define RTW_HEADER_dummy_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef dummy_COMMON_INCLUDES_
# define dummy_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* dummy_COMMON_INCLUDES_ */

#include "dummy_types.h"

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
#include "dummy.h"

/* Block states (default storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S1>/Scope' */
} DW_dummy_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: [0.762721047593857	0.114882546593898	0.00247654474066823	2.09380749408769e-05	9.42229417535085e-08	2.63060135287668e-10	0.459613939727602	0.0198131117128797	0.000251260056028671	1.50757506761672e-06	5.26123024735364e-09	1.19993006342024e-11
     0.114882546593898	0.765197592334525	0.114903484668839	0.00247663896360998	2.09383380010122e-05	9.42229417535096e-08	0.0198131117128796	0.459865199783630	0.0198146192879473	0.000251265317258919	1.50758706691736e-06	5.26123024735407e-09
     0.00247654474066823	0.114903484668839	0.765197686557466	0.114903484931899	0.00247663896360999	2.09380749408770e-05	0.000251260056028671	0.0198146192879473	0.459865205044861	0.0198146192999466	0.000251265317258919	1.50757506761673e-06
     2.09380749408769e-05	0.00247663896360998	0.114903484931899	0.765197686557467	0.114903484668839	0.00247654474066823	1.50757506761672e-06	0.000251265317258918	0.0198146192999466	0.459865205044861	0.0198146192879473	0.000251260056028672
     9.42229417535087e-08	2.09383380010122e-05	0.00247663896360998	0.114903484668839	0.765197592334525	0.114882546593898	5.26123024735378e-09	1.50758706691736e-06	0.000251265317258919	0.0198146192879473	0.459865199783631	0.0198131117128796
     2.63060135287738e-10	9.42229417535093e-08	2.09380749408769e-05	0.00247654474066823	0.114882546593898	0.762721047593857	1.19993006342118e-11	5.26123024735394e-09	1.50757506761673e-06	0.000251260056028671	0.0198131117128797	0.459613939727602
     -0.899414767742325	0.420238976357871	0.0193120991758899	0.000248250167123685	1.49706460642265e-06	5.23723164608530e-09	0.762721047593857	0.114882546593898	0.00247654474066823	2.09380749408769e-05	9.42229417535083e-08	2.63060135287700e-10
     0.420238976357871	-0.880102668566434	0.420487226524995	0.0193135962404963	0.000248255404355332	1.49706460642266e-06	0.114882546593898	0.765197592334525	0.114903484668839	0.00247663896360998	2.09383380010123e-05	9.42229417535099e-08
     0.0193120991758899	0.420487226524995	-0.880101171501828	0.420487231762227	0.0193135962404964	0.000248250167123686	0.00247654474066823	0.114903484668839	0.765197686557467	0.114903484931899	0.00247663896360999	2.09380749408770e-05
     0.000248250167123685	0.0193135962404963	0.420487231762227	-0.880101171501828	0.420487226524995	0.0193120991758899	2.09380749408769e-05	0.00247663896360998	0.114903484931899	0.765197686557467	0.114903484668839	0.00247654474066823
     1.49706460642265e-06	0.000248255404355331	0.0193135962404963	0.420487226524995	-0.880102668566434	0.420238976357871	9.42229417535088e-08	2.09383380010122e-05	0.00247663896360998	0.114903484668839	0.765197592334525	0.114882546593898
     5.23723164608547e-09	1.49706460642265e-06	0.000248250167123685	0.0193120991758899	0.420238976357872	-0.899414767742325	2.63060135287715e-10	9.42229417535098e-08	2.09380749408769e-05	0.00247654474066823	0.114882546593898	0.762721047593857]
   * Referenced by: '<S1>/Constant5'
   */
  real_T Constant5_Value[144];

  /* Expression: xmax
   * Referenced by: '<S1>/Constant1'
   */
  real_T Constant1_Value[12];
} ConstP_dummy_T;

/* Real-time Model Data Structure */
struct tag_RTM_dummy_T {
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

/* Block states (default storage) */
extern DW_dummy_T dummy_DW;

/* Constant parameters (default storage) */
extern const ConstP_dummy_T dummy_ConstP;

/* Model entry point functions */
extern void dummy_initialize(void);
extern void dummy_step(void);
extern void dummy_terminate(void);

/* Real-time Model object */
extern RT_MODEL_dummy_T *const dummy_M;

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
 * '<Root>' : 'dummy'
 * '<S1>'   : 'dummy/Subsystem'
 */
#endif                                 /* RTW_HEADER_dummy_h_ */
