# CMake generated Testfile for 
# Source directory: /home/manel/psolar_ws/src/opennav_coverage/opennav_coverage_navigator/test
# Build directory: /home/manel/psolar_ws/build/opennav_coverage_navigator/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_coverage_navigator "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/manel/psolar_ws/build/opennav_coverage_navigator/test_results/opennav_coverage_navigator/test_coverage_navigator.gtest.xml" "--package-name" "opennav_coverage_navigator" "--output-file" "/home/manel/psolar_ws/build/opennav_coverage_navigator/ament_cmake_gtest/test_coverage_navigator.txt" "--command" "/home/manel/psolar_ws/build/opennav_coverage_navigator/test/test_coverage_navigator" "--gtest_output=xml:/home/manel/psolar_ws/build/opennav_coverage_navigator/test_results/opennav_coverage_navigator/test_coverage_navigator.gtest.xml")
set_tests_properties(test_coverage_navigator PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/manel/psolar_ws/build/opennav_coverage_navigator/test/test_coverage_navigator" TIMEOUT "60" WORKING_DIRECTORY "/home/manel/psolar_ws/build/opennav_coverage_navigator/test" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/manel/psolar_ws/src/opennav_coverage/opennav_coverage_navigator/test/CMakeLists.txt;1;ament_add_gtest;/home/manel/psolar_ws/src/opennav_coverage/opennav_coverage_navigator/test/CMakeLists.txt;0;")
subdirs("../gtest")
