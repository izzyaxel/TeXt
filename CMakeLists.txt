cmake_minimum_required(VERSION 3.15)
project(TeXt)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static -Wall -Wextra -Wpedantic -Wformat-security -Wno-unused")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -s")

set(CMAKE_CXX_STANDARD 20)

add_executable(TeXt main.cc)
