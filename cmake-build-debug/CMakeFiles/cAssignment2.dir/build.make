# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/dylanmurphy/Desktop/cAssignment2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dylanmurphy/Desktop/cAssignment2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cAssignment2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cAssignment2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cAssignment2.dir/flags.make

CMakeFiles/cAssignment2.dir/main.c.o: CMakeFiles/cAssignment2.dir/flags.make
CMakeFiles/cAssignment2.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dylanmurphy/Desktop/cAssignment2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cAssignment2.dir/main.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cAssignment2.dir/main.c.o   -c /Users/dylanmurphy/Desktop/cAssignment2/main.c

CMakeFiles/cAssignment2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cAssignment2.dir/main.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dylanmurphy/Desktop/cAssignment2/main.c > CMakeFiles/cAssignment2.dir/main.c.i

CMakeFiles/cAssignment2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cAssignment2.dir/main.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dylanmurphy/Desktop/cAssignment2/main.c -o CMakeFiles/cAssignment2.dir/main.c.s

CMakeFiles/cAssignment2.dir/game_func.c.o: CMakeFiles/cAssignment2.dir/flags.make
CMakeFiles/cAssignment2.dir/game_func.c.o: ../game_func.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dylanmurphy/Desktop/cAssignment2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/cAssignment2.dir/game_func.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cAssignment2.dir/game_func.c.o   -c /Users/dylanmurphy/Desktop/cAssignment2/game_func.c

CMakeFiles/cAssignment2.dir/game_func.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cAssignment2.dir/game_func.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dylanmurphy/Desktop/cAssignment2/game_func.c > CMakeFiles/cAssignment2.dir/game_func.c.i

CMakeFiles/cAssignment2.dir/game_func.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cAssignment2.dir/game_func.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dylanmurphy/Desktop/cAssignment2/game_func.c -o CMakeFiles/cAssignment2.dir/game_func.c.s

# Object files for target cAssignment2
cAssignment2_OBJECTS = \
"CMakeFiles/cAssignment2.dir/main.c.o" \
"CMakeFiles/cAssignment2.dir/game_func.c.o"

# External object files for target cAssignment2
cAssignment2_EXTERNAL_OBJECTS =

cAssignment2: CMakeFiles/cAssignment2.dir/main.c.o
cAssignment2: CMakeFiles/cAssignment2.dir/game_func.c.o
cAssignment2: CMakeFiles/cAssignment2.dir/build.make
cAssignment2: CMakeFiles/cAssignment2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dylanmurphy/Desktop/cAssignment2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable cAssignment2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cAssignment2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cAssignment2.dir/build: cAssignment2

.PHONY : CMakeFiles/cAssignment2.dir/build

CMakeFiles/cAssignment2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cAssignment2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cAssignment2.dir/clean

CMakeFiles/cAssignment2.dir/depend:
	cd /Users/dylanmurphy/Desktop/cAssignment2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dylanmurphy/Desktop/cAssignment2 /Users/dylanmurphy/Desktop/cAssignment2 /Users/dylanmurphy/Desktop/cAssignment2/cmake-build-debug /Users/dylanmurphy/Desktop/cAssignment2/cmake-build-debug /Users/dylanmurphy/Desktop/cAssignment2/cmake-build-debug/CMakeFiles/cAssignment2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cAssignment2.dir/depend

