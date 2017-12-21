#include <ros/ros.h> 
#include <pioneer_mrs/Pioneer.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "robot");
  ros::NodeHandle nh;
  Pioneer* pioneer = new Pioneer(nh);
  ros::spin();
}