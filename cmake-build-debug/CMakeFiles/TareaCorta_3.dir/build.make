# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = C:\Users\sebas\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.6817.32\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\sebas\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.6817.32\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\GitHub_Projects\TareaCorta_3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\GitHub_Projects\TareaCorta_3\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TareaCorta_3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TareaCorta_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TareaCorta_3.dir/flags.make

CMakeFiles/TareaCorta_3.dir/main.cpp.obj: CMakeFiles/TareaCorta_3.dir/flags.make
CMakeFiles/TareaCorta_3.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\GitHub_Projects\TareaCorta_3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TareaCorta_3.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TareaCorta_3.dir\main.cpp.obj -c C:\GitHub_Projects\TareaCorta_3\main.cpp

CMakeFiles/TareaCorta_3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TareaCorta_3.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\GitHub_Projects\TareaCorta_3\main.cpp > CMakeFiles\TareaCorta_3.dir\main.cpp.i

CMakeFiles/TareaCorta_3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TareaCorta_3.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\GitHub_Projects\TareaCorta_3\main.cpp -o CMakeFiles\TareaCorta_3.dir\main.cpp.s

# Object files for target TareaCorta_3
TareaCorta_3_OBJECTS = \
"CMakeFiles/TareaCorta_3.dir/main.cpp.obj"

# External object files for target TareaCorta_3
TareaCorta_3_EXTERNAL_OBJECTS =

TareaCorta_3.exe: CMakeFiles/TareaCorta_3.dir/main.cpp.obj
TareaCorta_3.exe: CMakeFiles/TareaCorta_3.dir/build.make
TareaCorta_3.exe: CMakeFiles/TareaCorta_3.dir/linklibs.rsp
TareaCorta_3.exe: CMakeFiles/TareaCorta_3.dir/objects1.rsp
TareaCorta_3.exe: CMakeFiles/TareaCorta_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\GitHub_Projects\TareaCorta_3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TareaCorta_3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TareaCorta_3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TareaCorta_3.dir/build: TareaCorta_3.exe

.PHONY : CMakeFiles/TareaCorta_3.dir/build

CMakeFiles/TareaCorta_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TareaCorta_3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TareaCorta_3.dir/clean

CMakeFiles/TareaCorta_3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\GitHub_Projects\TareaCorta_3 C:\GitHub_Projects\TareaCorta_3 C:\GitHub_Projects\TareaCorta_3\cmake-build-debug C:\GitHub_Projects\TareaCorta_3\cmake-build-debug C:\GitHub_Projects\TareaCorta_3\cmake-build-debug\CMakeFiles\TareaCorta_3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TareaCorta_3.dir/depend

