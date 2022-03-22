cmake_minimum_required(VERSION 3.16)
project(Prac4Poly)

set(CMAKE_CXX_STANDARD 14)

add_executable(Prac4Poly main.cpp Shape.cpp Shape.h Circle.cpp Circle.h Rectangle.cpp Rectangle.h Triangle.cpp Triangle.h)
