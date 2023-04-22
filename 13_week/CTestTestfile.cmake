# CMake generated Testfile for 
# Source directory: /home/luke/new_workspace/springboard/13_week
# Build directory: /home/luke/new_workspace/springboard/13_week
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test("test__exercise_01_threads" "/home/luke/new_workspace/springboard/13_week/test/exercise_01_threads/test__exercise_01_threads")
set_tests_properties("test__exercise_01_threads" PROPERTIES  _BACKTRACE_TRIPLES "/home/luke/new_workspace/springboard/13_week/CMakeLists.txt;24;add_test;/home/luke/new_workspace/springboard/13_week/CMakeLists.txt;0;")
add_test("test__exercise_02_rcs" "/home/luke/new_workspace/springboard/13_week/test/exercise_02_rcs/test__exercise_02_rcs")
set_tests_properties("test__exercise_02_rcs" PROPERTIES  _BACKTRACE_TRIPLES "/home/luke/new_workspace/springboard/13_week/CMakeLists.txt;29;add_test;/home/luke/new_workspace/springboard/13_week/CMakeLists.txt;0;")
add_test("test__exercise_03_deadlock" "/home/luke/new_workspace/springboard/13_week/test/exercise_03_deadlock/test__exercise_03_deadlock")
set_tests_properties("test__exercise_03_deadlock" PROPERTIES  _BACKTRACE_TRIPLES "/home/luke/new_workspace/springboard/13_week/CMakeLists.txt;34;add_test;/home/luke/new_workspace/springboard/13_week/CMakeLists.txt;0;")
subdirs("test")
