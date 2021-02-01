#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block nodo_pos/Subscribe1
extern SimulinkSubscriber<sensor_msgs::LaserScan, SL_Bus_nodo_pos_sensor_msgs_LaserScan> Sub_nodo_pos_172;

// For Block nodo_pos/Subscribe2
extern SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_nodo_pos_nav_msgs_Odometry> Sub_nodo_pos_220;

// For Block nodo_pos/Publish
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_nodo_pos_geometry_msgs_Twist> Pub_nodo_pos_52;

void slros_node_init(int argc, char** argv);

#endif
