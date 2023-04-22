cmake_minimum_required(VERSION 3.12)
project(clox VERSION 1.0.0 LANGUAGES C)

# Set C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")

# Add the src directory as a subdirectory
# add_subdirectory(src)

add_executable(clox.out src/main.c src/debug.c src/chunk.c src/memory.c)
target_include_directories(clox.out PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_sources(clox.out PRIVATE src/debug.h src/chunk.h src/memory.h src/common.h)

