# CMake generated Testfile for 
# Source directory: /home/athome23-5/tiago_public_ws/src/pal_python
# Build directory: /home/athome23-5/tiago_public_ws/build/pal_python
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_pal_python_nosetests_test.test_shell_cmd.py "/home/athome23-5/tiago_public_ws/build/pal_python/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/athome23-5/tiago_public_ws/build/pal_python/test_results/pal_python/nosetests-test.test_shell_cmd.py.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /home/athome23-5/tiago_public_ws/build/pal_python/test_results/pal_python" "/usr/bin/nosetests3 -P --process-timeout=60 /home/athome23-5/tiago_public_ws/src/pal_python/test/test_shell_cmd.py --with-xunit --xunit-file=/home/athome23-5/tiago_public_ws/build/pal_python/test_results/pal_python/nosetests-test.test_shell_cmd.py.xml")
set_tests_properties(_ctest_pal_python_nosetests_test.test_shell_cmd.py PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/catkin/cmake/test/nosetests.cmake;83;catkin_run_tests_target;/home/athome23-5/tiago_public_ws/src/pal_python/CMakeLists.txt;18;catkin_add_nosetests;/home/athome23-5/tiago_public_ws/src/pal_python/CMakeLists.txt;0;")
subdirs("gtest")
