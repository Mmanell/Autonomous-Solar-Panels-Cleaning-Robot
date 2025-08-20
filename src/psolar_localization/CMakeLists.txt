cmake_minimum_required(VERSION 3.8)
project(psolar_localization)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(Eigen3 REQUIRED)



include_directories(include)
include_directories(${EIGEN3_INCLUDE_DIR})

add_executable(gps_tilted_publisher src/gps_tilted_publisher.cpp)
ament_target_dependencies(gps_tilted_publisher
  rclcpp
  geometry_msgs
  nav_msgs
  tf2
  tf2_ros
  tf2_geometry_msgs
  sensor_msgs
)

add_executable(odom_tilted_publisher src/odom_tilted_publisher.cpp)
ament_target_dependencies(odom_tilted_publisher
  rclcpp
  nav_msgs
)
add_executable(tilted_frames_publisher src/tilted_frames_publisher.cpp)
ament_target_dependencies(tilted_frames_publisher
  rclcpp
  nav_msgs
  tf2_ros
  tf2
)

add_executable(cleaning_launcher src/cleaning_launcher.cpp)
ament_target_dependencies(cleaning_launcher rclcpp nav_msgs)

add_executable(corrected_odometry_publisher src/corrected_odometry_publisher.cpp)
ament_target_dependencies(corrected_odometry_publisher rclcpp geometry_msgs std_msgs sensor_msgs nav_msgs tf2_ros tf2 ${Eigen_LIBRARIES})


install(DIRECTORY launch config
  DESTINATION share/${PROJECT_NAME}/
)
 
install(TARGETS
  gps_tilted_publisher
  odom_tilted_publisher
  tilted_frames_publisher
  corrected_odometry_publisher
  cleaning_launcher
  DESTINATION lib/${PROJECT_NAME}
)

install(
  DIRECTORY include
  DESTINATION include
)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
