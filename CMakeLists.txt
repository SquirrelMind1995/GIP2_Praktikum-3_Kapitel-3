cmake_minimum_required(VERSION 3.12.4) #Vierjahn's Vorschlag #cpp 20 verwenbar

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set the project name
project(main VERSION 1.0)

# add the executable
add_executable(main main.cpp teamStatistics.cpp inc/teamStatistics.hpp league.cpp inc/league.hpp)
