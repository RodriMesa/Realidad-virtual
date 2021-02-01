//
// File: nodo_pos_types.h
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
#ifndef RTW_HEADER_nodo_pos_types_h_
#define RTW_HEADER_nodo_pos_types_h_
#include "rtwtypes.h"

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_nodo_pos_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_geometry_msgs_Twist_

// MsgType=geometry_msgs/Twist
typedef struct {
  // MsgType=geometry_msgs/Vector3
  SL_Bus_nodo_pos_geometry_msgs_Vector3 Linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_nodo_pos_geometry_msgs_Vector3 Angular;
} SL_Bus_nodo_pos_geometry_msgs_Twist;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_ros_time_Time_

// MsgType=ros_time/Time
typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_nodo_pos_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_std_msgs_Header_

// MsgType=std_msgs/Header
typedef struct {
  uint32_T Seq;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;

  // MsgType=ros_time/Time
  SL_Bus_nodo_pos_ros_time_Time Stamp;
} SL_Bus_nodo_pos_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_sensor_msgs_LaserScan_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_sensor_msgs_LaserScan_

// MsgType=sensor_msgs/LaserScan
typedef struct {
  real32_T AngleMin;
  real32_T AngleMax;
  real32_T AngleIncrement;
  real32_T TimeIncrement;
  real32_T ScanTime;
  real32_T RangeMin;
  real32_T RangeMax;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Ranges_SL_Info:TruncateAction=warn 
  real32_T Ranges[360];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Ranges
  SL_Bus_ROSVariableLengthArrayInfo Ranges_SL_Info;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Intensities_SL_Info:TruncateAction=warn 
  real32_T Intensities[360];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Intensities
  SL_Bus_ROSVariableLengthArrayInfo Intensities_SL_Info;

  // MsgType=std_msgs/Header
  SL_Bus_nodo_pos_std_msgs_Header Header;
} SL_Bus_nodo_pos_sensor_msgs_LaserScan;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_geometry_msgs_Point_

// MsgType=geometry_msgs/Point
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_nodo_pos_geometry_msgs_Point;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_geometry_msgs_Quaternion_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_geometry_msgs_Quaternion_

// MsgType=geometry_msgs/Quaternion
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
  real_T W;
} SL_Bus_nodo_pos_geometry_msgs_Quaternion;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_geometry_msgs_Pose_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_geometry_msgs_Pose_

// MsgType=geometry_msgs/Pose
typedef struct {
  // MsgType=geometry_msgs/Point
  SL_Bus_nodo_pos_geometry_msgs_Point Position;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_nodo_pos_geometry_msgs_Quaternion Orientation;
} SL_Bus_nodo_pos_geometry_msgs_Pose;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_geometry_msgs_PoseWithCovariance_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_geometry_msgs_PoseWithCovariance_

// MsgType=geometry_msgs/PoseWithCovariance
typedef struct {
  real_T Covariance[36];

  // MsgType=geometry_msgs/Pose
  SL_Bus_nodo_pos_geometry_msgs_Pose Pose;
} SL_Bus_nodo_pos_geometry_msgs_PoseWithCovariance;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_geometry_msgs_TwistWithCovariance_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_geometry_msgs_TwistWithCovariance_

// MsgType=geometry_msgs/TwistWithCovariance
typedef struct {
  real_T Covariance[36];

  // MsgType=geometry_msgs/Twist
  SL_Bus_nodo_pos_geometry_msgs_Twist Twist;
} SL_Bus_nodo_pos_geometry_msgs_TwistWithCovariance;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_nav_msgs_Odometry_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nodo_pos_nav_msgs_Odometry_

