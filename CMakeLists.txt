cmake_minimum_required (VERSION 3.1)
project (cmake_cpp_demo)

# Use c++ 11
set (CMAKE_CXX_STANDARD 11)

set (CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

# Add dependency library
include_directories (
    ${PROJECT_SOURCE_DIR}/src
    ${PROJECT_SOURCE_DIR}/src/third_party/hiredis/include
)
link_directories (${PROJECT_SOURCE_DIR}/src/third_party/hiredis/lib)

# Add sub directory
add_subdirectory (src/hello)
add_subdirectory (src/blog)

aux_source_directory (src DIR_SRCS)
add_executable (main ${DIR_SRCS})
target_link_libraries(main
    hiredis
    hello
    blog
)