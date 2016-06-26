cmake_minimum_required(VERSION 3.5)
project(Singleton)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES consolepolicy.cpp consolepolicy.hpp filepolicy.cpp filepolicy.hpp logger.cpp logger.hpp policy.hpp program.cpp)

add_executable(Singleton ${SOURCE_FILES})