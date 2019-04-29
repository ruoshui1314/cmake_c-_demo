cmake_minimum_required (VERSION 3.1)
project (cmake_cpp_demo)

set (CMAKE_CXX_STANDARD 11)

aux_source_directory (src DIR_SRCS)
add_executable (main ${DIR_SRCS})
