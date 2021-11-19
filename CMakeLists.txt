# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("IIT_HoverPod")

# Include sub-projects.
add_subdirectory ("IIT_HoverPod/src")
add_subdirectory ("IIT_HoverPod/include")
