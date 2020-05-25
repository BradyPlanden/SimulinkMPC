/*
 * dummy2.c
 *
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * Code generation for model "dummy2".
 *
 * Model version              : 1.53
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Mon May 25 11:09:01 2020
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "dummy2.h"
#include "dummy2_private.h"

/* Real-time model */
RT_MODEL_dummy2_T dummy2_M_;
RT_MODEL_dummy2_T *const dummy2_M = &dummy2_M_;

/* Model step function */
void dummy2_step(void)
{
  /* CCaller: '<S1>/C Caller' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  Constant: '<S1>/Constant5'
   */
  dummy2(dummy2_ConstP.Constant5_Value, dummy2_ConstP.Constant1_Value, 10, 12,
         dummy2_ConstP.Constant3_Value);

  /* Matfile logging */
  rt_UpdateTXYLogVars(dummy2_M->rtwLogInfo, (&dummy2_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(dummy2_M)!=-1) &&
        !((rtmGetTFinal(dummy2_M)-dummy2_M->Timing.taskTime0) >
          dummy2_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(dummy2_M, "Simulation finished");
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
  if (!(++dummy2_M->Timing.clockTick0)) {
    ++dummy2_M->Timing.clockTickH0;
  }

  dummy2_M->Timing.taskTime0 = dummy2_M->Timing.clockTick0 *
    dummy2_M->Timing.stepSize0 + dummy2_M->Timing.clockTickH0 *
    dummy2_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void dummy2_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)dummy2_M, 0,
                sizeof(RT_MODEL_dummy2_T));
  rtmSetTFinal(dummy2_M, 10.0);
  dummy2_M->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    dummy2_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(dummy2_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(dummy2_M->rtwLogInfo, (NULL));
    rtliSetLogT(dummy2_M->rtwLogInfo, "tout");
    rtliSetLogX(dummy2_M->rtwLogInfo, "");
    rtliSetLogXFinal(dummy2_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(dummy2_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(dummy2_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(dummy2_M->rtwLogInfo, 0);
    rtliSetLogDecimation(dummy2_M->rtwLogInfo, 1);
    rtliSetLogY(dummy2_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(dummy2_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(dummy2_M->rtwLogInfo, (NULL));
  }

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(dummy2_M->rtwLogInfo, 0.0, rtmGetTFinal
    (dummy2_M), dummy2_M->Timing.stepSize0, (&rtmGetErrorStatus(dummy2_M)));
}

/* Model terminate function */
void dummy2_terminate(void)
{
  /* (no terminate code required) */
}
