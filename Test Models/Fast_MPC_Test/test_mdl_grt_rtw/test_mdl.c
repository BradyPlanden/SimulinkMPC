/*
 * test_mdl.c
 *
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * Code generation for model "test_mdl".
 *
 * Model version              : 1.40
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Tue May 12 17:24:49 2020
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
  real_T rtb_CCaller_o1[30];
  real_T rtb_CCaller_o2[120];
  real_T rtb_y[3];
  real_T rtb_Add[12];
  real_T rtb_Delay1[120];
  real_T rtb_Delay2[30];
  real_T tmp[12];
  int32_T i;
  real_T tmp_0;
  int32_T Delay2_DSTATE_tmp;

  /* DataStoreWrite: '<S1>/Data Store Write' incorporates:
   *  Constant: '<S1>/Constant17'
   */
  test_mdl_DW.A = 1.0;

  /* Delay: '<S1>/Delay1' */
  memcpy(&rtb_Delay1[0], &test_mdl_DW.Delay1_DSTATE[0], 120U * sizeof(real_T));

  /* Delay: '<S1>/Delay2' */
  memcpy(&rtb_Delay2[0], &test_mdl_DW.Delay2_DSTATE[0], 30U * sizeof(real_T));

  /* Sum: '<S1>/Add' incorporates:
   *  Delay: '<S1>/Delay'
   */
  memcpy(&rtb_Add[0], &test_mdl_DW.Delay_DSTATE[0], 12U * sizeof(real_T));

  /* CCaller: '<S1>/C Caller' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant10'
   *  Constant: '<S1>/Constant11'
   *  Constant: '<S1>/Constant12'
   *  Constant: '<S1>/Constant13'
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  Constant: '<S1>/Constant4'
   *  Constant: '<S1>/Constant5'
   *  Constant: '<S1>/Constant6'
   *  Constant: '<S1>/Constant7'
   *  Constant: '<S1>/Constant8'
   *  Constant: '<S1>/Constant9'
   */
  mpc(10, 3, 12, 5, 0.01, test_mdl_ConstP.Constant5_Value,
      test_mdl_ConstP.Constant6_Value, test_mdl_ConstP.pooled2,
      test_mdl_ConstP.pooled2, test_mdl_ConstP.Constant9_Value,
      test_mdl_ConstP.Constant10_Value, test_mdl_ConstP.Constant11_Value,
      test_mdl_ConstP.Constant12_Value, test_mdl_ConstP.Constant13_Value,
      rtb_Delay1, rtb_Delay2, rtb_Add, rtb_CCaller_o1, rtb_CCaller_o2);

  /* MATLAB Function: '<S1>/MATLAB Function' */
  /* MATLAB Function 'Subsystem/MATLAB Function': '<S2>:1' */
  /* '<S2>:1:2' u = U(:,1); */
  rtb_y[0] = rtb_CCaller_o1[0];
  rtb_y[1] = rtb_CCaller_o1[1];
  rtb_y[2] = rtb_CCaller_o1[2];

  /* '<S2>:1:4' x1 =A*x+B*u; */
  for (i = 0; i < 12; i++) {
    tmp[i] = 0.0;
    for (Delay2_DSTATE_tmp = 0; Delay2_DSTATE_tmp < 12; Delay2_DSTATE_tmp++) {
      tmp_0 = test_mdl_ConstP.MATLABFunction_A[12 * Delay2_DSTATE_tmp + i] *
        rtb_Add[Delay2_DSTATE_tmp] + tmp[i];
      tmp[i] = tmp_0;
    }
  }

  for (i = 0; i < 12; i++) {
    /* Update for Delay: '<S1>/Delay' */
    test_mdl_DW.Delay_DSTATE[i] = tmp[i] + (test_mdl_ConstP.MATLABFunction_B[i +
      24] * rtb_y[2] + (test_mdl_ConstP.MATLABFunction_B[i + 12] * rtb_y[1] +
                        test_mdl_ConstP.MATLABFunction_B[i] * rtb_y[0]));
  }

  /* '<S2>:1:5' X1 = [X(:,2:10),zeros(12,1)]; */
  for (i = 0; i < 9; i++) {
    /* Update for Delay: '<S1>/Delay1' */
    memcpy(&test_mdl_DW.Delay1_DSTATE[i * 12], &rtb_CCaller_o2[i * 12 + 12], 12U
           * sizeof(real_T));
  }

  /* Update for Delay: '<S1>/Delay1' incorporates:
   *  MATLAB Function: '<S1>/MATLAB Function'
   */
  memset(&test_mdl_DW.Delay1_DSTATE[108], 0, 12U * sizeof(real_T));

  /* MATLAB Function: '<S1>/MATLAB Function' */
  /* '<S2>:1:6' U1 = [U(:,2:10),zeros(3,1)]; */
  for (i = 0; i < 9; i++) {
    Delay2_DSTATE_tmp = (1 + i) * 3;

    /* Update for Delay: '<S1>/Delay2' */
    test_mdl_DW.Delay2_DSTATE[3 * i] = rtb_CCaller_o1[Delay2_DSTATE_tmp];
    test_mdl_DW.Delay2_DSTATE[1 + 3 * i] = rtb_CCaller_o1[Delay2_DSTATE_tmp + 1];
    test_mdl_DW.Delay2_DSTATE[2 + 3 * i] = rtb_CCaller_o1[Delay2_DSTATE_tmp + 2];
  }

  /* Update for Delay: '<S1>/Delay2' incorporates:
   *  MATLAB Function: '<S1>/MATLAB Function'
   */
  test_mdl_DW.Delay2_DSTATE[27] = 0.0;
  test_mdl_DW.Delay2_DSTATE[28] = 0.0;
  test_mdl_DW.Delay2_DSTATE[29] = 0.0;

  /* Scope: '<S1>/Scope' */
  /* '<S2>:1:8' y = u; */

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
  rtmSetTFinal(test_mdl_M, 20.0);
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
  test_mdl_DW.A = 0.0;

  /* InitializeConditions for Delay: '<S1>/Delay1' */
  memset(&test_mdl_DW.Delay1_DSTATE[0], 0, 120U * sizeof(real_T));

  /* InitializeConditions for Delay: '<S1>/Delay2' */
  memset(&test_mdl_DW.Delay2_DSTATE[0], 0, 30U * sizeof(real_T));

  /* InitializeConditions for Delay: '<S1>/Delay' */
  memset(&test_mdl_DW.Delay_DSTATE[0], 0, 12U * sizeof(real_T));
}

/* Model terminate function */
void test_mdl_terminate(void)
{
  /* (no terminate code required) */
}
