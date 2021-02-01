//
// File: nodo_pos.cpp
//
// Code generated for Simulink model 'nodo_pos'.
//
// Model version                  : 1.186
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Sun Jan 31 17:08:59 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "nodo_pos.h"
#include "nodo_pos_private.h"

// Block signals (default storage)
B_nodo_pos_T nodo_pos_B;

// Block states (default storage)
DW_nodo_pos_T nodo_pos_DW;

// Real-time model
RT_MODEL_nodo_pos_T nodo_pos_M_ = RT_MODEL_nodo_pos_T();
RT_MODEL_nodo_pos_T *const nodo_pos_M = &nodo_pos_M_;

// Forward declaration for local functions
static void nodo_pos_SystemCore_step(boolean_T *varargout_1, real32_T
  *varargout_2_AngleMin, real32_T *varargout_2_AngleMax, real32_T
  *varargout_2_AngleIncrement, real32_T *varargout_2_TimeIncrement, real32_T
  *varargout_2_ScanTime, real32_T *varargout_2_RangeMin, real32_T
  *varargout_2_RangeMax, real32_T varargout_2_Ranges[360], uint32_T
  *varargout_2_Ranges_SL_Info_Curr, uint32_T *varargout_2_Ranges_SL_Info_Rece,
  real32_T varargout_2_Intensities[360], uint32_T
  *varargout_2_Intensities_SL_Info, uint32_T *varargout_2_Intensities_SL_In_0,
  SL_Bus_nodo_pos_std_msgs_Header *varargout_2_Header);
