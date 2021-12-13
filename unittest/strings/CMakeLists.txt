cmake_minimum_required(VERSION 3.20)
project(strings_unittest)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(strings_unittest string16_unittest.cpp)


link_libraries(base)
