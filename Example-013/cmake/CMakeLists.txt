#############################################################################################################################################
# Examples in the C++ language (the 'Example-013' Test).
#
# GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
#
# Created by David Canino (canino.david@gmail.com), October 2018.
#
# CMakeLists.txt - the CMake directives for building the 'Example-013' Test.
#############################################################################################################################################

cmake_minimum_required(VERSION 2.8.6 FATAL_ERROR)
project(Example-013 LANGUAGES CXX)
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else ()
	message(FATAL_ERROR "The compiler ${CMAKE_CXX_COMPILER} is not a C++11 compliant compiler. Please use a different C++ compiler!")
endif()

# If we arrive here, then the current compiler is a C++11 compliant compiler.
if (APPLE OR CMAKE_HOST_APPLE)
	add_executable(Example-013 ../src/main.cpp)
elseif (UNIX OR CMAKE_HOST_UNIX)
	add_executable(Example-013 ../src/main.cpp)
elseif (WIN32 OR CMAKE_HOST_WIN32)
	add_executable(Example-013 ../src/main.cpp)
else ()
	message(FATAL_ERROR "The current platform is not supported.")
endif ()

