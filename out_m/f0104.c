#include "funcs.h"

void F_101058c4(CPU *c) {
  NATIVE_HOOK(0x101058c4u) REGS; LOADALL;
L_101058c4:;
  /* 101058c4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058c6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101058d0(CPU *c) {
  NATIVE_HOOK(0x101058d0u) REGS; LOADALL;
L_101058d0:;
  /* 101058d0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058d2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058d4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058d7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058da mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058de pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058df leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101058e4(CPU *c) {
  NATIVE_HOOK(0x101058e4u) REGS; LOADALL;
L_101058e4:;
  /* 101058e4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058e6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058e8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058eb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058ee mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058f1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058f4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058f7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058f8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058f9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010594c(CPU *c) {
  NATIVE_HOOK(0x1010594cu) REGS; LOADALL;
  goto L_1010594c;
L_10105924:;
  /* 10105924 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10105926 jmp dword ptr [ecx*4 + 0x101059f8] */ { const u32 m_ = (u32)(ecx * 4u + 0x101059f8u); u32 t_ = M32(m_); switch (t_) { case 0x10105a3fu: goto L_10105a3f; default: SAVEALL; call_ind(c, t_); return; } }
L_1010594c:;
  /* 1010594c pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
  /* 1010594d adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 1010594f nop */ ;
  /* 10105950 pop esp */ { u32 v_ = M32(esp); esp += 4; esp = (u32)(v_); }
  /* 10105951 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105952 adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10105954 sbb byte ptr [ecx + 0x10], 0x10 */ { const u32 m_ = (u32)(ecx + 0x10u); u32 a_ = M8(m_), b_ = 0x10u; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10105958 test al, 0x59 */ { u32 a_ = (eax & 0xffu), b_ = 0x59u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010595a adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 1010595c mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010595f and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10105961 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105964 sub esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10105967 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1010596a sub edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010596d cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105970 jb 0x10105924 */ if (CF_) goto L_10105924;
  /* 10105972 std */ c->df = 1;
  /* 10105973 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10105975 cld */ c->df = 0;
  /* 10105976 jmp dword ptr [edx*4 + 0x10105a48] */ { const u32 m_ = (u32)(edx * 4u + 0x10105a48u); u32 t_ = M32(m_); switch (t_) { case 0x10105a58u: goto L_10105a58; case 0x10105a60u: goto L_10105a60; case 0x10105a70u: goto L_10105a70; case 0x10105a84u: goto L_10105a84; default: SAVEALL; call_ind(c, t_); return; } }
L_10105a3f:;
  /* 10105a3f jmp dword ptr [edx*4 + 0x10105a48] */ { const u32 m_ = (u32)(edx * 4u + 0x10105a48u); u32 t_ = M32(m_); switch (t_) { case 0x10105a58u: goto L_10105a58; case 0x10105a60u: goto L_10105a60; case 0x10105a70u: goto L_10105a70; case 0x10105a84u: goto L_10105a84; default: SAVEALL; call_ind(c, t_); return; } }
L_10105a58:;
  /* 10105a58 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a5b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a5d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a60:;
  /* 10105a60 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a63 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a66 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a6b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a70:;
  /* 10105a70 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a73 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a76 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a79 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a7c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a7f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a80 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a81 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a84:;
  /* 10105a84 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a87 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a8a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a8d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a90 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a93 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a96 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a9a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a9b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010595c(CPU *c) {
  NATIVE_HOOK(0x1010595cu) REGS; LOADALL;
  goto L_1010595c;
L_10105924:;
  /* 10105924 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10105926 jmp dword ptr [ecx*4 + 0x101059f8] */ { const u32 m_ = (u32)(ecx * 4u + 0x101059f8u); u32 t_ = M32(m_); switch (t_) { case 0x10105a3fu: goto L_10105a3f; default: SAVEALL; call_ind(c, t_); return; } }
L_1010595c:;
  /* 1010595c mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010595f and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10105961 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105964 sub esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10105967 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1010596a sub edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010596d cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105970 jb 0x10105924 */ if (CF_) goto L_10105924;
  /* 10105972 std */ c->df = 1;
  /* 10105973 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10105975 cld */ c->df = 0;
  /* 10105976 jmp dword ptr [edx*4 + 0x10105a48] */ { const u32 m_ = (u32)(edx * 4u + 0x10105a48u); u32 t_ = M32(m_); switch (t_) { case 0x10105a58u: goto L_10105a58; case 0x10105a60u: goto L_10105a60; case 0x10105a70u: goto L_10105a70; case 0x10105a84u: goto L_10105a84; default: SAVEALL; call_ind(c, t_); return; } }
L_10105a3f:;
  /* 10105a3f jmp dword ptr [edx*4 + 0x10105a48] */ { const u32 m_ = (u32)(edx * 4u + 0x10105a48u); u32 t_ = M32(m_); switch (t_) { case 0x10105a58u: goto L_10105a58; case 0x10105a60u: goto L_10105a60; case 0x10105a70u: goto L_10105a70; case 0x10105a84u: goto L_10105a84; default: SAVEALL; call_ind(c, t_); return; } }
L_10105a58:;
  /* 10105a58 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a5b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a5d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a60:;
  /* 10105a60 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a63 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a66 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a6b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a70:;
  /* 10105a70 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a73 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a76 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a79 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a7c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a7f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a80 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a81 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a84:;
  /* 10105a84 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a87 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a8a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a8d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a90 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a93 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a96 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a9a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a9b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105980(CPU *c) {
  NATIVE_HOOK(0x10105980u) REGS; LOADALL;
  goto L_10105980;
L_10105924:;
  /* 10105924 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10105926 jmp dword ptr [ecx*4 + 0x101059f8] */ { const u32 m_ = (u32)(ecx * 4u + 0x101059f8u); u32 t_ = M32(m_); switch (t_) { case 0x10105a3fu: goto L_10105a3f; default: SAVEALL; call_ind(c, t_); return; } }
L_10105980:;
  /* 10105980 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105983 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10105985 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105988 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010598b shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1010598e mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105991 sub esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10105994 sub edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10105997 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010599a jb 0x10105924 */ if (CF_) goto L_10105924;
  /* 1010599c std */ c->df = 1;
  /* 1010599d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1010599f cld */ c->df = 0;
  /* 101059a0 jmp dword ptr [edx*4 + 0x10105a48] */ { const u32 m_ = (u32)(edx * 4u + 0x10105a48u); u32 t_ = M32(m_); switch (t_) { case 0x10105a58u: goto L_10105a58; case 0x10105a60u: goto L_10105a60; case 0x10105a70u: goto L_10105a70; case 0x10105a84u: goto L_10105a84; default: SAVEALL; call_ind(c, t_); return; } }
L_10105a3f:;
  /* 10105a3f jmp dword ptr [edx*4 + 0x10105a48] */ { const u32 m_ = (u32)(edx * 4u + 0x10105a48u); u32 t_ = M32(m_); switch (t_) { case 0x10105a58u: goto L_10105a58; case 0x10105a60u: goto L_10105a60; case 0x10105a70u: goto L_10105a70; case 0x10105a84u: goto L_10105a84; default: SAVEALL; call_ind(c, t_); return; } }
L_10105a58:;
  /* 10105a58 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a5b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a5d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a60:;
  /* 10105a60 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a63 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a66 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a6b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a70:;
  /* 10105a70 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a73 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a76 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a79 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a7c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a7f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a80 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a81 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a84:;
  /* 10105a84 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a87 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a8a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a8d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a90 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a93 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a96 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a9a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a9b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101059a8(CPU *c) {
  NATIVE_HOOK(0x101059a8u) REGS; LOADALL;
  goto L_101059a8;
L_10105924:;
  /* 10105924 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10105926 jmp dword ptr [ecx*4 + 0x101059f8] */ { const u32 m_ = (u32)(ecx * 4u + 0x101059f8u); u32 t_ = M32(m_); switch (t_) { case 0x10105a3fu: goto L_10105a3f; default: SAVEALL; call_ind(c, t_); return; } }
L_101059a8:;
  /* 101059a8 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101059ab and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 101059ad mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101059b0 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101059b3 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101059b6 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101059b9 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 101059bc mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101059bf sub esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101059c2 sub edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101059c5 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101059c8 jb 0x10105924 */ if (CF_) goto L_10105924;
  /* 101059ce std */ c->df = 1;
  /* 101059cf rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 101059d1 cld */ c->df = 0;
  /* 101059d2 jmp dword ptr [edx*4 + 0x10105a48] */ { const u32 m_ = (u32)(edx * 4u + 0x10105a48u); u32 t_ = M32(m_); switch (t_) { case 0x10105a58u: goto L_10105a58; case 0x10105a60u: goto L_10105a60; case 0x10105a70u: goto L_10105a70; case 0x10105a84u: goto L_10105a84; default: SAVEALL; call_ind(c, t_); return; } }
L_10105a3f:;
  /* 10105a3f jmp dword ptr [edx*4 + 0x10105a48] */ { const u32 m_ = (u32)(edx * 4u + 0x10105a48u); u32 t_ = M32(m_); switch (t_) { case 0x10105a58u: goto L_10105a58; case 0x10105a60u: goto L_10105a60; case 0x10105a70u: goto L_10105a70; case 0x10105a84u: goto L_10105a84; default: SAVEALL; call_ind(c, t_); return; } }
L_10105a58:;
  /* 10105a58 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a5b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a5d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a60:;
  /* 10105a60 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a63 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a66 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a6b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a70:;
  /* 10105a70 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a73 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a76 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a79 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a7c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a7f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a80 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a81 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a84:;
  /* 10105a84 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a87 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a8a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a8d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a90 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a93 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a96 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a9a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a9b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101059f8(CPU *c) {
  NATIVE_HOOK(0x101059f8u) REGS; LOADALL;
L_101059f8:;
  /* 101059f8 aas */ TRAP(0x101059f8u, "aas");
}

void F_101059fc(CPU *c) {
  NATIVE_HOOK(0x101059fcu) REGS; LOADALL;
L_101059fc:;
  /* 101059fc mov eax, dword ptr [esi + ecx*4 + 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10105a00 mov dword ptr [edi + ecx*4 + 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10105a04 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 10105a08 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 10105a0c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10105a10 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10105a14 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10105a18 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 10105a1c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10105a20 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10105a24 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a28 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 10105a2c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10105a30 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10105a34 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 10105a3b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10105a3d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10105a3f jmp dword ptr [edx*4 + 0x10105a48] */ { const u32 m_ = (u32)(edx * 4u + 0x10105a48u); u32 t_ = M32(m_); switch (t_) { case 0x10105a58u: goto L_10105a58; case 0x10105a60u: goto L_10105a60; case 0x10105a70u: goto L_10105a70; case 0x10105a84u: goto L_10105a84; default: SAVEALL; call_ind(c, t_); return; } }
L_10105a58:;
  /* 10105a58 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a5b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a5d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a60:;
  /* 10105a60 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a63 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a66 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a6b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a70:;
  /* 10105a70 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a73 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a76 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a79 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a7c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a7f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a80 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a81 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a84:;
  /* 10105a84 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a87 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a8a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a8d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a90 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a93 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a96 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a9a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a9b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105a04(CPU *c) {
  NATIVE_HOOK(0x10105a04u) REGS; LOADALL;
L_10105a04:;
  /* 10105a04 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 10105a08 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 10105a0c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10105a10 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10105a14 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10105a18 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 10105a1c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10105a20 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10105a24 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a28 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 10105a2c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10105a30 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10105a34 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 10105a3b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10105a3d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10105a3f jmp dword ptr [edx*4 + 0x10105a48] */ { const u32 m_ = (u32)(edx * 4u + 0x10105a48u); u32 t_ = M32(m_); switch (t_) { case 0x10105a58u: goto L_10105a58; case 0x10105a60u: goto L_10105a60; case 0x10105a70u: goto L_10105a70; case 0x10105a84u: goto L_10105a84; default: SAVEALL; call_ind(c, t_); return; } }
L_10105a58:;
  /* 10105a58 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a5b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a5d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a60:;
  /* 10105a60 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a63 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a66 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a6b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a70:;
  /* 10105a70 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a73 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a76 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a79 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a7c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a7f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a80 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a81 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a84:;
  /* 10105a84 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a87 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a8a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a8d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a90 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a93 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a96 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a9a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a9b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105a0c(CPU *c) {
  NATIVE_HOOK(0x10105a0cu) REGS; LOADALL;
L_10105a0c:;
  /* 10105a0c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10105a10 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10105a14 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10105a18 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 10105a1c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10105a20 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10105a24 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a28 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 10105a2c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10105a30 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10105a34 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 10105a3b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10105a3d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10105a3f jmp dword ptr [edx*4 + 0x10105a48] */ { const u32 m_ = (u32)(edx * 4u + 0x10105a48u); u32 t_ = M32(m_); switch (t_) { case 0x10105a58u: goto L_10105a58; case 0x10105a60u: goto L_10105a60; case 0x10105a70u: goto L_10105a70; case 0x10105a84u: goto L_10105a84; default: SAVEALL; call_ind(c, t_); return; } }
L_10105a58:;
  /* 10105a58 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a5b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a5d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a60:;
  /* 10105a60 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a63 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a66 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a6b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a70:;
  /* 10105a70 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a73 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a76 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a79 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a7c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a7f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a80 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a81 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a84:;
  /* 10105a84 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a87 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a8a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a8d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a90 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a93 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a96 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a9a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a9b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105a14(CPU *c) {
  NATIVE_HOOK(0x10105a14u) REGS; LOADALL;
L_10105a14:;
  /* 10105a14 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10105a18 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 10105a1c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10105a20 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10105a24 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a28 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 10105a2c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10105a30 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10105a34 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 10105a3b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10105a3d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10105a3f jmp dword ptr [edx*4 + 0x10105a48] */ { const u32 m_ = (u32)(edx * 4u + 0x10105a48u); u32 t_ = M32(m_); switch (t_) { case 0x10105a58u: goto L_10105a58; case 0x10105a60u: goto L_10105a60; case 0x10105a70u: goto L_10105a70; case 0x10105a84u: goto L_10105a84; default: SAVEALL; call_ind(c, t_); return; } }
L_10105a58:;
  /* 10105a58 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a5b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a5d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a60:;
  /* 10105a60 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a63 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a66 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a6b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a70:;
  /* 10105a70 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a73 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a76 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a79 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a7c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a7f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a80 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a81 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a84:;
  /* 10105a84 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a87 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a8a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a8d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a90 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a93 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a96 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a9a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a9b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105a1c(CPU *c) {
  NATIVE_HOOK(0x10105a1cu) REGS; LOADALL;
L_10105a1c:;
  /* 10105a1c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10105a20 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10105a24 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a28 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 10105a2c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10105a30 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10105a34 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 10105a3b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10105a3d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10105a3f jmp dword ptr [edx*4 + 0x10105a48] */ { const u32 m_ = (u32)(edx * 4u + 0x10105a48u); u32 t_ = M32(m_); switch (t_) { case 0x10105a58u: goto L_10105a58; case 0x10105a60u: goto L_10105a60; case 0x10105a70u: goto L_10105a70; case 0x10105a84u: goto L_10105a84; default: SAVEALL; call_ind(c, t_); return; } }
L_10105a58:;
  /* 10105a58 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a5b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a5d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a60:;
  /* 10105a60 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a63 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a66 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a6b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a70:;
  /* 10105a70 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a73 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a76 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a79 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a7c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a7f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a80 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a81 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a84:;
  /* 10105a84 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a87 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a8a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a8d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a90 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a93 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a96 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a9a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a9b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105a24(CPU *c) {
  NATIVE_HOOK(0x10105a24u) REGS; LOADALL;
L_10105a24:;
  /* 10105a24 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a28 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 10105a2c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10105a30 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10105a34 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 10105a3b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10105a3d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10105a3f jmp dword ptr [edx*4 + 0x10105a48] */ { const u32 m_ = (u32)(edx * 4u + 0x10105a48u); u32 t_ = M32(m_); switch (t_) { case 0x10105a58u: goto L_10105a58; case 0x10105a60u: goto L_10105a60; case 0x10105a70u: goto L_10105a70; case 0x10105a84u: goto L_10105a84; default: SAVEALL; call_ind(c, t_); return; } }
L_10105a58:;
  /* 10105a58 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a5b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a5d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a60:;
  /* 10105a60 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a63 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a66 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a6b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a70:;
  /* 10105a70 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a73 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a76 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a79 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a7c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a7f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a80 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a81 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a84:;
  /* 10105a84 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a87 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a8a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a8d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a90 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a93 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a96 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a9a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a9b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105a2c(CPU *c) {
  NATIVE_HOOK(0x10105a2cu) REGS; LOADALL;
L_10105a2c:;
  /* 10105a2c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10105a30 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10105a34 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 10105a3b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10105a3d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10105a3f jmp dword ptr [edx*4 + 0x10105a48] */ { const u32 m_ = (u32)(edx * 4u + 0x10105a48u); u32 t_ = M32(m_); switch (t_) { case 0x10105a58u: goto L_10105a58; case 0x10105a60u: goto L_10105a60; case 0x10105a70u: goto L_10105a70; case 0x10105a84u: goto L_10105a84; default: SAVEALL; call_ind(c, t_); return; } }
L_10105a58:;
  /* 10105a58 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a5b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a5d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a60:;
  /* 10105a60 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a63 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a66 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a6b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a70:;
  /* 10105a70 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a73 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a76 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a79 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a7c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a7f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a80 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a81 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a84:;
  /* 10105a84 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a87 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a8a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a8d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a90 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a93 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a96 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a9a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a9b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105a3f(CPU *c) {
  NATIVE_HOOK(0x10105a3fu) REGS; LOADALL;
L_10105a3f:;
  /* 10105a3f jmp dword ptr [edx*4 + 0x10105a48] */ { const u32 m_ = (u32)(edx * 4u + 0x10105a48u); u32 t_ = M32(m_); switch (t_) { case 0x10105a58u: goto L_10105a58; case 0x10105a60u: goto L_10105a60; case 0x10105a70u: goto L_10105a70; case 0x10105a84u: goto L_10105a84; default: SAVEALL; call_ind(c, t_); return; } }
L_10105a58:;
  /* 10105a58 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a5b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a5d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a60:;
  /* 10105a60 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a63 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a66 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a6b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a70:;
  /* 10105a70 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a73 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a76 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a79 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a7c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a7f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a80 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a81 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105a84:;
  /* 10105a84 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a87 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a8a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a8d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a90 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a93 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a96 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a9a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a9b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105a48(CPU *c) {
  NATIVE_HOOK(0x10105a48u) REGS; LOADALL;
L_10105a48:;
  /* 10105a48 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 10105a49 pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
  /* 10105a4a adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10105a4c pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 10105a4d pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
  /* 10105a4e adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10105a50 jo 0x10105aac */ if (OF_) goto L_10105aac;
  /* 10105a52 adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10105a54 test byte ptr [edx + 0x10], bl */ { const u32 m_ = (u32)(edx + 0x10u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10105a57 adc byte ptr [ebx + 0x5f5e0845], cl */ { const u32 m_ = (u32)(ebx + 0x5f5e0845u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10105a5d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105aac:;
  /* 10105aac shr byte ptr [edx + 0x19], 1 */ { const u32 m_ = (u32)(edx + 0x19u); u32 n_ = (1u) & 31u; if (n_) { u32 a_ = M8(m_); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 7) & 1u; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); M8(m_) = (u8)(r_); } }
  /* 10105aaf call 0x1010602e */ esp -= 4; M32(esp) = 0x10105ab4u; SAVEALL; F_1010602e(c); ABI_CHECK(0x1010602eu, 0x10105aafu); RETCHK(0x10105ab4u, 0x10105aafu); LOADALL;
  /* 10105ab4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105ab5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105a58(CPU *c) {
  NATIVE_HOOK(0x10105a58u) REGS; LOADALL;
L_10105a58:;
  /* 10105a58 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a5b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a5d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105a60(CPU *c) {
  NATIVE_HOOK(0x10105a60u) REGS; LOADALL;
L_10105a60:;
  /* 10105a60 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a63 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a66 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a6b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105a70(CPU *c) {
  NATIVE_HOOK(0x10105a70u) REGS; LOADALL;
L_10105a70:;
  /* 10105a70 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a73 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a76 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a79 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a7c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a7f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a80 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a81 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105a84(CPU *c) {
  NATIVE_HOOK(0x10105a84u) REGS; LOADALL;
L_10105a84:;
  /* 10105a84 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a87 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a8a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a8d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a90 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105a93 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105a96 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105a99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105a9a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105a9b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105a9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105a9d(CPU *c) {
  NATIVE_HOOK(0x10105a9du) REGS; LOADALL;
L_10105a9d:;
  /* 10105a9d jmp 0x101074a1 */ SAVEALL; F_101074a1(c); return;
}

void F_10105aa2(CPU *c) {
  NATIVE_HOOK(0x10105aa2u) REGS; LOADALL;
L_10105aa2:;
  /* 10105aa2 mov eax, dword ptr [0x10120ca4] */ { const u32 m_ = (u32)(0x10120ca4u); eax = (u32)(M32(m_)); }
  /* 10105aa7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105aa9 je 0x10105aad */ if (ZF_) goto L_10105aad;
  /* 10105aab call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10105aadu; SAVEALL; call_ind(c, t_); RETCHK(0x10105aadu, 0x10105aabu); LOADALL; }
L_10105aad:;
  /* 10105aad push 0x19 */ { u32 v_ = 0x19u; esp -= 4; M32(esp) = v_; }
  /* 10105aaf call 0x1010602e */ esp -= 4; M32(esp) = 0x10105ab4u; SAVEALL; F_1010602e(c); ABI_CHECK(0x1010602eu, 0x10105aafu); RETCHK(0x10105ab4u, 0x10105aafu); LOADALL;
  /* 10105ab4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105ab5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105ab6(CPU *c) {
  NATIVE_HOOK(0x10105ab6u) REGS; LOADALL;
L_10105ab6:;
  /* 10105ab6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10105ab7 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10105ab9 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10105abc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105abf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105ac0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10105ac1 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10105ac3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105ac4 mov esi, 0x1010d304 */ { esi = (u32)(0x1010d304u); }
  /* 10105ac9 lea edi, [ebp - 0x20] */ edi = (u32)((u32)(ebp + 0xffffffe0u));
  /* 10105acc rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10105ace mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10105ad1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10105ad4 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10105ad7 lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 10105ada push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105adb push dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105ade push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105ae1 push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105ae4 call dword ptr [0x1010d014] */ { const u32 m_ = (u32)(0x1010d014u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10105aeau; SAVEALL; call_ind(c, t_); RETCHK(0x10105aeau, 0x10105ae4u); LOADALL; }
}

void F_10105af0(CPU *c) {
  NATIVE_HOOK(0x10105af0u) REGS; LOADALL;
L_10105af0:;
  /* 10105af0 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10105af2 and dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105af6 and dword ptr [eax + 8], 0 */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105afa mov dword ptr [eax], 0x1010d328 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x1010d328u); }
  /* 10105b00 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105b01(CPU *c) {
  NATIVE_HOOK(0x10105b01u) REGS; LOADALL;
L_10105b01:;
  /* 10105b01 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105b02 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10105b03 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10105b07 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10105b09 mov dword ptr [esi], 0x1010d328 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1010d328u); }
  /* 10105b0f push dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105b11 call 0x10106140 */ esp -= 4; M32(esp) = 0x10105b16u; SAVEALL; F_10106140(c); ABI_CHECK(0x10106140u, 0x10105b11u); RETCHK(0x10105b16u, 0x10105b11u); LOADALL;
  /* 10105b16 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10105b17 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105b18 call 0x10106108 */ esp -= 4; M32(esp) = 0x10105b1du; SAVEALL; F_10106108(c); ABI_CHECK(0x10106108u, 0x10105b18u); RETCHK(0x10105b1du, 0x10105b18u); LOADALL;
  /* 10105b1d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105b1f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105b20 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105b21 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 10105b24 je 0x10105b30 */ if (ZF_) goto L_10105b30;
  /* 10105b26 push dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105b28 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105b29 call 0x10107580 */ esp -= 4; M32(esp) = 0x10105b2eu; SAVEALL; F_10107580(c); ABI_CHECK(0x10107580u, 0x10105b29u); RETCHK(0x10105b2eu, 0x10105b29u); LOADALL;
  /* 10105b2e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105b2f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10105b30:;
  /* 10105b30 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105b31 mov dword ptr [esi + 8], 1 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x1u); }
  /* 10105b38 mov eax, esi */ { eax = (u32)(esi); }
  /* 10105b3a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105b3b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10105b3e(CPU *c) {
  NATIVE_HOOK(0x10105b3eu) REGS; LOADALL;
L_10105b3e:;
  /* 10105b3e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105b3f mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10105b41 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10105b42 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10105b46 mov dword ptr [esi], 0x1010d328 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1010d328u); }
  /* 10105b4c mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105b4f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105b51 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 10105b54 je 0x10105b7b */ if (ZF_) goto L_10105b7b;
  /* 10105b56 push dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105b59 call 0x10106140 */ esp -= 4; M32(esp) = 0x10105b5eu; SAVEALL; F_10106140(c); ABI_CHECK(0x10106140u, 0x10105b59u); RETCHK(0x10105b5eu, 0x10105b59u); LOADALL;
  /* 10105b5e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10105b5f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105b60 call 0x10106108 */ esp -= 4; M32(esp) = 0x10105b65u; SAVEALL; F_10106108(c); ABI_CHECK(0x10106108u, 0x10105b60u); RETCHK(0x10105b65u, 0x10105b60u); LOADALL;
  /* 10105b65 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105b67 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105b68 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105b69 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 10105b6c je 0x10105b81 */ if (ZF_) goto L_10105b81;
  /* 10105b6e push dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105b71 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105b72 call 0x10107580 */ esp -= 4; M32(esp) = 0x10105b77u; SAVEALL; F_10107580(c); ABI_CHECK(0x10107580u, 0x10105b72u); RETCHK(0x10105b77u, 0x10105b72u); LOADALL;
  /* 10105b77 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105b78 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105b79 jmp 0x10105b81 */ goto L_10105b81;
L_10105b7b:;
  /* 10105b7b mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10105b7e mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
L_10105b81:;
  /* 10105b81 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105b82 mov eax, esi */ { eax = (u32)(esi); }
  /* 10105b84 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105b85 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10105b88(CPU *c) {
  NATIVE_HOOK(0x10105b88u) REGS; LOADALL;
L_10105b88:;
  /* 10105b88 cmp dword ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105b8c mov dword ptr [ecx], 0x1010d328 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x1010d328u); }
  /* 10105b92 je 0x10105b9d */ if (ZF_) goto L_10105b9d;
  /* 10105b94 push dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105b97 call 0x101074a1 */ esp -= 4; M32(esp) = 0x10105b9cu; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10105b97u); RETCHK(0x10105b9cu, 0x10105b97u); LOADALL;
  /* 10105b9c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10105b9d:;
  /* 10105b9d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105b9e(CPU *c) {
  NATIVE_HOOK(0x10105b9eu) REGS; LOADALL;
L_10105b9e:;
  /* 10105b9e mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10105ba1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105ba3 jne 0x10105baa */ if (!ZF_) goto L_10105baa;
  /* 10105ba5 mov eax, 0x1010d330 */ { eax = (u32)(0x1010d330u); }
L_10105baa:;
  /* 10105baa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105bab(CPU *c) {
  NATIVE_HOOK(0x10105babu) REGS; LOADALL;
L_10105bab:;
  /* 10105bab push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105bac mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10105bae call 0x10105b88 */ esp -= 4; M32(esp) = 0x10105bb3u; SAVEALL; F_10105b88(c); ABI_CHECK(0x10105b88u, 0x10105baeu); RETCHK(0x10105bb3u, 0x10105baeu); LOADALL;
  /* 10105bb3 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10105bb8 je 0x10105bc1 */ if (ZF_) goto L_10105bc1;
  /* 10105bba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105bbb call 0x10105a9d */ esp -= 4; M32(esp) = 0x10105bc0u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10105bbbu); RETCHK(0x10105bc0u, 0x10105bbbu); LOADALL;
  /* 10105bc0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10105bc1:;
  /* 10105bc1 mov eax, esi */ { eax = (u32)(esi); }
  /* 10105bc3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105bc4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10105bc7(CPU *c) {
  NATIVE_HOOK(0x10105bc7u) REGS; LOADALL;
L_10105bc7:;
  /* 10105bc7 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10105bc9 push 0x1010d350 */ { u32 v_ = 0x1010d350u; esp -= 4; M32(esp) = v_; }
  /* 10105bce call 0x1010734c */ esp -= 4; M32(esp) = 0x10105bd3u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10105bceu); RETCHK(0x10105bd3u, 0x10105bceu); LOADALL;
  /* 10105bd3 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10105bd5 mov dword ptr [esi], 0x1010d348 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1010d348u); }
  /* 10105bdb push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 10105bdd call 0x101077cb */ esp -= 4; M32(esp) = 0x10105be2u; SAVEALL; F_101077cb(c); ABI_CHECK(0x101077cbu, 0x10105bddu); RETCHK(0x10105be2u, 0x10105bddu); LOADALL;
  /* 10105be2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105be3 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105be7 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 10105bea test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105bec je 0x10105bf5 */ if (ZF_) goto L_10105bf5;
  /* 10105bee push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105bef call 0x101074a1 */ esp -= 4; M32(esp) = 0x10105bf4u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10105befu); RETCHK(0x10105bf4u, 0x10105befu); LOADALL;
  /* 10105bf4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10105bf5:;
  /* 10105bf5 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105bf9 call 0x10105c04 */ esp -= 4; M32(esp) = 0x10105bfeu; SAVEALL; F_10105c04(c); ABI_CHECK(0x10105c04u, 0x10105bf9u); RETCHK(0x10105bfeu, 0x10105bf9u); LOADALL;
  /* 10105bfe call 0x10107387 */ esp -= 4; M32(esp) = 0x10105c03u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10105bfeu); RETCHK(0x10105c03u, 0x10105bfeu); LOADALL;
  /* 10105c03 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105c04(CPU *c) {
  NATIVE_HOOK(0x10105c04u) REGS; LOADALL;
L_10105c04:;
  /* 10105c04 push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 10105c06 call 0x10107716 */ esp -= 4; M32(esp) = 0x10105c0bu; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x10105c06u); RETCHK(0x10105c0bu, 0x10105c06u); LOADALL;
  /* 10105c0b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105c0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105c0d(CPU *c) {
  NATIVE_HOOK(0x10105c0du) REGS; LOADALL;
L_10105c0d:;
  /* 10105c0d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105c0e mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10105c10 call 0x10105bc7 */ esp -= 4; M32(esp) = 0x10105c15u; SAVEALL; F_10105bc7(c); ABI_CHECK(0x10105bc7u, 0x10105c10u); RETCHK(0x10105c15u, 0x10105c10u); LOADALL;
  /* 10105c15 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10105c1a je 0x10105c23 */ if (ZF_) goto L_10105c23;
  /* 10105c1c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105c1d call 0x10105a9d */ esp -= 4; M32(esp) = 0x10105c22u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10105c1du); RETCHK(0x10105c22u, 0x10105c1du); LOADALL;
  /* 10105c22 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10105c23:;
  /* 10105c23 mov eax, esi */ { eax = (u32)(esi); }
  /* 10105c25 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105c26 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10105c29(CPU *c) {
  NATIVE_HOOK(0x10105c29u) REGS; LOADALL;
L_10105c29:;
  /* 10105c29 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105c2a push dword ptr [0x10122508] */ { const u32 m_ = (u32)(0x10122508u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105c30 call 0x10107bdc */ esp -= 4; M32(esp) = 0x10105c35u; SAVEALL; F_10107bdc(c); ABI_CHECK(0x10107bdcu, 0x10105c30u); RETCHK(0x10105c35u, 0x10105c30u); LOADALL;
  /* 10105c35 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105c36 mov ecx, dword ptr [0x10122504] */ { const u32 m_ = (u32)(0x10122504u); ecx = (u32)(M32(m_)); }
  /* 10105c3c mov esi, eax */ { esi = (u32)(eax); }
  /* 10105c3e mov eax, dword ptr [0x10122508] */ { const u32 m_ = (u32)(0x10122508u); eax = (u32)(M32(m_)); }
  /* 10105c43 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10105c45 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10105c47 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10105c4a cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105c4c jae 0x10105c9c */ if (!CF_) goto L_10105c9c;
  /* 10105c4e mov ecx, 0x800 */ { ecx = (u32)(0x800u); }
  /* 10105c53 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105c55 jae 0x10105c59 */ if (!CF_) goto L_10105c59;
  /* 10105c57 mov ecx, esi */ { ecx = (u32)(esi); }
L_10105c59:;
  /* 10105c59 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10105c5b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10105c5c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105c5d call 0x10107888 */ esp -= 4; M32(esp) = 0x10105c62u; SAVEALL; F_10107888(c); ABI_CHECK(0x10107888u, 0x10105c5du); RETCHK(0x10105c62u, 0x10105c5du); LOADALL;
  /* 10105c62 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105c64 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105c65 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105c66 jne 0x10105c7f */ if (!ZF_) goto L_10105c7f;
  /* 10105c68 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10105c6b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105c6c push dword ptr [0x10122508] */ { const u32 m_ = (u32)(0x10122508u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105c72 call 0x10107888 */ esp -= 4; M32(esp) = 0x10105c77u; SAVEALL; F_10107888(c); ABI_CHECK(0x10107888u, 0x10105c72u); RETCHK(0x10105c77u, 0x10105c72u); LOADALL;
  /* 10105c77 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105c79 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105c7a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105c7b jne 0x10105c7f */ if (!ZF_) goto L_10105c7f;
  /* 10105c7d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105c7e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105c7f:;
  /* 10105c7f mov ecx, dword ptr [0x10122504] */ { const u32 m_ = (u32)(0x10122504u); ecx = (u32)(M32(m_)); }
  /* 10105c85 sub ecx, dword ptr [0x10122508] */ { const u32 m_ = (u32)(0x10122508u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10105c8b mov dword ptr [0x10122508], eax */ { const u32 m_ = (u32)(0x10122508u); M32(m_) = (u32)(eax); }
  /* 10105c90 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10105c93 lea ecx, [eax + ecx*4] */ ecx = (u32)((u32)(eax + ecx * 4u));
  /* 10105c96 mov dword ptr [0x10122504], ecx */ { const u32 m_ = (u32)(0x10122504u); M32(m_) = (u32)(ecx); }
L_10105c9c:;
  /* 10105c9c mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 10105c9e add dword ptr [0x10122504], 4 */ { const u32 m_ = (u32)(0x10122504u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105ca5 mov eax, edi */ { eax = (u32)(edi); }
  /* 10105ca7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105ca8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105ca9(CPU *c) {
  NATIVE_HOOK(0x10105ca9u) REGS; LOADALL;
L_10105ca9:;
  /* 10105ca9 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10105cae call 0x10106108 */ esp -= 4; M32(esp) = 0x10105cb3u; SAVEALL; F_10106108(c); ABI_CHECK(0x10106108u, 0x10105caeu); RETCHK(0x10105cb3u, 0x10105caeu); LOADALL;
  /* 10105cb3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105cb5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105cb6 mov dword ptr [0x10122508], eax */ { const u32 m_ = (u32)(0x10122508u); M32(m_) = (u32)(eax); }
  /* 10105cbb jne 0x10105cc1 */ if (!ZF_) goto L_10105cc1;
  /* 10105cbd push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 10105cbf pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 10105cc0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105cc1:;
  /* 10105cc1 and dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105cc4 mov eax, dword ptr [0x10122508] */ { const u32 m_ = (u32)(0x10122508u); eax = (u32)(M32(m_)); }
  /* 10105cc9 mov dword ptr [0x10122504], eax */ { const u32 m_ = (u32)(0x10122504u); M32(m_) = (u32)(eax); }
  /* 10105cce xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10105cd0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105cd1(CPU *c) {
  NATIVE_HOOK(0x10105cd1u) REGS; LOADALL;
L_10105cd1:;
  /* 10105cd1 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10105cd3 push 0x1010d360 */ { u32 v_ = 0x1010d360u; esp -= 4; M32(esp) = v_; }
  /* 10105cd8 call 0x1010734c */ esp -= 4; M32(esp) = 0x10105cddu; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10105cd8u); RETCHK(0x10105cddu, 0x10105cd8u); LOADALL;
  /* 10105cdd call 0x10107a65 */ esp -= 4; M32(esp) = 0x10105ce2u; SAVEALL; F_10107a65(c); ABI_CHECK(0x10107a65u, 0x10105cddu); RETCHK(0x10105ce2u, 0x10105cddu); LOADALL;
  /* 10105ce2 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105ce6 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10105ce9 call 0x10105c29 */ esp -= 4; M32(esp) = 0x10105ceeu; SAVEALL; F_10105c29(c); ABI_CHECK(0x10105c29u, 0x10105ce9u); RETCHK(0x10105ceeu, 0x10105ce9u); LOADALL;
  /* 10105cee mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10105cf1 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105cf5 call 0x10105d03 */ esp -= 4; M32(esp) = 0x10105cfau; SAVEALL; F_10105d03(c); ABI_CHECK(0x10105d03u, 0x10105cf5u); RETCHK(0x10105cfau, 0x10105cf5u); LOADALL;
  /* 10105cfa mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10105cfd call 0x10107387 */ esp -= 4; M32(esp) = 0x10105d02u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10105cfdu); RETCHK(0x10105d02u, 0x10105cfdu); LOADALL;
  /* 10105d02 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105d03(CPU *c) {
  NATIVE_HOOK(0x10105d03u) REGS; LOADALL;
L_10105d03:;
  /* 10105d03 call 0x10107a6e */ esp -= 4; M32(esp) = 0x10105d08u; SAVEALL; F_10107a6e(c); ABI_CHECK(0x10107a6eu, 0x10105d03u); RETCHK(0x10105d08u, 0x10105d03u); LOADALL;
  /* 10105d08 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105d09(CPU *c) {
  NATIVE_HOOK(0x10105d09u) REGS; LOADALL;
L_10105d09:;
  /* 10105d09 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105d0d call 0x10105cd1 */ esp -= 4; M32(esp) = 0x10105d12u; SAVEALL; F_10105cd1(c); ABI_CHECK(0x10105cd1u, 0x10105d0du); RETCHK(0x10105d12u, 0x10105d0du); LOADALL;
  /* 10105d12 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10105d14 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10105d16 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10105d18 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105d19 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10105d1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105d1b(CPU *c) {
  NATIVE_HOOK(0x10105d1bu) REGS; LOADALL;
L_10105d1b:;
  /* 10105d1b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10105d1c mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10105d1e sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10105d21 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10105d24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105d25 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10105d28 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10105d29 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105d2c mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10105d2f push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105d32 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 10105d35 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105d36 mov dword ptr [ebp - 0x14], 0x42 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x42u); }
  /* 10105d3d mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 10105d40 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 10105d43 call 0x10107df9 */ esp -= 4; M32(esp) = 0x10105d48u; SAVEALL; F_10107df9(c); ABI_CHECK(0x10107df9u, 0x10105d43u); RETCHK(0x10105d48u, 0x10105d43u); LOADALL;
  /* 10105d48 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10105d4b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105d4d mov edi, eax */ { edi = (u32)(eax); }
  /* 10105d4f je 0x10105d6b */ if (ZF_) goto L_10105d6b;
  /* 10105d51 dec dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10105d54 js 0x10105d5e */ if (SF_) goto L_10105d5e;
  /* 10105d56 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 10105d59 mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 10105d5c jmp 0x10105d6b */ goto L_10105d6b;
L_10105d5e:;
  /* 10105d5e lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 10105d61 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105d62 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10105d64 call 0x10107c52 */ esp -= 4; M32(esp) = 0x10105d69u; SAVEALL; F_10107c52(c); ABI_CHECK(0x10107c52u, 0x10105d64u); RETCHK(0x10105d69u, 0x10105d64u); LOADALL;
  /* 10105d69 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105d6a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10105d6b:;
  /* 10105d6b mov eax, edi */ { eax = (u32)(edi); }
  /* 10105d6d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105d6e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105d6f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105d70 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105d71(CPU *c) {
  NATIVE_HOOK(0x10105d71u) REGS; LOADALL;
L_10105d71:;
  /* 10105d71 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10105d72 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10105d74 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10105d77 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105d78 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10105d7b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10105d7c lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 10105d7f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105d80 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105d83 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 10105d86 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105d87 mov dword ptr [ebp - 0x1c], 0x7fffffff */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x7fffffffu); }
  /* 10105d8e mov dword ptr [ebp - 0x14], 0x42 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x42u); }
  /* 10105d95 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 10105d98 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 10105d9b call 0x10107df9 */ esp -= 4; M32(esp) = 0x10105da0u; SAVEALL; F_10107df9(c); ABI_CHECK(0x10107df9u, 0x10105d9bu); RETCHK(0x10105da0u, 0x10105d9bu); LOADALL;
  /* 10105da0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10105da3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105da5 mov edi, eax */ { edi = (u32)(eax); }
  /* 10105da7 je 0x10105dc3 */ if (ZF_) goto L_10105dc3;
  /* 10105da9 dec dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10105dac js 0x10105db6 */ if (SF_) goto L_10105db6;
  /* 10105dae mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 10105db1 mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 10105db4 jmp 0x10105dc3 */ goto L_10105dc3;
L_10105db6:;
  /* 10105db6 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 10105db9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105dba push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10105dbc call 0x10107c52 */ esp -= 4; M32(esp) = 0x10105dc1u; SAVEALL; F_10107c52(c); ABI_CHECK(0x10107c52u, 0x10105dbcu); RETCHK(0x10105dc1u, 0x10105dbcu); LOADALL;
  /* 10105dc1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105dc2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10105dc3:;
  /* 10105dc3 mov eax, edi */ { eax = (u32)(edi); }
  /* 10105dc5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105dc6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105dc7 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105dc8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105dc9(CPU *c) {
  NATIVE_HOOK(0x10105dc9u) REGS; LOADALL;
L_10105dc9:;
  /* 10105dc9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10105dca mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10105dcc mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10105dcf cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105dd2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105dd3 jne 0x10105eb9 */ if (!ZF_) goto L_10105eb9;
  /* 10105dd9 mov eax, 0x94 */ { eax = (u32)(0x94u); }
  /* 10105dde call 0x10105720 */ esp -= 4; M32(esp) = 0x10105de3u; SAVEALL; F_10105720(c); ABI_CHECK(0x10105720u, 0x10105ddeu); RETCHK(0x10105de3u, 0x10105ddeu); LOADALL;
  /* 10105de3 mov esi, esp */ { esi = (u32)(esp); }
  /* 10105de5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105de6 mov dword ptr [esi], 0x94 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x94u); }
  /* 10105dec call dword ptr [0x1010d020] */ { const u32 m_ = (u32)(0x1010d020u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10105df2u; SAVEALL; call_ind(c, t_); RETCHK(0x10105df2u, 0x10105decu); LOADALL; }
  /* 10105df2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105df4 je 0x10105f2e */ if (ZF_) goto L_10105f2e;
  /* 10105dfa mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10105dfd mov dword ptr [0x10120e2c], ecx */ { const u32 m_ = (u32)(0x10120e2cu); M32(m_) = (u32)(ecx); }
  /* 10105e03 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10105e06 mov dword ptr [0x10120e38], eax */ { const u32 m_ = (u32)(0x10120e38u); M32(m_) = (u32)(eax); }
  /* 10105e0b mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 10105e0e mov dword ptr [0x10120e3c], edx */ { const u32 m_ = (u32)(0x10120e3cu); M32(m_) = (u32)(edx); }
  /* 10105e14 mov esi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); esi = (u32)(M32(m_)); }
  /* 10105e17 and esi, 0x7fff */ { u32 a_ = esi, b_ = 0x7fffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10105e1d cmp ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105e20 mov dword ptr [0x10120e30], esi */ { const u32 m_ = (u32)(0x10120e30u); M32(m_) = (u32)(esi); }
  /* 10105e26 je 0x10105e34 */ if (ZF_) goto L_10105e34;
  /* 10105e28 or esi, 0x8000 */ { u32 a_ = esi, b_ = 0x8000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10105e2e mov dword ptr [0x10120e30], esi */ { const u32 m_ = (u32)(0x10120e30u); M32(m_) = (u32)(esi); }
L_10105e34:;
  /* 10105e34 shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10105e37 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10105e39 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10105e3b mov dword ptr [0x10120e34], eax */ { const u32 m_ = (u32)(0x10120e34u); M32(m_) = (u32)(eax); }
  /* 10105e40 call 0x10108d91 */ esp -= 4; M32(esp) = 0x10105e45u; SAVEALL; F_10108d91(c); ABI_CHECK(0x10108d91u, 0x10105e40u); RETCHK(0x10105e45u, 0x10105e40u); LOADALL;
  /* 10105e45 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105e47 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105e48 je 0x10105f2e */ if (ZF_) goto L_10105f2e;
  /* 10105e4e call 0x10106ff9 */ esp -= 4; M32(esp) = 0x10105e53u; SAVEALL; F_10106ff9(c); ABI_CHECK(0x10106ff9u, 0x10105e4eu); RETCHK(0x10105e53u, 0x10105e4eu); LOADALL;
  /* 10105e53 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105e55 jne 0x10105e61 */ if (!ZF_) goto L_10105e61;
L_10105e57:;
  /* 10105e57 call 0x10108de2 */ esp -= 4; M32(esp) = 0x10105e5cu; SAVEALL; F_10108de2(c); ABI_CHECK(0x10108de2u, 0x10105e57u); RETCHK(0x10105e5cu, 0x10105e57u); LOADALL;
  /* 10105e5c jmp 0x10105f2e */ goto L_10105f2e;
L_10105e61:;
  /* 10105e61 call 0x10108cef */ esp -= 4; M32(esp) = 0x10105e66u; SAVEALL; F_10108cef(c); ABI_CHECK(0x10108cefu, 0x10105e61u); RETCHK(0x10105e66u, 0x10105e61u); LOADALL;
  /* 10105e66 call dword ptr [0x1010d01c] */ { const u32 m_ = (u32)(0x1010d01cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10105e6cu; SAVEALL; call_ind(c, t_); RETCHK(0x10105e6cu, 0x10105e66u); LOADALL; }
  /* 10105e6c mov dword ptr [0x10122514], eax */ { const u32 m_ = (u32)(0x10122514u); M32(m_) = (u32)(eax); }
  /* 10105e71 call 0x10108bcd */ esp -= 4; M32(esp) = 0x10105e76u; SAVEALL; F_10108bcd(c); ABI_CHECK(0x10108bcdu, 0x10105e71u); RETCHK(0x10105e76u, 0x10105e71u); LOADALL;
  /* 10105e76 mov dword ptr [0x10120cac], eax */ { const u32 m_ = (u32)(0x10120cacu); M32(m_) = (u32)(eax); }
  /* 10105e7b call 0x101086ae */ esp -= 4; M32(esp) = 0x10105e80u; SAVEALL; F_101086ae(c); ABI_CHECK(0x101086aeu, 0x10105e7bu); RETCHK(0x10105e80u, 0x10105e7bu); LOADALL;
  /* 10105e80 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105e82 jl 0x10105eb2 */ if (LT_) goto L_10105eb2;
  /* 10105e84 call 0x10108b2b */ esp -= 4; M32(esp) = 0x10105e89u; SAVEALL; F_10108b2b(c); ABI_CHECK(0x10108b2bu, 0x10105e84u); RETCHK(0x10105e89u, 0x10105e84u); LOADALL;
  /* 10105e89 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105e8b jl 0x10105ead */ if (LT_) goto L_10105ead;
  /* 10105e8d call 0x101088f8 */ esp -= 4; M32(esp) = 0x10105e92u; SAVEALL; F_101088f8(c); ABI_CHECK(0x101088f8u, 0x10105e8du); RETCHK(0x10105e92u, 0x10105e8du); LOADALL;
  /* 10105e92 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105e94 jl 0x10105ead */ if (LT_) goto L_10105ead;
  /* 10105e96 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10105e98 call 0x10107a8f */ esp -= 4; M32(esp) = 0x10105e9du; SAVEALL; F_10107a8f(c); ABI_CHECK(0x10107a8fu, 0x10105e98u); RETCHK(0x10105e9du, 0x10105e98u); LOADALL;
  /* 10105e9d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105e9f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105ea0 jne 0x10105ead */ if (!ZF_) goto L_10105ead;
  /* 10105ea2 inc dword ptr [0x10120ca8] */ { const u32 m_ = (u32)(0x10120ca8u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10105ea8 jmp 0x10105f3f */ goto L_10105f3f;
L_10105ead:;
  /* 10105ead call 0x101088ac */ esp -= 4; M32(esp) = 0x10105eb2u; SAVEALL; F_101088ac(c); ABI_CHECK(0x101088acu, 0x10105eadu); RETCHK(0x10105eb2u, 0x10105eadu); LOADALL;
L_10105eb2:;
  /* 10105eb2 call 0x10106de2 */ esp -= 4; M32(esp) = 0x10105eb7u; SAVEALL; F_10106de2(c); ABI_CHECK(0x10106de2u, 0x10105eb2u); RETCHK(0x10105eb7u, 0x10105eb2u); LOADALL;
  /* 10105eb7 jmp 0x10105e57 */ goto L_10105e57;
L_10105eb9:;
  /* 10105eb9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105ebb jne 0x10105ee9 */ if (!ZF_) goto L_10105ee9;
  /* 10105ebd cmp dword ptr [0x10120ca8], eax */ { const u32 m_ = (u32)(0x10120ca8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105ec3 jle 0x10105f2e */ if ((ZF_|LT_)) goto L_10105f2e;
  /* 10105ec5 dec dword ptr [0x10120ca8] */ { const u32 m_ = (u32)(0x10120ca8u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10105ecb cmp dword ptr [0x10120e68], eax */ { const u32 m_ = (u32)(0x10120e68u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105ed1 jne 0x10105ed8 */ if (!ZF_) goto L_10105ed8;
  /* 10105ed3 call 0x10107bcd */ esp -= 4; M32(esp) = 0x10105ed8u; SAVEALL; F_10107bcd(c); ABI_CHECK(0x10107bcdu, 0x10105ed3u); RETCHK(0x10105ed8u, 0x10105ed3u); LOADALL;
L_10105ed8:;
  /* 10105ed8 call 0x101088ac */ esp -= 4; M32(esp) = 0x10105eddu; SAVEALL; F_101088ac(c); ABI_CHECK(0x101088acu, 0x10105ed8u); RETCHK(0x10105eddu, 0x10105ed8u); LOADALL;
  /* 10105edd call 0x10106de2 */ esp -= 4; M32(esp) = 0x10105ee2u; SAVEALL; F_10106de2(c); ABI_CHECK(0x10106de2u, 0x10105eddu); RETCHK(0x10105ee2u, 0x10105eddu); LOADALL;
  /* 10105ee2 call 0x10108de2 */ esp -= 4; M32(esp) = 0x10105ee7u; SAVEALL; F_10108de2(c); ABI_CHECK(0x10108de2u, 0x10105ee2u); RETCHK(0x10105ee7u, 0x10105ee2u); LOADALL;
  /* 10105ee7 jmp 0x10105f3f */ goto L_10105f3f;
L_10105ee9:;
  /* 10105ee9 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105eec jne 0x10105f32 */ if (!ZF_) goto L_10105f32;
  /* 10105eee push 0x8c */ { u32 v_ = 0x8cu; esp -= 4; M32(esp) = v_; }
  /* 10105ef3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10105ef5 call 0x101085f3 */ esp -= 4; M32(esp) = 0x10105efau; SAVEALL; F_101085f3(c); ABI_CHECK(0x101085f3u, 0x10105ef5u); RETCHK(0x10105efau, 0x10105ef5u); LOADALL;
  /* 10105efa mov esi, eax */ { esi = (u32)(eax); }
  /* 10105efc test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105efe pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105eff pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105f00 je 0x10105f2e */ if (ZF_) goto L_10105f2e;
  /* 10105f02 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105f03 push dword ptr [0x10110124] */ { const u32 m_ = (u32)(0x10110124u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105f09 call dword ptr [0x10120cc8] */ { const u32 m_ = (u32)(0x10120cc8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10105f0fu; SAVEALL; call_ind(c, t_); RETCHK(0x10105f0fu, 0x10105f09u); LOADALL; }
  /* 10105f0f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105f11 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105f12 je 0x10105f28 */ if (ZF_) goto L_10105f28;
  /* 10105f14 call 0x10106dff */ esp -= 4; M32(esp) = 0x10105f19u; SAVEALL; F_10106dff(c); ABI_CHECK(0x10106dffu, 0x10105f14u); RETCHK(0x10105f19u, 0x10105f14u); LOADALL;
  /* 10105f19 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105f1a call dword ptr [0x1010d018] */ { const u32 m_ = (u32)(0x1010d018u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10105f20u; SAVEALL; call_ind(c, t_); RETCHK(0x10105f20u, 0x10105f1au); LOADALL; }
  /* 10105f20 or dword ptr [esi + 4], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105f24 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10105f26 jmp 0x10105f3f */ goto L_10105f3f;
L_10105f28:;
  /* 10105f28 call 0x101074a1 */ esp -= 4; M32(esp) = 0x10105f2du; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10105f28u); RETCHK(0x10105f2du, 0x10105f28u); LOADALL;
  /* 10105f2d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10105f2e:;
  /* 10105f2e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10105f30 jmp 0x10105f42 */ goto L_10105f42;
L_10105f32:;
  /* 10105f32 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105f35 jne 0x10105f3f */ if (!ZF_) goto L_10105f3f;
  /* 10105f37 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10105f39 call 0x10106fca */ esp -= 4; M32(esp) = 0x10105f3eu; SAVEALL; F_10106fca(c); ABI_CHECK(0x10106fcau, 0x10105f39u); RETCHK(0x10105f3eu, 0x10105f39u); LOADALL;
  /* 10105f3e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10105f3f:;
  /* 10105f3f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10105f41 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10105f42:;
  /* 10105f42 lea esp, [ebp - 4] */ esp = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10105f45 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105f46 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10105f47 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10105f4a(CPU *c) {
  NATIVE_HOOK(0x10105f4au) REGS; LOADALL;
L_10105f4a:;
  /* 10105f4a push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10105f4c push 0x1010d370 */ { u32 v_ = 0x1010d370u; esp -= 4; M32(esp) = v_; }
  /* 10105f51 call 0x1010734c */ esp -= 4; M32(esp) = 0x10105f56u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10105f51u); RETCHK(0x10105f56u, 0x10105f51u); LOADALL;
  /* 10105f56 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10105f58 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10105f59 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10105f5c mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10105f5f xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10105f61 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105f63 jne 0x10105f71 */ if (!ZF_) goto L_10105f71;
  /* 10105f65 cmp dword ptr [0x10120ca8], edi */ { const u32 m_ = (u32)(0x10120ca8u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105f6b je 0x10106024 */ if (ZF_) goto L_10106024;
L_10105f71:;
  /* 10105f71 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 10105f74 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105f76 je 0x10105f7d */ if (ZF_) goto L_10105f7d;
  /* 10105f78 cmp esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105f7b jne 0x10105fae */ if (!ZF_) goto L_10105fae;
L_10105f7d:;
  /* 10105f7d mov eax, dword ptr [0x10122518] */ { const u32 m_ = (u32)(0x10122518u); eax = (u32)(M32(m_)); }
  /* 10105f82 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105f84 je 0x10105f92 */ if (ZF_) goto L_10105f92;
  /* 10105f86 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105f89 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105f8a push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105f8d call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10105f8fu; SAVEALL; call_ind(c, t_); RETCHK(0x10105f8fu, 0x10105f8du); LOADALL; }
  /* 10105f8f mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10105f92:;
  /* 10105f92 cmp dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105f95 je 0x10106020 */ if (ZF_) goto L_10106020;
  /* 10105f9b push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105f9e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105f9f push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105fa2 call 0x10105dc9 */ esp -= 4; M32(esp) = 0x10105fa7u; SAVEALL; F_10105dc9(c); ABI_CHECK(0x10105dc9u, 0x10105fa2u); RETCHK(0x10105fa7u, 0x10105fa2u); LOADALL;
  /* 10105fa7 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10105faa cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105fac je 0x10106020 */ if (ZF_) goto L_10106020;
L_10105fae:;
  /* 10105fae mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 10105fb1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10105fb2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105fb3 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105fb6 call 0x101017d0 */ esp -= 4; M32(esp) = 0x10105fbbu; SAVEALL; F_101017d0(c); ABI_CHECK(0x101017d0u, 0x10105fb6u); RETCHK(0x10105fbbu, 0x10105fb6u); LOADALL;
  /* 10105fbb mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10105fbe cmp esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105fc1 jne 0x10105fd1 */ if (!ZF_) goto L_10105fd1;
  /* 10105fc3 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105fc5 jne 0x10105fd1 */ if (!ZF_) goto L_10105fd1;
  /* 10105fc7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10105fc8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10105fc9 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105fcc call 0x10105dc9 */ esp -= 4; M32(esp) = 0x10105fd1u; SAVEALL; F_10105dc9(c); ABI_CHECK(0x10105dc9u, 0x10105fccu); RETCHK(0x10105fd1u, 0x10105fccu); LOADALL;
L_10105fd1:;
  /* 10105fd1 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105fd3 je 0x10105fda */ if (ZF_) goto L_10105fda;
  /* 10105fd5 cmp esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105fd8 jne 0x10106003 */ if (!ZF_) goto L_10106003;
L_10105fda:;
  /* 10105fda push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10105fdb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105fdc push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105fdf call 0x10105dc9 */ esp -= 4; M32(esp) = 0x10105fe4u; SAVEALL; F_10105dc9(c); ABI_CHECK(0x10105dc9u, 0x10105fdfu); RETCHK(0x10105fe4u, 0x10105fdfu); LOADALL;
  /* 10105fe4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105fe6 jne 0x10105feb */ if (!ZF_) goto L_10105feb;
  /* 10105fe8 mov dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edi); }
L_10105feb:;
  /* 10105feb cmp dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105fee je 0x10106003 */ if (ZF_) goto L_10106003;
  /* 10105ff0 mov eax, dword ptr [0x10122518] */ { const u32 m_ = (u32)(0x10122518u); eax = (u32)(M32(m_)); }
  /* 10105ff5 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105ff7 je 0x10106003 */ if (ZF_) goto L_10106003;
  /* 10105ff9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10105ffa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105ffb push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105ffe call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10106000u; SAVEALL; call_ind(c, t_); RETCHK(0x10106000u, 0x10105ffeu); LOADALL; }
  /* 10106000 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10106003:;
  /* 10106003 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106007 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 1010600a jmp 0x10106026 */ goto L_10106026;
L_10106020:;
  /* 10106020 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10106024:;
  /* 10106024 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10106026:;
  /* 10106026 call 0x10107387 */ esp -= 4; M32(esp) = 0x1010602bu; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10106026u); RETCHK(0x1010602bu, 0x10106026u); LOADALL;
  /* 1010602b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_1010600c(CPU *c) {
  NATIVE_HOOK(0x1010600cu) REGS; LOADALL;
L_1010600c:;
  /* 1010600c mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 1010600f mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10106011 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 10106013 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106014 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10106015 call 0x10108fc5 */ esp -= 4; M32(esp) = 0x1010601au; SAVEALL; F_10108fc5(c); ABI_CHECK(0x10108fc5u, 0x10106015u); RETCHK(0x1010601au, 0x10106015u); LOADALL;
  /* 1010601a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010601b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010601c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010601d(CPU *c) {
  NATIVE_HOOK(0x1010601du) REGS; LOADALL;
L_1010601d:;
  /* 1010601d mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10106020 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106024 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10106026 call 0x10107387 */ esp -= 4; M32(esp) = 0x1010602bu; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10106026u); RETCHK(0x1010602bu, 0x10106026u); LOADALL;
  /* 1010602b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_1010602e(CPU *c) {
  NATIVE_HOOK(0x1010602eu) REGS; LOADALL;
L_1010602e:;
  /* 1010602e mov eax, dword ptr [0x10120cb4] */ { const u32 m_ = (u32)(0x10120cb4u); eax = (u32)(M32(m_)); }
  /* 10106033 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106036 je 0x10106045 */ if (ZF_) goto L_10106045;
  /* 10106038 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010603a jne 0x1010604a */ if (!ZF_) goto L_1010604a;
  /* 1010603c cmp dword ptr [0x10120cb8], 1 */ { const u32 m_ = (u32)(0x10120cb8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106043 jne 0x1010604a */ if (!ZF_) goto L_1010604a;
L_10106045:;
  /* 10106045 call 0x10109157 */ esp -= 4; M32(esp) = 0x1010604au; SAVEALL; F_10109157(c); ABI_CHECK(0x10109157u, 0x10106045u); RETCHK(0x1010604au, 0x10106045u); LOADALL;
L_1010604a:;
  /* 1010604a push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010604e call 0x10108fe0 */ esp -= 4; M32(esp) = 0x10106053u; SAVEALL; F_10108fe0(c); ABI_CHECK(0x10108fe0u, 0x1010604eu); RETCHK(0x10106053u, 0x1010604eu); LOADALL;
  /* 10106053 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 10106058 call dword ptr [0x1011011c] */ { const u32 m_ = (u32)(0x1011011cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010605eu; SAVEALL; call_ind(c, t_); RETCHK(0x1010605eu, 0x10106058u); LOADALL; }
  /* 1010605e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010605f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106060 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106061(CPU *c) {
  NATIVE_HOOK(0x10106061u) REGS; LOADALL;
L_10106061:;
  /* 10106061 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10106063 push 0x1010d380 */ { u32 v_ = 0x1010d380u; esp -= 4; M32(esp) = v_; }
  /* 10106068 call 0x1010734c */ esp -= 4; M32(esp) = 0x1010606du; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10106068u); RETCHK(0x1010606du, 0x10106068u); LOADALL;
  /* 1010606d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10106070 cmp dword ptr [0x101223e0], 3 */ { const u32 m_ = (u32)(0x101223e0u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106077 jne 0x101060a7 */ if (!ZF_) goto L_101060a7;
  /* 10106079 cmp esi, dword ptr [0x101223cc] */ { const u32 m_ = (u32)(0x101223ccu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010607f ja 0x101060a7 */ if (!(CF_|ZF_)) goto L_101060a7;
  /* 10106081 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10106083 call 0x101077cb */ esp -= 4; M32(esp) = 0x10106088u; SAVEALL; F_101077cb(c); ABI_CHECK(0x101077cbu, 0x10106083u); RETCHK(0x10106088u, 0x10106083u); LOADALL;
  /* 10106088 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106089 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010608d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010608e call 0x101099b7 */ esp -= 4; M32(esp) = 0x10106093u; SAVEALL; F_101099b7(c); ABI_CHECK(0x101099b7u, 0x1010608eu); RETCHK(0x10106093u, 0x1010608eu); LOADALL;
  /* 10106093 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106094 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10106097 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010609b call 0x101060d3 */ esp -= 4; M32(esp) = 0x101060a0u; SAVEALL; F_101060d3(c); ABI_CHECK(0x101060d3u, 0x1010609bu); RETCHK(0x101060a0u, 0x1010609bu); LOADALL;
  /* 101060a0 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 101060a3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101060a5 jne 0x101060ca */ if (!ZF_) goto L_101060ca;
L_101060a7:;
  /* 101060a7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101060a9 jne 0x101060ac */ if (!ZF_) goto L_101060ac;
  /* 101060ab inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_101060ac:;
  /* 101060ac cmp dword ptr [0x101223e0], 1 */ { const u32 m_ = (u32)(0x101223e0u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101060b3 je 0x101060bb */ if (ZF_) goto L_101060bb;
  /* 101060b5 add esi, 0xf */ { u32 a_ = esi, b_ = 0xfu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101060b8 and esi, 0xfffffff0 */ { u32 a_ = esi, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_101060bb:;
  /* 101060bb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101060bc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 101060be push dword ptr [0x101223dc] */ { const u32 m_ = (u32)(0x101223dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101060c4 call dword ptr [0x1010d024] */ { const u32 m_ = (u32)(0x1010d024u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101060cau; SAVEALL; call_ind(c, t_); RETCHK(0x101060cau, 0x101060c4u); LOADALL; }
L_101060ca:;
  /* 101060ca call 0x10107387 */ esp -= 4; M32(esp) = 0x101060cfu; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x101060cau); RETCHK(0x101060cfu, 0x101060cau); LOADALL;
  /* 101060cf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101060d0(CPU *c) {
  NATIVE_HOOK(0x101060d0u) REGS; LOADALL;
L_101060d0:;
  /* 101060d0 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 101060d3 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 101060d5 call 0x10107716 */ esp -= 4; M32(esp) = 0x101060dau; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x101060d5u); RETCHK(0x101060dau, 0x101060d5u); LOADALL;
  /* 101060da pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101060db ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101060d3(CPU *c) {
  NATIVE_HOOK(0x101060d3u) REGS; LOADALL;
L_101060d3:;
  /* 101060d3 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 101060d5 call 0x10107716 */ esp -= 4; M32(esp) = 0x101060dau; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x101060d5u); RETCHK(0x101060dau, 0x101060d5u); LOADALL;
  /* 101060da pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101060db ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101060dc(CPU *c) {
  NATIVE_HOOK(0x101060dcu) REGS; LOADALL;
L_101060dc:;
  /* 101060dc cmp dword ptr [esp + 4], -0x20 */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffe0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101060e1 ja 0x10106105 */ if (!(CF_|ZF_)) goto L_10106105;
L_101060e3:;
  /* 101060e3 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101060e7 call 0x10106061 */ esp -= 4; M32(esp) = 0x101060ecu; SAVEALL; F_10106061(c); ABI_CHECK(0x10106061u, 0x101060e7u); RETCHK(0x101060ecu, 0x101060e7u); LOADALL;
  /* 101060ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101060ee pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101060ef jne 0x10106107 */ if (!ZF_) goto L_10106107;
  /* 101060f1 cmp dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101060f5 je 0x10106107 */ if (ZF_) goto L_10106107;
  /* 101060f7 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101060fb call 0x1010611a */ esp -= 4; M32(esp) = 0x10106100u; SAVEALL; F_1010611a(c); ABI_CHECK(0x1010611au, 0x101060fbu); RETCHK(0x10106100u, 0x101060fbu); LOADALL;
  /* 10106100 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106102 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106103 jne 0x101060e3 */ if (!ZF_) goto L_101060e3;
L_10106105:;
  /* 10106105 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10106107:;
  /* 10106107 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106108(CPU *c) {
  NATIVE_HOOK(0x10106108u) REGS; LOADALL;
L_10106108:;
  /* 10106108 push dword ptr [0x10120f80] */ { const u32 m_ = (u32)(0x10120f80u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010610e push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106112 call 0x101060dc */ esp -= 4; M32(esp) = 0x10106117u; SAVEALL; F_101060dc(c); ABI_CHECK(0x101060dcu, 0x10106112u); RETCHK(0x10106117u, 0x10106112u); LOADALL;
  /* 10106117 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106118 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106119 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010611a(CPU *c) {
  NATIVE_HOOK(0x1010611au) REGS; LOADALL;
L_1010611a:;
  /* 1010611a mov eax, dword ptr [0x10120cbc] */ { const u32 m_ = (u32)(0x10120cbcu); eax = (u32)(M32(m_)); }
  /* 1010611f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106121 je 0x10106132 */ if (ZF_) goto L_10106132;
  /* 10106123 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106127 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10106129u; SAVEALL; call_ind(c, t_); RETCHK(0x10106129u, 0x10106127u); LOADALL; }
  /* 10106129 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010612b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010612c je 0x10106132 */ if (ZF_) goto L_10106132;
  /* 1010612e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10106130 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10106131 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106132:;
  /* 10106132 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10106134 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106140(CPU *c) {
  NATIVE_HOOK(0x10106140u) REGS; LOADALL;
L_10106140:;
  /* 10106140 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10106144 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010614a je 0x10106170 */ if (ZF_) goto L_10106170;
L_1010614c:;
  /* 1010614c mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010614e add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10106151 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10106153 je 0x101061a3 */ if (ZF_) goto L_101061a3;
  /* 10106155 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010615b jne 0x1010614c */ if (!ZF_) goto L_1010614c;
  /* 1010615d add eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10106162 lea esp, [esp] */ esp = (u32)((u32)(esp));
  /* 10106169 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_10106170:;
  /* 10106170 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10106172 mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 10106177 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10106179 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010617c xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010617e add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10106181 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106186 je 0x10106170 */ if (ZF_) goto L_10106170;
  /* 10106188 mov eax, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 1010618b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010618d je 0x101061c1 */ if (ZF_) goto L_101061c1;
  /* 1010618f test ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10106191 je 0x101061b7 */ if (ZF_) goto L_101061b7;
  /* 10106193 test eax, 0xff0000 */ { u32 a_ = eax, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106198 je 0x101061ad */ if (ZF_) goto L_101061ad;
  /* 1010619a test eax, 0xff000000 */ { u32 a_ = eax, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010619f je 0x101061a3 */ if (ZF_) goto L_101061a3;
  /* 101061a1 jmp 0x10106170 */ goto L_10106170;
L_101061a3:;
  /* 101061a3 lea eax, [ecx - 1] */ eax = (u32)((u32)(ecx + 0xffffffffu));
  /* 101061a6 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101061aa sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101061ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101061ad:;
  /* 101061ad lea eax, [ecx - 2] */ eax = (u32)((u32)(ecx + 0xfffffffeu));
  /* 101061b0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101061b4 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101061b6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101061b7:;
  /* 101061b7 lea eax, [ecx - 3] */ eax = (u32)((u32)(ecx + 0xfffffffdu));
  /* 101061ba mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101061be sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101061c0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101061c1:;
  /* 101061c1 lea eax, [ecx - 4] */ eax = (u32)((u32)(ecx + 0xfffffffcu));
  /* 101061c4 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101061c8 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101061ca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101061d0(CPU *c) {
  NATIVE_HOOK(0x101061d0u) REGS; LOADALL;
L_101061d0:;
  /* 101061d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101061d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 101061d3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101061d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101061d5 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 101061d8 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 101061db mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 101061de mov eax, ecx */ { eax = (u32)(ecx); }
  /* 101061e0 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 101061e2 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101061e4 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101061e6 jbe 0x101061f0 */ if ((CF_|ZF_)) goto L_101061f0;
  /* 101061e8 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101061ea jb 0x1010636c */ if (CF_) goto L_1010636c;
L_101061f0:;
  /* 101061f0 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101061f6 jne 0x1010620c */ if (!ZF_) goto L_1010620c;
  /* 101061f8 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 101061fb and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 101061fe cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106201 jb 0x1010622c */ if (CF_) goto L_1010622c;
  /* 10106203 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10106205 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010620c:;
  /* 1010620c mov eax, edi */ { eax = (u32)(edi); }
  /* 1010620e mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 10106213 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10106216 jb 0x10106224 */ if (CF_) goto L_10106224;
  /* 10106218 and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010621b add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1010621d jmp dword ptr [eax*4 + 0x10106230] */ { const u32 m_ = (u32)(eax * 4u + 0x10106230u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10106224:;
  /* 10106224 jmp dword ptr [ecx*4 + 0x1010632c] */ { const u32 m_ = (u32)(ecx * 4u + 0x1010632cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_1010622c:;
  /* 1010622c jmp dword ptr [ecx*4 + 0x101062b0] */ { const u32 m_ = (u32)(ecx * 4u + 0x101062b0u); u32 t_ = M32(m_); switch (t_) { case 0x101062d0u: goto L_101062d0; case 0x101062d8u: goto L_101062d8; case 0x101062e0u: goto L_101062e0; case 0x101062e8u: goto L_101062e8; case 0x101062f0u: goto L_101062f0; case 0x101062f8u: goto L_101062f8; case 0x10106300u: goto L_10106300; case 0x10106313u: goto L_10106313; default: SAVEALL; call_ind(c, t_); return; } }
L_101062d0:;
  /* 101062d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 101062d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_101062d8:;
  /* 101062d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 101062dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_101062e0:;
  /* 101062e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 101062e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_101062e8:;
  /* 101062e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 101062ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_101062f0:;
  /* 101062f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101062f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_101062f8:;
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10106300:;
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10106313:;
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010636c:;
  /* 1010636c lea esi, [ecx + esi - 4] */ esi = (u32)((u32)(ecx + esi + 0xfffffffcu));
  /* 10106370 lea edi, [ecx + edi - 4] */ edi = (u32)((u32)(ecx + edi + 0xfffffffcu));
  /* 10106374 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010637a jne 0x101063a0 */ if (!ZF_) goto L_101063a0;
  /* 1010637c shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1010637f and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10106382 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106385 jb 0x10106394 */ if (CF_) goto L_10106394;
  /* 10106387 std */ c->df = 1;
  /* 10106388 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1010638a cld */ c->df = 0;
  /* 1010638b jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_10106394:;
  /* 10106394 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10106396 jmp dword ptr [ecx*4 + 0x10106468] */ { const u32 m_ = (u32)(ecx * 4u + 0x10106468u); u32 t_ = M32(m_); switch (t_) { case 0x101064afu: goto L_101064af; default: SAVEALL; call_ind(c, t_); return; } }
L_101063a0:;
  /* 101063a0 mov eax, edi */ { eax = (u32)(edi); }
  /* 101063a2 mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 101063a7 cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101063aa jb 0x101063b8 */ if (CF_) goto L_101063b8;
  /* 101063ac and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101063af sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101063b1 jmp dword ptr [eax*4 + 0x101063bc] */ { const u32 m_ = (u32)(eax * 4u + 0x101063bcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_101063b8:;
  /* 101063b8 jmp dword ptr [ecx*4 + 0x101064b8] */ { const u32 m_ = (u32)(ecx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064af:;
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106230(CPU *c) {
  NATIVE_HOOK(0x10106230u) REGS; LOADALL;
L_10106230:;
  /* 10106230 bound edx, qword ptr [eax] */ TRAP(0x10106230u, "bound");
}

void F_10106240(CPU *c) {
  NATIVE_HOOK(0x10106240u) REGS; LOADALL;
  goto L_10106240;
L_1010622c:;
  /* 1010622c jmp dword ptr [ecx*4 + 0x101062b0] */ { const u32 m_ = (u32)(ecx * 4u + 0x101062b0u); u32 t_ = M32(m_); switch (t_) { case 0x101062d0u: goto L_101062d0; case 0x101062d8u: goto L_101062d8; case 0x101062e0u: goto L_101062e0; case 0x101062e8u: goto L_101062e8; case 0x101062f0u: goto L_101062f0; case 0x101062f8u: goto L_101062f8; case 0x10106300u: goto L_10106300; case 0x10106313u: goto L_10106313; default: SAVEALL; call_ind(c, t_); return; } }
L_10106240:;
  /* 10106240 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10106242 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106244 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106246 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106249 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010624c mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010624f shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10106252 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106255 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106258 add edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010625b cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010625e jb 0x1010622c */ if (CF_) goto L_1010622c;
  /* 10106260 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10106262 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_101062d0:;
  /* 101062d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 101062d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_101062d8:;
  /* 101062d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 101062dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_101062e0:;
  /* 101062e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 101062e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_101062e8:;
  /* 101062e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 101062ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_101062f0:;
  /* 101062f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101062f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_101062f8:;
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10106300:;
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10106313:;
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010626c(CPU *c) {
  NATIVE_HOOK(0x1010626cu) REGS; LOADALL;
  goto L_1010626c;
L_1010622c:;
  /* 1010622c jmp dword ptr [ecx*4 + 0x101062b0] */ { const u32 m_ = (u32)(ecx * 4u + 0x101062b0u); u32 t_ = M32(m_); switch (t_) { case 0x101062d0u: goto L_101062d0; case 0x101062d8u: goto L_101062d8; case 0x101062e0u: goto L_101062e0; case 0x101062e8u: goto L_101062e8; case 0x101062f0u: goto L_101062f0; case 0x101062f8u: goto L_101062f8; case 0x10106300u: goto L_10106300; case 0x10106313u: goto L_10106313; default: SAVEALL; call_ind(c, t_); return; } }
L_1010626c:;
  /* 1010626c and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1010626e mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106270 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106272 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106275 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10106278 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010627b add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1010627e add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106281 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106284 jb 0x1010622c */ if (CF_) goto L_1010622c;
  /* 10106286 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10106288 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_101062d0:;
  /* 101062d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 101062d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_101062d8:;
  /* 101062d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 101062dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_101062e0:;
  /* 101062e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 101062e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_101062e8:;
  /* 101062e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 101062ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_101062f0:;
  /* 101062f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101062f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_101062f8:;
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10106300:;
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10106313:;
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106290(CPU *c) {
  NATIVE_HOOK(0x10106290u) REGS; LOADALL;
  goto L_10106290;
L_1010622c:;
  /* 1010622c jmp dword ptr [ecx*4 + 0x101062b0] */ { const u32 m_ = (u32)(ecx * 4u + 0x101062b0u); u32 t_ = M32(m_); switch (t_) { case 0x101062d0u: goto L_101062d0; case 0x101062d8u: goto L_101062d8; case 0x101062e0u: goto L_101062e0; case 0x101062e8u: goto L_101062e8; case 0x101062f0u: goto L_101062f0; case 0x101062f8u: goto L_101062f8; case 0x10106300u: goto L_10106300; case 0x10106313u: goto L_10106313; default: SAVEALL; call_ind(c, t_); return; } }
L_10106290:;
  /* 10106290 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10106292 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106294 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106296 add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106299 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1010629c add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010629f cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101062a2 jb 0x1010622c */ if (CF_) goto L_1010622c;
  /* 101062a4 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 101062a6 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_101062d0:;
  /* 101062d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 101062d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_101062d8:;
  /* 101062d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 101062dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_101062e0:;
  /* 101062e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 101062e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_101062e8:;
  /* 101062e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 101062ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_101062f0:;
  /* 101062f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101062f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_101062f8:;
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10106300:;
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10106313:;
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101062b0(CPU *c) {
  NATIVE_HOOK(0x101062b0u) REGS; LOADALL;
L_101062b0:;
  /* 101062b0 adc esp, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); u32 a_ = esp, b_ = M32(m_); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffffffffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); esp = (u32)(r_); }
  /* 101062b3 adc byte ptr [eax], al */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 101062b5 arpl word ptr [eax], dx */ TRAP(0x101062b5u, "arpl");
}

void F_101062d0(CPU *c) {
  NATIVE_HOOK(0x101062d0u) REGS; LOADALL;
L_101062d0:;
  /* 101062d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 101062d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 101062d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 101062dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 101062e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 101062e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 101062e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 101062ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 101062f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101062f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101062d8(CPU *c) {
  NATIVE_HOOK(0x101062d8u) REGS; LOADALL;
L_101062d8:;
  /* 101062d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 101062dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 101062e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 101062e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 101062e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 101062ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 101062f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101062f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101062e0(CPU *c) {
  NATIVE_HOOK(0x101062e0u) REGS; LOADALL;
L_101062e0:;
  /* 101062e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 101062e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 101062e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 101062ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 101062f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101062f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101062e8(CPU *c) {
  NATIVE_HOOK(0x101062e8u) REGS; LOADALL;
L_101062e8:;
  /* 101062e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 101062ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 101062f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101062f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101062f0(CPU *c) {
  NATIVE_HOOK(0x101062f0u) REGS; LOADALL;
L_101062f0:;
  /* 101062f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101062f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101062f8(CPU *c) {
  NATIVE_HOOK(0x101062f8u) REGS; LOADALL;
L_101062f8:;
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106300(CPU *c) {
  NATIVE_HOOK(0x10106300u) REGS; LOADALL;
L_10106300:;
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106313(CPU *c) {
  NATIVE_HOOK(0x10106313u) REGS; LOADALL;
L_10106313:;
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010631c(CPU *c) {
  NATIVE_HOOK(0x1010631cu) REGS; LOADALL;
L_1010631c:;
  /* 1010631c sub al, 0x63 */ { u32 a_ = (eax & 0xffu), b_ = 0x63u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 1010631e adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10106320 xor al, 0x63 */ { u32 a_ = (eax & 0xffu), b_ = 0x63u; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10106322 adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10106324 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10106325 arpl word ptr [eax], dx */ TRAP(0x10106325u, "arpl");
}

void F_1010632c(CPU *c) {
  NATIVE_HOOK(0x1010632cu) REGS; LOADALL;
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106334(CPU *c) {
  NATIVE_HOOK(0x10106334u) REGS; LOADALL;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106340(CPU *c) {
  NATIVE_HOOK(0x10106340u) REGS; LOADALL;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106354(CPU *c) {
  NATIVE_HOOK(0x10106354u) REGS; LOADALL;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101063bc(CPU *c) {
  NATIVE_HOOK(0x101063bcu) REGS; LOADALL;
L_101063bc:;
  /* 101063bc adc byte ptr fs:[eax], dl */ { const u32 m_ = (u32)(eax + c->fs_base); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 101063bf nop */ ;
  /* 101063c0 int3 */ TRAP(0x101063c0u, "int3");
}

void F_101063cc(CPU *c) {
  NATIVE_HOOK(0x101063ccu) REGS; LOADALL;
  goto L_101063cc;
L_10106394:;
  /* 10106394 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10106396 jmp dword ptr [ecx*4 + 0x10106468] */ { const u32 m_ = (u32)(ecx * 4u + 0x10106468u); u32 t_ = M32(m_); switch (t_) { case 0x101064afu: goto L_101064af; default: SAVEALL; call_ind(c, t_); return; } }
L_101063cc:;
  /* 101063cc mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101063cf and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 101063d1 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101063d4 sub esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101063d7 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 101063da sub edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101063dd cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101063e0 jb 0x10106394 */ if (CF_) goto L_10106394;
  /* 101063e2 std */ c->df = 1;
  /* 101063e3 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 101063e5 cld */ c->df = 0;
  /* 101063e6 jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064af:;
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101063f0(CPU *c) {
  NATIVE_HOOK(0x101063f0u) REGS; LOADALL;
  goto L_101063f0;
L_10106394:;
  /* 10106394 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10106396 jmp dword ptr [ecx*4 + 0x10106468] */ { const u32 m_ = (u32)(ecx * 4u + 0x10106468u); u32 t_ = M32(m_); switch (t_) { case 0x101064afu: goto L_101064af; default: SAVEALL; call_ind(c, t_); return; } }
L_101063f0:;
  /* 101063f0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101063f3 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 101063f5 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101063f8 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101063fb shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 101063fe mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106401 sub esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106404 sub edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106407 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010640a jb 0x10106394 */ if (CF_) goto L_10106394;
  /* 1010640c std */ c->df = 1;
  /* 1010640d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1010640f cld */ c->df = 0;
  /* 10106410 jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064af:;
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106418(CPU *c) {
  NATIVE_HOOK(0x10106418u) REGS; LOADALL;
  goto L_10106418;
L_10106394:;
  /* 10106394 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10106396 jmp dword ptr [ecx*4 + 0x10106468] */ { const u32 m_ = (u32)(ecx * 4u + 0x10106468u); u32 t_ = M32(m_); switch (t_) { case 0x101064afu: goto L_101064af; default: SAVEALL; call_ind(c, t_); return; } }
L_10106418:;
  /* 10106418 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010641b and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1010641d mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106420 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106423 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106426 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106429 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1010642c mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010642f sub esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106432 sub edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106435 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106438 jb 0x10106394 */ if (CF_) goto L_10106394;
  /* 1010643e std */ c->df = 1;
  /* 1010643f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10106441 cld */ c->df = 0;
  /* 10106442 jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064af:;
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106468(CPU *c) {
  NATIVE_HOOK(0x10106468u) REGS; LOADALL;
L_10106468:;
  /* 10106468 scasd eax, dword ptr es:[edi] */ { u32 st_ = c->df ? (u32)-4 : 4u; u32 a_ = eax, b_ = M32(edi); edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffffffffu, 4); }
  /* 10106469 adc byte ptr fs:[eax], dl */ { const u32 m_ = (u32)(eax + c->fs_base); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 1010646c mov eax, dword ptr [esi + ecx*4 + 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10106470 mov dword ptr [edi + ecx*4 + 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10106474 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 10106478 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 1010647c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10106480 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10106484 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10106488 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1010648c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10106490 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10106494 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106498 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010649c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 101064a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 101064a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 101064ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101064ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010646c(CPU *c) {
  NATIVE_HOOK(0x1010646cu) REGS; LOADALL;
L_1010646c:;
  /* 1010646c mov eax, dword ptr [esi + ecx*4 + 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10106470 mov dword ptr [edi + ecx*4 + 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10106474 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 10106478 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 1010647c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10106480 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10106484 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10106488 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1010648c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10106490 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10106494 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106498 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010649c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 101064a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 101064a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 101064ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101064ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106474(CPU *c) {
  NATIVE_HOOK(0x10106474u) REGS; LOADALL;
L_10106474:;
  /* 10106474 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 10106478 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 1010647c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10106480 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10106484 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10106488 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1010648c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10106490 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10106494 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106498 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010649c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 101064a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 101064a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 101064ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101064ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010647c(CPU *c) {
  NATIVE_HOOK(0x1010647cu) REGS; LOADALL;
L_1010647c:;
  /* 1010647c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10106480 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10106484 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10106488 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1010648c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10106490 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10106494 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106498 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010649c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 101064a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 101064a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 101064ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101064ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106484(CPU *c) {
  NATIVE_HOOK(0x10106484u) REGS; LOADALL;
L_10106484:;
  /* 10106484 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10106488 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1010648c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10106490 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10106494 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106498 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010649c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 101064a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 101064a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 101064ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101064ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010648c(CPU *c) {
  NATIVE_HOOK(0x1010648cu) REGS; LOADALL;
L_1010648c:;
  /* 1010648c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10106490 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10106494 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106498 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010649c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 101064a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 101064a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 101064ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101064ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106494(CPU *c) {
  NATIVE_HOOK(0x10106494u) REGS; LOADALL;
L_10106494:;
  /* 10106494 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106498 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010649c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 101064a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 101064a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 101064ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101064ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010649c(CPU *c) {
  NATIVE_HOOK(0x1010649cu) REGS; LOADALL;
L_1010649c:;
  /* 1010649c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 101064a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 101064a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 101064ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101064ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101064af(CPU *c) {
  NATIVE_HOOK(0x101064afu) REGS; LOADALL;
L_101064af:;
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101064b8(CPU *c) {
  NATIVE_HOOK(0x101064b8u) REGS; LOADALL;
L_101064b8:;
  /* 101064b8 enter 0x1064, 0x10 */ TRAP(0x101064b8u, "unimpl enter 0x1064, 0x10");
  /* 101064bc shl byte ptr [eax + edx + 0x10], 1 */ { const u32 m_ = (u32)(eax + edx + 0x10u); u32 n_ = (1u) & 31u; if (n_) { u32 a_ = M8(m_); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffu; u32 cf_ = n_ <= 8u ? (a_ >> (8u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 7) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); M8(m_) = (u8)(r_); } }
  /* 101064c0 loopne 0x10106526 */ if (--ecx != 0 && !ZF_) goto L_10106526;
  /* 101064c2 adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 101064c4 hlt */ TRAP(0x101064c4u, "hlt");
L_10106526:;
  /* 10106526 insb byte ptr es:[edi], dx */ TRAP(0x10106526u, "insb");
}

void F_101064c8(CPU *c) {
  NATIVE_HOOK(0x101064c8u) REGS; LOADALL;
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101064d0(CPU *c) {
  NATIVE_HOOK(0x101064d0u) REGS; LOADALL;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101064e0(CPU *c) {
  NATIVE_HOOK(0x101064e0u) REGS; LOADALL;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101064f4(CPU *c) {
  NATIVE_HOOK(0x101064f4u) REGS; LOADALL;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106510(CPU *c) {
  NATIVE_HOOK(0x10106510u) REGS; LOADALL;
L_10106510:;
  /* 10106510 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10106512 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106513 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10106519 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010651a mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1010651e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10106525 mov dword ptr [esp + 0xc], ebp */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ebp); }
  /* 10106529 lea ebp, [esp + 0xc] */ ebp = (u32)((u32)(esp + 0xcu));
  /* 1010652d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010652e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106526(CPU *c) {
  NATIVE_HOOK(0x10106526u) REGS; LOADALL;
L_10106526:;
  /* 10106526 insb byte ptr es:[edi], dx */ TRAP(0x10106526u, "insb");
}

void F_1010652f(CPU *c) {
  NATIVE_HOOK(0x1010652fu) REGS; LOADALL;
L_1010652f:;
  /* 1010652f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10106532 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106534 je 0x1010657a */ if (ZF_) goto L_1010657a;
  /* 10106536 lea edx, [eax + 8] */ edx = (u32)((u32)(eax + 0x8u));
  /* 10106539 cmp byte ptr [edx], 0 */ { const u32 m_ = (u32)(edx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1010653c je 0x1010657a */ if (ZF_) goto L_1010657a;
  /* 1010653e mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10106541 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106543 je 0x10106555 */ if (ZF_) goto L_10106555;
  /* 10106545 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10106548 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10106549 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1010654a call 0x10107800 */ esp -= 4; M32(esp) = 0x1010654fu; SAVEALL; F_10107800(c); ABI_CHECK(0x10107800u, 0x1010654au); RETCHK(0x1010654fu, 0x1010654au); LOADALL;
  /* 1010654f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106551 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106552 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106553 jne 0x10106577 */ if (!ZF_) goto L_10106577;
L_10106555:;
  /* 10106555 test byte ptr [edi], 2 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10106558 je 0x1010655f */ if (ZF_) goto L_1010655f;
  /* 1010655a test byte ptr [esi], 8 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010655d je 0x10106577 */ if (ZF_) goto L_10106577;
L_1010655f:;
  /* 1010655f mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10106563 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10106565 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10106567 je 0x1010656e */ if (ZF_) goto L_1010656e;
  /* 10106569 test byte ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010656c je 0x10106577 */ if (ZF_) goto L_10106577;
L_1010656e:;
  /* 1010656e test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10106570 je 0x1010657a */ if (ZF_) goto L_1010657a;
  /* 10106572 test byte ptr [esi], 2 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10106575 jne 0x1010657a */ if (!ZF_) goto L_1010657a;
L_10106577:;
  /* 10106577 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10106579 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010657a:;
  /* 1010657a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010657c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010657d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010657e(CPU *c) {
  NATIVE_HOOK(0x1010657eu) REGS; LOADALL;
L_1010657e:;
  /* 1010657e mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10106580 cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106586 je 0x1010658b */ if (ZF_) goto L_1010658b;
  /* 10106588 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010658a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010658b:;
  /* 1010658b call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106590u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010658bu); RETCHK(0x10106590u, 0x1010658bu); LOADALL;
  /* 10106590 and dword ptr [eax + 0x84], 0 */ { const u32 m_ = (u32)(eax + 0x84u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106597 jmp 0x101070e8 */ SAVEALL; F_101070e8(c); return;
}

void F_1010659c(CPU *c) {
  NATIVE_HOOK(0x1010659cu) REGS; LOADALL;
L_1010659c:;
  /* 1010659c push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 1010659e push 0x1010d390 */ { u32 v_ = 0x1010d390u; esp -= 4; M32(esp) = v_; }
  /* 101065a3 call 0x1010734c */ esp -= 4; M32(esp) = 0x101065a8u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x101065a3u); RETCHK(0x101065a8u, 0x101065a3u); LOADALL;
  /* 101065a8 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 101065ab mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 101065ae mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 101065b1 call 0x10106e12 */ esp -= 4; M32(esp) = 0x101065b6u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x101065b1u); RETCHK(0x101065b6u, 0x101065b1u); LOADALL;
  /* 101065b6 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101065bb inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101065bd and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101065c1 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
L_101065c4:;
  /* 101065c4 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101065c7 je 0x1010662d */ if (ZF_) goto L_1010662d;
  /* 101065c9 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101065cc jle 0x101065d3 */ if ((ZF_|LT_)) goto L_101065d3;
  /* 101065ce cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101065d1 jl 0x101065d8 */ if (LT_) goto L_101065d8;
L_101065d3:;
  /* 101065d3 call 0x1010711d */ esp -= 4; M32(esp) = 0x101065d8u; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x101065d3u); RETCHK(0x101065d8u, 0x101065d3u); LOADALL;
L_101065d8:;
  /* 101065d8 mov eax, esi */ { eax = (u32)(esi); }
  /* 101065da shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 101065dd mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101065e0 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101065e2 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 101065e4 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 101065e7 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 101065ee cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101065f2 je 0x10106609 */ if (ZF_) goto L_10106609;
  /* 101065f4 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 101065f7 push 0x103 */ { u32 v_ = 0x103u; esp -= 4; M32(esp) = v_; }
  /* 101065fc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101065fd mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10106600 push dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106604 call 0x10107150 */ esp -= 4; M32(esp) = 0x10106609u; SAVEALL; F_10107150(c); ABI_CHECK(0x10107150u, 0x10106604u); RETCHK(0x10106609u, 0x10106604u); LOADALL;
L_10106609:;
  /* 10106609 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010660d jmp 0x10106628 */ goto L_10106628;
L_10106628:;
  /* 10106628 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 1010662b jmp 0x101065c4 */ goto L_101065c4;
L_1010662d:;
  /* 1010662d or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106631 call 0x1010664f */ esp -= 4; M32(esp) = 0x10106636u; SAVEALL; F_1010664f(c); ABI_CHECK(0x1010664fu, 0x10106631u); RETCHK(0x10106636u, 0x10106631u); LOADALL;
  /* 10106636 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106639 je 0x10106640 */ if (ZF_) goto L_10106640;
  /* 1010663b call 0x1010711d */ esp -= 4; M32(esp) = 0x10106640u; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x1010663bu); RETCHK(0x10106640u, 0x1010663bu); LOADALL;
L_10106640:;
  /* 10106640 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 10106643 call 0x10107387 */ esp -= 4; M32(esp) = 0x10106648u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10106643u); RETCHK(0x10106648u, 0x10106643u); LOADALL;
  /* 10106648 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010660f(CPU *c) {
  NATIVE_HOOK(0x1010660fu) REGS; LOADALL;
L_1010660f:;
  /* 1010660f mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10106612 call 0x1010657e */ esp -= 4; M32(esp) = 0x10106617u; SAVEALL; F_1010657e(c); ABI_CHECK(0x1010657eu, 0x10106612u); RETCHK(0x10106617u, 0x10106612u); LOADALL;
  /* 10106617 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106618(CPU *c) {
  NATIVE_HOOK(0x10106618u) REGS; LOADALL;
  goto L_10106618;
L_101065c4:;
  /* 101065c4 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101065c7 je 0x1010662d */ if (ZF_) goto L_1010662d;
  /* 101065c9 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101065cc jle 0x101065d3 */ if ((ZF_|LT_)) goto L_101065d3;
  /* 101065ce cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101065d1 jl 0x101065d8 */ if (LT_) goto L_101065d8;
L_101065d3:;
  /* 101065d3 call 0x1010711d */ esp -= 4; M32(esp) = 0x101065d8u; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x101065d3u); RETCHK(0x101065d8u, 0x101065d3u); LOADALL;
L_101065d8:;
  /* 101065d8 mov eax, esi */ { eax = (u32)(esi); }
  /* 101065da shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 101065dd mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101065e0 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101065e2 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 101065e4 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 101065e7 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 101065ee cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101065f2 je 0x10106609 */ if (ZF_) goto L_10106609;
  /* 101065f4 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 101065f7 push 0x103 */ { u32 v_ = 0x103u; esp -= 4; M32(esp) = v_; }
  /* 101065fc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101065fd mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10106600 push dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106604 call 0x10107150 */ esp -= 4; M32(esp) = 0x10106609u; SAVEALL; F_10107150(c); ABI_CHECK(0x10107150u, 0x10106604u); RETCHK(0x10106609u, 0x10106604u); LOADALL;
L_10106609:;
  /* 10106609 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010660d jmp 0x10106628 */ goto L_10106628;
L_10106618:;
  /* 10106618 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 1010661b and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010661f mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10106622 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10106625 mov esi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); esi = (u32)(M32(m_)); }
L_10106628:;
  /* 10106628 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 1010662b jmp 0x101065c4 */ goto L_101065c4;
L_1010662d:;
  /* 1010662d or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106631 call 0x1010664f */ esp -= 4; M32(esp) = 0x10106636u; SAVEALL; F_1010664f(c); ABI_CHECK(0x1010664fu, 0x10106631u); RETCHK(0x10106636u, 0x10106631u); LOADALL;
  /* 10106636 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106639 je 0x10106640 */ if (ZF_) goto L_10106640;
  /* 1010663b call 0x1010711d */ esp -= 4; M32(esp) = 0x10106640u; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x1010663bu); RETCHK(0x10106640u, 0x1010663bu); LOADALL;
L_10106640:;
  /* 10106640 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 10106643 call 0x10107387 */ esp -= 4; M32(esp) = 0x10106648u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10106643u); RETCHK(0x10106648u, 0x10106643u); LOADALL;
  /* 10106648 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106649(CPU *c) {
  NATIVE_HOOK(0x10106649u) REGS; LOADALL;
L_10106649:;
  /* 10106649 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 1010664c mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 1010664f call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106654u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010664fu); RETCHK(0x10106654u, 0x1010664fu); LOADALL;
  /* 10106654 cmp dword ptr [eax + 0x84], 0 */ { const u32 m_ = (u32)(eax + 0x84u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010665b jle 0x10106669 */ if ((ZF_|LT_)) goto L_10106669;
  /* 1010665d call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106662u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010665du); RETCHK(0x10106662u, 0x1010665du); LOADALL;
  /* 10106662 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10106667 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10106669:;
  /* 10106669 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010664f(CPU *c) {
  NATIVE_HOOK(0x1010664fu) REGS; LOADALL;
L_1010664f:;
  /* 1010664f call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106654u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010664fu); RETCHK(0x10106654u, 0x1010664fu); LOADALL;
  /* 10106654 cmp dword ptr [eax + 0x84], 0 */ { const u32 m_ = (u32)(eax + 0x84u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010665b jle 0x10106669 */ if ((ZF_|LT_)) goto L_10106669;
  /* 1010665d call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106662u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010665du); RETCHK(0x10106662u, 0x1010665du); LOADALL;
  /* 10106662 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10106667 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10106669:;
  /* 10106669 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010666a(CPU *c) {
  NATIVE_HOOK(0x1010666au) REGS; LOADALL;
L_1010666a:;
  /* 1010666a push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 1010666c push 0x1010d3a8 */ { u32 v_ = 0x1010d3a8u; esp -= 4; M32(esp) = v_; }
  /* 10106671 call 0x1010734c */ esp -= 4; M32(esp) = 0x10106676u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10106671u); RETCHK(0x10106676u, 0x10106671u); LOADALL;
  /* 10106676 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106679 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010667b je 0x10106698 */ if (ZF_) goto L_10106698;
  /* 1010667d mov ecx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10106680 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10106683 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106685 je 0x10106698 */ if (ZF_) goto L_10106698;
  /* 10106687 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010668b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010668c push dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010668f call 0x10105244 */ esp -= 4; M32(esp) = 0x10106694u; SAVEALL; F_10105244(c); ABI_CHECK(0x10105244u, 0x1010668fu); RETCHK(0x10106694u, 0x1010668fu); LOADALL;
  /* 10106694 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10106698:;
  /* 10106698 call 0x10107387 */ esp -= 4; M32(esp) = 0x1010669du; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10106698u); RETCHK(0x1010669du, 0x10106698u); LOADALL;
  /* 1010669d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010669e(CPU *c) {
  NATIVE_HOOK(0x1010669eu) REGS; LOADALL;
L_1010669e:;
  /* 1010669e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101066a0 cmp byte ptr [ebp + 0xc], al */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 101066a3 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 101066a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101066a7(CPU *c) {
  NATIVE_HOOK(0x101066a7u) REGS; LOADALL;
L_101066a7:;
  /* 101066a7 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 101066aa jmp 0x101070e8 */ SAVEALL; F_101070e8(c); return;
}

void F_101066af(CPU *c) {
  NATIVE_HOOK(0x101066afu) REGS; LOADALL;
L_101066af:;
  /* 101066af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101066b0 mov esi, eax */ { esi = (u32)(eax); }
  /* 101066b2 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 101066b4 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101066b6 cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101066ba jl 0x101066cc */ if (LT_) goto L_101066cc;
  /* 101066bc mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 101066bf mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101066c2 mov esi, dword ptr [edx + esi] */ { const u32 m_ = (u32)(edx + esi); esi = (u32)(M32(m_)); }
  /* 101066c5 mov ecx, dword ptr [esi + ecx] */ { const u32 m_ = (u32)(esi + ecx); ecx = (u32)(M32(m_)); }
  /* 101066c8 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101066ca add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_101066cc:;
  /* 101066cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101066cd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101066ce(CPU *c) {
  NATIVE_HOOK(0x101066ceu) REGS; LOADALL;
L_101066ce:;
  /* 101066ce push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 101066d0 push 0x1010d3b8 */ { u32 v_ = 0x1010d3b8u; esp -= 4; M32(esp) = v_; }
  /* 101066d5 call 0x1010734c */ esp -= 4; M32(esp) = 0x101066dau; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x101066d5u); RETCHK(0x101066dau, 0x101066d5u); LOADALL;
  /* 101066da mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 101066dc mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 101066df mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 101066e2 mov dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 101066e5 and dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101066e9 mov eax, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101066ec mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 101066ef push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101066f2 lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 101066f5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101066f6 call 0x10105501 */ esp -= 4; M32(esp) = 0x101066fbu; SAVEALL; F_10105501(c); ABI_CHECK(0x10105501u, 0x101066f6u); RETCHK(0x101066fbu, 0x101066f6u); LOADALL;
  /* 101066fb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101066fc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101066fd mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 10106700 call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106705u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10106700u); RETCHK(0x10106705u, 0x10106700u); LOADALL;
  /* 10106705 mov eax, dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); eax = (u32)(M32(m_)); }
  /* 10106708 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 1010670b call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106710u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010670bu); RETCHK(0x10106710u, 0x1010670bu); LOADALL;
  /* 10106710 mov eax, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); eax = (u32)(M32(m_)); }
  /* 10106716 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 10106719 call 0x10106e12 */ esp -= 4; M32(esp) = 0x1010671eu; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10106719u); RETCHK(0x1010671eu, 0x10106719u); LOADALL;
  /* 1010671e mov dword ptr [eax + 0x7c], esi */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(esi); }
  /* 10106721 call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106726u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10106721u); RETCHK(0x10106726u, 0x10106721u); LOADALL;
  /* 10106726 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10106729 mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 1010672f and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106733 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 1010673a push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010673d push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106740 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10106741 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106744 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10106745 call 0x10105596 */ esp -= 4; M32(esp) = 0x1010674au; SAVEALL; F_10105596(c); ABI_CHECK(0x10105596u, 0x10106745u); RETCHK(0x1010674au, 0x10106745u); LOADALL;
  /* 1010674a add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010674d mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10106750 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106754 jmp 0x10106808 */ goto L_10106808;
L_10106808:;
  /* 10106808 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010680c call 0x10106823 */ esp -= 4; M32(esp) = 0x10106811u; SAVEALL; F_10106823(c); ABI_CHECK(0x10106823u, 0x1010680cu); RETCHK(0x10106811u, 0x1010680cu); LOADALL;
  /* 10106811 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 10106814 call 0x10107387 */ esp -= 4; M32(esp) = 0x10106819u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10106814u); RETCHK(0x10106819u, 0x10106814u); LOADALL;
  /* 10106819 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106759(CPU *c) {
  NATIVE_HOOK(0x10106759u) REGS; LOADALL;
L_10106759:;
  /* 10106759 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 1010675c mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 1010675e mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10106761 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10106764 cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010676a jne 0x1010679d */ if (!ZF_) goto L_1010679d;
  /* 1010676c mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 1010676f cmp dword ptr [eax + 0x10], 3 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106773 jne 0x1010679d */ if (!ZF_) goto L_1010679d;
  /* 10106775 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10106778 cmp dword ptr [eax + 0x14], 0x19930520 */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010677f je 0x1010678d */ if (ZF_) goto L_1010678d;
  /* 10106781 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10106784 cmp dword ptr [eax + 0x14], 0x19930521 */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010678b jne 0x1010679d */ if (!ZF_) goto L_1010679d;
L_1010678d:;
  /* 1010678d mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10106790 cmp dword ptr [eax + 0x1c], 0 */ { const u32 m_ = (u32)(eax + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106794 mov dword ptr [ebp - 0x24], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x1u); }
  /* 1010679b je 0x101067a4 */ if (ZF_) goto L_101067a4;
L_1010679d:;
  /* 1010679d mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
L_101067a4:;
  /* 101067a4 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 101067a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101067a8(CPU *c) {
  NATIVE_HOOK(0x101067a8u) REGS; LOADALL;
L_101067a8:;
  /* 101067a8 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 101067ab mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 101067ae mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 101067b1 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 101067b4 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 101067b7 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 101067ba mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 101067bd mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 101067c0 mov dword ptr [ebp - 0x2c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edx); }
  /* 101067c3 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_101067c5:;
  /* 101067c5 mov dword ptr [ebp - 0x34], edx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edx); }
  /* 101067c8 cmp edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101067cb jae 0x101067f1 */ if (!CF_) goto L_101067f1;
  /* 101067cd lea esi, [edx + edx*4] */ esi = (u32)((u32)(edx + edx * 4u));
  /* 101067d0 mov ebx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ebx = (u32)(M32(m_)); }
  /* 101067d3 lea esi, [ebx + esi*4] */ esi = (u32)((u32)(ebx + esi * 4u));
  /* 101067d6 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 101067d9 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101067db jle 0x1010681a */ if ((ZF_|LT_)) goto L_1010681a;
  /* 101067dd cmp eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101067e0 jg 0x1010681a */ if (!(ZF_|LT_)) goto L_1010681a;
  /* 101067e2 lea eax, [ebx + 1] */ eax = (u32)((u32)(ebx + 0x1u));
  /* 101067e5 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 101067e8 mov edx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); edx = (u32)(M32(m_)); }
  /* 101067eb mov eax, dword ptr [edx + eax*8] */ { const u32 m_ = (u32)(edx + eax * 8u); eax = (u32)(M32(m_)); }
  /* 101067ee mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
L_101067f1:;
  /* 101067f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101067f2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101067f3 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 101067f5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101067f6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101067f7 call 0x1010659c */ esp -= 4; M32(esp) = 0x101067fcu; SAVEALL; F_1010659c(c); ABI_CHECK(0x1010659cu, 0x101067f7u); RETCHK(0x101067fcu, 0x101067f7u); LOADALL;
  /* 101067fc add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101067ff mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 10106802 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 10106805 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10106808 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010680c call 0x10106823 */ esp -= 4; M32(esp) = 0x10106811u; SAVEALL; F_10106823(c); ABI_CHECK(0x10106823u, 0x1010680cu); RETCHK(0x10106811u, 0x1010680cu); LOADALL;
  /* 10106811 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 10106814 call 0x10107387 */ esp -= 4; M32(esp) = 0x10106819u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10106814u); RETCHK(0x10106819u, 0x10106814u); LOADALL;
  /* 10106819 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010681a:;
  /* 1010681a inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010681b jmp 0x101067c5 */ goto L_101067c5;
}

void F_1010681d(CPU *c) {
  NATIVE_HOOK(0x1010681du) REGS; LOADALL;
L_1010681d:;
  /* 1010681d mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10106820 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10106823 mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 10106826 mov dword ptr [edi - 4], eax */ { const u32 m_ = (u32)(edi + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106829 push dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010682c call 0x1010554a */ esp -= 4; M32(esp) = 0x10106831u; SAVEALL; F_1010554a(c); ABI_CHECK(0x1010554au, 0x1010682cu); RETCHK(0x10106831u, 0x1010682cu); LOADALL;
  /* 10106831 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106832 call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106837u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10106832u); RETCHK(0x10106837u, 0x10106832u); LOADALL;
  /* 10106837 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 1010683a mov dword ptr [eax + 0x7c], ecx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(ecx); }
  /* 1010683d call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106842u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010683du); RETCHK(0x10106842u, 0x1010683du); LOADALL;
  /* 10106842 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 10106845 mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 1010684b cmp dword ptr [esi], 0xe06d7363 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106851 jne 0x10106891 */ if (!ZF_) goto L_10106891;
  /* 10106853 cmp dword ptr [esi + 0x10], 3 */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106857 jne 0x10106891 */ if (!ZF_) goto L_10106891;
  /* 10106859 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 1010685c cmp eax, 0x19930520 */ { u32 a_ = eax, b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106861 je 0x1010686a */ if (ZF_) goto L_1010686a;
  /* 10106863 cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106868 jne 0x10106891 */ if (!ZF_) goto L_10106891;
L_1010686a:;
  /* 1010686a cmp dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010686e jne 0x10106891 */ if (!ZF_) goto L_10106891;
  /* 10106870 cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106874 je 0x10106891 */ if (ZF_) goto L_10106891;
  /* 10106876 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106879 call 0x10105529 */ esp -= 4; M32(esp) = 0x1010687eu; SAVEALL; F_10105529(c); ABI_CHECK(0x10105529u, 0x10106879u); RETCHK(0x1010687eu, 0x10106879u); LOADALL;
  /* 1010687e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010687f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106881 je 0x10106891 */ if (ZF_) goto L_10106891;
  /* 10106883 call 0x1010569a */ esp -= 4; M32(esp) = 0x10106888u; SAVEALL; F_1010569a(c); ABI_CHECK(0x1010569au, 0x10106883u); RETCHK(0x10106888u, 0x10106883u); LOADALL;
  /* 10106888 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106889 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010688a call 0x1010666a */ esp -= 4; M32(esp) = 0x1010688fu; SAVEALL; F_1010666a(c); ABI_CHECK(0x1010666au, 0x1010688au); RETCHK(0x1010688fu, 0x1010688au); LOADALL;
  /* 1010688f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106890 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106891:;
  /* 10106891 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106823(CPU *c) {
  NATIVE_HOOK(0x10106823u) REGS; LOADALL;
L_10106823:;
  /* 10106823 mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 10106826 mov dword ptr [edi - 4], eax */ { const u32 m_ = (u32)(edi + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106829 push dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010682c call 0x1010554a */ esp -= 4; M32(esp) = 0x10106831u; SAVEALL; F_1010554a(c); ABI_CHECK(0x1010554au, 0x1010682cu); RETCHK(0x10106831u, 0x1010682cu); LOADALL;
  /* 10106831 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106832 call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106837u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10106832u); RETCHK(0x10106837u, 0x10106832u); LOADALL;
  /* 10106837 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 1010683a mov dword ptr [eax + 0x7c], ecx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(ecx); }
  /* 1010683d call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106842u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010683du); RETCHK(0x10106842u, 0x1010683du); LOADALL;
  /* 10106842 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 10106845 mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 1010684b cmp dword ptr [esi], 0xe06d7363 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106851 jne 0x10106891 */ if (!ZF_) goto L_10106891;
  /* 10106853 cmp dword ptr [esi + 0x10], 3 */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106857 jne 0x10106891 */ if (!ZF_) goto L_10106891;
  /* 10106859 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 1010685c cmp eax, 0x19930520 */ { u32 a_ = eax, b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106861 je 0x1010686a */ if (ZF_) goto L_1010686a;
  /* 10106863 cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106868 jne 0x10106891 */ if (!ZF_) goto L_10106891;
L_1010686a:;
  /* 1010686a cmp dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010686e jne 0x10106891 */ if (!ZF_) goto L_10106891;
  /* 10106870 cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106874 je 0x10106891 */ if (ZF_) goto L_10106891;
  /* 10106876 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106879 call 0x10105529 */ esp -= 4; M32(esp) = 0x1010687eu; SAVEALL; F_10105529(c); ABI_CHECK(0x10105529u, 0x10106879u); RETCHK(0x1010687eu, 0x10106879u); LOADALL;
  /* 1010687e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010687f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106881 je 0x10106891 */ if (ZF_) goto L_10106891;
  /* 10106883 call 0x1010569a */ esp -= 4; M32(esp) = 0x10106888u; SAVEALL; F_1010569a(c); ABI_CHECK(0x1010569au, 0x10106883u); RETCHK(0x10106888u, 0x10106883u); LOADALL;
  /* 10106888 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106889 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010688a call 0x1010666a */ esp -= 4; M32(esp) = 0x1010688fu; SAVEALL; F_1010666a(c); ABI_CHECK(0x1010666au, 0x1010688au); RETCHK(0x1010688fu, 0x1010688au); LOADALL;
  /* 1010688f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106890 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106891:;
  /* 10106891 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106892(CPU *c) {
  NATIVE_HOOK(0x10106892u) REGS; LOADALL;
L_10106892:;
  /* 10106892 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10106894 push 0x1010d3d0 */ { u32 v_ = 0x1010d3d0u; esp -= 4; M32(esp) = v_; }
  /* 10106899 call 0x1010734c */ esp -= 4; M32(esp) = 0x1010689eu; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10106899u); RETCHK(0x1010689eu, 0x10106899u); LOADALL;
  /* 1010689e mov esi, ecx */ { esi = (u32)(ecx); }
  /* 101068a0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 101068a3 mov edi, edx */ { edi = (u32)(edx); }
  /* 101068a5 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 101068a8 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101068ab test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101068ad je 0x101069fc */ if (ZF_) goto L_101069fc;
  /* 101068b3 cmp byte ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 101068b7 je 0x101069fc */ if (ZF_) goto L_101069fc;
  /* 101068bd mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101068c0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101068c2 jne 0x101068ce */ if (!ZF_) goto L_101068ce;
  /* 101068c4 test byte ptr [eax + 3], 0x80 */ { const u32 m_ = (u32)(eax + 0x3u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101068c8 je 0x101069fc */ if (ZF_) goto L_101069fc;
L_101068ce:;
  /* 101068ce mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 101068d0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101068d2 js 0x101068d8 */ if (SF_) goto L_101068d8;
  /* 101068d4 lea edi, [ecx + edi + 0xc] */ edi = (u32)((u32)(ecx + edi + 0xcu));
L_101068d8:;
  /* 101068d8 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101068dc push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 101068de push dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101068e1 test al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101068e3 je 0x1010691a */ if (ZF_) goto L_1010691a;
  /* 101068e5 call 0x10109cb3 */ esp -= 4; M32(esp) = 0x101068eau; SAVEALL; F_10109cb3(c); ABI_CHECK(0x10109cb3u, 0x101068e5u); RETCHK(0x101068eau, 0x101068e5u); LOADALL;
  /* 101068ea pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101068eb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101068ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101068ee je 0x101069f3 */ if (ZF_) goto L_101069f3;
  /* 101068f4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 101068f6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101068f7 call 0x10109ccf */ esp -= 4; M32(esp) = 0x101068fcu; SAVEALL; F_10109ccf(c); ABI_CHECK(0x10109ccfu, 0x101068f7u); RETCHK(0x101068fcu, 0x101068f7u); LOADALL;
  /* 101068fc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101068fd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101068fe test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106900 je 0x101069f3 */ if (ZF_) goto L_101069f3;
  /* 10106906 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 10106909 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
L_1010690b:;
  /* 1010690b lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 1010690e call 0x101066af */ esp -= 4; M32(esp) = 0x10106913u; SAVEALL; F_101066af(c); ABI_CHECK(0x101066afu, 0x1010690eu); RETCHK(0x10106913u, 0x1010690eu); LOADALL;
  /* 10106913 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 10106915 jmp 0x101069f8 */ goto L_101069f8;
L_1010691a:;
  /* 1010691a test byte ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010691d je 0x10106965 */ if (ZF_) goto L_10106965;
  /* 1010691f call 0x10109cb3 */ esp -= 4; M32(esp) = 0x10106924u; SAVEALL; F_10109cb3(c); ABI_CHECK(0x10109cb3u, 0x1010691fu); RETCHK(0x10106924u, 0x1010691fu); LOADALL;
  /* 10106924 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106925 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106926 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106928 je 0x101069f3 */ if (ZF_) goto L_101069f3;
  /* 1010692e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10106930 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10106931 call 0x10109ccf */ esp -= 4; M32(esp) = 0x10106936u; SAVEALL; F_10109ccf(c); ABI_CHECK(0x10109ccfu, 0x10106931u); RETCHK(0x10106936u, 0x10106931u); LOADALL;
  /* 10106936 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106937 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106938 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010693a je 0x101069f3 */ if (ZF_) goto L_101069f3;
  /* 10106940 push dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106943 push dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106946 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10106947 call 0x10105760 */ esp -= 4; M32(esp) = 0x1010694cu; SAVEALL; F_10105760(c); ABI_CHECK(0x10105760u, 0x10106947u); RETCHK(0x1010694cu, 0x10106947u); LOADALL;
  /* 1010694c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010694f cmp dword ptr [esi + 0x14], 4 */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106953 jne 0x101069f8 */ if (!ZF_) goto L_101069f8;
  /* 10106959 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 1010695b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010695d je 0x101069f8 */ if (ZF_) goto L_101069f8;
  /* 10106963 jmp 0x1010690b */ goto L_1010690b;
L_10106965:;
  /* 10106965 cmp dword ptr [esi + 0x18], 0 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106969 jne 0x1010699e */ if (!ZF_) goto L_1010699e;
  /* 1010696b call 0x10109cb3 */ esp -= 4; M32(esp) = 0x10106970u; SAVEALL; F_10109cb3(c); ABI_CHECK(0x10109cb3u, 0x1010696bu); RETCHK(0x10106970u, 0x1010696bu); LOADALL;
  /* 10106970 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106971 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106972 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106974 je 0x101069f3 */ if (ZF_) goto L_101069f3;
  /* 10106976 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10106978 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10106979 call 0x10109ccf */ esp -= 4; M32(esp) = 0x1010697eu; SAVEALL; F_10109ccf(c); ABI_CHECK(0x10109ccfu, 0x10106979u); RETCHK(0x1010697eu, 0x10106979u); LOADALL;
  /* 1010697e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010697f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106980 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106982 je 0x101069f3 */ if (ZF_) goto L_101069f3;
  /* 10106984 push dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106987 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 1010698a mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 1010698d call 0x101066af */ esp -= 4; M32(esp) = 0x10106992u; SAVEALL; F_101066af(c); ABI_CHECK(0x101066afu, 0x1010698du); RETCHK(0x10106992u, 0x1010698du); LOADALL;
  /* 10106992 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106993 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10106994 call 0x10105760 */ esp -= 4; M32(esp) = 0x10106999u; SAVEALL; F_10105760(c); ABI_CHECK(0x10105760u, 0x10106994u); RETCHK(0x10106999u, 0x10106994u); LOADALL;
  /* 10106999 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010699c jmp 0x101069f8 */ goto L_101069f8;
L_1010699e:;
  /* 1010699e call 0x10109cb3 */ esp -= 4; M32(esp) = 0x101069a3u; SAVEALL; F_10109cb3(c); ABI_CHECK(0x10109cb3u, 0x1010699eu); RETCHK(0x101069a3u, 0x1010699eu); LOADALL;
  /* 101069a3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101069a4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101069a5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101069a7 je 0x101069f3 */ if (ZF_) goto L_101069f3;
  /* 101069a9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 101069ab push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101069ac call 0x10109ccf */ esp -= 4; M32(esp) = 0x101069b1u; SAVEALL; F_10109ccf(c); ABI_CHECK(0x10109ccfu, 0x101069acu); RETCHK(0x101069b1u, 0x101069acu); LOADALL;
  /* 101069b1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101069b2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101069b3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101069b5 je 0x101069f3 */ if (ZF_) goto L_101069f3;
  /* 101069b7 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101069ba call 0x10109ceb */ esp -= 4; M32(esp) = 0x101069bfu; SAVEALL; F_10109ceb(c); ABI_CHECK(0x10109cebu, 0x101069bau); RETCHK(0x101069bfu, 0x101069bau); LOADALL;
  /* 101069bf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101069c0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101069c2 je 0x101069f3 */ if (ZF_) goto L_101069f3;
  /* 101069c4 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 101069c7 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 101069ca test byte ptr [esi], 4 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101069cd je 0x101069e2 */ if (ZF_) goto L_101069e2;
  /* 101069cf push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 101069d1 call 0x101066af */ esp -= 4; M32(esp) = 0x101069d6u; SAVEALL; F_101066af(c); ABI_CHECK(0x101066afu, 0x101069d1u); RETCHK(0x101069d6u, 0x101069d1u); LOADALL;
  /* 101069d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101069d7 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101069da push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101069db call 0x10105244 */ esp -= 4; M32(esp) = 0x101069e0u; SAVEALL; F_10105244(c); ABI_CHECK(0x10105244u, 0x101069dbu); RETCHK(0x101069e0u, 0x101069dbu); LOADALL;
  /* 101069e0 jmp 0x101069f8 */ goto L_101069f8;
L_101069e2:;
  /* 101069e2 call 0x101066af */ esp -= 4; M32(esp) = 0x101069e7u; SAVEALL; F_101066af(c); ABI_CHECK(0x101066afu, 0x101069e2u); RETCHK(0x101069e7u, 0x101069e2u); LOADALL;
  /* 101069e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101069e8 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101069eb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101069ec call 0x10105244 */ esp -= 4; M32(esp) = 0x101069f1u; SAVEALL; F_10105244(c); ABI_CHECK(0x10105244u, 0x101069ecu); RETCHK(0x101069f1u, 0x101069ecu); LOADALL;
  /* 101069f1 jmp 0x101069f8 */ goto L_101069f8;
L_101069f3:;
  /* 101069f3 call 0x1010711d */ esp -= 4; M32(esp) = 0x101069f8u; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x101069f3u); RETCHK(0x101069f8u, 0x101069f3u); LOADALL;
L_101069f8:;
  /* 101069f8 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_101069fc:;
  /* 101069fc call 0x10107387 */ esp -= 4; M32(esp) = 0x10106a01u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x101069fcu); RETCHK(0x10106a01u, 0x101069fcu); LOADALL;
  /* 10106a01 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106a02(CPU *c) {
  NATIVE_HOOK(0x10106a02u) REGS; LOADALL;
L_10106a02:;
  /* 10106a02 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10106a04 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10106a05 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106a06(CPU *c) {
  NATIVE_HOOK(0x10106a06u) REGS; LOADALL;
L_10106a06:;
  /* 10106a06 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10106a09 jmp 0x101070e8 */ SAVEALL; F_101070e8(c); return;
}

void F_10106a0e(CPU *c) {
  NATIVE_HOOK(0x10106a0eu) REGS; LOADALL;
L_10106a0e:;
  /* 10106a0e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10106a0f mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10106a11 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106a13 je 0x10106a22 */ if (ZF_) goto L_10106a22;
  /* 10106a15 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10106a16 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a19 mov edx, esi */ { edx = (u32)(esi); }
  /* 10106a1b call 0x10106892 */ esp -= 4; M32(esp) = 0x10106a20u; SAVEALL; F_10106892(c); ABI_CHECK(0x10106892u, 0x10106a1bu); RETCHK(0x10106a20u, 0x10106a1bu); LOADALL;
  /* 10106a20 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106a21 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106a22:;
  /* 10106a22 cmp dword ptr [ebp + 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106a26 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a29 jne 0x10106a2e */ if (!ZF_) goto L_10106a2e;
  /* 10106a2b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106a2c jmp 0x10106a31 */ goto L_10106a31;
L_10106a2e:;
  /* 10106a2e push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
L_10106a31:;
  /* 10106a31 call 0x1010524b */ esp -= 4; M32(esp) = 0x10106a36u; SAVEALL; F_1010524b(c); ABI_CHECK(0x1010524bu, 0x10106a31u); RETCHK(0x10106a36u, 0x10106a31u); LOADALL;
  /* 10106a36 push dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a38 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a3b push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a3e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106a3f call 0x1010659c */ esp -= 4; M32(esp) = 0x10106a44u; SAVEALL; F_1010659c(c); ABI_CHECK(0x1010659cu, 0x10106a3fu); RETCHK(0x10106a44u, 0x10106a3fu); LOADALL;
  /* 10106a44 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10106a47 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10106a4c push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a4f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10106a50 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a53 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 10106a56 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a59 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10106a5c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106a5d push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a60 call 0x101066ce */ esp -= 4; M32(esp) = 0x10106a65u; SAVEALL; F_101066ce(c); ABI_CHECK(0x101066ceu, 0x10106a60u); RETCHK(0x10106a65u, 0x10106a60u); LOADALL;
  /* 10106a65 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10106a68 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106a6a je 0x10106a73 */ if (ZF_) goto L_10106a73;
  /* 10106a6c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106a6d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106a6e call 0x10105214 */ esp -= 4; M32(esp) = 0x10106a73u; SAVEALL; F_10105214(c); ABI_CHECK(0x10105214u, 0x10106a6eu); RETCHK(0x10106a73u, 0x10106a6eu); LOADALL;
L_10106a73:;
  /* 10106a73 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10106a74 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106a75(CPU *c) {
  NATIVE_HOOK(0x10106a75u) REGS; LOADALL;
L_10106a75:;
  /* 10106a75 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10106a76 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10106a78 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10106a79 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10106a7a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106a7b mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10106a7e cmp dword ptr [esi], 0x80000003 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x80000003u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106a84 je 0x10106b30 */ if (ZF_) goto L_10106b30;
  /* 10106a8a call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106a8fu; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10106a8au); RETCHK(0x10106a8fu, 0x10106a8au); LOADALL;
  /* 10106a8f cmp dword ptr [eax + 0x74], 0 */ { const u32 m_ = (u32)(eax + 0x74u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106a93 je 0x10106ab4 */ if (ZF_) goto L_10106ab4;
  /* 10106a95 push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a98 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a9b push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a9e push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106aa1 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106aa4 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106aa7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106aa8 call 0x1010530e */ esp -= 4; M32(esp) = 0x10106aadu; SAVEALL; F_1010530e(c); ABI_CHECK(0x1010530eu, 0x10106aa8u); RETCHK(0x10106aadu, 0x10106aa8u); LOADALL;
  /* 10106aad add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10106ab0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106ab2 jne 0x10106b30 */ if (!ZF_) goto L_10106b30;
L_10106ab4:;
  /* 10106ab4 mov esi, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 10106ab7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10106ab8 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 10106abb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106abc lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10106abf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106ac0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106ac1 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106ac4 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106ac7 call 0x10105487 */ esp -= 4; M32(esp) = 0x10106accu; SAVEALL; F_10105487(c); ABI_CHECK(0x10105487u, 0x10106ac7u); RETCHK(0x10106accu, 0x10106ac7u); LOADALL;
  /* 10106acc mov edi, eax */ { edi = (u32)(eax); }
  /* 10106ace mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106ad1 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10106ad4 cmp eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ad7 jae 0x10106b2f */ if (!CF_) goto L_10106b2f;
  /* 10106ad9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
L_10106ada:;
  /* 10106ada cmp esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106adc jl 0x10106b20 */ if (LT_) goto L_10106b20;
  /* 10106ade cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ae1 jg 0x10106b20 */ if (!(ZF_|LT_)) goto L_10106b20;
  /* 10106ae3 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10106ae6 mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10106ae9 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10106aec add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10106aee mov ecx, dword ptr [eax - 0xc] */ { const u32 m_ = (u32)(eax + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10106af1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106af3 je 0x10106afb */ if (ZF_) goto L_10106afb;
  /* 10106af5 cmp byte ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10106af9 jne 0x10106b20 */ if (!ZF_) goto L_10106b20;
L_10106afb:;
  /* 10106afb push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106afe mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10106b01 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106b04 lea ebx, [eax - 0x10] */ ebx = (u32)((u32)(eax + 0xfffffff0u));
  /* 10106b07 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106b0a xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10106b0c push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106b0f push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106b12 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106b15 call 0x10106a0e */ esp -= 4; M32(esp) = 0x10106b1au; SAVEALL; F_10106a0e(c); ABI_CHECK(0x10106a0eu, 0x10106b15u); RETCHK(0x10106b1au, 0x10106b15u); LOADALL;
  /* 10106b1a mov esi, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 10106b1d add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10106b20:;
  /* 10106b20 inc dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10106b23 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106b26 add edi, 0x14 */ { u32 a_ = edi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106b29 cmp eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106b2c jb 0x10106ada */ if (CF_) goto L_10106ada;
  /* 10106b2e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_10106b2f:;
  /* 10106b2f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_10106b30:;
  /* 10106b30 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106b31 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106b32 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106b33(CPU *c) {
  NATIVE_HOOK(0x10106b33u) REGS; LOADALL;
L_10106b33:;
  /* 10106b33 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10106b34 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10106b36 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10106b39 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10106b3c mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106b3f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106b42 mov byte ptr [ebp - 1], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)(0x0u); }
  /* 10106b46 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10106b49 jl 0x10106b53 */ if (LT_) goto L_10106b53;
  /* 10106b4b mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 10106b4e cmp eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106b51 jl 0x10106b58 */ if (LT_) goto L_10106b58;
L_10106b53:;
  /* 10106b53 call 0x1010711d */ esp -= 4; M32(esp) = 0x10106b58u; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x10106b53u); RETCHK(0x10106b58u, 0x10106b53u); LOADALL;
L_10106b58:;
  /* 10106b58 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10106b59 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10106b5c cmp dword ptr [ebx], 0xe06d7363 */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106b62 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106b63 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10106b64 jne 0x10106d0c */ if (!ZF_) goto L_10106d0c;
  /* 10106b6a cmp dword ptr [ebx + 0x10], 3 */ { const u32 m_ = (u32)(ebx + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106b6e mov edi, 0x19930520 */ { edi = (u32)(0x19930520u); }
  /* 10106b73 jne 0x10106c00 */ if (!ZF_) goto L_10106c00;
  /* 10106b79 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 10106b7c cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106b7e je 0x10106b87 */ if (ZF_) goto L_10106b87;
  /* 10106b80 cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106b85 jne 0x10106c00 */ if (!ZF_) goto L_10106c00;
L_10106b87:;
  /* 10106b87 cmp dword ptr [ebx + 0x1c], 0 */ { const u32 m_ = (u32)(ebx + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106b8b jne 0x10106c00 */ if (!ZF_) goto L_10106c00;
  /* 10106b8d call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106b92u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10106b8du); RETCHK(0x10106b92u, 0x10106b8du); LOADALL;
  /* 10106b92 cmp dword ptr [eax + 0x7c], 0 */ { const u32 m_ = (u32)(eax + 0x7cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106b96 je 0x10106d04 */ if (ZF_) goto L_10106d04;
  /* 10106b9c call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106ba1u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10106b9cu); RETCHK(0x10106ba1u, 0x10106b9cu); LOADALL;
  /* 10106ba1 mov esi, dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); esi = (u32)(M32(m_)); }
  /* 10106ba4 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 10106ba7 call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106bacu; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10106ba7u); RETCHK(0x10106bacu, 0x10106ba7u); LOADALL;
  /* 10106bac mov eax, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); eax = (u32)(M32(m_)); }
  /* 10106bb2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10106bb4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106bb5 mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10106bb8 mov byte ptr [ebp - 1], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)(0x1u); }
  /* 10106bbc call 0x10109cb3 */ esp -= 4; M32(esp) = 0x10106bc1u; SAVEALL; F_10109cb3(c); ABI_CHECK(0x10109cb3u, 0x10106bbcu); RETCHK(0x10106bc1u, 0x10106bbcu); LOADALL;
  /* 10106bc1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106bc3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106bc4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106bc5 jne 0x10106bcc */ if (!ZF_) goto L_10106bcc;
  /* 10106bc7 call 0x1010711d */ esp -= 4; M32(esp) = 0x10106bccu; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x10106bc7u); RETCHK(0x10106bccu, 0x10106bc7u); LOADALL;
L_10106bcc:;
  /* 10106bcc cmp dword ptr [esi], 0xe06d7363 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106bd2 jne 0x10106d09 */ if (!ZF_) goto L_10106d09;
  /* 10106bd8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106bdb cmp dword ptr [eax + 0x10], 3 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106bdf jne 0x10106bfd */ if (!ZF_) goto L_10106bfd;
  /* 10106be1 mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 10106be4 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106be6 je 0x10106bef */ if (ZF_) goto L_10106bef;
  /* 10106be8 cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106bed jne 0x10106bfd */ if (!ZF_) goto L_10106bfd;
L_10106bef:;
  /* 10106bef mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106bf2 cmp dword ptr [eax + 0x1c], 0 */ { const u32 m_ = (u32)(eax + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106bf6 jne 0x10106bfd */ if (!ZF_) goto L_10106bfd;
  /* 10106bf8 call 0x1010711d */ esp -= 4; M32(esp) = 0x10106bfdu; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x10106bf8u); RETCHK(0x10106bfdu, 0x10106bf8u); LOADALL;
L_10106bfd:;
  /* 10106bfd mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_10106c00:;
  /* 10106c00 cmp dword ptr [ebx], 0xe06d7363 */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106c06 jne 0x10106d0c */ if (!ZF_) goto L_10106d0c;
  /* 10106c0c cmp dword ptr [ebx + 0x10], 3 */ { const u32 m_ = (u32)(ebx + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106c10 jne 0x10106d0c */ if (!ZF_) goto L_10106d0c;
  /* 10106c16 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 10106c19 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106c1b je 0x10106c28 */ if (ZF_) goto L_10106c28;
  /* 10106c1d cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106c22 jne 0x10106d0c */ if (!ZF_) goto L_10106d0c;
L_10106c28:;
  /* 10106c28 mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 10106c2b lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 10106c2e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106c2f lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 10106c32 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106c33 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106c34 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106c37 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106c3a call 0x10105487 */ esp -= 4; M32(esp) = 0x10106c3fu; SAVEALL; F_10105487(c); ABI_CHECK(0x10105487u, 0x10106c3au); RETCHK(0x10106c3fu, 0x10106c3au); LOADALL;
  /* 10106c3f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10106c42 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10106c45 cmp ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106c48 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10106c4b jae 0x10106cf4 */ if (!CF_) goto L_10106cf4;
  /* 10106c51 jmp 0x10106c56 */ goto L_10106c56;
L_10106c53:;
  /* 10106c53 mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
L_10106c56:;
  /* 10106c56 cmp dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106c58 jg 0x10106cdf */ if (!(ZF_|LT_)) goto L_10106cdf;
  /* 10106c5e cmp esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106c61 jg 0x10106cdf */ if (!(ZF_|LT_)) goto L_10106cdf;
  /* 10106c63 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10106c66 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106c68 mov esi, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); esi = (u32)(M32(m_)); }
  /* 10106c6b mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 10106c6e jle 0x10106cdf */ if ((ZF_|LT_)) goto L_10106cdf;
L_10106c70:;
  /* 10106c70 mov ecx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10106c73 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10106c76 lea edx, [ecx + 4] */ edx = (u32)((u32)(ecx + 0x4u));
  /* 10106c79 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 10106c7b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106c7d mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 10106c80 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 10106c83 jle 0x10106ca9 */ if ((ZF_|LT_)) goto L_10106ca9;
L_10106c85:;
  /* 10106c85 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 10106c88 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 10106c8a push dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106c8d mov dword ptr [ebp - 0x24], edi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edi); }
  /* 10106c90 call 0x1010652f */ esp -= 4; M32(esp) = 0x10106c95u; SAVEALL; F_1010652f(c); ABI_CHECK(0x1010652fu, 0x10106c90u); RETCHK(0x10106c95u, 0x10106c90u); LOADALL;
  /* 10106c95 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106c97 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106c98 jne 0x10106cb7 */ if (!ZF_) goto L_10106cb7;
  /* 10106c9a dec dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10106c9d add dword ptr [ebp - 0x10], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106ca1 cmp dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ca4 jg 0x10106c85 */ if (!(ZF_|LT_)) goto L_10106c85;
  /* 10106ca6 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
L_10106ca9:;
  /* 10106ca9 dec dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10106cac add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106caf cmp dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106cb3 jg 0x10106c70 */ if (!(ZF_|LT_)) goto L_10106c70;
  /* 10106cb5 jmp 0x10106cdf */ goto L_10106cdf;
L_10106cb7:;
  /* 10106cb7 push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106cba mov edi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edi = (u32)(M32(m_)); }
  /* 10106cbd push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106cc0 mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 10106cc3 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106cc6 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106cc9 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106ccc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10106ccd mov ebx, esi */ { ebx = (u32)(esi); }
  /* 10106ccf mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10106cd2 call 0x10106a0e */ esp -= 4; M32(esp) = 0x10106cd7u; SAVEALL; F_10106a0e(c); ABI_CHECK(0x10106a0eu, 0x10106cd2u); RETCHK(0x10106cd7u, 0x10106cd2u); LOADALL;
  /* 10106cd7 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10106cda add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10106cdd mov eax, edi */ { eax = (u32)(edi); }
L_10106cdf:;
  /* 10106cdf inc dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10106ce2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10106ce5 add eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10106ce8 cmp ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ceb mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10106cee jb 0x10106c53 */ if (CF_) goto L_10106c53;
L_10106cf4:;
  /* 10106cf4 cmp byte ptr [ebp + 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10106cf8 je 0x10106d04 */ if (ZF_) goto L_10106d04;
  /* 10106cfa push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10106cfc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10106cfd call 0x1010666a */ esp -= 4; M32(esp) = 0x10106d02u; SAVEALL; F_1010666a(c); ABI_CHECK(0x1010666au, 0x10106cfdu); RETCHK(0x10106d02u, 0x10106cfdu); LOADALL;
  /* 10106d02 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106d03 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106d04:;
  /* 10106d04 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106d05 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106d06 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10106d07 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106d08 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106d09:;
  /* 10106d09 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_10106d0c:;
  /* 10106d0c cmp byte ptr [ebp + 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10106d10 jne 0x10106d32 */ if (!ZF_) goto L_10106d32;
  /* 10106d12 push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106d15 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106d18 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106d1b push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106d1e push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106d21 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106d24 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106d27 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10106d28 call 0x10106a75 */ esp -= 4; M32(esp) = 0x10106d2du; SAVEALL; F_10106a75(c); ABI_CHECK(0x10106a75u, 0x10106d28u); RETCHK(0x10106d2du, 0x10106d28u); LOADALL;
  /* 10106d2d add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10106d30 jmp 0x10106d04 */ goto L_10106d04;
L_10106d32:;
  /* 10106d32 jmp 0x101070e8 */ SAVEALL; F_101070e8(c); return;
}

void F_10106d37(CPU *c) {
  NATIVE_HOOK(0x10106d37u) REGS; LOADALL;
L_10106d37:;
  /* 10106d37 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10106d38 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10106d3a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106d3b mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
  /* 10106d3e mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10106d40 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10106d41 and eax, 0x1fffffff */ { u32 a_ = eax, b_ = 0x1fffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10106d46 mov edi, 0x19930520 */ { edi = (u32)(0x19930520u); }
  /* 10106d4b cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106d4d je 0x10106d54 */ if (ZF_) goto L_10106d54;
  /* 10106d4f call 0x1010711d */ esp -= 4; M32(esp) = 0x10106d54u; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x10106d4fu); RETCHK(0x10106d54u, 0x10106d4fu); LOADALL;
L_10106d54:;
  /* 10106d54 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106d57 test byte ptr [eax + 4], 0x66 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M8(m_), b_ = 0x66u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10106d5b je 0x10106d7c */ if (ZF_) goto L_10106d7c;
  /* 10106d5d cmp dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106d61 je 0x10106dd2 */ if (ZF_) goto L_10106dd2;
  /* 10106d63 cmp dword ptr [ebp + 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106d67 jne 0x10106dd2 */ if (!ZF_) goto L_10106dd2;
  /* 10106d69 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10106d6b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106d6c push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106d6f push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106d72 call 0x1010659c */ esp -= 4; M32(esp) = 0x10106d77u; SAVEALL; F_1010659c(c); ABI_CHECK(0x1010659cu, 0x10106d72u); RETCHK(0x10106d77u, 0x10106d72u); LOADALL;
  /* 10106d77 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10106d7a jmp 0x10106dd2 */ goto L_10106dd2;
L_10106d7c:;
  /* 10106d7c cmp dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106d80 je 0x10106dd2 */ if (ZF_) goto L_10106dd2;
  /* 10106d82 cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106d88 jne 0x10106db6 */ if (!ZF_) goto L_10106db6;
  /* 10106d8a cmp dword ptr [eax + 0x14], edi */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106d8d jbe 0x10106db6 */ if ((CF_|ZF_)) goto L_10106db6;
  /* 10106d8f mov ecx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10106d92 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10106d95 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106d97 je 0x10106db6 */ if (ZF_) goto L_10106db6;
  /* 10106d99 movzx edx, byte ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); edx = (u32)(M8(m_)); }
  /* 10106d9d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10106d9e push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106da1 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106da4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106da5 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106da8 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106dab push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106dae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106daf call ecx */ { u32 t_ = ecx; esp -= 4; M32(esp) = 0x10106db1u; SAVEALL; call_ind(c, t_); RETCHK(0x10106db1u, 0x10106dafu); LOADALL; }
  /* 10106db1 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10106db4 jmp 0x10106dd5 */ goto L_10106dd5;
L_10106db6:;
  /* 10106db6 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106db9 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106dbc push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106dbf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106dc0 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106dc3 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106dc6 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106dc9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106dca call 0x10106b33 */ esp -= 4; M32(esp) = 0x10106dcfu; SAVEALL; F_10106b33(c); ABI_CHECK(0x10106b33u, 0x10106dcau); RETCHK(0x10106dcfu, 0x10106dcau); LOADALL;
  /* 10106dcf add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10106dd2:;
  /* 10106dd2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10106dd4 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10106dd5:;
  /* 10106dd5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106dd6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106dd7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10106dd8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106dd9(CPU *c) {
  NATIVE_HOOK(0x10106dd9u) REGS; LOADALL;
L_10106dd9:;
  /* 10106dd9 call dword ptr [0x1010d028] */ { const u32 m_ = (u32)(0x1010d028u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10106ddfu; SAVEALL; call_ind(c, t_); RETCHK(0x10106ddfu, 0x10106dd9u); LOADALL; }
  /* 10106ddf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10106de2(CPU *c) {
  NATIVE_HOOK(0x10106de2u) REGS; LOADALL;
L_10106de2:;
  /* 10106de2 mov eax, dword ptr [0x10110124] */ { const u32 m_ = (u32)(0x10110124u); eax = (u32)(M32(m_)); }
  /* 10106de7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106dea je 0x10106dfa */ if (ZF_) goto L_10106dfa;
  /* 10106dec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106ded call dword ptr [0x10120ccc] */ { const u32 m_ = (u32)(0x10120cccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10106df3u; SAVEALL; call_ind(c, t_); RETCHK(0x10106df3u, 0x10106dedu); LOADALL; }
  /* 10106df3 or dword ptr [0x10110124], 0xffffffff */ { const u32 m_ = (u32)(0x10110124u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10106dfa:;
  /* 10106dfa jmp 0x101076c1 */ goto L_101076c1;
L_101076c1:;
  /* 101076c1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101076c2 mov ebx, dword ptr [0x1010d064] */ { const u32 m_ = (u32)(0x1010d064u); ebx = (u32)(M32(m_)); }
  /* 101076c8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101076c9 mov esi, 0x10110130 */ { esi = (u32)(0x10110130u); }
  /* 101076ce push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_101076cf:;
  /* 101076cf mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 101076d1 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101076d3 je 0x101076e8 */ if (ZF_) goto L_101076e8;
  /* 101076d5 cmp dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101076d9 je 0x101076e8 */ if (ZF_) goto L_101076e8;
  /* 101076db push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101076dc call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x101076deu; SAVEALL; call_ind(c, t_); RETCHK(0x101076deu, 0x101076dcu); LOADALL; }
  /* 101076de push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101076df call 0x101074a1 */ esp -= 4; M32(esp) = 0x101076e4u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x101076dfu); RETCHK(0x101076e4u, 0x101076dfu); LOADALL;
  /* 101076e4 and dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101076e7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101076e8:;
  /* 101076e8 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101076eb cmp esi, 0x10110250 */ { u32 a_ = esi, b_ = 0x10110250u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101076f1 jl 0x101076cf */ if (LT_) goto L_101076cf;
  /* 101076f3 mov esi, 0x10110130 */ { esi = (u32)(0x10110130u); }
  /* 101076f8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_101076f9:;
  /* 101076f9 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 101076fb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101076fd je 0x10107708 */ if (ZF_) goto L_10107708;
  /* 101076ff cmp dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107703 jne 0x10107708 */ if (!ZF_) goto L_10107708;
  /* 10107705 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107706 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x10107708u; SAVEALL; call_ind(c, t_); RETCHK(0x10107708u, 0x10107706u); LOADALL; }
L_10107708:;
  /* 10107708 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1010770b cmp esi, 0x10110250 */ { u32 a_ = esi, b_ = 0x10110250u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107711 jl 0x101076f9 */ if (LT_) goto L_101076f9;
  /* 10107713 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10107714 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10107715 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106dff(CPU *c) {
  NATIVE_HOOK(0x10106dffu) REGS; LOADALL;
L_10106dff:;
  /* 10106dff mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10106e03 mov dword ptr [eax + 0x54], 0x10110280 */ { const u32 m_ = (u32)(eax + 0x54u); M32(m_) = (u32)(0x10110280u); }
  /* 10106e0a mov dword ptr [eax + 0x14], 1 */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(0x1u); }
  /* 10106e11 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106e12(CPU *c) {
  NATIVE_HOOK(0x10106e12u) REGS; LOADALL;
L_10106e12:;
  /* 10106e12 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10106e13 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106e14 call dword ptr [0x1010d030] */ { const u32 m_ = (u32)(0x1010d030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10106e1au; SAVEALL; call_ind(c, t_); RETCHK(0x10106e1au, 0x10106e14u); LOADALL; }
  /* 10106e1a push dword ptr [0x10110124] */ { const u32 m_ = (u32)(0x10110124u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106e20 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10106e22 call dword ptr [0x10120cc4] */ { const u32 m_ = (u32)(0x10120cc4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10106e28u; SAVEALL; call_ind(c, t_); RETCHK(0x10106e28u, 0x10106e22u); LOADALL; }
  /* 10106e28 mov esi, eax */ { esi = (u32)(eax); }
  /* 10106e2a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106e2c jne 0x10106e77 */ if (!ZF_) goto L_10106e77;
  /* 10106e2e push 0x8c */ { u32 v_ = 0x8cu; esp -= 4; M32(esp) = v_; }
  /* 10106e33 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10106e35 call 0x101085f3 */ esp -= 4; M32(esp) = 0x10106e3au; SAVEALL; F_101085f3(c); ABI_CHECK(0x101085f3u, 0x10106e35u); RETCHK(0x10106e3au, 0x10106e35u); LOADALL;
  /* 10106e3a mov esi, eax */ { esi = (u32)(eax); }
  /* 10106e3c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106e3e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106e3f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106e40 je 0x10106e6f */ if (ZF_) goto L_10106e6f;
  /* 10106e42 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106e43 push dword ptr [0x10110124] */ { const u32 m_ = (u32)(0x10110124u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106e49 call dword ptr [0x10120cc8] */ { const u32 m_ = (u32)(0x10120cc8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10106e4fu; SAVEALL; call_ind(c, t_); RETCHK(0x10106e4fu, 0x10106e49u); LOADALL; }
  /* 10106e4f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106e51 je 0x10106e6f */ if (ZF_) goto L_10106e6f;
  /* 10106e53 mov dword ptr [esi + 0x54], 0x10110280 */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x10110280u); }
  /* 10106e5a mov dword ptr [esi + 0x14], 1 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x1u); }
  /* 10106e61 call dword ptr [0x1010d018] */ { const u32 m_ = (u32)(0x1010d018u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10106e67u; SAVEALL; call_ind(c, t_); RETCHK(0x10106e67u, 0x10106e61u); LOADALL; }
  /* 10106e67 or dword ptr [esi + 4], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106e6b mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10106e6d jmp 0x10106e77 */ goto L_10106e77;
L_10106e6f:;
  /* 10106e6f push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10106e71 call 0x1010602e */ esp -= 4; M32(esp) = 0x10106e76u; SAVEALL; F_1010602e(c); ABI_CHECK(0x1010602eu, 0x10106e71u); RETCHK(0x10106e76u, 0x10106e71u); LOADALL;
  /* 10106e76 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106e77:;
  /* 10106e77 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10106e78 call dword ptr [0x1010d02c] */ { const u32 m_ = (u32)(0x1010d02cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10106e7eu; SAVEALL; call_ind(c, t_); RETCHK(0x10106e7eu, 0x10106e78u); LOADALL; }
  /* 10106e7e mov eax, esi */ { eax = (u32)(esi); }
  /* 10106e80 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106e81 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10106e82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106e83(CPU *c) {
  NATIVE_HOOK(0x10106e83u) REGS; LOADALL;
L_10106e83:;
  /* 10106e83 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10106e85 push 0x1010d3e0 */ { u32 v_ = 0x1010d3e0u; esp -= 4; M32(esp) = v_; }
  /* 10106e8a call 0x1010734c */ esp -= 4; M32(esp) = 0x10106e8fu; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10106e8au); RETCHK(0x10106e8fu, 0x10106e8au); LOADALL;
  /* 10106e8f mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10106e92 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10106e94 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106e96 je 0x10106fa8 */ if (ZF_) goto L_10106fa8;
  /* 10106e9c mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 10106e9f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ea1 je 0x10106eaa */ if (ZF_) goto L_10106eaa;
  /* 10106ea3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106ea4 call 0x101074a1 */ esp -= 4; M32(esp) = 0x10106ea9u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10106ea4u); RETCHK(0x10106ea9u, 0x10106ea4u); LOADALL;
  /* 10106ea9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106eaa:;
  /* 10106eaa mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 10106ead cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106eaf je 0x10106eb8 */ if (ZF_) goto L_10106eb8;
  /* 10106eb1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106eb2 call 0x101074a1 */ esp -= 4; M32(esp) = 0x10106eb7u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10106eb2u); RETCHK(0x10106eb7u, 0x10106eb2u); LOADALL;
  /* 10106eb7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106eb8:;
  /* 10106eb8 mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 10106ebb cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ebd je 0x10106ec6 */ if (ZF_) goto L_10106ec6;
  /* 10106ebf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106ec0 call 0x101074a1 */ esp -= 4; M32(esp) = 0x10106ec5u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10106ec0u); RETCHK(0x10106ec5u, 0x10106ec0u); LOADALL;
  /* 10106ec5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106ec6:;
  /* 10106ec6 mov eax, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 10106ec9 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ecb je 0x10106ed4 */ if (ZF_) goto L_10106ed4;
  /* 10106ecd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106ece call 0x101074a1 */ esp -= 4; M32(esp) = 0x10106ed3u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10106eceu); RETCHK(0x10106ed3u, 0x10106eceu); LOADALL;
  /* 10106ed3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106ed4:;
  /* 10106ed4 mov eax, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); eax = (u32)(M32(m_)); }
  /* 10106ed7 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ed9 je 0x10106ee2 */ if (ZF_) goto L_10106ee2;
  /* 10106edb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106edc call 0x101074a1 */ esp -= 4; M32(esp) = 0x10106ee1u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10106edcu); RETCHK(0x10106ee1u, 0x10106edcu); LOADALL;
  /* 10106ee1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106ee2:;
  /* 10106ee2 mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 10106ee5 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ee7 je 0x10106ef0 */ if (ZF_) goto L_10106ef0;
  /* 10106ee9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106eea call 0x101074a1 */ esp -= 4; M32(esp) = 0x10106eefu; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10106eeau); RETCHK(0x10106eefu, 0x10106eeau); LOADALL;
  /* 10106eef pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106ef0:;
  /* 10106ef0 mov eax, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); eax = (u32)(M32(m_)); }
  /* 10106ef3 cmp eax, 0x10110280 */ { u32 a_ = eax, b_ = 0x10110280u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ef8 je 0x10106f01 */ if (ZF_) goto L_10106f01;
  /* 10106efa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106efb call 0x101074a1 */ esp -= 4; M32(esp) = 0x10106f00u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10106efbu); RETCHK(0x10106f00u, 0x10106efbu); LOADALL;
  /* 10106f00 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106f01:;
  /* 10106f01 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 10106f03 call 0x101077cb */ esp -= 4; M32(esp) = 0x10106f08u; SAVEALL; F_101077cb(c); ABI_CHECK(0x101077cbu, 0x10106f03u); RETCHK(0x10106f08u, 0x10106f03u); LOADALL;
  /* 10106f08 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106f09 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 10106f0c mov eax, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); eax = (u32)(M32(m_)); }
  /* 10106f0f mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10106f12 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f14 je 0x10106f29 */ if (ZF_) goto L_10106f29;
  /* 10106f16 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10106f18 jne 0x10106f29 */ if (!ZF_) goto L_10106f29;
  /* 10106f1a cmp eax, dword ptr [0x10122188] */ { const u32 m_ = (u32)(0x10122188u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f20 je 0x10106f29 */ if (ZF_) goto L_10106f29;
  /* 10106f22 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106f23 call 0x101074a1 */ esp -= 4; M32(esp) = 0x10106f28u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10106f23u); RETCHK(0x10106f28u, 0x10106f23u); LOADALL;
  /* 10106f28 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106f29:;
  /* 10106f29 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106f2d call 0x10106fb5 */ esp -= 4; M32(esp) = 0x10106f32u; SAVEALL; F_10106fb5(c); ABI_CHECK(0x10106fb5u, 0x10106f2du); RETCHK(0x10106f32u, 0x10106f2du); LOADALL;
  /* 10106f32 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10106f34 call 0x101077cb */ esp -= 4; M32(esp) = 0x10106f39u; SAVEALL; F_101077cb(c); ABI_CHECK(0x101077cbu, 0x10106f34u); RETCHK(0x10106f39u, 0x10106f34u); LOADALL;
  /* 10106f39 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106f3a mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 10106f41 mov eax, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); eax = (u32)(M32(m_)); }
  /* 10106f44 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10106f47 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f49 je 0x10106f98 */ if (ZF_) goto L_10106f98;
  /* 10106f4b dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10106f4d cmp dword ptr [eax + 0x2c], edi */ { const u32 m_ = (u32)(eax + 0x2cu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f50 je 0x10106f57 */ if (ZF_) goto L_10106f57;
  /* 10106f52 mov ecx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 10106f55 dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10106f57:;
  /* 10106f57 cmp dword ptr [eax + 0x34], edi */ { const u32 m_ = (u32)(eax + 0x34u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f5a je 0x10106f61 */ if (ZF_) goto L_10106f61;
  /* 10106f5c mov ecx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (u32)(M32(m_)); }
  /* 10106f5f dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10106f61:;
  /* 10106f61 cmp dword ptr [eax + 0x30], edi */ { const u32 m_ = (u32)(eax + 0x30u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f64 je 0x10106f6b */ if (ZF_) goto L_10106f6b;
  /* 10106f66 mov ecx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ecx = (u32)(M32(m_)); }
  /* 10106f69 dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10106f6b:;
  /* 10106f6b cmp dword ptr [eax + 0x40], edi */ { const u32 m_ = (u32)(eax + 0x40u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f6e je 0x10106f75 */ if (ZF_) goto L_10106f75;
  /* 10106f70 mov ecx, dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); ecx = (u32)(M32(m_)); }
  /* 10106f73 dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10106f75:;
  /* 10106f75 mov ecx, dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 10106f78 dec dword ptr [ecx + 0xb4] */ { const u32 m_ = (u32)(ecx + 0xb4u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10106f7e cmp eax, dword ptr [0x101103fc] */ { const u32 m_ = (u32)(0x101103fcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f84 je 0x10106f98 */ if (ZF_) goto L_10106f98;
  /* 10106f86 cmp eax, 0x101103a8 */ { u32 a_ = eax, b_ = 0x101103a8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f8b je 0x10106f98 */ if (ZF_) goto L_10106f98;
  /* 10106f8d cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f8f jne 0x10106f98 */ if (!ZF_) goto L_10106f98;
  /* 10106f91 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106f92 call 0x10109d03 */ esp -= 4; M32(esp) = 0x10106f97u; SAVEALL; F_10109d03(c); ABI_CHECK(0x10109d03u, 0x10106f92u); RETCHK(0x10106f97u, 0x10106f92u); LOADALL;
  /* 10106f97 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106f98:;
  /* 10106f98 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106f9c call 0x10106fc1 */ esp -= 4; M32(esp) = 0x10106fa1u; SAVEALL; F_10106fc1(c); ABI_CHECK(0x10106fc1u, 0x10106f9cu); RETCHK(0x10106fa1u, 0x10106f9cu); LOADALL;
  /* 10106fa1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106fa2 call 0x101074a1 */ esp -= 4; M32(esp) = 0x10106fa7u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10106fa2u); RETCHK(0x10106fa7u, 0x10106fa2u); LOADALL;
  /* 10106fa7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106fa8:;
  /* 10106fa8 call 0x10107387 */ esp -= 4; M32(esp) = 0x10106fadu; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10106fa8u); RETCHK(0x10106fadu, 0x10106fa8u); LOADALL;
  /* 10106fad ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10106fb0(CPU *c) {
  NATIVE_HOOK(0x10106fb0u) REGS; LOADALL;
L_10106fb0:;
  /* 10106fb0 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10106fb2 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10106fb5 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 10106fb7 call 0x10107716 */ esp -= 4; M32(esp) = 0x10106fbcu; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x10106fb7u); RETCHK(0x10106fbcu, 0x10106fb7u); LOADALL;
  /* 10106fbc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106fbd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106fb5(CPU *c) {
  NATIVE_HOOK(0x10106fb5u) REGS; LOADALL;
L_10106fb5:;
  /* 10106fb5 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 10106fb7 call 0x10107716 */ esp -= 4; M32(esp) = 0x10106fbcu; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x10106fb7u); RETCHK(0x10106fbcu, 0x10106fb7u); LOADALL;
  /* 10106fbc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106fbd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106fbe(CPU *c) {
  NATIVE_HOOK(0x10106fbeu) REGS; LOADALL;
L_10106fbe:;
  /* 10106fbe mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10106fc1 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10106fc3 call 0x10107716 */ esp -= 4; M32(esp) = 0x10106fc8u; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x10106fc3u); RETCHK(0x10106fc8u, 0x10106fc3u); LOADALL;
  /* 10106fc8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106fc9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106fc1(CPU *c) {
  NATIVE_HOOK(0x10106fc1u) REGS; LOADALL;
L_10106fc1:;
  /* 10106fc1 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10106fc3 call 0x10107716 */ esp -= 4; M32(esp) = 0x10106fc8u; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x10106fc3u); RETCHK(0x10106fc8u, 0x10106fc3u); LOADALL;
  /* 10106fc8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106fc9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106fca(CPU *c) {
  NATIVE_HOOK(0x10106fcau) REGS; LOADALL;
L_10106fca:;
  /* 10106fca mov ecx, dword ptr [0x10110124] */ { const u32 m_ = (u32)(0x10110124u); ecx = (u32)(M32(m_)); }
  /* 10106fd0 cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106fd3 je 0x10106ff8 */ if (ZF_) goto L_10106ff8;
  /* 10106fd5 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10106fd9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106fdb jne 0x10106fe4 */ if (!ZF_) goto L_10106fe4;
  /* 10106fdd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10106fde call dword ptr [0x10120cc4] */ { const u32 m_ = (u32)(0x10120cc4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10106fe4u; SAVEALL; call_ind(c, t_); RETCHK(0x10106fe4u, 0x10106fdeu); LOADALL; }
L_10106fe4:;
  /* 10106fe4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106fe5 call 0x10106e83 */ esp -= 4; M32(esp) = 0x10106feau; SAVEALL; F_10106e83(c); ABI_CHECK(0x10106e83u, 0x10106fe5u); RETCHK(0x10106feau, 0x10106fe5u); LOADALL;
  /* 10106fea push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10106fec push dword ptr [0x10110124] */ { const u32 m_ = (u32)(0x10110124u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106ff2 call dword ptr [0x10120cc8] */ { const u32 m_ = (u32)(0x10120cc8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10106ff8u; SAVEALL; call_ind(c, t_); RETCHK(0x10106ff8u, 0x10106ff2u); LOADALL; }
L_10106ff8:;
  /* 10106ff8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106ff9(CPU *c) {
  NATIVE_HOOK(0x10106ff9u) REGS; LOADALL;
L_10106ff9:;
  /* 10106ff9 call 0x10107678 */ esp -= 4; M32(esp) = 0x10106ffeu; SAVEALL; F_10107678(c); ABI_CHECK(0x10107678u, 0x10106ff9u); RETCHK(0x10106ffeu, 0x10106ff9u); LOADALL;
  /* 10106ffe test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107000 jne 0x1010700a */ if (!ZF_) goto L_1010700a;
  /* 10107002 call 0x10106de2 */ esp -= 4; M32(esp) = 0x10107007u; SAVEALL; F_10106de2(c); ABI_CHECK(0x10106de2u, 0x10107002u); RETCHK(0x10107007u, 0x10107002u); LOADALL;
  /* 10107007 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107009 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010700a:;
  /* 1010700a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010700b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010700c push 0x1010d424 */ { u32 v_ = 0x1010d424u; esp -= 4; M32(esp) = v_; }
  /* 10107011 call dword ptr [0x1010d044] */ { const u32 m_ = (u32)(0x1010d044u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10107017u; SAVEALL; call_ind(c, t_); RETCHK(0x10107017u, 0x10107011u); LOADALL; }
  /* 10107017 mov edi, eax */ { edi = (u32)(eax); }
  /* 10107019 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010701b je 0x10107088 */ if (ZF_) goto L_10107088;
  /* 1010701d mov esi, dword ptr [0x1010d040] */ { const u32 m_ = (u32)(0x1010d040u); esi = (u32)(M32(m_)); }
  /* 10107023 push 0x1010d418 */ { u32 v_ = 0x1010d418u; esp -= 4; M32(esp) = v_; }
  /* 10107028 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107029 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x1010702bu; SAVEALL; call_ind(c, t_); RETCHK(0x1010702bu, 0x10107029u); LOADALL; }
  /* 1010702b push 0x1010d40c */ { u32 v_ = 0x1010d40cu; esp -= 4; M32(esp) = v_; }
  /* 10107030 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107031 mov dword ptr [0x10120cc0], eax */ { const u32 m_ = (u32)(0x10120cc0u); M32(m_) = (u32)(eax); }
  /* 10107036 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10107038u; SAVEALL; call_ind(c, t_); RETCHK(0x10107038u, 0x10107036u); LOADALL; }
  /* 10107038 push 0x1010d400 */ { u32 v_ = 0x1010d400u; esp -= 4; M32(esp) = v_; }
  /* 1010703d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010703e mov dword ptr [0x10120cc4], eax */ { const u32 m_ = (u32)(0x10120cc4u); M32(m_) = (u32)(eax); }
  /* 10107043 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10107045u; SAVEALL; call_ind(c, t_); RETCHK(0x10107045u, 0x10107043u); LOADALL; }
  /* 10107045 push 0x1010d3f8 */ { u32 v_ = 0x1010d3f8u; esp -= 4; M32(esp) = v_; }
  /* 1010704a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010704b mov dword ptr [0x10120cc8], eax */ { const u32 m_ = (u32)(0x10120cc8u); M32(m_) = (u32)(eax); }
  /* 10107050 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10107052u; SAVEALL; call_ind(c, t_); RETCHK(0x10107052u, 0x10107050u); LOADALL; }
  /* 10107052 cmp dword ptr [0x10120cc4], 0 */ { const u32 m_ = (u32)(0x10120cc4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107059 mov dword ptr [0x10120ccc], eax */ { const u32 m_ = (u32)(0x10120cccu); M32(m_) = (u32)(eax); }
  /* 1010705e jne 0x10107088 */ if (!ZF_) goto L_10107088;
  /* 10107060 mov eax, dword ptr [0x1010d03c] */ { const u32 m_ = (u32)(0x1010d03cu); eax = (u32)(M32(m_)); }
  /* 10107065 mov dword ptr [0x10120cc4], eax */ { const u32 m_ = (u32)(0x10120cc4u); M32(m_) = (u32)(eax); }
  /* 1010706a mov eax, dword ptr [0x1010d038] */ { const u32 m_ = (u32)(0x1010d038u); eax = (u32)(M32(m_)); }
  /* 1010706f mov dword ptr [0x10120cc8], eax */ { const u32 m_ = (u32)(0x10120cc8u); M32(m_) = (u32)(eax); }
  /* 10107074 mov eax, dword ptr [0x1010d034] */ { const u32 m_ = (u32)(0x1010d034u); eax = (u32)(M32(m_)); }
  /* 10107079 mov dword ptr [0x10120cc0], 0x10106dd9 */ { const u32 m_ = (u32)(0x10120cc0u); M32(m_) = (u32)(0x10106dd9u); }
  /* 10107083 mov dword ptr [0x10120ccc], eax */ { const u32 m_ = (u32)(0x10120cccu); M32(m_) = (u32)(eax); }
L_10107088:;
  /* 10107088 push 0x10106e83 */ { u32 v_ = 0x10106e83u; esp -= 4; M32(esp) = v_; }
  /* 1010708d call dword ptr [0x10120cc0] */ { const u32 m_ = (u32)(0x10120cc0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10107093u; SAVEALL; call_ind(c, t_); RETCHK(0x10107093u, 0x1010708du); LOADALL; }
  /* 10107093 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107096 mov dword ptr [0x10110124], eax */ { const u32 m_ = (u32)(0x10110124u); M32(m_) = (u32)(eax); }
  /* 1010709b je 0x101070de */ if (ZF_) goto L_101070de;
  /* 1010709d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1010709f push 0x8c */ { u32 v_ = 0x8cu; esp -= 4; M32(esp) = v_; }
  /* 101070a4 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101070a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101070a6 call 0x101085f3 */ esp -= 4; M32(esp) = 0x101070abu; SAVEALL; F_101085f3(c); ABI_CHECK(0x101085f3u, 0x101070a6u); RETCHK(0x101070abu, 0x101070a6u); LOADALL;
  /* 101070ab mov esi, eax */ { esi = (u32)(eax); }
  /* 101070ad test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101070af pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101070b0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101070b1 je 0x101070de */ if (ZF_) goto L_101070de;
  /* 101070b3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101070b4 push dword ptr [0x10110124] */ { const u32 m_ = (u32)(0x10110124u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101070ba call dword ptr [0x10120cc8] */ { const u32 m_ = (u32)(0x10120cc8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101070c0u; SAVEALL; call_ind(c, t_); RETCHK(0x101070c0u, 0x101070bau); LOADALL; }
  /* 101070c0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101070c2 je 0x101070de */ if (ZF_) goto L_101070de;
  /* 101070c4 mov dword ptr [esi + 0x54], 0x10110280 */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x10110280u); }
  /* 101070cb mov dword ptr [esi + 0x14], edi */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edi); }
  /* 101070ce call dword ptr [0x1010d018] */ { const u32 m_ = (u32)(0x1010d018u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101070d4u; SAVEALL; call_ind(c, t_); RETCHK(0x101070d4u, 0x101070ceu); LOADALL; }
  /* 101070d4 or dword ptr [esi + 4], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101070d8 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 101070da mov eax, edi */ { eax = (u32)(edi); }
  /* 101070dc jmp 0x101070e5 */ goto L_101070e5;
L_101070de:;
  /* 101070de call 0x10106de2 */ esp -= 4; M32(esp) = 0x101070e3u; SAVEALL; F_10106de2(c); ABI_CHECK(0x10106de2u, 0x101070deu); RETCHK(0x101070e3u, 0x101070deu); LOADALL;
  /* 101070e3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_101070e5:;
  /* 101070e5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101070e6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101070e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101070e8(CPU *c) {
  NATIVE_HOOK(0x101070e8u) REGS; LOADALL;
L_101070e8:;
  /* 101070e8 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 101070ea push 0x1010d438 */ { u32 v_ = 0x1010d438u; esp -= 4; M32(esp) = v_; }
  /* 101070ef call 0x1010734c */ esp -= 4; M32(esp) = 0x101070f4u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x101070efu); RETCHK(0x101070f4u, 0x101070efu); LOADALL;
  /* 101070f4 call 0x10106e12 */ esp -= 4; M32(esp) = 0x101070f9u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x101070f4u); RETCHK(0x101070f9u, 0x101070f4u); LOADALL;
  /* 101070f9 cmp dword ptr [eax + 0x6c], 0 */ { const u32 m_ = (u32)(eax + 0x6cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101070fd je 0x10107118 */ if (ZF_) goto L_10107118;
  /* 101070ff and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107103 call 0x10106e12 */ esp -= 4; M32(esp) = 0x10107108u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10107103u); RETCHK(0x10107108u, 0x10107103u); LOADALL;
  /* 10107108 call dword ptr [eax + 0x6c] */ { const u32 m_ = (u32)(eax + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010710bu; SAVEALL; call_ind(c, t_); RETCHK(0x1010710bu, 0x10107108u); LOADALL; }
  /* 1010710b jmp 0x10107114 */ goto L_10107114;
L_10107114:;
  /* 10107114 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10107118:;
  /* 10107118 jmp 0x1010a3b1 */ goto L_1010a3b1;
L_1010a3b1:;
  /* 1010a3b1 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 1010a3b3 call 0x10108fe0 */ esp -= 4; M32(esp) = 0x1010a3b8u; SAVEALL; F_10108fe0(c); ABI_CHECK(0x10108fe0u, 0x1010a3b3u); RETCHK(0x1010a3b8u, 0x1010a3b3u); LOADALL;
  /* 1010a3b8 push 0x16 */ { u32 v_ = 0x16u; esp -= 4; M32(esp) = v_; }
  /* 1010a3ba call 0x1010b90a */ esp -= 4; M32(esp) = 0x1010a3bfu; SAVEALL; F_1010b90a(c); ABI_CHECK(0x1010b90au, 0x1010a3bau); RETCHK(0x1010a3bfu, 0x1010a3bau); LOADALL;
  /* 1010a3bf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010a3c0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010a3c1 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 1010a3c3 call 0x10107bbc */ esp -= 4; M32(esp) = 0x1010a3c8u; SAVEALL; F_10107bbc(c); ABI_CHECK(0x10107bbcu, 0x1010a3c3u); RETCHK(0x1010a3c8u, 0x1010a3c3u); LOADALL;
  /* 1010a3c8 int3 */ TRAP(0x1010a3c8u, "int3");
}

void F_1010710d(CPU *c) {
  NATIVE_HOOK(0x1010710du) REGS; LOADALL;
L_1010710d:;
  /* 1010710d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010710f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107110 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107111(CPU *c) {
  NATIVE_HOOK(0x10107111u) REGS; LOADALL;
L_10107111:;
  /* 10107111 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10107114 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107118 jmp 0x1010a3b1 */ goto L_1010a3b1;
L_1010a3b1:;
  /* 1010a3b1 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 1010a3b3 call 0x10108fe0 */ esp -= 4; M32(esp) = 0x1010a3b8u; SAVEALL; F_10108fe0(c); ABI_CHECK(0x10108fe0u, 0x1010a3b3u); RETCHK(0x1010a3b8u, 0x1010a3b3u); LOADALL;
  /* 1010a3b8 push 0x16 */ { u32 v_ = 0x16u; esp -= 4; M32(esp) = v_; }
  /* 1010a3ba call 0x1010b90a */ esp -= 4; M32(esp) = 0x1010a3bfu; SAVEALL; F_1010b90a(c); ABI_CHECK(0x1010b90au, 0x1010a3bau); RETCHK(0x1010a3bfu, 0x1010a3bau); LOADALL;
  /* 1010a3bf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010a3c0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010a3c1 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 1010a3c3 call 0x10107bbc */ esp -= 4; M32(esp) = 0x1010a3c8u; SAVEALL; F_10107bbc(c); ABI_CHECK(0x10107bbcu, 0x1010a3c3u); RETCHK(0x1010a3c8u, 0x1010a3c3u); LOADALL;
  /* 1010a3c8 int3 */ TRAP(0x1010a3c8u, "int3");
}

void F_1010711d(CPU *c) {
  NATIVE_HOOK(0x1010711du) REGS; LOADALL;
L_1010711d:;
  /* 1010711d push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 1010711f push 0x1010d448 */ { u32 v_ = 0x1010d448u; esp -= 4; M32(esp) = v_; }
  /* 10107124 call 0x1010734c */ esp -= 4; M32(esp) = 0x10107129u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10107124u); RETCHK(0x10107129u, 0x10107124u); LOADALL;
  /* 10107129 mov eax, dword ptr [0x10110128] */ { const u32 m_ = (u32)(0x10110128u); eax = (u32)(M32(m_)); }
  /* 1010712e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107130 je 0x10107145 */ if (ZF_) goto L_10107145;
  /* 10107132 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107136 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10107138u; SAVEALL; call_ind(c, t_); RETCHK(0x10107138u, 0x10107136u); LOADALL; }
  /* 10107138 jmp 0x10107141 */ goto L_10107141;
L_10107141:;
  /* 10107141 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10107145:;
  /* 10107145 jmp 0x101070e8 */ SAVEALL; F_101070e8(c); return;
}

void F_1010713a(CPU *c) {
  NATIVE_HOOK(0x1010713au) REGS; LOADALL;
L_1010713a:;
  /* 1010713a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010713c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010713d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010713e(CPU *c) {
  NATIVE_HOOK(0x1010713eu) REGS; LOADALL;
L_1010713e:;
  /* 1010713e mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10107141 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107145 jmp 0x101070e8 */ SAVEALL; F_101070e8(c); return;
}

void F_10107150(CPU *c) {
  NATIVE_HOOK(0x10107150u) REGS; LOADALL;
L_10107150:;
  /* 10107150 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10107151 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10107153 sub esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10107156 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107157 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10107158 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1010715b add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010715e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10107161 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107164 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10107165 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107168 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1010716b mov ebp, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebp = (u32)(M32(m_)); }
  /* 1010716e call 0x101056bd */ esp -= 4; M32(esp) = 0x10107173u; SAVEALL; F_101056bd(c); ABI_CHECK(0x101056bdu, 0x1010716eu); RETCHK(0x10107173u, 0x1010716eu); LOADALL;
  /* 10107173 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107174 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107175 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10107177u; SAVEALL; call_ind(c, t_); RETCHK(0x10107177u, 0x10107175u); LOADALL; }
  /* 10107177 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107178 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10107179 mov ebx, ebp */ { ebx = (u32)(ebp); }
  /* 1010717b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010717c mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1010717f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10107180 mov ebp, ebx */ { ebp = (u32)(ebx); }
  /* 10107182 cmp ecx, 0x100 */ { u32 a_ = ecx, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107188 jne 0x1010718f */ if (!ZF_) goto L_1010718f;
  /* 1010718a mov ecx, 2 */ { ecx = (u32)(0x2u); }
L_1010718f:;
  /* 1010718f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10107190 call 0x101056bd */ esp -= 4; M32(esp) = 0x10107195u; SAVEALL; F_101056bd(c); ABI_CHECK(0x101056bdu, 0x10107190u); RETCHK(0x10107195u, 0x10107190u); LOADALL;
  /* 10107195 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10107196 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107197 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10107198 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10107199 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_1010719c(CPU *c) {
  NATIVE_HOOK(0x1010719cu) REGS; LOADALL;
L_1010719c:;
  /* 1010719c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1010719d mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1010719f sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101071a2 mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 101071a7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101071a9 je 0x101071b2 */ if (ZF_) goto L_101071b2;
  /* 101071ab cmp eax, 0xbb40e64e */ { u32 a_ = eax, b_ = 0xbb40e64eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101071b0 jne 0x10107200 */ if (!ZF_) goto L_10107200;
L_101071b2:;
  /* 101071b2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101071b3 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 101071b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101071b7 call dword ptr [0x1010d054] */ { const u32 m_ = (u32)(0x1010d054u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101071bdu; SAVEALL; call_ind(c, t_); RETCHK(0x101071bdu, 0x101071b7u); LOADALL; }
  /* 101071bd mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 101071c0 xor esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 101071c3 call dword ptr [0x1010d050] */ { const u32 m_ = (u32)(0x1010d050u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101071c9u; SAVEALL; call_ind(c, t_); RETCHK(0x101071c9u, 0x101071c3u); LOADALL; }
  /* 101071c9 xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 101071cb call dword ptr [0x1010d018] */ { const u32 m_ = (u32)(0x1010d018u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101071d1u; SAVEALL; call_ind(c, t_); RETCHK(0x101071d1u, 0x101071cbu); LOADALL; }
  /* 101071d1 xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 101071d3 call dword ptr [0x1010d04c] */ { const u32 m_ = (u32)(0x1010d04cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101071d9u; SAVEALL; call_ind(c, t_); RETCHK(0x101071d9u, 0x101071d3u); LOADALL; }
  /* 101071d9 xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 101071db lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 101071de push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101071df call dword ptr [0x1010d048] */ { const u32 m_ = (u32)(0x1010d048u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101071e5u; SAVEALL; call_ind(c, t_); RETCHK(0x101071e5u, 0x101071dfu); LOADALL; }
  /* 101071e5 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101071e8 xor eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101071eb xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 101071ed mov dword ptr [0x101100f0], esi */ { const u32 m_ = (u32)(0x101100f0u); M32(m_) = (u32)(esi); }
  /* 101071f3 jne 0x101071ff */ if (!ZF_) goto L_101071ff;
  /* 101071f5 mov dword ptr [0x101100f0], 0xbb40e64e */ { const u32 m_ = (u32)(0x101100f0u); M32(m_) = (u32)(0xbb40e64eu); }
L_101071ff:;
  /* 101071ff pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10107200:;
  /* 10107200 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10107201 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107202(CPU *c) {
  NATIVE_HOOK(0x10107202u) REGS; LOADALL;
L_10107202:;
  /* 10107202 push 0x118 */ { u32 v_ = 0x118u; esp -= 4; M32(esp) = v_; }
  /* 10107207 push 0x1010d640 */ { u32 v_ = 0x1010d640u; esp -= 4; M32(esp) = v_; }
  /* 1010720c call 0x1010734c */ esp -= 4; M32(esp) = 0x10107211u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x1010720cu); RETCHK(0x10107211u, 0x1010720cu); LOADALL;
  /* 10107211 mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 10107216 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10107219 mov eax, dword ptr [0x10120cd0] */ { const u32 m_ = (u32)(0x10120cd0u); eax = (u32)(M32(m_)); }
  /* 1010721e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10107220 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107222 je 0x10107243 */ if (ZF_) goto L_10107243;
  /* 10107224 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10107227 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010722a push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010722d call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1010722fu; SAVEALL; call_ind(c, t_); RETCHK(0x1010722fu, 0x1010722du); LOADALL; }
  /* 1010722f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107230 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107231 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107235 jmp 0x10107342 */ goto L_10107342;
L_10107243:;
  /* 10107243 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107246 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107247 je 0x1010725f */ if (ZF_) goto L_1010725f;
  /* 10107249 mov edi, 0x1010d61c */ { edi = (u32)(0x1010d61cu); }
  /* 1010724e mov dword ptr [ebp - 0x128], 0x1010d568 */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M32(m_) = (u32)(0x1010d568u); }
  /* 10107258 mov esi, 0xd4 */ { esi = (u32)(0xd4u); }
  /* 1010725d jmp 0x10107273 */ goto L_10107273;
L_1010725f:;
  /* 1010725f mov edi, 0x1010d548 */ { edi = (u32)(0x1010d548u); }
  /* 10107264 mov dword ptr [ebp - 0x128], 0x1010d4a8 */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M32(m_) = (u32)(0x1010d4a8u); }
  /* 1010726e mov esi, 0xb9 */ { esi = (u32)(0xb9u); }
L_10107273:;
  /* 10107273 mov byte ptr [ebp - 0x20], cl */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10107276 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 1010727b lea eax, [ebp - 0x124] */ eax = (u32)((u32)(ebp + 0xfffffedcu));
  /* 10107281 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107282 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10107283 call dword ptr [0x1010d058] */ { const u32 m_ = (u32)(0x1010d058u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10107289u; SAVEALL; call_ind(c, t_); RETCHK(0x10107289u, 0x10107283u); LOADALL; }
  /* 10107289 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010728b jne 0x101072a0 */ if (!ZF_) goto L_101072a0;
  /* 1010728d push 0x1010d490 */ { u32 v_ = 0x1010d490u; esp -= 4; M32(esp) = v_; }
  /* 10107292 lea eax, [ebp - 0x124] */ eax = (u32)((u32)(ebp + 0xfffffedcu));
  /* 10107298 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107299 call 0x10107580 */ esp -= 4; M32(esp) = 0x1010729eu; SAVEALL; F_10107580(c); ABI_CHECK(0x10107580u, 0x10107299u); RETCHK(0x1010729eu, 0x10107299u); LOADALL;
  /* 1010729e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010729f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101072a0:;
  /* 101072a0 lea ebx, [ebp - 0x124] */ ebx = (u32)((u32)(ebp + 0xfffffedcu));
  /* 101072a6 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 101072a8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101072a9 call 0x10106140 */ esp -= 4; M32(esp) = 0x101072aeu; SAVEALL; F_10106140(c); ABI_CHECK(0x10106140u, 0x101072a9u); RETCHK(0x101072aeu, 0x101072a9u); LOADALL;
  /* 101072ae pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101072af add eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101072b2 cmp eax, 0x3c */ { u32 a_ = eax, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101072b5 jbe 0x101072dc */ if ((CF_|ZF_)) goto L_101072dc;
  /* 101072b7 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 101072b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101072ba call 0x10106140 */ esp -= 4; M32(esp) = 0x101072bfu; SAVEALL; F_10106140(c); ABI_CHECK(0x10106140u, 0x101072bau); RETCHK(0x101072bfu, 0x101072bau); LOADALL;
  /* 101072bf mov ebx, eax */ { ebx = (u32)(eax); }
  /* 101072c1 lea eax, [ebp - 0x124] */ eax = (u32)((u32)(ebp + 0xfffffedcu));
  /* 101072c7 sub eax, 0x31 */ { u32 a_ = eax, b_ = 0x31u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101072ca add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 101072cc push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 101072ce push 0x1010d48c */ { u32 v_ = 0x1010d48cu; esp -= 4; M32(esp) = v_; }
  /* 101072d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101072d4 call 0x101050f0 */ esp -= 4; M32(esp) = 0x101072d9u; SAVEALL; F_101050f0(c); ABI_CHECK(0x101050f0u, 0x101072d4u); RETCHK(0x101072d9u, 0x101072d4u); LOADALL;
  /* 101072d9 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_101072dc:;
  /* 101072dc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101072dd call 0x10106140 */ esp -= 4; M32(esp) = 0x101072e2u; SAVEALL; F_10106140(c); ABI_CHECK(0x10106140u, 0x101072ddu); RETCHK(0x101072e2u, 0x101072ddu); LOADALL;
  /* 101072e2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101072e3 lea eax, [eax + esi + 0xc] */ eax = (u32)((u32)(eax + esi + 0xcu));
  /* 101072e7 add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101072ea and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101072ed call 0x10105720 */ esp -= 4; M32(esp) = 0x101072f2u; SAVEALL; F_10105720(c); ABI_CHECK(0x10105720u, 0x101072edu); RETCHK(0x101072f2u, 0x101072edu); LOADALL;
  /* 101072f2 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 101072f5 mov esi, esp */ { esi = (u32)(esp); }
  /* 101072f7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101072f8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101072f9 call 0x10107580 */ esp -= 4; M32(esp) = 0x101072feu; SAVEALL; F_10107580(c); ABI_CHECK(0x10107580u, 0x101072f9u); RETCHK(0x101072feu, 0x101072f9u); LOADALL;
  /* 101072fe mov edi, 0x1010d488 */ { edi = (u32)(0x1010d488u); }
  /* 10107303 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107304 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107305 call 0x10107590 */ esp -= 4; M32(esp) = 0x1010730au; SAVEALL; F_10107590(c); ABI_CHECK(0x10107590u, 0x10107305u); RETCHK(0x1010730au, 0x10107305u); LOADALL;
  /* 1010730a push 0x1010d47c */ { u32 v_ = 0x1010d47cu; esp -= 4; M32(esp) = v_; }
  /* 1010730f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107310 call 0x10107590 */ esp -= 4; M32(esp) = 0x10107315u; SAVEALL; F_10107590(c); ABI_CHECK(0x10107590u, 0x10107310u); RETCHK(0x10107315u, 0x10107310u); LOADALL;
  /* 10107315 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107316 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107317 call 0x10107590 */ esp -= 4; M32(esp) = 0x1010731cu; SAVEALL; F_10107590(c); ABI_CHECK(0x10107590u, 0x10107317u); RETCHK(0x1010731cu, 0x10107317u); LOADALL;
  /* 1010731c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010731d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010731e call 0x10107590 */ esp -= 4; M32(esp) = 0x10107323u; SAVEALL; F_10107590(c); ABI_CHECK(0x10107590u, 0x1010731eu); RETCHK(0x10107323u, 0x1010731eu); LOADALL;
  /* 10107323 push dword ptr [ebp - 0x128] */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107329 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010732a call 0x10107590 */ esp -= 4; M32(esp) = 0x1010732fu; SAVEALL; F_10107590(c); ABI_CHECK(0x10107590u, 0x1010732au); RETCHK(0x1010732fu, 0x1010732au); LOADALL;
  /* 1010732f push 0x12010 */ { u32 v_ = 0x12010u; esp -= 4; M32(esp) = v_; }
  /* 10107334 push 0x1010d454 */ { u32 v_ = 0x1010d454u; esp -= 4; M32(esp) = v_; }
  /* 10107339 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010733a call 0x1010a3c9 */ esp -= 4; M32(esp) = 0x1010733fu; SAVEALL; F_1010a3c9(c); ABI_CHECK(0x1010a3c9u, 0x1010733au); RETCHK(0x1010733fu, 0x1010733au); LOADALL;
  /* 1010733f add esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10107342:;
  /* 10107342 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10107344 call 0x10107bbc */ esp -= 4; M32(esp) = 0x10107349u; SAVEALL; F_10107bbc(c); ABI_CHECK(0x10107bbcu, 0x10107344u); RETCHK(0x10107349u, 0x10107344u); LOADALL;
  /* 10107349 int3 */ TRAP(0x10107349u, "int3");
}

void F_1010723a(CPU *c) {
  NATIVE_HOOK(0x1010723au) REGS; LOADALL;
L_1010723a:;
  /* 1010723a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010723c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010723d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010723e(CPU *c) {
  NATIVE_HOOK(0x1010723eu) REGS; LOADALL;
  goto L_1010723e;
L_10107231:;
  /* 10107231 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107235 jmp 0x10107342 */ goto L_10107342;
L_1010723e:;
  /* 1010723e mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10107241 jmp 0x10107231 */ goto L_10107231;
L_10107342:;
  /* 10107342 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10107344 call 0x10107bbc */ esp -= 4; M32(esp) = 0x10107349u; SAVEALL; F_10107bbc(c); ABI_CHECK(0x10107bbcu, 0x10107344u); RETCHK(0x10107349u, 0x10107344u); LOADALL;
  /* 10107349 int3 */ TRAP(0x10107349u, "int3");
}

void F_1010734c(CPU *c) {
  NATIVE_HOOK(0x1010734cu) REGS; LOADALL;
L_1010734c:;
  /* 1010734c push 0x101073a0 */ { u32 v_ = 0x101073a0u; esp -= 4; M32(esp) = v_; }
  /* 10107351 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10107357 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107358 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 1010735c mov dword ptr [esp + 0x10], ebp */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebp); }
  /* 10107360 lea ebp, [esp + 0x10] */ ebp = (u32)((u32)(esp + 0x10u));
  /* 10107364 sub esp, eax */ { u32 a_ = esp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10107366 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107367 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107368 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107369 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1010736c mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 1010736f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107370 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10107373 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 1010737a mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 1010737d lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 10107380 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 10107386 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107387(CPU *c) {
  NATIVE_HOOK(0x10107387u) REGS; LOADALL;
L_10107387:;
  /* 10107387 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 1010738a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10107391 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107392 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107393 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10107394 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10107395 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10107396 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10107397 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101073a0(CPU *c) {
  NATIVE_HOOK(0x101073a0u) REGS; LOADALL;
L_101073a0:;
  /* 101073a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101073a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 101073a3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101073a6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101073a7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101073a8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101073a9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101073aa cld */ c->df = 0;
  /* 101073ab mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 101073ae mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101073b1 test dword ptr [eax + 4], 6 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101073b8 jne 0x10107469 */ if (!ZF_) goto L_10107469;
  /* 101073be mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 101073c1 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 101073c4 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 101073c7 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 101073ca mov dword ptr [ebx - 4], eax */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 101073cd mov esi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); esi = (u32)(M32(m_)); }
  /* 101073d0 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 101073d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101073d4 call 0x1010a4c2 */ esp -= 4; M32(esp) = 0x101073d9u; SAVEALL; F_1010a4c2(c); ABI_CHECK(0x1010a4c2u, 0x101073d4u); RETCHK(0x101073d9u, 0x101073d4u); LOADALL;
  /* 101073d9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101073dc or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101073de je 0x1010745b */ if (ZF_) goto L_1010745b;
L_101073e0:;
  /* 101073e0 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101073e3 je 0x10107462 */ if (ZF_) goto L_10107462;
  /* 101073e5 lea ecx, [esi + esi*2] */ ecx = (u32)((u32)(esi + esi * 2u));
  /* 101073e8 mov eax, dword ptr [edi + ecx*4 + 4] */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 101073ec or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101073ee je 0x10107449 */ if (ZF_) goto L_10107449;
  /* 101073f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101073f1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101073f2 lea ebp, [ebx + 0x10] */ ebp = (u32)((u32)(ebx + 0x10u));
  /* 101073f5 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 101073f7 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 101073f9 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 101073fb xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 101073fd xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 101073ff call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10107401u; SAVEALL; call_ind(c, t_); RETCHK(0x10107401u, 0x101073ffu); LOADALL; }
  /* 10107401 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10107402 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10107403 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10107406 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107408 je 0x10107449 */ if (ZF_) goto L_10107449;
  /* 1010740a js 0x10107454 */ if (SF_) goto L_10107454;
  /* 1010740c mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 1010740f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107410 call 0x101055f0 */ esp -= 4; M32(esp) = 0x10107415u; SAVEALL; F_101055f0(c); ABI_CHECK(0x101055f0u, 0x10107410u); RETCHK(0x10107415u, 0x10107410u); LOADALL;
  /* 10107415 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10107418 lea ebp, [ebx + 0x10] */ ebp = (u32)((u32)(ebx + 0x10u));
  /* 1010741b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010741c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1010741d call 0x10105632 */ esp -= 4; M32(esp) = 0x10107422u; SAVEALL; F_10105632(c); ABI_CHECK(0x10105632u, 0x1010741du); RETCHK(0x10107422u, 0x1010741du); LOADALL;
  /* 10107422 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10107425 lea ecx, [esi + esi*2] */ ecx = (u32)((u32)(esi + esi * 2u));
  /* 10107428 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1010742a mov eax, dword ptr [edi + ecx*4 + 8] */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010742e call 0x101056c6 */ esp -= 4; M32(esp) = 0x10107433u; SAVEALL; F_101056c6(c); ABI_CHECK(0x101056c6u, 0x1010742eu); RETCHK(0x10107433u, 0x1010742eu); LOADALL;
  /* 10107433 mov eax, dword ptr [edi + ecx*4] */ { const u32 m_ = (u32)(edi + ecx * 4u); eax = (u32)(M32(m_)); }
  /* 10107436 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 10107439 mov eax, dword ptr [edi + ecx*4 + 8] */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010743d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1010743f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10107441 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10107443 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10107445 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10107447 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10107449u; SAVEALL; call_ind(c, t_); RETCHK(0x10107449u, 0x10107447u); LOADALL; }
L_10107449:;
  /* 10107449 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 1010744c lea ecx, [esi + esi*2] */ ecx = (u32)((u32)(esi + esi * 2u));
  /* 1010744f mov esi, dword ptr [edi + ecx*4] */ { const u32 m_ = (u32)(edi + ecx * 4u); esi = (u32)(M32(m_)); }
  /* 10107452 jmp 0x101073e0 */ goto L_101073e0;
L_10107454:;
  /* 10107454 mov eax, 0 */ { eax = (u32)(0x0u); }
  /* 10107459 jmp 0x1010747e */ goto L_1010747e;
L_1010745b:;
  /* 1010745b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010745e or dword ptr [eax + 4], 8 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10107462:;
  /* 10107462 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 10107467 jmp 0x1010747e */ goto L_1010747e;
L_10107469:;
  /* 10107469 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1010746a lea ebp, [ebx + 0x10] */ ebp = (u32)((u32)(ebx + 0x10u));
  /* 1010746d push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 1010746f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107470 call 0x10105632 */ esp -= 4; M32(esp) = 0x10107475u; SAVEALL; F_10105632(c); ABI_CHECK(0x10105632u, 0x10107470u); RETCHK(0x10107475u, 0x10107470u); LOADALL;
  /* 10107475 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10107478 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10107479 mov eax, 1 */ { eax = (u32)(0x1u); }
L_1010747e:;
  /* 1010747e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010747f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107480 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10107481 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10107482 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10107484 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10107485 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101074a1(CPU *c) {
  NATIVE_HOOK(0x101074a1u) REGS; LOADALL;
L_101074a1:;
  /* 101074a1 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 101074a3 push 0x1010d650 */ { u32 v_ = 0x1010d650u; esp -= 4; M32(esp) = v_; }
  /* 101074a8 call 0x1010734c */ esp -= 4; M32(esp) = 0x101074adu; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x101074a8u); RETCHK(0x101074adu, 0x101074a8u); LOADALL;
  /* 101074ad mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 101074b0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101074b2 je 0x1010750c */ if (ZF_) goto L_1010750c;
  /* 101074b4 cmp dword ptr [0x101223e0], 3 */ { const u32 m_ = (u32)(0x101223e0u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101074bb jne 0x101074fd */ if (!ZF_) goto L_101074fd;
  /* 101074bd push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 101074bf call 0x101077cb */ esp -= 4; M32(esp) = 0x101074c4u; SAVEALL; F_101077cb(c); ABI_CHECK(0x101077cbu, 0x101074bfu); RETCHK(0x101074c4u, 0x101074bfu); LOADALL;
  /* 101074c4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101074c5 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101074c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101074ca call 0x101091d8 */ esp -= 4; M32(esp) = 0x101074cfu; SAVEALL; F_101091d8(c); ABI_CHECK(0x101091d8u, 0x101074cau); RETCHK(0x101074cfu, 0x101074cau); LOADALL;
  /* 101074cf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101074d0 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 101074d3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101074d5 je 0x101074e0 */ if (ZF_) goto L_101074e0;
  /* 101074d7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101074d8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101074d9 call 0x10109203 */ esp -= 4; M32(esp) = 0x101074deu; SAVEALL; F_10109203(c); ABI_CHECK(0x10109203u, 0x101074d9u); RETCHK(0x101074deu, 0x101074d9u); LOADALL;
  /* 101074de pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101074df pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101074e0:;
  /* 101074e0 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101074e4 call 0x101074f4 */ esp -= 4; M32(esp) = 0x101074e9u; SAVEALL; F_101074f4(c); ABI_CHECK(0x101074f4u, 0x101074e4u); RETCHK(0x101074e9u, 0x101074e4u); LOADALL;
  /* 101074e9 cmp dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101074ed jne 0x1010750c */ if (!ZF_) goto L_1010750c;
  /* 101074ef push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101074f2 jmp 0x101074fe */ goto L_101074fe;
L_101074fd:;
  /* 101074fd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_101074fe:;
  /* 101074fe push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10107500 push dword ptr [0x101223dc] */ { const u32 m_ = (u32)(0x101223dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107506 call dword ptr [0x1010d05c] */ { const u32 m_ = (u32)(0x1010d05cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010750cu; SAVEALL; call_ind(c, t_); RETCHK(0x1010750cu, 0x10107506u); LOADALL; }
L_1010750c:;
  /* 1010750c call 0x10107387 */ esp -= 4; M32(esp) = 0x10107511u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x1010750cu); RETCHK(0x10107511u, 0x1010750cu); LOADALL;
  /* 10107511 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101074f4(CPU *c) {
  NATIVE_HOOK(0x101074f4u) REGS; LOADALL;
L_101074f4:;
  /* 101074f4 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 101074f6 call 0x10107716 */ esp -= 4; M32(esp) = 0x101074fbu; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x101074f6u); RETCHK(0x101074fbu, 0x101074f6u); LOADALL;
  /* 101074fb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101074fc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107512(CPU *c) {
  NATIVE_HOOK(0x10107512u) REGS; LOADALL;
L_10107512:;
  /* 10107512 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107513 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10107517 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10107519 cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010751f jne 0x1010753d */ if (!ZF_) goto L_1010753d;
  /* 10107521 cmp dword ptr [eax + 0x10], 3 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107525 jne 0x1010753d */ if (!ZF_) goto L_1010753d;
  /* 10107527 mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 1010752a cmp eax, 0x19930520 */ { u32 a_ = eax, b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010752f je 0x10107538 */ if (ZF_) goto L_10107538;
  /* 10107531 cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107536 jne 0x1010753d */ if (!ZF_) goto L_1010753d;
L_10107538:;
  /* 10107538 call 0x101070e8 */ esp -= 4; M32(esp) = 0x1010753du; SAVEALL; F_101070e8(c); ABI_CHECK(0x101070e8u, 0x10107538u); RETCHK(0x1010753du, 0x10107538u); LOADALL;
L_1010753d:;
  /* 1010753d mov eax, dword ptr [0x10120cd4] */ { const u32 m_ = (u32)(0x10120cd4u); eax = (u32)(M32(m_)); }
  /* 10107542 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107544 je 0x1010755a */ if (ZF_) goto L_1010755a;
  /* 10107546 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107547 call 0x10109ceb */ esp -= 4; M32(esp) = 0x1010754cu; SAVEALL; F_10109ceb(c); ABI_CHECK(0x10109cebu, 0x10107547u); RETCHK(0x1010754cu, 0x10107547u); LOADALL;
  /* 1010754c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010754e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010754f je 0x1010755a */ if (ZF_) goto L_1010755a;
  /* 10107551 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107552 call dword ptr [0x10120cd4] */ { const u32 m_ = (u32)(0x10120cd4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10107558u; SAVEALL; call_ind(c, t_); RETCHK(0x10107558u, 0x10107552u); LOADALL; }
  /* 10107558 jmp 0x1010755c */ goto L_1010755c;
L_1010755a:;
  /* 1010755a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_1010755c:;
  /* 1010755c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010755d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10107560(CPU *c) {
  NATIVE_HOOK(0x10107560u) REGS; LOADALL;
L_10107560:;
  /* 10107560 push 0x10107512 */ { u32 v_ = 0x10107512u; esp -= 4; M32(esp) = v_; }
  /* 10107565 call dword ptr [0x1010d060] */ { const u32 m_ = (u32)(0x1010d060u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010756bu; SAVEALL; call_ind(c, t_); RETCHK(0x1010756bu, 0x10107565u); LOADALL; }
  /* 1010756b mov dword ptr [0x10120cd4], eax */ { const u32 m_ = (u32)(0x10120cd4u); M32(m_) = (u32)(eax); }
  /* 10107570 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107572 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107573(CPU *c) {
  NATIVE_HOOK(0x10107573u) REGS; LOADALL;
L_10107573:;
  /* 10107573 push dword ptr [0x10120cd4] */ { const u32 m_ = (u32)(0x10120cd4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107579 call dword ptr [0x1010d060] */ { const u32 m_ = (u32)(0x1010d060u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010757fu; SAVEALL; call_ind(c, t_); RETCHK(0x1010757fu, 0x10107579u); LOADALL; }
  /* 1010757f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107580(CPU *c) {
  NATIVE_HOOK(0x10107580u) REGS; LOADALL;
L_10107580:;
  /* 10107580 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107581 mov edi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10107585 jmp 0x101075f5 */ goto L_101075f5;
L_101075f5:;
  /* 101075f5 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 101075f9 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101075ff je 0x1010761e */ if (ZF_) goto L_1010761e;
L_10107601:;
  /* 10107601 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10107603 add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10107606 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10107608 je 0x10107670 */ if (ZF_) goto L_10107670;
  /* 1010760a mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 1010760c add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010760f test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107615 jne 0x10107601 */ if (!ZF_) goto L_10107601;
  /* 10107617 jmp 0x1010761e */ goto L_1010761e;
L_10107619:;
  /* 10107619 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 1010761b add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_1010761e:;
  /* 1010761e mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 10107623 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10107625 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10107627 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010762a xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010762c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 1010762e add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10107631 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107636 je 0x10107619 */ if (ZF_) goto L_10107619;
  /* 10107638 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010763a je 0x10107670 */ if (ZF_) goto L_10107670;
  /* 1010763c test dh, dh */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = ((edx >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010763e je 0x10107667 */ if (ZF_) goto L_10107667;
  /* 10107640 test edx, 0xff0000 */ { u32 a_ = edx, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107646 je 0x1010765a */ if (ZF_) goto L_1010765a;
  /* 10107648 test edx, 0xff000000 */ { u32 a_ = edx, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010764e je 0x10107652 */ if (ZF_) goto L_10107652;
  /* 10107650 jmp 0x10107619 */ goto L_10107619;
L_10107652:;
  /* 10107652 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10107654 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107658 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107659 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010765a:;
  /* 1010765a mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 1010765d mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107661 mov byte ptr [edi + 2], 0 */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)(0x0u); }
  /* 10107665 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107666 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10107667:;
  /* 10107667 mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 1010766a mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010766e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010766f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10107670:;
  /* 10107670 mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10107672 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107676 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107677 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107590(CPU *c) {
  NATIVE_HOOK(0x10107590u) REGS; LOADALL;
L_10107590:;
  /* 10107590 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10107594 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107595 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010759b je 0x101075b0 */ if (ZF_) goto L_101075b0;
L_1010759d:;
  /* 1010759d mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010759f add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101075a2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101075a4 je 0x101075e3 */ if (ZF_) goto L_101075e3;
  /* 101075a6 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101075ac jne 0x1010759d */ if (!ZF_) goto L_1010759d;
  /* 101075ae mov edi, edi */ { edi = (u32)(edi); }
L_101075b0:;
  /* 101075b0 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 101075b2 mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 101075b7 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 101075b9 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101075bc xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101075be add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101075c1 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101075c6 je 0x101075b0 */ if (ZF_) goto L_101075b0;
  /* 101075c8 mov eax, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101075cb test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101075cd je 0x101075f2 */ if (ZF_) goto L_101075f2;
  /* 101075cf test ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101075d1 je 0x101075ed */ if (ZF_) goto L_101075ed;
  /* 101075d3 test eax, 0xff0000 */ { u32 a_ = eax, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101075d8 je 0x101075e8 */ if (ZF_) goto L_101075e8;
  /* 101075da test eax, 0xff000000 */ { u32 a_ = eax, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101075df je 0x101075e3 */ if (ZF_) goto L_101075e3;
  /* 101075e1 jmp 0x101075b0 */ goto L_101075b0;
L_101075e3:;
  /* 101075e3 lea edi, [ecx - 1] */ edi = (u32)((u32)(ecx + 0xffffffffu));
  /* 101075e6 jmp 0x101075f5 */ goto L_101075f5;
L_101075e8:;
  /* 101075e8 lea edi, [ecx - 2] */ edi = (u32)((u32)(ecx + 0xfffffffeu));
  /* 101075eb jmp 0x101075f5 */ goto L_101075f5;
L_101075ed:;
  /* 101075ed lea edi, [ecx - 3] */ edi = (u32)((u32)(ecx + 0xfffffffdu));
  /* 101075f0 jmp 0x101075f5 */ goto L_101075f5;
L_101075f2:;
  /* 101075f2 lea edi, [ecx - 4] */ edi = (u32)((u32)(ecx + 0xfffffffcu));
L_101075f5:;
  /* 101075f5 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 101075f9 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101075ff je 0x1010761e */ if (ZF_) goto L_1010761e;
L_10107601:;
  /* 10107601 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10107603 add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10107606 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10107608 je 0x10107670 */ if (ZF_) goto L_10107670;
  /* 1010760a mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 1010760c add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010760f test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107615 jne 0x10107601 */ if (!ZF_) goto L_10107601;
  /* 10107617 jmp 0x1010761e */ goto L_1010761e;
L_10107619:;
  /* 10107619 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 1010761b add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_1010761e:;
  /* 1010761e mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 10107623 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10107625 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10107627 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010762a xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010762c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 1010762e add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10107631 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107636 je 0x10107619 */ if (ZF_) goto L_10107619;
  /* 10107638 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010763a je 0x10107670 */ if (ZF_) goto L_10107670;
  /* 1010763c test dh, dh */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = ((edx >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010763e je 0x10107667 */ if (ZF_) goto L_10107667;
  /* 10107640 test edx, 0xff0000 */ { u32 a_ = edx, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107646 je 0x1010765a */ if (ZF_) goto L_1010765a;
  /* 10107648 test edx, 0xff000000 */ { u32 a_ = edx, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010764e je 0x10107652 */ if (ZF_) goto L_10107652;
  /* 10107650 jmp 0x10107619 */ goto L_10107619;
L_10107652:;
  /* 10107652 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10107654 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107658 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107659 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010765a:;
  /* 1010765a mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 1010765d mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107661 mov byte ptr [edi + 2], 0 */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)(0x0u); }
  /* 10107665 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107666 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10107667:;
  /* 10107667 mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 1010766a mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010766e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010766f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10107670:;
  /* 10107670 mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10107672 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107676 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107677 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107678(CPU *c) {
  NATIVE_HOOK(0x10107678u) REGS; LOADALL;
L_10107678:;
  /* 10107678 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107679 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010767a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1010767c mov edi, 0x10120cd8 */ { edi = (u32)(0x10120cd8u); }
L_10107681:;
  /* 10107681 cmp dword ptr [esi*8 + 0x10110134], 1 */ { const u32 m_ = (u32)(esi * 8u + 0x10110134u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107689 jne 0x101076a9 */ if (!ZF_) goto L_101076a9;
  /* 1010768b lea eax, [esi*8 + 0x10110130] */ eax = (u32)((u32)(esi * 8u + 0x10110130u));
  /* 10107692 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 10107694 push 0xfa0 */ { u32 v_ = 0xfa0u; esp -= 4; M32(esp) = v_; }
  /* 10107699 push dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010769b add edi, 0x18 */ { u32 a_ = edi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010769e call 0x1010a6fb */ esp -= 4; M32(esp) = 0x101076a3u; SAVEALL; F_1010a6fb(c); ABI_CHECK(0x1010a6fbu, 0x1010769eu); RETCHK(0x101076a3u, 0x1010769eu); LOADALL;
  /* 101076a3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101076a5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101076a6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101076a7 je 0x101076b5 */ if (ZF_) goto L_101076b5;
L_101076a9:;
  /* 101076a9 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101076aa cmp esi, 0x24 */ { u32 a_ = esi, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101076ad jl 0x10107681 */ if (LT_) goto L_10107681;
  /* 101076af xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101076b1 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_101076b2:;
  /* 101076b2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101076b3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101076b4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101076b5:;
  /* 101076b5 and dword ptr [esi*8 + 0x10110130], 0 */ { const u32 m_ = (u32)(esi * 8u + 0x10110130u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101076bd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101076bf jmp 0x101076b2 */ goto L_101076b2;
}

void F_10107716(CPU *c) {
  NATIVE_HOOK(0x10107716u) REGS; LOADALL;
L_10107716:;
  /* 10107716 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10107717 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10107719 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010771c push dword ptr [eax*8 + 0x10110130] */ { const u32 m_ = (u32)(eax * 8u + 0x10110130u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107723 call dword ptr [0x1010d068] */ { const u32 m_ = (u32)(0x1010d068u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10107729u; SAVEALL; call_ind(c, t_); RETCHK(0x10107729u, 0x10107723u); LOADALL; }
  /* 10107729 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010772a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010772b(CPU *c) {
  NATIVE_HOOK(0x1010772bu) REGS; LOADALL;
L_1010772b:;
  /* 1010772b push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 1010772d push 0x1010d660 */ { u32 v_ = 0x1010d660u; esp -= 4; M32(esp) = v_; }
  /* 10107732 call 0x1010734c */ esp -= 4; M32(esp) = 0x10107737u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10107732u); RETCHK(0x10107737u, 0x10107732u); LOADALL;
  /* 10107737 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 1010773a lea esi, [esi*8 + 0x10110130] */ esi = (u32)((u32)(esi * 8u + 0x10110130u));
  /* 10107741 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10107743 cmp dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107745 jne 0x101077b9 */ if (!ZF_) goto L_101077b9;
  /* 10107747 push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 10107749 call 0x10106108 */ esp -= 4; M32(esp) = 0x1010774eu; SAVEALL; F_10106108(c); ABI_CHECK(0x10106108u, 0x10107749u); RETCHK(0x1010774eu, 0x10107749u); LOADALL;
  /* 1010774e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010774f mov edi, eax */ { edi = (u32)(eax); }
  /* 10107751 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107753 jne 0x10107762 */ if (!ZF_) goto L_10107762;
  /* 10107755 call 0x1010a786 */ esp -= 4; M32(esp) = 0x1010775au; SAVEALL; F_1010a786(c); ABI_CHECK(0x1010a786u, 0x10107755u); RETCHK(0x1010775au, 0x10107755u); LOADALL;
  /* 1010775a mov dword ptr [eax], 0xc */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0xcu); }
  /* 10107760 jmp 0x101077a1 */ goto L_101077a1;
L_10107762:;
  /* 10107762 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 10107764 call 0x101077cb */ esp -= 4; M32(esp) = 0x10107769u; SAVEALL; F_101077cb(c); ABI_CHECK(0x101077cbu, 0x10107764u); RETCHK(0x10107769u, 0x10107764u); LOADALL;
  /* 10107769 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010776a mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 1010776d cmp dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010776f jne 0x101077a9 */ if (!ZF_) goto L_101077a9;
  /* 10107771 push 0xfa0 */ { u32 v_ = 0xfa0u; esp -= 4; M32(esp) = v_; }
  /* 10107776 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107777 call 0x1010a6fb */ esp -= 4; M32(esp) = 0x1010777cu; SAVEALL; F_1010a6fb(c); ABI_CHECK(0x1010a6fbu, 0x10107777u); RETCHK(0x1010777cu, 0x10107777u); LOADALL;
  /* 1010777c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010777d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010777e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107780 jne 0x101077a5 */ if (!ZF_) goto L_101077a5;
  /* 10107782 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107783 call 0x101074a1 */ esp -= 4; M32(esp) = 0x10107788u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10107783u); RETCHK(0x10107788u, 0x10107783u); LOADALL;
  /* 10107788 call 0x1010a786 */ esp -= 4; M32(esp) = 0x1010778du; SAVEALL; F_1010a786(c); ABI_CHECK(0x1010a786u, 0x10107788u); RETCHK(0x1010778du, 0x10107788u); LOADALL;
  /* 1010778d mov dword ptr [eax], 0xc */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0xcu); }
  /* 10107793 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10107795 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 10107798 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107799 call 0x10105632 */ esp -= 4; M32(esp) = 0x1010779eu; SAVEALL; F_10105632(c); ABI_CHECK(0x10105632u, 0x10107799u); RETCHK(0x1010779eu, 0x10107799u); LOADALL;
  /* 1010779e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_101077a1:;
  /* 101077a1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101077a3 jmp 0x101077bc */ goto L_101077bc;
L_101077a5:;
  /* 101077a5 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 101077a7 jmp 0x101077b0 */ goto L_101077b0;
L_101077a9:;
  /* 101077a9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101077aa call 0x101074a1 */ esp -= 4; M32(esp) = 0x101077afu; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x101077aau); RETCHK(0x101077afu, 0x101077aau); LOADALL;
  /* 101077af pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101077b0:;
  /* 101077b0 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101077b4 call 0x101077c2 */ esp -= 4; M32(esp) = 0x101077b9u; SAVEALL; F_101077c2(c); ABI_CHECK(0x101077c2u, 0x101077b4u); RETCHK(0x101077b9u, 0x101077b4u); LOADALL;
L_101077b9:;
  /* 101077b9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101077bb inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_101077bc:;
  /* 101077bc call 0x10107387 */ esp -= 4; M32(esp) = 0x101077c1u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x101077bcu); RETCHK(0x101077c1u, 0x101077bcu); LOADALL;
  /* 101077c1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101077c2(CPU *c) {
  NATIVE_HOOK(0x101077c2u) REGS; LOADALL;
L_101077c2:;
  /* 101077c2 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 101077c4 call 0x10107716 */ esp -= 4; M32(esp) = 0x101077c9u; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x101077c4u); RETCHK(0x101077c9u, 0x101077c4u); LOADALL;
  /* 101077c9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101077ca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
