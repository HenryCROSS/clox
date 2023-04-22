cmake_minimum_required(VERSION 3.1...3.26)
project(
  clox
  VERSION 1.0.0
  LANGUAGES C)

set(CMAKE_C_STANDARD 11)

add_executable(clox.out)

target_include_directories(clox.out PRIVATE "${PROJECT_SOURCE_DIR}")

# compile executable code
add_subdirectory(src)


