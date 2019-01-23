cmake_minimum_required(VERSION 3.4.3)

if(NOT DEFINED NESSI_VERSION_MAJOR)
  set(NESSI_VERSION_MAJOR 0)
endif()

if(NOT DEFINED NESSI_VERSION_MINOR)
  set(NESSI_VERSION_MINOR 0)
endif()

if(NOT DEFINED NESSI_VERSION_PATCH)
  set(NESSI_VERSION_PATCH 0)
endif()

set(CMAKE_VERBOSE_MAKEFILE ON) 

include_directories(source/dotnes)

project(nessi VERSION ${NESSI_VERSION_MAJOR}.${NESSI_VERSION_MINOR}.${NESSI_VERSION_PATCH})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

add_executable(nessi source/nessi/main.cpp source/nessi/cli.cpp source/dotnes/dotnes.cpp)

target_link_libraries(nessi  stdc++fs) 