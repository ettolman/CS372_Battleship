# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ianferguson/Documents/battleship/CS372_Battleship

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ianferguson/Documents/battleship/CS372_Battleship/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CS372_Battleship.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CS372_Battleship.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CS372_Battleship.dir/flags.make

CMakeFiles/CS372_Battleship.dir/main.cpp.o: CMakeFiles/CS372_Battleship.dir/flags.make
CMakeFiles/CS372_Battleship.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ianferguson/Documents/battleship/CS372_Battleship/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CS372_Battleship.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CS372_Battleship.dir/main.cpp.o -c /Users/ianferguson/Documents/battleship/CS372_Battleship/main.cpp

CMakeFiles/CS372_Battleship.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS372_Battleship.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ianferguson/Documents/battleship/CS372_Battleship/main.cpp > CMakeFiles/CS372_Battleship.dir/main.cpp.i

CMakeFiles/CS372_Battleship.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS372_Battleship.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ianferguson/Documents/battleship/CS372_Battleship/main.cpp -o CMakeFiles/CS372_Battleship.dir/main.cpp.s

CMakeFiles/CS372_Battleship.dir/board.cpp.o: CMakeFiles/CS372_Battleship.dir/flags.make
CMakeFiles/CS372_Battleship.dir/board.cpp.o: ../board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ianferguson/Documents/battleship/CS372_Battleship/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CS372_Battleship.dir/board.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CS372_Battleship.dir/board.cpp.o -c /Users/ianferguson/Documents/battleship/CS372_Battleship/board.cpp

CMakeFiles/CS372_Battleship.dir/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS372_Battleship.dir/board.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ianferguson/Documents/battleship/CS372_Battleship/board.cpp > CMakeFiles/CS372_Battleship.dir/board.cpp.i

CMakeFiles/CS372_Battleship.dir/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS372_Battleship.dir/board.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ianferguson/Documents/battleship/CS372_Battleship/board.cpp -o CMakeFiles/CS372_Battleship.dir/board.cpp.s

CMakeFiles/CS372_Battleship.dir/ship.cpp.o: CMakeFiles/CS372_Battleship.dir/flags.make
CMakeFiles/CS372_Battleship.dir/ship.cpp.o: ../ship.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ianferguson/Documents/battleship/CS372_Battleship/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CS372_Battleship.dir/ship.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CS372_Battleship.dir/ship.cpp.o -c /Users/ianferguson/Documents/battleship/CS372_Battleship/ship.cpp

CMakeFiles/CS372_Battleship.dir/ship.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS372_Battleship.dir/ship.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ianferguson/Documents/battleship/CS372_Battleship/ship.cpp > CMakeFiles/CS372_Battleship.dir/ship.cpp.i

CMakeFiles/CS372_Battleship.dir/ship.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS372_Battleship.dir/ship.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ianferguson/Documents/battleship/CS372_Battleship/ship.cpp -o CMakeFiles/CS372_Battleship.dir/ship.cpp.s

CMakeFiles/CS372_Battleship.dir/testBattleShip.cpp.o: CMakeFiles/CS372_Battleship.dir/flags.make
CMakeFiles/CS372_Battleship.dir/testBattleShip.cpp.o: ../testBattleShip.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ianferguson/Documents/battleship/CS372_Battleship/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/CS372_Battleship.dir/testBattleShip.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CS372_Battleship.dir/testBattleShip.cpp.o -c /Users/ianferguson/Documents/battleship/CS372_Battleship/testBattleShip.cpp

CMakeFiles/CS372_Battleship.dir/testBattleShip.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS372_Battleship.dir/testBattleShip.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ianferguson/Documents/battleship/CS372_Battleship/testBattleShip.cpp > CMakeFiles/CS372_Battleship.dir/testBattleShip.cpp.i

CMakeFiles/CS372_Battleship.dir/testBattleShip.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS372_Battleship.dir/testBattleShip.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ianferguson/Documents/battleship/CS372_Battleship/testBattleShip.cpp -o CMakeFiles/CS372_Battleship.dir/testBattleShip.cpp.s

# Object files for target CS372_Battleship
CS372_Battleship_OBJECTS = \
"CMakeFiles/CS372_Battleship.dir/main.cpp.o" \
"CMakeFiles/CS372_Battleship.dir/board.cpp.o" \
"CMakeFiles/CS372_Battleship.dir/ship.cpp.o" \
"CMakeFiles/CS372_Battleship.dir/testBattleShip.cpp.o"

# External object files for target CS372_Battleship
CS372_Battleship_EXTERNAL_OBJECTS =

CS372_Battleship: CMakeFiles/CS372_Battleship.dir/main.cpp.o
CS372_Battleship: CMakeFiles/CS372_Battleship.dir/board.cpp.o
CS372_Battleship: CMakeFiles/CS372_Battleship.dir/ship.cpp.o
CS372_Battleship: CMakeFiles/CS372_Battleship.dir/testBattleShip.cpp.o
CS372_Battleship: CMakeFiles/CS372_Battleship.dir/build.make
CS372_Battleship: CMakeFiles/CS372_Battleship.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ianferguson/Documents/battleship/CS372_Battleship/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable CS372_Battleship"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CS372_Battleship.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CS372_Battleship.dir/build: CS372_Battleship

.PHONY : CMakeFiles/CS372_Battleship.dir/build

CMakeFiles/CS372_Battleship.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CS372_Battleship.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CS372_Battleship.dir/clean

CMakeFiles/CS372_Battleship.dir/depend:
	cd /Users/ianferguson/Documents/battleship/CS372_Battleship/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ianferguson/Documents/battleship/CS372_Battleship /Users/ianferguson/Documents/battleship/CS372_Battleship /Users/ianferguson/Documents/battleship/CS372_Battleship/cmake-build-debug /Users/ianferguson/Documents/battleship/CS372_Battleship/cmake-build-debug /Users/ianferguson/Documents/battleship/CS372_Battleship/cmake-build-debug/CMakeFiles/CS372_Battleship.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CS372_Battleship.dir/depend

