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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pi/Desktop/IEP/lab5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/Desktop/IEP/lab5/build

# Include any dependencies generated for this target.
include CMakeFiles/more_classes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/more_classes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/more_classes.dir/flags.make

CMakeFiles/more_classes.dir/main.cpp.o: CMakeFiles/more_classes.dir/flags.make
CMakeFiles/more_classes.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Desktop/IEP/lab5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/more_classes.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/more_classes.dir/main.cpp.o -c /home/pi/Desktop/IEP/lab5/main.cpp

CMakeFiles/more_classes.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/more_classes.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Desktop/IEP/lab5/main.cpp > CMakeFiles/more_classes.dir/main.cpp.i

CMakeFiles/more_classes.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/more_classes.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Desktop/IEP/lab5/main.cpp -o CMakeFiles/more_classes.dir/main.cpp.s

# Object files for target more_classes
more_classes_OBJECTS = \
"CMakeFiles/more_classes.dir/main.cpp.o"

# External object files for target more_classes
more_classes_EXTERNAL_OBJECTS =

more_classes: CMakeFiles/more_classes.dir/main.cpp.o
more_classes: CMakeFiles/more_classes.dir/build.make
more_classes: CMakeFiles/more_classes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/Desktop/IEP/lab5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable more_classes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/more_classes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/more_classes.dir/build: more_classes

.PHONY : CMakeFiles/more_classes.dir/build

CMakeFiles/more_classes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/more_classes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/more_classes.dir/clean

CMakeFiles/more_classes.dir/depend:
	cd /home/pi/Desktop/IEP/lab5/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/Desktop/IEP/lab5 /home/pi/Desktop/IEP/lab5 /home/pi/Desktop/IEP/lab5/build /home/pi/Desktop/IEP/lab5/build /home/pi/Desktop/IEP/lab5/build/CMakeFiles/more_classes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/more_classes.dir/depend
