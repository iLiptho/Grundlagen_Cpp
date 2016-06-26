cmake_minimum_required(VERSION 3.5)
project(Factory)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES fleet.cpp fleet.h main.cpp spaceshipfactory.cpp spaceshipfactory.h spaceships.h)

add_executable(Factory ${SOURCE_FILES})