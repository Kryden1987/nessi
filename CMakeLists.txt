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

set(INCLUDE Include/Nessi Include/Disassembler/ Include/VirtualMachine Include/Memory Include/Firmware)

include_directories(${INCLUDE})

project(nessi VERSION ${NESSI_VERSION_MAJOR}.${NESSI_VERSION_MINOR}.${NESSI_VERSION_PATCH})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

set(SOURCE Source/Nessi/Main.cpp Source/Nessi/CommandLine.cpp Source/Disassembler/Disassembler.cpp Source/VirtualMachine/Instructions.cpp)

set(SOURCE ${SOURCE} Source/Firmware/Firmware.cpp)

add_executable(nessi ${SOURCE})

target_link_libraries(nessi  stdc++fs) 
