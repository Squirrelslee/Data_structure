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
include CMakeFiles/CppNewCharacteristic_exe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CppNewCharacteristic_exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CppNewCharacteristic_exe.dir/flags.make

CMakeFiles/CppNewCharacteristic_exe.dir/CppNewCharacteristic.cpp.o: CMakeFiles/CppNewCharacteristic_exe.dir/flags.make
CMakeFiles/CppNewCharacteristic_exe.dir/CppNewCharacteristic.cpp.o: ../CppNewCharacteristic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marklee/find_a_job/git/Data_structure/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CppNewCharacteristic_exe.dir/CppNewCharacteristic.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CppNewCharacteristic_exe.dir/CppNewCharacteristic.cpp.o -c /home/marklee/find_a_job/git/Data_structure/CppNewCharacteristic.cpp

CMakeFiles/CppNewCharacteristic_exe.dir/CppNewCharacteristic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppNewCharacteristic_exe.dir/CppNewCharacteristic.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marklee/find_a_job/git/Data_structure/CppNewCharacteristic.cpp > CMakeFiles/CppNewCharacteristic_exe.dir/CppNewCharacteristic.cpp.i

CMakeFiles/CppNewCharacteristic_exe.dir/CppNewCharacteristic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppNewCharacteristic_exe.dir/CppNewCharacteristic.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marklee/find_a_job/git/Data_structure/CppNewCharacteristic.cpp -o CMakeFiles/CppNewCharacteristic_exe.dir/CppNewCharacteristic.cpp.s

# Object files for target CppNewCharacteristic_exe
CppNewCharacteristic_exe_OBJECTS = \
"CMakeFiles/CppNewCharacteristic_exe.dir/CppNewCharacteristic.cpp.o"

# External object files for target CppNewCharacteristic_exe
CppNewCharacteristic_exe_EXTERNAL_OBJECTS =

CppNewCharacteristic_exe: CMakeFiles/CppNewCharacteristic_exe.dir/CppNewCharacteristic.cpp.o
CppNewCharacteristic_exe: CMakeFiles/CppNewCharacteristic_exe.dir/build.make
CppNewCharacteristic_exe: CMakeFiles/CppNewCharacteristic_exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/marklee/find_a_job/git/Data_structure/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CppNewCharacteristic_exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CppNewCharacteristic_exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CppNewCharacteristic_exe.dir/build: CppNewCharacteristic_exe

.PHONY : CMakeFiles/CppNewCharacteristic_exe.dir/build

CMakeFiles/CppNewCharacteristic_exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CppNewCharacteristic_exe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CppNewCharacteristic_exe.dir/clean

CMakeFiles/CppNewCharacteristic_exe.dir/depend:
	cd /home/marklee/find_a_job/git/Data_structure/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marklee/find_a_job/git/Data_structure /home/marklee/find_a_job/git/Data_structure /home/marklee/find_a_job/git/Data_structure/build /home/marklee/find_a_job/git/Data_structure/build /home/marklee/find_a_job/git/Data_structure/build/CMakeFiles/CppNewCharacteristic_exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CppNewCharacteristic_exe.dir/depend

