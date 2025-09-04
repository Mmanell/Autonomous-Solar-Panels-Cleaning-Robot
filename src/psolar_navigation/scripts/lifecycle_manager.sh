#!/bin/bash

sleep 2  

ros2 lifecycle set /goto_pose/planner_server configure
ros2 lifecycle set /goto_pose/planner_server activate

ros2 lifecycle set /goto_pose/controller_server configure
ros2 lifecycle set /goto_pose/controller_server activate


ros2 lifecycle set /goto_pose/behavior_server configure
ros2 lifecycle set /goto_pose/behavior_server activate

ros2 lifecycle set /goto_pose/bt_navigator configure
ros2 lifecycle set /goto_pose/bt_navigator activate

ros2 lifecycle set /goto_pose/docking_server configure
ros2 lifecycle set /goto_pose/docking_server activate


ros2 lifecycle get /goto_pose/planner_server
ros2 lifecycle get /goto_pose/controller_server
ros2 lifecycle get /goto_pose/behavior_server
ros2 lifecycle get /goto_pose/bt_navigator
ros2 lifecycle get /goto_pose/docking_server

