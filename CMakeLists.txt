cmake_minimum_required(VERSION 3.28)
project(l_list C)

set(CMAKE_C_STANDARD 99)

add_executable(l_list main.c functions.c l_list.h)
