# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /snap/clion/151/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/151/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shahak/CLionProjects/pandemic

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shahak/CLionProjects/pandemic/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pandemic.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pandemic.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pandemic.dir/flags.make

CMakeFiles/pandemic.dir/Board.cpp.o: CMakeFiles/pandemic.dir/flags.make
CMakeFiles/pandemic.dir/Board.cpp.o: ../Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shahak/CLionProjects/pandemic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pandemic.dir/Board.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pandemic.dir/Board.cpp.o -c /home/shahak/CLionProjects/pandemic/Board.cpp

CMakeFiles/pandemic.dir/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pandemic.dir/Board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shahak/CLionProjects/pandemic/Board.cpp > CMakeFiles/pandemic.dir/Board.cpp.i

CMakeFiles/pandemic.dir/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pandemic.dir/Board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shahak/CLionProjects/pandemic/Board.cpp -o CMakeFiles/pandemic.dir/Board.cpp.s

CMakeFiles/pandemic.dir/Demo1.cpp.o: CMakeFiles/pandemic.dir/flags.make
CMakeFiles/pandemic.dir/Demo1.cpp.o: ../Demo1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shahak/CLionProjects/pandemic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/pandemic.dir/Demo1.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pandemic.dir/Demo1.cpp.o -c /home/shahak/CLionProjects/pandemic/Demo1.cpp

CMakeFiles/pandemic.dir/Demo1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pandemic.dir/Demo1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shahak/CLionProjects/pandemic/Demo1.cpp > CMakeFiles/pandemic.dir/Demo1.cpp.i

CMakeFiles/pandemic.dir/Demo1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pandemic.dir/Demo1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shahak/CLionProjects/pandemic/Demo1.cpp -o CMakeFiles/pandemic.dir/Demo1.cpp.s

CMakeFiles/pandemic.dir/Dispatcher.cpp.o: CMakeFiles/pandemic.dir/flags.make
CMakeFiles/pandemic.dir/Dispatcher.cpp.o: ../Dispatcher.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shahak/CLionProjects/pandemic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/pandemic.dir/Dispatcher.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pandemic.dir/Dispatcher.cpp.o -c /home/shahak/CLionProjects/pandemic/Dispatcher.cpp

CMakeFiles/pandemic.dir/Dispatcher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pandemic.dir/Dispatcher.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shahak/CLionProjects/pandemic/Dispatcher.cpp > CMakeFiles/pandemic.dir/Dispatcher.cpp.i

CMakeFiles/pandemic.dir/Dispatcher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pandemic.dir/Dispatcher.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shahak/CLionProjects/pandemic/Dispatcher.cpp -o CMakeFiles/pandemic.dir/Dispatcher.cpp.s

CMakeFiles/pandemic.dir/FieldDoctor.cpp.o: CMakeFiles/pandemic.dir/flags.make
CMakeFiles/pandemic.dir/FieldDoctor.cpp.o: ../FieldDoctor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shahak/CLionProjects/pandemic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/pandemic.dir/FieldDoctor.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pandemic.dir/FieldDoctor.cpp.o -c /home/shahak/CLionProjects/pandemic/FieldDoctor.cpp

CMakeFiles/pandemic.dir/FieldDoctor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pandemic.dir/FieldDoctor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shahak/CLionProjects/pandemic/FieldDoctor.cpp > CMakeFiles/pandemic.dir/FieldDoctor.cpp.i

CMakeFiles/pandemic.dir/FieldDoctor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pandemic.dir/FieldDoctor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shahak/CLionProjects/pandemic/FieldDoctor.cpp -o CMakeFiles/pandemic.dir/FieldDoctor.cpp.s

CMakeFiles/pandemic.dir/GeneSplicer.cpp.o: CMakeFiles/pandemic.dir/flags.make
CMakeFiles/pandemic.dir/GeneSplicer.cpp.o: ../GeneSplicer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shahak/CLionProjects/pandemic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/pandemic.dir/GeneSplicer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pandemic.dir/GeneSplicer.cpp.o -c /home/shahak/CLionProjects/pandemic/GeneSplicer.cpp

CMakeFiles/pandemic.dir/GeneSplicer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pandemic.dir/GeneSplicer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shahak/CLionProjects/pandemic/GeneSplicer.cpp > CMakeFiles/pandemic.dir/GeneSplicer.cpp.i

CMakeFiles/pandemic.dir/GeneSplicer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pandemic.dir/GeneSplicer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shahak/CLionProjects/pandemic/GeneSplicer.cpp -o CMakeFiles/pandemic.dir/GeneSplicer.cpp.s

