#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "nodo_pos";

// For Block nodo_pos/Subscribe1
SimulinkSubscriber<sensor_msgs::LaserScan, SL_Bus_nodo_pos_sensor_msgs_LaserScan> Sub_nodo_pos_172;

// For Block nodo_pos/Subscribe2
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_nodo_pos_nav_msgs_Odometry> Sub_nodo_pos_220;

// For Block nodo_pos/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_nodo_pos_geometry_msgs_Twist> Pub_nodo_pos_52;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

