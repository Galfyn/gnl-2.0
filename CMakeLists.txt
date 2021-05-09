cmake_minimum_required(VERSION 3.19)
project(get_next_line C)

set(CMAKE_C_STANDARD 99)

file(GLOB SRCS *.c)

add_executable(get_next_line ${SRCS})