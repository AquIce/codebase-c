#ifndef __AQUICE_SYS_GEO2_H__
#define __AQUICE_SYS_GEO2_H__

#include "types.h"
#include "math.h"

typedef struct point2 {
	i32 x;
	i32 y;
} point2;

typedef struct rect2 {
	point2 min;
	point2 max;
} rect2;

typedef struct circle2 {
	point2 center;
	f32 radius;
} circle2;

typedef struct segment2 {
	point2 start;
	point2 end;
} segment2;

typedef struct vec2 {
	f32 x;
	f32 y;
} vec2;

typedef struct ray2 {
	point2 start;
	vec2 direction;
} ray2;

point2 Point2(i32 x, i32 y);
point2 Point2FromVec2(vec2 vec);

rect2 Rect2(i32 x, i32 y, i32 w, i32 h);
rect2 Rect2FromPoints(point2 min, point2 max);

circle2 Circle2(i32 x, i32 y, f32 r);
circle2 Circle2FromPoint(point2 center, f32 r);

segment2 Segment2(i32 x1, i32 y1, i32 x2, i32 y2);
segment2 Segment2FromPoints(point2 start, point2 end);

vec2 Vec2(f32 x, f32 y);
vec2 Vec2FromPoint(point2 point);

ray2 Ray2(i32 x, i32 y, f32 dx, f32 dy);
ray2 Ray2FromPoint(point2 start, vec2 direction);

vec2 Vec2Add(vec2 a, vec2 b);
vec2 Vec2Sub(vec2 a, vec2 b);
vec2 Vec2Hadamard(vec2 a, vec2 b);
vec2 Vec2Mul(vec2 a, f32 b);
vec2 Vec2Div(vec2 a, f32 b);
f32 Vec2Dot(vec2 a, vec2 b);
f32 Vec2Length(vec2 a);
vec2 Vec2Normalize(vec2 a);



point2 Point2(i32 x, i32 y) {
	point2 result = {x, y};
	return result;
}
point2 Point2FromVec2(vec2 vec) {
	point2 result = {round_f32(vec.x), round_f32(vec.y)};
	return result;
}

rect2 Rect2(i32 x, i32 y, i32 w, i32 h) {
	rect2 result = {Point2(x, y), Point2(x + w, y + h)};
	return result;
}
rect2 Rect2FromPoints(point2 min, point2 max) {
	rect2 result = {min, max};
	return result;
}

circle2 Circle2(i32 x, i32 y, f32 r) {
	circle2 result = {Point2(x, y), r};
	return result;
}
circle2 Circle2FromPoint(point2 center, f32 r) {
	circle2 result = {center, r};
	return result;
}

segment2 Segment2(i32 x1, i32 y1, i32 x2, i32 y2) {
	segment2 result = {Point2(x1, y1), Point2(x2, y2)};
	return result;
}
segment2 Segment2FromPoints(point2 start, point2 end) {
	segment2 result = {start, end};
	return result;
}

vec2 Vec2(f32 x, f32 y) {
	vec2 result = {x, y};
	return result;
}
vec2 Vec2FromPoint(point2 point) {
	vec2 result = {point.x, point.y};
	return result;
}

ray2 Ray2(i32 x, i32 y, f32 dx, f32 dy) {
	ray2 result = {Point2(x, y), Vec2(dx, dy)};
	return result;
}
ray2 Ray2FromPoint(point2 start, vec2 direction) {
	ray2 result = {start, direction};
	return result;
}

vec2 Vec2Add(vec2 a, vec2 b) {
	vec2 result = {a.x + b.x, a.y + b.y};
	return result;
}
vec2 Vec2Sub(vec2 a, vec2 b) {
	vec2 result = {a.x - b.x, a.y - b.y};
	return result;
}
vec2 Vec2Hadamard(vec2 a, vec2 b) {
	vec2 result = {a.x * b.x, a.y * b.y};
	return result;
}
vec2 Vec2Mul(vec2 a, f32 b) {
	vec2 result = {a.x * b, a.y * b};
	return result;
}
vec2 Vec2Div(vec2 a, f32 b) {
	vec2 result = {a.x / b, a.y / b};
	return result;
}
f32 Vec2Dot(vec2 a, vec2 b) {
	return a.x * b.x + a.y * b.y;
}
f32 Vec2Length(vec2 a) {
	return sqrt_f32(a.x * a.x + a.y * a.y);
}
vec2 Vec2Normalize(vec2 a) {
	f32 length = Vec2Length(a);
	return Vec2Div(a, length);
}

// TODO: Add more functions for 2D geometry

#endif