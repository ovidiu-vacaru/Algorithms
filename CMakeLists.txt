cmake_minimum_required(VERSION 3.22)
project(Algorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(bubble_sort Sort/bubble_sort.cpp )
add_executable(selection_sort Sort/selection_sort.cpp)
add_executable(insertion_sort Sort/insertion_sort.cpp)