// MsgType=nav_msgs/Odometry
typedef struct {
  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=ChildFrameId_SL_Info:TruncateAction=warn 
  uint8_T ChildFrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=ChildFrameId
  SL_Bus_ROSVariableLengthArrayInfo ChildFrameId_SL_Info;

  // MsgType=std_msgs/Header
  SL_Bus_nodo_pos_std_msgs_Header Header;

  // MsgType=geometry_msgs/PoseWithCovariance
  SL_Bus_nodo_pos_geometry_msgs_PoseWithCovariance Pose;

  // MsgType=geometry_msgs/TwistWithCovariance
  SL_Bus_nodo_pos_geometry_msgs_TwistWithCovariance Twist;
} SL_Bus_nodo_pos_nav_msgs_Odometry;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_NQPZsPS5PAq52I8Ane3iuE_
#define DEFINED_TYPEDEF_FOR_struct_NQPZsPS5PAq52I8Ane3iuE_

typedef struct {
  real_T Ts;
  real_T bufSize;
  real_T maxDisp;
  real_T minSize;
  real_T maxSize;
  real_T maxCounts;
  real_T linVelGain;
  real_T angVelGain;
  real_T maxLinVel;
  real_T maxAngVel;
  real_T posDeadZone;
  real_T targetSize;
  real_T sizeDeadZone;
  real_T speedRedSize;
} struct_NQPZsPS5PAq52I8Ane3iuE;

#endif

#ifndef struct_tag_rkSooZHJZnr3Dpfu1LNqfH
#define struct_tag_rkSooZHJZnr3Dpfu1LNqfH

struct tag_rkSooZHJZnr3Dpfu1LNqfH
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 //struct_tag_rkSooZHJZnr3Dpfu1LNqfH

#ifndef typedef_ros_slros_internal_block_Publ_T
#define typedef_ros_slros_internal_block_Publ_T

typedef struct tag_rkSooZHJZnr3Dpfu1LNqfH ros_slros_internal_block_Publ_T;

#endif                                 //typedef_ros_slros_internal_block_Publ_T

#ifndef struct_tag_9SewJ4y3IXNs5GrZti8qkG
#define struct_tag_9SewJ4y3IXNs5GrZti8qkG

struct tag_9SewJ4y3IXNs5GrZti8qkG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 //struct_tag_9SewJ4y3IXNs5GrZti8qkG

#ifndef typedef_ros_slros_internal_block_Subs_T
#define typedef_ros_slros_internal_block_Subs_T

typedef struct tag_9SewJ4y3IXNs5GrZti8qkG ros_slros_internal_block_Subs_T;

#endif                                 //typedef_ros_slros_internal_block_Subs_T

#ifndef struct_emxArray_real32_T_360x1
#define struct_emxArray_real32_T_360x1

struct emxArray_real32_T_360x1
{
  real32_T data[360];
  int32_T size[2];
};

#endif                                 //struct_emxArray_real32_T_360x1

#ifndef typedef_emxArray_real32_T_360x1_nodo__T
#define typedef_emxArray_real32_T_360x1_nodo__T

typedef struct emxArray_real32_T_360x1 emxArray_real32_T_360x1_nodo__T;

#endif                                 //typedef_emxArray_real32_T_360x1_nodo__T

#ifndef struct_emxArray_real_T_360x1
#define struct_emxArray_real_T_360x1

struct emxArray_real_T_360x1
{
  real_T data[360];
  int32_T size[2];
};

#endif                                 //struct_emxArray_real_T_360x1

#ifndef typedef_emxArray_real_T_360x1_nodo_po_T
#define typedef_emxArray_real_T_360x1_nodo_po_T

typedef struct emxArray_real_T_360x1 emxArray_real_T_360x1_nodo_po_T;

#endif                                 //typedef_emxArray_real_T_360x1_nodo_po_T

// Parameters (default storage)
typedef struct P_nodo_pos_T_ P_nodo_pos_T;

// Forward declaration for rtModel
typedef struct tag_RTM_nodo_pos_T RT_MODEL_nodo_pos_T;

#endif                                 // RTW_HEADER_nodo_pos_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
