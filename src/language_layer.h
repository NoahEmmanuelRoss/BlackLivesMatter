
#ifndef LANGUAGE_LAYER_H
#define LANGUAGE_LAYER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define MAXCHAR 1000

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef float f32;
typedef uint8_t b8;     //weird implimentation for booleans (could just use an enum but wth)
#endif //LANGUAGE_LAYER_H