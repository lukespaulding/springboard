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
include src/game_lib/CMakeFiles/Game.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/game_lib/CMakeFiles/Game.dir/compiler_depend.make

# Include the progress variables for this target.
include src/game_lib/CMakeFiles/Game.dir/progress.make

# Include the compile flags for this target's objects.
include src/game_lib/CMakeFiles/Game.dir/flags.make

src/game_lib/CMakeFiles/Game.dir/Game.cpp.obj: src/game_lib/CMakeFiles/Game.dir/flags.make
src/game_lib/CMakeFiles/Game.dir/Game.cpp.obj: src/game_lib/CMakeFiles/Game.dir/includes_CXX.rsp
src/game_lib/CMakeFiles/Game.dir/Game.cpp.obj: C:/Users/lukes/Springboard/springboard/spriNGboard_week_07-main/src/game_lib/Game.cpp
src/game_lib/CMakeFiles/Game.dir/Game.cpp.obj: src/game_lib/CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lukes\Springboard\springboard\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/game_lib/CMakeFiles/Game.dir/Game.cpp.obj"
	cd /d C:\Users\lukes\Springboard\springboard\build\src\game_lib && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/game_lib/CMakeFiles/Game.dir/Game.cpp.obj -MF CMakeFiles\Game.dir\Game.cpp.obj.d -o CMakeFiles\Game.dir\Game.cpp.obj -c C:\Users\lukes\Springboard\springboard\spriNGboard_week_07-main\src\game_lib\Game.cpp

src/game_lib/CMakeFiles/Game.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Game.cpp.i"
	cd /d C:\Users\lukes\Springboard\springboard\build\src\game_lib && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lukes\Springboard\springboard\spriNGboard_week_07-main\src\game_lib\Game.cpp > CMakeFiles\Game.dir\Game.cpp.i

src/game_lib/CMakeFiles/Game.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Game.cpp.s"
	cd /d C:\Users\lukes\Springboard\springboard\build\src\game_lib && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lukes\Springboard\springboard\spriNGboard_week_07-main\src\game_lib\Game.cpp -o CMakeFiles\Game.dir\Game.cpp.s

# Object files for target Game
Game_OBJECTS = \
"CMakeFiles/Game.dir/Game.cpp.obj"

# External object files for target Game
Game_EXTERNAL_OBJECTS =

src/game_lib/libGame.a: src/game_lib/CMakeFiles/Game.dir/Game.cpp.obj
src/game_lib/libGame.a: src/game_lib/CMakeFiles/Game.dir/build.make
src/game_lib/libGame.a: src/game_lib/CMakeFiles/Game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\lukes\Springboard\springboard\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libGame.a"
	cd /d C:\Users\lukes\Springboard\springboard\build\src\game_lib && $(CMAKE_COMMAND) -P CMakeFiles\Game.dir\cmake_clean_target.cmake
	cd /d C:\Users\lukes\Springboard\springboard\build\src\game_lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Game.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/game_lib/CMakeFiles/Game.dir/build: src/game_lib/libGame.a
.PHONY : src/game_lib/CMakeFiles/Game.dir/build

src/game_lib/CMakeFiles/Game.dir/clean:
	cd /d C:\Users\lukes\Springboard\springboard\build\src\game_lib && $(CMAKE_COMMAND) -P CMakeFiles\Game.dir\cmake_clean.cmake
.PHONY : src/game_lib/CMakeFiles/Game.dir/clean

src/game_lib/CMakeFiles/Game.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\lukes\Springboard\springboard\spriNGboard_week_07-main C:\Users\lukes\Springboard\springboard\spriNGboard_week_07-main\src\game_lib C:\Users\lukes\Springboard\springboard\build C:\Users\lukes\Springboard\springboard\build\src\game_lib C:\Users\lukes\Springboard\springboard\build\src\game_lib\CMakeFiles\Game.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/game_lib/CMakeFiles/Game.dir/depend

