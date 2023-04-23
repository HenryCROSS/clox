cmake_minimum_required(VERSION 3.1...3.26)
project(
  clox
  VERSION 1.0.0
  LANGUAGES C)

set(CMAKE_C_STANDARD 11)

add_executable(clox)
target_compile_options(clox PRIVATE
  $<$<CXX_COMPILER_ID:MSVC>:/W4 /WX>
  $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -Wpedantic>
)

set_target_properties(clox
  PROPERTIES
  OUTPUT_NAME "clox"
  SUFFIX ".out")

target_include_directories(clox PRIVATE "${PROJECT_SOURCE_DIR}")

# compile executable code
add_subdirectory(src)

