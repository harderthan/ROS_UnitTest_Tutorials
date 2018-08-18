cmake_minimum_required(VERSION 2.8.3)
project(gtest_example)
add_compile_options(-std=c++11)

### ------------------------------------------------------------------------ ###
find_package(catkin REQUIRED roscpp)

catkin_package()

include_directories(
    ${catkin_INCLUDE_DIRS}
    ${PROJECT_SOURCE_DIR}/include
)

### ------------------------------------------------------------------------ ###
add_library(${PROJECT_NAME}_lib
    ${PROJECT_SOURCE_DIR}/src/Add.cpp
)
target_link_libraries(${PROJECT_NAME}_lib
    ${catkin_LIBRARIES}
)

if(CATKIN_ENABLE_TESTING)
find_package(rostest REQUIRED)
catkin_add_gtest(${PROJECT_NAME}_lib_utest
    ${PROJECT_SOURCE_DIR}/src/test/Add_test.cpp)
target_link_libraries(${PROJECT_NAME}_lib_utest
    ${catkin_LIBRARIES}
    ${PROJECT_NAME}_lib
)
endif()

install(TARGETS ${PROJECT_NAME}_lib
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
