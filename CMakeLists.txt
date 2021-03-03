cmake_minimum_required(VERSION 3.15)
set(projName aList)

project(${projName})


add_executable(${projName} main.cpp List.h AList.cpp AList.h)


