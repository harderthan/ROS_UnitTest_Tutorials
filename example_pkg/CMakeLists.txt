cmake_minimum_required(VERSION 2.8.3)
project(example_pkg)
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

add_executable(${PROJECT_NAME}_node
    ${PROJECT_SOURCE_DIR}/src/Main.cpp
)
target_link_libraries(${PROJECT_NAME}_node
  ${catkin_LIBRARIES}
  ${PROJECT_NAME}_lib
)

install(TARGETS ${PROJECT_NAME}_lib ${PROJECT_NAME}_node
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
