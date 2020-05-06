/*
 * test_mdl.c
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

#include "test_mdl.h"
#include "test_mdl_private.h"

/* Block states (default storage) */
DW_test_mdl_T test_mdl_DW;

/* Real-time model */
RT_MODEL_test_mdl_T test_mdl_M_;
RT_MODEL_test_mdl_T *const test_mdl_M = &test_mdl_M_;

/* Model step function */
void test_mdl_step(void)
{
  /* local block i/o variables */
  real_T rtb_CCaller_o1[10];
  real_T rtb_CCaller_o2[10];

  /* DataStoreWrite: '<S1>/Data Store Write' incorporates:
   *  Constant: '<S1>/Constant17'
   */
  test_mdl_DW.A = test_mdl_P.Constant17_Value;

  /* CCaller: '<S1>/C Caller' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant10'
   *  Constant: '<S1>/Constant11'
   *  Constant: '<S1>/Constant12'
   *  Constant: '<S1>/Constant13'
   *  Constant: '<S1>/Constant14'
   *  Constant: '<S1>/Constant15'
   *  Constant: '<S1>/Constant16'
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  Constant: '<S1>/Constant4'
   *  Constant: '<S1>/Constant5'
   *  Constant: '<S1>/Constant6'
   *  Constant: '<S1>/Constant7'
   *  Constant: '<S1>/Constant8'
   *  Constant: '<S1>/Constant9'
   */
  mpc(test_mdl_P.T, test_mdl_P.Constant1_Value, test_mdl_P.Constant2_Value,
      test_mdl_P.Constant3_Value, test_mdl_P.Constant4_Value,
      test_mdl_P.Constant5_Value, test_mdl_P.Constant6_Value,
      test_mdl_P.Constant7_Value, test_mdl_P.Constant8_Value,
      test_mdl_P.Constant9_Value, test_mdl_P.Constant10_Value,
      test_mdl_P.Constant11_Value, test_mdl_P.Constant12_Value,
      test_mdl_P.Constant13_Value, &test_mdl_P.Constant14_Value,
      &test_mdl_P.Constant15_Value, &test_mdl_P.Constant16_Value, rtb_CCaller_o1,
      rtb_CCaller_o2);

  /* Matfile logging */
  rt_UpdateTXYLogVars(test_mdl_M->rtwLogInfo, (&test_mdl_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(test_mdl_M)!=-1) &&
        !((rtmGetTFinal(test_mdl_M)-test_mdl_M->Timing.taskTime0) >
          test_mdl_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(test_mdl_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++test_mdl_M->Timing.clockTick0)) {
    ++test_mdl_M->Timing.clockTickH0;
  }

  test_mdl_M->Timing.taskTime0 = test_mdl_M->Timing.clockTick0 *
    test_mdl_M->Timing.stepSize0 + test_mdl_M->Timing.clockTickH0 *
    test_mdl_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void test_mdl_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)test_mdl_M, 0,
                sizeof(RT_MODEL_test_mdl_T));
  rtmSetTFinal(test_mdl_M, 10.0);
  test_mdl_M->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    test_mdl_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(test_mdl_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(test_mdl_M->rtwLogInfo, (NULL));
    rtliSetLogT(test_mdl_M->rtwLogInfo, "tout");
    rtliSetLogX(test_mdl_M->rtwLogInfo, "");
    rtliSetLogXFinal(test_mdl_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(test_mdl_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(test_mdl_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(test_mdl_M->rtwLogInfo, 0);
    rtliSetLogDecimation(test_mdl_M->rtwLogInfo, 1);
    rtliSetLogY(test_mdl_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(test_mdl_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(test_mdl_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&test_mdl_DW, 0,
                sizeof(DW_test_mdl_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(test_mdl_M->rtwLogInfo, 0.0, rtmGetTFinal
    (test_mdl_M), test_mdl_M->Timing.stepSize0, (&rtmGetErrorStatus(test_mdl_M)));

  /* Start for DataStoreMemory: '<S1>/Data Store Memory' */
  test_mdl_DW.A = test_mdl_P.DataStoreMemory_InitialValue;
}

/* Model terminate function */
void test_mdl_terminate(void)
{
  /* (no terminate code required) */
}