CMakeFiles/pandemic.dir/Medic.cpp.o: CMakeFiles/pandemic.dir/flags.make
CMakeFiles/pandemic.dir/Medic.cpp.o: ../Medic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shahak/CLionProjects/pandemic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/pandemic.dir/Medic.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pandemic.dir/Medic.cpp.o -c /home/shahak/CLionProjects/pandemic/Medic.cpp

CMakeFiles/pandemic.dir/Medic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pandemic.dir/Medic.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shahak/CLionProjects/pandemic/Medic.cpp > CMakeFiles/pandemic.dir/Medic.cpp.i

CMakeFiles/pandemic.dir/Medic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pandemic.dir/Medic.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shahak/CLionProjects/pandemic/Medic.cpp -o CMakeFiles/pandemic.dir/Medic.cpp.s

CMakeFiles/pandemic.dir/OperationsExpert.cpp.o: CMakeFiles/pandemic.dir/flags.make
CMakeFiles/pandemic.dir/OperationsExpert.cpp.o: ../OperationsExpert.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shahak/CLionProjects/pandemic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/pandemic.dir/OperationsExpert.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pandemic.dir/OperationsExpert.cpp.o -c /home/shahak/CLionProjects/pandemic/OperationsExpert.cpp

CMakeFiles/pandemic.dir/OperationsExpert.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pandemic.dir/OperationsExpert.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shahak/CLionProjects/pandemic/OperationsExpert.cpp > CMakeFiles/pandemic.dir/OperationsExpert.cpp.i

CMakeFiles/pandemic.dir/OperationsExpert.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pandemic.dir/OperationsExpert.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shahak/CLionProjects/pandemic/OperationsExpert.cpp -o CMakeFiles/pandemic.dir/OperationsExpert.cpp.s

CMakeFiles/pandemic.dir/Player.cpp.o: CMakeFiles/pandemic.dir/flags.make
CMakeFiles/pandemic.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shahak/CLionProjects/pandemic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/pandemic.dir/Player.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pandemic.dir/Player.cpp.o -c /home/shahak/CLionProjects/pandemic/Player.cpp

CMakeFiles/pandemic.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pandemic.dir/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shahak/CLionProjects/pandemic/Player.cpp > CMakeFiles/pandemic.dir/Player.cpp.i

CMakeFiles/pandemic.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pandemic.dir/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shahak/CLionProjects/pandemic/Player.cpp -o CMakeFiles/pandemic.dir/Player.cpp.s

CMakeFiles/pandemic.dir/Researcher.cpp.o: CMakeFiles/pandemic.dir/flags.make
CMakeFiles/pandemic.dir/Researcher.cpp.o: ../Researcher.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shahak/CLionProjects/pandemic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/pandemic.dir/Researcher.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pandemic.dir/Researcher.cpp.o -c /home/shahak/CLionProjects/pandemic/Researcher.cpp

CMakeFiles/pandemic.dir/Researcher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pandemic.dir/Researcher.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shahak/CLionProjects/pandemic/Researcher.cpp > CMakeFiles/pandemic.dir/Researcher.cpp.i

CMakeFiles/pandemic.dir/Researcher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pandemic.dir/Researcher.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shahak/CLionProjects/pandemic/Researcher.cpp -o CMakeFiles/pandemic.dir/Researcher.cpp.s

CMakeFiles/pandemic.dir/Scientist.cpp.o: CMakeFiles/pandemic.dir/flags.make
CMakeFiles/pandemic.dir/Scientist.cpp.o: ../Scientist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shahak/CLionProjects/pandemic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/pandemic.dir/Scientist.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pandemic.dir/Scientist.cpp.o -c /home/shahak/CLionProjects/pandemic/Scientist.cpp

CMakeFiles/pandemic.dir/Scientist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pandemic.dir/Scientist.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shahak/CLionProjects/pandemic/Scientist.cpp > CMakeFiles/pandemic.dir/Scientist.cpp.i

CMakeFiles/pandemic.dir/Scientist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pandemic.dir/Scientist.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shahak/CLionProjects/pandemic/Scientist.cpp -o CMakeFiles/pandemic.dir/Scientist.cpp.s

CMakeFiles/pandemic.dir/Virologist.cpp.o: CMakeFiles/pandemic.dir/flags.make
CMakeFiles/pandemic.dir/Virologist.cpp.o: ../Virologist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shahak/CLionProjects/pandemic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/pandemic.dir/Virologist.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pandemic.dir/Virologist.cpp.o -c /home/shahak/CLionProjects/pandemic/Virologist.cpp

CMakeFiles/pandemic.dir/Virologist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pandemic.dir/Virologist.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shahak/CLionProjects/pandemic/Virologist.cpp > CMakeFiles/pandemic.dir/Virologist.cpp.i

