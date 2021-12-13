cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
project(base)


add_library(base SHARED base_export.h build_flags.h strings/string16.cpp strings/string16.h)
