# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /mnt/d/Workspace/github.com/Soul-Mate/cpp-primer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Workspace/github.com/Soul-Mate/cpp-primer/build

# Include any dependencies generated for this target.
include exercises/CMakeFiles/3_26.dir/depend.make

# Include the progress variables for this target.
include exercises/CMakeFiles/3_26.dir/progress.make

# Include the compile flags for this target's objects.
include exercises/CMakeFiles/3_26.dir/flags.make

exercises/CMakeFiles/3_26.dir/3_26.cc.o: exercises/CMakeFiles/3_26.dir/flags.make
exercises/CMakeFiles/3_26.dir/3_26.cc.o: ../exercises/3_26.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Workspace/github.com/Soul-Mate/cpp-primer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object exercises/CMakeFiles/3_26.dir/3_26.cc.o"
	cd /mnt/d/Workspace/github.com/Soul-Mate/cpp-primer/build/exercises && /usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/3_26.dir/3_26.cc.o -c /mnt/d/Workspace/github.com/Soul-Mate/cpp-primer/exercises/3_26.cc

exercises/CMakeFiles/3_26.dir/3_26.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3_26.dir/3_26.cc.i"
	cd /mnt/d/Workspace/github.com/Soul-Mate/cpp-primer/build/exercises && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Workspace/github.com/Soul-Mate/cpp-primer/exercises/3_26.cc > CMakeFiles/3_26.dir/3_26.cc.i

exercises/CMakeFiles/3_26.dir/3_26.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3_26.dir/3_26.cc.s"
	cd /mnt/d/Workspace/github.com/Soul-Mate/cpp-primer/build/exercises && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Workspace/github.com/Soul-Mate/cpp-primer/exercises/3_26.cc -o CMakeFiles/3_26.dir/3_26.cc.s

exercises/CMakeFiles/3_26.dir/3_26.cc.o.requires:

.PHONY : exercises/CMakeFiles/3_26.dir/3_26.cc.o.requires

exercises/CMakeFiles/3_26.dir/3_26.cc.o.provides: exercises/CMakeFiles/3_26.dir/3_26.cc.o.requires
	$(MAKE) -f exercises/CMakeFiles/3_26.dir/build.make exercises/CMakeFiles/3_26.dir/3_26.cc.o.provides.build
.PHONY : exercises/CMakeFiles/3_26.dir/3_26.cc.o.provides

exercises/CMakeFiles/3_26.dir/3_26.cc.o.provides.build: exercises/CMakeFiles/3_26.dir/3_26.cc.o


# Object files for target 3_26
3_26_OBJECTS = \
"CMakeFiles/3_26.dir/3_26.cc.o"

# External object files for target 3_26
3_26_EXTERNAL_OBJECTS =

exercises/3_26: exercises/CMakeFiles/3_26.dir/3_26.cc.o
exercises/3_26: exercises/CMakeFiles/3_26.dir/build.make
exercises/3_26: exercises/CMakeFiles/3_26.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Workspace/github.com/Soul-Mate/cpp-primer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 3_26"
	cd /mnt/d/Workspace/github.com/Soul-Mate/cpp-primer/build/exercises && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/3_26.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
exercises/CMakeFiles/3_26.dir/build: exercises/3_26

.PHONY : exercises/CMakeFiles/3_26.dir/build

exercises/CMakeFiles/3_26.dir/requires: exercises/CMakeFiles/3_26.dir/3_26.cc.o.requires

.PHONY : exercises/CMakeFiles/3_26.dir/requires

exercises/CMakeFiles/3_26.dir/clean:
	cd /mnt/d/Workspace/github.com/Soul-Mate/cpp-primer/build/exercises && $(CMAKE_COMMAND) -P CMakeFiles/3_26.dir/cmake_clean.cmake
.PHONY : exercises/CMakeFiles/3_26.dir/clean

exercises/CMakeFiles/3_26.dir/depend:
	cd /mnt/d/Workspace/github.com/Soul-Mate/cpp-primer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Workspace/github.com/Soul-Mate/cpp-primer /mnt/d/Workspace/github.com/Soul-Mate/cpp-primer/exercises /mnt/d/Workspace/github.com/Soul-Mate/cpp-primer/build /mnt/d/Workspace/github.com/Soul-Mate/cpp-primer/build/exercises /mnt/d/Workspace/github.com/Soul-Mate/cpp-primer/build/exercises/CMakeFiles/3_26.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : exercises/CMakeFiles/3_26.dir/depend

