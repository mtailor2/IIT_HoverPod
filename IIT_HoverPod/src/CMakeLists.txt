﻿# CMakeList.txt : CMake project for IIT_HoverPod, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (IIT_HoverPod "main.cpp" "../include/main.h" "IMU.cpp")

# TODO: Add tests and install targets if needed.
