/*
 * dummy.c
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

#include "dummy.h"
#include "dummy_private.h"

/* Block states (default storage) */
DW_dummy_T dummy_DW;

/* Real-time model */
RT_MODEL_dummy_T dummy_M_;
RT_MODEL_dummy_T *const dummy_M = &dummy_M_;

/* Model step function */
void dummy_step(void)
{
  /* local block i/o variables */
  real_T rtb_CCaller;

  /* CCaller: '<S1>/C Caller' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant5'
   */
  rtb_CCaller = dummy2(dummy_ConstP.Constant5_Value,
                       dummy_ConstP.Constant1_Value, 10, 12);

  /* Matfile logging */
  rt_UpdateTXYLogVars(dummy_M->rtwLogInfo, (&dummy_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(dummy_M)!=-1) &&
        !((rtmGetTFinal(dummy_M)-dummy_M->Timing.taskTime0) >
          dummy_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(dummy_M, "Simulation finished");
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
  if (!(++dummy_M->Timing.clockTick0)) {
    ++dummy_M->Timing.clockTickH0;
  }

  dummy_M->Timing.taskTime0 = dummy_M->Timing.clockTick0 *
    dummy_M->Timing.stepSize0 + dummy_M->Timing.clockTickH0 *
    dummy_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void dummy_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)dummy_M, 0,
                sizeof(RT_MODEL_dummy_T));
  rtmSetTFinal(dummy_M, 20.0);
  dummy_M->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    dummy_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(dummy_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(dummy_M->rtwLogInfo, (NULL));
    rtliSetLogT(dummy_M->rtwLogInfo, "tout");
    rtliSetLogX(dummy_M->rtwLogInfo, "");
    rtliSetLogXFinal(dummy_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(dummy_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(dummy_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(dummy_M->rtwLogInfo, 0);
    rtliSetLogDecimation(dummy_M->rtwLogInfo, 1);
    rtliSetLogY(dummy_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(dummy_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(dummy_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&dummy_DW, 0,
                sizeof(DW_dummy_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(dummy_M->rtwLogInfo, 0.0, rtmGetTFinal
    (dummy_M), dummy_M->Timing.stepSize0, (&rtmGetErrorStatus(dummy_M)));
}

/* Model terminate function */
void dummy_terminate(void)
{
  /* (no terminate code required) */
}
