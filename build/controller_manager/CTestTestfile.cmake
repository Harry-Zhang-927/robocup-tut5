# CMake generated Testfile for 
# Source directory: /home/athome23-5/tiago_public_ws/src/ros_control/controller_manager
# Build directory: /home/athome23-5/tiago_public_ws/build/controller_manager
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_controller_manager_rostest_test_hwi_switch_test.test "/home/athome23-5/tiago_public_ws/build/controller_manager/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/athome23-5/tiago_public_ws/build/controller_manager/test_results/controller_manager/rostest-test_hwi_switch_test.xml" "--return-code" "/usr/bin/python3 /opt/ros/noetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/athome23-5/tiago_public_ws/src/ros_control/controller_manager --package=controller_manager --results-filename test_hwi_switch_test.xml --results-base-dir \"/home/athome23-5/tiago_public_ws/build/controller_manager/test_results\" /home/athome23-5/tiago_public_ws/src/ros_control/controller_manager/test/hwi_switch_test.test ")
set_tests_properties(_ctest_controller_manager_rostest_test_hwi_switch_test.test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;80;add_rostest;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;100;_add_rostest_google_test;/home/athome23-5/tiago_public_ws/src/ros_control/controller_manager/CMakeLists.txt;36;add_rostest_gtest;/home/athome23-5/tiago_public_ws/src/ros_control/controller_manager/CMakeLists.txt;0;")
subdirs("gtest")
