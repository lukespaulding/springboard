# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\lukes\Springboard\springboard\spriNGboard_week_07-main

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\lukes\Springboard\springboard\build

# Include any dependencies generated for this target.
include src/game_runner/CMakeFiles/trivia.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/game_runner/CMakeFiles/trivia.dir/compiler_depend.make

# Include the progress variables for this target.
include src/game_runner/CMakeFiles/trivia.dir/progress.make

# Include the compile flags for this target's objects.
include src/game_runner/CMakeFiles/trivia.dir/flags.make

src/game_runner/CMakeFiles/trivia.dir/GameRunner.cpp.obj: src/game_runner/CMakeFiles/trivia.dir/flags.make
src/game_runner/CMakeFiles/trivia.dir/GameRunner.cpp.obj: src/game_runner/CMakeFiles/trivia.dir/includes_CXX.rsp
src/game_runner/CMakeFiles/trivia.dir/GameRunner.cpp.obj: C:/Users/lukes/Springboard/springboard/spriNGboard_week_07-main/src/game_runner/GameRunner.cpp
src/game_runner/CMakeFiles/trivia.dir/GameRunner.cpp.obj: src/game_runner/CMakeFiles/trivia.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lukes\Springboard\springboard\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/game_runner/CMakeFiles/trivia.dir/GameRunner.cpp.obj"
	cd /d C:\Users\lukes\Springboard\springboard\build\src\game_runner && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/game_runner/CMakeFiles/trivia.dir/GameRunner.cpp.obj -MF CMakeFiles\trivia.dir\GameRunner.cpp.obj.d -o CMakeFiles\trivia.dir\GameRunner.cpp.obj -c C:\Users\lukes\Springboard\springboard\spriNGboard_week_07-main\src\game_runner\GameRunner.cpp

src/game_runner/CMakeFiles/trivia.dir/GameRunner.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trivia.dir/GameRunner.cpp.i"
	cd /d C:\Users\lukes\Springboard\springboard\build\src\game_runner && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lukes\Springboard\springboard\spriNGboard_week_07-main\src\game_runner\GameRunner.cpp > CMakeFiles\trivia.dir\GameRunner.cpp.i

src/game_runner/CMakeFiles/trivia.dir/GameRunner.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trivia.dir/GameRunner.cpp.s"
	cd /d C:\Users\lukes\Springboard\springboard\build\src\game_runner && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lukes\Springboard\springboard\spriNGboard_week_07-main\src\game_runner\GameRunner.cpp -o CMakeFiles\trivia.dir\GameRunner.cpp.s

# Object files for target trivia
trivia_OBJECTS = \
"CMakeFiles/trivia.dir/GameRunner.cpp.obj"

# External object files for target trivia
trivia_EXTERNAL_OBJECTS =

src/game_runner/trivia.exe: src/game_runner/CMakeFiles/trivia.dir/GameRunner.cpp.obj
src/game_runner/trivia.exe: src/game_runner/CMakeFiles/trivia.dir/build.make
src/game_runner/trivia.exe: src/game_lib/libGame.a
src/game_runner/trivia.exe: src/game_runner/CMakeFiles/trivia.dir/linklibs.rsp
src/game_runner/trivia.exe: src/game_runner/CMakeFiles/trivia.dir/objects1.rsp
src/game_runner/trivia.exe: src/game_runner/CMakeFiles/trivia.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\lukes\Springboard\springboard\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable trivia.exe"
	cd /d C:\Users\lukes\Springboard\springboard\build\src\game_runner && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\trivia.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/game_runner/CMakeFiles/trivia.dir/build: src/game_runner/trivia.exe
.PHONY : src/game_runner/CMakeFiles/trivia.dir/build

src/game_runner/CMakeFiles/trivia.dir/clean:
	cd /d C:\Users\lukes\Springboard\springboard\build\src\game_runner && $(CMAKE_COMMAND) -P CMakeFiles\trivia.dir\cmake_clean.cmake
.PHONY : src/game_runner/CMakeFiles/trivia.dir/clean

src/game_runner/CMakeFiles/trivia.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\lukes\Springboard\springboard\spriNGboard_week_07-main C:\Users\lukes\Springboard\springboard\spriNGboard_week_07-main\src\game_runner C:\Users\lukes\Springboard\springboard\build C:\Users\lukes\Springboard\springboard\build\src\game_runner C:\Users\lukes\Springboard\springboard\build\src\game_runner\CMakeFiles\trivia.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/game_runner/CMakeFiles/trivia.dir/depend

