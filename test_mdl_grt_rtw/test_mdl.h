/*
 * test_mdl.h
 *
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * Code generation for model "test_mdl".
 *
 * Model version              : 1.11
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed May  6 11:39:01 2020
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_test_mdl_h_
#define RTW_HEADER_test_mdl_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef test_mdl_COMMON_INCLUDES_
# define test_mdl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* test_mdl_COMMON_INCLUDES_ */

#include "test_mdl_types.h"

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

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T A;                            /* '<S1>/Data Store Memory' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */
} DW_test_mdl_T;

/* Parameters (default storage) */
struct P_test_mdl_T_ {
  int16_T T;                           /* Variable: T
                                        * Referenced by:
                                        *   '<S1>/Constant'
                                        *   '<S1>/C Caller'
                                        */
  real_T Constant17_Value;             /* Expression: 1
                                        * Referenced by: '<S1>/Constant17'
                                        */
  real_T Constant4_Value;              /* Expression: 0.01
                                        * Referenced by: '<S1>/Constant4'
                                        */
  real_T Constant5_Value[144];         /* Expression: [0.762721047593857	0.114882546593898	0.00247654474066823	2.09380749408769e-05	9.42229417535085e-08	2.63060135287668e-10	0.459613939727602	0.0198131117128797	0.000251260056028671	1.50757506761672e-06	5.26123024735364e-09	1.19993006342024e-11
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
  real_T Constant6_Value[36];          /* Expression: [0.117380123896011	2.11270479473799e-05	9.47500646873726e-08
                                          -0.117401251208020	0.00251870461362123	2.11273120101163e-05
                                          -0.00249767205267819	0.119898828510133	0.00251870461462378
                                          -2.10328255067807e-05	5.01412713432847e-13	0.119898828774196
                                          -9.44870044752643e-08	-0.119898828246070	9.47505659474636e-08
                                          -2.63561428521144e-10	-0.00251860986355638	-0.119877701198123
                                          0.439800828014722	0.000251254794798423	1.50756306831608e-06
                                          -0.440052088070751	0.0198131117008803	0.000251260056028671
                                          -0.0195633592319186	0.459613939727602	0.0198131117248790
                                          -0.000249757742191302	1.19993147362774e-11	0.459613944988832
                                          -1.50232583667001e-06	-0.459613934466372	1.50757506762675e-06
                                          -5.24923094671973e-09	-0.0198116041378120	-0.459362679671573]
                                        * Referenced by: '<S1>/Constant6'
                                        */
  real_T Constant7_Value[144];         /* Expression: [1	0	0	0	0	0	0	0	0	0	0	0
                                          0	1	0	0	0	0	0	0	0	0	0	0
                                          0	0	1	0	0	0	0	0	0	0	0	0
                                          0	0	0	1	0	0	0	0	0	0	0	0
                                          0	0	0	0	1	0	0	0	0	0	0	0
                                          0	0	0	0	0	1	0	0	0	0	0	0
                                          0	0	0	0	0	0	1	0	0	0	0	0
                                          0	0	0	0	0	0	0	1	0	0	0	0
                                          0	0	0	0	0	0	0	0	1	0	0	0
                                          0	0	0	0	0	0	0	0	0	1	0	0
                                          0	0	0	0	0	0	0	0	0	0	1	0
                                          0	0	0	0	0	0	0	0	0	0	0	1]
                                        * Referenced by: '<S1>/Constant7'
                                        */
  real_T Constant8_Value[144];         /* Expression: [1	0	0	0	0	0	0	0	0	0	0	0
                                          0	1	0	0	0	0	0	0	0	0	0	0
                                          0	0	1	0	0	0	0	0	0	0	0	0
                                          0	0	0	1	0	0	0	0	0	0	0	0
                                          0	0	0	0	1	0	0	0	0	0	0	0
                                          0	0	0	0	0	1	0	0	0	0	0	0
                                          0	0	0	0	0	0	1	0	0	0	0	0
                                          0	0	0	0	0	0	0	1	0	0	0	0
                                          0	0	0	0	0	0	0	0	1	0	0	0
                                          0	0	0	0	0	0	0	0	0	1	0	0
                                          0	0	0	0	0	0	0	0	0	0	1	0
                                          0	0	0	0	0	0	0	0	0	0	0	1]
                                        * Referenced by: '<S1>/Constant8'
                                        */
  real_T Constant9_Value[9];           /* Expression: [1	0	0
                                          0	1	0
                                          0	0	1]
                                        * Referenced by: '<S1>/Constant9'
                                        */
  real_T Constant10_Value[12];         /* Expression: [-4
                                          -4
                                          -4
                                          -4
                                          -4
                                          -4
                                          -4
                                          -4
                                          -4
                                          -4
                                          -4
                                          -4]
                                        * Referenced by: '<S1>/Constant10'
                                        */
  real_T Constant11_Value[12];         /* Expression: [4
                                          4
                                          4
                                          4
                                          4
                                          4
                                          4
                                          4
                                          4
                                          4
                                          4
                                          4]
                                        * Referenced by: '<S1>/Constant11'
                                        */
  real_T Constant12_Value[3];          /* Expression: [-0.500000000000000
                                          -0.500000000000000
                                          -0.500000000000000]
                                        * Referenced by: '<S1>/Constant12'
                                        */
  real_T Constant13_Value[3];          /* Expression: [0.500000000000000
                                          0.500000000000000
                                          0.500000000000000]
                                        * Referenced by: '<S1>/Constant13'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Constant14'
                                        */
  real_T Constant15_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Constant15'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Constant16'
                                        */
  real_T DataStoreMemory_InitialValue; /* Expression: 0
                                        * Referenced by: '<S1>/Data Store Memory'
                                        */
  int16_T Constant1_Value;             /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S1>/Constant1'
                                        */
  int16_T Constant2_Value;             /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S1>/Constant2'
                                        */
  int16_T Constant3_Value;             /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S1>/Constant3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_test_mdl_T {
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
extern P_test_mdl_T test_mdl_P;

/* Block states (default storage) */
extern DW_test_mdl_T test_mdl_DW;

/* Model entry point functions */
extern void test_mdl_initialize(void);
extern void test_mdl_step(void);
extern void test_mdl_terminate(void);

/* Real-time Model object */
extern RT_MODEL_test_mdl_T *const test_mdl_M;

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
 * '<Root>' : 'test_mdl'
 * '<S1>'   : 'test_mdl/Subsystem'
 */
#endif                                 /* RTW_HEADER_test_mdl_h_ */
