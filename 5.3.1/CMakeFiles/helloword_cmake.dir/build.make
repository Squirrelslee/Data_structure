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
CMAKE_SOURCE_DIR = /home/marklee/cmake/5.3.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marklee/cmake/5.3.1

# Include any dependencies generated for this target.
include CMakeFiles/helloword_cmake.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/helloword_cmake.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/helloword_cmake.dir/flags.make

CMakeFiles/helloword_cmake.dir/helloword.cpp.o: CMakeFiles/helloword_cmake.dir/flags.make
CMakeFiles/helloword_cmake.dir/helloword.cpp.o: helloword.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marklee/cmake/5.3.1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/helloword_cmake.dir/helloword.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/helloword_cmake.dir/helloword.cpp.o -c /home/marklee/cmake/5.3.1/helloword.cpp

CMakeFiles/helloword_cmake.dir/helloword.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/helloword_cmake.dir/helloword.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marklee/cmake/5.3.1/helloword.cpp > CMakeFiles/helloword_cmake.dir/helloword.cpp.i

CMakeFiles/helloword_cmake.dir/helloword.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/helloword_cmake.dir/helloword.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marklee/cmake/5.3.1/helloword.cpp -o CMakeFiles/helloword_cmake.dir/helloword.cpp.s

# Object files for target helloword_cmake
helloword_cmake_OBJECTS = \
"CMakeFiles/helloword_cmake.dir/helloword.cpp.o"

# External object files for target helloword_cmake
helloword_cmake_EXTERNAL_OBJECTS =

helloword_cmake: CMakeFiles/helloword_cmake.dir/helloword.cpp.o
helloword_cmake: CMakeFiles/helloword_cmake.dir/build.make
helloword_cmake: CMakeFiles/helloword_cmake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/marklee/cmake/5.3.1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable helloword_cmake"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/helloword_cmake.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/helloword_cmake.dir/build: helloword_cmake

.PHONY : CMakeFiles/helloword_cmake.dir/build

CMakeFiles/helloword_cmake.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/helloword_cmake.dir/cmake_clean.cmake
.PHONY : CMakeFiles/helloword_cmake.dir/clean

CMakeFiles/helloword_cmake.dir/depend:
	cd /home/marklee/cmake/5.3.1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marklee/cmake/5.3.1 /home/marklee/cmake/5.3.1 /home/marklee/cmake/5.3.1 /home/marklee/cmake/5.3.1 /home/marklee/cmake/5.3.1/CMakeFiles/helloword_cmake.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/helloword_cmake.dir/depend

