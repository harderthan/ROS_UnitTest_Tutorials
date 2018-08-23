#include <ros/ros.h>
#include <gtest/gtest.h>

TEST(rostest_example, basicTest){
  EXPECT_TRUE(true);
}

int main(int argc, char** argv){
  ros::init(argc, argv, "rostest_example_test");

  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
