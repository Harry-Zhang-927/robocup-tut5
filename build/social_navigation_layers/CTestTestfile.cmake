# CMake generated Testfile for 
# Source directory: /home/athome23-5/tiago_public_ws/src/navigation_layers/social_navigation_layers
# Build directory: /home/athome23-5/tiago_public_ws/build/social_navigation_layers
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_social_navigation_layers_roslint_package "/home/athome23-5/tiago_public_ws/build/social_navigation_layers/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/athome23-5/tiago_public_ws/build/social_navigation_layers/test_results/social_navigation_layers/roslint-social_navigation_layers.xml" "--working-dir" "/home/athome23-5/tiago_public_ws/build/social_navigation_layers" "--return-code" "/opt/ros/noetic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/athome23-5/tiago_public_ws/build/social_navigation_layers/test_results/social_navigation_layers/roslint-social_navigation_layers.xml make roslint_social_navigation_layers")
set_tests_properties(_ctest_social_navigation_layers_roslint_package PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslint/cmake/roslint-extras.cmake;67;catkin_run_tests_target;/home/athome23-5/tiago_public_ws/src/navigation_layers/social_navigation_layers/CMakeLists.txt;43;roslint_add_test;/home/athome23-5/tiago_public_ws/src/navigation_layers/social_navigation_layers/CMakeLists.txt;0;")
subdirs("gtest")
