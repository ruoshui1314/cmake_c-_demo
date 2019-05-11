# Search all source file in current directory
aux_source_directory(. DIR_LIB_SRCS)

set (blog_DIR "${PROJECT_SOURCE_DIR}/src/blog")
set (BLOG_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/src/blog")

# Generate library 
add_library(hello ${DIR_LIB_SRCS})

find_package(blog)
target_include_directories(hello PRIVATE ${BLOG_INCLUDE_DIR})
target_link_libraries(hello blog)