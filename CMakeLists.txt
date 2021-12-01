cmake_minimum_required(VERSION 3.20)
project(CPP_Template_Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(Sorting Sorting.cpp)
add_executable(SortingTemplate SortingTemplate.cpp)
add_executable(ClassTemplate Pair.h ClassTemplate.cpp)
add_executable(TemplateMetaprogramming TemplateMetaprogramming.cpp)
add_executable(TemplatesSTL TemplatesSTL.cpp)
