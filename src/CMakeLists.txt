cmake_minimum_required(VERSION 3.1...3.26)
project(
  clox
  VERSION 1.0.0
  LANGUAGES C)

set(SOURCES main.c debug.c chunk.c memory.c value.c vm.c)
set(HEADERS debug.h chunk.h memory.h common.h value.h vm.h)
target_sources(clox PRIVATE ${SOURCES} ${HEADERS})
