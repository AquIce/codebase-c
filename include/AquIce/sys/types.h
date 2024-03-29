#ifndef __AQUICE_SYS_TYPES_H__
#define __AQUICE_SYS_TYPES_H__

#include <stdint.h>
#include <math.h>

#include "sys.h"

typedef int8_t i8;
global i8 I8MIN = (i8)0x80;
global i8 I8MAX = (i8)0x7F;

typedef int16_t i16;
global i16 I16MIN = (i16)0x8000;
global i16 I16MAX = (i16)0x7FFF;

typedef int32_t i32;
global i32 I32MIN = (i32)0x80000000;
global i32 I32MAX = (i32)0x7FFFFFFF;

typedef int64_t i64;
global i64 I64MIN = (i64)0x8000000000000000llu;
global i64 I64MAX = (i64)0x7FFFFFFFFFFFFFFFllu;

typedef uint8_t u8;
global u8 U8MAX = (u8)0xFF;

typedef uint16_t u16;
global u16 U16MAX = (u16)0xFFFF;

typedef uint32_t u32;
global u32 U32MAX = (u32)0xFFFFFFFF;

typedef uint64_t u64;
global u64 U64MAX = (u64)0xFFFFFFFFFFFFFFFFllu;

typedef float f32;
typedef double f64;

i32 round_f32(f32 f);

i64 round_f64(f64 f);

i32 round_f32(f32 f) {
	return (i32)round(f);
}

i64 round_f64(f64 f) {
	return (i64)round(f);
}

#endif // __AQUICE_SYS_TYPES_H__