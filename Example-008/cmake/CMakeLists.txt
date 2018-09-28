##################################################################################
# Examples in the C++ language (the 'Example-008' Test).
#
# GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
#
# Created by David Canino (canino.david@gmail.com), September 2018.
#
# CMakeLists.txt - the CMake directives for building the 'Example-008' Test.
##################################################################################

cmake_minimum_required(VERSION 2.8.6 FATAL_ERROR)
project(Example-008 LANGUAGES CXX)
if (APPLE OR CMAKE_HOST_APPLE)
	include_directories(../include)
	add_executable(Example-008 ../src/myfunctions.cpp ../src/main.cpp)
elseif (UNIX OR CMAKE_HOST_UNIX)
	include_directories(../include)
	add_executable(Example-008 ../src/myfunctions.cpp ../src/main.cpp)
elseif (WIN32 OR CMAKE_HOST_WIN32)
	include_directories(../include)
	add_executable(Example-008 ../src/myfunctions.cpp ../src/main.cpp)
else ()
	message(FATAL_ERROR "The current platform is not supported.")
endif ()

