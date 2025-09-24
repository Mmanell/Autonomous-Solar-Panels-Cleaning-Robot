cmake_minimum_required(VERSION 3.8)
project(solbot_navigation)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(nav2_util REQUIRED)
find_package(nav2_controller REQUIRED)
find_package(nav2_planner REQUIRED)
find_package(nav2_bt_navigator REQUIRED)
find_package(nav2_behaviors REQUIRED)
find_package(opennav_coverage REQUIRED)
find_package(opennav_docking REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(nav2_core REQUIRED)
find_package(nav2_costmap_2d REQUIRED)
find_package(nav2_msgs REQUIRED)
find_package(pluginlib REQUIRED)

install(DIRECTORY launch config maps
  DESTINATION share/${PROJECT_NAME}/
)

include_directories(include)

set(dependencies
  rclcpp
  rclcpp_action
  nav_msgs
  geometry_msgs
  tf2_ros
  nav2_core
  nav2_costmap_2d
  nav2_util
  nav2_msgs
  pluginlib
)



add_library(coverage_planner SHARED src/coverage_path_planner.cpp)
ament_target_dependencies(coverage_planner ${dependencies})
 
pluginlib_export_plugin_description_file(nav2_core coverage_planner_plugin.xml)

install(TARGETS coverage_planner
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

install(
  DIRECTORY include
  DESTINATION include
)


install(FILES coverage_planner_plugin.xml
  DESTINATION share/${PROJECT_NAME}
)

ament_export_include_directories(include)
ament_export_libraries(
  coverage_planner
)
ament_export_dependencies(${dependencies})



if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
