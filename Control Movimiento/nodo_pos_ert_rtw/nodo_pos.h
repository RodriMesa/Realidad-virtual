//
// File: nodo_pos.h
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
#ifndef RTW_HEADER_nodo_pos_h_
#define RTW_HEADER_nodo_pos_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "nodo_pos_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
typedef struct {
  SL_Bus_nodo_pos_sensor_msgs_LaserScan In1;// '<S60>/In1'
  SL_Bus_nodo_pos_sensor_msgs_LaserScan b_varargout_2;
  real_T ranges_data[305];
  real32_T ranges[360];
  real32_T b_varargout_2_Intensities[360];
  SL_Bus_nodo_pos_nav_msgs_Odometry In1_e;// '<S61>/In1'
  SL_Bus_nodo_pos_nav_msgs_Odometry b_varargout_2_m;
  SL_Bus_nodo_pos_std_msgs_Header b_varargout_2_Header;
  SL_Bus_nodo_pos_geometry_msgs_Twist BusAssignment;// '<S4>/Bus Assignment'
  real_T w;                            // '<Root>/Chart'
  real_T v;                            // '<Root>/Chart'
  real_T y;
  real_T sat_yaw;
  real_T Sum;                          // '<S9>/Sum'
  real_T FilterCoefficient;            // '<S45>/Filter Coefficient'
  real_T Integrator;
  real_T Filter;
  real32_T b_varargout_2_AngleMin;
  real32_T b_varargout_2_AngleMax;
  real32_T b_varargout_2_AngleIncrement;
  int32_T d;
} B_nodo_pos_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  ros_slros_internal_block_Publ_T obj; // '<S5>/SinkBlock'
  ros_slros_internal_block_Subs_T obj_h;// '<S7>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_b;// '<S6>/SourceBlock'
  real_T UnitDelay_DSTATE;             // '<Root>/Unit Delay'
  real_T Filter_DSTATE;                // '<S37>/Filter'
  real_T Integrator_DSTATE;            // '<S42>/Integrator'
  real_T Filter_PREV_U;                // '<S37>/Filter'
  real_T Integrator_PREV_U;            // '<S42>/Integrator'
  int32_T SFunction_DIMS2[2];          // '<Root>/angles_and_dists'
  int32_T SFunction_DIMS3[2];          // '<Root>/angles_and_dists'
  uint32_T PID_PREV_T;                 // '<S1>/PID'
  uint8_T is_active_c6_nodo_pos;       // '<Root>/Chart'
  uint8_T Filter_SYSTEM_ENABLE;        // '<S37>/Filter'
  uint8_T Integrator_SYSTEM_ENABLE;    // '<S42>/Integrator'
  boolean_T PID_RESET_ELAPS_T;         // '<S1>/PID'
} DW_nodo_pos_T;

// Parameters (default storage)
struct P_nodo_pos_T_ {
  real_T PIDController_D;              // Mask Parameter: PIDController_D
                                          //  Referenced by: '<S36>/Derivative Gain'

  real_T PIDController_I;              // Mask Parameter: PIDController_I
                                          //  Referenced by: '<S39>/Integral Gain'

  real_T PIDController_InitialConditionF;
                              // Mask Parameter: PIDController_InitialConditionF
                                 //  Referenced by: '<S37>/Filter'

  real_T PIDController_InitialConditio_g;
                              // Mask Parameter: PIDController_InitialConditio_g
                                 //  Referenced by: '<S42>/Integrator'

  real_T PIDController_N;              // Mask Parameter: PIDController_N
                                          //  Referenced by: '<S45>/Filter Coefficient'

  real_T PIDController_P;              // Mask Parameter: PIDController_P
                                          //  Referenced by: '<S47>/Proportional Gain'

  SL_Bus_nodo_pos_sensor_msgs_LaserScan Out1_Y0;// Computed Parameter: Out1_Y0
                                                   //  Referenced by: '<S60>/Out1'

