# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/bit_con_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/bit_con_test/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bit_con_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bit_con_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bit_con_test.dir/flags.make

CMakeFiles/bit_con_test.dir/main.cpp.o: CMakeFiles/bit_con_test.dir/flags.make
CMakeFiles/bit_con_test.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/bit_con_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bit_con_test.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bit_con_test.dir/main.cpp.o -c /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/bit_con_test/main.cpp

CMakeFiles/bit_con_test.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bit_con_test.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/bit_con_test/main.cpp > CMakeFiles/bit_con_test.dir/main.cpp.i

CMakeFiles/bit_con_test.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bit_con_test.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/bit_con_test/main.cpp -o CMakeFiles/bit_con_test.dir/main.cpp.s

# Object files for target bit_con_test
bit_con_test_OBJECTS = \
"CMakeFiles/bit_con_test.dir/main.cpp.o"

# External object files for target bit_con_test
bit_con_test_EXTERNAL_OBJECTS =

bit_con_test: CMakeFiles/bit_con_test.dir/main.cpp.o
bit_con_test: CMakeFiles/bit_con_test.dir/build.make
bit_con_test: CMakeFiles/bit_con_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/bit_con_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bit_con_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bit_con_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bit_con_test.dir/build: bit_con_test

.PHONY : CMakeFiles/bit_con_test.dir/build

CMakeFiles/bit_con_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bit_con_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bit_con_test.dir/clean

CMakeFiles/bit_con_test.dir/depend:
	cd /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/bit_con_test/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/bit_con_test /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/bit_con_test /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/bit_con_test/cmake-build-debug /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/bit_con_test/cmake-build-debug /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/bit_con_test/cmake-build-debug/CMakeFiles/bit_con_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bit_con_test.dir/depend

