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
CMAKE_SOURCE_DIR = /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/search_insert_pos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/search_insert_pos/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/search_insert_pos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/search_insert_pos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/search_insert_pos.dir/flags.make

CMakeFiles/search_insert_pos.dir/main.cpp.o: CMakeFiles/search_insert_pos.dir/flags.make
CMakeFiles/search_insert_pos.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/search_insert_pos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/search_insert_pos.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/search_insert_pos.dir/main.cpp.o -c /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/search_insert_pos/main.cpp

CMakeFiles/search_insert_pos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/search_insert_pos.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/search_insert_pos/main.cpp > CMakeFiles/search_insert_pos.dir/main.cpp.i

CMakeFiles/search_insert_pos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/search_insert_pos.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/search_insert_pos/main.cpp -o CMakeFiles/search_insert_pos.dir/main.cpp.s

# Object files for target search_insert_pos
search_insert_pos_OBJECTS = \
"CMakeFiles/search_insert_pos.dir/main.cpp.o"

# External object files for target search_insert_pos
search_insert_pos_EXTERNAL_OBJECTS =

search_insert_pos: CMakeFiles/search_insert_pos.dir/main.cpp.o
search_insert_pos: CMakeFiles/search_insert_pos.dir/build.make
search_insert_pos: CMakeFiles/search_insert_pos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/search_insert_pos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable search_insert_pos"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/search_insert_pos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/search_insert_pos.dir/build: search_insert_pos

.PHONY : CMakeFiles/search_insert_pos.dir/build

CMakeFiles/search_insert_pos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/search_insert_pos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/search_insert_pos.dir/clean

CMakeFiles/search_insert_pos.dir/depend:
	cd /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/search_insert_pos/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/search_insert_pos /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/search_insert_pos /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/search_insert_pos/cmake-build-debug /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/search_insert_pos/cmake-build-debug /Users/fangruiqian/old_data/Desktop/inke/inke_environment/src/github.com/leetcode_code/search_insert_pos/cmake-build-debug/CMakeFiles/search_insert_pos.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/search_insert_pos.dir/depend

