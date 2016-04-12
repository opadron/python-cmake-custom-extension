cmake_minimum_required(VERSION 2.8.6)

project(examplemodule)

find_package(Python REQUIRED CONFIG)
### if you don't have a cmake-built python, use the following, instead
#
# find_package(PythonLibs REQUIRED)
# find_package(PythonInterp REQUIRED)

include_directories(${PYTHON_INCLUDE_DIRS})

add_subdirectory(example)
