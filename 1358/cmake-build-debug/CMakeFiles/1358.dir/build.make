# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Jeremie\Desktop\code\contests\1358

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Jeremie\Desktop\code\contests\1358\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1358.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1358.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1358.dir/flags.make

CMakeFiles/1358.dir/main.cpp.obj: CMakeFiles/1358.dir/flags.make
CMakeFiles/1358.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jeremie\Desktop\code\contests\1358\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1358.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1358.dir\main.cpp.obj -c C:\Users\Jeremie\Desktop\code\contests\1358\main.cpp

CMakeFiles/1358.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1358.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jeremie\Desktop\code\contests\1358\main.cpp > CMakeFiles\1358.dir\main.cpp.i

CMakeFiles/1358.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1358.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jeremie\Desktop\code\contests\1358\main.cpp -o CMakeFiles\1358.dir\main.cpp.s

# Object files for target 1358
1358_OBJECTS = \
"CMakeFiles/1358.dir/main.cpp.obj"

# External object files for target 1358
1358_EXTERNAL_OBJECTS =

1358.exe: CMakeFiles/1358.dir/main.cpp.obj
1358.exe: CMakeFiles/1358.dir/build.make
1358.exe: CMakeFiles/1358.dir/linklibs.rsp
1358.exe: CMakeFiles/1358.dir/objects1.rsp
1358.exe: CMakeFiles/1358.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Jeremie\Desktop\code\contests\1358\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1358.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1358.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1358.dir/build: 1358.exe

.PHONY : CMakeFiles/1358.dir/build

CMakeFiles/1358.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1358.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1358.dir/clean

CMakeFiles/1358.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Jeremie\Desktop\code\contests\1358 C:\Users\Jeremie\Desktop\code\contests\1358 C:\Users\Jeremie\Desktop\code\contests\1358\cmake-build-debug C:\Users\Jeremie\Desktop\code\contests\1358\cmake-build-debug C:\Users\Jeremie\Desktop\code\contests\1358\cmake-build-debug\CMakeFiles\1358.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1358.dir/depend

