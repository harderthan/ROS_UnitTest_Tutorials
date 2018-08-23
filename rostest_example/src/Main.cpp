#include <Add.hpp>
#include <ros/ros.h>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "example_pkg_node");
    int a = 0, b = 0;

    // CASE 1
    a = 1;
    b = 1;
    ROS_INFO("CASE1: a = %d, b = %d, a + b = %d", a, b, user_ns::addNum(a,b));

    // CASE 2
    a = 5;
    b = 10;
    ROS_INFO("CASE2: a = %d, b = %d, a + b = %d", a, b, user_ns::addNum(a,b));

    // CASE 3
    a = 100;
    b = 250;
    ROS_INFO("CASE3: a = %d, b = %d, a + b = %d", a, b, user_ns::addNum(a,b));

    return 0;
}
