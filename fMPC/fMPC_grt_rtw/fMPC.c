/*
 * fMPC.c
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

#include "fMPC.h"
#include "fMPC_private.h"

/* Block states (default storage) */
DW_fMPC_T fMPC_DW;

/* Real-time model */
RT_MODEL_fMPC_T fMPC_M_;
RT_MODEL_fMPC_T *const fMPC_M = &fMPC_M_;

/* Model step function */
void fMPC_step(void)
{
  real_T rtb_Delay[12];
  real_T rtb_Delay1[150];
  real_T rtb_CCaller_o1[150];
  real_T rtb_CCaller_o2[30];
  real_T rtb_CCaller_o3[120];
  real_T tmp[12];
  int32_T i;
  int32_T i_0;
  real_T tmp_0;

  /* Delay: '<Root>/Delay' */
  memcpy(&rtb_Delay[0], &fMPC_DW.Delay_DSTATE[0], 12U * sizeof(real_T));

  /* Delay: '<Root>/Delay1' */
  memcpy(&rtb_Delay1[0], &fMPC_DW.Delay1_DSTATE[0], 150U * sizeof(real_T));

  /* CCaller: '<Root>/C Caller' */
  fmpcsolve(fMPC_P.A, fMPC_P.B, fMPC_P.At, fMPC_P.Bt, fMPC_P.eyen, fMPC_P.eyem,
            fMPC_P.Q, fMPC_P.R, fMPC_P.Qf, fMPC_P.zmax, fMPC_P.zmin, rtb_Delay,
            rtb_Delay1, fMPC_P.T, fMPC_P.n, fMPC_P.m, fMPC_P.nz, fMPC_P.niters,
            fMPC_P.kappa, rtb_CCaller_o1, rtb_CCaller_o2, rtb_CCaller_o3);

  /* MATLAB Function: '<Root>/Plant_Model' */
  for (i = 0; i < 12; i++) {
    rtb_Delay[i] = 0.0;
    for (i_0 = 0; i_0 < 12; i_0++) {
      tmp_0 = fMPC_P.A[12 * i_0 + i] * rtb_CCaller_o3[i_0] + rtb_Delay[i];
      rtb_Delay[i] = tmp_0;
    }
  }

  for (i = 0; i < 12; i++) {
    tmp_0 = fMPC_P.B[i] * rtb_CCaller_o2[0];
    tmp_0 += fMPC_P.B[i + 12] * rtb_CCaller_o2[1];
    tmp_0 += fMPC_P.B[i + 24] * rtb_CCaller_o2[2];
    tmp[i] = tmp_0;
  }

  for (i = 0; i < 12; i++) {
    /* Update for Delay: '<Root>/Delay' incorporates:
     *  MATLAB Function: '<Root>/Plant_Model'
     */
    fMPC_DW.Delay_DSTATE[i] = rtb_Delay[i] + tmp[i];
  }

  /* Update for Delay: '<Root>/Delay1' */
  memcpy(&fMPC_DW.Delay1_DSTATE[0], &rtb_CCaller_o1[0], 150U * sizeof(real_T));

  /* Matfile logging */
  rt_UpdateTXYLogVars(fMPC_M->rtwLogInfo, (&fMPC_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(fMPC_M)!=-1) &&
        !((rtmGetTFinal(fMPC_M)-fMPC_M->Timing.taskTime0) >
          fMPC_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(fMPC_M, "Simulation finished");
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
  if (!(++fMPC_M->Timing.clockTick0)) {
    ++fMPC_M->Timing.clockTickH0;
  }

  fMPC_M->Timing.taskTime0 = fMPC_M->Timing.clockTick0 *
    fMPC_M->Timing.stepSize0 + fMPC_M->Timing.clockTickH0 *
    fMPC_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void fMPC_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)fMPC_M, 0,
                sizeof(RT_MODEL_fMPC_T));
  rtmSetTFinal(fMPC_M, 10.0);
  fMPC_M->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    fMPC_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(fMPC_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(fMPC_M->rtwLogInfo, (NULL));
    rtliSetLogT(fMPC_M->rtwLogInfo, "tout");
    rtliSetLogX(fMPC_M->rtwLogInfo, "");
    rtliSetLogXFinal(fMPC_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(fMPC_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(fMPC_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(fMPC_M->rtwLogInfo, 0);
    rtliSetLogDecimation(fMPC_M->rtwLogInfo, 1);
    rtliSetLogY(fMPC_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(fMPC_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(fMPC_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&fMPC_DW, 0,
                sizeof(DW_fMPC_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(fMPC_M->rtwLogInfo, 0.0, rtmGetTFinal(fMPC_M),
    fMPC_M->Timing.stepSize0, (&rtmGetErrorStatus(fMPC_M)));

  /* InitializeConditions for Delay: '<Root>/Delay' */
  memcpy(&fMPC_DW.Delay_DSTATE[0], &fMPC_P.x0[0], 12U * sizeof(real_T));

  /* InitializeConditions for Delay: '<Root>/Delay1' */
  memcpy(&fMPC_DW.Delay1_DSTATE[0], &fMPC_P.z0[0], 150U * sizeof(real_T));
}

/* Model terminate function */
void fMPC_terminate(void)
{
  /* (no terminate code required) */
}
