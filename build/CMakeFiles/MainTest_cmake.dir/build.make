# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jianwen/CPPTinyCompiler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jianwen/CPPTinyCompiler/build

# Include any dependencies generated for this target.
include CMakeFiles/MainTest_cmake.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MainTest_cmake.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MainTest_cmake.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MainTest_cmake.dir/flags.make

CMakeFiles/MainTest_cmake.dir/src/compiler/Scan.cpp.o: CMakeFiles/MainTest_cmake.dir/flags.make
CMakeFiles/MainTest_cmake.dir/src/compiler/Scan.cpp.o: ../src/compiler/Scan.cpp
CMakeFiles/MainTest_cmake.dir/src/compiler/Scan.cpp.o: CMakeFiles/MainTest_cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jianwen/CPPTinyCompiler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MainTest_cmake.dir/src/compiler/Scan.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MainTest_cmake.dir/src/compiler/Scan.cpp.o -MF CMakeFiles/MainTest_cmake.dir/src/compiler/Scan.cpp.o.d -o CMakeFiles/MainTest_cmake.dir/src/compiler/Scan.cpp.o -c /home/jianwen/CPPTinyCompiler/src/compiler/Scan.cpp

CMakeFiles/MainTest_cmake.dir/src/compiler/Scan.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MainTest_cmake.dir/src/compiler/Scan.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jianwen/CPPTinyCompiler/src/compiler/Scan.cpp > CMakeFiles/MainTest_cmake.dir/src/compiler/Scan.cpp.i

CMakeFiles/MainTest_cmake.dir/src/compiler/Scan.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MainTest_cmake.dir/src/compiler/Scan.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jianwen/CPPTinyCompiler/src/compiler/Scan.cpp -o CMakeFiles/MainTest_cmake.dir/src/compiler/Scan.cpp.s

CMakeFiles/MainTest_cmake.dir/src/EntryPoint.cpp.o: CMakeFiles/MainTest_cmake.dir/flags.make
CMakeFiles/MainTest_cmake.dir/src/EntryPoint.cpp.o: ../src/EntryPoint.cpp
CMakeFiles/MainTest_cmake.dir/src/EntryPoint.cpp.o: CMakeFiles/MainTest_cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jianwen/CPPTinyCompiler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MainTest_cmake.dir/src/EntryPoint.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MainTest_cmake.dir/src/EntryPoint.cpp.o -MF CMakeFiles/MainTest_cmake.dir/src/EntryPoint.cpp.o.d -o CMakeFiles/MainTest_cmake.dir/src/EntryPoint.cpp.o -c /home/jianwen/CPPTinyCompiler/src/EntryPoint.cpp

CMakeFiles/MainTest_cmake.dir/src/EntryPoint.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MainTest_cmake.dir/src/EntryPoint.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jianwen/CPPTinyCompiler/src/EntryPoint.cpp > CMakeFiles/MainTest_cmake.dir/src/EntryPoint.cpp.i

CMakeFiles/MainTest_cmake.dir/src/EntryPoint.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MainTest_cmake.dir/src/EntryPoint.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jianwen/CPPTinyCompiler/src/EntryPoint.cpp -o CMakeFiles/MainTest_cmake.dir/src/EntryPoint.cpp.s

# Object files for target MainTest_cmake
MainTest_cmake_OBJECTS = \
"CMakeFiles/MainTest_cmake.dir/src/compiler/Scan.cpp.o" \
"CMakeFiles/MainTest_cmake.dir/src/EntryPoint.cpp.o"

# External object files for target MainTest_cmake
MainTest_cmake_EXTERNAL_OBJECTS =

MainTest_cmake: CMakeFiles/MainTest_cmake.dir/src/compiler/Scan.cpp.o
MainTest_cmake: CMakeFiles/MainTest_cmake.dir/src/EntryPoint.cpp.o
MainTest_cmake: CMakeFiles/MainTest_cmake.dir/build.make
MainTest_cmake: CMakeFiles/MainTest_cmake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jianwen/CPPTinyCompiler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable MainTest_cmake"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MainTest_cmake.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MainTest_cmake.dir/build: MainTest_cmake
.PHONY : CMakeFiles/MainTest_cmake.dir/build

CMakeFiles/MainTest_cmake.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MainTest_cmake.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MainTest_cmake.dir/clean

CMakeFiles/MainTest_cmake.dir/depend:
	cd /home/jianwen/CPPTinyCompiler/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jianwen/CPPTinyCompiler /home/jianwen/CPPTinyCompiler /home/jianwen/CPPTinyCompiler/build /home/jianwen/CPPTinyCompiler/build /home/jianwen/CPPTinyCompiler/build/CMakeFiles/MainTest_cmake.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MainTest_cmake.dir/depend
