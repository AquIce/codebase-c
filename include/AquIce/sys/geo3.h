#ifndef __AQUICE_SYS_GEO3_H__
#define __AQUICE_SYS_GEO3_H__

#include "types.h"
#include "math.h"

typedef struct point3 {
	i32 x;
	i32 y;
	i32 z;
} point3;

typedef struct rect3 {
	point3 min;
	point3 max;
} rect3;

typedef struct sphere3 {
	point3 center;
	f32 radius;
} sphere3;

typedef struct segment3 {
	point3 start;
	point3 end;
} segment3;

typedef struct vec3 {
	f32 x;
	f32 y;
	f32 z;
} vec3;

typedef struct ray3 {
	point3 start;
	vec3 direction;
} ray3;

point3 Point3(i32 x, i32 y, i32 z);
point3 Point3FromVec3(vec3 vec);

rect3 Rect3(i32 x, i32 y, i32 z, i32 w, i32 h, i32 d);
rect3 Rect3FromPoints(point3 min, point3 max);

sphere3 Circle3(i32 x, i32 y, i32 z, f32 r);
sphere3 Circle3FromPoint(point3 center, f32 r);

segment3 Segment3(i32 x1, i32 y1, i32 z1, i32 x2, i32 y2, i32 z2);
segment3 Segment3FromPoints(point3 start, point3 end);

vec3 Vec3(f32 x, f32 y, f32 z);
vec3 Vec3FromPoint(point3 point);

ray3 Ray3(i32 x, i32 y, i32 z, f32 dx, f32 dy, f32 dz);
ray3 Ray3FromPoint(point3 start, vec3 direction);

vec3 Vec3Add(vec3 a, vec3 b);
vec3 Vec3Sub(vec3 a, vec3 b);
vec3 Vec3Hadamard(vec3 a, vec3 b);
vec3 Vec3Mul(vec3 a, f32 b);
vec3 Vec3Div(vec3 a, f32 b);
f32 Vec3Dot(vec3 a, vec3 b);
f32 Vec3Cross(vec3 a, vec3 b);
f32 Vec3Length(vec3 a);
vec3 Vec3Normalize(vec3 a);



point3 Point3(i32 x, i32 y, i32 z) {
	point3 result = {x, y, z};
	return result;
}
point3 Point3FromVec3(vec3 vec) {
	point3 result = {round_f32(vec.x), round_f32(vec.y), round_f32(vec.z)};
	return result;
}

rect3 Rect3(i32 x, i32 y, i32 z, i32 w, i32 h, i32 d) {
	rect3 result = {Point3(x, y, z), Point3(x + w, y + h, z + d)};
	return result;
}
rect3 Rect3FromPoints(point3 min, point3 max) {
	rect3 result = {min, max};
	return result;
}

sphere3 Circle3(i32 x, i32 y, i32 z, f32 r) {
	sphere3 result = {Point3(x, y, z), r};
	return result;
}
sphere3 Circle3FromPoint(point3 center, f32 r) {
	sphere3 result = {center, r};
	return result;
}

segment3 Segment3(i32 x1, i32 y1, i32 z1, i32 x2, i32 y2, i32 z2) {
	segment3 result = {Point3(x1, y1, z1), Point3(x2, y2, z2)};
	return result;
}
segment3 Segment3FromPoints(point3 start, point3 end) {
	segment3 result = {start, end};
	return result;
}

vec3 Vec3(f32 x, f32 y, f32 z) {
	vec3 result = {x, y, z};
	return result;
}
vec3 Vec3FromPoint(point3 point) {
	vec3 result = {point.x, point.y, point.z};
	return result;
}

ray3 Ray3(i32 x, i32 y, i32 z, f32 dx, f32 dy, f32 dz) {
	ray3 result = {Point3(x, y, z), Vec3(dx, dy, dz)};
	return result;
}
ray3 Ray3FromPoint(point3 start, vec3 direction) {
	ray3 result = {start, direction};
	return result;
}

vec3 Vec3Add(vec3 a, vec3 b) {
	vec3 result = {a.x + b.x, a.y + b.y, a.z + b.z};
	return result;
}
vec3 Vec3Sub(vec3 a, vec3 b) {
	vec3 result = {a.x - b.x, a.y - b.y, a.z - b.z};
	return result;
}
vec3 Vec3Hadamard(vec3 a, vec3 b) {
	vec3 result = {a.x * b.x, a.y * b.y, a.z * b.z};
	return result;
}
vec3 Vec3Mul(vec3 a, f32 b) {
	vec3 result = {a.x * b, a.y * b, a.z * b};
	return result;
}
vec3 Vec3Div(vec3 a, f32 b) {
	vec3 result = {a.x / b, a.y / b, a.z / b};
	return result;
}
f32 Vec3Dot(vec3 a, vec3 b) {
	return a.x * b.x + a.y * b.y + a.z * b.z;
}
f32 Vec3Cross(vec3 a, vec3 b) {
	return Vec3Length(Vec3Hadamard(a, b));
}
f32 Vec3Length(vec3 a) {
	return sqrt_f32(a.x * a.x + a.y * a.y + a.z * a.z);
}
vec3 Vec3Normalize(vec3 a) {
	f32 length = Vec3Length(a);
	return Vec3Div(a, length);
}

// TODO: Add more functions for 3D geometry

#endif