##################################################################################
# Examples in the C++ language (the 'Example-004’ Test).
#
# GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
#
# Created by David Canino (canino.david@gmail.com), September 2018.
#
# CMakeLists.txt - the CMake directives for building the 'Example-004’ Test.
##################################################################################
cmake_minimum_required(VERSION 2.8.6 FATAL_ERROR)
project(Example-004 LANGUAGES CXX)
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else ()
	message(FATAL_ERROR "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler!")
endif()

# If we arrive here, then the current compiler has the C++11 support.
if (APPLE OR CMAKE_HOST_APPLE)
	add_executable(Example-004 ../src/main.cpp)
elseif (UNIX OR CMAKE_HOST_UNIX)
	add_executable(Example-004 ../src/main.cpp)
elseif (WIN32 OR CMAKE_HOST_WIN32)
	add_executable(Example-004 ../src/main.cpp)
else ()
	message(FATAL_ERROR "The current platform is not supported.")
endif ()



