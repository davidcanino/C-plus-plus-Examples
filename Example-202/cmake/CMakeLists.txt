##################################################################################
# Examples in the C++ language (the 'Example-202' Test).
#
# GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
#
# Created by David Canino (canino.david@gmail.com), January 2019.
#
# CMakeLists.txt - the CMake directives for building the 'Example-202' Test.
##################################################################################

cmake_minimum_required(VERSION 2.8.6 FATAL_ERROR)
project(Example-202 LANGUAGES CXX)
if (APPLE OR CMAKE_HOST_APPLE)
	add_executable(Example-202 ../src/main.cpp)
elseif (UNIX OR CMAKE_HOST_UNIX)
	add_executable(Example-202 ../src/main.cpp)
elseif (WIN32 OR CMAKE_HOST_WIN32)
	add_executable(Example-202 ../src/main.cpp)
else ()
	message(FATAL_ERROR "The current platform is not supported.")
endif ()

