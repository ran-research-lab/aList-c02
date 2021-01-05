cmake_minimum_required(VERSION 3.15)
set(projName aList)

project(${projName})
set(CATCH2DIR /home/rarce/ccom3034)

IF(EXISTS ${CATCH2DIR})   
  include_directories(${CATCH2DIR})
  add_executable(${projName} main.cpp List.h AList.cpp AList.h ${CATCH2DIR}/catch_amalgamated.cpp)
else()
  add_executable(${projName} main.cpp List.h AList.cpp AList.h catch_amalgamated.cpp)
endif()

