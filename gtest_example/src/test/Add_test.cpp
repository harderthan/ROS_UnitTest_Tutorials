#include <Add.hpp>
#include <gtest/gtest.h>
#include <ros/ros.h>

TEST(addNum_TEST, nomal_cases1) {
  EXPECT_EQ(3, user_ns::addNum(1,2));
}

TEST(addNum_TEST, nomal_cases2) {
  EXPECT_EQ(6, user_ns::addNum(3,3));
  EXPECT_EQ(8, user_ns::addNum(3,5));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  ros::init(argc, argv, "tester");
  return RUN_ALL_TESTS();
}
