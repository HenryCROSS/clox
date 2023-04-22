#ifndef CLOX_CHUNK_H
#define CLOX_CHUNK_H

#include "common.h"

typedef enum {
    OP_RETURN,
} OpCode;


typedef struct {
    uint8_t* code;
} Chunk;

#endif // CLOX_CHUNK_H
