#!/bin/bash

# Give it a few seconds to fully register nodes
sleep 2  

# 2. Manually configure and activate nodes
ros2 lifecycle set /goto_pose/planner_server configure
ros2 lifecycle set /goto_pose/planner_server activate

ros2 lifecycle set /goto_pose/controller_server configure
ros2 lifecycle set /goto_pose/controller_server activate


ros2 lifecycle set /goto_pose/behavior_server configure
ros2 lifecycle set /goto_pose/behavior_server activate

ros2 lifecycle set /goto_pose/bt_navigator configure
ros2 lifecycle set /goto_pose/bt_navigator activate

# Optional: print active states
ros2 lifecycle get /goto_pose/planner_server
ros2 lifecycle get /goto_pose/controller_server
ros2 lifecycle get /goto_pose/behavior_server
ros2 lifecycle get /goto_pose/bt_navigator

