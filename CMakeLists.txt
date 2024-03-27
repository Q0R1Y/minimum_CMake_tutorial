cmake_minimum_required(VERSION 3.15)

project(cmake_tutorial)

find_package(CURL REQUIRED)

add_library(test_lib STATIC test_lib.cpp)

add_executable(cmake_tutorial test.cpp)
target_include_directories(cmake_tutorial PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(cmake_tutorial test_lib curl)
