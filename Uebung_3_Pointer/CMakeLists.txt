cmake_minimum_required(VERSION 3.5)
project(DynamischesZeigerarray)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES object.cpp object.h program.cpp dynamicobjectlist.hpp)

add_executable(DynamischesZeigerarray ${SOURCE_FILES})