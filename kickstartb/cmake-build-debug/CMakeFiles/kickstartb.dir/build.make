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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\jerem\Desktop\code\contest\kickstartb

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jerem\Desktop\code\contest\kickstartb\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/kickstartb.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/kickstartb.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/kickstartb.dir/flags.make

CMakeFiles/kickstartb.dir/main.cpp.obj: CMakeFiles/kickstartb.dir/flags.make
CMakeFiles/kickstartb.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jerem\Desktop\code\contest\kickstartb\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/kickstartb.dir/main.cpp.obj"
	C:\Mingw-w64\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\kickstartb.dir\main.cpp.obj -c C:\Users\jerem\Desktop\code\contest\kickstartb\main.cpp

CMakeFiles/kickstartb.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kickstartb.dir/main.cpp.i"
	C:\Mingw-w64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jerem\Desktop\code\contest\kickstartb\main.cpp > CMakeFiles\kickstartb.dir\main.cpp.i

CMakeFiles/kickstartb.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kickstartb.dir/main.cpp.s"
	C:\Mingw-w64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jerem\Desktop\code\contest\kickstartb\main.cpp -o CMakeFiles\kickstartb.dir\main.cpp.s

# Object files for target kickstartb
kickstartb_OBJECTS = \
"CMakeFiles/kickstartb.dir/main.cpp.obj"

# External object files for target kickstartb
kickstartb_EXTERNAL_OBJECTS =

kickstartb.exe: CMakeFiles/kickstartb.dir/main.cpp.obj
kickstartb.exe: CMakeFiles/kickstartb.dir/build.make
kickstartb.exe: CMakeFiles/kickstartb.dir/linklibs.rsp
kickstartb.exe: CMakeFiles/kickstartb.dir/objects1.rsp
kickstartb.exe: CMakeFiles/kickstartb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\jerem\Desktop\code\contest\kickstartb\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable kickstartb.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\kickstartb.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/kickstartb.dir/build: kickstartb.exe

.PHONY : CMakeFiles/kickstartb.dir/build

CMakeFiles/kickstartb.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\kickstartb.dir\cmake_clean.cmake
.PHONY : CMakeFiles/kickstartb.dir/clean

CMakeFiles/kickstartb.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jerem\Desktop\code\contest\kickstartb C:\Users\jerem\Desktop\code\contest\kickstartb C:\Users\jerem\Desktop\code\contest\kickstartb\cmake-build-debug C:\Users\jerem\Desktop\code\contest\kickstartb\cmake-build-debug C:\Users\jerem\Desktop\code\contest\kickstartb\cmake-build-debug\CMakeFiles\kickstartb.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/kickstartb.dir/depend

