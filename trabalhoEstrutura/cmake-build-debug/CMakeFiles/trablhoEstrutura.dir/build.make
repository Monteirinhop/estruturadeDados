# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Gustavo Monteiro\estruturadeDados\trabalhoEstrutura"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Gustavo Monteiro\estruturadeDados\trabalhoEstrutura\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/trablhoEstrutura.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/trablhoEstrutura.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/trablhoEstrutura.dir/flags.make

CMakeFiles/trablhoEstrutura.dir/gilmarmeFudeu.cpp.obj: CMakeFiles/trablhoEstrutura.dir/flags.make
CMakeFiles/trablhoEstrutura.dir/gilmarmeFudeu.cpp.obj: ../gilmarmeFudeu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Gustavo Monteiro\estruturadeDados\trabalhoEstrutura\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/trablhoEstrutura.dir/gilmarmeFudeu.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\trablhoEstrutura.dir\gilmarmeFudeu.cpp.obj -c "C:\Users\Gustavo Monteiro\estruturadeDados\trabalhoEstrutura\gilmarmeFudeu.cpp"

CMakeFiles/trablhoEstrutura.dir/gilmarmeFudeu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trablhoEstrutura.dir/gilmarmeFudeu.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Gustavo Monteiro\estruturadeDados\trabalhoEstrutura\gilmarmeFudeu.cpp" > CMakeFiles\trablhoEstrutura.dir\gilmarmeFudeu.cpp.i

CMakeFiles/trablhoEstrutura.dir/gilmarmeFudeu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trablhoEstrutura.dir/gilmarmeFudeu.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Gustavo Monteiro\estruturadeDados\trabalhoEstrutura\gilmarmeFudeu.cpp" -o CMakeFiles\trablhoEstrutura.dir\gilmarmeFudeu.cpp.s

# Object files for target trablhoEstrutura
trablhoEstrutura_OBJECTS = \
"CMakeFiles/trablhoEstrutura.dir/gilmarmeFudeu.cpp.obj"

# External object files for target trablhoEstrutura
trablhoEstrutura_EXTERNAL_OBJECTS =

trablhoEstrutura.exe: CMakeFiles/trablhoEstrutura.dir/gilmarmeFudeu.cpp.obj
trablhoEstrutura.exe: CMakeFiles/trablhoEstrutura.dir/build.make
trablhoEstrutura.exe: CMakeFiles/trablhoEstrutura.dir/linklibs.rsp
trablhoEstrutura.exe: CMakeFiles/trablhoEstrutura.dir/objects1.rsp
trablhoEstrutura.exe: CMakeFiles/trablhoEstrutura.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Gustavo Monteiro\estruturadeDados\trabalhoEstrutura\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable trablhoEstrutura.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\trablhoEstrutura.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/trablhoEstrutura.dir/build: trablhoEstrutura.exe

.PHONY : CMakeFiles/trablhoEstrutura.dir/build

CMakeFiles/trablhoEstrutura.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\trablhoEstrutura.dir\cmake_clean.cmake
.PHONY : CMakeFiles/trablhoEstrutura.dir/clean

CMakeFiles/trablhoEstrutura.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Gustavo Monteiro\estruturadeDados\trabalhoEstrutura" "C:\Users\Gustavo Monteiro\estruturadeDados\trabalhoEstrutura" "C:\Users\Gustavo Monteiro\estruturadeDados\trabalhoEstrutura\cmake-build-debug" "C:\Users\Gustavo Monteiro\estruturadeDados\trabalhoEstrutura\cmake-build-debug" "C:\Users\Gustavo Monteiro\estruturadeDados\trabalhoEstrutura\cmake-build-debug\CMakeFiles\trablhoEstrutura.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/trablhoEstrutura.dir/depend

