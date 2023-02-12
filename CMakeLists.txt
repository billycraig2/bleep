cmake_minimum_required(VERSION 3.24)
project(bleep)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(bleep
        bleep.cpp
        functions.cpp
        functions.hpp)
