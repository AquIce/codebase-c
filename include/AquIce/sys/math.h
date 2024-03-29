#ifndef __AQUICE_SYS_MATH_H__
#define __AQUICE_SYS_MATH_H__

#include "types.h"

#define Min(a, b) ((a) < (b) ? (a) : (b))
#define Max(a, b) ((a) > (b) ? (a) : (b))

global f32 PI_f32 = 3.14159265359f;
global f32 E_f32 = 2.71828182846f;
global f32 TAU_f32 = 6.28318530718f;
global f32 GOLD_BIG_f32 = 1.61803398875f;
global f32 GOLD_SMALL_f32 = 0.61803398875f;

global f64 PI_f64 = 3.14159265358979323846;
global f64 E_f64 = 2.71828182845904523536;
global f64 TAU_f64 = 6.28318530717958647692;
global f64 GOLD_BIG_f64 = 1.61803398874989484820;
global f64 GOLD_SMALL_f64 = 0.61803398874989484820;

fn f32 abs_f32(f32 x);
fn f32 sqrt_f32(f32 x);
fn f32 radToDeg_f32(f32 x);
fn f32 degToRad_f32(f32 x);
fn f32 sin_f32(f32 x);
fn f32 cos_f32(f32 x);
fn f32 tan_f32(f32 x);

fn f64 abs_f64(f64 x);
fn f64 sqrt_f64(f64 x);
fn f64 radToDeg_f64(f64 x);
fn f64 degToRad_f64(f64 x);
fn f64 sin_f64(f64 x);
fn f64 cos_f64(f64 x);
fn f64 tan_f64(f64 x);

fn f32 abs_f32(f32 x) {
	return x < 0 ? -x : x;
}
fn f32 sqrt_f32(f32 x) {
	return sqrtf(x);
}
fn f32 radToDeg_f32(f32 x) {
	return x * 180.0f / PI_f32;
}
fn f32 degToRad_f32(f32 x) {
	return x * PI_f32 / 180.0f;
}
fn f32 sin_f32(f32 x) {
	return sinf(degToRad_f32(x));
}
fn f32 cos_f32(f32 x) {
	return cosf(degToRad_f32(x));
}
fn f32 tan_f32(f32 x) {
	return tanf(degToRad_f32(x));
}

fn f64 abs_f64(f64 x) {
	return x < 0 ? -x : x;
}
fn f64 sqrt_f64(f64 x) {
	return sqrt(x);
}
fn f64 radToDeg_f64(f64 x) {
	return x * 180.0 / PI_f64;
}
fn f64 degToRad_f64(f64 x) {
	return x * PI_f64 / 180.0;
}
fn f64 sin_f64(f64 x) {
	return sin(degToRad_f64(x));
}
fn f64 cos_f64(f64 x) {
	return cos(degToRad_f64(x));
}
fn f64 tan_f64(f64 x) {
	return tan(degToRad_f64(x));
}

#endif