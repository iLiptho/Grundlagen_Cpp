cmake_minimum_required(VERSION 3.5)
project(Debugging)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES program.cpp)

add_executable(Debugging ${SOURCE_FILES})