  SL_Bus_nodo_pos_sensor_msgs_LaserScan Constant_Value;// Computed Parameter: Constant_Value
                                                          //  Referenced by: '<S6>/Constant'

  SL_Bus_nodo_pos_nav_msgs_Odometry Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                                 //  Referenced by: '<S61>/Out1'

  SL_Bus_nodo_pos_nav_msgs_Odometry Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                        //  Referenced by: '<S7>/Constant'

  SL_Bus_nodo_pos_geometry_msgs_Twist Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                          //  Referenced by: '<S59>/Constant'

  real_T w_Y0;                         // Computed Parameter: w_Y0
                                          //  Referenced by: '<S9>/w'

  real_T Constant_Value_k2;            // Expression: 0.5
                                          //  Referenced by: '<S9>/Constant'

  real_T Filter_gainval;               // Computed Parameter: Filter_gainval
                                          //  Referenced by: '<S37>/Filter'

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S42>/Integrator'

  real_T UnitDelay_InitialCondition;   // Expression: 0
                                          //  Referenced by: '<Root>/Unit Delay'

};

// Real-time Model Data Structure
struct tag_RTM_nodo_pos_T {
  const char_T *errorStatus;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_nodo_pos_T nodo_pos_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_nodo_pos_T nodo_pos_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_nodo_pos_T nodo_pos_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void nodo_pos_initialize(void);
  extern void nodo_pos_step(void);
  extern void nodo_pos_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_nodo_pos_T *const nodo_pos_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'nodo_pos'
//  '<S1>'   : 'nodo_pos/Chart'
//  '<S2>'   : 'nodo_pos/MATLAB Function'
//  '<S3>'   : 'nodo_pos/MATLAB Function1'
//  '<S4>'   : 'nodo_pos/Package  Velocity Message'
//  '<S5>'   : 'nodo_pos/Publish'
//  '<S6>'   : 'nodo_pos/Subscribe1'
//  '<S7>'   : 'nodo_pos/Subscribe2'
//  '<S8>'   : 'nodo_pos/angles_and_dists'
//  '<S9>'   : 'nodo_pos/Chart/PID'
//  '<S10>'  : 'nodo_pos/Chart/PID/PID Controller'
//  '<S11>'  : 'nodo_pos/Chart/PID/PID Controller/Anti-windup'
//  '<S12>'  : 'nodo_pos/Chart/PID/PID Controller/D Gain'
//  '<S13>'  : 'nodo_pos/Chart/PID/PID Controller/Filter'
//  '<S14>'  : 'nodo_pos/Chart/PID/PID Controller/Filter ICs'
//  '<S15>'  : 'nodo_pos/Chart/PID/PID Controller/I Gain'
//  '<S16>'  : 'nodo_pos/Chart/PID/PID Controller/Ideal P Gain'
//  '<S17>'  : 'nodo_pos/Chart/PID/PID Controller/Ideal P Gain Fdbk'
//  '<S18>'  : 'nodo_pos/Chart/PID/PID Controller/Integrator'
//  '<S19>'  : 'nodo_pos/Chart/PID/PID Controller/Integrator ICs'
//  '<S20>'  : 'nodo_pos/Chart/PID/PID Controller/N Copy'
//  '<S21>'  : 'nodo_pos/Chart/PID/PID Controller/N Gain'
//  '<S22>'  : 'nodo_pos/Chart/PID/PID Controller/P Copy'
//  '<S23>'  : 'nodo_pos/Chart/PID/PID Controller/Parallel P Gain'
//  '<S24>'  : 'nodo_pos/Chart/PID/PID Controller/Reset Signal'
//  '<S25>'  : 'nodo_pos/Chart/PID/PID Controller/Saturation'
//  '<S26>'  : 'nodo_pos/Chart/PID/PID Controller/Saturation Fdbk'
//  '<S27>'  : 'nodo_pos/Chart/PID/PID Controller/Sum'
//  '<S28>'  : 'nodo_pos/Chart/PID/PID Controller/Sum Fdbk'
//  '<S29>'  : 'nodo_pos/Chart/PID/PID Controller/Tracking Mode'
//  '<S30>'  : 'nodo_pos/Chart/PID/PID Controller/Tracking Mode Sum'
//  '<S31>'  : 'nodo_pos/Chart/PID/PID Controller/Tsamp - Integral'
//  '<S32>'  : 'nodo_pos/Chart/PID/PID Controller/Tsamp - Ngain'
//  '<S33>'  : 'nodo_pos/Chart/PID/PID Controller/postSat Signal'
//  '<S34>'  : 'nodo_pos/Chart/PID/PID Controller/preSat Signal'
//  '<S35>'  : 'nodo_pos/Chart/PID/PID Controller/Anti-windup/Passthrough'
//  '<S36>'  : 'nodo_pos/Chart/PID/PID Controller/D Gain/Internal Parameters'
//  '<S37>'  : 'nodo_pos/Chart/PID/PID Controller/Filter/Disc. Forward Euler Filter'
//  '<S38>'  : 'nodo_pos/Chart/PID/PID Controller/Filter ICs/Internal IC - Filter'
//  '<S39>'  : 'nodo_pos/Chart/PID/PID Controller/I Gain/Internal Parameters'
//  '<S40>'  : 'nodo_pos/Chart/PID/PID Controller/Ideal P Gain/Passthrough'
//  '<S41>'  : 'nodo_pos/Chart/PID/PID Controller/Ideal P Gain Fdbk/Disabled'
//  '<S42>'  : 'nodo_pos/Chart/PID/PID Controller/Integrator/Discrete'
//  '<S43>'  : 'nodo_pos/Chart/PID/PID Controller/Integrator ICs/Internal IC'
//  '<S44>'  : 'nodo_pos/Chart/PID/PID Controller/N Copy/Disabled'
//  '<S45>'  : 'nodo_pos/Chart/PID/PID Controller/N Gain/Internal Parameters'
//  '<S46>'  : 'nodo_pos/Chart/PID/PID Controller/P Copy/Disabled'
//  '<S47>'  : 'nodo_pos/Chart/PID/PID Controller/Parallel P Gain/Internal Parameters'
//  '<S48>'  : 'nodo_pos/Chart/PID/PID Controller/Reset Signal/Disabled'
//  '<S49>'  : 'nodo_pos/Chart/PID/PID Controller/Saturation/Passthrough'
//  '<S50>'  : 'nodo_pos/Chart/PID/PID Controller/Saturation Fdbk/Disabled'
//  '<S51>'  : 'nodo_pos/Chart/PID/PID Controller/Sum/Sum_PID'
//  '<S52>'  : 'nodo_pos/Chart/PID/PID Controller/Sum Fdbk/Disabled'
//  '<S53>'  : 'nodo_pos/Chart/PID/PID Controller/Tracking Mode/Disabled'
//  '<S54>'  : 'nodo_pos/Chart/PID/PID Controller/Tracking Mode Sum/Passthrough'
//  '<S55>'  : 'nodo_pos/Chart/PID/PID Controller/Tsamp - Integral/Passthrough'
//  '<S56>'  : 'nodo_pos/Chart/PID/PID Controller/Tsamp - Ngain/Passthrough'
//  '<S57>'  : 'nodo_pos/Chart/PID/PID Controller/postSat Signal/Forward_Path'
//  '<S58>'  : 'nodo_pos/Chart/PID/PID Controller/preSat Signal/Forward_Path'
//  '<S59>'  : 'nodo_pos/Package  Velocity Message/Blank Message'
//  '<S60>'  : 'nodo_pos/Subscribe1/Enabled Subsystem'
//  '<S61>'  : 'nodo_pos/Subscribe2/Enabled Subsystem'

#endif                                 // RTW_HEADER_nodo_pos_h_

//
// File trailer for generated code.
//
// [EOF]
//
