cmake_minimum_required(VERSION 3.5)
project(DynamicObjectList)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES dynamicobjectlist.cpp dynamicobjectlist.hpp program.cpp object.cpp object.h)

add_executable(DynamicObjectList ${SOURCE_FILES})