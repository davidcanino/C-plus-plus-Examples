##################################################################################
# Examples in the C++ language (the 'Example-002' Test).
#
# GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
#
# Created by David Canino (canino.david@gmail.com), September 2018.
#
# CMakeLists.txt - the CMake directives for building the 'Example-002' Test.
##################################################################################

cmake_minimum_required(VERSION 2.8.6 FATAL_ERROR)
project(Example-002 LANGUAGES CXX)
if (APPLE OR CMAKE_HOST_APPLE)
	add_executable(Example-002 ../src/main.cpp)
elseif (UNIX OR CMAKE_HOST_UNIX)
	add_executable(Example-002 ../src/main.cpp)
elseif (WIN32 OR CMAKE_HOST_WIN32)
	add_executable(Example-002 ../src/main.cpp)
else ()
	message(FATAL_ERROR "The current platform is not supported.")
endif ()
