cmake_minimum_required(VERSION 3.20)
project(esercitazione2)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STADARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wshadow -Werror=vla")


add_executable(esercizio2 es2.cpp)
add_executable(BubbleSort bubblesort.cpp)

