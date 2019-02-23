cmake_minimum_required(VERSION 3.6)   # CMake version check
project(CS372_Battleship)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++11 standard

set(SOURCE_FILES main.cpp board.h ship.h board.cpp ship.cpp submarine.h destroyer.h frigate.h battleship.h
        testBattleShip.cpp catch.hpp)            # Add main.cpp file of project root directory as source file
add_executable(CS372_Battleship ${SOURCE_FILES})       # Add executable target with source files listed in SOURCE_FILES variable
