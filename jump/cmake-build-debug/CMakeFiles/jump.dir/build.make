# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/jump

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/jump/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/jump.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/jump.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/jump.dir/flags.make

CMakeFiles/jump.dir/main.cpp.o: CMakeFiles/jump.dir/flags.make
CMakeFiles/jump.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/jump/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/jump.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jump.dir/main.cpp.o -c /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/jump/main.cpp

CMakeFiles/jump.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jump.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/jump/main.cpp > CMakeFiles/jump.dir/main.cpp.i

CMakeFiles/jump.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jump.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/jump/main.cpp -o CMakeFiles/jump.dir/main.cpp.s

# Object files for target jump
jump_OBJECTS = \
"CMakeFiles/jump.dir/main.cpp.o"

# External object files for target jump
jump_EXTERNAL_OBJECTS =

jump: CMakeFiles/jump.dir/main.cpp.o
jump: CMakeFiles/jump.dir/build.make
jump: CMakeFiles/jump.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/jump/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable jump"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/jump.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/jump.dir/build: jump
.PHONY : CMakeFiles/jump.dir/build

CMakeFiles/jump.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/jump.dir/cmake_clean.cmake
.PHONY : CMakeFiles/jump.dir/clean

CMakeFiles/jump.dir/depend:
	cd /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/jump/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/jump /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/jump /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/jump/cmake-build-debug /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/jump/cmake-build-debug /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/jump/cmake-build-debug/CMakeFiles/jump.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/jump.dir/depend
