cmake_minimum_required (VERSION 2.6)
project (tutorial)
set (CMAKE_CXX_FLAGS "-Wall")
set (CMAKE_CXX_FLAGS_DEBUG "-g")
set (CMAKE_CXX_FLAGS_RELEASE "-O3")

file(GLOB tutorial_SRC
    "*.h"
    "*.cpp"
)
add_executable(tutorial ${tutorial_SRC})

