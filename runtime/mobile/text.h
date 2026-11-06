// Text engine (text.c): TrueType rendering for the GDI / GDI+ replacements.
#pragma once
#include "rt.h"
void text_vmetrics(float em, int bold, float *ascent, float *descent, float *gap);
float text_advance(u32 cp, float em, int bold);
float text_width(const u16 *s, int n, float em, int bold);
// m = GDI+ style affine [m11 m12 m21 m22 dx dy] (row vector: x' = x*m11 + y*m21 + dx)
void text_coverage(u8 *cov, int w, int h, const u16 *s, int n, float em, int bold, float x, float base, const float m[6]);
int text_bounds(const u16 *s, int n, float em, int bold, float x, float base, const float m[6], float b[4]);
