# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/marklee/find_a_job/git/Data_structure

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marklee/find_a_job/git/Data_structure/build

# Include any dependencies generated for this target.
include CMakeFiles/leet_exe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/leet_exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/leet_exe.dir/flags.make

CMakeFiles/leet_exe.dir/leetcode.cpp.o: CMakeFiles/leet_exe.dir/flags.make
CMakeFiles/leet_exe.dir/leetcode.cpp.o: ../leetcode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marklee/find_a_job/git/Data_structure/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/leet_exe.dir/leetcode.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/leet_exe.dir/leetcode.cpp.o -c /home/marklee/find_a_job/git/Data_structure/leetcode.cpp

CMakeFiles/leet_exe.dir/leetcode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leet_exe.dir/leetcode.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marklee/find_a_job/git/Data_structure/leetcode.cpp > CMakeFiles/leet_exe.dir/leetcode.cpp.i

CMakeFiles/leet_exe.dir/leetcode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leet_exe.dir/leetcode.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marklee/find_a_job/git/Data_structure/leetcode.cpp -o CMakeFiles/leet_exe.dir/leetcode.cpp.s

CMakeFiles/leet_exe.dir/src/algorithm.cpp.o: CMakeFiles/leet_exe.dir/flags.make
CMakeFiles/leet_exe.dir/src/algorithm.cpp.o: ../src/algorithm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marklee/find_a_job/git/Data_structure/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/leet_exe.dir/src/algorithm.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/leet_exe.dir/src/algorithm.cpp.o -c /home/marklee/find_a_job/git/Data_structure/src/algorithm.cpp

CMakeFiles/leet_exe.dir/src/algorithm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leet_exe.dir/src/algorithm.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marklee/find_a_job/git/Data_structure/src/algorithm.cpp > CMakeFiles/leet_exe.dir/src/algorithm.cpp.i

CMakeFiles/leet_exe.dir/src/algorithm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leet_exe.dir/src/algorithm.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marklee/find_a_job/git/Data_structure/src/algorithm.cpp -o CMakeFiles/leet_exe.dir/src/algorithm.cpp.s

# Object files for target leet_exe
leet_exe_OBJECTS = \
"CMakeFiles/leet_exe.dir/leetcode.cpp.o" \
"CMakeFiles/leet_exe.dir/src/algorithm.cpp.o"

# External object files for target leet_exe
leet_exe_EXTERNAL_OBJECTS =

leet_exe: CMakeFiles/leet_exe.dir/leetcode.cpp.o
leet_exe: CMakeFiles/leet_exe.dir/src/algorithm.cpp.o
leet_exe: CMakeFiles/leet_exe.dir/build.make
leet_exe: CMakeFiles/leet_exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/marklee/find_a_job/git/Data_structure/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable leet_exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/leet_exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/leet_exe.dir/build: leet_exe

.PHONY : CMakeFiles/leet_exe.dir/build

CMakeFiles/leet_exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/leet_exe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/leet_exe.dir/clean

CMakeFiles/leet_exe.dir/depend:
	cd /home/marklee/find_a_job/git/Data_structure/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marklee/find_a_job/git/Data_structure /home/marklee/find_a_job/git/Data_structure /home/marklee/find_a_job/git/Data_structure/build /home/marklee/find_a_job/git/Data_structure/build /home/marklee/find_a_job/git/Data_structure/build/CMakeFiles/leet_exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/leet_exe.dir/depend

