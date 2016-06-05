cmake_minimum_required(VERSION 3.5)
project(DynamicObjectList)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp myvector.h)

add_executable(DynamicObjectList ${SOURCE_FILES})