static real_T nodo_pos_sum(const real_T x_data[], const int32_T *x_size);
static void matlabCodegenHandle_matlabCod_c(ros_slros_internal_block_Subs_T *obj);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj);
static void nodo_pos_SystemCore_step(boolean_T *varargout_1, real32_T
  *varargout_2_AngleMin, real32_T *varargout_2_AngleMax, real32_T
  *varargout_2_AngleIncrement, real32_T *varargout_2_TimeIncrement, real32_T
  *varargout_2_ScanTime, real32_T *varargout_2_RangeMin, real32_T
  *varargout_2_RangeMax, real32_T varargout_2_Ranges[360], uint32_T
  *varargout_2_Ranges_SL_Info_Curr, uint32_T *varargout_2_Ranges_SL_Info_Rece,
  real32_T varargout_2_Intensities[360], uint32_T
  *varargout_2_Intensities_SL_Info, uint32_T *varargout_2_Intensities_SL_In_0,
  SL_Bus_nodo_pos_std_msgs_Header *varargout_2_Header)
{
  *varargout_1 = Sub_nodo_pos_172.getLatestMessage(&nodo_pos_B.b_varargout_2);
  *varargout_2_AngleMin = nodo_pos_B.b_varargout_2.AngleMin;
  *varargout_2_AngleMax = nodo_pos_B.b_varargout_2.AngleMax;
  *varargout_2_AngleIncrement = nodo_pos_B.b_varargout_2.AngleIncrement;
  *varargout_2_TimeIncrement = nodo_pos_B.b_varargout_2.TimeIncrement;
  *varargout_2_ScanTime = nodo_pos_B.b_varargout_2.ScanTime;
  *varargout_2_RangeMin = nodo_pos_B.b_varargout_2.RangeMin;
  *varargout_2_RangeMax = nodo_pos_B.b_varargout_2.RangeMax;
  *varargout_2_Ranges_SL_Info_Curr =
    nodo_pos_B.b_varargout_2.Ranges_SL_Info.CurrentLength;
  *varargout_2_Ranges_SL_Info_Rece =
    nodo_pos_B.b_varargout_2.Ranges_SL_Info.ReceivedLength;
  memcpy(&varargout_2_Ranges[0], &nodo_pos_B.b_varargout_2.Ranges[0], 360U *
         sizeof(real32_T));
  memcpy(&varargout_2_Intensities[0], &nodo_pos_B.b_varargout_2.Intensities[0],
         360U * sizeof(real32_T));
  *varargout_2_Intensities_SL_Info =
    nodo_pos_B.b_varargout_2.Intensities_SL_Info.CurrentLength;
  *varargout_2_Intensities_SL_In_0 =
    nodo_pos_B.b_varargout_2.Intensities_SL_Info.ReceivedLength;
  *varargout_2_Header = nodo_pos_B.b_varargout_2.Header;
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(static_cast<real_T>(u0_0), static_cast<real_T>(u1_0));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

// Function for MATLAB Function: '<Root>/MATLAB Function'
static real_T nodo_pos_sum(const real_T x_data[], const int32_T *x_size)
{
  real_T y;
  int32_T k;
  if (*x_size == 0) {
    y = 0.0;
  } else {
    y = x_data[0];
    for (k = 2; k <= *x_size; k++) {
      y += x_data[k - 1];
    }
  }

  return y;
}

static void matlabCodegenHandle_matlabCod_c(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

// Model step function
void nodo_pos_step(void)
{
  real32_T b_varargout_2_TimeIncrement;
  real32_T b_varargout_2_ScanTime;
  real32_T b_varargout_2_RangeMin;
  real32_T b_varargout_2_RangeMax;
  uint32_T b_varargout_2_Ranges_SL_Info_Re;
  uint32_T b_varargout_2_Intensities_SL_In;
  uint32_T b_varargout_2_Intensities_SL__0;
  boolean_T b_varargout_1;
  uint32_T PID_ELAPS_T;
  int32_T i;
  int32_T i_0;
  int32_T i_tmp;
  int32_T b_tmp;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // MATLABSystem: '<S6>/SourceBlock' incorporates:
  //   Inport: '<S60>/In1'

  nodo_pos_SystemCore_step(&b_varargout_1, &nodo_pos_B.b_varargout_2_AngleMin,
    &nodo_pos_B.b_varargout_2_AngleMax, &nodo_pos_B.b_varargout_2_AngleIncrement,
    &b_varargout_2_TimeIncrement, &b_varargout_2_ScanTime,
    &b_varargout_2_RangeMin, &b_varargout_2_RangeMax, nodo_pos_B.ranges,
    &PID_ELAPS_T, &b_varargout_2_Ranges_SL_Info_Re,
    nodo_pos_B.b_varargout_2_Intensities, &b_varargout_2_Intensities_SL_In,
    &b_varargout_2_Intensities_SL__0, &nodo_pos_B.b_varargout_2_Header);

  // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S60>/Enable'

  if (b_varargout_1) {
    nodo_pos_B.In1.AngleMin = nodo_pos_B.b_varargout_2_AngleMin;
    nodo_pos_B.In1.AngleMax = nodo_pos_B.b_varargout_2_AngleMax;
    nodo_pos_B.In1.AngleIncrement = nodo_pos_B.b_varargout_2_AngleIncrement;
    nodo_pos_B.In1.TimeIncrement = b_varargout_2_TimeIncrement;
    nodo_pos_B.In1.ScanTime = b_varargout_2_ScanTime;
    nodo_pos_B.In1.RangeMin = b_varargout_2_RangeMin;
    nodo_pos_B.In1.RangeMax = b_varargout_2_RangeMax;
    nodo_pos_B.In1.Ranges_SL_Info.CurrentLength = PID_ELAPS_T;
    nodo_pos_B.In1.Ranges_SL_Info.ReceivedLength =
      b_varargout_2_Ranges_SL_Info_Re;
    memcpy(&nodo_pos_B.In1.Ranges[0], &nodo_pos_B.ranges[0], 360U * sizeof
           (real32_T));
    memcpy(&nodo_pos_B.In1.Intensities[0],
           &nodo_pos_B.b_varargout_2_Intensities[0], 360U * sizeof(real32_T));
    nodo_pos_B.In1.Intensities_SL_Info.CurrentLength =
      b_varargout_2_Intensities_SL_In;
    nodo_pos_B.In1.Intensities_SL_Info.ReceivedLength =
      b_varargout_2_Intensities_SL__0;
    nodo_pos_B.In1.Header = nodo_pos_B.b_varargout_2_Header;
  }

  // End of MATLABSystem: '<S6>/SourceBlock'
  // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // MATLAB Function: '<Root>/angles_and_dists'
  //  this function transforms the laser scan into cartesian coordinates, so
  //  that you can use other tools to group them together, make an image, etc.
  // MATLAB Function 'angles_and_dists': '<S8>:1'
  // '<S8>:1:6' if numRanges > 0
  if (nodo_pos_B.In1.Ranges_SL_Info.ReceivedLength > 0U) {
    // '<S8>:1:7' angleMin = double(AngleMin);
    // '<S8>:1:8' angleMax = double(AngleMax);
    // '<S8>:1:9' angleIncrement = double(AngleIncrement);
    //  assert(angleMax > angleMin);
    //  assert((angleMax-angleMin)/angleIncrement > 1);
    // angleMin = -pi/2;
    // angleMax = pi/2;
    // angleIncrement = pi/179;
    // timeIncrement = TimeIncrement;
    // rangeMin = RangeMin;
    // rangeMax = RangeMax;
    // '<S8>:1:18' ranges = Ranges;
    // '<S8>:1:19' ranges(ranges>RangeMax) = NaN;
    // '<S8>:1:20' ranges(ranges<RangeMin) = NaN;
    // rangesLength = scan.Ranges_SL_Info.ReceivedLength;
    // intensities = scan.Intensities;
    // coder.varsize('angles',[180 1]);
    // '<S8>:1:24' assert(numRanges <= 360);
    // '<S8>:1:25' angles=double(zeros(numRanges,1));
    nodo_pos_DW.SFunction_DIMS3[0] = static_cast<int32_T>
      (nodo_pos_B.In1.Ranges_SL_Info.ReceivedLength);
    nodo_pos_DW.SFunction_DIMS3[1] = 1;

    // '<S8>:1:26' for ii=1:numRanges
    //  angles = [angleMin:angleIncrement:angleMax]';
    // '<S8>:1:30' dists = ranges;
    nodo_pos_DW.SFunction_DIMS2[0] = 360;
    nodo_pos_DW.SFunction_DIMS2[1] = 1;
    for (i = 0; i < 360; i++) {
      nodo_pos_B.b_varargout_2_AngleMin = nodo_pos_B.In1.Ranges[i];
      if (nodo_pos_B.In1.Ranges[i] > nodo_pos_B.In1.RangeMax) {
        nodo_pos_B.b_varargout_2_AngleMin = (rtNaNF);
      }

      if (nodo_pos_B.b_varargout_2_AngleMin < nodo_pos_B.In1.RangeMin) {
        nodo_pos_B.b_varargout_2_AngleMin = (rtNaNF);
      }

      nodo_pos_B.ranges[i] = nodo_pos_B.b_varargout_2_AngleMin;
    }

    // '<S8>:1:31' assert(length(dists) == numRanges);
    // '<S8>:1:32' assert(length(dists) == length(angles));
  } else {
    // '<S8>:1:33' else
    // '<S8>:1:34' angles=double(0);
    // '<S8>:1:35' dists=single(0);
    nodo_pos_DW.SFunction_DIMS3[0] = 1;
    nodo_pos_DW.SFunction_DIMS2[0] = 1;
    nodo_pos_DW.SFunction_DIMS3[1] = 1;
    nodo_pos_DW.SFunction_DIMS2[1] = 1;
    nodo_pos_B.ranges[0] = 0.0F;
  }

  // End of MATLAB Function: '<Root>/angles_and_dists'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe2'
  // MATLABSystem: '<S7>/SourceBlock' incorporates:
  //   Inport: '<S61>/In1'

  b_varargout_1 = Sub_nodo_pos_220.getLatestMessage(&nodo_pos_B.b_varargout_2_m);

  // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S61>/Enable'

  if (b_varargout_1) {
    nodo_pos_B.In1_e = nodo_pos_B.b_varargout_2_m;
  }

  // End of MATLABSystem: '<S7>/SourceBlock'
  // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe2'

  // MATLAB Function: '<Root>/MATLAB Function1'
  // MATLAB Function 'MATLAB Function1': '<S3>:1'
  // '<S3>:1:2' q = double([q1 q2 q3 q4]);
  // '<S3>:1:3' eul=quat2eul(q);
  nodo_pos_B.y = 1.0 / sqrt(((nodo_pos_B.In1_e.Pose.Pose.Orientation.X *
    nodo_pos_B.In1_e.Pose.Pose.Orientation.X +
    nodo_pos_B.In1_e.Pose.Pose.Orientation.Y *
    nodo_pos_B.In1_e.Pose.Pose.Orientation.Y) +
    nodo_pos_B.In1_e.Pose.Pose.Orientation.Z *
    nodo_pos_B.In1_e.Pose.Pose.Orientation.Z) +
    nodo_pos_B.In1_e.Pose.Pose.Orientation.W *
    nodo_pos_B.In1_e.Pose.Pose.Orientation.W);
  nodo_pos_B.sat_yaw = nodo_pos_B.In1_e.Pose.Pose.Orientation.X * nodo_pos_B.y;
  nodo_pos_B.Sum = nodo_pos_B.In1_e.Pose.Pose.Orientation.Y * nodo_pos_B.y;
  nodo_pos_B.Filter = nodo_pos_B.In1_e.Pose.Pose.Orientation.Z * nodo_pos_B.y;
  nodo_pos_B.y *= nodo_pos_B.In1_e.Pose.Pose.Orientation.W;

  // MATLAB Function: '<Root>/MATLAB Function' incorporates:
  //   MATLAB Function: '<Root>/MATLAB Function1'
  //   UnitDelay: '<Root>/Unit Delay'

  // MATLAB Function 'MATLAB Function': '<S2>:1'
  // '<S2>:1:2' dist=double(dist);
  // '<S2>:1:3' count=0;
  // Compensamos con angulos de euler
  // '<S2>:1:5' yaw = round(rad2deg(eul(3)));
  nodo_pos_B.y = rt_roundd_snf(rt_atan2d_snf((nodo_pos_B.Filter * nodo_pos_B.y +
    nodo_pos_B.sat_yaw * nodo_pos_B.Sum) * 2.0, ((nodo_pos_B.sat_yaw *
    nodo_pos_B.sat_yaw - nodo_pos_B.Sum * nodo_pos_B.Sum) - nodo_pos_B.Filter *
    nodo_pos_B.Filter) + nodo_pos_B.y * nodo_pos_B.y) * 57.295779513082323);

  // '<S2>:1:6' if yaw>30
  if (nodo_pos_B.y > 30.0) {
    // '<S2>:1:7' sat_yaw=30;
    nodo_pos_B.sat_yaw = 30.0;
  } else {
    // '<S2>:1:8' else
    // '<S2>:1:9' if yaw<-30
    if (nodo_pos_B.y < -30.0) {
      // '<S2>:1:10' sat_yaw=-30;
      nodo_pos_B.sat_yaw = -30.0;
    } else {
      // '<S2>:1:11' else
      // '<S2>:1:12' sat_yaw=yaw;
      nodo_pos_B.sat_yaw = nodo_pos_B.y;
    }
  }

  // Detección de distancia a pared frontal
  // '<S2>:1:16' for i=0:30
  // '<S2>:1:24' if count>5
  // Detección de distancia a pared lateral y valor mínimo
  // '<S2>:1:30' avg_y = sum(dist(265-sat_yaw:275-sat_yaw))/length(dist(265-sat_yaw:275-sat_yaw)); 
  if (265.0 - nodo_pos_B.sat_yaw > 275.0 - nodo_pos_B.sat_yaw) {
    i = 0;
    b_tmp = 0;
    i_tmp = -1;
    nodo_pos_B.d = 0;
  } else {
    i_tmp = static_cast<int32_T>(265.0 - nodo_pos_B.sat_yaw);
    i = i_tmp - 1;
    b_tmp = static_cast<int32_T>(275.0 - nodo_pos_B.sat_yaw);
    i_tmp -= 2;
    nodo_pos_B.d = b_tmp;
  }

  b_tmp -= i;
  for (i_0 = 0; i_0 < b_tmp; i_0++) {
    nodo_pos_B.ranges_data[i_0] = nodo_pos_B.ranges[i + i_0];
  }

  nodo_pos_B.sat_yaw = nodo_pos_sum(nodo_pos_B.ranges_data, &b_tmp) / (
    static_cast<real_T>(nodo_pos_B.d - i_tmp) - 1.0);

  // Saturación
  // '<S2>:1:32' if avg_y>3.5
  if (nodo_pos_B.sat_yaw > 3.5) {
    // '<S2>:1:33' avg_y=3.5;
    nodo_pos_B.sat_yaw = 3.5;
  }

  // '<S2>:1:35' if isnan(avg_y)
  if (rtIsNaN(nodo_pos_B.sat_yaw)) {
    // '<S2>:1:36' avg_y=val_ant;
    nodo_pos_B.sat_yaw = nodo_pos_DW.UnitDelay_DSTATE;
  }

  // Chart: '<Root>/Chart' incorporates:
  //   Gain: '<S47>/Proportional Gain'
  //   MATLAB Function: '<Root>/MATLAB Function'
  //   Sum: '<S51>/Sum'

  // Gateway: Chart
  // During: Chart
  if (nodo_pos_DW.is_active_c6_nodo_pos == 0U) {
    // Entry: Chart
    nodo_pos_DW.is_active_c6_nodo_pos = 1U;

    // Entry Internal: Chart
    // Transition: '<S1>:72'
    // Entry 'Error_pared': '<S1>:59'
    // '<S1>:59:3' cont=0;
    // '<S1>:59:4' flag=0;
  } else {
    // During 'Error_pared': '<S1>:59'
    // '<S1>:59:6' v=0.3;
    nodo_pos_B.v = 0.3;

    // Outputs for Function Call SubSystem: '<S1>/PID'
    // '<S1>:59:7' w=PID(avg_y);
    // Simulink Function 'PID': '<S1>:10'
    if (nodo_pos_DW.PID_RESET_ELAPS_T) {
      PID_ELAPS_T = 0U;
    } else {
      PID_ELAPS_T = nodo_pos_M->Timing.clockTick0 - nodo_pos_DW.PID_PREV_T;
    }

    nodo_pos_DW.PID_PREV_T = nodo_pos_M->Timing.clockTick0;
    nodo_pos_DW.PID_RESET_ELAPS_T = false;

    // Sum: '<S9>/Sum' incorporates:
    //   Constant: '<S9>/Constant'
    //   MATLAB Function: '<Root>/MATLAB Function'

    nodo_pos_B.Sum = nodo_pos_P.Constant_Value_k2 - nodo_pos_B.sat_yaw;

    // DiscreteIntegrator: '<S37>/Filter'
    if (nodo_pos_DW.Filter_SYSTEM_ENABLE != 0) {
      nodo_pos_B.Filter = nodo_pos_DW.Filter_DSTATE;
    } else {
      nodo_pos_B.Filter = nodo_pos_P.Filter_gainval * static_cast<real_T>
        (PID_ELAPS_T) * nodo_pos_DW.Filter_PREV_U + nodo_pos_DW.Filter_DSTATE;
    }

    // End of DiscreteIntegrator: '<S37>/Filter'

    // DiscreteIntegrator: '<S42>/Integrator'
    if (nodo_pos_DW.Integrator_SYSTEM_ENABLE != 0) {
      nodo_pos_B.Integrator = nodo_pos_DW.Integrator_DSTATE;
    } else {
      nodo_pos_B.Integrator = nodo_pos_P.Integrator_gainval * static_cast<real_T>
        (PID_ELAPS_T) * nodo_pos_DW.Integrator_PREV_U +
        nodo_pos_DW.Integrator_DSTATE;
    }

    // End of DiscreteIntegrator: '<S42>/Integrator'

    // Gain: '<S45>/Filter Coefficient' incorporates:
    //   Gain: '<S36>/Derivative Gain'
    //   Sum: '<S37>/SumD'

    nodo_pos_B.FilterCoefficient = (nodo_pos_P.PIDController_D * nodo_pos_B.Sum
      - nodo_pos_B.Filter) * nodo_pos_P.PIDController_N;

    // Update for DiscreteIntegrator: '<S37>/Filter'
    nodo_pos_DW.Filter_SYSTEM_ENABLE = 0U;
    nodo_pos_DW.Filter_DSTATE = nodo_pos_B.Filter;
    nodo_pos_DW.Filter_PREV_U = nodo_pos_B.FilterCoefficient;

    // Update for DiscreteIntegrator: '<S42>/Integrator' incorporates:
    //   Gain: '<S39>/Integral Gain'

    nodo_pos_DW.Integrator_SYSTEM_ENABLE = 0U;
    nodo_pos_DW.Integrator_DSTATE = nodo_pos_B.Integrator;
    nodo_pos_DW.Integrator_PREV_U = nodo_pos_P.PIDController_I * nodo_pos_B.Sum;
    nodo_pos_B.w = (nodo_pos_P.PIDController_P * nodo_pos_B.Sum +
                    nodo_pos_B.Integrator) + nodo_pos_B.FilterCoefficient;

    // End of Outputs for SubSystem: '<S1>/PID'
    // '<S1>:59:8' if (yaw>15 && w>0)
    if ((nodo_pos_B.y > 15.0) && (nodo_pos_B.w > 0.0)) {
      // '<S1>:59:9' w=0
      nodo_pos_B.w = 0.0;
    } else {
      // '<S1>:59:10' else
      // '<S1>:59:11' if (yaw<-15 && w<0)
      if ((nodo_pos_B.y < -15.0) && (nodo_pos_B.w < 0.0)) {
        // '<S1>:59:12' w=0;
        nodo_pos_B.w = 0.0;
      }
    }
  }

  // End of Chart: '<Root>/Chart'

  // BusAssignment: '<S4>/Bus Assignment' incorporates:
  //   Constant: '<S59>/Constant'

  nodo_pos_B.BusAssignment = nodo_pos_P.Constant_Value_e;
  nodo_pos_B.BusAssignment.Linear.X = nodo_pos_B.v;
  nodo_pos_B.BusAssignment.Angular.Z = nodo_pos_B.w;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S5>/SinkBlock'
  Pub_nodo_pos_52.publish(&nodo_pos_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // Update for UnitDelay: '<Root>/Unit Delay' incorporates:
  //   MATLAB Function: '<Root>/MATLAB Function'

  nodo_pos_DW.UnitDelay_DSTATE = nodo_pos_B.sat_yaw;

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The resolution of this integer timer is 0.001, which is the step size
  //  of the task. Size of "clockTick0" ensures timer will not overflow during the
  //  application lifespan selected.

  nodo_pos_M->Timing.clockTick0++;
}

// Model initialize function
void nodo_pos_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // block I/O
  (void) memset((static_cast<void *>(&nodo_pos_B)), 0,
                sizeof(B_nodo_pos_T));

  // states (dwork)
  (void) memset(static_cast<void *>(&nodo_pos_DW), 0,
                sizeof(DW_nodo_pos_T));

  {
    char_T tmp[6];
    char_T tmp_0[9];
    int32_T i;
    static const char_T tmp_1[5] = { '/', 's', 'c', 'a', 'n' };

    static const char_T tmp_2[5] = { '/', 'o', 'd', 'o', 'm' };

    static const char_T tmp_3[8] = { '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    // InitializeConditions for UnitDelay: '<Root>/Unit Delay'
    nodo_pos_DW.UnitDelay_DSTATE = nodo_pos_P.UnitDelay_InitialCondition;

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S60>/Out1'
    nodo_pos_B.In1 = nodo_pos_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'

    // Start for MATLABSystem: '<S6>/SourceBlock'
    nodo_pos_DW.obj_b.matlabCodegenIsDeleted = false;
    nodo_pos_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      tmp[i] = tmp_1[i];
    }

    tmp[5] = '\x00';
    Sub_nodo_pos_172.createSubscriber(tmp, 1);
    nodo_pos_DW.obj_b.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S61>/Out1'
    nodo_pos_B.In1_e = nodo_pos_P.Out1_Y0_p;

    // End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem'

    // Start for MATLABSystem: '<S7>/SourceBlock'
    nodo_pos_DW.obj_h.matlabCodegenIsDeleted = false;
    nodo_pos_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      tmp[i] = tmp_2[i];
    }

    tmp[5] = '\x00';
    Sub_nodo_pos_220.createSubscriber(tmp, 1);
    nodo_pos_DW.obj_h.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe2'
    nodo_pos_DW.is_active_c6_nodo_pos = 0U;

    // SystemInitialize for Chart: '<Root>/Chart' incorporates:
    //   SubSystem: '<S1>/PID'

    // InitializeConditions for DiscreteIntegrator: '<S37>/Filter'
    nodo_pos_DW.Filter_DSTATE = nodo_pos_P.PIDController_InitialConditionF;
    nodo_pos_DW.Filter_PREV_U = 0.0;

    // InitializeConditions for DiscreteIntegrator: '<S42>/Integrator'
    nodo_pos_DW.Integrator_DSTATE = nodo_pos_P.PIDController_InitialConditio_g;
    nodo_pos_DW.Integrator_PREV_U = 0.0;

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S5>/SinkBlock'
    nodo_pos_DW.obj.matlabCodegenIsDeleted = false;
    nodo_pos_DW.obj.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      tmp_0[i] = tmp_3[i];
    }

    tmp_0[8] = '\x00';
    Pub_nodo_pos_52.createPublisher(tmp_0, 1);
    nodo_pos_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'

    // Enable for Chart: '<Root>/Chart' incorporates:
    //   SubSystem: '<S1>/PID'

    nodo_pos_DW.PID_RESET_ELAPS_T = true;

    // Enable for DiscreteIntegrator: '<S37>/Filter'
    nodo_pos_DW.Filter_SYSTEM_ENABLE = 1U;

    // Enable for DiscreteIntegrator: '<S42>/Integrator'
    nodo_pos_DW.Integrator_SYSTEM_ENABLE = 1U;
  }
}

// Model terminate function
void nodo_pos_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  matlabCodegenHandle_matlabCod_c(&nodo_pos_DW.obj_b);

  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe2'
  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  matlabCodegenHandle_matlabCod_c(&nodo_pos_DW.obj_h);

  // End of Terminate for SubSystem: '<Root>/Subscribe2'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S5>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&nodo_pos_DW.obj);

  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
