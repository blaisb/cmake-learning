cmake_minimum_required (VERSION 2.6)
project (Tutorial)
set (CMAKE_CXX_FLAGS "-Wall")
set (CMAKE_CXX_FLAGS_DEBUG "-g")
set (CMAKE_CXX_FLAGS_RELEASE "-O3")

add_executable(Tutorial tutorial.cpp)

