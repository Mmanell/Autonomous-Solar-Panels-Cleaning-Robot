cmake_minimum_required(VERSION 3.8)
project(psolar_decision_making)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(opennav_coverage_msgs REQUIRED)
find_package(yaml-cpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav2_msgs REQUIRED)
find_package(behaviortree_cpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(opennav_docking_msgs REQUIRED)



set(dependencies
  rclcpp
  rclcpp_action
  std_msgs
  geometry_msgs
  nav2_msgs
  behaviortree_cpp
  opennav_coverage_msgs
  opennav_docking_msgs
  sensor_msgs
) 

include_directories(
  ${PROJECT_SOURCE_DIR}/include
)

install(DIRECTORY config behavior_trees
  DESTINATION share/${PROJECT_NAME}/
)


# add_executable(mission_bt src/mission_bt.cpp src/undock_node.cpp src/which_goal_node.cpp src/navigate_to_goal_node.cpp src/which_field_node.cpp)
# ament_target_dependencies(mission_bt ${dependencies})

add_executable(mission_bt src/mission_bt.cpp src/planner_node.cpp src/undock_node.cpp src/which_field_node.cpp src/clean_field_node.cpp src/which_goal_node.cpp src/navigate_to_goal_node.cpp src/pop_field_node.cpp src/battery_low_node.cpp src/dock_node.cpp)
ament_target_dependencies(mission_bt ${dependencies})
target_link_libraries(mission_bt yaml-cpp)

# add_executable(dock_node src/dock_node.cpp)
# ament_target_dependencies(dock_node rclcpp opennav_docking_msgs rclcpp_action)




add_executable(panel_publisher src/panel_publisher.cpp)
ament_target_dependencies(panel_publisher rclcpp opennav_coverage_msgs)
target_link_libraries(panel_publisher yaml-cpp)

install(TARGETS
  panel_publisher
  mission_bt
  DESTINATION lib/${PROJECT_NAME}
)



if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
