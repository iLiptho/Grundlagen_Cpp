cmake_minimum_required(VERSION 3.5)
project(ErrorDetec)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Randomchar.cpp Randomchar.h program.cpp TestObject.cpp TestObject.h)

add_executable(ErrorDetec ${SOURCE_FILES})