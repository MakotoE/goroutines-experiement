cmake_minimum_required(VERSION 3.21)
project(cpp)

set(CMAKE_CXX_STANDARD 20)

find_package (Threads REQUIRED)

add_executable(cpp main.cpp)

set(CMAKE_CXX_FLAGS "-O3 -Wall -Wextra")

target_link_libraries(cpp ${CMAKE_THREAD_LIBS_INIT})