CMakeFiles/pandemic.dir/Virologist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pandemic.dir/Virologist.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shahak/CLionProjects/pandemic/Virologist.cpp -o CMakeFiles/pandemic.dir/Virologist.cpp.s

CMakeFiles/pandemic.dir/Color.cpp.o: CMakeFiles/pandemic.dir/flags.make
CMakeFiles/pandemic.dir/Color.cpp.o: ../Color.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shahak/CLionProjects/pandemic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/pandemic.dir/Color.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pandemic.dir/Color.cpp.o -c /home/shahak/CLionProjects/pandemic/Color.cpp

CMakeFiles/pandemic.dir/Color.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pandemic.dir/Color.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shahak/CLionProjects/pandemic/Color.cpp > CMakeFiles/pandemic.dir/Color.cpp.i

CMakeFiles/pandemic.dir/Color.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pandemic.dir/Color.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shahak/CLionProjects/pandemic/Color.cpp -o CMakeFiles/pandemic.dir/Color.cpp.s

CMakeFiles/pandemic.dir/blabla.cpp.o: CMakeFiles/pandemic.dir/flags.make
CMakeFiles/pandemic.dir/blabla.cpp.o: ../blabla.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shahak/CLionProjects/pandemic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/pandemic.dir/blabla.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pandemic.dir/blabla.cpp.o -c /home/shahak/CLionProjects/pandemic/blabla.cpp

CMakeFiles/pandemic.dir/blabla.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pandemic.dir/blabla.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shahak/CLionProjects/pandemic/blabla.cpp > CMakeFiles/pandemic.dir/blabla.cpp.i

CMakeFiles/pandemic.dir/blabla.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pandemic.dir/blabla.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shahak/CLionProjects/pandemic/blabla.cpp -o CMakeFiles/pandemic.dir/blabla.cpp.s

# Object files for target pandemic
pandemic_OBJECTS = \
"CMakeFiles/pandemic.dir/Board.cpp.o" \
"CMakeFiles/pandemic.dir/Demo1.cpp.o" \
"CMakeFiles/pandemic.dir/Dispatcher.cpp.o" \
"CMakeFiles/pandemic.dir/FieldDoctor.cpp.o" \
"CMakeFiles/pandemic.dir/GeneSplicer.cpp.o" \
"CMakeFiles/pandemic.dir/Medic.cpp.o" \
"CMakeFiles/pandemic.dir/OperationsExpert.cpp.o" \
"CMakeFiles/pandemic.dir/Player.cpp.o" \
"CMakeFiles/pandemic.dir/Researcher.cpp.o" \
"CMakeFiles/pandemic.dir/Scientist.cpp.o" \
"CMakeFiles/pandemic.dir/Virologist.cpp.o" \
"CMakeFiles/pandemic.dir/Color.cpp.o" \
"CMakeFiles/pandemic.dir/blabla.cpp.o"

# External object files for target pandemic
pandemic_EXTERNAL_OBJECTS =

pandemic: CMakeFiles/pandemic.dir/Board.cpp.o
pandemic: CMakeFiles/pandemic.dir/Demo1.cpp.o
pandemic: CMakeFiles/pandemic.dir/Dispatcher.cpp.o
pandemic: CMakeFiles/pandemic.dir/FieldDoctor.cpp.o
pandemic: CMakeFiles/pandemic.dir/GeneSplicer.cpp.o
pandemic: CMakeFiles/pandemic.dir/Medic.cpp.o
pandemic: CMakeFiles/pandemic.dir/OperationsExpert.cpp.o
pandemic: CMakeFiles/pandemic.dir/Player.cpp.o
pandemic: CMakeFiles/pandemic.dir/Researcher.cpp.o
pandemic: CMakeFiles/pandemic.dir/Scientist.cpp.o
pandemic: CMakeFiles/pandemic.dir/Virologist.cpp.o
pandemic: CMakeFiles/pandemic.dir/Color.cpp.o
pandemic: CMakeFiles/pandemic.dir/blabla.cpp.o
pandemic: CMakeFiles/pandemic.dir/build.make
pandemic: CMakeFiles/pandemic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shahak/CLionProjects/pandemic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable pandemic"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pandemic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pandemic.dir/build: pandemic

.PHONY : CMakeFiles/pandemic.dir/build

CMakeFiles/pandemic.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pandemic.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pandemic.dir/clean

CMakeFiles/pandemic.dir/depend:
	cd /home/shahak/CLionProjects/pandemic/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shahak/CLionProjects/pandemic /home/shahak/CLionProjects/pandemic /home/shahak/CLionProjects/pandemic/cmake-build-debug /home/shahak/CLionProjects/pandemic/cmake-build-debug /home/shahak/CLionProjects/pandemic/cmake-build-debug/CMakeFiles/pandemic.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pandemic.dir/depend
