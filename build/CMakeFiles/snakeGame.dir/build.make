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
CMAKE_SOURCE_DIR = /home/marcone/2024.1/LP1/Snaze_Smart

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marcone/2024.1/LP1/Snaze_Smart/build

# Include any dependencies generated for this target.
include CMakeFiles/snakeGame.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/snakeGame.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/snakeGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/snakeGame.dir/flags.make

CMakeFiles/snakeGame.dir/src/level.cpp.o: CMakeFiles/snakeGame.dir/flags.make
CMakeFiles/snakeGame.dir/src/level.cpp.o: ../src/level.cpp
CMakeFiles/snakeGame.dir/src/level.cpp.o: CMakeFiles/snakeGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marcone/2024.1/LP1/Snaze_Smart/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/snakeGame.dir/src/level.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snakeGame.dir/src/level.cpp.o -MF CMakeFiles/snakeGame.dir/src/level.cpp.o.d -o CMakeFiles/snakeGame.dir/src/level.cpp.o -c /home/marcone/2024.1/LP1/Snaze_Smart/src/level.cpp

CMakeFiles/snakeGame.dir/src/level.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/snakeGame.dir/src/level.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marcone/2024.1/LP1/Snaze_Smart/src/level.cpp > CMakeFiles/snakeGame.dir/src/level.cpp.i

CMakeFiles/snakeGame.dir/src/level.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/snakeGame.dir/src/level.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marcone/2024.1/LP1/Snaze_Smart/src/level.cpp -o CMakeFiles/snakeGame.dir/src/level.cpp.s

CMakeFiles/snakeGame.dir/src/player.cpp.o: CMakeFiles/snakeGame.dir/flags.make
CMakeFiles/snakeGame.dir/src/player.cpp.o: ../src/player.cpp
CMakeFiles/snakeGame.dir/src/player.cpp.o: CMakeFiles/snakeGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marcone/2024.1/LP1/Snaze_Smart/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/snakeGame.dir/src/player.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snakeGame.dir/src/player.cpp.o -MF CMakeFiles/snakeGame.dir/src/player.cpp.o.d -o CMakeFiles/snakeGame.dir/src/player.cpp.o -c /home/marcone/2024.1/LP1/Snaze_Smart/src/player.cpp

CMakeFiles/snakeGame.dir/src/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/snakeGame.dir/src/player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marcone/2024.1/LP1/Snaze_Smart/src/player.cpp > CMakeFiles/snakeGame.dir/src/player.cpp.i

CMakeFiles/snakeGame.dir/src/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/snakeGame.dir/src/player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marcone/2024.1/LP1/Snaze_Smart/src/player.cpp -o CMakeFiles/snakeGame.dir/src/player.cpp.s

CMakeFiles/snakeGame.dir/src/snake.cpp.o: CMakeFiles/snakeGame.dir/flags.make
CMakeFiles/snakeGame.dir/src/snake.cpp.o: ../src/snake.cpp
CMakeFiles/snakeGame.dir/src/snake.cpp.o: CMakeFiles/snakeGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marcone/2024.1/LP1/Snaze_Smart/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/snakeGame.dir/src/snake.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snakeGame.dir/src/snake.cpp.o -MF CMakeFiles/snakeGame.dir/src/snake.cpp.o.d -o CMakeFiles/snakeGame.dir/src/snake.cpp.o -c /home/marcone/2024.1/LP1/Snaze_Smart/src/snake.cpp

CMakeFiles/snakeGame.dir/src/snake.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/snakeGame.dir/src/snake.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marcone/2024.1/LP1/Snaze_Smart/src/snake.cpp > CMakeFiles/snakeGame.dir/src/snake.cpp.i

CMakeFiles/snakeGame.dir/src/snake.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/snakeGame.dir/src/snake.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marcone/2024.1/LP1/Snaze_Smart/src/snake.cpp -o CMakeFiles/snakeGame.dir/src/snake.cpp.s

CMakeFiles/snakeGame.dir/src/snakeGame.cpp.o: CMakeFiles/snakeGame.dir/flags.make
CMakeFiles/snakeGame.dir/src/snakeGame.cpp.o: ../src/snakeGame.cpp
CMakeFiles/snakeGame.dir/src/snakeGame.cpp.o: CMakeFiles/snakeGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marcone/2024.1/LP1/Snaze_Smart/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/snakeGame.dir/src/snakeGame.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snakeGame.dir/src/snakeGame.cpp.o -MF CMakeFiles/snakeGame.dir/src/snakeGame.cpp.o.d -o CMakeFiles/snakeGame.dir/src/snakeGame.cpp.o -c /home/marcone/2024.1/LP1/Snaze_Smart/src/snakeGame.cpp

CMakeFiles/snakeGame.dir/src/snakeGame.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/snakeGame.dir/src/snakeGame.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marcone/2024.1/LP1/Snaze_Smart/src/snakeGame.cpp > CMakeFiles/snakeGame.dir/src/snakeGame.cpp.i

CMakeFiles/snakeGame.dir/src/snakeGame.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/snakeGame.dir/src/snakeGame.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marcone/2024.1/LP1/Snaze_Smart/src/snakeGame.cpp -o CMakeFiles/snakeGame.dir/src/snakeGame.cpp.s

# Object files for target snakeGame
snakeGame_OBJECTS = \
"CMakeFiles/snakeGame.dir/src/level.cpp.o" \
"CMakeFiles/snakeGame.dir/src/player.cpp.o" \
"CMakeFiles/snakeGame.dir/src/snake.cpp.o" \
"CMakeFiles/snakeGame.dir/src/snakeGame.cpp.o"

# External object files for target snakeGame
snakeGame_EXTERNAL_OBJECTS =

snakeGame: CMakeFiles/snakeGame.dir/src/level.cpp.o
snakeGame: CMakeFiles/snakeGame.dir/src/player.cpp.o
snakeGame: CMakeFiles/snakeGame.dir/src/snake.cpp.o
snakeGame: CMakeFiles/snakeGame.dir/src/snakeGame.cpp.o
snakeGame: CMakeFiles/snakeGame.dir/build.make
snakeGame: CMakeFiles/snakeGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/marcone/2024.1/LP1/Snaze_Smart/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable snakeGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/snakeGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/snakeGame.dir/build: snakeGame
.PHONY : CMakeFiles/snakeGame.dir/build

CMakeFiles/snakeGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/snakeGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/snakeGame.dir/clean

CMakeFiles/snakeGame.dir/depend:
	cd /home/marcone/2024.1/LP1/Snaze_Smart/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marcone/2024.1/LP1/Snaze_Smart /home/marcone/2024.1/LP1/Snaze_Smart /home/marcone/2024.1/LP1/Snaze_Smart/build /home/marcone/2024.1/LP1/Snaze_Smart/build /home/marcone/2024.1/LP1/Snaze_Smart/build/CMakeFiles/snakeGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/snakeGame.dir/depend

