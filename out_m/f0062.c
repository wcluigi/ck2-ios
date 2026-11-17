#include "funcs.h"

void F_00616980(CPU *c) {
  NATIVE_HOOK(0x616980u) REGS; LOADALL;
L_00616980:;
  /* 00616980 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00616984 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00616985 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00616986 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616987 cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061698a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061698b ja 0x616b23 */ if (!(CF_|ZF_)) goto L_00616b23;
  /* 00616991 jmp dword ptr [eax*4 + 0x616b44] */ { const u32 m_ = (u32)(eax * 4u + 0x616b44u); u32 t_ = M32(m_); switch (t_) { case 0x616998u: goto L_00616998; case 0x6169d3u: goto L_006169d3; case 0x616a00u: goto L_00616a00; case 0x616a5du: goto L_00616a5d; case 0x616b3cu: goto L_00616b3c; default: SAVEALL; call_ind(c, t_); return; } }
L_00616998:;
  /* 00616998 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0061699c xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0061699e mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 006169a2 mov cl, byte ptr [eax + 0xb] */ { const u32 m_ = (u32)(eax + 0xbu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006169a5 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 006169a8 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 006169aa add eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006169ad sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 006169b0 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006169b2 lea ecx, [eax + edx] */ ecx = (u32)((u32)(eax + edx));
  /* 006169b5 jae 0x616b3c */ if (!CF_) goto L_00616b3c;
  /* 006169bb mov edx, ecx */ { edx = (u32)(ecx); }
  /* 006169bd sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006169bf sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
L_006169c1:;
  /* 006169c1 mov al, byte ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006169c3 mov bl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006169c5 add bl, al */ { u32 a_ = (ebx & 0xffu), b_ = (eax & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 006169c7 mov byte ptr [ecx], bl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006169c9 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006169ca inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006169cb dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006169cc jne 0x6169c1 */ if (!ZF_) goto L_006169c1;
  /* 006169ce pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006169cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006169d0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006169d1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006169d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006169d3:;
  /* 006169d3 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 006169d7 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 006169db mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 006169de xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006169e0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006169e2 jbe 0x616b3c */ if ((CF_|ZF_)) goto L_00616b3c;
  /* 006169e8 mov edi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edi = (u32)(M32(m_)); }
L_006169ec:;
  /* 006169ec mov dl, byte ptr [ecx + edi] */ { const u32 m_ = (u32)(ecx + edi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006169ef mov bl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006169f1 add bl, dl */ { u32 a_ = (ebx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 006169f3 mov byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006169f5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006169f6 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006169f7 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006169f9 jb 0x6169ec */ if (CF_) goto L_006169ec;
  /* 006169fb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006169fc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006169fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006169fe pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006169ff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00616a00:;
  /* 00616a00 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 00616a04 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 00616a08 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00616a0a mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 00616a0e mov al, byte ptr [edx + 0xb] */ { const u32 m_ = (u32)(edx + 0xbu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616a11 mov edx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00616a14 add eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00616a17 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00616a19 sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00616a1c sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00616a1e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616a20 jbe 0x616a33 */ if ((CF_|ZF_)) goto L_00616a33;
  /* 00616a22 mov ebp, eax */ { ebp = (u32)(eax); }
L_00616a24:;
  /* 00616a24 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616a26 mov bl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616a28 shr al, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = (eax & 0xffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 7) & 1u; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 00616a2a add bl, al */ { u32 a_ = (ebx & 0xffu), b_ = (eax & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00616a2c inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00616a2d mov byte ptr [ecx], bl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00616a2f inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00616a30 dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00616a31 jne 0x616a24 */ if (!ZF_) goto L_00616a24;
L_00616a33:;
  /* 00616a33 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616a35 jbe 0x616b3c */ if ((CF_|ZF_)) goto L_00616b3c;
  /* 00616a3b mov ebp, edx */ { ebp = (u32)(edx); }
L_00616a3d:;
  /* 00616a3d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00616a3f xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00616a41 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616a43 mov dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616a45 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00616a47 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00616a48 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00616a4a mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616a4c sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00616a4e add dl, al */ { u32 a_ = (edx & 0xffu), b_ = (eax & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00616a50 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00616a51 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00616a53 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00616a54 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00616a55 dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00616a56 jne 0x616a3d */ if (!ZF_) goto L_00616a3d;
  /* 00616a58 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00616a59 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00616a5a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00616a5b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00616a5c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00616a5d:;
  /* 00616a5d mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00616a61 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00616a65 mov edi, eax */ { edi = (u32)(eax); }
  /* 00616a67 mov edx, eax */ { edx = (u32)(eax); }
  /* 00616a69 mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 00616a6d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00616a6f mov al, byte ptr [ecx + 0xb] */ { const u32 m_ = (u32)(ecx + 0xbu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616a72 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00616a75 add eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00616a78 mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 00616a7c sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00616a7f sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00616a81 mov ebp, esi */ { ebp = (u32)(esi); }
  /* 00616a83 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616a85 jbe 0x616a94 */ if ((CF_|ZF_)) goto L_00616a94;
L_00616a87:;
  /* 00616a87 mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616a89 add byte ptr [edi], bl */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 00616a8b inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00616a8c inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00616a8d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00616a8e jne 0x616a87 */ if (!ZF_) goto L_00616a87;
  /* 00616a90 mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
L_00616a94:;
  /* 00616a94 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616a96 jbe 0x616b3c */ if ((CF_|ZF_)) goto L_00616b3c;
  /* 00616a9c mov dword ptr [esp + 0x20], ecx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ecx); }
  /* 00616aa0 jmp 0x616aaa */ goto L_00616aaa;
L_00616aa2:;
  /* 00616aa2 mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 00616aa6 mov ebp, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebp = (u32)(M32(m_)); }
L_00616aaa:;
  /* 00616aaa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00616aac xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00616aae mov al, byte ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616ab0 mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616ab2 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00616ab3 mov edi, eax */ { edi = (u32)(eax); }
  /* 00616ab5 mov dword ptr [esp + 0x24], edx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(edx); }
  /* 00616ab9 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00616abb mov dl, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616abe mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00616ac0 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00616ac2 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00616ac3 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00616ac5 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00616ac6 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00616ac8 mov dword ptr [esp + 0x14], ebp */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ebp); }
  /* 00616acc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616ace jge 0x616ada */ if (!LT_) goto L_00616ada;
  /* 00616ad0 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 00616ad2 neg ebp */ { u32 a_ = ebp; u32 r_ = (0u - a_) & 0xffffffffu; ebp = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00616ad4 mov dword ptr [esp + 0x18], ebp */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ebp); }
  /* 00616ad8 jmp 0x616ade */ goto L_00616ade;
L_00616ada:;
  /* 00616ada mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
L_00616ade:;
  /* 00616ade test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616ae0 mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 00616ae2 jge 0x616ae6 */ if (!LT_) goto L_00616ae6;
  /* 00616ae4 neg ebp */ { u32 a_ = ebp; u32 r_ = (0u - a_) & 0xffffffffu; ebp = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
L_00616ae6:;
  /* 00616ae6 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00616ae8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616aea jge 0x616aee */ if (!LT_) goto L_00616aee;
  /* 00616aec neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
L_00616aee:;
  /* 00616aee mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00616af2 cmp ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00616af4 jg 0x616afe */ if (!(ZF_|LT_)) goto L_00616afe;
  /* 00616af6 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00616af8 jg 0x616afe */ if (!(ZF_|LT_)) goto L_00616afe;
  /* 00616afa mov edx, edi */ { edx = (u32)(edi); }
  /* 00616afc jmp 0x616b04 */ goto L_00616b04;
L_00616afe:;
  /* 00616afe cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00616b00 jg 0x616b04 */ if (!(ZF_|LT_)) goto L_00616b04;
  /* 00616b02 mov edx, ebx */ { edx = (u32)(ebx); }
L_00616b04:;
  /* 00616b04 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00616b08 mov bl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616b0a add bl, dl */ { u32 a_ = (ebx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00616b0c mov byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00616b0e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00616b0f mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00616b13 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 00616b17 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00616b18 mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 00616b1c jne 0x616aa2 */ if (!ZF_) goto L_00616aa2;
  /* 00616b1e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00616b1f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00616b20 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00616b21 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00616b22 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00616b23:;
  /* 00616b23 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00616b27 push 0x682a10 */ { u32 v_ = 0x682a10u; esp -= 4; M32(esp) = v_; }
  /* 00616b2c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00616b2d call 0x605c40 */ esp -= 4; M32(esp) = 0x616b32u; SAVEALL; F_00605c40(c); ABI_CHECK(0x605c40u, 0x616b2du); RETCHK(0x616b32u, 0x616b2du); LOADALL;
  /* 00616b32 mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 00616b36 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00616b39 mov byte ptr [edx], 0 */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)(0x0u); }
L_00616b3c:;
  /* 00616b3c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00616b3d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00616b3e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00616b3f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00616b40 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00616b60(CPU *c) {
  NATIVE_HOOK(0x616b60u) REGS; LOADALL;
L_00616b60:;
  /* 00616b60 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00616b63 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00616b64 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00616b65 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616b66 mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 00616b6a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00616b6b mov edx, dword ptr [esi + 0xe4] */ { const u32 m_ = (u32)(esi + 0xe4u); edx = (u32)(M32(m_)); }
  /* 00616b71 mov ecx, dword ptr [esi + 0xd0] */ { const u32 m_ = (u32)(esi + 0xd0u); ecx = (u32)(M32(m_)); }
  /* 00616b77 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00616b78 mov eax, edx */ { eax = (u32)(edx); }
  /* 00616b7a mov dword ptr [esi + 0xe4], edx */ { const u32 m_ = (u32)(esi + 0xe4u); M32(m_) = (u32)(edx); }
  /* 00616b80 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00616b82 jb 0x616ee8 */ if (CF_) goto L_00616ee8;
  /* 00616b88 mov al, byte ptr [esi + 0x123] */ { const u32 m_ = (u32)(esi + 0x123u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616b8e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00616b90 je 0x616c58 */ if (ZF_) goto L_00616c58;
  /* 00616b96 mov eax, dword ptr [esi + 0xd8] */ { const u32 m_ = (u32)(esi + 0xd8u); eax = (u32)(M32(m_)); }
  /* 00616b9c mov ecx, dword ptr [esi + 0xe8] */ { const u32 m_ = (u32)(esi + 0xe8u); ecx = (u32)(M32(m_)); }
  /* 00616ba2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00616ba3 mov dword ptr [esi + 0xe4], 0 */ { const u32 m_ = (u32)(esi + 0xe4u); M32(m_) = (u32)(0x0u); }
  /* 00616bad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00616bae push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00616bb0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00616bb1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616bb2 call 0x60f340 */ esp -= 4; M32(esp) = 0x616bb7u; SAVEALL; F_0060f340(c); ABI_CHECK(0x60f340u, 0x616bb2u); RETCHK(0x616bb7u, 0x616bb2u); LOADALL;
  /* 00616bb7 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00616bba:;
  /* 00616bba mov cl, byte ptr [esi + 0x124] */ { const u32 m_ = (u32)(esi + 0x124u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616bc0 inc cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 00616bc2 mov bl, cl */ { ebx = (ebx & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 00616bc4 mov byte ptr [esi + 0x124], cl */ { const u32 m_ = (u32)(esi + 0x124u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00616bca cmp bl, 7 */ { u32 a_ = (ebx & 0xffu), b_ = 0x7u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00616bcd jae 0x616c58 */ if (!CF_) goto L_00616c58;
  /* 00616bd3 mov edx, dword ptr [esi + 0xc8] */ { const u32 m_ = (u32)(esi + 0xc8u); edx = (u32)(M32(m_)); }
  /* 00616bd9 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00616bdb and ecx, 0xff */ { u32 a_ = ecx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00616be1 shl ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00616be4 mov ebp, dword ptr [ecx + 0x63d2b4] */ { const u32 m_ = (u32)(ecx + 0x63d2b4u); ebp = (u32)(M32(m_)); }
  /* 00616bea mov edi, dword ptr [ecx + 0x63d2d0] */ { const u32 m_ = (u32)(ecx + 0x63d2d0u); edi = (u32)(M32(m_)); }
  /* 00616bf0 sub edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00616bf2 lea eax, [edx + edi - 1] */ eax = (u32)((u32)(edx + edi + 0xffffffffu));
  /* 00616bf6 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00616bf8 div edi */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, edi, &q_, &r_, 0x616bf8u); eax = q_; edx = r_; }
  /* 00616bfa xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00616bfc mov dl, byte ptr [esi + 0x129] */ { const u32 m_ = (u32)(esi + 0x129u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616c02 imul edx, eax */ { s64 p_ = (s64)(s32)edx * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00616c05 add edx, 7 */ { u32 a_ = edx, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00616c08 mov dword ptr [esi + 0xe0], eax */ { const u32 m_ = (u32)(esi + 0xe0u); M32(m_) = (u32)(eax); }
  /* 00616c0e mov al, byte ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616c11 shr edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00616c14 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00616c15 test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00616c17 mov dword ptr [esi + 0xdc], edx */ { const u32 m_ = (u32)(esi + 0xdcu); M32(m_) = (u32)(edx); }
  /* 00616c1d jne 0x616c4f */ if (!ZF_) goto L_00616c4f;
  /* 00616c1f mov eax, dword ptr [esi + 0xcc] */ { const u32 m_ = (u32)(esi + 0xccu); eax = (u32)(M32(m_)); }
  /* 00616c25 mov edx, dword ptr [ecx + 0x63d2ec] */ { const u32 m_ = (u32)(ecx + 0x63d2ecu); edx = (u32)(M32(m_)); }
  /* 00616c2b mov edi, dword ptr [ecx + 0x63d308] */ { const u32 m_ = (u32)(ecx + 0x63d308u); edi = (u32)(M32(m_)); }
  /* 00616c31 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00616c33 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00616c35 lea eax, [eax + edi - 1] */ eax = (u32)((u32)(eax + edi + 0xffffffffu));
  /* 00616c39 div edi */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, edi, &q_, &r_, 0x616c39u); eax = q_; edx = r_; }
  /* 00616c3b mov dword ptr [esi + 0xd0], eax */ { const u32 m_ = (u32)(esi + 0xd0u); M32(m_) = (u32)(eax); }
  /* 00616c41 mov eax, dword ptr [esi + 0xe0] */ { const u32 m_ = (u32)(esi + 0xe0u); eax = (u32)(M32(m_)); }
  /* 00616c47 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616c49 je 0x616bba */ if (ZF_) goto L_00616bba;
L_00616c4f:;
  /* 00616c4f cmp bl, 7 */ { u32 a_ = (ebx & 0xffu), b_ = 0x7u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00616c52 jb 0x616ee8 */ if (CF_) goto L_00616ee8;
L_00616c58:;
  /* 00616c58 test byte ptr [esi + 0x6c], 0x20 */ { const u32 m_ = (u32)(esi + 0x6cu); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00616c5c jne 0x616eb5 */ if (!ZF_) goto L_00616eb5;
  /* 00616c62 lea ecx, [esp + 0x24] */ ecx = (u32)((u32)(esp + 0x24u));
  /* 00616c66 mov dword ptr [esi + 0x84], 1 */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(0x1u); }
  /* 00616c70 mov dword ptr [esi + 0x80], ecx */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(ecx); }
  /* 00616c76 lea ebx, [esi + 0x74] */ ebx = (u32)((u32)(esi + 0x74u));
L_00616c79:;
  /* 00616c79 mov eax, dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); eax = (u32)(M32(m_)); }
  /* 00616c7c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616c7e jne 0x616e23 */ if (!ZF_) goto L_00616e23;
  /* 00616c84 mov eax, dword ptr [esi + 0x10c] */ { const u32 m_ = (u32)(esi + 0x10cu); eax = (u32)(M32(m_)); }
  /* 00616c8a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616c8c jne 0x616dde */ if (!ZF_) goto L_00616dde;
  /* 00616c92 lea ebp, [esi + 0x11c] */ ebp = (u32)((u32)(esi + 0x11cu));
L_00616c98:;
  /* 00616c98 mov al, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616c9b mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 00616ca0 test al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00616ca2 je 0x616cb7 */ if (ZF_) goto L_00616cb7;
  /* 00616ca4 mov edx, dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); edx = (u32)(M32(m_)); }
  /* 00616ca7 and edx, 0x300 */ { u32 a_ = edx, b_ = 0x300u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00616cad cmp edx, 0x300 */ { u32 a_ = edx, b_ = 0x300u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00616cb3 jne 0x616cc1 */ if (!ZF_) goto L_00616cc1;
  /* 00616cb5 jmp 0x616cbf */ goto L_00616cbf;
L_00616cb7:;
  /* 00616cb7 mov eax, dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); eax = (u32)(M32(m_)); }
  /* 00616cba test ah, 8 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00616cbd je 0x616cc1 */ if (ZF_) goto L_00616cc1;
L_00616cbf:;
  /* 00616cbf xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_00616cc1:;
  /* 00616cc1 lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 00616cc5 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00616cc7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00616cc8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616cc9 call 0x60b3c0 */ esp -= 4; M32(esp) = 0x616cceu; SAVEALL; F_0060b3c0(c); ABI_CHECK(0x60b3c0u, 0x616cc9u); RETCHK(0x616cceu, 0x616cc9u); LOADALL;
  /* 00616cce add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00616cd1 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616cd3 je 0x616d52 */ if (ZF_) goto L_00616d52;
  /* 00616cd5 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00616cd9 mov edx, dword ptr [esp + 0x11] */ { const u32 m_ = (u32)(esp + 0x11u); edx = (u32)(M32(m_)); }
  /* 00616cdd mov eax, dword ptr [esp + 0x12] */ { const u32 m_ = (u32)(esp + 0x12u); eax = (u32)(M32(m_)); }
  /* 00616ce1 and ecx, 0xff */ { u32 a_ = ecx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00616ce7 shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00616cea and edx, 0xff */ { u32 a_ = edx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00616cf0 and eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00616cf5 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00616cf7 mov edx, dword ptr [esp + 0x13] */ { const u32 m_ = (u32)(esp + 0x13u); edx = (u32)(M32(m_)); }
  /* 00616cfb shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00616cfe add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00616d00 and edx, 0xff */ { u32 a_ = edx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00616d06 shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00616d09 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00616d0b mov edx, dword ptr [esi + 0x110] */ { const u32 m_ = (u32)(esi + 0x110u); edx = (u32)(M32(m_)); }
  /* 00616d11 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00616d13 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00616d15 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00616d18 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616d1a je 0x616d52 */ if (ZF_) goto L_00616d52;
  /* 00616d1c mov al, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616d1f and al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00616d21 je 0x616d2b */ if (ZF_) goto L_00616d2b;
  /* 00616d23 mov ecx, dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); ecx = (u32)(M32(m_)); }
  /* 00616d26 test ch, 2 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00616d29 je 0x616d37 */ if (ZF_) goto L_00616d37;
L_00616d2b:;
  /* 00616d2b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00616d2d jne 0x616d44 */ if (!ZF_) goto L_00616d44;
  /* 00616d2f mov eax, dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); eax = (u32)(M32(m_)); }
  /* 00616d32 test ah, 4 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00616d35 je 0x616d44 */ if (ZF_) goto L_00616d44;
L_00616d37:;
  /* 00616d37 push 0x681f08 */ { u32 v_ = 0x681f08u; esp -= 4; M32(esp) = v_; }
  /* 00616d3c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616d3d call 0x605d50 */ esp -= 4; M32(esp) = 0x616d42u; SAVEALL; F_00605d50(c); ABI_CHECK(0x605d50u, 0x616d3du); RETCHK(0x616d42u, 0x616d3du); LOADALL;
  /* 00616d42 jmp 0x616d4f */ goto L_00616d4f;
L_00616d44:;
  /* 00616d44 push 0x681f08 */ { u32 v_ = 0x681f08u; esp -= 4; M32(esp) = v_; }
  /* 00616d49 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616d4a call 0x605c80 */ esp -= 4; M32(esp) = 0x616d4fu; SAVEALL; F_00605c80(c); ABI_CHECK(0x605c80u, 0x616d4au); RETCHK(0x616d4fu, 0x616d4au); LOADALL;
L_00616d4f:;
  /* 00616d4f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00616d52:;
  /* 00616d52 lea eax, [esp + 0x18] */ eax = (u32)((u32)(esp + 0x18u));
  /* 00616d56 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00616d58 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00616d59 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616d5a call 0x60b3c0 */ esp -= 4; M32(esp) = 0x616d5fu; SAVEALL; F_0060b3c0(c); ABI_CHECK(0x60b3c0u, 0x616d5au); RETCHK(0x616d5fu, 0x616d5au); LOADALL;
  /* 00616d5f mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 00616d63 mov edx, dword ptr [esp + 0x25] */ { const u32 m_ = (u32)(esp + 0x25u); edx = (u32)(M32(m_)); }
  /* 00616d67 mov eax, dword ptr [esp + 0x26] */ { const u32 m_ = (u32)(esp + 0x26u); eax = (u32)(M32(m_)); }
  /* 00616d6b and ecx, 0xff */ { u32 a_ = ecx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00616d71 shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00616d74 and edx, 0xff */ { u32 a_ = edx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00616d7a and eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00616d7f add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00616d81 mov edx, dword ptr [esp + 0x27] */ { const u32 m_ = (u32)(esp + 0x27u); edx = (u32)(M32(m_)); }
  /* 00616d85 shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00616d88 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00616d8a and edx, 0xff */ { u32 a_ = edx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00616d90 shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00616d93 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00616d95 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616d96 mov dword ptr [esi + 0x10c], ecx */ { const u32 m_ = (u32)(esi + 0x10cu); M32(m_) = (u32)(ecx); }
  /* 00616d9c call 0x605700 */ esp -= 4; M32(esp) = 0x616da1u; SAVEALL; F_00605700(c); ABI_CHECK(0x605700u, 0x616d9cu); RETCHK(0x616da1u, 0x616d9cu); LOADALL;
  /* 00616da1 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00616da3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00616da4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616da5 call 0x60b3c0 */ esp -= 4; M32(esp) = 0x616daau; SAVEALL; F_0060b3c0(c); ABI_CHECK(0x60b3c0u, 0x616da5u); RETCHK(0x616daau, 0x616da5u); LOADALL;
  /* 00616daa push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00616dac push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00616dad push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616dae call 0x605720 */ esp -= 4; M32(esp) = 0x616db3u; SAVEALL; F_00605720(c); ABI_CHECK(0x605720u, 0x616daeu); RETCHK(0x616db3u, 0x616daeu); LOADALL;
  /* 00616db3 mov ecx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M32(m_)); }
  /* 00616db6 mov eax, 0x63d214 */ { eax = (u32)(0x63d214u); }
  /* 00616dbb add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00616dbe cmp ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00616dc0 je 0x616dd0 */ if (ZF_) goto L_00616dd0;
  /* 00616dc2 push 0x6817e4 */ { u32 v_ = 0x6817e4u; esp -= 4; M32(esp) = v_; }
  /* 00616dc7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616dc8 call 0x605c20 */ esp -= 4; M32(esp) = 0x616dcdu; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x616dc8u); RETCHK(0x616dcdu, 0x616dc8u); LOADALL;
  /* 00616dcd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00616dd0:;
  /* 00616dd0 mov eax, dword ptr [esi + 0x10c] */ { const u32 m_ = (u32)(esi + 0x10cu); eax = (u32)(M32(m_)); }
  /* 00616dd6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616dd8 je 0x616c98 */ if (ZF_) goto L_00616c98;
L_00616dde:;
  /* 00616dde mov eax, dword ptr [esi + 0xb0] */ { const u32 m_ = (u32)(esi + 0xb0u); eax = (u32)(M32(m_)); }
  /* 00616de4 mov ecx, dword ptr [esi + 0x10c] */ { const u32 m_ = (u32)(esi + 0x10cu); ecx = (u32)(M32(m_)); }
  /* 00616dea mov edi, dword ptr [esi + 0xac] */ { const u32 m_ = (u32)(esi + 0xacu); edi = (u32)(M32(m_)); }
  /* 00616df0 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00616df2 mov dword ptr [esi + 0x78], eax */ { const u32 m_ = (u32)(esi + 0x78u); M32(m_) = (u32)(eax); }
  /* 00616df5 mov dword ptr [ebx], edi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edi); }
  /* 00616df7 jbe 0x616dfc */ if ((CF_|ZF_)) goto L_00616dfc;
  /* 00616df9 mov dword ptr [esi + 0x78], ecx */ { const u32 m_ = (u32)(esi + 0x78u); M32(m_) = (u32)(ecx); }
L_00616dfc:;
  /* 00616dfc mov ebp, dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); ebp = (u32)(M32(m_)); }
  /* 00616dff push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00616e00 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00616e01 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616e02 call 0x60b3c0 */ esp -= 4; M32(esp) = 0x616e07u; SAVEALL; F_0060b3c0(c); ABI_CHECK(0x60b3c0u, 0x616e02u); RETCHK(0x616e07u, 0x616e02u); LOADALL;
  /* 00616e07 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00616e08 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00616e09 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616e0a call 0x605720 */ esp -= 4; M32(esp) = 0x616e0fu; SAVEALL; F_00605720(c); ABI_CHECK(0x605720u, 0x616e0au); RETCHK(0x616e0fu, 0x616e0au); LOADALL;
  /* 00616e0f mov edx, dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); edx = (u32)(M32(m_)); }
  /* 00616e12 mov eax, dword ptr [esi + 0x10c] */ { const u32 m_ = (u32)(esi + 0x10cu); eax = (u32)(M32(m_)); }
  /* 00616e18 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00616e1b sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00616e1d mov dword ptr [esi + 0x10c], eax */ { const u32 m_ = (u32)(esi + 0x10cu); M32(m_) = (u32)(eax); }
L_00616e23:;
  /* 00616e23 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00616e25 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00616e26 call 0x5ff1f0 */ esp -= 4; M32(esp) = 0x616e2bu; SAVEALL; F_005ff1f0(c); ABI_CHECK(0x5ff1f0u, 0x616e26u); RETCHK(0x616e2bu, 0x616e26u); LOADALL;
  /* 00616e2b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00616e2e cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00616e31 je 0x616e71 */ if (ZF_) goto L_00616e71;
  /* 00616e33 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616e35 je 0x616e50 */ if (ZF_) goto L_00616e50;
  /* 00616e37 mov eax, dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); eax = (u32)(M32(m_)); }
  /* 00616e3d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616e3f jne 0x616e46 */ if (!ZF_) goto L_00616e46;
  /* 00616e41 mov eax, 0x682a4c */ { eax = (u32)(0x682a4cu); }
L_00616e46:;
  /* 00616e46 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00616e47 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616e48 call 0x605c20 */ esp -= 4; M32(esp) = 0x616e4du; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x616e48u); RETCHK(0x616e4du, 0x616e48u); LOADALL;
  /* 00616e4d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00616e50:;
  /* 00616e50 mov eax, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); eax = (u32)(M32(m_)); }
  /* 00616e56 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616e58 jne 0x616c79 */ if (!ZF_) goto L_00616c79;
  /* 00616e5e push 0x6817b8 */ { u32 v_ = 0x6817b8u; esp -= 4; M32(esp) = v_; }
  /* 00616e63 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616e64 call 0x605c20 */ esp -= 4; M32(esp) = 0x616e69u; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x616e64u); RETCHK(0x616e69u, 0x616e64u); LOADALL;
  /* 00616e69 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00616e6c jmp 0x616c79 */ goto L_00616c79;
L_00616e71:;
  /* 00616e71 mov eax, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); eax = (u32)(M32(m_)); }
  /* 00616e77 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616e79 je 0x616e8c */ if (ZF_) goto L_00616e8c;
  /* 00616e7b mov eax, dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); eax = (u32)(M32(m_)); }
  /* 00616e7e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616e80 jne 0x616e8c */ if (!ZF_) goto L_00616e8c;
  /* 00616e82 mov eax, dword ptr [esi + 0x10c] */ { const u32 m_ = (u32)(esi + 0x10cu); eax = (u32)(M32(m_)); }
  /* 00616e88 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616e8a je 0x616e9a */ if (ZF_) goto L_00616e9a;
L_00616e8c:;
  /* 00616e8c push 0x6817b8 */ { u32 v_ = 0x6817b8u; esp -= 4; M32(esp) = v_; }
  /* 00616e91 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616e92 call 0x605c20 */ esp -= 4; M32(esp) = 0x616e97u; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x616e92u); RETCHK(0x616e97u, 0x616e92u); LOADALL;
  /* 00616e97 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00616e9a:;
  /* 00616e9a mov ecx, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); ecx = (u32)(M32(m_)); }
  /* 00616e9d mov eax, dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); eax = (u32)(M32(m_)); }
  /* 00616ea0 or ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00616ea3 or al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00616ea5 mov dword ptr [esi + 0x68], ecx */ { const u32 m_ = (u32)(esi + 0x68u); M32(m_) = (u32)(ecx); }
  /* 00616ea8 mov dword ptr [esi + 0x6c], eax */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(eax); }
  /* 00616eab mov dword ptr [esi + 0x84], 0 */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(0x0u); }
L_00616eb5:;
  /* 00616eb5 mov eax, dword ptr [esi + 0x10c] */ { const u32 m_ = (u32)(esi + 0x10cu); eax = (u32)(M32(m_)); }
  /* 00616ebb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616ebd jne 0x616ec6 */ if (!ZF_) goto L_00616ec6;
  /* 00616ebf mov eax, dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); eax = (u32)(M32(m_)); }
  /* 00616ec2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00616ec4 je 0x616ed4 */ if (ZF_) goto L_00616ed4;
L_00616ec6:;
  /* 00616ec6 push 0x682a34 */ { u32 v_ = 0x682a34u; esp -= 4; M32(esp) = v_; }
  /* 00616ecb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616ecc call 0x605c20 */ esp -= 4; M32(esp) = 0x616ed1u; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x616eccu); RETCHK(0x616ed1u, 0x616eccu); LOADALL;
  /* 00616ed1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00616ed4:;
  /* 00616ed4 lea eax, [esi + 0x74] */ eax = (u32)((u32)(esi + 0x74u));
  /* 00616ed7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00616ed8 call 0x5ff030 */ esp -= 4; M32(esp) = 0x616eddu; SAVEALL; F_005ff030(c); ABI_CHECK(0x5ff030u, 0x616ed8u); RETCHK(0x616eddu, 0x616ed8u); LOADALL;
  /* 00616edd mov eax, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); eax = (u32)(M32(m_)); }
  /* 00616ee0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00616ee3 or al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00616ee5 mov dword ptr [esi + 0x68], eax */ { const u32 m_ = (u32)(esi + 0x68u); M32(m_) = (u32)(eax); }
L_00616ee8:;
  /* 00616ee8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00616ee9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00616eea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00616eeb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00616eec add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00616eef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00616ef0(CPU *c) {
  NATIVE_HOOK(0x616ef0u) REGS; LOADALL;
L_00616ef0:;
  /* 00616ef0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00616ef1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00616ef2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616ef3 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 00616ef7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00616ef8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00616ef9 mov dword ptr [esi + 0x78], 0 */ { const u32 m_ = (u32)(esi + 0x78u); M32(m_) = (u32)(0x0u); }
  /* 00616f00 call 0x606f70 */ esp -= 4; M32(esp) = 0x616f05u; SAVEALL; F_00606f70(c); ABI_CHECK(0x606f70u, 0x616f00u); RETCHK(0x616f05u, 0x616f00u); LOADALL;
  /* 00616f05 mov al, byte ptr [esi + 0x123] */ { const u32 m_ = (u32)(esi + 0x123u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616f0b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00616f0e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00616f10 je 0x616f8a */ if (ZF_) goto L_00616f8a;
  /* 00616f12 test byte ptr [esi + 0x70], 2 */ { const u32 m_ = (u32)(esi + 0x70u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00616f16 jne 0x616f3c */ if (!ZF_) goto L_00616f3c;
  /* 00616f18 mov eax, dword ptr [esi + 0xcc] */ { const u32 m_ = (u32)(esi + 0xccu); eax = (u32)(M32(m_)); }
  /* 00616f1e mov ecx, dword ptr [0x63d2ec] */ { const u32 m_ = (u32)(0x63d2ecu); ecx = (u32)(M32(m_)); }
  /* 00616f24 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00616f26 mov ecx, dword ptr [0x63d308] */ { const u32 m_ = (u32)(0x63d308u); ecx = (u32)(M32(m_)); }
  /* 00616f2c xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00616f2e lea eax, [eax + ecx - 1] */ eax = (u32)((u32)(eax + ecx + 0xffffffffu));
  /* 00616f32 div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x616f32u); eax = q_; edx = r_; }
  /* 00616f34 mov dword ptr [esi + 0xd0], eax */ { const u32 m_ = (u32)(esi + 0xd0u); M32(m_) = (u32)(eax); }
  /* 00616f3a jmp 0x616f48 */ goto L_00616f48;
L_00616f3c:;
  /* 00616f3c mov ecx, dword ptr [esi + 0xcc] */ { const u32 m_ = (u32)(esi + 0xccu); ecx = (u32)(M32(m_)); }
  /* 00616f42 mov dword ptr [esi + 0xd0], ecx */ { const u32 m_ = (u32)(esi + 0xd0u); M32(m_) = (u32)(ecx); }
L_00616f48:;
  /* 00616f48 mov ebp, dword ptr [esi + 0xc8] */ { const u32 m_ = (u32)(esi + 0xc8u); ebp = (u32)(M32(m_)); }
  /* 00616f4e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00616f50 mov al, byte ptr [esi + 0x124] */ { const u32 m_ = (u32)(esi + 0x124u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616f56 mov edx, ebp */ { edx = (u32)(ebp); }
  /* 00616f58 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00616f5b mov ebx, dword ptr [eax + 0x63d2b4] */ { const u32 m_ = (u32)(eax + 0x63d2b4u); ebx = (u32)(M32(m_)); }
  /* 00616f61 mov ecx, dword ptr [eax + 0x63d2d0] */ { const u32 m_ = (u32)(eax + 0x63d2d0u); ecx = (u32)(M32(m_)); }
  /* 00616f67 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00616f69 lea eax, [edx + ecx - 1] */ eax = (u32)((u32)(edx + ecx + 0xffffffffu));
  /* 00616f6d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00616f6f div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x616f6fu); eax = q_; edx = r_; }
  /* 00616f71 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00616f73 mov cl, byte ptr [esi + 0x129] */ { const u32 m_ = (u32)(esi + 0x129u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616f79 imul ecx, eax */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00616f7c add ecx, 7 */ { u32 a_ = ecx, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00616f7f mov dword ptr [esi + 0xe0], eax */ { const u32 m_ = (u32)(esi + 0xe0u); M32(m_) = (u32)(eax); }
  /* 00616f85 shr ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00616f88 jmp 0x616fa8 */ goto L_00616fa8;
L_00616f8a:;
  /* 00616f8a mov eax, dword ptr [esi + 0xcc] */ { const u32 m_ = (u32)(esi + 0xccu); eax = (u32)(M32(m_)); }
  /* 00616f90 mov ebp, dword ptr [esi + 0xc8] */ { const u32 m_ = (u32)(esi + 0xc8u); ebp = (u32)(M32(m_)); }
  /* 00616f96 mov ecx, dword ptr [esi + 0xd8] */ { const u32 m_ = (u32)(esi + 0xd8u); ecx = (u32)(M32(m_)); }
  /* 00616f9c mov dword ptr [esi + 0xd0], eax */ { const u32 m_ = (u32)(esi + 0xd0u); M32(m_) = (u32)(eax); }
  /* 00616fa2 mov dword ptr [esi + 0xe0], ebp */ { const u32 m_ = (u32)(esi + 0xe0u); M32(m_) = (u32)(ebp); }
L_00616fa8:;
  /* 00616fa8 mov ebx, dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); ebx = (u32)(M32(m_)); }
  /* 00616fab inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00616fac xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00616fae mov dword ptr [esi + 0xdc], ecx */ { const u32 m_ = (u32)(esi + 0xdcu); M32(m_) = (u32)(ecx); }
  /* 00616fb4 mov al, byte ptr [esi + 0x129] */ { const u32 m_ = (u32)(esi + 0x129u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616fba test bl, 4 */ { u32 a_ = (ebx & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00616fbd je 0x616fcd */ if (ZF_) goto L_00616fcd;
  /* 00616fbf cmp byte ptr [esi + 0x127], 8 */ { const u32 m_ = (u32)(esi + 0x127u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00616fc6 jae 0x616fcd */ if (!CF_) goto L_00616fcd;
  /* 00616fc8 mov eax, 8 */ { eax = (u32)(0x8u); }
L_00616fcd:;
  /* 00616fcd mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00616fcf and edi, 0x1000 */ { u32 a_ = edi, b_ = 0x1000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00616fd5 je 0x617037 */ if (ZF_) goto L_00617037;
  /* 00616fd7 mov cl, byte ptr [esi + 0x126] */ { const u32 m_ = (u32)(esi + 0x126u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616fdd cmp cl, 3 */ { u32 a_ = (ecx & 0xffu), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00616fe0 jne 0x616ff7 */ if (!ZF_) goto L_00616ff7;
  /* 00616fe2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00616fe4 cmp word ptr [esi + 0x11a], ax */ { const u32 m_ = (u32)(esi + 0x11au); u32 a_ = M16(m_), b_ = (eax & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00616feb setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00616fee lea eax, [eax*8 + 0x18] */ eax = (u32)((u32)(eax * 8u + 0x18u));
  /* 00616ff5 jmp 0x617037 */ goto L_00617037;
L_00616ff7:;
  /* 00616ff7 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00616ff9 jne 0x617013 */ if (!ZF_) goto L_00617013;
  /* 00616ffb cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00616ffe jge 0x617005 */ if (!LT_) goto L_00617005;
  /* 00617000 mov eax, 8 */ { eax = (u32)(0x8u); }
L_00617005:;
  /* 00617005 cmp word ptr [esi + 0x11a], 0 */ { const u32 m_ = (u32)(esi + 0x11au); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0061700d je 0x617037 */ if (ZF_) goto L_00617037;
  /* 0061700f add eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00617011 jmp 0x617037 */ goto L_00617037;
L_00617013:;
  /* 00617013 cmp cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00617016 jne 0x617037 */ if (!ZF_) goto L_00617037;
  /* 00617018 cmp word ptr [esi + 0x11a], 0 */ { const u32 m_ = (u32)(esi + 0x11au); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00617020 je 0x617037 */ if (ZF_) goto L_00617037;
  /* 00617022 lea ecx, [eax*4] */ ecx = (u32)((u32)(eax * 4u));
  /* 00617029 mov eax, 0x55555556 */ { eax = (u32)(0x55555556u); }
  /* 0061702e imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00617030 mov eax, edx */ { eax = (u32)(edx); }
  /* 00617032 shr edx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00617035 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00617037:;
  /* 00617037 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00617039 and edx, 0x8000 */ { u32 a_ = edx, b_ = 0x8000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061703f je 0x61707e */ if (ZF_) goto L_0061707e;
  /* 00617041 mov cl, byte ptr [esi + 0x126] */ { const u32 m_ = (u32)(esi + 0x126u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617047 cmp cl, 3 */ { u32 a_ = (ecx & 0xffu), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0061704a jne 0x617053 */ if (!ZF_) goto L_00617053;
  /* 0061704c mov eax, 0x20 */ { eax = (u32)(0x20u); }
  /* 00617051 jmp 0x61707e */ goto L_0061707e;
L_00617053:;
  /* 00617053 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00617055 jne 0x617068 */ if (!ZF_) goto L_00617068;
  /* 00617057 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00617059 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061705c setg cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!(ZF_|LT_)) ? 1u : 0u) & 0xffu); }
  /* 0061705f dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617060 and ecx, 0xfffffff0 */ { u32 a_ = ecx, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00617063 add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00617066 jmp 0x61707c */ goto L_0061707c;
L_00617068:;
  /* 00617068 cmp cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0061706b jne 0x61707e */ if (!ZF_) goto L_0061707e;
  /* 0061706d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0061706f cmp eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617072 setg cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!(ZF_|LT_)) ? 1u : 0u) & 0xffu); }
  /* 00617075 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617076 and ecx, 0xffffffe0 */ { u32 a_ = ecx, b_ = 0xffffffe0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00617079 add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0061707c:;
  /* 0061707c mov eax, ecx */ { eax = (u32)(ecx); }
L_0061707e:;
  /* 0061707e test bh, 0x40 */ { u32 a_ = ((ebx >> 8) & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00617081 je 0x6170d8 */ if (ZF_) goto L_006170d8;
  /* 00617083 cmp word ptr [esi + 0x11a], 0 */ { const u32 m_ = (u32)(esi + 0x11au); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0061708b je 0x617091 */ if (ZF_) goto L_00617091;
  /* 0061708d test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061708f jne 0x6170c7 */ if (!ZF_) goto L_006170c7;
L_00617091:;
  /* 00617091 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00617093 jne 0x6170c7 */ if (!ZF_) goto L_006170c7;
  /* 00617095 mov cl, byte ptr [esi + 0x126] */ { const u32 m_ = (u32)(esi + 0x126u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061709b cmp cl, 4 */ { u32 a_ = (ecx & 0xffu), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0061709e je 0x6170c7 */ if (ZF_) goto L_006170c7;
  /* 006170a0 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006170a3 jg 0x6170b6 */ if (!(ZF_|LT_)) goto L_006170b6;
  /* 006170a5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006170a7 cmp cl, 6 */ { u32 a_ = (ecx & 0xffu), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006170aa sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 006170ad lea eax, [eax*8 + 0x18] */ eax = (u32)((u32)(eax * 8u + 0x18u));
  /* 006170b4 jmp 0x6170d8 */ goto L_006170d8;
L_006170b6:;
  /* 006170b6 sub cl, 6 */ { u32 a_ = (ecx & 0xffu), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 006170b9 neg cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (0u - a_) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 006170bb sbb ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); ecx = (u32)(r_); }
  /* 006170bd and ecx, 0xfffffff0 */ { u32 a_ = ecx, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006170c0 add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006170c3 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 006170c5 jmp 0x6170d8 */ goto L_006170d8;
L_006170c7:;
  /* 006170c7 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 006170c9 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006170cc setg dl */ { edx = (edx & 0xffffff00u) | ((u32)((!(ZF_|LT_)) ? 1u : 0u) & 0xffu); }
  /* 006170cf dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006170d0 and edx, 0xffffffe0 */ { u32 a_ = edx, b_ = 0xffffffe0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 006170d3 add edx, 0x40 */ { u32 a_ = edx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006170d6 mov eax, edx */ { eax = (u32)(edx); }
L_006170d8:;
  /* 006170d8 test ebx, 0x100000 */ { u32 a_ = ebx, b_ = 0x100000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006170de je 0x6170f3 */ if (ZF_) goto L_006170f3;
  /* 006170e0 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006170e2 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 006170e4 mov cl, byte ptr [esi + 0x65] */ { const u32 m_ = (u32)(esi + 0x65u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006170e7 mov dl, byte ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006170ea imul ecx, edx */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 006170ed cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006170ef jle 0x6170f3 */ if ((ZF_|LT_)) goto L_006170f3;
  /* 006170f1 mov eax, ecx */ { eax = (u32)(ecx); }
L_006170f3:;
  /* 006170f3 add ebp, 7 */ { u32 a_ = ebp, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 006170f6 and ebp, 0xfffffff8 */ { u32 a_ = ebp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 006170f9 imul ebp, eax */ { s64 p_ = (s64)(s32)ebp * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebp = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 006170fc add ebp, 7 */ { u32 a_ = ebp, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 006170ff add eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00617102 shr ebp, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 00617105 sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00617108 lea eax, [eax + ebp + 1] */ eax = (u32)((u32)(eax + ebp + 0x1u));
  /* 0061710c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061710d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061710e call 0x60f270 */ esp -= 4; M32(esp) = 0x617113u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x61710eu); RETCHK(0x617113u, 0x61710eu); LOADALL;
  /* 00617113 mov dword ptr [esi + 0xec], eax */ { const u32 m_ = (u32)(esi + 0xecu); M32(m_) = (u32)(eax); }
  /* 00617119 mov eax, dword ptr [esi + 0xd8] */ { const u32 m_ = (u32)(esi + 0xd8u); eax = (u32)(M32(m_)); }
  /* 0061711f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617120 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00617121 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617122 call 0x60f270 */ esp -= 4; M32(esp) = 0x617127u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x617122u); RETCHK(0x617127u, 0x617122u); LOADALL;
  /* 00617127 mov ecx, dword ptr [esi + 0xd8] */ { const u32 m_ = (u32)(esi + 0xd8u); ecx = (u32)(M32(m_)); }
  /* 0061712d mov dword ptr [esi + 0xe8], eax */ { const u32 m_ = (u32)(esi + 0xe8u); M32(m_) = (u32)(eax); }
  /* 00617133 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617134 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00617135 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00617137 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00617138 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617139 call 0x60f340 */ esp -= 4; M32(esp) = 0x61713eu; SAVEALL; F_0060f340(c); ABI_CHECK(0x60f340u, 0x617139u); RETCHK(0x61713eu, 0x617139u); LOADALL;
  /* 0061713e mov eax, dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); eax = (u32)(M32(m_)); }
  /* 00617141 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00617144 or al, 0x40 */ { u32 a_ = (eax & 0xffu), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00617146 mov dword ptr [esi + 0x6c], eax */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(eax); }
  /* 00617149 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061714a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061714b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0061714c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061714d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00616f74(CPU *c) {
  NATIVE_HOOK(0x616f74u) REGS; LOADALL;
L_00616f74:;
  /* 00616f74 mov gs, word ptr [ecx] */ TRAP(0x616f74u, "unimpl mov gs, word ptr [ecx]");
  /* 00616f76 add dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00616f78 add byte ptr [edi], cl */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 00616f7a scasd eax, dword ptr es:[edi] */ { u32 st_ = c->df ? (u32)-4 : 4u; u32 a_ = eax, b_ = M32(edi); edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffffffffu, 4); }
  /* 00616f7b enter -0x3e7d, 7 */ TRAP(0x616f7bu, "unimpl enter -0x3e7d, 7");
  /* 00616f7f mov dword ptr [esi + 0xe0], eax */ { const u32 m_ = (u32)(esi + 0xe0u); M32(m_) = (u32)(eax); }
  /* 00616f85 shr ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00616f88 jmp 0x616fa8 */ goto L_00616fa8;
L_00616fa8:;
  /* 00616fa8 mov ebx, dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); ebx = (u32)(M32(m_)); }
  /* 00616fab inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00616fac xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00616fae mov dword ptr [esi + 0xdc], ecx */ { const u32 m_ = (u32)(esi + 0xdcu); M32(m_) = (u32)(ecx); }
  /* 00616fb4 mov al, byte ptr [esi + 0x129] */ { const u32 m_ = (u32)(esi + 0x129u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616fba test bl, 4 */ { u32 a_ = (ebx & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00616fbd je 0x616fcd */ if (ZF_) goto L_00616fcd;
  /* 00616fbf cmp byte ptr [esi + 0x127], 8 */ { const u32 m_ = (u32)(esi + 0x127u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00616fc6 jae 0x616fcd */ if (!CF_) goto L_00616fcd;
  /* 00616fc8 mov eax, 8 */ { eax = (u32)(0x8u); }
L_00616fcd:;
  /* 00616fcd mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00616fcf and edi, 0x1000 */ { u32 a_ = edi, b_ = 0x1000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00616fd5 je 0x617037 */ if (ZF_) goto L_00617037;
  /* 00616fd7 mov cl, byte ptr [esi + 0x126] */ { const u32 m_ = (u32)(esi + 0x126u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00616fdd cmp cl, 3 */ { u32 a_ = (ecx & 0xffu), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00616fe0 jne 0x616ff7 */ if (!ZF_) goto L_00616ff7;
  /* 00616fe2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00616fe4 cmp word ptr [esi + 0x11a], ax */ { const u32 m_ = (u32)(esi + 0x11au); u32 a_ = M16(m_), b_ = (eax & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00616feb setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00616fee lea eax, [eax*8 + 0x18] */ eax = (u32)((u32)(eax * 8u + 0x18u));
  /* 00616ff5 jmp 0x617037 */ goto L_00617037;
L_00616ff7:;
  /* 00616ff7 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00616ff9 jne 0x617013 */ if (!ZF_) goto L_00617013;
  /* 00616ffb cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00616ffe jge 0x617005 */ if (!LT_) goto L_00617005;
  /* 00617000 mov eax, 8 */ { eax = (u32)(0x8u); }
L_00617005:;
  /* 00617005 cmp word ptr [esi + 0x11a], 0 */ { const u32 m_ = (u32)(esi + 0x11au); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0061700d je 0x617037 */ if (ZF_) goto L_00617037;
  /* 0061700f add eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00617011 jmp 0x617037 */ goto L_00617037;
L_00617013:;
  /* 00617013 cmp cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00617016 jne 0x617037 */ if (!ZF_) goto L_00617037;
  /* 00617018 cmp word ptr [esi + 0x11a], 0 */ { const u32 m_ = (u32)(esi + 0x11au); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00617020 je 0x617037 */ if (ZF_) goto L_00617037;
  /* 00617022 lea ecx, [eax*4] */ ecx = (u32)((u32)(eax * 4u));
  /* 00617029 mov eax, 0x55555556 */ { eax = (u32)(0x55555556u); }
  /* 0061702e imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00617030 mov eax, edx */ { eax = (u32)(edx); }
  /* 00617032 shr edx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00617035 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00617037:;
  /* 00617037 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00617039 and edx, 0x8000 */ { u32 a_ = edx, b_ = 0x8000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061703f je 0x61707e */ if (ZF_) goto L_0061707e;
  /* 00617041 mov cl, byte ptr [esi + 0x126] */ { const u32 m_ = (u32)(esi + 0x126u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617047 cmp cl, 3 */ { u32 a_ = (ecx & 0xffu), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0061704a jne 0x617053 */ if (!ZF_) goto L_00617053;
  /* 0061704c mov eax, 0x20 */ { eax = (u32)(0x20u); }
  /* 00617051 jmp 0x61707e */ goto L_0061707e;
L_00617053:;
  /* 00617053 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00617055 jne 0x617068 */ if (!ZF_) goto L_00617068;
  /* 00617057 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00617059 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061705c setg cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!(ZF_|LT_)) ? 1u : 0u) & 0xffu); }
  /* 0061705f dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617060 and ecx, 0xfffffff0 */ { u32 a_ = ecx, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00617063 add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00617066 jmp 0x61707c */ goto L_0061707c;
L_00617068:;
  /* 00617068 cmp cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0061706b jne 0x61707e */ if (!ZF_) goto L_0061707e;
  /* 0061706d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0061706f cmp eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617072 setg cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!(ZF_|LT_)) ? 1u : 0u) & 0xffu); }
  /* 00617075 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617076 and ecx, 0xffffffe0 */ { u32 a_ = ecx, b_ = 0xffffffe0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00617079 add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0061707c:;
  /* 0061707c mov eax, ecx */ { eax = (u32)(ecx); }
L_0061707e:;
  /* 0061707e test bh, 0x40 */ { u32 a_ = ((ebx >> 8) & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00617081 je 0x6170d8 */ if (ZF_) goto L_006170d8;
  /* 00617083 cmp word ptr [esi + 0x11a], 0 */ { const u32 m_ = (u32)(esi + 0x11au); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0061708b je 0x617091 */ if (ZF_) goto L_00617091;
  /* 0061708d test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061708f jne 0x6170c7 */ if (!ZF_) goto L_006170c7;
L_00617091:;
  /* 00617091 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00617093 jne 0x6170c7 */ if (!ZF_) goto L_006170c7;
  /* 00617095 mov cl, byte ptr [esi + 0x126] */ { const u32 m_ = (u32)(esi + 0x126u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061709b cmp cl, 4 */ { u32 a_ = (ecx & 0xffu), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0061709e je 0x6170c7 */ if (ZF_) goto L_006170c7;
  /* 006170a0 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006170a3 jg 0x6170b6 */ if (!(ZF_|LT_)) goto L_006170b6;
  /* 006170a5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006170a7 cmp cl, 6 */ { u32 a_ = (ecx & 0xffu), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006170aa sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 006170ad lea eax, [eax*8 + 0x18] */ eax = (u32)((u32)(eax * 8u + 0x18u));
  /* 006170b4 jmp 0x6170d8 */ goto L_006170d8;
L_006170b6:;
  /* 006170b6 sub cl, 6 */ { u32 a_ = (ecx & 0xffu), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 006170b9 neg cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (0u - a_) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 006170bb sbb ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); ecx = (u32)(r_); }
  /* 006170bd and ecx, 0xfffffff0 */ { u32 a_ = ecx, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006170c0 add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006170c3 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 006170c5 jmp 0x6170d8 */ goto L_006170d8;
L_006170c7:;
  /* 006170c7 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 006170c9 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006170cc setg dl */ { edx = (edx & 0xffffff00u) | ((u32)((!(ZF_|LT_)) ? 1u : 0u) & 0xffu); }
  /* 006170cf dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006170d0 and edx, 0xffffffe0 */ { u32 a_ = edx, b_ = 0xffffffe0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 006170d3 add edx, 0x40 */ { u32 a_ = edx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006170d6 mov eax, edx */ { eax = (u32)(edx); }
L_006170d8:;
  /* 006170d8 test ebx, 0x100000 */ { u32 a_ = ebx, b_ = 0x100000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006170de je 0x6170f3 */ if (ZF_) goto L_006170f3;
  /* 006170e0 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006170e2 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 006170e4 mov cl, byte ptr [esi + 0x65] */ { const u32 m_ = (u32)(esi + 0x65u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006170e7 mov dl, byte ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006170ea imul ecx, edx */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 006170ed cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006170ef jle 0x6170f3 */ if ((ZF_|LT_)) goto L_006170f3;
  /* 006170f1 mov eax, ecx */ { eax = (u32)(ecx); }
L_006170f3:;
  /* 006170f3 add ebp, 7 */ { u32 a_ = ebp, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 006170f6 and ebp, 0xfffffff8 */ { u32 a_ = ebp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 006170f9 imul ebp, eax */ { s64 p_ = (s64)(s32)ebp * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebp = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 006170fc add ebp, 7 */ { u32 a_ = ebp, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 006170ff add eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00617102 shr ebp, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 00617105 sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00617108 lea eax, [eax + ebp + 1] */ eax = (u32)((u32)(eax + ebp + 0x1u));
  /* 0061710c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061710d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061710e call 0x60f270 */ esp -= 4; M32(esp) = 0x617113u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x61710eu); RETCHK(0x617113u, 0x61710eu); LOADALL;
  /* 00617113 mov dword ptr [esi + 0xec], eax */ { const u32 m_ = (u32)(esi + 0xecu); M32(m_) = (u32)(eax); }
  /* 00617119 mov eax, dword ptr [esi + 0xd8] */ { const u32 m_ = (u32)(esi + 0xd8u); eax = (u32)(M32(m_)); }
  /* 0061711f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617120 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00617121 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617122 call 0x60f270 */ esp -= 4; M32(esp) = 0x617127u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x617122u); RETCHK(0x617127u, 0x617122u); LOADALL;
  /* 00617127 mov ecx, dword ptr [esi + 0xd8] */ { const u32 m_ = (u32)(esi + 0xd8u); ecx = (u32)(M32(m_)); }
  /* 0061712d mov dword ptr [esi + 0xe8], eax */ { const u32 m_ = (u32)(esi + 0xe8u); M32(m_) = (u32)(eax); }
  /* 00617133 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617134 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00617135 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00617137 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00617138 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617139 call 0x60f340 */ esp -= 4; M32(esp) = 0x61713eu; SAVEALL; F_0060f340(c); ABI_CHECK(0x60f340u, 0x617139u); RETCHK(0x61713eu, 0x617139u); LOADALL;
  /* 0061713e mov eax, dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); eax = (u32)(M32(m_)); }
  /* 00617141 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00617144 or al, 0x40 */ { u32 a_ = (eax & 0xffu), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00617146 mov dword ptr [esi + 0x6c], eax */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(eax); }
  /* 00617149 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061714a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061714b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0061714c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061714d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00617150(CPU *c) {
  NATIVE_HOOK(0x617150u) REGS; LOADALL;
L_00617150:;
  /* 00617150 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00617154 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00617155 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617156 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00617157 lea ecx, [eax + 0x8c] */ ecx = (u32)((u32)(eax + 0x8cu));
  /* 0061715d lea esi, [eax + 0x980] */ esi = (u32)((u32)(eax + 0x980u));
  /* 00617163 lea ebx, [eax + 0xa74] */ ebx = (u32)((u32)(eax + 0xa74u));
  /* 00617169 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0061716b mov dword ptr [eax + 0xb10], ecx */ { const u32 m_ = (u32)(eax + 0xb10u); M32(m_) = (u32)(ecx); }
  /* 00617171 mov dword ptr [eax + 0xb18], 0x682a60 */ { const u32 m_ = (u32)(eax + 0xb18u); M32(m_) = (u32)(0x682a60u); }
  /* 0061717b mov dword ptr [eax + 0xb1c], esi */ { const u32 m_ = (u32)(eax + 0xb1cu); M32(m_) = (u32)(esi); }
  /* 00617181 mov dword ptr [eax + 0xb24], 0x682a74 */ { const u32 m_ = (u32)(eax + 0xb24u); M32(m_) = (u32)(0x682a74u); }
  /* 0061718b mov dword ptr [eax + 0xb28], ebx */ { const u32 m_ = (u32)(eax + 0xb28u); M32(m_) = (u32)(ebx); }
  /* 00617191 mov dword ptr [eax + 0xb30], 0x682a88 */ { const u32 m_ = (u32)(eax + 0xb30u); M32(m_) = (u32)(0x682a88u); }
  /* 0061719b mov word ptr [eax + 0x16b0], di */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 006171a2 mov dword ptr [eax + 0x16b4], edi */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(edi); }
  /* 006171a8 mov dword ptr [eax + 0x16ac], 8 */ { const u32 m_ = (u32)(eax + 0x16acu); M32(m_) = (u32)(0x8u); }
  /* 006171b2 mov edx, 0x11e */ { edx = (u32)(0x11eu); }
L_006171b7:;
  /* 006171b7 mov word ptr [ecx], di */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 006171ba add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006171bd dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006171be jne 0x6171b7 */ if (!ZF_) goto L_006171b7;
  /* 006171c0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 006171c2 mov edx, 0x1e */ { edx = (u32)(0x1eu); }
L_006171c7:;
  /* 006171c7 mov word ptr [ecx], di */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 006171ca add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006171cd dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006171ce jne 0x6171c7 */ if (!ZF_) goto L_006171c7;
  /* 006171d0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 006171d2 mov edx, 0x13 */ { edx = (u32)(0x13u); }
L_006171d7:;
  /* 006171d7 mov word ptr [ecx], di */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 006171da add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006171dd dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006171de jne 0x6171d7 */ if (!ZF_) goto L_006171d7;
  /* 006171e0 mov dword ptr [eax + 0x16a4], edi */ { const u32 m_ = (u32)(eax + 0x16a4u); M32(m_) = (u32)(edi); }
  /* 006171e6 mov dword ptr [eax + 0x16a0], edi */ { const u32 m_ = (u32)(eax + 0x16a0u); M32(m_) = (u32)(edi); }
  /* 006171ec mov dword ptr [eax + 0x16a8], edi */ { const u32 m_ = (u32)(eax + 0x16a8u); M32(m_) = (u32)(edi); }
  /* 006171f2 mov dword ptr [eax + 0x1698], edi */ { const u32 m_ = (u32)(eax + 0x1698u); M32(m_) = (u32)(edi); }
  /* 006171f8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006171f9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006171fa mov word ptr [eax + 0x48c], 1 */ { const u32 m_ = (u32)(eax + 0x48cu); M16(m_) = (u16)(0x1u); }
  /* 00617203 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00617204 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00617210(CPU *c) {
  NATIVE_HOOK(0x617210u) REGS; LOADALL;
L_00617210:;
  /* 00617210 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00617214 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00617215 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617216 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00617217 mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 0061721d cmp ecx, 0xd */ { u32 a_ = ecx, b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617220 jle 0x61727b */ if ((ZF_|LT_)) goto L_0061727b;
  /* 00617222 mov esi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 00617226 mov edx, esi */ { edx = (u32)(esi); }
  /* 00617228 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0061722a mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061722d or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00617234 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00617237 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061723d mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00617240 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00617243 mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617249 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061724a mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 0061724d mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0061724f mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00617252 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00617255 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00617258 mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 0061725e inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061725f mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00617262 mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 00617264 sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00617266 shr si, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (esi & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); esi = (esi & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 00617269 add edx, -0xd */ { u32 a_ = edx, b_ = 0xfffffff3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0061726c mov dword ptr [eax + 0x16b4], edx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(edx); }
  /* 00617272 mov word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 00617279 jmp 0x617291 */ goto L_00617291;
L_0061727b:;
  /* 0061727b mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0061727f shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00617281 or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00617288 add ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061728b mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
L_00617291:;
  /* 00617291 mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 00617297 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 0061729b cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061729e jle 0x6172c3 */ if ((ZF_|LT_)) goto L_006172c3;
  /* 006172a0 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006172a3 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 006172a6 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006172ac mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006172af mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 006172b2 mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006172b8 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006172b9 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 006172bc mov ecx, edx */ { ecx = (u32)(edx); }
  /* 006172be mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 006172c1 jmp 0x6172d3 */ goto L_006172d3;
L_006172c3:;
  /* 006172c3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006172c5 jle 0x6172dd */ if ((ZF_|LT_)) goto L_006172dd;
  /* 006172c7 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006172ca mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 006172cd mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
L_006172d3:;
  /* 006172d3 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006172d6 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 006172d9 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006172da mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
L_006172dd:;
  /* 006172dd mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 006172e0 mov esi, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); esi = (u32)(M32(m_)); }
  /* 006172e3 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 006172e7 mov word ptr [eax + 0x16b0], 0 */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)(0x0u); }
  /* 006172f0 mov dword ptr [eax + 0x16b4], 0 */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(0x0u); }
  /* 006172fa mov dword ptr [eax + 0x16ac], 8 */ { const u32 m_ = (u32)(eax + 0x16acu); M32(m_) = (u32)(0x8u); }
  /* 00617304 mov byte ptr [edx + esi], cl */ { const u32 m_ = (u32)(edx + esi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00617307 mov esi, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); esi = (u32)(M32(m_)); }
  /* 0061730a mov ebx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061730d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061730f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617310 mov dl, ch */ { edx = (edx & 0xffffff00u) | ((u32)(((ecx >> 8) & 0xffu)) & 0xffu); }
  /* 00617312 mov dword ptr [eax + 0x14], esi */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(esi); }
  /* 00617315 mov byte ptr [esi + ebx], dl */ { const u32 m_ = (u32)(esi + ebx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00617318 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061731b mov ebx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061731e inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061731f mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00617322 mov esi, edx */ { esi = (u32)(edx); }
  /* 00617324 mov dl, cl */ { edx = (edx & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 00617326 not dl */ { edx = (edx & 0xffffff00u) | ((u32)(~(edx & 0xffu) & 0xffu) & 0xffu); }
  /* 00617328 mov byte ptr [esi + ebx], dl */ { const u32 m_ = (u32)(esi + ebx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0061732b mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061732e inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061732f xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00617331 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00617334 mov esi, edx */ { esi = (u32)(edx); }
  /* 00617336 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00617338 not edx */ { edx = (u32)(~edx & 0xffffffffu); }
  /* 0061733a mov bl, dh */ { ebx = (ebx & 0xffffff00u) | ((u32)(((edx >> 8) & 0xffu)) & 0xffu); }
  /* 0061733c mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0061733f mov byte ptr [esi + edx], bl */ { const u32 m_ = (u32)(esi + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00617342 mov ebx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ebx = (u32)(M32(m_)); }
  /* 00617345 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617346 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00617348 mov dword ptr [eax + 0x14], ebx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0061734b mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0061734d je 0x617366 */ if (ZF_) goto L_00617366;
  /* 0061734f mov esi, ecx */ { esi = (u32)(ecx); }
L_00617351:;
  /* 00617351 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00617354 mov bl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617356 mov byte ptr [edx + ecx], bl */ { const u32 m_ = (u32)(edx + ecx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00617359 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0061735c inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061735d inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061735e dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0061735f mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00617362 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00617364 jne 0x617351 */ if (!ZF_) goto L_00617351;
L_00617366:;
  /* 00617366 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00617367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00617368 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00617369 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00617370(CPU *c) {
  NATIVE_HOOK(0x617370u) REGS; LOADALL;
L_00617370:;
  /* 00617370 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00617374 mov edx, 2 */ { edx = (u32)(0x2u); }
  /* 00617379 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0061737a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061737b mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 00617381 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00617383 or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 0061738a cmp ecx, 0xd */ { u32 a_ = ecx, b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061738d jle 0x6173dc */ if ((ZF_|LT_)) goto L_006173dc;
  /* 0061738f mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00617392 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00617395 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061739b mov esi, 2 */ { esi = (u32)(0x2u); }
  /* 006173a0 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006173a3 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 006173a6 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 006173a9 mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006173af inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006173b0 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 006173b3 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006173b6 mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 006173bc mov ebx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ebx = (u32)(M32(m_)); }
  /* 006173bf mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 006173c1 sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 006173c3 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006173c4 shr si, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (esi & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); esi = (esi & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 006173c7 add edx, -0xd */ { u32 a_ = edx, b_ = 0xfffffff3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006173ca mov dword ptr [eax + 0x14], ebx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ebx); }
  /* 006173cd mov dword ptr [eax + 0x16b4], edx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(edx); }
  /* 006173d3 mov word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 006173da jmp 0x6173e5 */ goto L_006173e5;
L_006173dc:;
  /* 006173dc add ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006173df mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
L_006173e5:;
  /* 006173e5 mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 006173eb xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 006173ed shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 006173ef or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 006173f6 cmp ecx, 9 */ { u32 a_ = ecx, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006173f9 jle 0x617445 */ if ((ZF_|LT_)) goto L_00617445;
  /* 006173fb mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006173fe mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00617401 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617407 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00617409 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061740c mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0061740f mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00617412 mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617418 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617419 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0061741c mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061741f mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 00617425 mov ebx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ebx = (u32)(M32(m_)); }
  /* 00617428 mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 0061742a sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0061742c inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061742d shr si, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (esi & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); esi = (esi & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 00617430 add edx, -9 */ { u32 a_ = edx, b_ = 0xfffffff7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00617433 mov dword ptr [eax + 0x14], ebx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00617436 mov dword ptr [eax + 0x16b4], edx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(edx); }
  /* 0061743c mov word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 00617443 jmp 0x61744e */ goto L_0061744e;
L_00617445:;
  /* 00617445 add ecx, 7 */ { u32 a_ = ecx, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00617448 mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
L_0061744e:;
  /* 0061744e mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 00617454 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00617456 cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617459 jne 0x617495 */ if (!ZF_) goto L_00617495;
  /* 0061745b mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061745e mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00617461 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617467 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061746a mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061746d mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617473 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617474 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00617477 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00617479 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0061747c mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061747f mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00617482 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617483 mov word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 0061748a mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0061748d mov dword ptr [eax + 0x16b4], esi */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(esi); }
  /* 00617493 jmp 0x6174ce */ goto L_006174ce;
L_00617495:;
  /* 00617495 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617498 jl 0x6174ce */ if (LT_) goto L_006174ce;
  /* 0061749a mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061749d mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 006174a0 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006174a6 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006174a9 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 006174ac movzx cx, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ecx = (ecx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 006174b4 mov word ptr [eax + 0x16b0], cx */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 006174bb mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 006174c1 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006174c2 add ecx, -8 */ { u32 a_ = ecx, b_ = 0xfffffff8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006174c5 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 006174c8 mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
L_006174ce:;
  /* 006174ce mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 006174d4 mov edx, dword ptr [eax + 0x16ac] */ { const u32 m_ = (u32)(eax + 0x16acu); edx = (u32)(M32(m_)); }
  /* 006174da sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006174dc add edx, 0xb */ { u32 a_ = edx, b_ = 0xbu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006174df cmp edx, 9 */ { u32 a_ = edx, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006174e2 jge 0x617647 */ if (!LT_) goto L_00617647;
  /* 006174e8 mov edx, 2 */ { edx = (u32)(0x2u); }
  /* 006174ed shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 006174ef or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 006174f6 cmp ecx, 0xd */ { u32 a_ = ecx, b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006174f9 jle 0x61754a */ if ((ZF_|LT_)) goto L_0061754a;
  /* 006174fb mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006174fe mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00617501 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617507 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061750a mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061750d mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617513 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617514 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00617517 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00617519 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0061751c mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061751f mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00617522 mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 00617528 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617529 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0061752c mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 0061752e sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00617530 mov ebx, 2 */ { ebx = (u32)(0x2u); }
  /* 00617535 shr bx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (ebx & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); ebx = (ebx & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 00617538 add edx, -0xd */ { u32 a_ = edx, b_ = 0xfffffff3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0061753b mov dword ptr [eax + 0x16b4], edx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(edx); }
  /* 00617541 mov word ptr [eax + 0x16b0], bx */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 00617548 jmp 0x617553 */ goto L_00617553;
L_0061754a:;
  /* 0061754a add ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061754d mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
L_00617553:;
  /* 00617553 mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 00617559 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061755b shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0061755d or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00617564 cmp ecx, 9 */ { u32 a_ = ecx, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617567 jle 0x6175b5 */ if ((ZF_|LT_)) goto L_006175b5;
  /* 00617569 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061756c mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061756f mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617575 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00617578 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061757b mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617581 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617582 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00617585 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00617587 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0061758a mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061758d mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00617590 mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 00617596 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617597 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0061759a mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 0061759c sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0061759e xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 006175a0 shr bx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (ebx & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); ebx = (ebx & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 006175a3 add edx, -9 */ { u32 a_ = edx, b_ = 0xfffffff7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006175a6 mov dword ptr [eax + 0x16b4], edx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(edx); }
  /* 006175ac mov word ptr [eax + 0x16b0], bx */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 006175b3 jmp 0x6175be */ goto L_006175be;
L_006175b5:;
  /* 006175b5 add ecx, 7 */ { u32 a_ = ecx, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006175b8 mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
L_006175be:;
  /* 006175be mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 006175c4 cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006175c7 jne 0x61760e */ if (!ZF_) goto L_0061760e;
  /* 006175c9 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006175cc mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 006175cf mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006175d5 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006175d8 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 006175db mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006175e1 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006175e2 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 006175e5 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 006175e7 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 006175ea mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006175ed mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 006175f0 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006175f1 mov word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 006175f8 mov dword ptr [eax + 0x16b4], esi */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(esi); }
  /* 006175fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006175ff mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00617602 mov dword ptr [eax + 0x16ac], 7 */ { const u32 m_ = (u32)(eax + 0x16acu); M32(m_) = (u32)(0x7u); }
  /* 0061760c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061760d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061760e:;
  /* 0061760e cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617611 jl 0x617647 */ if (LT_) goto L_00617647;
  /* 00617613 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00617616 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00617619 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061761f mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00617622 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00617625 movzx cx, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ecx = (ecx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 0061762d mov word ptr [eax + 0x16b0], cx */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 00617634 mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 0061763a inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061763b add ecx, -8 */ { u32 a_ = ecx, b_ = 0xfffffff8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061763e mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00617641 mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
L_00617647:;
  /* 00617647 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00617648 mov dword ptr [eax + 0x16ac], 7 */ { const u32 m_ = (u32)(eax + 0x16acu); M32(m_) = (u32)(0x7u); }
  /* 00617652 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00617653 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00617461(CPU *c) {
  NATIVE_HOOK(0x617461u) REGS; LOADALL;
L_00617461:;
  /* 00617461 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617467 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061746a mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061746d mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617473 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617474 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00617477 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00617479 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0061747c mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061747f mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00617482 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617483 mov word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 0061748a mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0061748d mov dword ptr [eax + 0x16b4], esi */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(esi); }
  /* 00617493 jmp 0x6174ce */ goto L_006174ce;
L_006174ce:;
  /* 006174ce mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 006174d4 mov edx, dword ptr [eax + 0x16ac] */ { const u32 m_ = (u32)(eax + 0x16acu); edx = (u32)(M32(m_)); }
  /* 006174da sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006174dc add edx, 0xb */ { u32 a_ = edx, b_ = 0xbu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006174df cmp edx, 9 */ { u32 a_ = edx, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006174e2 jge 0x617647 */ if (!LT_) goto L_00617647;
  /* 006174e8 mov edx, 2 */ { edx = (u32)(0x2u); }
  /* 006174ed shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 006174ef or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 006174f6 cmp ecx, 0xd */ { u32 a_ = ecx, b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006174f9 jle 0x61754a */ if ((ZF_|LT_)) goto L_0061754a;
  /* 006174fb mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006174fe mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00617501 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617507 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061750a mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061750d mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617513 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617514 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00617517 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00617519 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0061751c mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061751f mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00617522 mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 00617528 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617529 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0061752c mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 0061752e sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00617530 mov ebx, 2 */ { ebx = (u32)(0x2u); }
  /* 00617535 shr bx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (ebx & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); ebx = (ebx & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 00617538 add edx, -0xd */ { u32 a_ = edx, b_ = 0xfffffff3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0061753b mov dword ptr [eax + 0x16b4], edx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(edx); }
  /* 00617541 mov word ptr [eax + 0x16b0], bx */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 00617548 jmp 0x617553 */ goto L_00617553;
L_0061754a:;
  /* 0061754a add ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061754d mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
L_00617553:;
  /* 00617553 mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 00617559 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061755b shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0061755d or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00617564 cmp ecx, 9 */ { u32 a_ = ecx, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617567 jle 0x6175b5 */ if ((ZF_|LT_)) goto L_006175b5;
  /* 00617569 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061756c mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061756f mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617575 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00617578 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061757b mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617581 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617582 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00617585 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00617587 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0061758a mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061758d mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00617590 mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 00617596 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617597 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0061759a mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 0061759c sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0061759e xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 006175a0 shr bx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (ebx & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); ebx = (ebx & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 006175a3 add edx, -9 */ { u32 a_ = edx, b_ = 0xfffffff7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006175a6 mov dword ptr [eax + 0x16b4], edx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(edx); }
  /* 006175ac mov word ptr [eax + 0x16b0], bx */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 006175b3 jmp 0x6175be */ goto L_006175be;
L_006175b5:;
  /* 006175b5 add ecx, 7 */ { u32 a_ = ecx, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006175b8 mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
L_006175be:;
  /* 006175be mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 006175c4 cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006175c7 jne 0x61760e */ if (!ZF_) goto L_0061760e;
  /* 006175c9 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006175cc mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 006175cf mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006175d5 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006175d8 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 006175db mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006175e1 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006175e2 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 006175e5 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 006175e7 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 006175ea mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006175ed mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 006175f0 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006175f1 mov word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 006175f8 mov dword ptr [eax + 0x16b4], esi */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(esi); }
  /* 006175fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006175ff mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00617602 mov dword ptr [eax + 0x16ac], 7 */ { const u32 m_ = (u32)(eax + 0x16acu); M32(m_) = (u32)(0x7u); }
  /* 0061760c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061760d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061760e:;
  /* 0061760e cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617611 jl 0x617647 */ if (LT_) goto L_00617647;
  /* 00617613 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00617616 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00617619 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061761f mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00617622 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00617625 movzx cx, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ecx = (ecx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 0061762d mov word ptr [eax + 0x16b0], cx */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 00617634 mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 0061763a inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061763b add ecx, -8 */ { u32 a_ = ecx, b_ = 0xfffffff8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061763e mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00617641 mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
L_00617647:;
  /* 00617647 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00617648 mov dword ptr [eax + 0x16ac], 7 */ { const u32 m_ = (u32)(eax + 0x16acu); M32(m_) = (u32)(0x7u); }
  /* 00617652 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00617653 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00617660(CPU *c) {
  NATIVE_HOOK(0x617660u) REGS; LOADALL;
L_00617660:;
  /* 00617660 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00617661 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00617662 mov ebp, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebp = (u32)(M32(m_)); }
  /* 00617666 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617667 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0061766b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061766c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0061766e xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00617670 cmp dword ptr [esi + 0x7c], ebx */ { const u32 m_ = (u32)(esi + 0x7cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617673 jle 0x617787 */ if ((ZF_|LT_)) goto L_00617787;
  /* 00617679 cmp byte ptr [esi + 0x1c], 2 */ { const u32 m_ = (u32)(esi + 0x1cu); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0061767d jne 0x6176ea */ if (!ZF_) goto L_006176ea;
  /* 0061767f xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00617681 lea eax, [esi + 0x8c] */ eax = (u32)((u32)(esi + 0x8cu));
  /* 00617687 mov ecx, 7 */ { ecx = (u32)(0x7u); }
L_0061768c:;
  /* 0061768c xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0061768e mov di, word ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00617691 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00617694 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00617696 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617697 jne 0x61768c */ if (!ZF_) goto L_0061768c;
  /* 00617699 lea eax, [esi + 0xa8] */ eax = (u32)((u32)(esi + 0xa8u));
  /* 0061769f mov ecx, 0x79 */ { ecx = (u32)(0x79u); }
  /* 006176a4 mov edi, 0x80 */ { edi = (u32)(0x80u); }
L_006176a9:;
  /* 006176a9 xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 006176ab mov bp, word ptr [eax] */ { const u32 m_ = (u32)(eax); ebp = (ebp & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006176ae add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006176b1 add ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 006176b3 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006176b4 jne 0x6176a9 */ if (!ZF_) goto L_006176a9;
  /* 006176b6 cmp edi, 0x100 */ { u32 a_ = edi, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006176bc jge 0x6176d9 */ if (!LT_) goto L_006176d9;
  /* 006176be mov eax, 0x100 */ { eax = (u32)(0x100u); }
  /* 006176c3 lea ecx, [esi + edi*4 + 0x8c] */ ecx = (u32)((u32)(esi + edi * 4u + 0x8cu));
  /* 006176ca sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_006176cc:;
  /* 006176cc xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 006176ce mov di, word ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006176d1 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006176d4 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006176d6 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006176d7 jne 0x6176cc */ if (!ZF_) goto L_006176cc;
L_006176d9:;
  /* 006176d9 mov ebp, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebp = (u32)(M32(m_)); }
  /* 006176dd shr ebx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 006176e0 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006176e2 setbe al */ { eax = (eax & 0xffffff00u) | ((u32)(((CF_|ZF_)) ? 1u : 0u) & 0xffu); }
  /* 006176e5 mov byte ptr [esi + 0x1c], al */ { const u32 m_ = (u32)(esi + 0x1cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 006176e8 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_006176ea:;
  /* 006176ea lea ecx, [esi + 0xb10] */ ecx = (u32)((u32)(esi + 0xb10u));
  /* 006176f0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006176f1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006176f2 call 0x617bc0 */ esp -= 4; M32(esp) = 0x6176f7u; SAVEALL; F_00617bc0(c); ABI_CHECK(0x617bc0u, 0x6176f2u); RETCHK(0x6176f7u, 0x6176f2u); LOADALL;
  /* 006176f7 lea edx, [esi + 0xb1c] */ edx = (u32)((u32)(esi + 0xb1cu));
  /* 006176fd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006176fe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006176ff call 0x617bc0 */ esp -= 4; M32(esp) = 0x617704u; SAVEALL; F_00617bc0(c); ABI_CHECK(0x617bc0u, 0x6176ffu); RETCHK(0x617704u, 0x6176ffu); LOADALL;
  /* 00617704 mov eax, dword ptr [esi + 0xb14] */ { const u32 m_ = (u32)(esi + 0xb14u); eax = (u32)(M32(m_)); }
  /* 0061770a lea ecx, [esi + 0x8c] */ ecx = (u32)((u32)(esi + 0x8cu));
  /* 00617710 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00617711 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00617712 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617713 call 0x618110 */ esp -= 4; M32(esp) = 0x617718u; SAVEALL; F_00618110(c); ABI_CHECK(0x618110u, 0x617713u); RETCHK(0x617718u, 0x617713u); LOADALL;
  /* 00617718 mov edx, dword ptr [esi + 0xb20] */ { const u32 m_ = (u32)(esi + 0xb20u); edx = (u32)(M32(m_)); }
  /* 0061771e lea eax, [esi + 0x980] */ eax = (u32)((u32)(esi + 0x980u));
  /* 00617724 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00617725 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00617726 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617727 call 0x618110 */ esp -= 4; M32(esp) = 0x61772cu; SAVEALL; F_00618110(c); ABI_CHECK(0x618110u, 0x617727u); RETCHK(0x61772cu, 0x617727u); LOADALL;
  /* 0061772c lea ecx, [esi + 0xb28] */ ecx = (u32)((u32)(esi + 0xb28u));
  /* 00617732 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00617733 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617734 call 0x617bc0 */ esp -= 4; M32(esp) = 0x617739u; SAVEALL; F_00617bc0(c); ABI_CHECK(0x617bc0u, 0x617734u); RETCHK(0x617739u, 0x617734u); LOADALL;
  /* 00617739 add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061773c mov eax, 0x12 */ { eax = (u32)(0x12u); }
L_00617741:;
  /* 00617741 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00617743 mov dl, byte ptr [eax + 0x63d984] */ { const u32 m_ = (u32)(eax + 0x63d984u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617749 cmp word ptr [esi + edx*4 + 0xa76], bx */ { const u32 m_ = (u32)(esi + edx * 4u + 0xa76u); u32 a_ = M16(m_), b_ = (ebx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00617751 jne 0x617759 */ if (!ZF_) goto L_00617759;
  /* 00617753 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617754 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617757 jge 0x617741 */ if (!LT_) goto L_00617741;
L_00617759:;
  /* 00617759 mov edx, dword ptr [esi + 0x16a0] */ { const u32 m_ = (u32)(esi + 0x16a0u); edx = (u32)(M32(m_)); }
  /* 0061775f lea ecx, [eax + eax*2 + 0x11] */ ecx = (u32)((u32)(eax + eax * 2u + 0x11u));
  /* 00617763 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00617765 mov edi, eax */ { edi = (u32)(eax); }
  /* 00617767 mov eax, dword ptr [esi + 0x16a4] */ { const u32 m_ = (u32)(esi + 0x16a4u); eax = (u32)(M32(m_)); }
  /* 0061776d mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0061776f add ecx, 0xa */ { u32 a_ = ecx, b_ = 0xau; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00617772 add eax, 0xa */ { u32 a_ = eax, b_ = 0xau; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00617775 shr ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00617778 shr eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0061777b cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061777d mov dword ptr [esi + 0x16a0], edx */ { const u32 m_ = (u32)(esi + 0x16a0u); M32(m_) = (u32)(edx); }
  /* 00617783 ja 0x61778c */ if (!(CF_|ZF_)) goto L_0061778c;
  /* 00617785 jmp 0x61778a */ goto L_0061778a;
L_00617787:;
  /* 00617787 lea eax, [ebp + 5] */ eax = (u32)((u32)(ebp + 0x5u));
L_0061778a:;
  /* 0061778a mov ecx, eax */ { ecx = (u32)(eax); }
L_0061778c:;
  /* 0061778c lea edx, [ebp + 4] */ edx = (u32)((u32)(ebp + 0x4u));
  /* 0061778f cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617791 ja 0x6177b0 */ if (!(CF_|ZF_)) goto L_006177b0;
  /* 00617793 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 00617797 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617799 je 0x6177b0 */ if (ZF_) goto L_006177b0;
  /* 0061779b mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0061779f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006177a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006177a1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006177a2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006177a3 call 0x617210 */ esp -= 4; M32(esp) = 0x6177a8u; SAVEALL; F_00617210(c); ABI_CHECK(0x617210u, 0x6177a3u); RETCHK(0x6177a8u, 0x6177a3u); LOADALL;
  /* 006177a8 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006177ab jmp 0x617b49 */ goto L_00617b49;
L_006177b0:;
  /* 006177b0 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006177b2 mov ecx, dword ptr [esi + 0x16b4] */ { const u32 m_ = (u32)(esi + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 006177b8 jne 0x617856 */ if (!ZF_) goto L_00617856;
  /* 006177be cmp ecx, 0xd */ { u32 a_ = ecx, b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006177c1 jle 0x617825 */ if ((ZF_|LT_)) goto L_00617825;
  /* 006177c3 mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 006177c7 mov dword ptr [esp + 0x1c], ebx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 006177cb lea eax, [edx + 2] */ eax = (u32)((u32)(edx + 0x2u));
  /* 006177ce mov edx, eax */ { edx = (u32)(eax); }
  /* 006177d0 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 006177d2 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 006177d5 or word ptr [esi + 0x16b0], dx */ { const u32 m_ = (u32)(esi + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 006177dc mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 006177df mov bl, byte ptr [esi + 0x16b0] */ { const u32 m_ = (u32)(esi + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006177e5 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006177e8 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 006177eb mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 006177ee mov bl, byte ptr [esi + 0x16b1] */ { const u32 m_ = (u32)(esi + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006177f4 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006177f5 mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 006177f8 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006177fb mov edx, dword ptr [esi + 0x16b4] */ { const u32 m_ = (u32)(esi + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 00617801 mov ebp, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ebp = (u32)(M32(m_)); }
  /* 00617804 mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 00617806 mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 0061780a sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0061780c shr ax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (eax & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); eax = (eax & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 0061780f inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617810 add edx, -0xd */ { u32 a_ = edx, b_ = 0xfffffff3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00617813 mov dword ptr [esi + 0x14], ebp */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebp); }
  /* 00617816 mov dword ptr [esi + 0x16b4], edx */ { const u32 m_ = (u32)(esi + 0x16b4u); M32(m_) = (u32)(edx); }
  /* 0061781c mov word ptr [esi + 0x16b0], ax */ { const u32 m_ = (u32)(esi + 0x16b0u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00617823 jmp 0x61783e */ goto L_0061783e;
L_00617825:;
  /* 00617825 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 00617829 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061782c shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0061782e or word ptr [esi + 0x16b0], ax */ { const u32 m_ = (u32)(esi + 0x16b0u); u32 a_ = M16(m_), b_ = (eax & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00617835 add ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00617838 mov dword ptr [esi + 0x16b4], ecx */ { const u32 m_ = (u32)(esi + 0x16b4u); M32(m_) = (u32)(ecx); }
L_0061783e:;
  /* 0061783e push 0x63de18 */ { u32 v_ = 0x63de18u; esp -= 4; M32(esp) = v_; }
  /* 00617843 push 0x63d998 */ { u32 v_ = 0x63d998u; esp -= 4; M32(esp) = v_; }
  /* 00617848 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617849 call 0x618720 */ esp -= 4; M32(esp) = 0x61784eu; SAVEALL; F_00618720(c); ABI_CHECK(0x618720u, 0x617849u); RETCHK(0x61784eu, 0x617849u); LOADALL;
  /* 0061784e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00617851 jmp 0x617b49 */ goto L_00617b49;
L_00617856:;
  /* 00617856 cmp ecx, 0xd */ { u32 a_ = ecx, b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617859 jle 0x6178b7 */ if ((ZF_|LT_)) goto L_006178b7;
  /* 0061785b mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0061785f lea eax, [edx + 4] */ eax = (u32)((u32)(edx + 0x4u));
  /* 00617862 mov edx, eax */ { edx = (u32)(eax); }
  /* 00617864 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00617866 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00617869 or word ptr [esi + 0x16b0], dx */ { const u32 m_ = (u32)(esi + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00617870 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00617873 mov bl, byte ptr [esi + 0x16b0] */ { const u32 m_ = (u32)(esi + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617879 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061787c mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061787f mov bl, byte ptr [esi + 0x16b1] */ { const u32 m_ = (u32)(esi + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617885 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617886 mov dword ptr [esi + 0x14], edx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edx); }
  /* 00617889 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0061788b mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0061788e mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00617891 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00617894 mov edx, dword ptr [esi + 0x16b4] */ { const u32 m_ = (u32)(esi + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 0061789a inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061789b mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0061789e mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 006178a0 sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 006178a2 shr ax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (eax & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); eax = (eax & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 006178a5 add edx, -0xd */ { u32 a_ = edx, b_ = 0xfffffff3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006178a8 mov dword ptr [esi + 0x16b4], edx */ { const u32 m_ = (u32)(esi + 0x16b4u); M32(m_) = (u32)(edx); }
  /* 006178ae mov word ptr [esi + 0x16b0], ax */ { const u32 m_ = (u32)(esi + 0x16b0u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 006178b5 jmp 0x6178d0 */ goto L_006178d0;
L_006178b7:;
  /* 006178b7 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 006178bb add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006178be shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 006178c0 or word ptr [esi + 0x16b0], ax */ { const u32 m_ = (u32)(esi + 0x16b0u); u32 a_ = M16(m_), b_ = (eax & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 006178c7 add ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006178ca mov dword ptr [esi + 0x16b4], ecx */ { const u32 m_ = (u32)(esi + 0x16b4u); M32(m_) = (u32)(ecx); }
L_006178d0:;
  /* 006178d0 mov ebp, dword ptr [esi + 0xb20] */ { const u32 m_ = (u32)(esi + 0xb20u); ebp = (u32)(M32(m_)); }
  /* 006178d6 mov ebx, dword ptr [esi + 0xb14] */ { const u32 m_ = (u32)(esi + 0xb14u); ebx = (u32)(M32(m_)); }
  /* 006178dc mov ecx, dword ptr [esi + 0x16b4] */ { const u32 m_ = (u32)(esi + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 006178e2 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006178e3 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006178e4 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006178e5 cmp ecx, 0xb */ { u32 a_ = ecx, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006178e8 mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 006178ec mov dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ebx); }
  /* 006178f0 lea eax, [ebx - 0x101] */ eax = (u32)((u32)(ebx + 0xfffffeffu));
  /* 006178f6 jle 0x617955 */ if ((ZF_|LT_)) goto L_00617955;
  /* 006178f8 mov edx, eax */ { edx = (u32)(eax); }
  /* 006178fa mov dword ptr [esp + 0x14], ebx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ebx); }
  /* 006178fe shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00617900 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00617903 or word ptr [esi + 0x16b0], dx */ { const u32 m_ = (u32)(esi + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 0061790a mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0061790d mov bl, byte ptr [esi + 0x16b0] */ { const u32 m_ = (u32)(esi + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617913 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00617916 mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 00617919 mov bl, byte ptr [esi + 0x16b1] */ { const u32 m_ = (u32)(esi + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061791f inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617920 mov dword ptr [esi + 0x14], edx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edx); }
  /* 00617923 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00617925 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00617928 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061792b mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0061792e mov edx, dword ptr [esi + 0x16b4] */ { const u32 m_ = (u32)(esi + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 00617934 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617935 mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00617938 mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 0061793a mov ebx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebx = (u32)(M32(m_)); }
  /* 0061793e sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00617940 shr ax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (eax & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); eax = (eax & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 00617943 add edx, -0xb */ { u32 a_ = edx, b_ = 0xfffffff5u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00617946 mov dword ptr [esi + 0x16b4], edx */ { const u32 m_ = (u32)(esi + 0x16b4u); M32(m_) = (u32)(edx); }
  /* 0061794c mov word ptr [esi + 0x16b0], ax */ { const u32 m_ = (u32)(esi + 0x16b0u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00617953 jmp 0x617967 */ goto L_00617967;
L_00617955:;
  /* 00617955 shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00617957 or word ptr [esi + 0x16b0], ax */ { const u32 m_ = (u32)(esi + 0x16b0u); u32 a_ = M16(m_), b_ = (eax & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 0061795e add ecx, 5 */ { u32 a_ = ecx, b_ = 0x5u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00617961 mov dword ptr [esi + 0x16b4], ecx */ { const u32 m_ = (u32)(esi + 0x16b4u); M32(m_) = (u32)(ecx); }
L_00617967:;
  /* 00617967 mov ecx, dword ptr [esi + 0x16b4] */ { const u32 m_ = (u32)(esi + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 0061796d lea eax, [ebp - 1] */ eax = (u32)((u32)(ebp + 0xffffffffu));
  /* 00617970 cmp ecx, 0xb */ { u32 a_ = ecx, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617973 jle 0x6179d2 */ if ((ZF_|LT_)) goto L_006179d2;
  /* 00617975 mov edx, eax */ { edx = (u32)(eax); }
  /* 00617977 mov dword ptr [esp + 0x14], ebx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0061797b shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0061797d mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00617980 or word ptr [esi + 0x16b0], dx */ { const u32 m_ = (u32)(esi + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00617987 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0061798a mov bl, byte ptr [esi + 0x16b0] */ { const u32 m_ = (u32)(esi + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617990 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00617993 mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 00617996 mov bl, byte ptr [esi + 0x16b1] */ { const u32 m_ = (u32)(esi + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061799c inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061799d mov dword ptr [esi + 0x14], edx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edx); }
  /* 006179a0 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 006179a2 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 006179a5 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006179a8 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 006179ab mov edx, dword ptr [esi + 0x16b4] */ { const u32 m_ = (u32)(esi + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 006179b1 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006179b2 mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 006179b5 mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 006179b7 mov ebx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebx = (u32)(M32(m_)); }
  /* 006179bb sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 006179bd shr ax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (eax & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); eax = (eax & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 006179c0 add edx, -0xb */ { u32 a_ = edx, b_ = 0xfffffff5u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006179c3 mov dword ptr [esi + 0x16b4], edx */ { const u32 m_ = (u32)(esi + 0x16b4u); M32(m_) = (u32)(edx); }
  /* 006179c9 mov word ptr [esi + 0x16b0], ax */ { const u32 m_ = (u32)(esi + 0x16b0u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 006179d0 jmp 0x6179e4 */ goto L_006179e4;
L_006179d2:;
  /* 006179d2 shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 006179d4 or word ptr [esi + 0x16b0], ax */ { const u32 m_ = (u32)(esi + 0x16b0u); u32 a_ = M16(m_), b_ = (eax & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 006179db add ecx, 5 */ { u32 a_ = ecx, b_ = 0x5u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006179de mov dword ptr [esi + 0x16b4], ecx */ { const u32 m_ = (u32)(esi + 0x16b4u); M32(m_) = (u32)(ecx); }
L_006179e4:;
  /* 006179e4 mov ecx, dword ptr [esi + 0x16b4] */ { const u32 m_ = (u32)(esi + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 006179ea cmp ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006179ed jle 0x617a53 */ if ((ZF_|LT_)) goto L_00617a53;
  /* 006179ef mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 006179f3 mov dword ptr [esp + 0x14], ebx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ebx); }
  /* 006179f7 lea eax, [edx - 4] */ eax = (u32)((u32)(edx + 0xfffffffcu));
  /* 006179fa mov edx, eax */ { edx = (u32)(eax); }
  /* 006179fc shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 006179fe mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00617a01 or word ptr [esi + 0x16b0], dx */ { const u32 m_ = (u32)(esi + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00617a08 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00617a0b mov bl, byte ptr [esi + 0x16b0] */ { const u32 m_ = (u32)(esi + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617a11 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00617a14 mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 00617a17 mov bl, byte ptr [esi + 0x16b1] */ { const u32 m_ = (u32)(esi + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617a1d inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617a1e mov dword ptr [esi + 0x14], edx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edx); }
  /* 00617a21 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00617a23 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00617a26 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00617a29 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00617a2c mov edx, dword ptr [esi + 0x16b4] */ { const u32 m_ = (u32)(esi + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 00617a32 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617a33 mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00617a36 mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 00617a38 mov ebx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebx = (u32)(M32(m_)); }
  /* 00617a3c sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00617a3e shr ax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (eax & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); eax = (eax & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 00617a41 add edx, -0xc */ { u32 a_ = edx, b_ = 0xfffffff4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00617a44 mov dword ptr [esi + 0x16b4], edx */ { const u32 m_ = (u32)(esi + 0x16b4u); M32(m_) = (u32)(edx); }
  /* 00617a4a mov word ptr [esi + 0x16b0], ax */ { const u32 m_ = (u32)(esi + 0x16b0u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00617a51 jmp 0x617a6c */ goto L_00617a6c;
L_00617a53:;
  /* 00617a53 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00617a57 add eax, -4 */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00617a5a shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00617a5c or word ptr [esi + 0x16b0], ax */ { const u32 m_ = (u32)(esi + 0x16b0u); u32 a_ = M16(m_), b_ = (eax & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00617a63 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00617a66 mov dword ptr [esi + 0x16b4], ecx */ { const u32 m_ = (u32)(esi + 0x16b4u); M32(m_) = (u32)(ecx); }
L_00617a6c:;
  /* 00617a6c mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00617a70 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00617a72 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00617a74 jle 0x617b1e */ if ((ZF_|LT_)) goto L_00617b1e;
L_00617a7a:;
  /* 00617a7a mov ecx, dword ptr [esi + 0x16b4] */ { const u32 m_ = (u32)(esi + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 00617a80 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00617a82 cmp ecx, 0xd */ { u32 a_ = ecx, b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617a85 jle 0x617af0 */ if ((ZF_|LT_)) goto L_00617af0;
  /* 00617a87 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00617a89 mov dl, byte ptr [edi + 0x63d984] */ { const u32 m_ = (u32)(edi + 0x63d984u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617a8f mov ax, word ptr [esi + edx*4 + 0xa76] */ { const u32 m_ = (u32)(esi + edx * 4u + 0xa76u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00617a97 mov edx, eax */ { edx = (u32)(eax); }
  /* 00617a99 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00617a9b mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00617a9e or word ptr [esi + 0x16b0], dx */ { const u32 m_ = (u32)(esi + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00617aa5 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00617aa8 mov bl, byte ptr [esi + 0x16b0] */ { const u32 m_ = (u32)(esi + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617aae mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00617ab1 mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 00617ab4 mov bl, byte ptr [esi + 0x16b1] */ { const u32 m_ = (u32)(esi + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617aba inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617abb mov dword ptr [esi + 0x14], edx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edx); }
  /* 00617abe mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00617ac0 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00617ac3 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00617ac6 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00617ac9 mov edx, dword ptr [esi + 0x16b4] */ { const u32 m_ = (u32)(esi + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 00617acf inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617ad0 mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00617ad3 mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 00617ad5 mov ebx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebx = (u32)(M32(m_)); }
  /* 00617ad9 sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00617adb shr ax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (eax & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); eax = (eax & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 00617ade add edx, -0xd */ { u32 a_ = edx, b_ = 0xfffffff3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00617ae1 mov dword ptr [esi + 0x16b4], edx */ { const u32 m_ = (u32)(esi + 0x16b4u); M32(m_) = (u32)(edx); }
  /* 00617ae7 mov word ptr [esi + 0x16b0], ax */ { const u32 m_ = (u32)(esi + 0x16b0u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00617aee jmp 0x617b11 */ goto L_00617b11;
L_00617af0:;
  /* 00617af0 mov al, byte ptr [edi + 0x63d984] */ { const u32 m_ = (u32)(edi + 0x63d984u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617af6 mov dx, word ptr [esi + eax*4 + 0xa76] */ { const u32 m_ = (u32)(esi + eax * 4u + 0xa76u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00617afe shl dx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (edx & 0xffffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffu; u32 cf_ = n_ <= 16u ? (a_ >> (16u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 15) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); edx = (edx & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 00617b01 or word ptr [esi + 0x16b0], dx */ { const u32 m_ = (u32)(esi + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00617b08 add ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00617b0b mov dword ptr [esi + 0x16b4], ecx */ { const u32 m_ = (u32)(esi + 0x16b4u); M32(m_) = (u32)(ecx); }
L_00617b11:;
  /* 00617b11 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00617b15 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617b16 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617b18 jl 0x617a7a */ if (LT_) goto L_00617a7a;
L_00617b1e:;
  /* 00617b1e dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617b1f lea edi, [esi + 0x8c] */ edi = (u32)((u32)(esi + 0x8cu));
  /* 00617b25 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00617b26 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00617b27 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617b28 call 0x618200 */ esp -= 4; M32(esp) = 0x617b2du; SAVEALL; F_00618200(c); ABI_CHECK(0x618200u, 0x617b28u); RETCHK(0x617b2du, 0x617b28u); LOADALL;
  /* 00617b2d dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617b2e lea ebx, [esi + 0x980] */ ebx = (u32)((u32)(esi + 0x980u));
  /* 00617b34 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00617b35 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00617b36 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617b37 call 0x618200 */ esp -= 4; M32(esp) = 0x617b3cu; SAVEALL; F_00618200(c); ABI_CHECK(0x618200u, 0x617b37u); RETCHK(0x617b3cu, 0x617b37u); LOADALL;
  /* 00617b3c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00617b3d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00617b3e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617b3f call 0x618720 */ esp -= 4; M32(esp) = 0x617b44u; SAVEALL; F_00618720(c); ABI_CHECK(0x618720u, 0x617b3fu); RETCHK(0x617b44u, 0x617b3fu); LOADALL;
  /* 00617b44 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00617b47 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_00617b49:;
  /* 00617b49 lea eax, [esi + 0x8c] */ eax = (u32)((u32)(esi + 0x8cu));
  /* 00617b4f mov ecx, 0x11e */ { ecx = (u32)(0x11eu); }
L_00617b54:;
  /* 00617b54 mov word ptr [eax], bx */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 00617b57 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00617b5a dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617b5b jne 0x617b54 */ if (!ZF_) goto L_00617b54;
  /* 00617b5d lea eax, [esi + 0x980] */ eax = (u32)((u32)(esi + 0x980u));
  /* 00617b63 mov ecx, 0x1e */ { ecx = (u32)(0x1eu); }
L_00617b68:;
  /* 00617b68 mov word ptr [eax], bx */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 00617b6b add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00617b6e dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617b6f jne 0x617b68 */ if (!ZF_) goto L_00617b68;
  /* 00617b71 lea eax, [esi + 0xa74] */ eax = (u32)((u32)(esi + 0xa74u));
  /* 00617b77 mov ecx, 0x13 */ { ecx = (u32)(0x13u); }
L_00617b7c:;
  /* 00617b7c mov word ptr [eax], bx */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 00617b7f add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00617b82 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617b83 jne 0x617b7c */ if (!ZF_) goto L_00617b7c;
  /* 00617b85 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 00617b89 mov word ptr [esi + 0x48c], 1 */ { const u32 m_ = (u32)(esi + 0x48cu); M16(m_) = (u16)(0x1u); }
  /* 00617b92 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617b94 mov dword ptr [esi + 0x16a4], ebx */ { const u32 m_ = (u32)(esi + 0x16a4u); M32(m_) = (u32)(ebx); }
  /* 00617b9a mov dword ptr [esi + 0x16a0], ebx */ { const u32 m_ = (u32)(esi + 0x16a0u); M32(m_) = (u32)(ebx); }
  /* 00617ba0 mov dword ptr [esi + 0x16a8], ebx */ { const u32 m_ = (u32)(esi + 0x16a8u); M32(m_) = (u32)(ebx); }
  /* 00617ba6 mov dword ptr [esi + 0x1698], ebx */ { const u32 m_ = (u32)(esi + 0x1698u); M32(m_) = (u32)(ebx); }
  /* 00617bac je 0x617bb7 */ if (ZF_) goto L_00617bb7;
  /* 00617bae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617baf call 0x618b30 */ esp -= 4; M32(esp) = 0x617bb4u; SAVEALL; F_00618b30(c); ABI_CHECK(0x618b30u, 0x617bafu); RETCHK(0x617bb4u, 0x617bafu); LOADALL;
  /* 00617bb4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00617bb7:;
  /* 00617bb7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00617bb8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00617bb9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00617bba pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00617bbb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00617bc0(CPU *c) {
  NATIVE_HOOK(0x617bc0u) REGS; LOADALL;
L_00617bc0:;
  /* 00617bc0 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00617bc3 mov edx, dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); edx = (u32)(M32(m_)); }
  /* 00617bc7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00617bc8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00617bc9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617bca mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00617bcd mov esi, dword ptr [esp + 0x54] */ { const u32 m_ = (u32)(esp + 0x54u); esi = (u32)(M32(m_)); }
  /* 00617bd1 mov ebx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ebx = (u32)(M32(m_)); }
  /* 00617bd3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00617bd4 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 00617bd6 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00617bd9 or ebp, 0xffffffff */ { u32 a_ = ebp, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 00617bdc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00617bde test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00617be0 mov dword ptr [esp + 0x30], ebx */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(ebx); }
  /* 00617be4 mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 00617be8 mov dword ptr [esp + 0x10], ebp */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebp); }
  /* 00617bec mov dword ptr [esi + 0x1448], 0 */ { const u32 m_ = (u32)(esi + 0x1448u); M32(m_) = (u32)(0x0u); }
  /* 00617bf6 mov dword ptr [esi + 0x144c], 0x23d */ { const u32 m_ = (u32)(esi + 0x144cu); M32(m_) = (u32)(0x23du); }
  /* 00617c00 jle 0x617c3d */ if ((ZF_|LT_)) goto L_00617c3d;
L_00617c02:;
  /* 00617c02 cmp word ptr [ebx + eax*4], 0 */ { const u32 m_ = (u32)(ebx + eax * 4u); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00617c07 je 0x617c31 */ if (ZF_) goto L_00617c31;
  /* 00617c09 mov ecx, dword ptr [esi + 0x1448] */ { const u32 m_ = (u32)(esi + 0x1448u); ecx = (u32)(M32(m_)); }
  /* 00617c0f mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 00617c13 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617c14 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 00617c16 mov dword ptr [esi + 0x1448], ecx */ { const u32 m_ = (u32)(esi + 0x1448u); M32(m_) = (u32)(ecx); }
  /* 00617c1c mov dword ptr [esi + ecx*4 + 0xb54], eax */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xb54u); M32(m_) = (u32)(eax); }
  /* 00617c23 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00617c27 mov byte ptr [eax + esi + 0x1450], 0 */ { const u32 m_ = (u32)(eax + esi + 0x1450u); M8(m_) = (u8)(0x0u); }
  /* 00617c2f jmp 0x617c38 */ goto L_00617c38;
L_00617c31:;
  /* 00617c31 mov word ptr [ebx + eax*4 + 2], 0 */ { const u32 m_ = (u32)(ebx + eax * 4u + 0x2u); M16(m_) = (u16)(0x0u); }
L_00617c38:;
  /* 00617c38 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617c39 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617c3b jl 0x617c02 */ if (LT_) goto L_00617c02;
L_00617c3d:;
  /* 00617c3d mov ecx, dword ptr [esi + 0x1448] */ { const u32 m_ = (u32)(esi + 0x1448u); ecx = (u32)(M32(m_)); }
  /* 00617c43 cmp ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617c46 jge 0x617ca9 */ if (!LT_) goto L_00617ca9;
L_00617c48:;
  /* 00617c48 cmp ebp, 2 */ { u32 a_ = ebp, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617c4b jge 0x617c52 */ if (!LT_) goto L_00617c52;
  /* 00617c4d inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617c4e mov eax, ebp */ { eax = (u32)(ebp); }
  /* 00617c50 jmp 0x617c54 */ goto L_00617c54;
L_00617c52:;
  /* 00617c52 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00617c54:;
  /* 00617c54 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617c55 mov dword ptr [esi + 0x1448], ecx */ { const u32 m_ = (u32)(esi + 0x1448u); M32(m_) = (u32)(ecx); }
  /* 00617c5b mov dword ptr [esi + ecx*4 + 0xb54], eax */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xb54u); M32(m_) = (u32)(eax); }
  /* 00617c62 mov word ptr [ebx + eax*4], 1 */ { const u32 m_ = (u32)(ebx + eax * 4u); M16(m_) = (u16)(0x1u); }
  /* 00617c68 mov byte ptr [esi + eax + 0x1450], 0 */ { const u32 m_ = (u32)(esi + eax + 0x1450u); M8(m_) = (u8)(0x0u); }
  /* 00617c70 mov edx, dword ptr [esi + 0x16a0] */ { const u32 m_ = (u32)(esi + 0x16a0u); edx = (u32)(M32(m_)); }
  /* 00617c76 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617c77 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00617c79 mov dword ptr [esi + 0x16a0], edx */ { const u32 m_ = (u32)(esi + 0x16a0u); M32(m_) = (u32)(edx); }
  /* 00617c7f je 0x617c96 */ if (ZF_) goto L_00617c96;
  /* 00617c81 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00617c83 mov cx, word ptr [edi + eax*4 + 2] */ { const u32 m_ = (u32)(edi + eax * 4u + 0x2u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00617c88 mov eax, dword ptr [esi + 0x16a4] */ { const u32 m_ = (u32)(esi + 0x16a4u); eax = (u32)(M32(m_)); }
  /* 00617c8e sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00617c90 mov dword ptr [esi + 0x16a4], eax */ { const u32 m_ = (u32)(esi + 0x16a4u); M32(m_) = (u32)(eax); }
L_00617c96:;
  /* 00617c96 mov ecx, dword ptr [esi + 0x1448] */ { const u32 m_ = (u32)(esi + 0x1448u); ecx = (u32)(M32(m_)); }
  /* 00617c9c cmp ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617c9f jl 0x617c48 */ if (LT_) goto L_00617c48;
  /* 00617ca1 mov edx, dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); edx = (u32)(M32(m_)); }
  /* 00617ca5 mov dword ptr [esp + 0x10], ebp */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebp); }
L_00617ca9:;
  /* 00617ca9 mov dword ptr [edx + 4], ebp */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ebp); }
  /* 00617cac mov eax, dword ptr [esi + 0x1448] */ { const u32 m_ = (u32)(esi + 0x1448u); eax = (u32)(M32(m_)); }
  /* 00617cb2 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00617cb3 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00617cb5 mov edi, eax */ { edi = (u32)(eax); }
  /* 00617cb7 sar edi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 00617cb9 cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617cbc jl 0x617ccf */ if (LT_) goto L_00617ccf;
L_00617cbe:;
  /* 00617cbe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00617cbf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00617cc0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617cc1 call 0x618030 */ esp -= 4; M32(esp) = 0x617cc6u; SAVEALL; F_00618030(c); ABI_CHECK(0x618030u, 0x617cc1u); RETCHK(0x617cc6u, 0x617cc1u); LOADALL;
  /* 00617cc6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00617cc9 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617cca cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617ccd jge 0x617cbe */ if (!LT_) goto L_00617cbe;
L_00617ccf:;
  /* 00617ccf mov ebp, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebp = (u32)(M32(m_)); }
L_00617cd3:;
  /* 00617cd3 mov eax, dword ptr [esi + 0x1448] */ { const u32 m_ = (u32)(esi + 0x1448u); eax = (u32)(M32(m_)); }
  /* 00617cd9 mov edi, dword ptr [esi + 0xb58] */ { const u32 m_ = (u32)(esi + 0xb58u); edi = (u32)(M32(m_)); }
  /* 00617cdf push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00617ce1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00617ce2 mov edx, dword ptr [esi + eax*4 + 0xb54] */ { const u32 m_ = (u32)(esi + eax * 4u + 0xb54u); edx = (u32)(M32(m_)); }
  /* 00617ce9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617cea push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617ceb mov dword ptr [esi + 0xb58], edx */ { const u32 m_ = (u32)(esi + 0xb58u); M32(m_) = (u32)(edx); }
  /* 00617cf1 mov dword ptr [esi + 0x1448], eax */ { const u32 m_ = (u32)(esi + 0x1448u); M32(m_) = (u32)(eax); }
  /* 00617cf7 call 0x618030 */ esp -= 4; M32(esp) = 0x617cfcu; SAVEALL; F_00618030(c); ABI_CHECK(0x618030u, 0x617cf7u); RETCHK(0x617cfcu, 0x617cf7u); LOADALL;
  /* 00617cfc mov edx, dword ptr [esi + 0x144c] */ { const u32 m_ = (u32)(esi + 0x144cu); edx = (u32)(M32(m_)); }
  /* 00617d02 mov eax, dword ptr [esi + 0xb58] */ { const u32 m_ = (u32)(esi + 0xb58u); eax = (u32)(M32(m_)); }
  /* 00617d08 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00617d0b dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617d0c mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00617d0e mov dword ptr [esi + 0x144c], edx */ { const u32 m_ = (u32)(esi + 0x144cu); M32(m_) = (u32)(edx); }
  /* 00617d14 mov dword ptr [esi + ecx*4 + 0xb54], edi */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xb54u); M32(m_) = (u32)(edi); }
  /* 00617d1b mov ecx, dword ptr [esi + 0x144c] */ { const u32 m_ = (u32)(esi + 0x144cu); ecx = (u32)(M32(m_)); }
  /* 00617d21 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617d22 mov dword ptr [esi + 0x144c], ecx */ { const u32 m_ = (u32)(esi + 0x144cu); M32(m_) = (u32)(ecx); }
  /* 00617d28 mov dword ptr [esi + ecx*4 + 0xb54], eax */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xb54u); M32(m_) = (u32)(eax); }
  /* 00617d2f mov cx, word ptr [ebx + eax*4] */ { const u32 m_ = (u32)(ebx + eax * 4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00617d33 add cx, word ptr [ebx + edi*4] */ { const u32 m_ = (u32)(ebx + edi * 4u); u32 a_ = (ecx & 0xffffu), b_ = M16(m_); u32 r_ = (a_ + b_) & 0xffffu; SETFC(OP_ADD, a_, b_, r_, 2); ecx = (ecx & 0xffff0000u) | ((u32)(r_) & 0xffffu); }
  /* 00617d37 mov word ptr [ebx + ebp*4], cx */ { const u32 m_ = (u32)(ebx + ebp * 4u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 00617d3b mov cl, byte ptr [esi + edi + 0x1450] */ { const u32 m_ = (u32)(esi + edi + 0x1450u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617d42 mov dl, byte ptr [esi + eax + 0x1450] */ { const u32 m_ = (u32)(esi + eax + 0x1450u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00617d49 cmp cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00617d4b jb 0x617d55 */ if (CF_) goto L_00617d55;
  /* 00617d4d and ecx, 0xff */ { u32 a_ = ecx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00617d53 jmp 0x617d5d */ goto L_00617d5d;
L_00617d55:;
  /* 00617d55 and edx, 0xff */ { u32 a_ = edx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00617d5b mov ecx, edx */ { ecx = (u32)(edx); }
L_00617d5d:;
  /* 00617d5d inc cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 00617d5f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00617d61 mov byte ptr [esi + ebp + 0x1450], cl */ { const u32 m_ = (u32)(esi + ebp + 0x1450u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00617d68 mov word ptr [ebx + eax*4 + 2], bp */ { const u32 m_ = (u32)(ebx + eax * 4u + 0x2u); M16(m_) = (u16)((ebp & 0xffffu)); }
  /* 00617d6d mov word ptr [ebx + edi*4 + 2], bp */ { const u32 m_ = (u32)(ebx + edi * 4u + 0x2u); M16(m_) = (u16)((ebp & 0xffffu)); }
  /* 00617d72 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00617d73 mov dword ptr [esi + 0xb58], ebp */ { const u32 m_ = (u32)(esi + 0xb58u); M32(m_) = (u32)(ebp); }
  /* 00617d79 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00617d7a inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617d7b call 0x618030 */ esp -= 4; M32(esp) = 0x617d80u; SAVEALL; F_00618030(c); ABI_CHECK(0x618030u, 0x617d7bu); RETCHK(0x617d80u, 0x617d7bu); LOADALL;
  /* 00617d80 mov eax, dword ptr [esi + 0x1448] */ { const u32 m_ = (u32)(esi + 0x1448u); eax = (u32)(M32(m_)); }
  /* 00617d86 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00617d89 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617d8c jge 0x617cd3 */ if (!LT_) goto L_00617cd3;
  /* 00617d92 mov ebx, dword ptr [esi + 0x144c] */ { const u32 m_ = (u32)(esi + 0x144cu); ebx = (u32)(M32(m_)); }
  /* 00617d98 mov edx, dword ptr [esi + 0xb58] */ { const u32 m_ = (u32)(esi + 0xb58u); edx = (u32)(M32(m_)); }
  /* 00617d9e dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617d9f lea edi, [esi + 0xb34] */ edi = (u32)((u32)(esi + 0xb34u));
  /* 00617da5 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00617da7 mov dword ptr [esi + 0x144c], ebx */ { const u32 m_ = (u32)(esi + 0x144cu); M32(m_) = (u32)(ebx); }
  /* 00617dad mov dword ptr [esp + 0x2c], edi */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(edi); }
  /* 00617db1 xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 00617db3 mov dword ptr [esi + eax*4 + 0xb54], edx */ { const u32 m_ = (u32)(esi + eax * 4u + 0xb54u); M32(m_) = (u32)(edx); }
  /* 00617dba mov eax, dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00617dbe mov dword ptr [esp + 0x5c], ebp */ { const u32 m_ = (u32)(esp + 0x5cu); M32(m_) = (u32)(ebp); }
  /* 00617dc2 mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 00617dc4 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00617dc7 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 00617dca mov dword ptr [esp + 0x20], ecx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ecx); }
  /* 00617dce mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00617dd1 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00617dd3 mov dword ptr [esp + 0x28], ecx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ecx); }
  /* 00617dd7 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00617dda mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 00617ddd mov dword ptr [esp + 0x24], ecx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ecx); }
  /* 00617de1 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 00617de5 mov ecx, 8 */ { ecx = (u32)(0x8u); }
  /* 00617dea xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00617dec rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00617dee mov ecx, dword ptr [esi + 0x144c] */ { const u32 m_ = (u32)(esi + 0x144cu); ecx = (u32)(M32(m_)); }
  /* 00617df4 mov eax, dword ptr [esi + ecx*4 + 0xb54] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xb54u); eax = (u32)(M32(m_)); }
  /* 00617dfb mov word ptr [ebx + eax*4 + 2], bp */ { const u32 m_ = (u32)(ebx + eax * 4u + 0x2u); M16(m_) = (u16)((ebp & 0xffffu)); }
  /* 00617e00 mov eax, dword ptr [esi + 0x144c] */ { const u32 m_ = (u32)(esi + 0x144cu); eax = (u32)(M32(m_)); }
  /* 00617e06 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617e07 cmp eax, 0x23d */ { u32 a_ = eax, b_ = 0x23du; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617e0c jge 0x617fad */ if (!LT_) goto L_00617fad;
  /* 00617e12 lea ecx, [esi + eax*4 + 0xb54] */ ecx = (u32)((u32)(esi + eax * 4u + 0xb54u));
  /* 00617e19 mov dword ptr [esp + 0x58], ecx */ { const u32 m_ = (u32)(esp + 0x58u); M32(m_) = (u32)(ecx); }
  /* 00617e1d mov ecx, 0x23d */ { ecx = (u32)(0x23du); }
  /* 00617e22 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00617e24 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00617e26 mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 00617e2a mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
L_00617e2e:;
  /* 00617e2e mov eax, dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); eax = (u32)(M32(m_)); }
  /* 00617e32 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00617e34 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00617e36 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00617e38 mov ax, word ptr [ebx + ecx*4 + 2] */ { const u32 m_ = (u32)(ebx + ecx * 4u + 0x2u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00617e3d mov di, word ptr [ebx + eax*4 + 2] */ { const u32 m_ = (u32)(ebx + eax * 4u + 0x2u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00617e42 mov eax, edi */ { eax = (u32)(edi); }
  /* 00617e44 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 00617e48 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617e49 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617e4b jle 0x617e54 */ if ((ZF_|LT_)) goto L_00617e54;
  /* 00617e4d inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617e4e mov eax, edi */ { eax = (u32)(edi); }
  /* 00617e50 mov dword ptr [esp + 0x5c], ebp */ { const u32 m_ = (u32)(esp + 0x5cu); M32(m_) = (u32)(ebp); }
L_00617e54:;
  /* 00617e54 mov edi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edi = (u32)(M32(m_)); }
  /* 00617e58 mov word ptr [ebx + ecx*4 + 2], ax */ { const u32 m_ = (u32)(ebx + ecx * 4u + 0x2u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00617e5d cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617e5f jg 0x617eb5 */ if (!(ZF_|LT_)) goto L_00617eb5;
  /* 00617e61 mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 00617e65 inc word ptr [esi + eax*2 + 0xb34] */ { const u32 m_ = (u32)(esi + eax * 2u + 0xb34u); u32 a_ = M16(m_); u32 r_ = (a_ + 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_INC, a_, 1, r_, 2); }
  /* 00617e6d xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 00617e6f cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617e71 jl 0x617e7e */ if (LT_) goto L_00617e7e;
  /* 00617e73 mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 00617e75 sub ebp, edi */ { u32 a_ = ebp, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 00617e77 mov edi, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edi = (u32)(M32(m_)); }
  /* 00617e7b mov ebp, dword ptr [edi + ebp*4] */ { const u32 m_ = (u32)(edi + ebp * 4u); ebp = (u32)(M32(m_)); }
L_00617e7e:;
  /* 00617e7e mov di, word ptr [ebx + ecx*4] */ { const u32 m_ = (u32)(ebx + ecx * 4u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00617e82 add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00617e84 and edi, 0xffff */ { u32 a_ = edi, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00617e8a imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00617e8d add dword ptr [esi + 0x16a0], eax */ { const u32 m_ = (u32)(esi + 0x16a0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00617e93 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00617e95 je 0x617eb1 */ if (ZF_) goto L_00617eb1;
  /* 00617e97 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00617e99 mov ax, word ptr [edx + ecx*4 + 2] */ { const u32 m_ = (u32)(edx + ecx * 4u + 0x2u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00617e9e mov ecx, dword ptr [esi + 0x16a4] */ { const u32 m_ = (u32)(esi + 0x16a4u); ecx = (u32)(M32(m_)); }
  /* 00617ea4 add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00617ea6 imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00617ea9 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00617eab mov dword ptr [esi + 0x16a4], ecx */ { const u32 m_ = (u32)(esi + 0x16a4u); M32(m_) = (u32)(ecx); }
L_00617eb1:;
  /* 00617eb1 mov ebp, dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); ebp = (u32)(M32(m_)); }
L_00617eb5:;
  /* 00617eb5 mov ecx, dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); ecx = (u32)(M32(m_)); }
  /* 00617eb9 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00617ebd add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00617ec0 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617ec1 mov dword ptr [esp + 0x58], ecx */ { const u32 m_ = (u32)(esp + 0x58u); M32(m_) = (u32)(ecx); }
  /* 00617ec5 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00617ec9 jne 0x617e2e */ if (!ZF_) goto L_00617e2e;
  /* 00617ecf test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00617ed1 je 0x617fad */ if (ZF_) goto L_00617fad;
  /* 00617ed7 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00617edb lea edx, [eax - 1] */ edx = (u32)((u32)(eax + 0xffffffffu));
  /* 00617ede lea edi, [esi + eax*2 + 0xb34] */ edi = (u32)((u32)(esi + eax * 2u + 0xb34u));
L_00617ee5:;
  /* 00617ee5 mov eax, edx */ { eax = (u32)(edx); }
  /* 00617ee7 cmp word ptr [esi + eax*2 + 0xb34], 0 */ { const u32 m_ = (u32)(esi + eax * 2u + 0xb34u); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00617ef0 lea ecx, [esi + eax*2 + 0xb34] */ ecx = (u32)((u32)(esi + eax * 2u + 0xb34u));
  /* 00617ef7 jne 0x617f03 */ if (!ZF_) goto L_00617f03;
L_00617ef9:;
  /* 00617ef9 sub ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00617efc dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617efd cmp word ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00617f01 je 0x617ef9 */ if (ZF_) goto L_00617ef9;
L_00617f03:;
  /* 00617f03 dec word ptr [esi + eax*2 + 0xb34] */ { const u32 m_ = (u32)(esi + eax * 2u + 0xb34u); u32 a_ = M16(m_); u32 r_ = (a_ - 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_DEC, a_, 1, r_, 2); }
  /* 00617f0b add word ptr [esi + eax*2 + 0xb36], 2 */ { const u32 m_ = (u32)(esi + eax * 2u + 0xb36u); u32 a_ = M16(m_), b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffu; SETFC(OP_ADD, a_, b_, r_, 2); M16(m_) = (u16)(r_); }
  /* 00617f14 dec word ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = M16(m_); u32 r_ = (a_ - 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_DEC, a_, 1, r_, 2); }
  /* 00617f17 sub ebp, 2 */ { u32 a_ = ebp, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 00617f1a test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00617f1c jg 0x617ee5 */ if (!(ZF_|LT_)) goto L_00617ee5;
  /* 00617f1e mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00617f22 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00617f24 je 0x617fad */ if (ZF_) goto L_00617fad;
  /* 00617f2a mov dword ptr [esp + 0x58], edi */ { const u32 m_ = (u32)(esp + 0x58u); M32(m_) = (u32)(edi); }
L_00617f2e:;
  /* 00617f2e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00617f30 mov ax, word ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00617f33 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00617f35 mov dword ptr [esp + 0x5c], eax */ { const u32 m_ = (u32)(esp + 0x5cu); M32(m_) = (u32)(eax); }
  /* 00617f39 je 0x617f9d */ if (ZF_) goto L_00617f9d;
  /* 00617f3b mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00617f3f lea ebp, [esi + ecx*4 + 0xb54] */ ebp = (u32)((u32)(esi + ecx * 4u + 0xb54u));
L_00617f46:;
  /* 00617f46 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 00617f4a mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00617f4d dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617f4e sub ebp, 4 */ { u32 a_ = ebp, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 00617f51 mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
  /* 00617f55 mov edi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edi = (u32)(M32(m_)); }
  /* 00617f59 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617f5b mov dword ptr [esp + 0x28], ebp */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ebp); }
  /* 00617f5f jg 0x617f99 */ if (!(ZF_|LT_)) goto L_00617f99;
  /* 00617f61 lea edi, [ebx + ecx*4 + 2] */ edi = (u32)((u32)(ebx + ecx * 4u + 0x2u));
  /* 00617f65 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00617f67 mov ax, word ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00617f6a cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617f6c je 0x617f90 */ if (ZF_) goto L_00617f90;
  /* 00617f6e mov ebp, edx */ { ebp = (u32)(edx); }
  /* 00617f70 sub ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 00617f72 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00617f74 mov ax, word ptr [ebx + ecx*4] */ { const u32 m_ = (u32)(ebx + ecx * 4u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00617f78 imul ebp, eax */ { s64 p_ = (s64)(s32)ebp * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebp = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00617f7b mov eax, dword ptr [esi + 0x16a0] */ { const u32 m_ = (u32)(esi + 0x16a0u); eax = (u32)(M32(m_)); }
  /* 00617f81 add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00617f83 mov ebp, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebp = (u32)(M32(m_)); }
  /* 00617f87 mov dword ptr [esi + 0x16a0], eax */ { const u32 m_ = (u32)(esi + 0x16a0u); M32(m_) = (u32)(eax); }
  /* 00617f8d mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
L_00617f90:;
  /* 00617f90 mov eax, dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00617f94 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617f95 mov dword ptr [esp + 0x5c], eax */ { const u32 m_ = (u32)(esp + 0x5cu); M32(m_) = (u32)(eax); }
L_00617f99:;
  /* 00617f99 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00617f9b jne 0x617f46 */ if (!ZF_) goto L_00617f46;
L_00617f9d:;
  /* 00617f9d mov edi, dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); edi = (u32)(M32(m_)); }
  /* 00617fa1 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00617fa2 sub edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00617fa5 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00617fa7 mov dword ptr [esp + 0x58], edi */ { const u32 m_ = (u32)(esp + 0x58u); M32(m_) = (u32)(edi); }
  /* 00617fab jne 0x617f2e */ if (!ZF_) goto L_00617f2e;
L_00617fad:;
  /* 00617fad mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 00617fb1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00617fb3 mov ecx, 1 */ { ecx = (u32)(0x1u); }
L_00617fb8:;
  /* 00617fb8 mov si, word ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (esi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00617fbb add edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00617fbe add si, ax */ { u32 a_ = (esi & 0xffffu), b_ = (eax & 0xffffu); u32 r_ = (a_ + b_) & 0xffffu; SETFC(OP_ADD, a_, b_, r_, 2); esi = (esi & 0xffff0000u) | ((u32)(r_) & 0xffffu); }
  /* 00617fc1 add esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00617fc3 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617fc4 mov eax, esi */ { eax = (u32)(esi); }
  /* 00617fc6 cmp ecx, 0xf */ { u32 a_ = ecx, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00617fc9 mov word ptr [esp + ecx*2 + 0x32], ax */ { const u32 m_ = (u32)(esp + ecx * 2u + 0x32u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00617fce jle 0x617fb8 */ if ((ZF_|LT_)) goto L_00617fb8;
  /* 00617fd0 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 00617fd4 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00617fd6 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00617fd8 jl 0x61801c */ if (LT_) goto L_0061801c;
L_00617fda:;
  /* 00617fda mov ebx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebx = (u32)(M32(m_)); }
  /* 00617fde xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00617fe0 mov ax, word ptr [ebx + edi*4 + 2] */ { const u32 m_ = (u32)(ebx + edi * 4u + 0x2u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00617fe5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00617fe7 je 0x618017 */ if (ZF_) goto L_00618017;
  /* 00617fe9 mov si, word ptr [esp + eax*2 + 0x34] */ { const u32 m_ = (u32)(esp + eax * 2u + 0x34u); esi = (esi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00617fee lea ecx, [esp + eax*2 + 0x34] */ ecx = (u32)((u32)(esp + eax * 2u + 0x34u));
  /* 00617ff2 mov edx, eax */ { edx = (u32)(eax); }
  /* 00617ff4 mov eax, esi */ { eax = (u32)(esi); }
  /* 00617ff6 and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00617ffb inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00617ffc mov word ptr [ecx], si */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 00617fff xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_00618001:;
  /* 00618001 mov esi, eax */ { esi = (u32)(eax); }
  /* 00618003 and esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00618006 or ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00618008 shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0061800a add ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061800c dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0061800d test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061800f jg 0x618001 */ if (!(ZF_|LT_)) goto L_00618001;
  /* 00618011 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00618013 mov word ptr [ebx + edi*4], cx */ { const u32 m_ = (u32)(ebx + edi * 4u); M16(m_) = (u16)((ecx & 0xffffu)); }
L_00618017:;
  /* 00618017 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618018 cmp edi, ebp */ { u32 a_ = edi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061801a jle 0x617fda */ if ((ZF_|LT_)) goto L_00617fda;
L_0061801c:;
  /* 0061801c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061801d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061801e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0061801f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00618020 add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618023 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618030(CPU *c) {
  NATIVE_HOOK(0x618030u) REGS; LOADALL;
L_00618030:;
  /* 00618030 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00618034 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00618035 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00618036 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00618037 mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
  /* 0061803b mov edx, dword ptr [eax + 0x1448] */ { const u32 m_ = (u32)(eax + 0x1448u); edx = (u32)(M32(m_)); }
  /* 00618041 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00618042 mov ebp, dword ptr [eax + esi*4 + 0xb54] */ { const u32 m_ = (u32)(eax + esi * 4u + 0xb54u); ebp = (u32)(M32(m_)); }
  /* 00618049 lea ecx, [esi + esi] */ ecx = (u32)((u32)(esi + esi));
  /* 0061804c cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061804e mov dword ptr [esp + 0x14], ebp */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ebp); }
  /* 00618052 jg 0x6180f5 */ if (!(ZF_|LT_)) goto L_006180f5;
  /* 00618058 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
L_0061805c:;
  /* 0061805c jge 0x618092 */ if (!LT_) goto L_00618092;
  /* 0061805e mov esi, dword ptr [eax + ecx*4 + 0xb58] */ { const u32 m_ = (u32)(eax + ecx * 4u + 0xb58u); esi = (u32)(M32(m_)); }
  /* 00618065 mov ebp, dword ptr [eax + ecx*4 + 0xb54] */ { const u32 m_ = (u32)(eax + ecx * 4u + 0xb54u); ebp = (u32)(M32(m_)); }
  /* 0061806c mov dx, word ptr [edi + esi*4] */ { const u32 m_ = (u32)(edi + esi * 4u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618070 mov bx, word ptr [edi + ebp*4] */ { const u32 m_ = (u32)(edi + ebp * 4u); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618074 cmp dx, bx */ { u32 a_ = (edx & 0xffffu), b_ = (ebx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00618077 jb 0x61808d */ if (CF_) goto L_0061808d;
  /* 00618079 jne 0x61808e */ if (!ZF_) goto L_0061808e;
  /* 0061807b mov dl, byte ptr [esi + eax + 0x1450] */ { const u32 m_ = (u32)(esi + eax + 0x1450u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618082 mov bl, byte ptr [eax + ebp + 0x1450] */ { const u32 m_ = (u32)(eax + ebp + 0x1450u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618089 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0061808b ja 0x61808e */ if (!(CF_|ZF_)) goto L_0061808e;
L_0061808d:;
  /* 0061808d inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_0061808e:;
  /* 0061808e mov ebp, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebp = (u32)(M32(m_)); }
L_00618092:;
  /* 00618092 mov esi, dword ptr [eax + ecx*4 + 0xb54] */ { const u32 m_ = (u32)(eax + ecx * 4u + 0xb54u); esi = (u32)(M32(m_)); }
  /* 00618099 mov dx, word ptr [edi + ebp*4] */ { const u32 m_ = (u32)(edi + ebp * 4u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061809d mov bx, word ptr [edi + esi*4] */ { const u32 m_ = (u32)(edi + esi * 4u); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006180a1 cmp dx, bx */ { u32 a_ = (edx & 0xffffu), b_ = (ebx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 006180a4 jb 0x6180d5 */ if (CF_) goto L_006180d5;
  /* 006180a6 jne 0x6180ba */ if (!ZF_) goto L_006180ba;
  /* 006180a8 mov dl, byte ptr [eax + ebp + 0x1450] */ { const u32 m_ = (u32)(eax + ebp + 0x1450u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006180af mov bl, byte ptr [esi + eax + 0x1450] */ { const u32 m_ = (u32)(esi + eax + 0x1450u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006180b6 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006180b8 jbe 0x6180e5 */ if ((CF_|ZF_)) goto L_006180e5;
L_006180ba:;
  /* 006180ba mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 006180be mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 006180c2 add ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006180c4 mov dword ptr [eax + edx*4 + 0xb54], esi */ { const u32 m_ = (u32)(eax + edx * 4u + 0xb54u); M32(m_) = (u32)(esi); }
  /* 006180cb mov edx, dword ptr [eax + 0x1448] */ { const u32 m_ = (u32)(eax + 0x1448u); edx = (u32)(M32(m_)); }
  /* 006180d1 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006180d3 jle 0x61805c */ if ((ZF_|LT_)) goto L_0061805c;
L_006180d5:;
  /* 006180d5 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 006180d9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006180da pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006180db mov dword ptr [eax + ecx*4 + 0xb54], ebp */ { const u32 m_ = (u32)(eax + ecx * 4u + 0xb54u); M32(m_) = (u32)(ebp); }
  /* 006180e2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006180e3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006180e4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006180e5:;
  /* 006180e5 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 006180e9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006180ea pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006180eb mov dword ptr [eax + edx*4 + 0xb54], ebp */ { const u32 m_ = (u32)(eax + edx * 4u + 0xb54u); M32(m_) = (u32)(ebp); }
  /* 006180f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006180f3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006180f4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006180f5:;
  /* 006180f5 mov dword ptr [eax + esi*4 + 0xb54], ebp */ { const u32 m_ = (u32)(eax + esi * 4u + 0xb54u); M32(m_) = (u32)(ebp); }
  /* 006180fc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006180fd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006180fe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006180ff pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00618100 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618110(CPU *c) {
  NATIVE_HOOK(0x618110u) REGS; LOADALL;
L_00618110:;
  /* 00618110 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00618111 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00618115 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00618116 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00618118 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00618119 mov cx, word ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061811d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061811e xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00618120 mov dword ptr [esp + 0xc], 0xffffffff */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00618128 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061812a mov edx, 7 */ { edx = (u32)(0x7u); }
  /* 0061812f mov esi, 4 */ { esi = (u32)(0x4u); }
  /* 00618134 jne 0x618140 */ if (!ZF_) goto L_00618140;
  /* 00618136 mov edx, 0x8a */ { edx = (u32)(0x8au); }
  /* 0061813b mov esi, 3 */ { esi = (u32)(0x3u); }
L_00618140:;
  /* 00618140 mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 00618144 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00618146 mov word ptr [eax + ebx*4 + 6], 0xffff */ { const u32 m_ = (u32)(eax + ebx * 4u + 0x6u); M16(m_) = (u16)(0xffffu); }
  /* 0061814d jl 0x6181f2 */ if (LT_) goto L_006181f2;
  /* 00618153 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618154 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00618155 mov dword ptr [esp + 0x1c], ebx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 00618159 mov ebx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebx = (u32)(M32(m_)); }
  /* 0061815d lea ebp, [eax + 6] */ ebp = (u32)((u32)(eax + 0x6u));
L_00618160:;
  /* 00618160 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00618162 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00618164 mov cx, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618168 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618169 cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061816b jge 0x618171 */ if (!LT_) goto L_00618171;
  /* 0061816d cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061816f je 0x6181df */ if (ZF_) goto L_006181df;
L_00618171:;
  /* 00618171 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618173 jge 0x61817f */ if (!LT_) goto L_0061817f;
  /* 00618175 add word ptr [ebx + eax*4 + 0xa74], di */ { const u32 m_ = (u32)(ebx + eax * 4u + 0xa74u); u32 a_ = M16(m_), b_ = (edi & 0xffffu); u32 r_ = (a_ + b_) & 0xffffu; SETFC(OP_ADD, a_, b_, r_, 2); M16(m_) = (u16)(r_); }
  /* 0061817d jmp 0x6181af */ goto L_006181af;
L_0061817f:;
  /* 0061817f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00618181 je 0x61819a */ if (ZF_) goto L_0061819a;
  /* 00618183 cmp eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618187 je 0x618191 */ if (ZF_) goto L_00618191;
  /* 00618189 inc word ptr [ebx + eax*4 + 0xa74] */ { const u32 m_ = (u32)(ebx + eax * 4u + 0xa74u); u32 a_ = M16(m_); u32 r_ = (a_ + 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_INC, a_, 1, r_, 2); }
L_00618191:;
  /* 00618191 inc word ptr [ebx + 0xab4] */ { const u32 m_ = (u32)(ebx + 0xab4u); u32 a_ = M16(m_); u32 r_ = (a_ + 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_INC, a_, 1, r_, 2); }
  /* 00618198 jmp 0x6181af */ goto L_006181af;
L_0061819a:;
  /* 0061819a cmp edi, 0xa */ { u32 a_ = edi, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061819d jg 0x6181a8 */ if (!(ZF_|LT_)) goto L_006181a8;
  /* 0061819f inc word ptr [ebx + 0xab8] */ { const u32 m_ = (u32)(ebx + 0xab8u); u32 a_ = M16(m_); u32 r_ = (a_ + 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_INC, a_, 1, r_, 2); }
  /* 006181a6 jmp 0x6181af */ goto L_006181af;
L_006181a8:;
  /* 006181a8 inc word ptr [ebx + 0xabc] */ { const u32 m_ = (u32)(ebx + 0xabcu); u32 a_ = M16(m_); u32 r_ = (a_ + 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_INC, a_, 1, r_, 2); }
L_006181af:;
  /* 006181af xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 006181b1 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 006181b5 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006181b7 jne 0x6181c5 */ if (!ZF_) goto L_006181c5;
  /* 006181b9 mov edx, 0x8a */ { edx = (u32)(0x8au); }
  /* 006181be mov esi, 3 */ { esi = (u32)(0x3u); }
  /* 006181c3 jmp 0x6181df */ goto L_006181df;
L_006181c5:;
  /* 006181c5 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006181c7 jne 0x6181d5 */ if (!ZF_) goto L_006181d5;
  /* 006181c9 mov edx, 6 */ { edx = (u32)(0x6u); }
  /* 006181ce mov esi, 3 */ { esi = (u32)(0x3u); }
  /* 006181d3 jmp 0x6181df */ goto L_006181df;
L_006181d5:;
  /* 006181d5 mov edx, 7 */ { edx = (u32)(0x7u); }
  /* 006181da mov esi, 4 */ { esi = (u32)(0x4u); }
L_006181df:;
  /* 006181df mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 006181e3 add ebp, 4 */ { u32 a_ = ebp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 006181e6 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006181e7 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 006181eb jne 0x618160 */ if (!ZF_) goto L_00618160;
  /* 006181f1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_006181f2:;
  /* 006181f2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006181f3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006181f4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006181f5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006181f6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618200(CPU *c) {
  NATIVE_HOOK(0x618200u) REGS; LOADALL;
L_00618200:;
  /* 00618200 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618203 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00618207 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00618208 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0061820a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061820b mov bx, word ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061820f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00618211 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00618213 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00618214 mov dword ptr [esp + 0xc], 0xffffffff */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0061821c mov ecx, 7 */ { ecx = (u32)(0x7u); }
  /* 00618221 mov edx, 4 */ { edx = (u32)(0x4u); }
  /* 00618226 jne 0x618232 */ if (!ZF_) goto L_00618232;
  /* 00618228 mov ecx, 0x8a */ { ecx = (u32)(0x8au); }
  /* 0061822d mov edx, 3 */ { edx = (u32)(0x3u); }
L_00618232:;
  /* 00618232 mov edi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edi = (u32)(M32(m_)); }
  /* 00618236 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00618238 jl 0x618710 */ if (LT_) goto L_00618710;
  /* 0061823e add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00618241 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618242 mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 00618246 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0061824a mov dword ptr [esp + 0x10], edi */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edi); }
  /* 0061824e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
L_0061824f:;
  /* 0061824f mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 00618253 mov ebp, ebx */ { ebp = (u32)(ebx); }
  /* 00618255 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00618257 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618258 mov bx, word ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061825b cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061825d mov dword ptr [esp + 0x1c], ebx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 00618261 mov dword ptr [esp + 0x20], esi */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(esi); }
  /* 00618265 jge 0x61826f */ if (!LT_) goto L_0061826f;
  /* 00618267 cmp ebp, ebx */ { u32 a_ = ebp, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618269 je 0x6186f5 */ if (ZF_) goto L_006186f5;
L_0061826f:;
  /* 0061826f cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618271 jge 0x61831a */ if (!LT_) goto L_0061831a;
L_00618277:;
  /* 00618277 mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 0061827d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0061827f mov di, word ptr [eax + ebp*4 + 0xa76] */ { const u32 m_ = (u32)(eax + ebp * 4u + 0xa76u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618287 mov edx, 0x10 */ { edx = (u32)(0x10u); }
  /* 0061828c sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0061828e cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618290 jle 0x6182f0 */ if ((ZF_|LT_)) goto L_006182f0;
  /* 00618292 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00618294 mov si, word ptr [eax + ebp*4 + 0xa74] */ { const u32 m_ = (u32)(eax + ebp * 4u + 0xa74u); esi = (esi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061829c mov edx, esi */ { edx = (u32)(esi); }
  /* 0061829e shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 006182a0 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006182a3 or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 006182aa mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 006182ad mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006182b3 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006182b6 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 006182b9 mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006182bf inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006182c0 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 006182c3 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 006182c5 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 006182c8 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006182cb mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 006182ce mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 006182d4 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006182d5 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 006182d8 mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 006182da sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 006182dc shr si, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (esi & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); esi = (esi & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 006182df lea ecx, [edx + edi - 0x10] */ ecx = (u32)((u32)(edx + edi + 0xfffffff0u));
  /* 006182e3 mov word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 006182ea mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 006182ee jmp 0x618304 */ goto L_00618304;
L_006182f0:;
  /* 006182f0 mov dx, word ptr [eax + ebp*4 + 0xa74] */ { const u32 m_ = (u32)(eax + ebp * 4u + 0xa74u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006182f8 shl dx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (edx & 0xffffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffu; u32 cf_ = n_ <= 16u ? (a_ >> (16u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 15) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); edx = (edx & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 006182fb or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00618302 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00618304:;
  /* 00618304 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00618305 mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
  /* 0061830b mov dword ptr [esp + 0x20], esi */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(esi); }
  /* 0061830f jne 0x618277 */ if (!ZF_) goto L_00618277;
  /* 00618315 jmp 0x6186c1 */ goto L_006186c1;
L_0061831a:;
  /* 0061831a test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061831c je 0x6184c5 */ if (ZF_) goto L_006184c5;
  /* 00618322 cmp ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = ebp, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618326 je 0x6183c4 */ if (ZF_) goto L_006183c4;
  /* 0061832c mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 00618332 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00618334 mov di, word ptr [eax + ebp*4 + 0xa76] */ { const u32 m_ = (u32)(eax + ebp * 4u + 0xa76u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061833c mov edx, 0x10 */ { edx = (u32)(0x10u); }
  /* 00618341 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00618343 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618345 jle 0x6183a5 */ if ((ZF_|LT_)) goto L_006183a5;
  /* 00618347 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00618349 mov si, word ptr [eax + ebp*4 + 0xa74] */ { const u32 m_ = (u32)(eax + ebp * 4u + 0xa74u); esi = (esi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618351 mov edx, esi */ { edx = (u32)(esi); }
  /* 00618353 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00618355 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00618358 or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 0061835f mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618362 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618368 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061836b mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061836e mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618374 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618375 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00618378 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0061837a mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0061837d mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00618380 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00618383 mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 00618389 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061838a mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0061838d mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 0061838f sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00618391 shr si, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (esi & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); esi = (esi & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 00618394 lea ecx, [edx + edi - 0x10] */ ecx = (u32)((u32)(edx + edi + 0xfffffff0u));
  /* 00618398 mov word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 0061839f mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 006183a3 jmp 0x6183b9 */ goto L_006183b9;
L_006183a5:;
  /* 006183a5 mov dx, word ptr [eax + ebp*4 + 0xa74] */ { const u32 m_ = (u32)(eax + ebp * 4u + 0xa74u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006183ad shl dx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (edx & 0xffffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffu; u32 cf_ = n_ <= 16u ? (a_ >> (16u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 15) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); edx = (edx & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 006183b0 or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 006183b7 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_006183b9:;
  /* 006183b9 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006183ba mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
  /* 006183c0 mov dword ptr [esp + 0x20], esi */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(esi); }
L_006183c4:;
  /* 006183c4 mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 006183ca xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 006183cc mov di, word ptr [eax + 0xab6] */ { const u32 m_ = (u32)(eax + 0xab6u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006183d3 mov edx, 0x10 */ { edx = (u32)(0x10u); }
  /* 006183d8 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006183da cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006183dc jle 0x61843b */ if ((ZF_|LT_)) goto L_0061843b;
  /* 006183de xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 006183e0 mov si, word ptr [eax + 0xab4] */ { const u32 m_ = (u32)(eax + 0xab4u); esi = (esi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006183e7 mov edx, esi */ { edx = (u32)(esi); }
  /* 006183e9 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 006183eb mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006183ee or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 006183f5 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 006183f8 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006183fe mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00618401 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618404 mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061840a inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061840b mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 0061840e mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00618410 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00618413 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00618416 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00618419 mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 0061841f inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618420 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00618423 mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 00618425 sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00618427 shr si, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (esi & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); esi = (esi & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 0061842a lea ecx, [edx + edi - 0x10] */ ecx = (u32)((u32)(edx + edi + 0xfffffff0u));
  /* 0061842e mov word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 00618435 mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 00618439 jmp 0x61844e */ goto L_0061844e;
L_0061843b:;
  /* 0061843b mov dx, word ptr [eax + 0xab4] */ { const u32 m_ = (u32)(eax + 0xab4u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618442 shl dx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (edx & 0xffffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffu; u32 cf_ = n_ <= 16u ? (a_ >> (16u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 15) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); edx = (edx & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 00618445 or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 0061844c add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0061844e:;
  /* 0061844e add esi, -3 */ { u32 a_ = esi, b_ = 0xfffffffdu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00618451 cmp ecx, 0xe */ { u32 a_ = ecx, b_ = 0xeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618454 mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
  /* 0061845a jle 0x6184b4 */ if ((ZF_|LT_)) goto L_006184b4;
  /* 0061845c mov edx, esi */ { edx = (u32)(esi); }
  /* 0061845e shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00618460 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00618463 or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 0061846a mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061846d mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618473 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00618476 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618479 mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061847f inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618480 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00618483 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00618485 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00618488 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061848b mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0061848e mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 00618494 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618495 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00618498 mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 0061849a sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0061849c shr si, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (esi & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); esi = (esi & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 0061849f add edx, -0xe */ { u32 a_ = edx, b_ = 0xfffffff2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006184a2 mov dword ptr [eax + 0x16b4], edx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(edx); }
  /* 006184a8 mov word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 006184af jmp 0x6186c1 */ goto L_006186c1;
L_006184b4:;
  /* 006184b4 shl esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 006184b6 or word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (esi & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 006184bd add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006184c0 jmp 0x6186bb */ goto L_006186bb;
L_006184c5:;
  /* 006184c5 mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 006184cb xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 006184cd cmp esi, 0xa */ { u32 a_ = esi, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006184d0 mov edx, 0x10 */ { edx = (u32)(0x10u); }
  /* 006184d5 jg 0x6185cf */ if (!(ZF_|LT_)) goto L_006185cf;
  /* 006184db mov di, word ptr [eax + 0xaba] */ { const u32 m_ = (u32)(eax + 0xabau); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006184e2 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006184e4 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006184e6 jle 0x618545 */ if ((ZF_|LT_)) goto L_00618545;
  /* 006184e8 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 006184ea mov si, word ptr [eax + 0xab8] */ { const u32 m_ = (u32)(eax + 0xab8u); esi = (esi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006184f1 mov edx, esi */ { edx = (u32)(esi); }
  /* 006184f3 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 006184f5 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006184f8 or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 006184ff mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618502 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618508 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061850b mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061850e mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618514 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618515 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00618518 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0061851a mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0061851d mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00618520 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00618523 mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 00618529 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061852a mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0061852d mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 0061852f sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00618531 shr si, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (esi & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); esi = (esi & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 00618534 lea ecx, [edx + edi - 0x10] */ ecx = (u32)((u32)(edx + edi + 0xfffffff0u));
  /* 00618538 mov word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 0061853f mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 00618543 jmp 0x618558 */ goto L_00618558;
L_00618545:;
  /* 00618545 mov dx, word ptr [eax + 0xab8] */ { const u32 m_ = (u32)(eax + 0xab8u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061854c shl dx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (edx & 0xffffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffu; u32 cf_ = n_ <= 16u ? (a_ >> (16u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 15) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); edx = (edx & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 0061854f or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00618556 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00618558:;
  /* 00618558 add esi, -3 */ { u32 a_ = esi, b_ = 0xfffffffdu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061855b cmp ecx, 0xd */ { u32 a_ = ecx, b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061855e mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
  /* 00618564 jle 0x6185be */ if ((ZF_|LT_)) goto L_006185be;
  /* 00618566 mov edx, esi */ { edx = (u32)(esi); }
  /* 00618568 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0061856a mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061856d or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00618574 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618577 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061857d mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00618580 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618583 mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618589 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061858a mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 0061858d mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0061858f mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00618592 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00618595 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00618598 mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 0061859e inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061859f mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 006185a2 mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 006185a4 sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 006185a6 shr si, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (esi & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); esi = (esi & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 006185a9 add edx, -0xd */ { u32 a_ = edx, b_ = 0xfffffff3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006185ac mov dword ptr [eax + 0x16b4], edx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(edx); }
  /* 006185b2 mov word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 006185b9 jmp 0x6186c1 */ goto L_006186c1;
L_006185be:;
  /* 006185be shl esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 006185c0 or word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (esi & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 006185c7 add ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006185ca jmp 0x6186bb */ goto L_006186bb;
L_006185cf:;
  /* 006185cf mov di, word ptr [eax + 0xabe] */ { const u32 m_ = (u32)(eax + 0xabeu); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006185d6 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006185d8 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006185da jle 0x618639 */ if ((ZF_|LT_)) goto L_00618639;
  /* 006185dc xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 006185de mov si, word ptr [eax + 0xabc] */ { const u32 m_ = (u32)(eax + 0xabcu); esi = (esi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006185e5 mov edx, esi */ { edx = (u32)(esi); }
  /* 006185e7 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 006185e9 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006185ec or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 006185f3 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 006185f6 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006185fc mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006185ff mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618602 mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618608 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618609 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 0061860c mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0061860e mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00618611 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00618614 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00618617 mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 0061861d inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061861e mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00618621 mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 00618623 sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00618625 shr si, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (esi & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); esi = (esi & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 00618628 lea ecx, [edx + edi - 0x10] */ ecx = (u32)((u32)(edx + edi + 0xfffffff0u));
  /* 0061862c mov word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 00618633 mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 00618637 jmp 0x61864c */ goto L_0061864c;
L_00618639:;
  /* 00618639 mov dx, word ptr [eax + 0xabc] */ { const u32 m_ = (u32)(eax + 0xabcu); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618640 shl dx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (edx & 0xffffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffu; u32 cf_ = n_ <= 16u ? (a_ >> (16u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 15) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); edx = (edx & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 00618643 or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 0061864a add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0061864c:;
  /* 0061864c add esi, -0xb */ { u32 a_ = esi, b_ = 0xfffffff5u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061864f cmp ecx, 9 */ { u32 a_ = ecx, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618652 mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
  /* 00618658 jle 0x6186af */ if ((ZF_|LT_)) goto L_006186af;
  /* 0061865a mov edx, esi */ { edx = (u32)(esi); }
  /* 0061865c shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0061865e mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00618661 or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00618668 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061866b mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618671 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00618674 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618677 mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061867d inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061867e mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00618681 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00618683 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00618686 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00618689 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0061868c mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 00618692 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618693 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00618696 mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 00618698 sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0061869a shr si, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (esi & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); esi = (esi & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 0061869d add edx, -9 */ { u32 a_ = edx, b_ = 0xfffffff7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006186a0 mov dword ptr [eax + 0x16b4], edx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(edx); }
  /* 006186a6 mov word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 006186ad jmp 0x6186c1 */ goto L_006186c1;
L_006186af:;
  /* 006186af shl esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 006186b1 or word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (esi & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 006186b8 add ecx, 7 */ { u32 a_ = ecx, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_006186bb:;
  /* 006186bb mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
L_006186c1:;
  /* 006186c1 mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 006186c5 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 006186c7 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006186c9 mov dword ptr [esp + 0x10], ebp */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebp); }
  /* 006186cd jne 0x6186db */ if (!ZF_) goto L_006186db;
  /* 006186cf mov ecx, 0x8a */ { ecx = (u32)(0x8au); }
  /* 006186d4 mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 006186d9 jmp 0x6186f5 */ goto L_006186f5;
L_006186db:;
  /* 006186db cmp ebp, ebx */ { u32 a_ = ebp, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006186dd jne 0x6186eb */ if (!ZF_) goto L_006186eb;
  /* 006186df mov ecx, 6 */ { ecx = (u32)(0x6u); }
  /* 006186e4 mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 006186e9 jmp 0x6186f5 */ goto L_006186f5;
L_006186eb:;
  /* 006186eb mov ecx, 7 */ { ecx = (u32)(0x7u); }
  /* 006186f0 mov edx, 4 */ { edx = (u32)(0x4u); }
L_006186f5:;
  /* 006186f5 mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 006186f9 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 006186fd add ebp, 4 */ { u32 a_ = ebp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 00618700 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00618701 mov dword ptr [esp + 0x24], ebp */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ebp); }
  /* 00618705 mov dword ptr [esp + 0x14], edi */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edi); }
  /* 00618709 jne 0x61824f */ if (!ZF_) goto L_0061824f;
  /* 0061870f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_00618710:;
  /* 00618710 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00618711 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00618712 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00618713 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618716 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618720(CPU *c) {
  NATIVE_HOOK(0x618720u) REGS; LOADALL;
L_00618720:;
  /* 00618720 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00618724 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618727 mov ecx, dword ptr [eax + 0x1698] */ { const u32 m_ = (u32)(eax + 0x1698u); ecx = (u32)(M32(m_)); }
  /* 0061872d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0061872e mov ebx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebx = (u32)(M32(m_)); }
  /* 00618732 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00618733 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00618734 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00618735 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00618737 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00618739 je 0x618a82 */ if (ZF_) goto L_00618a82;
L_0061873f:;
  /* 0061873f mov ecx, dword ptr [eax + 0x169c] */ { const u32 m_ = (u32)(eax + 0x169cu); ecx = (u32)(M32(m_)); }
  /* 00618745 mov edx, dword ptr [eax + 0x1690] */ { const u32 m_ = (u32)(eax + 0x1690u); edx = (u32)(M32(m_)); }
  /* 0061874b xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 0061874d mov bp, word ptr [ecx + edi*2] */ { const u32 m_ = (u32)(ecx + edi * 2u); ebp = (ebp & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618751 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00618753 mov cl, byte ptr [edi + edx] */ { const u32 m_ = (u32)(edi + edx); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618756 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618757 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00618759 mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 0061875f test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00618761 mov dword ptr [esp + 0x14], edi */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edi); }
  /* 00618765 jne 0x6187f1 */ if (!ZF_) goto L_006187f1;
  /* 0061876b mov bp, word ptr [ebx + esi*4 + 2] */ { const u32 m_ = (u32)(ebx + esi * 4u + 0x2u); ebp = (ebp & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618770 mov edx, 0x10 */ { edx = (u32)(0x10u); }
  /* 00618775 sub edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00618777 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618779 jle 0x6187dc */ if ((ZF_|LT_)) goto L_006187dc;
  /* 0061877b xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0061877d mov dword ptr [esp + 0x1c], ebx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 00618781 mov di, word ptr [ebx + esi*4] */ { const u32 m_ = (u32)(ebx + esi * 4u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618785 mov edx, edi */ { edx = (u32)(edi); }
  /* 00618787 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00618789 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061878c or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00618793 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618796 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061879c mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061879f mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 006187a2 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006187a5 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006187a6 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 006187a9 mov esi, edx */ { esi = (u32)(edx); }
  /* 006187ab mov dl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006187b1 mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 006187b5 mov byte ptr [esi + ecx], dl */ { const u32 m_ = (u32)(esi + ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 006187b8 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 006187bb mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 006187c1 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006187c2 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 006187c5 mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 006187c7 sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 006187c9 shr di, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (edi & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); edi = (edi & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 006187cc lea ecx, [edx + ebp - 0x10] */ ecx = (u32)((u32)(edx + ebp + 0xfffffff0u));
  /* 006187d0 mov word ptr [eax + 0x16b0], di */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 006187d7 jmp 0x618a6a */ goto L_00618a6a;
L_006187dc:;
  /* 006187dc mov dx, word ptr [ebx + esi*4] */ { const u32 m_ = (u32)(ebx + esi * 4u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006187e0 shl dx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (edx & 0xffffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffu; u32 cf_ = n_ <= 16u ? (a_ >> (16u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 15) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); edx = (edx & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 006187e3 or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 006187ea add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006187ec jmp 0x618a6a */ goto L_00618a6a;
L_006187f1:;
  /* 006187f1 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 006187f3 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 006187f5 mov dl, byte ptr [esi + 0x63e090] */ { const u32 m_ = (u32)(esi + 0x63e090u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006187fb mov dword ptr [esp + 0x1c], edx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edx); }
  /* 006187ff mov di, word ptr [ebx + edx*4 + 0x406] */ { const u32 m_ = (u32)(ebx + edx * 4u + 0x406u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618807 mov ebx, 0x10 */ { ebx = (u32)(0x10u); }
  /* 0061880c sub ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061880e mov dword ptr [esp + 0x10], edi */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edi); }
  /* 00618812 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618814 mov ebx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebx = (u32)(M32(m_)); }
  /* 00618818 jle 0x618882 */ if ((ZF_|LT_)) goto L_00618882;
  /* 0061881a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0061881c mov di, word ptr [ebx + edx*4 + 0x404] */ { const u32 m_ = (u32)(ebx + edx * 4u + 0x404u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618824 mov edx, edi */ { edx = (u32)(edi); }
  /* 00618826 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00618828 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061882b or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00618832 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618835 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061883b mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061883e mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618841 mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618847 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618848 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 0061884b mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0061884d mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00618850 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00618853 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00618856 mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 0061885c inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061885d mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00618860 mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 00618862 sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00618864 shr di, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (edi & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); edi = (edi & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 00618867 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0061886b lea edx, [edx + ecx - 0x10] */ edx = (u32)((u32)(edx + ecx + 0xfffffff0u));
  /* 0061886f mov dword ptr [eax + 0x16b4], edx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(edx); }
  /* 00618875 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 00618879 mov word ptr [eax + 0x16b0], di */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 00618880 jmp 0x6188a2 */ goto L_006188a2;
L_00618882:;
  /* 00618882 mov bx, word ptr [ebx + edx*4 + 0x404] */ { const u32 m_ = (u32)(ebx + edx * 4u + 0x404u); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061888a shl bx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (ebx & 0xffffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffu; u32 cf_ = n_ <= 16u ? (a_ >> (16u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 15) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); ebx = (ebx & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 0061888d mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 00618893 or word ptr [eax + 0x16b0], bx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (ebx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 0061889a add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061889c mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
L_006188a2:;
  /* 006188a2 mov edi, dword ptr [edx*4 + 0x63d848] */ { const u32 m_ = (u32)(edx * 4u + 0x63d848u); edi = (u32)(M32(m_)); }
  /* 006188a9 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006188ab je 0x618928 */ if (ZF_) goto L_00618928;
  /* 006188ad mov ecx, dword ptr [edx*4 + 0x63e190] */ { const u32 m_ = (u32)(edx * 4u + 0x63e190u); ecx = (u32)(M32(m_)); }
  /* 006188b4 mov edx, 0x10 */ { edx = (u32)(0x10u); }
  /* 006188b9 sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 006188bb mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 006188c1 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006188c3 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006188c5 jle 0x618917 */ if ((ZF_|LT_)) goto L_00618917;
  /* 006188c7 mov edx, esi */ { edx = (u32)(esi); }
  /* 006188c9 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 006188cb mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006188ce or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 006188d5 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 006188d8 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006188de mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006188e1 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 006188e4 mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006188ea inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006188eb mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 006188ee mov ecx, edx */ { ecx = (u32)(edx); }
  /* 006188f0 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 006188f3 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006188f6 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 006188f9 mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 006188ff inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618900 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00618903 mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 00618905 sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00618907 shr si, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (esi & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); esi = (esi & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 0061890a lea ecx, [edx + edi - 0x10] */ ecx = (u32)((u32)(edx + edi + 0xfffffff0u));
  /* 0061890e mov word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 00618915 jmp 0x618922 */ goto L_00618922;
L_00618917:;
  /* 00618917 shl esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00618919 or word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (esi & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00618920 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00618922:;
  /* 00618922 mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
L_00618928:;
  /* 00618928 dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00618929 cmp ebp, 0x100 */ { u32 a_ = ebp, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061892f jae 0x61893b */ if (!CF_) goto L_0061893b;
  /* 00618931 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00618933 mov dl, byte ptr [ebp + 0x63de90] */ { const u32 m_ = (u32)(ebp + 0x63de90u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618939 jmp 0x61894a */ goto L_0061894a;
L_0061893b:;
  /* 0061893b mov edx, ebp */ { edx = (u32)(ebp); }
  /* 0061893d shr edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00618940 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00618942 mov cl, byte ptr [edx + 0x63df90] */ { const u32 m_ = (u32)(edx + 0x63df90u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618948 mov edx, ecx */ { edx = (u32)(ecx); }
L_0061894a:;
  /* 0061894a mov ebx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebx = (u32)(M32(m_)); }
  /* 0061894e mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 00618954 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00618956 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0061895b mov di, word ptr [ebx + edx*4 + 2] */ { const u32 m_ = (u32)(ebx + edx * 4u + 0x2u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618960 mov dword ptr [esp + 0x1c], edx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edx); }
  /* 00618964 sub esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00618966 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618968 jle 0x6189c4 */ if ((ZF_|LT_)) goto L_006189c4;
  /* 0061896a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0061896c mov si, word ptr [ebx + edx*4] */ { const u32 m_ = (u32)(ebx + edx * 4u); esi = (esi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618970 mov edx, esi */ { edx = (u32)(esi); }
  /* 00618972 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00618974 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00618977 or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 0061897e mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618981 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618987 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061898a mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061898d mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618993 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618994 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00618997 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00618999 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0061899c mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0061899f mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 006189a2 mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 006189a8 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006189a9 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 006189ac mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 006189ae sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 006189b0 shr si, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (esi & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); esi = (esi & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 006189b3 lea ecx, [edx + edi - 0x10] */ ecx = (u32)((u32)(edx + edi + 0xfffffff0u));
  /* 006189b7 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 006189bb mov word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 006189c2 jmp 0x6189d4 */ goto L_006189d4;
L_006189c4:;
  /* 006189c4 mov si, word ptr [ebx + edx*4] */ { const u32 m_ = (u32)(ebx + edx * 4u); esi = (esi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006189c8 shl si, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (esi & 0xffffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffu; u32 cf_ = n_ <= 16u ? (a_ >> (16u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 15) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); esi = (esi & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 006189cb or word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (esi & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 006189d2 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_006189d4:;
  /* 006189d4 mov ebx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebx = (u32)(M32(m_)); }
  /* 006189d8 mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
  /* 006189de mov esi, dword ptr [edx*4 + 0x63d8c0] */ { const u32 m_ = (u32)(edx * 4u + 0x63d8c0u); esi = (u32)(M32(m_)); }
  /* 006189e5 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006189e7 je 0x618a70 */ if (ZF_) goto L_00618a70;
  /* 006189ed mov ecx, dword ptr [edx*4 + 0x63e208] */ { const u32 m_ = (u32)(edx * 4u + 0x63e208u); ecx = (u32)(M32(m_)); }
  /* 006189f4 mov edx, 0x10 */ { edx = (u32)(0x10u); }
  /* 006189f9 sub ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 006189fb mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 00618a01 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00618a03 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618a05 jle 0x618a5f */ if ((ZF_|LT_)) goto L_00618a5f;
  /* 00618a07 mov edx, ebp */ { edx = (u32)(ebp); }
  /* 00618a09 mov dword ptr [esp + 0x1c], ebx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 00618a0d shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00618a0f mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00618a12 or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00618a19 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618a1c mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618a22 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00618a25 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618a28 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00618a2b inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618a2c mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00618a2f mov edi, edx */ { edi = (u32)(edx); }
  /* 00618a31 mov dl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618a37 mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 00618a3b mov byte ptr [edi + ecx], dl */ { const u32 m_ = (u32)(edi + ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00618a3e mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00618a41 mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 00618a47 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618a48 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00618a4b mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 00618a4d sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00618a4f shr bp, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (ebp & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); ebp = (ebp & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 00618a52 lea ecx, [edx + esi - 0x10] */ ecx = (u32)((u32)(edx + esi + 0xfffffff0u));
  /* 00618a56 mov word ptr [eax + 0x16b0], bp */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((ebp & 0xffffu)); }
  /* 00618a5d jmp 0x618a6a */ goto L_00618a6a;
L_00618a5f:;
  /* 00618a5f shl ebp, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 00618a61 or word ptr [eax + 0x16b0], bp */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (ebp & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00618a68 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00618a6a:;
  /* 00618a6a mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
L_00618a70:;
  /* 00618a70 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 00618a74 mov ecx, dword ptr [eax + 0x1698] */ { const u32 m_ = (u32)(eax + 0x1698u); ecx = (u32)(M32(m_)); }
  /* 00618a7a cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618a7c jb 0x61873f */ if (CF_) goto L_0061873f;
L_00618a82:;
  /* 00618a82 mov ecx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); ecx = (u32)(M32(m_)); }
  /* 00618a88 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00618a8a mov di, word ptr [ebx + 0x402] */ { const u32 m_ = (u32)(ebx + 0x402u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618a91 mov edx, 0x10 */ { edx = (u32)(0x10u); }
  /* 00618a96 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00618a98 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618a9a jle 0x618afd */ if ((ZF_|LT_)) goto L_00618afd;
  /* 00618a9c xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00618a9e mov dword ptr [esp + 0x20], ebx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ebx); }
  /* 00618aa2 mov si, word ptr [ebx + 0x400] */ { const u32 m_ = (u32)(ebx + 0x400u); esi = (esi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618aa9 mov edx, esi */ { edx = (u32)(esi); }
  /* 00618aab shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00618aad mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00618ab0 or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00618ab7 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618aba mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618ac0 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00618ac3 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618ac6 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00618ac9 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618aca mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00618acd mov ebp, edx */ { ebp = (u32)(edx); }
  /* 00618acf mov dl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618ad5 mov ebx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebx = (u32)(M32(m_)); }
  /* 00618ad9 mov byte ptr [ecx + ebp], dl */ { const u32 m_ = (u32)(ecx + ebp); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00618adc mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00618adf mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 00618ae5 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618ae6 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00618ae9 mov cl, 0x10 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x10u) & 0xffu); }
  /* 00618aeb sub cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00618aed shr si, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (esi & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); esi = (esi & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 00618af0 lea ecx, [edx + edi - 0x10] */ ecx = (u32)((u32)(edx + edi + 0xfffffff0u));
  /* 00618af4 mov word ptr [eax + 0x16b0], si */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 00618afb jmp 0x618b10 */ goto L_00618b10;
L_00618afd:;
  /* 00618afd mov dx, word ptr [ebx + 0x400] */ { const u32 m_ = (u32)(ebx + 0x400u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618b04 shl dx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (edx & 0xffffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffu; u32 cf_ = n_ <= 16u ? (a_ >> (16u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 15) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); edx = (edx & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 00618b07 or word ptr [eax + 0x16b0], dx */ { const u32 m_ = (u32)(eax + 0x16b0u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 00618b0e add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00618b10:;
  /* 00618b10 mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
  /* 00618b16 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00618b18 mov cx, word ptr [ebx + 0x402] */ { const u32 m_ = (u32)(ebx + 0x402u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618b1f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00618b20 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00618b21 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00618b22 mov dword ptr [eax + 0x16ac], ecx */ { const u32 m_ = (u32)(eax + 0x16acu); M32(m_) = (u32)(ecx); }
  /* 00618b28 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00618b29 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618b2c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618b30(CPU *c) {
  NATIVE_HOOK(0x618b30u) REGS; LOADALL;
L_00618b30:;
  /* 00618b30 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00618b34 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00618b35 mov edx, dword ptr [eax + 0x16b4] */ { const u32 m_ = (u32)(eax + 0x16b4u); edx = (u32)(M32(m_)); }
  /* 00618b3b cmp edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618b3e jle 0x618b7c */ if ((ZF_|LT_)) goto L_00618b7c;
  /* 00618b40 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00618b43 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618b46 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618b4c mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00618b4f mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618b52 mov bl, byte ptr [eax + 0x16b1] */ { const u32 m_ = (u32)(eax + 0x16b1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618b58 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618b59 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00618b5c mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00618b5e mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00618b61 mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00618b64 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00618b67 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618b68 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00618b69 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00618b6c xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00618b6e mov word ptr [eax + 0x16b0], cx */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 00618b75 mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
  /* 00618b7b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00618b7c:;
  /* 00618b7c xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00618b7e cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618b80 jle 0x618b9a */ if ((ZF_|LT_)) goto L_00618b9a;
  /* 00618b82 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00618b85 mov bl, byte ptr [eax + 0x16b0] */ { const u32 m_ = (u32)(eax + 0x16b0u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618b8b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00618b8c mov esi, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); esi = (u32)(M32(m_)); }
  /* 00618b8f mov byte ptr [edx + esi], bl */ { const u32 m_ = (u32)(edx + esi); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00618b92 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00618b95 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618b96 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00618b97 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
L_00618b9a:;
  /* 00618b9a mov word ptr [eax + 0x16b0], cx */ { const u32 m_ = (u32)(eax + 0x16b0u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 00618ba1 mov dword ptr [eax + 0x16b4], ecx */ { const u32 m_ = (u32)(eax + 0x16b4u); M32(m_) = (u32)(ecx); }
  /* 00618ba7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00618ba8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618bb0(CPU *c) {
  NATIVE_HOOK(0x618bb0u) REGS; LOADALL;
L_00618bb0:;
  /* 00618bb0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00618bb4 mov ecx, dword ptr [0x9bf8f8] */ { const u32 m_ = (u32)(0x9bf8f8u); ecx = (u32)(M32(m_)); }
  /* 00618bba mov al, byte ptr [ecx + eax + 0xa] */ { const u32 m_ = (u32)(ecx + eax + 0xau); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618bbe and al, 0xf0 */ { u32 a_ = (eax & 0xffu), b_ = 0xf0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00618bc0 neg al */ { u32 a_ = (eax & 0xffu); u32 r_ = (0u - a_) & 0xffu; eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 00618bc2 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00618bc4 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00618bc6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618bd0(CPU *c) {
  NATIVE_HOOK(0x618bd0u) REGS; LOADALL;
L_00618bd0:;
  /* 00618bd0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00618bd4 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00618bd8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00618bd9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00618bda mov esi, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); esi = (u32)(M32(m_)); }
  /* 00618bdd mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 00618be1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00618be3 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618be5 je 0x618bef */ if (ZF_) goto L_00618bef;
  /* 00618be7 mov dword ptr [esi + 0x210], eax */ { const u32 m_ = (u32)(esi + 0x210u); M32(m_) = (u32)(eax); }
  /* 00618bed jmp 0x618c1c */ goto L_00618c1c;
L_00618bef:;
  /* 00618bef cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618bf1 je 0x618c16 */ if (ZF_) goto L_00618c16;
  /* 00618bf3 mov ecx, dword ptr [esi + 0x20c] */ { const u32 m_ = (u32)(esi + 0x20cu); ecx = (u32)(M32(m_)); }
  /* 00618bf9 lea edx, [esi + 0x34] */ edx = (u32)((u32)(esi + 0x34u));
  /* 00618bfc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00618bfd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00618bfe call 0x5fa230 */ esp -= 4; M32(esp) = 0x618c03u; SAVEALL; F_005fa230(c); ABI_CHECK(0x5fa230u, 0x618bfeu); RETCHK(0x618c03u, 0x618bfeu); LOADALL;
  /* 00618c03 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618c06 add esi, 0x34 */ { u32 a_ = esi, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00618c09 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00618c0a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00618c0b call 0x5fa170 */ esp -= 4; M32(esp) = 0x618c10u; SAVEALL; F_005fa170(c); ABI_CHECK(0x5fa170u, 0x618c0bu); RETCHK(0x618c10u, 0x618c0bu); LOADALL;
  /* 00618c10 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618c13 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00618c14 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00618c15 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00618c16:;
  /* 00618c16 mov eax, dword ptr [esi + 0xbc] */ { const u32 m_ = (u32)(esi + 0xbcu); eax = (u32)(M32(m_)); }
L_00618c1c:;
  /* 00618c1c mov dword ptr [esi + 0x20c], eax */ { const u32 m_ = (u32)(esi + 0x20cu); M32(m_) = (u32)(eax); }
  /* 00618c22 add esi, 0x34 */ { u32 a_ = esi, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00618c25 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00618c26 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00618c27 call 0x5fa170 */ esp -= 4; M32(esp) = 0x618c2cu; SAVEALL; F_005fa170(c); ABI_CHECK(0x5fa170u, 0x618c27u); RETCHK(0x618c2cu, 0x618c27u); LOADALL;
  /* 00618c2c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618c2f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00618c30 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00618c31 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618c40(CPU *c) {
  NATIVE_HOOK(0x618c40u) REGS; LOADALL;
L_00618c40:;
  /* 00618c40 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618c43 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00618c47 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00618c4b mov dword ptr [esp], ecx */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(ecx); }
  /* 00618c4f mov dword ptr [esp + 4], 0 */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 00618c57 mov eax, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); eax = (u32)(M32(m_)); }
  /* 00618c5a fild qword ptr [esp] */ { const u32 m_ = (u32)(esp); FPUSH((double)(s64)M64(m_)); }
  /* 00618c5e mov ecx, dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00618c61 or ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00618c64 fstp dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00618c67 mov dword ptr [eax + 0x5c], ecx */ { const u32 m_ = (u32)(eax + 0x5cu); M32(m_) = (u32)(ecx); }
  /* 00618c6a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618c6d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618c70(CPU *c) {
  NATIVE_HOOK(0x618c70u) REGS; LOADALL;
L_00618c70:;
  /* 00618c70 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618c73 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00618c77 mov ecx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00618c7a fld dword ptr [ecx + 0x60] */ { const u32 m_ = (u32)(ecx + 0x60u); FPUSH((double)MF32(m_)); }
  /* 00618c7d fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00618c81 fnstcw word ptr [esp + 2] */ { const u32 m_ = (u32)(esp + 0x2u); M16(m_) = (u16)c->fcw; }
  /* 00618c85 fld dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00618c89 mov ax, word ptr [esp + 2] */ { const u32 m_ = (u32)(esp + 0x2u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00618c8e or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00618c91 mov word ptr [esp + 0x10], ax */ { const u32 m_ = (u32)(esp + 0x10u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00618c96 fldcw word ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00618c9a fistp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 00618c9e fldcw word ptr [esp + 2] */ { const u32 m_ = (u32)(esp + 0x2u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00618ca2 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00618ca6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618ca9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618cb0(CPU *c) {
  NATIVE_HOOK(0x618cb0u) REGS; LOADALL;
L_00618cb0:;
  /* 00618cb0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00618cb4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00618cb5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00618cb6 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 00618cba mov ecx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00618cbd mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00618cc0 cmp edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618cc3 jge 0x618dce */ if (!LT_) goto L_00618dce;
  /* 00618cc9 mov bl, byte ptr [ecx + 0x230] */ { const u32 m_ = (u32)(ecx + 0x230u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00618ccf cmp bl, 2 */ { u32 a_ = (ebx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00618cd2 jne 0x618cdc */ if (!ZF_) goto L_00618cdc;
  /* 00618cd4 cmp edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618cd6 jne 0x618dce */ if (!ZF_) goto L_00618dce;
L_00618cdc:;
  /* 00618cdc fld dword ptr [ecx + 0x68] */ { const u32 m_ = (u32)(ecx + 0x68u); FPUSH((double)MF32(m_)); }
  /* 00618cdf fld dword ptr [ecx + 0x64] */ { const u32 m_ = (u32)(ecx + 0x64u); FPUSH((double)MF32(m_)); }
  /* 00618ce2 fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00618ce6 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00618cec fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00618cee and eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00618cf3 jne 0x618d0d */ if (!ZF_) goto L_00618d0d;
  /* 00618cf5 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 00618cfb fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 00618cfd fmul dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00618d01 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00618d05 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00618d07 fld dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00618d0b jmp 0x618d1f */ goto L_00618d1f;
L_00618d0d:;
  /* 00618d0d fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00618d13 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00618d17 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 00618d1b fmul dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
L_00618d1f:;
  /* 00618d1f cmp bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00618d22 jne 0x618d28 */ if (!ZF_) goto L_00618d28;
  /* 00618d24 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00618d26 jmp 0x618d2b */ goto L_00618d2b;
L_00618d28:;
  /* 00618d28 cmp dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
L_00618d2b:;
  /* 00618d2b jne 0x618d32 */ if (!ZF_) goto L_00618d32;
  /* 00618d2d fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00618d30 jmp 0x618d3b */ goto L_00618d3b;
L_00618d32:;
  /* 00618d32 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00618d34 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00618d37 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
L_00618d3b:;
  /* 00618d3b fcom st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1));
  /* 00618d3d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00618d3f and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00618d44 jne 0x618d78 */ if (!ZF_) goto L_00618d78;
  /* 00618d46 fcom dword ptr [0x656f50] */ { const u32 m_ = (u32)(0x656f50u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00618d4c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00618d4e and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00618d53 jne 0x618d6e */ if (!ZF_) goto L_00618d6e;
  /* 00618d55 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00618d5b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00618d5d test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00618d60 jnp 0x618d6e */ if (!PF_) goto L_00618d6e;
  /* 00618d62 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 00618d68 fdiv st(1) */ ST(0) = FR(ST(0) / ST(1));
  /* 00618d6a fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00618d6c jmp 0x618daa */ goto L_00618daa;
L_00618d6e:;
  /* 00618d6e fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 00618d74 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00618d76 jmp 0x618daa */ goto L_00618daa;
L_00618d78:;
  /* 00618d78 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00618d7a fcomp dword ptr [0x656f50] */ { const u32 m_ = (u32)(0x656f50u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00618d80 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00618d82 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00618d87 jne 0x618da2 */ if (!ZF_) goto L_00618da2;
  /* 00618d89 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00618d8b fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00618d91 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00618d93 test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00618d96 jnp 0x618da2 */ if (!PF_) goto L_00618da2;
  /* 00618d98 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 00618d9e fdiv st(2) */ ST(0) = FR(ST(0) / ST(2));
  /* 00618da0 jmp 0x618da8 */ goto L_00618da8;
L_00618da2:;
  /* 00618da2 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
L_00618da8:;
  /* 00618da8 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
L_00618daa:;
  /* 00618daa fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00618dae mov eax, dword ptr [ecx + 0x5c] */ { const u32 m_ = (u32)(ecx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00618db1 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00618db5 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00618db7 fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 00618db9 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00618dbb fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00618dbd or al, 0xc0 */ { u32 a_ = (eax & 0xffu), b_ = 0xc0u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00618dbf mov dword ptr [ecx + 0x64], edx */ { const u32 m_ = (u32)(ecx + 0x64u); M32(m_) = (u32)(edx); }
  /* 00618dc2 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00618dc4 mov dword ptr [ecx + 0x5c], eax */ { const u32 m_ = (u32)(ecx + 0x5cu); M32(m_) = (u32)(eax); }
  /* 00618dc7 fstp dword ptr [ecx + 0x68] */ { const u32 m_ = (u32)(ecx + 0x68u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00618dca fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00618dcc fstp st(0) */ ST(0) = ST(0); FPOP();
L_00618dce:;
  /* 00618dce pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00618dcf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00618dd0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618de0(CPU *c) {
  NATIVE_HOOK(0x618de0u) REGS; LOADALL;
L_00618de0:;
  /* 00618de0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00618de4 mov eax, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); eax = (u32)(M32(m_)); }
  /* 00618de7 add eax, 0x1c8 */ { u32 a_ = eax, b_ = 0x1c8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00618dec ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618df0(CPU *c) {
  NATIVE_HOOK(0x618df0u) REGS; LOADALL;
L_00618df0:;
  /* 00618df0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00618df1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00618df2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00618df6 mov esi, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); esi = (u32)(M32(m_)); }
  /* 00618df9 mov eax, dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); eax = (u32)(M32(m_)); }
  /* 00618dff add eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00618e01 mov dword ptr [esi + 0x224], eax */ { const u32 m_ = (u32)(esi + 0x224u); M32(m_) = (u32)(eax); }
  /* 00618e07 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00618e0b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00618e0d je 0x618e61 */ if (ZF_) goto L_00618e61;
  /* 00618e0f mov eax, dword ptr [esi + 0x1f0] */ { const u32 m_ = (u32)(esi + 0x1f0u); eax = (u32)(M32(m_)); }
  /* 00618e15 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00618e17 je 0x618e34 */ if (ZF_) goto L_00618e34;
  /* 00618e19 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00618e1c test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00618e1e je 0x618e2a */ if (ZF_) goto L_00618e2a;
  /* 00618e20 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00618e23 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00618e24 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00618e25 call dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x618e27u; SAVEALL; call_ind(c, t_); RETCHK(0x618e27u, 0x618e25u); LOADALL; }
  /* 00618e27 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00618e2a:;
  /* 00618e2a mov dword ptr [esi + 0x1f0], 0 */ { const u32 m_ = (u32)(esi + 0x1f0u); M32(m_) = (u32)(0x0u); }
L_00618e34:;
  /* 00618e34 lea eax, [esi + 0x34] */ eax = (u32)((u32)(esi + 0x34u));
  /* 00618e37 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00618e38 call 0x5fa1b0 */ esp -= 4; M32(esp) = 0x618e3du; SAVEALL; F_005fa1b0(c); ABI_CHECK(0x5fa1b0u, 0x618e38u); RETCHK(0x618e3du, 0x618e38u); LOADALL;
  /* 00618e3d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618e40 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00618e42 je 0x618e58 */ if (ZF_) goto L_00618e58;
  /* 00618e44 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00618e46 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00618e48 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00618e49 call 0x618bd0 */ esp -= 4; M32(esp) = 0x618e4eu; SAVEALL; F_00618bd0(c); ABI_CHECK(0x618bd0u, 0x618e49u); RETCHK(0x618e4eu, 0x618e49u); LOADALL;
  /* 00618e4e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618e51 mov dword ptr [esi + 0x28], 7 */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0x7u); }
L_00618e58:;
  /* 00618e58 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00618e59 call 0x618e70 */ esp -= 4; M32(esp) = 0x618e5eu; SAVEALL; F_00618e70(c); ABI_CHECK(0x618e70u, 0x618e59u); RETCHK(0x618e5eu, 0x618e59u); LOADALL;
  /* 00618e5e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00618e61:;
  /* 00618e61 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00618e62 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00618e63 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618e70(CPU *c) {
  NATIVE_HOOK(0x618e70u) REGS; LOADALL;
L_00618e70:;
  /* 00618e70 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00618e74 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00618e76 mov dword ptr [eax + 0x1e8], ecx */ { const u32 m_ = (u32)(eax + 0x1e8u); M32(m_) = (u32)(ecx); }
  /* 00618e7c mov dword ptr [eax + 0x20c], ecx */ { const u32 m_ = (u32)(eax + 0x20cu); M32(m_) = (u32)(ecx); }
  /* 00618e82 mov dword ptr [eax + 0x210], ecx */ { const u32 m_ = (u32)(eax + 0x210u); M32(m_) = (u32)(ecx); }
  /* 00618e88 mov ecx, dword ptr [eax + 0x1ec] */ { const u32 m_ = (u32)(eax + 0x1ecu); ecx = (u32)(M32(m_)); }
  /* 00618e8e add ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00618e90 mov dword ptr [eax + 0x224], ecx */ { const u32 m_ = (u32)(eax + 0x224u); M32(m_) = (u32)(ecx); }
  /* 00618e96 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618ea0(CPU *c) {
  NATIVE_HOOK(0x618ea0u) REGS; LOADALL;
L_00618ea0:;
  /* 00618ea0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00618ea4 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 00618ea8 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00618eaa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00618eab push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00618eac call 0x618c40 */ esp -= 4; M32(esp) = 0x618eb1u; SAVEALL; F_00618c40(c); ABI_CHECK(0x618c40u, 0x618eacu); RETCHK(0x618eb1u, 0x618eacu); LOADALL;
  /* 00618eb1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618eb4 mov eax, edx */ { eax = (u32)(edx); }
  /* 00618eb6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618ec0(CPU *c) {
  NATIVE_HOOK(0x618ec0u) REGS; LOADALL;
L_00618ec0:;
  /* 00618ec0 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 00618ec4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00618ec5 call 0x618c70 */ esp -= 4; M32(esp) = 0x618ecau; SAVEALL; F_00618c70(c); ABI_CHECK(0x618c70u, 0x618ec5u); RETCHK(0x618ecau, 0x618ec5u); LOADALL;
  /* 00618eca mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00618ece add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618ed1 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 00618ed3 mov eax, edx */ { eax = (u32)(edx); }
  /* 00618ed5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618ee0(CPU *c) {
  NATIVE_HOOK(0x618ee0u) REGS; LOADALL;
L_00618ee0:;
  /* 00618ee0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00618ee4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00618ee5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00618ee9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00618eea push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00618eeb call 0x618cb0 */ esp -= 4; M32(esp) = 0x618ef0u; SAVEALL; F_00618cb0(c); ABI_CHECK(0x618cb0u, 0x618eebu); RETCHK(0x618ef0u, 0x618eebu); LOADALL;
  /* 00618ef0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618ef3 mov eax, esi */ { eax = (u32)(esi); }
  /* 00618ef5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00618ef6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618f00(CPU *c) {
  NATIVE_HOOK(0x618f00u) REGS; LOADALL;
L_00618f00:;
  /* 00618f00 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00618f04 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00618f05 call 0x618de0 */ esp -= 4; M32(esp) = 0x618f0au; SAVEALL; F_00618de0(c); ABI_CHECK(0x618de0u, 0x618f05u); RETCHK(0x618f0au, 0x618f05u); LOADALL;
  /* 00618f0a mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00618f0e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618f11 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 00618f13 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00618f15 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618f20(CPU *c) {
  NATIVE_HOOK(0x618f20u) REGS; LOADALL;
L_00618f20:;
  /* 00618f20 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00618f24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00618f25 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00618f29 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00618f2b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00618f2c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00618f2d call 0x618df0 */ esp -= 4; M32(esp) = 0x618f32u; SAVEALL; F_00618df0(c); ABI_CHECK(0x618df0u, 0x618f2du); RETCHK(0x618f32u, 0x618f2du); LOADALL;
  /* 00618f32 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618f35 mov eax, esi */ { eax = (u32)(esi); }
  /* 00618f37 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00618f38 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618f40(CPU *c) {
  NATIVE_HOOK(0x618f40u) REGS; LOADALL;
L_00618f40:;
  /* 00618f40 mov eax, dword ptr [0x69485c] */ { const u32 m_ = (u32)(0x69485cu); eax = (u32)(M32(m_)); }
  /* 00618f45 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00618f46 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00618f48 je 0x618f76 */ if (ZF_) goto L_00618f76;
  /* 00618f4a mov eax, dword ptr [0x694860] */ { const u32 m_ = (u32)(0x694860u); eax = (u32)(M32(m_)); }
  /* 00618f4f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00618f51 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00618f53 jbe 0x618f76 */ if ((CF_|ZF_)) goto L_00618f76;
L_00618f55:;
  /* 00618f55 mov eax, dword ptr [0x69485c] */ { const u32 m_ = (u32)(0x69485cu); eax = (u32)(M32(m_)); }
  /* 00618f5a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00618f5c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00618f5e push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00618f60 mov ecx, dword ptr [eax + esi*4] */ { const u32 m_ = (u32)(eax + esi * 4u); ecx = (u32)(M32(m_)); }
  /* 00618f63 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00618f64 call 0x5f7460 */ esp -= 4; M32(esp) = 0x618f69u; SAVEALL; F_005f7460(c); ABI_CHECK(0x5f7460u, 0x618f64u); RETCHK(0x618f69u, 0x618f64u); LOADALL;
  /* 00618f69 mov eax, dword ptr [0x694860] */ { const u32 m_ = (u32)(0x694860u); eax = (u32)(M32(m_)); }
  /* 00618f6e add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618f71 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618f72 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618f74 jb 0x618f55 */ if (CF_) goto L_00618f55;
L_00618f76:;
  /* 00618f76 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00618f7a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00618f7b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00618f7d je 0x618f94 */ if (ZF_) goto L_00618f94;
  /* 00618f7f mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 00618f82 mov dword ptr [0x69485c], edx */ { const u32 m_ = (u32)(0x69485cu); M32(m_) = (u32)(edx); }
  /* 00618f88 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00618f8a mov dword ptr [0x694860], eax */ { const u32 m_ = (u32)(0x694860u); M32(m_) = (u32)(eax); }
  /* 00618f8f mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00618f93 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00618f94:;
  /* 00618f94 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00618f98 mov dword ptr [0x69485c], 0 */ { const u32 m_ = (u32)(0x69485cu); M32(m_) = (u32)(0x0u); }
  /* 00618fa2 mov dword ptr [0x694860], 0 */ { const u32 m_ = (u32)(0x694860u); M32(m_) = (u32)(0x0u); }
  /* 00618fac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00618fb0(CPU *c) {
  NATIVE_HOOK(0x618fb0u) REGS; LOADALL;
L_00618fb0:;
  /* 00618fb0 mov eax, dword ptr [0x694860] */ { const u32 m_ = (u32)(0x694860u); eax = (u32)(M32(m_)); }
  /* 00618fb5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00618fb6 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00618fb8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00618fba jbe 0x618fe1 */ if ((CF_|ZF_)) goto L_00618fe1;
L_00618fbc:;
  /* 00618fbc mov eax, dword ptr [0x69485c] */ { const u32 m_ = (u32)(0x69485cu); eax = (u32)(M32(m_)); }
  /* 00618fc1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00618fc3 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00618fc5 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00618fc7 mov ecx, dword ptr [eax + esi*4] */ { const u32 m_ = (u32)(eax + esi * 4u); ecx = (u32)(M32(m_)); }
  /* 00618fca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00618fcb call 0x5f74b0 */ esp -= 4; M32(esp) = 0x618fd0u; SAVEALL; F_005f74b0(c); ABI_CHECK(0x5f74b0u, 0x618fcbu); RETCHK(0x618fd0u, 0x618fcbu); LOADALL;
  /* 00618fd0 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00618fd3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00618fd5 je 0x618ff1 */ if (ZF_) goto L_00618ff1;
  /* 00618fd7 mov eax, dword ptr [0x694860] */ { const u32 m_ = (u32)(0x694860u); eax = (u32)(M32(m_)); }
  /* 00618fdc inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00618fdd cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00618fdf jb 0x618fbc */ if (CF_) goto L_00618fbc;
L_00618fe1:;
  /* 00618fe1 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00618fe5 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00618fe9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00618fea mov dword ptr [edx], 0 */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0x0u); }
  /* 00618ff0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00618ff1:;
  /* 00618ff1 mov edx, dword ptr [0x69485c] */ { const u32 m_ = (u32)(0x69485cu); edx = (u32)(M32(m_)); }
  /* 00618ff7 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00618ffb mov eax, dword ptr [edx + esi*4] */ { const u32 m_ = (u32)(edx + esi * 4u); eax = (u32)(M32(m_)); }
  /* 00618ffe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00618fff mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 00619001 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619005 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619010(CPU *c) {
  NATIVE_HOOK(0x619010u) REGS; LOADALL;
L_00619010:;
  /* 00619010 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619014 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00619016 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0061901a mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 0061901d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619020(CPU *c) {
  NATIVE_HOOK(0x619020u) REGS; LOADALL;
L_00619020:;
  /* 00619020 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619024 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619028 mov ecx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0061902b mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0061902d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619030(CPU *c) {
  NATIVE_HOOK(0x619030u) REGS; LOADALL;
L_00619030:;
  /* 00619030 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619034 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00619038 mov dword ptr [eax + 0x34], ecx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(ecx); }
  /* 0061903b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619040(CPU *c) {
  NATIVE_HOOK(0x619040u) REGS; LOADALL;
L_00619040:;
  /* 00619040 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619044 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619048 mov ecx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (u32)(M32(m_)); }
  /* 0061904b mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0061904d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619050(CPU *c) {
  NATIVE_HOOK(0x619050u) REGS; LOADALL;
L_00619050:;
  /* 00619050 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619054 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00619056 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0061905a mov dword ptr [eax + 0x38], ecx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(ecx); }
  /* 0061905d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619060(CPU *c) {
  NATIVE_HOOK(0x619060u) REGS; LOADALL;
L_00619060:;
  /* 00619060 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619064 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619068 mov ecx, dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ecx = (u32)(M32(m_)); }
  /* 0061906b mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0061906d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619070(CPU *c) {
  NATIVE_HOOK(0x619070u) REGS; LOADALL;
L_00619070:;
  /* 00619070 mov eax, 0x694908 */ { eax = (u32)(0x694908u); }
  /* 00619075 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619080(CPU *c) {
  NATIVE_HOOK(0x619080u) REGS; LOADALL;
L_00619080:;
  /* 00619080 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00619084 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00619085 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00619086 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619087 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00619089 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061908a mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 0061908e lea esi, [edi + 0x28] */ esi = (u32)((u32)(edi + 0x28u));
  /* 00619091 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 00619093 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 00619096 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 00619099 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0061909b lea ecx, [edi + 0x30] */ ecx = (u32)((u32)(edi + 0x30u));
  /* 0061909e mov ebp, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ebp = (u32)(M32(m_)); }
  /* 006190a0 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 006190a2 mov dword ptr [ebx], ebp */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(ebp); }
  /* 006190a4 mov ebp, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ebp = (u32)(M32(m_)); }
  /* 006190a7 mov dword ptr [ebx + 4], ebp */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ebp); }
  /* 006190aa mov ebp, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ebp = (u32)(M32(m_)); }
  /* 006190ad mov dword ptr [ebx + 8], ebp */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ebp); }
  /* 006190b0 mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 006190b3 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 006190b5 mov dword ptr [ebx + 0xc], edx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(edx); }
  /* 006190b8 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 006190ba mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 006190bd cmp ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006190c0 jne 0x6190d8 */ if (!ZF_) goto L_006190d8;
  /* 006190c2 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 006190c4 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 006190c9 lea ecx, [edi + 0x40] */ ecx = (u32)((u32)(edi + 0x40u));
  /* 006190cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006190cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006190ce call 0x5fe7ca */ esp -= 4; M32(esp) = 0x6190d3u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x6190ceu); RETCHK(0x6190d3u, 0x6190ceu); LOADALL;
  /* 006190d3 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006190d6 jmp 0x6190fb */ goto L_006190fb;
L_006190d8:;
  /* 006190d8 cmp ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006190db jne 0x6190fb */ if (!ZF_) goto L_006190fb;
  /* 006190dd mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 006190df lea edx, [edi + 0xdc] */ edx = (u32)((u32)(edi + 0xdcu));
  /* 006190e5 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 006190e7 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 006190e9 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 006190ec mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 006190ef mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006190f2 mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 006190f5 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 006190f8 mov dword ptr [edx + 0xc], eax */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(eax); }
L_006190fb:;
  /* 006190fb mov ecx, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); ecx = (u32)(M32(m_)); }
  /* 00619101 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00619103 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00619104 call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61910au; SAVEALL; call_ind(c, t_); RETCHK(0x61910au, 0x619104u); LOADALL; }
  /* 0061910a add edi, 0x154 */ { u32 a_ = edi, b_ = 0x154u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00619110 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619111 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00619112 call 0x619e30 */ esp -= 4; M32(esp) = 0x619117u; SAVEALL; F_00619e30(c); ABI_CHECK(0x619e30u, 0x619112u); RETCHK(0x619117u, 0x619112u); LOADALL;
  /* 00619117 mov edx, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); edx = (u32)(M32(m_)); }
  /* 0061911d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619120 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00619122 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00619124 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00619125 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61912bu; SAVEALL; call_ind(c, t_); RETCHK(0x61912bu, 0x619125u); LOADALL; }
  /* 0061912b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061912c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061912d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0061912e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061912f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619130(CPU *c) {
  NATIVE_HOOK(0x619130u) REGS; LOADALL;
L_00619130:;
  /* 00619130 mov eax, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); eax = (u32)(M32(m_)); }
  /* 00619135 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619138 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619139 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061913a push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0061913c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061913d call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x619143u; SAVEALL; call_ind(c, t_); RETCHK(0x619143u, 0x61913du); LOADALL; }
  /* 00619143 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 00619147 lea ecx, [esi + 0x148] */ ecx = (u32)((u32)(esi + 0x148u));
  /* 0061914d lea edx, [esi + 0xec] */ edx = (u32)((u32)(esi + 0xecu));
  /* 00619153 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00619154 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00619155 call 0x619d90 */ esp -= 4; M32(esp) = 0x61915au; SAVEALL; F_00619d90(c); ABI_CHECK(0x619d90u, 0x619155u); RETCHK(0x61915au, 0x619155u); LOADALL;
  /* 0061915a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061915d mov edi, eax */ { edi = (u32)(eax); }
  /* 0061915f test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00619161 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00619163 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00619165 jne 0x619182 */ if (!ZF_) goto L_00619182;
  /* 00619167 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0061916b mov dword ptr [eax + 8], edi */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edi); }
  /* 0061916e mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 00619170 mov eax, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); eax = (u32)(M32(m_)); }
  /* 00619175 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619176 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61917cu; SAVEALL; call_ind(c, t_); RETCHK(0x61917cu, 0x619176u); LOADALL; }
  /* 0061917c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061917d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061917e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619181 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00619182:;
  /* 00619182 mov ecx, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); ecx = (u32)(M32(m_)); }
  /* 00619188 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00619189 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61918fu; SAVEALL; call_ind(c, t_); RETCHK(0x61918fu, 0x619189u); LOADALL; }
  /* 0061918f mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00619193 mov ecx, dword ptr [esi + 0x100] */ { const u32 m_ = (u32)(esi + 0x100u); ecx = (u32)(M32(m_)); }
  /* 00619199 add ecx, 0x5c */ { u32 a_ = ecx, b_ = 0x5cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061919c mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0061919f dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006191a0 je 0x6191ad */ if (ZF_) goto L_006191ad;
  /* 006191a2 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006191a3 jne 0x6191e1 */ if (!ZF_) goto L_006191e1;
  /* 006191a5 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 006191a8 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 006191ab jmp 0x6191e1 */ goto L_006191e1;
L_006191ad:;
  /* 006191ad mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 006191b0 mov dword ptr [esp + 0xc], 0 */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 006191b8 mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 006191bc mov edx, dword ptr [esi + 0xf8] */ { const u32 m_ = (u32)(esi + 0xf8u); edx = (u32)(M32(m_)); }
  /* 006191c2 fild qword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)(s64)M64(m_)); }
  /* 006191c6 mov edx, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); edx = (u32)(M32(m_)); }
  /* 006191c9 mov dword ptr [esp + 0xc], 0 */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 006191d1 mov edx, dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); edx = (u32)(M32(m_)); }
  /* 006191d4 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 006191d6 mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 006191da fidiv dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 006191de fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
L_006191e1:;
  /* 006191e1 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 006191e4 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006191e5 je 0x619210 */ if (ZF_) goto L_00619210;
  /* 006191e7 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006191e8 je 0x6191f7 */ if (ZF_) goto L_006191f7;
  /* 006191ea dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006191eb jne 0x619224 */ if (!ZF_) goto L_00619224;
  /* 006191ed mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 006191ef pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006191f0 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 006191f2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006191f3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006191f6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006191f7:;
  /* 006191f7 mov edx, dword ptr [ecx + 0x118] */ { const u32 m_ = (u32)(ecx + 0x118u); edx = (u32)(M32(m_)); }
  /* 006191fd mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 006191ff shl ecx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00619202 mov edx, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); edx = (u32)(M32(m_)); }
  /* 00619205 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00619206 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00619207 mov ecx, dword ptr [ecx + edx] */ { const u32 m_ = (u32)(ecx + edx); ecx = (u32)(M32(m_)); }
  /* 0061920a mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0061920c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061920f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00619210:;
  /* 00619210 mov edx, dword ptr [ecx + 0x118] */ { const u32 m_ = (u32)(ecx + 0x118u); edx = (u32)(M32(m_)); }
  /* 00619216 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 00619218 shl ecx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0061921b mov edx, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); edx = (u32)(M32(m_)); }
  /* 0061921e mov ecx, dword ptr [edx + ecx + 4] */ { const u32 m_ = (u32)(edx + ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00619222 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
L_00619224:;
  /* 00619224 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00619225 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00619226 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619229 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619230(CPU *c) {
  NATIVE_HOOK(0x619230u) REGS; LOADALL;
L_00619230:;
  /* 00619230 mov eax, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); eax = (u32)(M32(m_)); }
  /* 00619235 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00619237 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619238 call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61923eu; SAVEALL; call_ind(c, t_); RETCHK(0x61923eu, 0x619238u); LOADALL; }
  /* 0061923e mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 00619242 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00619246 add edx, 0x154 */ { u32 a_ = edx, b_ = 0x154u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0061924c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061924d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0061924e call 0x619f30 */ esp -= 4; M32(esp) = 0x619253u; SAVEALL; F_00619f30(c); ABI_CHECK(0x619f30u, 0x61924eu); RETCHK(0x619253u, 0x61924eu); LOADALL;
  /* 00619253 mov eax, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); eax = (u32)(M32(m_)); }
  /* 00619258 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061925b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061925d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0061925f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619260 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x619266u; SAVEALL; call_ind(c, t_); RETCHK(0x619266u, 0x619260u); LOADALL; }
  /* 00619266 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619270(CPU *c) {
  NATIVE_HOOK(0x619270u) REGS; LOADALL;
L_00619270:;
  /* 00619270 mov eax, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); eax = (u32)(M32(m_)); }
  /* 00619275 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00619276 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619277 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00619279 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061927a call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x619280u; SAVEALL; call_ind(c, t_); RETCHK(0x619280u, 0x61927au); LOADALL; }
  /* 00619280 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00619284 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 00619288 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061928a je 0x6192be */ if (ZF_) goto L_006192be;
  /* 0061928c mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061928f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00619290 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00619292 je 0x6192a1 */ if (ZF_) goto L_006192a1;
  /* 00619294 lea edi, [ebx + 0xc0] */ edi = (u32)((u32)(ebx + 0xc0u));
  /* 0061929a mov ecx, 7 */ { ecx = (u32)(0x7u); }
  /* 0061929f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_006192a1:;
  /* 006192a1 lea edx, [ebx + 0xd78] */ edx = (u32)((u32)(ebx + 0xd78u));
  /* 006192a7 mov ecx, 9 */ { ecx = (u32)(0x9u); }
  /* 006192ac mov esi, eax */ { esi = (u32)(eax); }
  /* 006192ae mov edi, edx */ { edi = (u32)(edx); }
  /* 006192b0 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 006192b2 mov eax, edx */ { eax = (u32)(edx); }
  /* 006192b4 lea ecx, [ebx + 0xc0] */ ecx = (u32)((u32)(ebx + 0xc0u));
  /* 006192ba pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006192bb mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_006192be:;
  /* 006192be lea edx, [ebx + 0x154] */ edx = (u32)((u32)(ebx + 0x154u));
  /* 006192c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006192c5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006192c6 call 0x619e00 */ esp -= 4; M32(esp) = 0x6192cbu; SAVEALL; F_00619e00(c); ABI_CHECK(0x619e00u, 0x6192c6u); RETCHK(0x6192cbu, 0x6192c6u); LOADALL;
  /* 006192cb mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 006192ce mov ecx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); ecx = (u32)(M32(m_)); }
  /* 006192d1 lea esi, [ebx + 0x14] */ esi = (u32)((u32)(ebx + 0x14u));
  /* 006192d4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006192d7 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 006192d9 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 006192dc mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 006192de push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 006192e0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 006192e2 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 006192e5 mov ecx, dword ptr [ebx + 0xd9c] */ { const u32 m_ = (u32)(ebx + 0xd9cu); ecx = (u32)(M32(m_)); }
  /* 006192eb or ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006192ee mov dword ptr [ebx + 0xd9c], ecx */ { const u32 m_ = (u32)(ebx + 0xd9cu); M32(m_) = (u32)(ecx); }
  /* 006192f4 mov ecx, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); ecx = (u32)(M32(m_)); }
  /* 006192fa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006192fb call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x619301u; SAVEALL; call_ind(c, t_); RETCHK(0x619301u, 0x6192fbu); LOADALL; }
  /* 00619301 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00619303 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00619305 je 0x619314 */ if (ZF_) goto L_00619314;
  /* 00619307 mov edx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edx = (u32)(M32(m_)); }
  /* 0061930a mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0061930c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0061930e mov ecx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00619311 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
L_00619314:;
  /* 00619314 call 0x5f5d90 */ esp -= 4; M32(esp) = 0x619319u; SAVEALL; F_005f5d90(c); ABI_CHECK(0x5f5d90u, 0x619314u); RETCHK(0x619319u, 0x619314u); LOADALL;
  /* 00619319 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0061931c mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 0061931e call 0x5f5d90 */ esp -= 4; M32(esp) = 0x619323u; SAVEALL; F_005f5d90(c); ABI_CHECK(0x5f5d90u, 0x61931eu); RETCHK(0x619323u, 0x61931eu); LOADALL;
  /* 00619323 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00619326 mov dword ptr [ebx + 0x18], eax */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(eax); }
  /* 00619329 call 0x5f5d90 */ esp -= 4; M32(esp) = 0x61932eu; SAVEALL; F_005f5d90(c); ABI_CHECK(0x5f5d90u, 0x619329u); RETCHK(0x61932eu, 0x619329u); LOADALL;
  /* 0061932e mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619331 mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 00619334 call 0x5f5d90 */ esp -= 4; M32(esp) = 0x619339u; SAVEALL; F_005f5d90(c); ABI_CHECK(0x5f5d90u, 0x619334u); RETCHK(0x619339u, 0x619334u); LOADALL;
  /* 00619339 mov dword ptr [eax + 0xc], esi */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(esi); }
  /* 0061933c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061933d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061933e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619340(CPU *c) {
  NATIVE_HOOK(0x619340u) REGS; LOADALL;
L_00619340:;
  /* 00619340 mov eax, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); eax = (u32)(M32(m_)); }
  /* 00619345 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00619347 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619348 call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61934eu; SAVEALL; call_ind(c, t_); RETCHK(0x61934eu, 0x619348u); LOADALL; }
  /* 0061934e mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 00619352 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00619356 add edx, 0x154 */ { u32 a_ = edx, b_ = 0x154u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0061935c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061935d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0061935e call 0x619f50 */ esp -= 4; M32(esp) = 0x619363u; SAVEALL; F_00619f50(c); ABI_CHECK(0x619f50u, 0x61935eu); RETCHK(0x619363u, 0x61935eu); LOADALL;
  /* 00619363 mov eax, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); eax = (u32)(M32(m_)); }
  /* 00619368 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061936b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061936d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0061936f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619370 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x619376u; SAVEALL; call_ind(c, t_); RETCHK(0x619376u, 0x619370u); LOADALL; }
  /* 00619376 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619380(CPU *c) {
  NATIVE_HOOK(0x619380u) REGS; LOADALL;
L_00619380:;
  /* 00619380 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619384 mov eax, dword ptr [eax + 0xd6c] */ { const u32 m_ = (u32)(eax + 0xd6cu); eax = (u32)(M32(m_)); }
  /* 0061938a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619390(CPU *c) {
  NATIVE_HOOK(0x619390u) REGS; LOADALL;
L_00619390:;
  /* 00619390 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619394 mov eax, dword ptr [eax + 0xd70] */ { const u32 m_ = (u32)(eax + 0xd70u); eax = (u32)(M32(m_)); }
  /* 0061939a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006193a0(CPU *c) {
  NATIVE_HOOK(0x6193a0u) REGS; LOADALL;
L_006193a0:;
  /* 006193a0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 006193a4 mov eax, dword ptr [eax + 0xd74] */ { const u32 m_ = (u32)(eax + 0xd74u); eax = (u32)(M32(m_)); }
  /* 006193aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006193b0(CPU *c) {
  NATIVE_HOOK(0x6193b0u) REGS; LOADALL;
L_006193b0:;
  /* 006193b0 mov eax, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); eax = (u32)(M32(m_)); }
  /* 006193b5 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 006193b7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006193b8 call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6193beu; SAVEALL; call_ind(c, t_); RETCHK(0x6193beu, 0x6193b8u); LOADALL; }
  /* 006193be mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 006193c2 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 006193c5 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 006193c8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006193c9 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 006193cc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006193cd mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 006193cf mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 006193d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006193d4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006193d5 lea ecx, [eax + 0x148] */ ecx = (u32)((u32)(eax + 0x148u));
  /* 006193db add eax, 0x154 */ { u32 a_ = eax, b_ = 0x154u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006193e0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006193e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006193e2 call 0x619e80 */ esp -= 4; M32(esp) = 0x6193e7u; SAVEALL; F_00619e80(c); ABI_CHECK(0x619e80u, 0x6193e2u); RETCHK(0x6193e7u, 0x6193e2u); LOADALL;
  /* 006193e7 mov edx, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); edx = (u32)(M32(m_)); }
  /* 006193ed add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006193f0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 006193f2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 006193f4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006193f5 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6193fbu; SAVEALL; call_ind(c, t_); RETCHK(0x6193fbu, 0x6193f5u); LOADALL; }
  /* 006193fb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619400(CPU *c) {
  NATIVE_HOOK(0x619400u) REGS; LOADALL;
L_00619400:;
  /* 00619400 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619404 add eax, 0x16c */ { u32 a_ = eax, b_ = 0x16cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00619409 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619410(CPU *c) {
  NATIVE_HOOK(0x619410u) REGS; LOADALL;
L_00619410:;
  /* 00619410 mov eax, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); eax = (u32)(M32(m_)); }
  /* 00619415 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00619417 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619418 call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61941eu; SAVEALL; call_ind(c, t_); RETCHK(0x61941eu, 0x619418u); LOADALL; }
  /* 0061941e mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619422 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00619426 lea ecx, [eax + 0x148] */ ecx = (u32)((u32)(eax + 0x148u));
  /* 0061942c add eax, 0x154 */ { u32 a_ = eax, b_ = 0x154u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00619431 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00619432 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00619433 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619434 call 0x619e50 */ esp -= 4; M32(esp) = 0x619439u; SAVEALL; F_00619e50(c); ABI_CHECK(0x619e50u, 0x619434u); RETCHK(0x619439u, 0x619434u); LOADALL;
  /* 00619439 mov eax, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); eax = (u32)(M32(m_)); }
  /* 0061943e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619441 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00619443 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00619445 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619446 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61944cu; SAVEALL; call_ind(c, t_); RETCHK(0x61944cu, 0x619446u); LOADALL; }
  /* 0061944c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619450(CPU *c) {
  NATIVE_HOOK(0x619450u) REGS; LOADALL;
L_00619450:;
  /* 00619450 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619454 fld dword ptr [eax + 0x120] */ { const u32 m_ = (u32)(eax + 0x120u); FPUSH((double)MF32(m_)); }
  /* 0061945a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619460(CPU *c) {
  NATIVE_HOOK(0x619460u) REGS; LOADALL;
L_00619460:;
  /* 00619460 mov eax, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); eax = (u32)(M32(m_)); }
  /* 00619465 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619466 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00619468 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619469 call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61946fu; SAVEALL; call_ind(c, t_); RETCHK(0x61946fu, 0x619469u); LOADALL; }
  /* 0061946f mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00619473 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00619475 mov eax, dword ptr [ecx + 0x100] */ { const u32 m_ = (u32)(ecx + 0x100u); eax = (u32)(M32(m_)); }
  /* 0061947b mov edx, dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); edx = (u32)(M32(m_)); }
  /* 0061947e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0061947f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619480 call 0x619ce0 */ esp -= 4; M32(esp) = 0x619485u; SAVEALL; F_00619ce0(c); ABI_CHECK(0x619ce0u, 0x619480u); RETCHK(0x619485u, 0x619480u); LOADALL;
  /* 00619485 mov esi, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); esi = (u32)(M32(m_)); }
  /* 00619488 mov eax, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); eax = (u32)(M32(m_)); }
  /* 0061948d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619490 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00619492 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00619494 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619495 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61949bu; SAVEALL; call_ind(c, t_); RETCHK(0x61949bu, 0x619495u); LOADALL; }
  /* 0061949b mov eax, esi */ { eax = (u32)(esi); }
  /* 0061949d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061949e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006194a0(CPU *c) {
  NATIVE_HOOK(0x6194a0u) REGS; LOADALL;
L_006194a0:;
  /* 006194a0 mov eax, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); eax = (u32)(M32(m_)); }
  /* 006194a5 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006194a8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006194a9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006194aa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006194ab push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006194ac push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 006194ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006194af call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6194b5u; SAVEALL; call_ind(c, t_); RETCHK(0x6194b5u, 0x6194afu); LOADALL; }
  /* 006194b5 mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 006194b9 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 006194bd mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 006194c0 mov ebx, dword ptr [ecx + 0x100] */ { const u32 m_ = (u32)(ecx + 0x100u); ebx = (u32)(M32(m_)); }
  /* 006194c6 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006194c7 je 0x6194e6 */ if (ZF_) goto L_006194e6;
  /* 006194c9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006194ca je 0x6194d3 */ if (ZF_) goto L_006194d3;
  /* 006194cc dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006194cd jne 0x6194f9 */ if (!ZF_) goto L_006194f9;
  /* 006194cf mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 006194d1 jmp 0x6194fd */ goto L_006194fd;
L_006194d3:;
  /* 006194d3 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 006194d5 lea eax, [ebx + 0x5c] */ eax = (u32)((u32)(ebx + 0x5cu));
  /* 006194d8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006194d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006194da call 0x619fd0 */ esp -= 4; M32(esp) = 0x6194dfu; SAVEALL; F_00619fd0(c); ABI_CHECK(0x619fd0u, 0x6194dau); RETCHK(0x6194dfu, 0x6194dau); LOADALL;
  /* 006194df add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006194e2 mov edi, eax */ { edi = (u32)(eax); }
  /* 006194e4 jmp 0x6194fd */ goto L_006194fd;
L_006194e6:;
  /* 006194e6 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 006194e8 lea edx, [ebx + 0x5c] */ edx = (u32)((u32)(ebx + 0x5cu));
  /* 006194eb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006194ec push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006194ed call 0x61a030 */ esp -= 4; M32(esp) = 0x6194f2u; SAVEALL; F_0061a030(c); ABI_CHECK(0x61a030u, 0x6194edu); RETCHK(0x6194f2u, 0x6194edu); LOADALL;
  /* 006194f2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006194f5 mov edi, eax */ { edi = (u32)(eax); }
  /* 006194f7 jmp 0x6194fd */ goto L_006194fd;
L_006194f9:;
  /* 006194f9 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
L_006194fd:;
  /* 006194fd xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 006194ff cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619502 je 0x6195a6 */ if (ZF_) goto L_006195a6;
  /* 00619508 mov eax, dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); eax = (u32)(M32(m_)); }
  /* 0061950b push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0061950d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061950e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0061950f call 0x619ce0 */ esp -= 4; M32(esp) = 0x619514u; SAVEALL; F_00619ce0(c); ABI_CHECK(0x619ce0u, 0x61950fu); RETCHK(0x619514u, 0x61950fu); LOADALL;
  /* 00619514 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00619516 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619519 cmp ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061951b je 0x6195a6 */ if (ZF_) goto L_006195a6;
  /* 00619521 mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 00619524 mov eax, edi */ { eax = (u32)(edi); }
  /* 00619526 shl eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00619529 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061952b je 0x6195a6 */ if (ZF_) goto L_006195a6;
  /* 0061952d cmp dword ptr [ecx + 0x14], ebp */ { const u32 m_ = (u32)(ecx + 0x14u); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619530 je 0x6195a6 */ if (ZF_) goto L_006195a6;
  /* 00619532 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619535 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 00619537 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0061953a mov edx, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061953d mov dword ptr [esi + 0x10], edx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edx); }
  /* 00619540 mov dword ptr [esi + 4], 3 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x3u); }
  /* 00619547 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 00619549 mov edx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edx = (u32)(M32(m_)); }
  /* 0061954c mov edi, dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); edi = (u32)(M32(m_)); }
  /* 0061954f test byte ptr [edi + 0x18], 4 */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00619553 je 0x61955c */ if (ZF_) goto L_0061955c;
  /* 00619555 mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 0061955a jmp 0x619563 */ goto L_00619563;
L_0061955c:;
  /* 0061955c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061955e mov al, byte ptr [edi + 0xd] */ { const u32 m_ = (u32)(edi + 0xdu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00619561 mov edi, eax */ { edi = (u32)(eax); }
L_00619563:;
  /* 00619563 mov eax, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619566 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00619568 imul eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0061956c mov bx, word ptr [edx + 0x1a] */ { const u32 m_ = (u32)(edx + 0x1au); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00619570 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00619572 div ebx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ebx, &q_, &r_, 0x619572u); eax = q_; edx = r_; }
  /* 00619574 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00619576 div edi */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, edi, &q_, &r_, 0x619576u); eax = q_; edx = r_; }
  /* 00619578 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0061957b dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0061957c mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0061957f jne 0x6195af */ if (!ZF_) goto L_006195af;
  /* 00619581 mov ecx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00619584 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 00619588 mov dword ptr [esp + 0x14], ebp */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ebp); }
  /* 0061958c mov edx, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061958f fild qword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s64)M64(m_)); }
  /* 00619593 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 00619595 mov dword ptr [esp + 0x14], ebp */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ebp); }
  /* 00619599 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0061959d fidiv dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 006195a1 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 006195a4 jmp 0x6195af */ goto L_006195af;
L_006195a6:;
  /* 006195a6 mov dword ptr [esi + 4], ebp */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebp); }
  /* 006195a9 mov dword ptr [esi + 0xc], ebp */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebp); }
  /* 006195ac mov dword ptr [esi + 0x10], ebp */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ebp); }
L_006195af:;
  /* 006195af mov ecx, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); ecx = (u32)(M32(m_)); }
  /* 006195b5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006195b6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 006195b8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006195b9 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6195bfu; SAVEALL; call_ind(c, t_); RETCHK(0x6195bfu, 0x6195b9u); LOADALL; }
  /* 006195bf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006195c0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006195c1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006195c2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006195c3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006195c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006195d0(CPU *c) {
  NATIVE_HOOK(0x6195d0u) REGS; LOADALL;
L_006195d0:;
  /* 006195d0 mov eax, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); eax = (u32)(M32(m_)); }
  /* 006195d5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006195d6 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 006195d8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006195d9 call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6195dfu; SAVEALL; call_ind(c, t_); RETCHK(0x6195dfu, 0x6195d9u); LOADALL; }
  /* 006195df mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006195e3 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 006195e5 mov eax, dword ptr [ecx + 0x100] */ { const u32 m_ = (u32)(ecx + 0x100u); eax = (u32)(M32(m_)); }
  /* 006195eb mov edx, dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); edx = (u32)(M32(m_)); }
  /* 006195ee push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006195ef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006195f0 call 0x619ce0 */ esp -= 4; M32(esp) = 0x6195f5u; SAVEALL; F_00619ce0(c); ABI_CHECK(0x619ce0u, 0x6195f0u); RETCHK(0x6195f5u, 0x6195f0u); LOADALL;
  /* 006195f5 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 006195f9 mov esi, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); esi = (u32)(M32(m_)); }
  /* 006195fc add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006195ff mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00619602 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619604 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00619605 jae 0x619652 */ if (!CF_) goto L_00619652;
  /* 00619607 mov eax, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); eax = (u32)(M32(m_)); }
  /* 0061960a lea ecx, [ecx + ecx*4] */ ecx = (u32)((u32)(ecx + ecx * 4u));
  /* 0061960d lea eax, [eax + ecx*8] */ eax = (u32)((u32)(eax + ecx * 8u));
  /* 00619610 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00619612 je 0x619652 */ if (ZF_) goto L_00619652;
  /* 00619614 mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 00619617 test byte ptr [eax + 0x18], 4 */ { const u32 m_ = (u32)(eax + 0x18u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0061961b je 0x619636 */ if (ZF_) goto L_00619636;
  /* 0061961d mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00619622 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00619624 mov dword ptr [edx + 0xc], eax */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(eax); }
  /* 00619627 mov edx, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); edx = (u32)(M32(m_)); }
  /* 0061962d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061962e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0061962f call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x619635u; SAVEALL; call_ind(c, t_); RETCHK(0x619635u, 0x61962fu); LOADALL; }
  /* 00619635 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00619636:;
  /* 00619636 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00619638 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061963a mov cl, byte ptr [eax + 0xd] */ { const u32 m_ = (u32)(eax + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061963d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0061963f mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00619641 mov dword ptr [edx + 0xc], eax */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(eax); }
  /* 00619644 mov edx, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); edx = (u32)(M32(m_)); }
  /* 0061964a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0061964b call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x619651u; SAVEALL; call_ind(c, t_); RETCHK(0x619651u, 0x61964bu); LOADALL; }
  /* 00619651 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00619652:;
  /* 00619652 mov dword ptr [edx + 0xc], 0 */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 00619659 mov edx, dword ptr [0x694908] */ { const u32 m_ = (u32)(0x694908u); edx = (u32)(M32(m_)); }
  /* 0061965f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00619661 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00619663 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00619664 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61966au; SAVEALL; call_ind(c, t_); RETCHK(0x61966au, 0x619664u); LOADALL; }
  /* 0061966a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619670(CPU *c) {
  NATIVE_HOOK(0x619670u) REGS; LOADALL;
L_00619670:;
  /* 00619670 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619674 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619675 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00619679 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061967a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061967b call 0x619080 */ esp -= 4; M32(esp) = 0x619680u; SAVEALL; F_00619080(c); ABI_CHECK(0x619080u, 0x61967bu); RETCHK(0x619680u, 0x61967bu); LOADALL;
  /* 00619680 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619683 mov eax, esi */ { eax = (u32)(esi); }
  /* 00619685 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00619686 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619690(CPU *c) {
  NATIVE_HOOK(0x619690u) REGS; LOADALL;
L_00619690:;
  /* 00619690 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619694 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619695 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00619699 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061969a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061969b call 0x619130 */ esp -= 4; M32(esp) = 0x6196a0u; SAVEALL; F_00619130(c); ABI_CHECK(0x619130u, 0x61969bu); RETCHK(0x6196a0u, 0x61969bu); LOADALL;
  /* 006196a0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006196a3 mov eax, esi */ { eax = (u32)(esi); }
  /* 006196a5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006196a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006196b0(CPU *c) {
  NATIVE_HOOK(0x6196b0u) REGS; LOADALL;
L_006196b0:;
  /* 006196b0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 006196b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006196b5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 006196b9 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 006196bb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006196bc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006196bd call 0x619230 */ esp -= 4; M32(esp) = 0x6196c2u; SAVEALL; F_00619230(c); ABI_CHECK(0x619230u, 0x6196bdu); RETCHK(0x6196c2u, 0x6196bdu); LOADALL;
  /* 006196c2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006196c5 mov eax, esi */ { eax = (u32)(esi); }
  /* 006196c7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006196c8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006196d0(CPU *c) {
  NATIVE_HOOK(0x6196d0u) REGS; LOADALL;
L_006196d0:;
  /* 006196d0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 006196d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006196d5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 006196d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006196da push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006196db call 0x619270 */ esp -= 4; M32(esp) = 0x6196e0u; SAVEALL; F_00619270(c); ABI_CHECK(0x619270u, 0x6196dbu); RETCHK(0x6196e0u, 0x6196dbu); LOADALL;
  /* 006196e0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006196e3 mov eax, esi */ { eax = (u32)(esi); }
  /* 006196e5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006196e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006196f0(CPU *c) {
  NATIVE_HOOK(0x6196f0u) REGS; LOADALL;
L_006196f0:;
  /* 006196f0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 006196f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006196f5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 006196f9 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 006196fb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006196fc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006196fd call 0x619340 */ esp -= 4; M32(esp) = 0x619702u; SAVEALL; F_00619340(c); ABI_CHECK(0x619340u, 0x6196fdu); RETCHK(0x619702u, 0x6196fdu); LOADALL;
  /* 00619702 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619705 mov eax, esi */ { eax = (u32)(esi); }
  /* 00619707 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00619708 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619710(CPU *c) {
  NATIVE_HOOK(0x619710u) REGS; LOADALL;
L_00619710:;
  /* 00619710 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00619714 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00619715 call 0x619380 */ esp -= 4; M32(esp) = 0x61971au; SAVEALL; F_00619380(c); ABI_CHECK(0x619380u, 0x619715u); RETCHK(0x61971au, 0x619715u); LOADALL;
  /* 0061971a mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0061971e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619721 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 00619723 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00619725 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619730(CPU *c) {
  NATIVE_HOOK(0x619730u) REGS; LOADALL;
L_00619730:;
  /* 00619730 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00619734 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00619735 call 0x619390 */ esp -= 4; M32(esp) = 0x61973au; SAVEALL; F_00619390(c); ABI_CHECK(0x619390u, 0x619735u); RETCHK(0x61973au, 0x619735u); LOADALL;
  /* 0061973a mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0061973e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619741 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 00619743 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00619745 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619750(CPU *c) {
  NATIVE_HOOK(0x619750u) REGS; LOADALL;
L_00619750:;
  /* 00619750 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00619754 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00619755 call 0x6193a0 */ esp -= 4; M32(esp) = 0x61975au; SAVEALL; F_006193a0(c); ABI_CHECK(0x6193a0u, 0x619755u); RETCHK(0x61975au, 0x619755u); LOADALL;
  /* 0061975a mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0061975e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619761 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 00619763 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00619765 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619770(CPU *c) {
  NATIVE_HOOK(0x619770u) REGS; LOADALL;
L_00619770:;
  /* 00619770 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619774 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619775 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00619779 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061977a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061977b call 0x6193b0 */ esp -= 4; M32(esp) = 0x619780u; SAVEALL; F_006193b0(c); ABI_CHECK(0x6193b0u, 0x61977bu); RETCHK(0x619780u, 0x61977bu); LOADALL;
  /* 00619780 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619783 mov eax, esi */ { eax = (u32)(esi); }
  /* 00619785 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00619786 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619790(CPU *c) {
  NATIVE_HOOK(0x619790u) REGS; LOADALL;
L_00619790:;
  /* 00619790 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00619794 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00619795 call 0x619400 */ esp -= 4; M32(esp) = 0x61979au; SAVEALL; F_00619400(c); ABI_CHECK(0x619400u, 0x619795u); RETCHK(0x61979au, 0x619795u); LOADALL;
  /* 0061979a mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0061979e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006197a1 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 006197a3 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 006197a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006197b0(CPU *c) {
  NATIVE_HOOK(0x6197b0u) REGS; LOADALL;
L_006197b0:;
  /* 006197b0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 006197b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006197b5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 006197b9 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 006197bb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006197bc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006197bd call 0x619410 */ esp -= 4; M32(esp) = 0x6197c2u; SAVEALL; F_00619410(c); ABI_CHECK(0x619410u, 0x6197bdu); RETCHK(0x6197c2u, 0x6197bdu); LOADALL;
  /* 006197c2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006197c5 mov eax, esi */ { eax = (u32)(esi); }
  /* 006197c7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006197c8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006197d0(CPU *c) {
  NATIVE_HOOK(0x6197d0u) REGS; LOADALL;
L_006197d0:;
  /* 006197d0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 006197d4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006197d5 call 0x619450 */ esp -= 4; M32(esp) = 0x6197dau; SAVEALL; F_00619450(c); ABI_CHECK(0x619450u, 0x6197d5u); RETCHK(0x6197dau, 0x6197d5u); LOADALL;
  /* 006197da mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 006197de add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006197e1 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 006197e3 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 006197e5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006197f0(CPU *c) {
  NATIVE_HOOK(0x6197f0u) REGS; LOADALL;
L_006197f0:;
  /* 006197f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006197f1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 006197f5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006197f6 call 0x619460 */ esp -= 4; M32(esp) = 0x6197fbu; SAVEALL; F_00619460(c); ABI_CHECK(0x619460u, 0x6197f6u); RETCHK(0x6197fbu, 0x6197f6u); LOADALL;
  /* 006197fb mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 006197ff add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619802 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 00619804 mov eax, esi */ { eax = (u32)(esi); }
  /* 00619806 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00619807 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619810(CPU *c) {
  NATIVE_HOOK(0x619810u) REGS; LOADALL;
L_00619810:;
  /* 00619810 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619814 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619815 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00619819 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061981a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061981b call 0x6194a0 */ esp -= 4; M32(esp) = 0x619820u; SAVEALL; F_006194a0(c); ABI_CHECK(0x6194a0u, 0x61981bu); RETCHK(0x619820u, 0x61981bu); LOADALL;
  /* 00619820 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619823 mov eax, esi */ { eax = (u32)(esi); }
  /* 00619825 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00619826 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619830(CPU *c) {
  NATIVE_HOOK(0x619830u) REGS; LOADALL;
L_00619830:;
  /* 00619830 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619834 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619835 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00619839 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061983a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061983b call 0x6195d0 */ esp -= 4; M32(esp) = 0x619840u; SAVEALL; F_006195d0(c); ABI_CHECK(0x6195d0u, 0x61983bu); RETCHK(0x619840u, 0x61983bu); LOADALL;
  /* 00619840 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619843 mov eax, esi */ { eax = (u32)(esi); }
  /* 00619845 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00619846 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619850(CPU *c) {
  NATIVE_HOOK(0x619850u) REGS; LOADALL;
L_00619850:;
  /* 00619850 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619851 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00619855 mov dword ptr [esi + 0x90], 0 */ { const u32 m_ = (u32)(esi + 0x90u); M32(m_) = (u32)(0x0u); }
  /* 0061985f mov dword ptr [esi + 0x94], 0 */ { const u32 m_ = (u32)(esi + 0x94u); M32(m_) = (u32)(0x0u); }
  /* 00619869 call 0x5f7280 */ esp -= 4; M32(esp) = 0x61986eu; SAVEALL; F_005f7280(c); ABI_CHECK(0x5f7280u, 0x619869u); RETCHK(0x61986eu, 0x619869u); LOADALL;
  /* 0061986e mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619872 mov dword ptr [esi + 0xa0], eax */ { const u32 m_ = (u32)(esi + 0xa0u); M32(m_) = (u32)(eax); }
  /* 00619878 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061987a test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061987c setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0061987f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00619880 mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
  /* 00619883 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00619884 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619890(CPU *c) {
  NATIVE_HOOK(0x619890u) REGS; LOADALL;
L_00619890:;
  /* 00619890 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619894 mov eax, dword ptr [eax + 0x8c] */ { const u32 m_ = (u32)(eax + 0x8cu); eax = (u32)(M32(m_)); }
  /* 0061989a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006198a0(CPU *c) {
  NATIVE_HOOK(0x6198a0u) REGS; LOADALL;
L_006198a0:;
  /* 006198a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006198a1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 006198a5 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 006198a7 mov eax, dword ptr [esi + 0x9c] */ { const u32 m_ = (u32)(esi + 0x9cu); eax = (u32)(M32(m_)); }
  /* 006198ad mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 006198b0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006198b1 call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6198b7u; SAVEALL; call_ind(c, t_); RETCHK(0x6198b7u, 0x6198b1u); LOADALL; }
  /* 006198b7 mov eax, dword ptr [esi + 0xcc] */ { const u32 m_ = (u32)(esi + 0xccu); eax = (u32)(M32(m_)); }
  /* 006198bd mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 006198c1 mov ecx, dword ptr [esi + 0x9c] */ { const u32 m_ = (u32)(esi + 0x9cu); ecx = (u32)(M32(m_)); }
  /* 006198c7 and al, 0xfb */ { u32 a_ = (eax & 0xffu), b_ = 0xfbu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 006198c9 or al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 006198cb mov dword ptr [esi + 0x98], edx */ { const u32 m_ = (u32)(esi + 0x98u); M32(m_) = (u32)(edx); }
  /* 006198d1 mov dword ptr [esi + 0xcc], eax */ { const u32 m_ = (u32)(esi + 0xccu); M32(m_) = (u32)(eax); }
  /* 006198d7 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 006198da push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 006198dc push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 006198de push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006198df call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6198e5u; SAVEALL; call_ind(c, t_); RETCHK(0x6198e5u, 0x6198dfu); LOADALL; }
  /* 006198e5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006198e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006198f0(CPU *c) {
  NATIVE_HOOK(0x6198f0u) REGS; LOADALL;
L_006198f0:;
  /* 006198f0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 006198f4 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 006198f6 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 006198fa mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 006198fd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619900(CPU *c) {
  NATIVE_HOOK(0x619900u) REGS; LOADALL;
L_00619900:;
  /* 00619900 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619904 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619908 mov ecx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0061990b mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0061990d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619910(CPU *c) {
  NATIVE_HOOK(0x619910u) REGS; LOADALL;
L_00619910:;
  /* 00619910 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619914 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619918 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619919 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 0061991b lea ecx, [eax + 0x4c] */ ecx = (u32)((u32)(eax + 0x4cu));
  /* 0061991e mov dword ptr [eax + 0x4c], esi */ { const u32 m_ = (u32)(eax + 0x4cu); M32(m_) = (u32)(esi); }
  /* 00619921 mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00619924 mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 00619927 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0061992a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061992b mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0061992e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619930(CPU *c) {
  NATIVE_HOOK(0x619930u) REGS; LOADALL;
L_00619930:;
  /* 00619930 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619934 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619938 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619939 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 0061993b lea ecx, [eax + 0x58] */ ecx = (u32)((u32)(eax + 0x58u));
  /* 0061993e mov dword ptr [eax + 0x58], esi */ { const u32 m_ = (u32)(eax + 0x58u); M32(m_) = (u32)(esi); }
  /* 00619941 mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00619944 mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 00619947 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0061994a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061994b mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0061994e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619950(CPU *c) {
  NATIVE_HOOK(0x619950u) REGS; LOADALL;
L_00619950:;
  /* 00619950 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619954 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00619956 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0061995a mov dword ptr [eax + 0x64], ecx */ { const u32 m_ = (u32)(eax + 0x64u); M32(m_) = (u32)(ecx); }
  /* 0061995d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619960(CPU *c) {
  NATIVE_HOOK(0x619960u) REGS; LOADALL;
L_00619960:;
  /* 00619960 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619964 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619968 mov ecx, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); ecx = (u32)(M32(m_)); }
  /* 0061996b mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0061996d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619970(CPU *c) {
  NATIVE_HOOK(0x619970u) REGS; LOADALL;
L_00619970:;
  /* 00619970 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619974 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00619976 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0061997a mov dword ptr [eax + 0x68], ecx */ { const u32 m_ = (u32)(eax + 0x68u); M32(m_) = (u32)(ecx); }
  /* 0061997d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619980(CPU *c) {
  NATIVE_HOOK(0x619980u) REGS; LOADALL;
L_00619980:;
  /* 00619980 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619984 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619988 mov ecx, dword ptr [eax + 0x68] */ { const u32 m_ = (u32)(eax + 0x68u); ecx = (u32)(M32(m_)); }
  /* 0061998b mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0061998d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619990(CPU *c) {
  NATIVE_HOOK(0x619990u) REGS; LOADALL;
L_00619990:;
  /* 00619990 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619994 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00619996 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0061999a mov dword ptr [eax + 0x34], ecx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(ecx); }
  /* 0061999d mov ecx, dword ptr [eax + 0xcc] */ { const u32 m_ = (u32)(eax + 0xccu); ecx = (u32)(M32(m_)); }
  /* 006199a3 or ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006199a6 mov dword ptr [eax + 0xcc], ecx */ { const u32 m_ = (u32)(eax + 0xccu); M32(m_) = (u32)(ecx); }
  /* 006199ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006199b0(CPU *c) {
  NATIVE_HOOK(0x6199b0u) REGS; LOADALL;
L_006199b0:;
  /* 006199b0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 006199b4 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 006199b8 fld dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); FPUSH((double)MF32(m_)); }
  /* 006199bb fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 006199bd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006199c0(CPU *c) {
  NATIVE_HOOK(0x6199c0u) REGS; LOADALL;
L_006199c0:;
  /* 006199c0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 006199c4 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 006199c6 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 006199ca mov dword ptr [eax + 0x3c], ecx */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 006199cd mov ecx, dword ptr [eax + 0xcc] */ { const u32 m_ = (u32)(eax + 0xccu); ecx = (u32)(M32(m_)); }
  /* 006199d3 or ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006199d6 mov dword ptr [eax + 0xcc], ecx */ { const u32 m_ = (u32)(eax + 0xccu); M32(m_) = (u32)(ecx); }
  /* 006199dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006199e0(CPU *c) {
  NATIVE_HOOK(0x6199e0u) REGS; LOADALL;
L_006199e0:;
  /* 006199e0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 006199e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006199e5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 006199e9 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 006199eb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006199ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006199ed call 0x619850 */ esp -= 4; M32(esp) = 0x6199f2u; SAVEALL; F_00619850(c); ABI_CHECK(0x619850u, 0x6199edu); RETCHK(0x6199f2u, 0x6199edu); LOADALL;
  /* 006199f2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006199f5 mov eax, esi */ { eax = (u32)(esi); }
  /* 006199f7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006199f8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619a00(CPU *c) {
  NATIVE_HOOK(0x619a00u) REGS; LOADALL;
L_00619a00:;
  /* 00619a00 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619a04 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00619a07 cmp ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619a0a je 0x619a1a */ if (ZF_) goto L_00619a1a;
  /* 00619a0c cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619a0f je 0x619a1a */ if (ZF_) goto L_00619a1a;
  /* 00619a11 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619a15 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00619a17 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 00619a19 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00619a1a:;
  /* 00619a1a mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619a1e mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00619a23 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 00619a25 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619a30(CPU *c) {
  NATIVE_HOOK(0x619a30u) REGS; LOADALL;
L_00619a30:;
  /* 00619a30 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619a34 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00619a36 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619a3a mov dword ptr [eax + 0x88], 0 */ { const u32 m_ = (u32)(eax + 0x88u); M32(m_) = (u32)(0x0u); }
  /* 00619a44 mov dword ptr [eax + 0x8c], ecx */ { const u32 m_ = (u32)(eax + 0x8cu); M32(m_) = (u32)(ecx); }
  /* 00619a4a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619a50(CPU *c) {
  NATIVE_HOOK(0x619a50u) REGS; LOADALL;
L_00619a50:;
  /* 00619a50 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00619a54 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00619a55 call 0x619890 */ esp -= 4; M32(esp) = 0x619a5au; SAVEALL; F_00619890(c); ABI_CHECK(0x619890u, 0x619a55u); RETCHK(0x619a5au, 0x619a55u); LOADALL;
  /* 00619a5a mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00619a5e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619a61 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 00619a63 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00619a65 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619a70(CPU *c) {
  NATIVE_HOOK(0x619a70u) REGS; LOADALL;
L_00619a70:;
  /* 00619a70 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619a74 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00619a76 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619a7a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00619a7c mov ecx, dword ptr [eax + 0xcc] */ { const u32 m_ = (u32)(eax + 0xccu); ecx = (u32)(M32(m_)); }
  /* 00619a82 je 0x619a8e */ if (ZF_) goto L_00619a8e;
  /* 00619a84 or ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00619a87 mov dword ptr [eax + 0xcc], ecx */ { const u32 m_ = (u32)(eax + 0xccu); M32(m_) = (u32)(ecx); }
  /* 00619a8d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00619a8e:;
  /* 00619a8e and ecx, 0xfffffff7 */ { u32 a_ = ecx, b_ = 0xfffffff7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00619a91 mov dword ptr [eax + 0xcc], ecx */ { const u32 m_ = (u32)(eax + 0xccu); M32(m_) = (u32)(ecx); }
  /* 00619a97 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619aa0(CPU *c) {
  NATIVE_HOOK(0x619aa0u) REGS; LOADALL;
L_00619aa0:;
  /* 00619aa0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619aa4 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619aa8 mov ecx, dword ptr [eax + 0xcc] */ { const u32 m_ = (u32)(eax + 0xccu); ecx = (u32)(M32(m_)); }
  /* 00619aae shr ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00619ab1 and ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00619ab4 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 00619ab6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619ac0(CPU *c) {
  NATIVE_HOOK(0x619ac0u) REGS; LOADALL;
L_00619ac0:;
  /* 00619ac0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619ac4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619ac5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00619ac9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619aca push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619acb call 0x6198a0 */ esp -= 4; M32(esp) = 0x619ad0u; SAVEALL; F_006198a0(c); ABI_CHECK(0x6198a0u, 0x619acbu); RETCHK(0x619ad0u, 0x619acbu); LOADALL;
  /* 00619ad0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619ad3 mov eax, esi */ { eax = (u32)(esi); }
  /* 00619ad5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00619ad6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619ae0(CPU *c) {
  NATIVE_HOOK(0x619ae0u) REGS; LOADALL;
L_00619ae0:;
  /* 00619ae0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619ae4 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619ae8 mov ecx, dword ptr [eax + 0x98] */ { const u32 m_ = (u32)(eax + 0x98u); ecx = (u32)(M32(m_)); }
  /* 00619aee mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 00619af0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619b00(CPU *c) {
  NATIVE_HOOK(0x619b00u) REGS; LOADALL;
L_00619b00:;
  /* 00619b00 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619b04 mov ecx, dword ptr [eax + 0xcc] */ { const u32 m_ = (u32)(eax + 0xccu); ecx = (u32)(M32(m_)); }
  /* 00619b0a or ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00619b0d mov dword ptr [eax + 0xcc], ecx */ { const u32 m_ = (u32)(eax + 0xccu); M32(m_) = (u32)(ecx); }
  /* 00619b13 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00619b17 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00619b19 mov dword ptr [eax + 0x48], edx */ { const u32 m_ = (u32)(eax + 0x48u); M32(m_) = (u32)(edx); }
  /* 00619b1c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619b20(CPU *c) {
  NATIVE_HOOK(0x619b20u) REGS; LOADALL;
L_00619b20:;
  /* 00619b20 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619b24 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619b28 mov ecx, dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); ecx = (u32)(M32(m_)); }
  /* 00619b2b mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 00619b2d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619b30(CPU *c) {
  NATIVE_HOOK(0x619b30u) REGS; LOADALL;
L_00619b30:;
  /* 00619b30 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619b34 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619b38 mov ecx, dword ptr [eax + 0x98] */ { const u32 m_ = (u32)(eax + 0x98u); ecx = (u32)(M32(m_)); }
  /* 00619b3e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00619b40 je 0x619b4f */ if (ZF_) goto L_00619b4f;
  /* 00619b42 mov ecx, dword ptr [ecx + 0x54] */ { const u32 m_ = (u32)(ecx + 0x54u); ecx = (u32)(M32(m_)); }
  /* 00619b45 not ecx */ { ecx = (u32)(~ecx & 0xffffffffu); }
  /* 00619b47 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00619b49 and ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00619b4c mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 00619b4e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00619b4f:;
  /* 00619b4f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00619b51 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 00619b53 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619b60(CPU *c) {
  NATIVE_HOOK(0x619b60u) REGS; LOADALL;
L_00619b60:;
  /* 00619b60 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619b64 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00619b66 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619b6a mov dword ptr [eax + 0x40], ecx */ { const u32 m_ = (u32)(eax + 0x40u); M32(m_) = (u32)(ecx); }
  /* 00619b6d mov ecx, dword ptr [eax + 0xcc] */ { const u32 m_ = (u32)(eax + 0xccu); ecx = (u32)(M32(m_)); }
  /* 00619b73 or ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00619b76 mov dword ptr [eax + 0xcc], ecx */ { const u32 m_ = (u32)(eax + 0xccu); M32(m_) = (u32)(ecx); }
  /* 00619b7c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619b80(CPU *c) {
  NATIVE_HOOK(0x619b80u) REGS; LOADALL;
L_00619b80:;
  /* 00619b80 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619b84 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619b88 mov ecx, dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); ecx = (u32)(M32(m_)); }
  /* 00619b8b mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 00619b8d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619b90(CPU *c) {
  NATIVE_HOOK(0x619b90u) REGS; LOADALL;
L_00619b90:;
  /* 00619b90 mov dword ptr [esp + 8], 0x3080f */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x3080fu); }
  /* 00619b98 jmp 0x5f2440 */ SAVEALL; F_005f2440(c); return;
}

void F_00619ba0(CPU *c) {
  NATIVE_HOOK(0x619ba0u) REGS; LOADALL;
L_00619ba0:;
  /* 00619ba0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619ba4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619ba5 call 0x5e02a0 */ esp -= 4; M32(esp) = 0x619baau; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x619ba5u); RETCHK(0x619baau, 0x619ba5u); LOADALL;
  /* 00619baa pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00619bab ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619bd0(CPU *c) {
  NATIVE_HOOK(0x619bd0u) REGS; LOADALL;
L_00619bd0:;
  /* 00619bd0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619bd4 mov ecx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00619bd7 mov edx, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); edx = (u32)(M32(m_)); }
  /* 00619bda mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00619bde mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00619be0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619bf0(CPU *c) {
  NATIVE_HOOK(0x619bf0u) REGS; LOADALL;
L_00619bf0:;
  /* 00619bf0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619bf4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619bf5 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00619bf7 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00619bfb mov esi, edx */ { esi = (u32)(edx); }
  /* 00619bfd mov ecx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00619c00 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00619c01 je 0x619c17 */ if (ZF_) goto L_00619c17;
  /* 00619c03 sub esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00619c06 jne 0x619c24 */ if (!ZF_) goto L_00619c24;
  /* 00619c08 cmp dword ptr [ecx + 0x28], 5 */ { const u32 m_ = (u32)(ecx + 0x28u); u32 a_ = M32(m_), b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619c0c je 0x619c24 */ if (ZF_) goto L_00619c24;
  /* 00619c0e mov dword ptr [ecx + 0x28], 4 */ { const u32 m_ = (u32)(ecx + 0x28u); M32(m_) = (u32)(0x4u); }
  /* 00619c15 jmp 0x619c24 */ goto L_00619c24;
L_00619c17:;
  /* 00619c17 cmp dword ptr [ecx + 0x28], 3 */ { const u32 m_ = (u32)(ecx + 0x28u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619c1b je 0x619c24 */ if (ZF_) goto L_00619c24;
  /* 00619c1d mov dword ptr [ecx + 0x28], 8 */ { const u32 m_ = (u32)(ecx + 0x28u); M32(m_) = (u32)(0x8u); }
L_00619c24:;
  /* 00619c24 mov dword ptr [ecx + 0x20], edx */ { const u32 m_ = (u32)(ecx + 0x20u); M32(m_) = (u32)(edx); }
  /* 00619c27 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00619c2a lea ecx, [eax + 0x14] */ ecx = (u32)((u32)(eax + 0x14u));
  /* 00619c2d test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00619c2f je 0x619c3e */ if (ZF_) goto L_00619c3e;
  /* 00619c31 mov esi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); esi = (u32)(M32(m_)); }
  /* 00619c34 mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 00619c36 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00619c38 mov esi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); esi = (u32)(M32(m_)); }
  /* 00619c3b mov dword ptr [edx + 4], esi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(esi); }
L_00619c3e:;
  /* 00619c3e mov edx, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); edx = (u32)(M32(m_)); }
  /* 00619c41 add edx, 0xc */ { u32 a_ = edx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00619c44 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 00619c46 mov dword ptr [eax + 0x18], edx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(edx); }
  /* 00619c49 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 00619c4b mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 00619c4d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00619c4e mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00619c51 mov edx, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); edx = (u32)(M32(m_)); }
  /* 00619c54 mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00619c57 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619c60(CPU *c) {
  NATIVE_HOOK(0x619c60u) REGS; LOADALL;
L_00619c60:;
  /* 00619c60 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00619c64 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619c68 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00619c6b mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 00619c6d mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00619c70 mov dword ptr [edx + 4], 0x5eb7c0 */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(0x5eb7c0u); }
  /* 00619c77 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00619c7a mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 00619c7c mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00619c7f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619c80(CPU *c) {
  NATIVE_HOOK(0x619c80u) REGS; LOADALL;
L_00619c80:;
  /* 00619c80 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619c84 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619c88 lea ecx, [eax + 0x38] */ ecx = (u32)((u32)(eax + 0x38u));
  /* 00619c8b mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00619c8e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619c90(CPU *c) {
  NATIVE_HOOK(0x619c90u) REGS; LOADALL;
L_00619c90:;
  /* 00619c90 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619c94 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00619c97 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00619c99 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00619c9a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00619c9b call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x619c9eu; SAVEALL; call_ind(c, t_); RETCHK(0x619c9eu, 0x619c9bu); LOADALL; }
  /* 00619c9e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619ca1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619cb0(CPU *c) {
  NATIVE_HOOK(0x619cb0u) REGS; LOADALL;
L_00619cb0:;
  /* 00619cb0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00619cb4 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00619cb8 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00619cbb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00619cbd mov ax, word ptr [ecx + edx*8 + 4] */ { const u32 m_ = (u32)(ecx + edx * 8u + 0x4u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00619cc2 lea ecx, [ecx + edx*8] */ ecx = (u32)((u32)(ecx + edx * 8u));
  /* 00619cc5 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00619cc9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00619cca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619ccb mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619ccf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619cd0 call dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x619cd2u; SAVEALL; call_ind(c, t_); RETCHK(0x619cd2u, 0x619cd0u); LOADALL; }
  /* 00619cd2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619cd5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619ce0(CPU *c) {
  NATIVE_HOOK(0x619ce0u) REGS; LOADALL;
L_00619ce0:;
  /* 00619ce0 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00619ce4 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00619ce8 lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 00619cec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619ced mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00619cf1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00619cf2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00619cf3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619cf4 call 0x619cb0 */ esp -= 4; M32(esp) = 0x619cf9u; SAVEALL; F_00619cb0(c); ABI_CHECK(0x619cb0u, 0x619cf4u); RETCHK(0x619cf9u, 0x619cf4u); LOADALL;
  /* 00619cf9 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00619cfd add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619d00 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619d10(CPU *c) {
  NATIVE_HOOK(0x619d10u) REGS; LOADALL;
L_00619d10:;
  /* 00619d10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619d11 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00619d15 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00619d17 mov cl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00619d1a mov dl, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00619d1d cmp cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00619d1f je 0x619d4a */ if (ZF_) goto L_00619d4a;
  /* 00619d21 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00619d22 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00619d24 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00619d26 and eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00619d2b mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00619d2d and edx, 0xff */ { u32 a_ = edx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00619d33 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00619d35 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00619d36 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619d38 jb 0x619d3c */ if (CF_) goto L_00619d3c;
  /* 00619d3a sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_00619d3c:;
  /* 00619d3c inc cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 00619d3e lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 00619d41 mov byte ptr [esi + 1], cl */ { const u32 m_ = (u32)(esi + 0x1u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00619d44 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00619d47 lea eax, [ecx + eax*4] */ eax = (u32)((u32)(ecx + eax * 4u));
L_00619d4a:;
  /* 00619d4a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00619d4c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00619d4d and ecx, 0xfffffff7 */ { u32 a_ = ecx, b_ = 0xfffffff7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00619d50 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00619d52 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619d60(CPU *c) {
  NATIVE_HOOK(0x619d60u) REGS; LOADALL;
L_00619d60:;
  /* 00619d60 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00619d64 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00619d65 call 0x5eb7c0 */ esp -= 4; M32(esp) = 0x619d6au; SAVEALL; F_005eb7c0(c); ABI_CHECK(0x5eb7c0u, 0x619d65u); RETCHK(0x619d6au, 0x619d65u); LOADALL;
  /* 00619d6a mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00619d6e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619d71 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 00619d73 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00619d75 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619d80(CPU *c) {
  NATIVE_HOOK(0x619d80u) REGS; LOADALL;
L_00619d80:;
  /* 00619d80 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619d84 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619d90(CPU *c) {
  NATIVE_HOOK(0x619d90u) REGS; LOADALL;
L_00619d90:;
  /* 00619d90 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619d94 cmp dword ptr [eax + 8], 5 */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619d98 je 0x619d9d */ if (ZF_) goto L_00619d9d;
  /* 00619d9a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00619d9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00619d9d:;
  /* 00619d9d mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00619da1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00619da3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00619da4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619da5 call 0x619dc0 */ esp -= 4; M32(esp) = 0x619daau; SAVEALL; F_00619dc0(c); ABI_CHECK(0x619dc0u, 0x619da5u); RETCHK(0x619daau, 0x619da5u); LOADALL;
  /* 00619daa mov edx, dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); edx = (u32)(M32(m_)); }
  /* 00619dad push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00619daf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00619db0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619db1 call 0x619ce0 */ esp -= 4; M32(esp) = 0x619db6u; SAVEALL; F_00619ce0(c); ABI_CHECK(0x619ce0u, 0x619db1u); RETCHK(0x619db6u, 0x619db1u); LOADALL;
  /* 00619db6 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619db9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619dc0(CPU *c) {
  NATIVE_HOOK(0x619dc0u) REGS; LOADALL;
L_00619dc0:;
  /* 00619dc0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00619dc4 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00619dc8 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 00619dcb mov edx, eax */ { edx = (u32)(eax); }
  /* 00619dcd shr edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00619dcf cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619dd1 jae 0x619de7 */ if (!CF_) goto L_00619de7;
  /* 00619dd3 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619dd7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00619dd9 mov eax, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); eax = (u32)(M32(m_)); }
  /* 00619ddc je 0x619de3 */ if (ZF_) goto L_00619de3;
L_00619dde:;
  /* 00619dde mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00619de0 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00619de1 jne 0x619dde */ if (!ZF_) goto L_00619dde;
L_00619de3:;
  /* 00619de3 add eax, -0x2c */ { u32 a_ = eax, b_ = 0xffffffd4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00619de6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00619de7:;
  /* 00619de7 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 00619deb dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00619dec cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619dee mov edx, dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); edx = (u32)(M32(m_)); }
  /* 00619df1 je 0x619dfb */ if (ZF_) goto L_00619dfb;
  /* 00619df3 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_00619df5:;
  /* 00619df5 mov edx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00619df8 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00619df9 jne 0x619df5 */ if (!ZF_) goto L_00619df5;
L_00619dfb:;
  /* 00619dfb lea eax, [edx - 0x2c] */ eax = (u32)((u32)(edx + 0xffffffd4u));
  /* 00619dfe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619e00(CPU *c) {
  NATIVE_HOOK(0x619e00u) REGS; LOADALL;
L_00619e00:;
  /* 00619e00 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619e04 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00619e08 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00619e0a mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00619e0d and edx, 0xfffffff7 */ { u32 a_ = edx, b_ = 0xfffffff7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00619e10 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00619e12 or edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00619e15 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00619e18 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 00619e1a mov dword ptr [eax + 0x10], 0x3f800000 */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(0x3f800000u); }
  /* 00619e21 mov dword ptr [eax + 4], 1 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x1u); }
  /* 00619e28 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00619e2b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619e30(CPU *c) {
  NATIVE_HOOK(0x619e30u) REGS; LOADALL;
L_00619e30:;
  /* 00619e30 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619e34 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00619e38 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00619e3b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00619e3d or ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00619e40 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00619e42 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619e50(CPU *c) {
  NATIVE_HOOK(0x619e50u) REGS; LOADALL;
L_00619e50:;
  /* 00619e50 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00619e54 test byte ptr [eax], 1 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00619e57 je 0x619e5c */ if (ZF_) goto L_00619e5c;
  /* 00619e59 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00619e5b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00619e5c:;
  /* 00619e5c mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619e60 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00619e62 or ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00619e65 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00619e67 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00619e6b mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00619e6e mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00619e73 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619e80(CPU *c) {
  NATIVE_HOOK(0x619e80u) REGS; LOADALL;
L_00619e80:;
  /* 00619e80 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619e83 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00619e84 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619e85 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00619e86 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 00619e8a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00619e8c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00619e8e mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00619e91 mov dword ptr [esp + 0xc], esi */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(esi); }
  /* 00619e95 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00619e99 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 00619e9d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619ea0 mov dword ptr [esp + 0x10], 4 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0x4u); }
  /* 00619ea8 je 0x619eb3 */ if (ZF_) goto L_00619eb3;
  /* 00619eaa mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 00619eae inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00619eaf mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
L_00619eb3:;
  /* 00619eb3 mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 00619eb7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619eba je 0x619ec3 */ if (ZF_) goto L_00619ec3;
  /* 00619ebc mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00619ebe inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00619ebf mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
L_00619ec3:;
  /* 00619ec3 cmp dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619ec6 jbe 0x619f1c */ if ((CF_|ZF_)) goto L_00619f1c;
  /* 00619ec8 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00619ecc push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00619ecd mov ebp, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebp = (u32)(M32(m_)); }
  /* 00619ed1 add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00619ed4:;
  /* 00619ed4 mov eax, dword ptr [ecx - 8] */ { const u32 m_ = (u32)(ecx + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00619ed7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00619ed9 jns 0x619ee0 */ if (!SF_) goto L_00619ee0;
  /* 00619edb and eax, 0x7fffffff */ { u32 a_ = eax, b_ = 0x7fffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00619ee0:;
  /* 00619ee0 cmp eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619ee4 jl 0x619f10 */ if (LT_) goto L_00619f10;
  /* 00619ee6 cmp eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619eea jge 0x619f10 */ if (!LT_) goto L_00619f10;
  /* 00619eec mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00619eee cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619ef0 jl 0x619f10 */ if (LT_) goto L_00619f10;
  /* 00619ef2 cmp edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619ef6 jge 0x619f10 */ if (!LT_) goto L_00619f10;
  /* 00619ef8 cmp dword ptr [ecx - 4], ebp */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619efb je 0x619f01 */ if (ZF_) goto L_00619f01;
  /* 00619efd test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00619eff jge 0x619f10 */ if (!LT_) goto L_00619f10;
L_00619f01:;
  /* 00619f01 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 00619f05 or eax, 0x80000000 */ { u32 a_ = eax, b_ = 0x80000000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00619f0a mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00619f0d mov dword ptr [ecx - 8], eax */ { const u32 m_ = (u32)(ecx + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_00619f10:;
  /* 00619f10 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619f13 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00619f14 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00619f17 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00619f19 jb 0x619ed4 */ if (CF_) goto L_00619ed4;
  /* 00619f1b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_00619f1c:;
  /* 00619f1c mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00619f20 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00619f21 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00619f22 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00619f23 or dword ptr [eax], 0x10 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 00619f26 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619f29 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619f30(CPU *c) {
  NATIVE_HOOK(0x619f30u) REGS; LOADALL;
L_00619f30:;
  /* 00619f30 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619f34 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00619f38 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00619f3b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00619f3d or ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00619f40 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00619f42 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619f50(CPU *c) {
  NATIVE_HOOK(0x619f50u) REGS; LOADALL;
L_00619f50:;
  /* 00619f50 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00619f54 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00619f58 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00619f5b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00619f5d or cl, 0x80 */ { u32 a_ = (ecx & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00619f60 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00619f62 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619f70(CPU *c) {
  NATIVE_HOOK(0x619f70u) REGS; LOADALL;
L_00619f70:;
  /* 00619f70 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00619f74 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619f75 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00619f79 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619f7a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619f7b call 0x619fd0 */ esp -= 4; M32(esp) = 0x619f80u; SAVEALL; F_00619fd0(c); ABI_CHECK(0x619fd0u, 0x619f7bu); RETCHK(0x619f80u, 0x619f7bu); LOADALL;
  /* 00619f80 mov ecx, dword ptr [esi + 0x118] */ { const u32 m_ = (u32)(esi + 0x118u); ecx = (u32)(M32(m_)); }
  /* 00619f86 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619f89 shl eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00619f8c add eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00619f8f mov dword ptr [esi + 0x140], eax */ { const u32 m_ = (u32)(esi + 0x140u); M32(m_) = (u32)(eax); }
  /* 00619f95 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00619f96 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619fa0(CPU *c) {
  NATIVE_HOOK(0x619fa0u) REGS; LOADALL;
L_00619fa0:;
  /* 00619fa0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00619fa4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619fa5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00619fa9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619faa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619fab call 0x61a030 */ esp -= 4; M32(esp) = 0x619fb0u; SAVEALL; F_0061a030(c); ABI_CHECK(0x61a030u, 0x619fabu); RETCHK(0x619fb0u, 0x619fabu); LOADALL;
  /* 00619fb0 mov ecx, dword ptr [esi + 0x118] */ { const u32 m_ = (u32)(esi + 0x118u); ecx = (u32)(M32(m_)); }
  /* 00619fb6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619fb9 shl eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00619fbc add eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00619fbf mov dword ptr [esi + 0x140], eax */ { const u32 m_ = (u32)(esi + 0x140u); M32(m_) = (u32)(eax); }
  /* 00619fc5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00619fc6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00619fd0(CPU *c) {
  NATIVE_HOOK(0x619fd0u) REGS; LOADALL;
L_00619fd0:;
  /* 00619fd0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00619fd1 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00619fd5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00619fd6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00619fd7 mov eax, dword ptr [ebx + 0x118] */ { const u32 m_ = (u32)(ebx + 0x118u); eax = (u32)(M32(m_)); }
  /* 00619fdd xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00619fdf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00619fe0 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00619fe3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00619fe5 jbe 0x61a014 */ if ((CF_|ZF_)) goto L_0061a014;
  /* 00619fe7 mov ebp, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebp = (u32)(M32(m_)); }
  /* 00619feb xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_00619fed:;
  /* 00619fed mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 00619ff0 mov eax, dword ptr [edi + eax] */ { const u32 m_ = (u32)(edi + eax); eax = (u32)(M32(m_)); }
  /* 00619ff3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00619ff5 je 0x61a005 */ if (ZF_) goto L_0061a005;
  /* 00619ff7 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00619ff8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619ff9 call 0x5f1b30 */ esp -= 4; M32(esp) = 0x619ffeu; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x619ff9u); RETCHK(0x619ffeu, 0x619ff9u); LOADALL;
  /* 00619ffe add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a001 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061a003 je 0x61a01c */ if (ZF_) goto L_0061a01c;
L_0061a005:;
  /* 0061a005 mov eax, dword ptr [ebx + 0x118] */ { const u32 m_ = (u32)(ebx + 0x118u); eax = (u32)(M32(m_)); }
  /* 0061a00b inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061a00c add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0061a00f cmp esi, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a012 jb 0x619fed */ if (CF_) goto L_00619fed;
L_0061a014:;
  /* 0061a014 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a015 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a016 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0061a017 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061a01a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061a01b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061a01c:;
  /* 0061a01c mov eax, esi */ { eax = (u32)(esi); }
  /* 0061a01e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a01f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a020 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0061a021 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061a022 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061a030(CPU *c) {
  NATIVE_HOOK(0x61a030u) REGS; LOADALL;
L_0061a030:;
  /* 0061a030 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0061a031 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061a035 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0061a036 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061a037 mov eax, dword ptr [ebx + 0x118] */ { const u32 m_ = (u32)(ebx + 0x118u); eax = (u32)(M32(m_)); }
  /* 0061a03d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0061a03f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061a040 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0061a043 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061a045 jbe 0x61a07c */ if ((CF_|ZF_)) goto L_0061a07c;
  /* 0061a047 mov ebp, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebp = (u32)(M32(m_)); }
  /* 0061a04b xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_0061a04d:;
  /* 0061a04d mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 0061a050 mov eax, dword ptr [eax + edi + 4] */ { const u32 m_ = (u32)(eax + edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0061a054 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061a056 je 0x61a06d */ if (ZF_) goto L_0061a06d;
  /* 0061a058 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0061a05e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0061a05f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a060 call dword ptr [ecx + 0xe8] */ { const u32 m_ = (u32)(ecx + 0xe8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61a066u; SAVEALL; call_ind(c, t_); RETCHK(0x61a066u, 0x61a060u); LOADALL; }
  /* 0061a066 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a069 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061a06b je 0x61a084 */ if (ZF_) goto L_0061a084;
L_0061a06d:;
  /* 0061a06d mov eax, dword ptr [ebx + 0x118] */ { const u32 m_ = (u32)(ebx + 0x118u); eax = (u32)(M32(m_)); }
  /* 0061a073 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061a074 add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0061a077 cmp esi, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a07a jb 0x61a04d */ if (CF_) goto L_0061a04d;
L_0061a07c:;
  /* 0061a07c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a07d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a07e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0061a07f or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061a082 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061a083 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061a084:;
  /* 0061a084 mov eax, esi */ { eax = (u32)(esi); }
  /* 0061a086 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a087 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a088 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0061a089 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061a08a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061a090(CPU *c) {
  NATIVE_HOOK(0x61a090u) REGS; LOADALL;
L_0061a090:;
  /* 0061a090 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061a091 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061a095 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061a096 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0061a098 mov eax, dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); eax = (u32)(M32(m_)); }
  /* 0061a09e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a09f call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61a0a5u; SAVEALL; call_ind(c, t_); RETCHK(0x61a0a5u, 0x61a09fu); LOADALL; }
  /* 0061a0a5 mov ecx, dword ptr [esi + 0x118] */ { const u32 m_ = (u32)(esi + 0x118u); ecx = (u32)(M32(m_)); }
  /* 0061a0ab mov eax, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); eax = (u32)(M32(m_)); }
  /* 0061a0b1 test eax, 0x10000 */ { u32 a_ = eax, b_ = 0x10000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061a0b6 mov edx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 0061a0b9 je 0x61a15e */ if (ZF_) goto L_0061a15e;
  /* 0061a0bf mov eax, dword ptr [esi + 0x178] */ { const u32 m_ = (u32)(esi + 0x178u); eax = (u32)(M32(m_)); }
  /* 0061a0c5 mov ecx, dword ptr [esi + 0x16c] */ { const u32 m_ = (u32)(esi + 0x16cu); ecx = (u32)(M32(m_)); }
  /* 0061a0cb lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 0061a0ce mov eax, dword ptr [ecx + eax*4 + 0x10] */ { const u32 m_ = (u32)(ecx + eax * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 0061a0d2 mov edi, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); edi = (u32)(M32(m_)); }
  /* 0061a0d8 test edi, 0x2000 */ { u32 a_ = edi, b_ = 0x2000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061a0de je 0x61a0fa */ if (ZF_) goto L_0061a0fa;
  /* 0061a0e0 test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0061a0e2 jne 0x61a106 */ if (!ZF_) goto L_0061a106;
  /* 0061a0e4 mov ecx, dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); ecx = (u32)(M32(m_)); }
  /* 0061a0ea push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061a0ec push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0061a0ee push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061a0ef call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61a0f5u; SAVEALL; call_ind(c, t_); RETCHK(0x61a0f5u, 0x61a0efu); LOADALL; }
  /* 0061a0f5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a0f6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061a0f8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a0f9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061a0fa:;
  /* 0061a0fa test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0061a0fc je 0x61a183 */ if (ZF_) goto L_0061a183;
  /* 0061a102 test al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0061a104 jne 0x61a183 */ if (!ZF_) goto L_0061a183;
L_0061a106:;
  /* 0061a106 mov edi, dword ptr [esi + 0x178] */ { const u32 m_ = (u32)(esi + 0x178u); edi = (u32)(M32(m_)); }
  /* 0061a10c mov eax, dword ptr [esi + 0x168] */ { const u32 m_ = (u32)(esi + 0x168u); eax = (u32)(M32(m_)); }
  /* 0061a112 imul edi, edx */ { s64 p_ = (s64)(s32)edi * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0061a115 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0061a117 mov eax, dword ptr [esi + 0x178] */ { const u32 m_ = (u32)(esi + 0x178u); eax = (u32)(M32(m_)); }
  /* 0061a11d lea edx, [eax + eax*4] */ edx = (u32)((u32)(eax + eax * 4u));
  /* 0061a120 lea eax, [ecx + edx*4] */ eax = (u32)((u32)(ecx + edx * 4u));
  /* 0061a123 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0061a127 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0061a129 mov eax, dword ptr [esi + 0x178] */ { const u32 m_ = (u32)(esi + 0x178u); eax = (u32)(M32(m_)); }
  /* 0061a12f lea edx, [eax + eax*4] */ edx = (u32)((u32)(eax + eax * 4u));
  /* 0061a132 mov eax, dword ptr [esi + 0x16c] */ { const u32 m_ = (u32)(esi + 0x16cu); eax = (u32)(M32(m_)); }
  /* 0061a138 mov dword ptr [eax + edx*4 + 0x10], 4 */ { const u32 m_ = (u32)(eax + edx * 4u + 0x10u); M32(m_) = (u32)(0x4u); }
  /* 0061a140 mov eax, dword ptr [esi + 0x178] */ { const u32 m_ = (u32)(esi + 0x178u); eax = (u32)(M32(m_)); }
  /* 0061a146 mov ecx, dword ptr [esi + 0x17c] */ { const u32 m_ = (u32)(esi + 0x17cu); ecx = (u32)(M32(m_)); }
  /* 0061a14c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061a14d cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a14f jne 0x61a153 */ if (!ZF_) goto L_0061a153;
  /* 0061a151 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0061a153:;
  /* 0061a153 mov dword ptr [esi + 0x178], eax */ { const u32 m_ = (u32)(esi + 0x178u); M32(m_) = (u32)(eax); }
  /* 0061a159 jmp 0x61a20e */ goto L_0061a20e;
L_0061a15e:;
  /* 0061a15e mov eax, dword ptr [esi + 0x158] */ { const u32 m_ = (u32)(esi + 0x158u); eax = (u32)(M32(m_)); }
  /* 0061a164 mov ecx, dword ptr [esi + 0x148] */ { const u32 m_ = (u32)(esi + 0x148u); ecx = (u32)(M32(m_)); }
  /* 0061a16a lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 0061a16d mov eax, dword ptr [ecx + eax*4 + 0x10] */ { const u32 m_ = (u32)(ecx + eax * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 0061a171 mov edi, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); edi = (u32)(M32(m_)); }
  /* 0061a177 test edi, 0x2000 */ { u32 a_ = edi, b_ = 0x2000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061a17d je 0x61a199 */ if (ZF_) goto L_0061a199;
  /* 0061a17f test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0061a181 jne 0x61a1a9 */ if (!ZF_) goto L_0061a1a9;
L_0061a183:;
  /* 0061a183 mov ecx, dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); ecx = (u32)(M32(m_)); }
  /* 0061a189 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061a18b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0061a18d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061a18e call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61a194u; SAVEALL; call_ind(c, t_); RETCHK(0x61a194u, 0x61a18eu); LOADALL; }
  /* 0061a194 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a195 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061a197 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a198 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061a199:;
  /* 0061a199 test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0061a19b je 0x61a231 */ if (ZF_) goto L_0061a231;
  /* 0061a1a1 test al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0061a1a3 jne 0x61a231 */ if (!ZF_) goto L_0061a231;
L_0061a1a9:;
  /* 0061a1a9 mov edi, dword ptr [esi + 0x158] */ { const u32 m_ = (u32)(esi + 0x158u); edi = (u32)(M32(m_)); }
  /* 0061a1af mov eax, dword ptr [esi + 0x144] */ { const u32 m_ = (u32)(esi + 0x144u); eax = (u32)(M32(m_)); }
  /* 0061a1b5 imul edi, edx */ { s64 p_ = (s64)(s32)edi * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0061a1b8 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0061a1ba mov eax, dword ptr [esi + 0x158] */ { const u32 m_ = (u32)(esi + 0x158u); eax = (u32)(M32(m_)); }
  /* 0061a1c0 lea edx, [eax + eax*4] */ edx = (u32)((u32)(eax + eax * 4u));
  /* 0061a1c3 lea eax, [ecx + edx*4] */ eax = (u32)((u32)(ecx + edx * 4u));
  /* 0061a1c6 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0061a1ca mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0061a1cc mov eax, dword ptr [esi + 0x158] */ { const u32 m_ = (u32)(esi + 0x158u); eax = (u32)(M32(m_)); }
  /* 0061a1d2 lea edx, [eax + eax*4] */ edx = (u32)((u32)(eax + eax * 4u));
  /* 0061a1d5 mov eax, dword ptr [esi + 0x148] */ { const u32 m_ = (u32)(esi + 0x148u); eax = (u32)(M32(m_)); }
  /* 0061a1db mov dword ptr [eax + edx*4 + 0x10], 4 */ { const u32 m_ = (u32)(eax + edx * 4u + 0x10u); M32(m_) = (u32)(0x4u); }
  /* 0061a1e3 mov ecx, dword ptr [esi + 0x158] */ { const u32 m_ = (u32)(esi + 0x158u); ecx = (u32)(M32(m_)); }
  /* 0061a1e9 mov edx, dword ptr [esi + 0x164] */ { const u32 m_ = (u32)(esi + 0x164u); edx = (u32)(M32(m_)); }
  /* 0061a1ef lea eax, [ecx + 1] */ eax = (u32)((u32)(ecx + 0x1u));
  /* 0061a1f2 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a1f4 jne 0x61a1f8 */ if (!ZF_) goto L_0061a1f8;
  /* 0061a1f6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0061a1f8:;
  /* 0061a1f8 mov dword ptr [esi + 0x158], eax */ { const u32 m_ = (u32)(esi + 0x158u); M32(m_) = (u32)(eax); }
  /* 0061a1fe mov edx, dword ptr [esi + 0x15c] */ { const u32 m_ = (u32)(esi + 0x15cu); edx = (u32)(M32(m_)); }
  /* 0061a204 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a206 jne 0x61a20e */ if (!ZF_) goto L_0061a20e;
  /* 0061a208 mov dword ptr [esi + 0x15c], eax */ { const u32 m_ = (u32)(esi + 0x15cu); M32(m_) = (u32)(eax); }
L_0061a20e:;
  /* 0061a20e mov eax, dword ptr [esi + 0xfc] */ { const u32 m_ = (u32)(esi + 0xfcu); eax = (u32)(M32(m_)); }
  /* 0061a214 mov ecx, dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); ecx = (u32)(M32(m_)); }
  /* 0061a21a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061a21c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0061a21d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0061a21f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061a220 mov dword ptr [esi + 0xfc], eax */ { const u32 m_ = (u32)(esi + 0xfcu); M32(m_) = (u32)(eax); }
  /* 0061a226 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61a22cu; SAVEALL; call_ind(c, t_); RETCHK(0x61a22cu, 0x61a226u); LOADALL; }
  /* 0061a22c mov eax, edi */ { eax = (u32)(edi); }
  /* 0061a22e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a22f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a230 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061a231:;
  /* 0061a231 mov edx, dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); edx = (u32)(M32(m_)); }
  /* 0061a237 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061a239 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0061a23b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0061a23c call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61a242u; SAVEALL; call_ind(c, t_); RETCHK(0x61a242u, 0x61a23cu); LOADALL; }
  /* 0061a242 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a243 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061a245 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a246 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061a250(CPU *c) {
  NATIVE_HOOK(0x61a250u) REGS; LOADALL;
L_0061a250:;
  /* 0061a250 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0061a251 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061a252 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0061a256 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061a257 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0061a259 mov eax, dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); eax = (u32)(M32(m_)); }
  /* 0061a25f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a260 call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61a266u; SAVEALL; call_ind(c, t_); RETCHK(0x61a266u, 0x61a260u); LOADALL; }
  /* 0061a266 mov ecx, dword ptr [esi + 0x118] */ { const u32 m_ = (u32)(esi + 0x118u); ecx = (u32)(M32(m_)); }
  /* 0061a26c mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0061a270 mov edi, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edi = (u32)(M32(m_)); }
  /* 0061a273 mov ecx, dword ptr [esi + 0x144] */ { const u32 m_ = (u32)(esi + 0x144u); ecx = (u32)(M32(m_)); }
  /* 0061a279 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a27b jb 0x61a333 */ if (CF_) goto L_0061a333;
  /* 0061a281 mov edx, dword ptr [esi + 0x160] */ { const u32 m_ = (u32)(esi + 0x160u); edx = (u32)(M32(m_)); }
  /* 0061a287 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0061a289 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a28b jae 0x61a333 */ if (!CF_) goto L_0061a333;
  /* 0061a291 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061a293 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a295 div edi */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, edi, &q_, &r_, 0x61a295u); eax = q_; edx = r_; }
  /* 0061a297 mov edx, dword ptr [esi + 0x148] */ { const u32 m_ = (u32)(esi + 0x148u); edx = (u32)(M32(m_)); }
  /* 0061a29d mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 0061a2a2 lea ecx, [eax + eax*4] */ ecx = (u32)((u32)(eax + eax * 4u));
  /* 0061a2a5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061a2a6 mov dword ptr [edx + ecx*4 + 0x10], ebx */ { const u32 m_ = (u32)(edx + ecx * 4u + 0x10u); M32(m_) = (u32)(ebx); }
  /* 0061a2aa mov edi, dword ptr [esi + 0x164] */ { const u32 m_ = (u32)(esi + 0x164u); edi = (u32)(M32(m_)); }
  /* 0061a2b0 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a2b2 jne 0x61a2b6 */ if (!ZF_) goto L_0061a2b6;
  /* 0061a2b4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0061a2b6:;
  /* 0061a2b6 cmp eax, dword ptr [esi + 0x158] */ { const u32 m_ = (u32)(esi + 0x158u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a2bc jne 0x61a2ea */ if (!ZF_) goto L_0061a2ea;
  /* 0061a2be mov eax, dword ptr [esi + 0x15c] */ { const u32 m_ = (u32)(esi + 0x15cu); eax = (u32)(M32(m_)); }
  /* 0061a2c4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061a2c6 mov dword ptr [esi + 0x154], eax */ { const u32 m_ = (u32)(esi + 0x154u); M32(m_) = (u32)(eax); }
  /* 0061a2cc mov ecx, dword ptr [esi + 0x154] */ { const u32 m_ = (u32)(esi + 0x154u); ecx = (u32)(M32(m_)); }
  /* 0061a2d2 mov dword ptr [esi + 0x158], ecx */ { const u32 m_ = (u32)(esi + 0x158u); M32(m_) = (u32)(ecx); }
  /* 0061a2d8 mov ecx, dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); ecx = (u32)(M32(m_)); }
  /* 0061a2de push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0061a2df push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061a2e0 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61a2e6u; SAVEALL; call_ind(c, t_); RETCHK(0x61a2e6u, 0x61a2e0u); LOADALL; }
  /* 0061a2e6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a2e7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a2e8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061a2e9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061a2ea:;
  /* 0061a2ea mov eax, dword ptr [esi + 0x154] */ { const u32 m_ = (u32)(esi + 0x154u); eax = (u32)(M32(m_)); }
  /* 0061a2f0 mov edx, dword ptr [esi + 0x148] */ { const u32 m_ = (u32)(esi + 0x148u); edx = (u32)(M32(m_)); }
  /* 0061a2f6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0061a2f7 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0061a2f9 lea ebp, [eax + eax*4] */ ebp = (u32)((u32)(eax + eax * 4u));
  /* 0061a2fc test byte ptr [edx + ebp*4 + 0x10], bl */ { const u32 m_ = (u32)(edx + ebp * 4u + 0x10u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0061a300 je 0x61a318 */ if (ZF_) goto L_0061a318;
L_0061a302:;
  /* 0061a302 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061a303 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a305 jne 0x61a30f */ if (!ZF_) goto L_0061a30f;
  /* 0061a307 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061a309 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061a30b je 0x61a318 */ if (ZF_) goto L_0061a318;
  /* 0061a30d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_0061a30f:;
  /* 0061a30f lea ebp, [eax + eax*4] */ ebp = (u32)((u32)(eax + eax * 4u));
  /* 0061a312 test byte ptr [edx + ebp*4 + 0x10], bl */ { const u32 m_ = (u32)(edx + ebp * 4u + 0x10u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0061a316 jne 0x61a302 */ if (!ZF_) goto L_0061a302;
L_0061a318:;
  /* 0061a318 mov ecx, dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); ecx = (u32)(M32(m_)); }
  /* 0061a31e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0061a31f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061a321 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0061a322 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061a323 mov dword ptr [esi + 0x154], eax */ { const u32 m_ = (u32)(esi + 0x154u); M32(m_) = (u32)(eax); }
  /* 0061a329 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61a32fu; SAVEALL; call_ind(c, t_); RETCHK(0x61a32fu, 0x61a329u); LOADALL; }
  /* 0061a32f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a330 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a331 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061a332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061a333:;
  /* 0061a333 mov ecx, dword ptr [esi + 0x168] */ { const u32 m_ = (u32)(esi + 0x168u); ecx = (u32)(M32(m_)); }
  /* 0061a339 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a33b sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061a33d mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 0061a342 div edi */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, edi, &q_, &r_, 0x61a342u); eax = q_; edx = r_; }
  /* 0061a344 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061a346 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0061a347 lea edx, [eax + eax*4] */ edx = (u32)((u32)(eax + eax * 4u));
  /* 0061a34a mov eax, dword ptr [esi + 0x16c] */ { const u32 m_ = (u32)(esi + 0x16cu); eax = (u32)(M32(m_)); }
  /* 0061a350 mov dword ptr [eax + edx*4 + 0x10], ebx */ { const u32 m_ = (u32)(eax + edx * 4u + 0x10u); M32(m_) = (u32)(ebx); }
  /* 0061a354 mov ecx, dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); ecx = (u32)(M32(m_)); }
  /* 0061a35a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061a35b call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61a361u; SAVEALL; call_ind(c, t_); RETCHK(0x61a361u, 0x61a35bu); LOADALL; }
  /* 0061a361 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a362 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a363 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061a364 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061a370(CPU *c) {
  NATIVE_HOOK(0x61a370u) REGS; LOADALL;
L_0061a370:;
  /* 0061a370 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a373 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0061a377 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0061a378 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0061a379 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061a37a mov ecx, dword ptr [eax + 0x13c] */ { const u32 m_ = (u32)(eax + 0x13cu); ecx = (u32)(M32(m_)); }
  /* 0061a380 mov eax, dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); eax = (u32)(M32(m_)); }
  /* 0061a386 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0061a388 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0061a38a mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061a38d xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 0061a38f mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0061a393 mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0061a396 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061a398 jbe 0x61a418 */ if ((CF_|ZF_)) goto L_0061a418;
  /* 0061a39a add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061a39d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061a39e mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
L_0061a3a2:;
  /* 0061a3a2 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0061a3a6 mov eax, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061a3a9 mov edx, dword ptr [eax + ebp*4] */ { const u32 m_ = (u32)(eax + ebp * 4u); edx = (u32)(M32(m_)); }
  /* 0061a3ac cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a3ae lea eax, [eax + ebp*4] */ eax = (u32)((u32)(eax + ebp * 4u));
  /* 0061a3b1 jbe 0x61a3ed */ if ((CF_|ZF_)) goto L_0061a3ed;
  /* 0061a3b3 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 0061a3b5 mov esi, edx */ { esi = (u32)(edx); }
  /* 0061a3b7 mov eax, esi */ { eax = (u32)(esi); }
  /* 0061a3b9 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a3bb div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x61a3bbu); eax = q_; edx = r_; }
  /* 0061a3bd lea eax, [esp + 0x1c] */ eax = (u32)((u32)(esp + 0x1cu));
  /* 0061a3c1 mov edi, edx */ { edi = (u32)(edx); }
  /* 0061a3c3 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 0061a3c7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0061a3c8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a3c9 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061a3cc xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a3ce div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x61a3ceu); eax = q_; edx = r_; }
  /* 0061a3d0 mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
  /* 0061a3d4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a3d5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061a3d6 call 0x5f23a0 */ esp -= 4; M32(esp) = 0x61a3dbu; SAVEALL; F_005f23a0(c); ABI_CHECK(0x5f23a0u, 0x61a3d6u); RETCHK(0x61a3dbu, 0x61a3d6u); LOADALL;
  /* 0061a3db mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0061a3df add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a3e2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061a3e3 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a3e5 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0061a3e9 jbe 0x61a3ed */ if ((CF_|ZF_)) goto L_0061a3ed;
  /* 0061a3eb mov ebx, eax */ { ebx = (u32)(eax); }
L_0061a3ed:;
  /* 0061a3ed mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 0061a3f1 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0061a3f5 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061a3f6 add ecx, 0x28 */ { u32 a_ = ecx, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061a3f9 mov eax, dword ptr [edx + 0x118] */ { const u32 m_ = (u32)(edx + 0x118u); eax = (u32)(M32(m_)); }
  /* 0061a3ff mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0061a403 cmp ebp, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = ebp, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a406 jb 0x61a3a2 */ if (CF_) goto L_0061a3a2;
  /* 0061a408 cmp ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a40b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a40c jne 0x61a418 */ if (!ZF_) goto L_0061a418;
  /* 0061a40e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a40f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0061a410 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061a413 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061a414 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a417 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061a418:;
  /* 0061a418 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a419 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0061a41b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0061a41c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061a41d add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a420 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061a430(CPU *c) {
  NATIVE_HOOK(0x61a430u) REGS; LOADALL;
L_0061a430:;
  /* 0061a430 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061a431 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061a435 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0061a436 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0061a437 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061a438 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 0061a43c mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 0061a440 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 0061a443 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061a444 mov ecx, dword ptr [esi + 0x118] */ { const u32 m_ = (u32)(esi + 0x118u); ecx = (u32)(M32(m_)); }
  /* 0061a44a mov edx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edx = (u32)(M32(m_)); }
  /* 0061a44d mov ecx, dword ptr [edx + eax*8 + 0x20] */ { const u32 m_ = (u32)(edx + eax * 8u + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0061a451 lea edi, [edx + eax*8] */ edi = (u32)((u32)(edx + eax * 8u));
  /* 0061a454 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0061a456 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a458 div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x61a458u); eax = q_; edx = r_; }
  /* 0061a45a lea edx, [esp + 0x1c] */ edx = (u32)((u32)(esp + 0x1cu));
  /* 0061a45e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0061a45f lea edx, [esp + 0x24] */ edx = (u32)((u32)(esp + 0x24u));
  /* 0061a463 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0061a464 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061a465 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a466 mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 0061a46a call 0x5f23a0 */ esp -= 4; M32(esp) = 0x61a46fu; SAVEALL; F_005f23a0(c); ABI_CHECK(0x5f23a0u, 0x61a46au); RETCHK(0x61a46fu, 0x61a46au); LOADALL;
  /* 0061a46f mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 0061a473 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a476 sub ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061a478 mov dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ebx); }
  /* 0061a47c mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0061a47f mov dword ptr [esp + 0x20], ebx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ebx); }
  /* 0061a483 test byte ptr [eax + 0x18], 4 */ { const u32 m_ = (u32)(eax + 0x18u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0061a487 je 0x61a493 */ if (ZF_) goto L_0061a493;
  /* 0061a489 mov dword ptr [esp + 0x1c], 1 */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0x1u); }
  /* 0061a491 jmp 0x61a49c */ goto L_0061a49c;
L_0061a493:;
  /* 0061a493 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0061a495 mov cl, byte ptr [eax + 0xd] */ { const u32 m_ = (u32)(eax + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061a498 mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
L_0061a49c:;
  /* 0061a49c xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 0061a49e mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0061a4a0 mov bp, word ptr [edi + 0x1a] */ { const u32 m_ = (u32)(edi + 0x1au); ebp = (ebp & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061a4a4 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a4a6 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 0061a4a8 imul ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0061a4ad div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x61a4adu); eax = q_; edx = r_; }
  /* 0061a4af test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061a4b1 je 0x61a4cd */ if (ZF_) goto L_0061a4cd;
  /* 0061a4b3 lea eax, [ecx + ebx - 1] */ eax = (u32)((u32)(ecx + ebx + 0xffffffffu));
  /* 0061a4b7 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a4b9 div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x61a4b9u); eax = q_; edx = r_; }
  /* 0061a4bb imul eax, ebp */ { s64 p_ = (s64)(s32)eax * (s64)(s32)ebp; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0061a4be mov ebp, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebp = (u32)(M32(m_)); }
  /* 0061a4c2 imul eax, ebp */ { s64 p_ = (s64)(s32)eax * (s64)(s32)ebp; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0061a4c5 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0061a4c7 mov dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ebx); }
  /* 0061a4cb jmp 0x61a4d1 */ goto L_0061a4d1;
L_0061a4cd:;
  /* 0061a4cd mov ebp, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebp = (u32)(M32(m_)); }
L_0061a4d1:;
  /* 0061a4d1 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a4d3 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0061a4d5 mov dx, word ptr [edi + 0x1a] */ { const u32 m_ = (u32)(edi + 0x1au); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061a4d9 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0061a4db xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a4dd imul ecx, ebp */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)ebp; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0061a4e0 div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x61a4e0u); eax = q_; edx = r_; }
  /* 0061a4e2 lea edx, [esp + 0x18] */ edx = (u32)((u32)(esp + 0x18u));
  /* 0061a4e6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0061a4e7 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a4e9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0061a4eb lea eax, [esp + 0x20] */ eax = (u32)((u32)(esp + 0x20u));
  /* 0061a4ef mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0061a4f3 mov dx, word ptr [edi + 0x1a] */ { const u32 m_ = (u32)(edi + 0x1au); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061a4f7 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 0061a4f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a4fa imul ebx, ebp */ { s64 p_ = (s64)(s32)ebx * (s64)(s32)ebp; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0061a4fd mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0061a500 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a502 div ebx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ebx, &q_, &r_, 0x61a502u); eax = q_; edx = r_; }
  /* 0061a504 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a506 mov edi, eax */ { edi = (u32)(eax); }
  /* 0061a508 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061a50b div edi */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, edi, &q_, &r_, 0x61a50bu); eax = q_; edx = r_; }
  /* 0061a50d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a50e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061a50f call 0x5f23a0 */ esp -= 4; M32(esp) = 0x61a514u; SAVEALL; F_005f23a0(c); ABI_CHECK(0x5f23a0u, 0x61a50fu); RETCHK(0x61a514u, 0x61a50fu); LOADALL;
  /* 0061a514 mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 0061a518 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a51b test eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061a520 je 0x61a527 */ if (ZF_) goto L_0061a527;
  /* 0061a522 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061a523 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
L_0061a527:;
  /* 0061a527 mov ebx, dword ptr [esi + 0x118] */ { const u32 m_ = (u32)(esi + 0x118u); ebx = (u32)(M32(m_)); }
  /* 0061a52d mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 0061a530 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061a532 jbe 0x61a573 */ if ((CF_|ZF_)) goto L_0061a573;
  /* 0061a534 mov edi, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edi = (u32)(M32(m_)); }
  /* 0061a537 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0061a53b add edi, 0x1a */ { u32 a_ = edi, b_ = 0x1au; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_0061a53e:;
  /* 0061a53e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0061a540 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0061a544 mov cx, word ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061a547 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a549 imul ecx, ebp */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)ebp; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0061a54c div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x61a54cu); eax = q_; edx = r_; }
  /* 0061a54e test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061a550 je 0x61a565 */ if (ZF_) goto L_0061a565;
  /* 0061a552 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0061a556 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a558 lea eax, [ecx + eax - 1] */ eax = (u32)((u32)(ecx + eax + 0xffffffffu));
  /* 0061a55c div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x61a55cu); eax = q_; edx = r_; }
  /* 0061a55e imul eax, ecx */ { s64 p_ = (s64)(s32)eax * (s64)(s32)ecx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0061a561 mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
L_0061a565:;
  /* 0061a565 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0061a569 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0061a56c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0061a56d mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0061a571 jne 0x61a53e */ if (!ZF_) goto L_0061a53e;
L_0061a573:;
  /* 0061a573 mov edi, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); edi = (u32)(M32(m_)); }
  /* 0061a576 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 0061a57a mov ecx, dword ptr [esi + 0x140] */ { const u32 m_ = (u32)(esi + 0x140u); ecx = (u32)(M32(m_)); }
  /* 0061a580 imul edi, ebp */ { s64 p_ = (s64)(s32)edi * (s64)(s32)ebp; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0061a583 mov eax, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0061a586 mov edx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); edx = (u32)(M32(m_)); }
  /* 0061a589 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0061a58b push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0061a58d add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0061a58f mov edx, dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); edx = (u32)(M32(m_)); }
  /* 0061a595 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0061a596 call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61a59cu; SAVEALL; call_ind(c, t_); RETCHK(0x61a59cu, 0x61a596u); LOADALL; }
  /* 0061a59c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0061a59e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061a5a0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061a5a1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061a5a3 lea eax, [esi + 0x8c] */ eax = (u32)((u32)(esi + 0x8cu));
  /* 0061a5a9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061a5ab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a5ac call 0x61ae00 */ esp -= 4; M32(esp) = 0x61a5b1u; SAVEALL; F_0061ae00(c); ABI_CHECK(0x61ae00u, 0x61a5acu); RETCHK(0x61a5b1u, 0x61a5acu); LOADALL;
  /* 0061a5b1 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a5b4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061a5b6 je 0x61a633 */ if (ZF_) goto L_0061a633;
  /* 0061a5b8 mov eax, dword ptr [esi + 0x140] */ { const u32 m_ = (u32)(esi + 0x140u); eax = (u32)(M32(m_)); }
  /* 0061a5be mov ecx, dword ptr [esi + 0x13c] */ { const u32 m_ = (u32)(esi + 0x13cu); ecx = (u32)(M32(m_)); }
  /* 0061a5c4 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a5c6 je 0x61a5dd */ if (ZF_) goto L_0061a5dd;
  /* 0061a5c8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061a5c9 mov dword ptr [esi + 0x13c], eax */ { const u32 m_ = (u32)(esi + 0x13cu); M32(m_) = (u32)(eax); }
  /* 0061a5cf call 0x61a370 */ esp -= 4; M32(esp) = 0x61a5d4u; SAVEALL; F_0061a370(c); ABI_CHECK(0x61a370u, 0x61a5cfu); RETCHK(0x61a5d4u, 0x61a5cfu); LOADALL;
  /* 0061a5d4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a5d7 mov dword ptr [esi + 0xec], eax */ { const u32 m_ = (u32)(esi + 0xecu); M32(m_) = (u32)(eax); }
L_0061a5dd:;
  /* 0061a5dd mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0061a5e1 mov edx, dword ptr [esi + 0x13c] */ { const u32 m_ = (u32)(esi + 0x13cu); edx = (u32)(M32(m_)); }
  /* 0061a5e7 mov dword ptr [esi + 0xf4], ecx */ { const u32 m_ = (u32)(esi + 0xf4u); M32(m_) = (u32)(ecx); }
  /* 0061a5ed mov ecx, dword ptr [esi + 0x118] */ { const u32 m_ = (u32)(esi + 0x118u); ecx = (u32)(M32(m_)); }
  /* 0061a5f3 mov eax, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); eax = (u32)(M32(m_)); }
  /* 0061a5f6 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a5f8 div dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, M32(m_), &q_, &r_, 0x61a5f8u); eax = q_; edx = r_; }
  /* 0061a5fb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061a5fd push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0061a5ff mov dword ptr [esi + 0x100], eax */ { const u32 m_ = (u32)(esi + 0x100u); M32(m_) = (u32)(eax); }
  /* 0061a605 mov edx, dword ptr [esi + 0x100] */ { const u32 m_ = (u32)(esi + 0x100u); edx = (u32)(M32(m_)); }
  /* 0061a60b sub eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061a60d sub edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0061a60f mov dword ptr [esi + 0xf8], eax */ { const u32 m_ = (u32)(esi + 0xf8u); M32(m_) = (u32)(eax); }
  /* 0061a615 mov eax, dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); eax = (u32)(M32(m_)); }
  /* 0061a61b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a61c mov dword ptr [esi + 0xfc], edx */ { const u32 m_ = (u32)(esi + 0xfcu); M32(m_) = (u32)(edx); }
  /* 0061a622 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61a628u; SAVEALL; call_ind(c, t_); RETCHK(0x61a628u, 0x61a622u); LOADALL; }
  /* 0061a628 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a629 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a62a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0061a62b mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0061a630 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061a631 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061a632 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061a633:;
  /* 0061a633 mov ecx, dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); ecx = (u32)(M32(m_)); }
  /* 0061a639 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061a63b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0061a63d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061a63e call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61a644u; SAVEALL; call_ind(c, t_); RETCHK(0x61a644u, 0x61a63eu); LOADALL; }
  /* 0061a644 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a645 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a646 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0061a647 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061a649 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061a64a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061a64b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061a650(CPU *c) {
  NATIVE_HOOK(0x61a650u) REGS; LOADALL;
L_0061a650:;
  /* 0061a650 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061a651 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061a655 mov eax, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); eax = (u32)(M32(m_)); }
  /* 0061a65b test ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0061a65d jns 0x61a7b0 */ if (!SF_) goto L_0061a7b0;
  /* 0061a663 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0061a664 lea eax, [esi + 0x8c] */ eax = (u32)((u32)(esi + 0x8cu));
  /* 0061a66a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061a66b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a66c call 0x61aea0 */ esp -= 4; M32(esp) = 0x61a671u; SAVEALL; F_0061aea0(c); ABI_CHECK(0x61aea0u, 0x61a66cu); RETCHK(0x61a671u, 0x61a66cu); LOADALL;
  /* 0061a671 lea ecx, [esi + 0x28] */ ecx = (u32)((u32)(esi + 0x28u));
  /* 0061a674 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061a675 call 0x5f1eb0 */ esp -= 4; M32(esp) = 0x61a67au; SAVEALL; F_005f1eb0(c); ABI_CHECK(0x5f1eb0u, 0x61a675u); RETCHK(0x61a67au, 0x61a675u); LOADALL;
  /* 0061a67a mov edx, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); edx = (u32)(M32(m_)); }
  /* 0061a680 mov eax, dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); eax = (u32)(M32(m_)); }
  /* 0061a686 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a689 and edx, 0xffffffd7 */ { u32 a_ = edx, b_ = 0xffffffd7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a68c mov dword ptr [esi + 0x188], edx */ { const u32 m_ = (u32)(esi + 0x188u); M32(m_) = (u32)(edx); }
  /* 0061a692 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0061a694 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a695 call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61a69bu; SAVEALL; call_ind(c, t_); RETCHK(0x61a69bu, 0x61a695u); LOADALL; }
  /* 0061a69b mov ecx, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); ecx = (u32)(M32(m_)); }
  /* 0061a6a1 mov eax, dword ptr [esi + 0x148] */ { const u32 m_ = (u32)(esi + 0x148u); eax = (u32)(M32(m_)); }
  /* 0061a6a7 or ch, 0x20 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 0061a6aa mov dl, 8 */ { edx = (edx & 0xffffff00u) | ((u32)(0x8u) & 0xffu); }
  /* 0061a6ac mov dword ptr [esi + 0x188], ecx */ { const u32 m_ = (u32)(esi + 0x188u); M32(m_) = (u32)(ecx); }
  /* 0061a6b2 mov ecx, dword ptr [esi + 0x150] */ { const u32 m_ = (u32)(esi + 0x150u); ecx = (u32)(M32(m_)); }
  /* 0061a6b8 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0061a6ba mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 0061a6bf lea ecx, [ecx + ecx*4] */ ecx = (u32)((u32)(ecx + ecx * 4u));
  /* 0061a6c2 test byte ptr [eax + ecx*4 + 0x10], dl */ { const u32 m_ = (u32)(eax + ecx * 4u + 0x10u); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0061a6c6 je 0x61a70b */ if (ZF_) goto L_0061a70b;
L_0061a6c8:;
  /* 0061a6c8 mov ecx, dword ptr [esi + 0x150] */ { const u32 m_ = (u32)(esi + 0x150u); ecx = (u32)(M32(m_)); }
  /* 0061a6ce lea ecx, [ecx + ecx*4] */ ecx = (u32)((u32)(ecx + ecx * 4u));
  /* 0061a6d1 mov dword ptr [eax + ecx*4 + 0x10], edi */ { const u32 m_ = (u32)(eax + ecx * 4u + 0x10u); M32(m_) = (u32)(edi); }
  /* 0061a6d5 mov eax, dword ptr [esi + 0x150] */ { const u32 m_ = (u32)(esi + 0x150u); eax = (u32)(M32(m_)); }
  /* 0061a6db inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061a6dc mov dword ptr [esi + 0x150], eax */ { const u32 m_ = (u32)(esi + 0x150u); M32(m_) = (u32)(eax); }
  /* 0061a6e2 mov ecx, dword ptr [esi + 0x150] */ { const u32 m_ = (u32)(esi + 0x150u); ecx = (u32)(M32(m_)); }
  /* 0061a6e8 cmp ecx, dword ptr [esi + 0x164] */ { const u32 m_ = (u32)(esi + 0x164u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a6ee jne 0x61a6f6 */ if (!ZF_) goto L_0061a6f6;
  /* 0061a6f0 mov dword ptr [esi + 0x150], ebx */ { const u32 m_ = (u32)(esi + 0x150u); M32(m_) = (u32)(ebx); }
L_0061a6f6:;
  /* 0061a6f6 mov ecx, dword ptr [esi + 0x150] */ { const u32 m_ = (u32)(esi + 0x150u); ecx = (u32)(M32(m_)); }
  /* 0061a6fc mov eax, dword ptr [esi + 0x148] */ { const u32 m_ = (u32)(esi + 0x148u); eax = (u32)(M32(m_)); }
  /* 0061a702 lea ecx, [ecx + ecx*4] */ ecx = (u32)((u32)(ecx + ecx * 4u));
  /* 0061a705 test byte ptr [eax + ecx*4 + 0x10], dl */ { const u32 m_ = (u32)(eax + ecx * 4u + 0x10u); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0061a709 jne 0x61a6c8 */ if (!ZF_) goto L_0061a6c8;
L_0061a70b:;
  /* 0061a70b mov edx, dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); edx = (u32)(M32(m_)); }
  /* 0061a711 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0061a712 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061a713 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0061a714 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61a71au; SAVEALL; call_ind(c, t_); RETCHK(0x61a71au, 0x61a714u); LOADALL; }
L_0061a71a:;
  /* 0061a71a lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 0061a71e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a71f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061a720 call 0x61a090 */ esp -= 4; M32(esp) = 0x61a725u; SAVEALL; F_0061a090(c); ABI_CHECK(0x61a090u, 0x61a720u); RETCHK(0x61a725u, 0x61a720u); LOADALL;
  /* 0061a725 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a728 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a72a je 0x61a738 */ if (ZF_) goto L_0061a738;
  /* 0061a72c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a72d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061a72e call 0x61a250 */ esp -= 4; M32(esp) = 0x61a733u; SAVEALL; F_0061a250(c); ABI_CHECK(0x61a250u, 0x61a72eu); RETCHK(0x61a733u, 0x61a72eu); LOADALL;
  /* 0061a733 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a736 jmp 0x61a71a */ goto L_0061a71a;
L_0061a738:;
  /* 0061a738 test dword ptr [esi + 0x188], 0x10000 */ { const u32 m_ = (u32)(esi + 0x188u); u32 a_ = M32(m_), b_ = 0x10000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061a742 je 0x61a76a */ if (ZF_) goto L_0061a76a;
  /* 0061a744 mov ecx, dword ptr [esi + 0x164] */ { const u32 m_ = (u32)(esi + 0x164u); ecx = (u32)(M32(m_)); }
  /* 0061a74a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061a74c cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a74e jbe 0x61a76a */ if ((CF_|ZF_)) goto L_0061a76a;
  /* 0061a750 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_0061a752:;
  /* 0061a752 mov edx, dword ptr [esi + 0x148] */ { const u32 m_ = (u32)(esi + 0x148u); edx = (u32)(M32(m_)); }
  /* 0061a758 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061a759 mov dword ptr [edx + ecx + 0x10], edi */ { const u32 m_ = (u32)(edx + ecx + 0x10u); M32(m_) = (u32)(edi); }
  /* 0061a75d mov edx, dword ptr [esi + 0x164] */ { const u32 m_ = (u32)(esi + 0x164u); edx = (u32)(M32(m_)); }
  /* 0061a763 add ecx, 0x14 */ { u32 a_ = ecx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061a766 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a768 jb 0x61a752 */ if (CF_) goto L_0061a752;
L_0061a76a:;
  /* 0061a76a mov ecx, dword ptr [esi + 0x16c] */ { const u32 m_ = (u32)(esi + 0x16cu); ecx = (u32)(M32(m_)); }
  /* 0061a770 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a772 je 0x61a781 */ if (ZF_) goto L_0061a781;
  /* 0061a774 mov eax, dword ptr [esi + 0x174] */ { const u32 m_ = (u32)(esi + 0x174u); eax = (u32)(M32(m_)); }
  /* 0061a77a lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 0061a77d mov dword ptr [ecx + eax*4 + 0xc], ebx */ { const u32 m_ = (u32)(ecx + eax * 4u + 0xcu); M32(m_) = (u32)(ebx); }
L_0061a781:;
  /* 0061a781 mov dword ptr [esi + 0x154], ebx */ { const u32 m_ = (u32)(esi + 0x154u); M32(m_) = (u32)(ebx); }
  /* 0061a787 mov dword ptr [esi + 0x158], ebx */ { const u32 m_ = (u32)(esi + 0x158u); M32(m_) = (u32)(ebx); }
  /* 0061a78d mov dword ptr [esi + 0x150], ebx */ { const u32 m_ = (u32)(esi + 0x150u); M32(m_) = (u32)(ebx); }
  /* 0061a793 mov dword ptr [esi + 0x15c], ebx */ { const u32 m_ = (u32)(esi + 0x15cu); M32(m_) = (u32)(ebx); }
  /* 0061a799 mov ecx, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); ecx = (u32)(M32(m_)); }
  /* 0061a79f mov dword ptr [esi + 0x14c], ebx */ { const u32 m_ = (u32)(esi + 0x14cu); M32(m_) = (u32)(ebx); }
  /* 0061a7a5 and ch, 0xdf */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0xdfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 0061a7a8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a7a9 mov dword ptr [esi + 0x188], ecx */ { const u32 m_ = (u32)(esi + 0x188u); M32(m_) = (u32)(ecx); }
  /* 0061a7af pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0061a7b0:;
  /* 0061a7b0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a7b1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061a7c0(CPU *c) {
  NATIVE_HOOK(0x61a7c0u) REGS; LOADALL;
L_0061a7c0:;
  /* 0061a7c0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0061a7c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061a7c5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061a7c6 mov ecx, dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); ecx = (u32)(M32(m_)); }
  /* 0061a7cc mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0061a7d0 lea edx, [eax + eax*4] */ edx = (u32)((u32)(eax + eax * 4u));
  /* 0061a7d3 mov eax, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); eax = (u32)(M32(m_)); }
  /* 0061a7d6 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0061a7d8 mov cx, word ptr [eax + edx*8 + 0x1a] */ { const u32 m_ = (u32)(eax + edx * 8u + 0x1au); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061a7dd lea edi, [eax + edx*8] */ edi = (u32)((u32)(eax + edx * 8u));
  /* 0061a7e0 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a7e2 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0061a7e5 div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x61a7e5u); eax = q_; edx = r_; }
  /* 0061a7e7 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0061a7eb lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 0061a7ef push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0061a7f0 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 0061a7f4 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0061a7f7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0061a7f8 imul eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0061a7fc imul esi, eax */ { s64 p_ = (s64)(s32)esi * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0061a7ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a800 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061a803 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a804 call 0x5f23a0 */ esp -= 4; M32(esp) = 0x61a809u; SAVEALL; F_005f23a0(c); ABI_CHECK(0x5f23a0u, 0x61a804u); RETCHK(0x61a809u, 0x61a804u); LOADALL;
  /* 0061a809 mov edi, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); edi = (u32)(M32(m_)); }
  /* 0061a80c mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0061a810 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a813 add esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061a815 test byte ptr [edi + 0x18], 4 */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0061a819 je 0x61a829 */ if (ZF_) goto L_0061a829;
  /* 0061a81b mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0061a820 mov eax, esi */ { eax = (u32)(esi); }
  /* 0061a822 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a824 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a825 div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x61a825u); eax = q_; edx = r_; }
  /* 0061a827 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a828 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061a829:;
  /* 0061a829 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0061a82b mov eax, esi */ { eax = (u32)(esi); }
  /* 0061a82d mov cl, byte ptr [edi + 0xd] */ { const u32 m_ = (u32)(edi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061a830 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061a832 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a833 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a834 div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x61a834u); eax = q_; edx = r_; }
  /* 0061a836 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061a840(CPU *c) {
  NATIVE_HOOK(0x61a840u) REGS; LOADALL;
L_0061a840:;
  /* 0061a840 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0061a841 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0061a842 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061a843 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0061a847 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061a848 cmp dword ptr [esi + 0x50], 3 */ { const u32 m_ = (u32)(esi + 0x50u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a84c je 0x61a950 */ if (ZF_) goto L_0061a950;
  /* 0061a852 mov eax, dword ptr [esi + 0x9c] */ { const u32 m_ = (u32)(esi + 0x9cu); eax = (u32)(M32(m_)); }
  /* 0061a858 mov ebx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebx = (u32)(M32(m_)); }
  /* 0061a85c mov edx, dword ptr [esi + 0x98] */ { const u32 m_ = (u32)(esi + 0x98u); edx = (u32)(M32(m_)); }
  /* 0061a862 mov ecx, dword ptr [eax + ebx*4] */ { const u32 m_ = (u32)(eax + ebx * 4u); ecx = (u32)(M32(m_)); }
  /* 0061a865 lea edi, [eax + ebx*4] */ edi = (u32)((u32)(eax + ebx * 4u));
  /* 0061a868 cmp dword ptr [edx + ecx*4], 0 */ { const u32 m_ = (u32)(edx + ecx * 4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a86c jne 0x61a8b1 */ if (!ZF_) goto L_0061a8b1;
  /* 0061a86e lea eax, [esi + 0x38] */ eax = (u32)((u32)(esi + 0x38u));
  /* 0061a871 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a872 call 0x619c90 */ esp -= 4; M32(esp) = 0x61a877u; SAVEALL; F_00619c90(c); ABI_CHECK(0x619c90u, 0x61a872u); RETCHK(0x61a877u, 0x61a872u); LOADALL;
  /* 0061a877 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 0061a879 mov edx, dword ptr [esi + 0x98] */ { const u32 m_ = (u32)(esi + 0x98u); edx = (u32)(M32(m_)); }
  /* 0061a87f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a882 mov dword ptr [edx + ecx*4], eax */ { const u32 m_ = (u32)(edx + ecx * 4u); M32(m_) = (u32)(eax); }
  /* 0061a885 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0061a887 mov ecx, dword ptr [esi + 0x98] */ { const u32 m_ = (u32)(esi + 0x98u); ecx = (u32)(M32(m_)); }
  /* 0061a88d shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0061a890 cmp dword ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a894 je 0x61a946 */ if (ZF_) goto L_0061a946;
  /* 0061a89a mov edx, dword ptr [esi + 0x94] */ { const u32 m_ = (u32)(esi + 0x94u); edx = (u32)(M32(m_)); }
  /* 0061a8a0 mov dword ptr [eax + edx], 0xffffffff */ { const u32 m_ = (u32)(eax + edx); M32(m_) = (u32)(0xffffffffu); }
  /* 0061a8a7 mov dword ptr [esi + 0x90], 0 */ { const u32 m_ = (u32)(esi + 0x90u); M32(m_) = (u32)(0x0u); }
L_0061a8b1:;
  /* 0061a8b1 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0061a8b3 mov eax, dword ptr [esi + 0x94] */ { const u32 m_ = (u32)(esi + 0x94u); eax = (u32)(M32(m_)); }
  /* 0061a8b9 mov ebp, 1 */ { ebp = (u32)(0x1u); }
  /* 0061a8be mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0061a8c0 shl ebp, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 0061a8c2 test dword ptr [eax + edx*4], ebp */ { const u32 m_ = (u32)(eax + edx * 4u); u32 a_ = M32(m_), b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061a8c5 je 0x61a950 */ if (ZF_) goto L_0061a950;
  /* 0061a8cb mov eax, dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); eax = (u32)(M32(m_)); }
  /* 0061a8d1 imul eax, ebx */ { s64 p_ = (s64)(s32)eax * (s64)(s32)ebx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0061a8d4 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061a8d6 lea ecx, [eax + eax*4] */ ecx = (u32)((u32)(eax + eax * 4u));
  /* 0061a8d9 mov eax, dword ptr [esi + 0xa4] */ { const u32 m_ = (u32)(esi + 0xa4u); eax = (u32)(M32(m_)); }
  /* 0061a8df lea eax, [eax + ecx*4] */ eax = (u32)((u32)(eax + ecx * 4u));
  /* 0061a8e2 mov ecx, dword ptr [esi + 0x98] */ { const u32 m_ = (u32)(esi + 0x98u); ecx = (u32)(M32(m_)); }
  /* 0061a8e8 mov edx, dword ptr [ecx + edx*4] */ { const u32 m_ = (u32)(ecx + edx * 4u); edx = (u32)(M32(m_)); }
  /* 0061a8eb mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 0061a8ed mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0061a8ef mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0061a8f1 mov ecx, dword ptr [esi + 0x98] */ { const u32 m_ = (u32)(esi + 0x98u); ecx = (u32)(M32(m_)); }
  /* 0061a8f7 mov edx, dword ptr [ecx + edx*4] */ { const u32 m_ = (u32)(ecx + edx * 4u); edx = (u32)(M32(m_)); }
  /* 0061a8fa mov ecx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0061a8fd mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0061a900 mov edx, dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); edx = (u32)(M32(m_)); }
  /* 0061a903 lea ecx, [ebx + ebx*4] */ ecx = (u32)((u32)(ebx + ebx * 4u));
  /* 0061a906 shl ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0061a909 mov edx, dword ptr [edx + ecx + 0x20] */ { const u32 m_ = (u32)(edx + ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 0061a90d mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0061a910 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0061a912 mov ebx, dword ptr [esi + 0x98] */ { const u32 m_ = (u32)(esi + 0x98u); ebx = (u32)(M32(m_)); }
  /* 0061a918 mov edx, dword ptr [ebx + edx*4] */ { const u32 m_ = (u32)(ebx + edx * 4u); edx = (u32)(M32(m_)); }
  /* 0061a91b mov ebx, dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); ebx = (u32)(M32(m_)); }
  /* 0061a91e mov edx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0061a921 mov ebp, dword ptr [ebx + ecx + 0x24] */ { const u32 m_ = (u32)(ebx + ecx + 0x24u); ebp = (u32)(M32(m_)); }
  /* 0061a925 add edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0061a927 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0061a92a mov ebx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (u32)(M32(m_)); }
  /* 0061a92c inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061a92d mov dword ptr [edi], ebx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebx); }
  /* 0061a92f mov edx, dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); edx = (u32)(M32(m_)); }
  /* 0061a935 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0061a937 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061a939 jb 0x61a952 */ if (CF_) goto L_0061a952;
  /* 0061a93b mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
  /* 0061a941 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a942 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a943 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0061a944 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061a945 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061a946:;
  /* 0061a946 mov dword ptr [esi + 0x90], 1 */ { const u32 m_ = (u32)(esi + 0x90u); M32(m_) = (u32)(0x1u); }
L_0061a950:;
  /* 0061a950 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0061a952:;
  /* 0061a952 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061a953 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a954 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0061a955 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061a956 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061a960(CPU *c) {
  NATIVE_HOOK(0x61a960u) REGS; LOADALL;
L_0061a960:;
  /* 0061a960 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 0061a964 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061a968 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 0061a96c mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0061a970 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061a971 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061a973 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0061a974 call 0x619bf0 */ esp -= 4; M32(esp) = 0x61a979u; SAVEALL; F_00619bf0(c); ABI_CHECK(0x619bf0u, 0x61a974u); RETCHK(0x61a979u, 0x61a974u); LOADALL;
  /* 0061a979 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a97c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061a980(CPU *c) {
  NATIVE_HOOK(0x61a980u) REGS; LOADALL;
L_0061a980:;
  /* 0061a980 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0061a984 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061a985 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0061a989 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061a98a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061a98c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a98d call 0x619c60 */ esp -= 4; M32(esp) = 0x61a992u; SAVEALL; F_00619c60(c); ABI_CHECK(0x619c60u, 0x61a98du); RETCHK(0x61a992u, 0x61a98du); LOADALL;
  /* 0061a992 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0061a995 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0061a997 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a99a mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0061a99d mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0061a9a0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a9a1 mov dword ptr [eax + 4], 0x61a840 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x61a840u); }
  /* 0061a9a8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061a9b0(CPU *c) {
  NATIVE_HOOK(0x61a9b0u) REGS; LOADALL;
  goto L_0061a9b0;
L_00619bb0:;
  /* 00619bb0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00619bb4 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 00619bb8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00619bb9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00619bbb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00619bbc call 0x619bd0 */ esp -= 4; M32(esp) = 0x619bc1u; SAVEALL; F_00619bd0(c); ABI_CHECK(0x619bd0u, 0x619bbcu); RETCHK(0x619bc1u, 0x619bbcu); LOADALL;
  /* 00619bc1 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00619bc5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00619bc8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061a9b0:;
  /* 0061a9b0 jmp 0x619bb0 */ goto L_00619bb0;
}

void F_0061a9c0(CPU *c) {
  NATIVE_HOOK(0x61a9c0u) REGS; LOADALL;
L_0061a9c0:;
  /* 0061a9c0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061a9c4 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0061a9c8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061a9c9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061a9cb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061a9cc call 0x619c80 */ esp -= 4; M32(esp) = 0x61a9d1u; SAVEALL; F_00619c80(c); ABI_CHECK(0x619c80u, 0x61a9ccu); RETCHK(0x61a9d1u, 0x61a9ccu); LOADALL;
  /* 0061a9d1 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a9d4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061a9e0(CPU *c) {
  NATIVE_HOOK(0x61a9e0u) REGS; LOADALL;
L_0061a9e0:;
  /* 0061a9e0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061a9e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061a9e5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061a9e9 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0061a9eb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061a9ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061a9ed call 0x61a960 */ esp -= 4; M32(esp) = 0x61a9f2u; SAVEALL; F_0061a960(c); ABI_CHECK(0x61a960u, 0x61a9edu); RETCHK(0x61a9f2u, 0x61a9edu); LOADALL;
  /* 0061a9f2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061a9f5 mov eax, esi */ { eax = (u32)(esi); }
  /* 0061a9f7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061a9f8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061aa00(CPU *c) {
  NATIVE_HOOK(0x61aa00u) REGS; LOADALL;
L_0061aa00:;
  /* 0061aa00 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061aa04 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061aa05 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061aa09 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061aa0a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061aa0b call 0x61a980 */ esp -= 4; M32(esp) = 0x61aa10u; SAVEALL; F_0061a980(c); ABI_CHECK(0x61a980u, 0x61aa0bu); RETCHK(0x61aa10u, 0x61aa0bu); LOADALL;
  /* 0061aa10 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061aa13 mov eax, esi */ { eax = (u32)(esi); }
  /* 0061aa15 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061aa16 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061aa20(CPU *c) {
  NATIVE_HOOK(0x61aa20u) REGS; LOADALL;
L_0061aa20:;
  /* 0061aa20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061aa21 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061aa25 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061aa26 call 0x61a9b0 */ esp -= 4; M32(esp) = 0x61aa2bu; SAVEALL; F_0061a9b0(c); ABI_CHECK(0x61a9b0u, 0x61aa26u); RETCHK(0x61aa2bu, 0x61aa26u); LOADALL;
  /* 0061aa2b mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0061aa2f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061aa32 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0061aa34 mov eax, esi */ { eax = (u32)(esi); }
  /* 0061aa36 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061aa37 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061aa40(CPU *c) {
  NATIVE_HOOK(0x61aa40u) REGS; LOADALL;
L_0061aa40:;
  /* 0061aa40 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061aa44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061aa45 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061aa49 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061aa4a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061aa4b call 0x61a9c0 */ esp -= 4; M32(esp) = 0x61aa50u; SAVEALL; F_0061a9c0(c); ABI_CHECK(0x61a9c0u, 0x61aa4bu); RETCHK(0x61aa50u, 0x61aa4bu); LOADALL;
  /* 0061aa50 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061aa53 mov eax, esi */ { eax = (u32)(esi); }
  /* 0061aa55 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061aa56 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061aa60(CPU *c) {
  NATIVE_HOOK(0x61aa60u) REGS; LOADALL;
L_0061aa60:;
  /* 0061aa60 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0061aa61 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061aa62 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0061aa66 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061aa67 mov al, byte ptr [esi + 0x1f9] */ { const u32 m_ = (u32)(esi + 0x1f9u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061aa6d mov cl, byte ptr [esi + 0x1fb] */ { const u32 m_ = (u32)(esi + 0x1fbu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061aa73 cmp al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0061aa75 lea edi, [esi + 0x5c] */ edi = (u32)((u32)(esi + 0x5cu));
  /* 0061aa78 je 0x61aaf9 */ if (ZF_) goto L_0061aaf9;
  /* 0061aa7a lea ecx, [esp + 0x10] */ ecx = (u32)((u32)(esp + 0x10u));
  /* 0061aa7e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061aa7f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061aa80 call 0x61a090 */ esp -= 4; M32(esp) = 0x61aa85u; SAVEALL; F_0061a090(c); ABI_CHECK(0x61a090u, 0x61aa80u); RETCHK(0x61aa85u, 0x61aa80u); LOADALL;
  /* 0061aa85 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0061aa87 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061aa8a test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061aa8c je 0x61aaf9 */ if (ZF_) goto L_0061aaf9;
  /* 0061aa8e add esi, 0x1f8 */ { u32 a_ = esi, b_ = 0x1f8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061aa94 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061aa95 call 0x619d10 */ esp -= 4; M32(esp) = 0x61aa9au; SAVEALL; F_00619d10(c); ABI_CHECK(0x619d10u, 0x61aa95u); RETCHK(0x61aa9au, 0x61aa95u); LOADALL;
  /* 0061aa9a mov esi, eax */ { esi = (u32)(eax); }
  /* 0061aa9c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061aa9e mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0061aaa1 mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0061aaa4 mov dword ptr [edx + 0xc], 2 */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(0x2u); }
  /* 0061aaab mov eax, dword ptr [edi + 0x118] */ { const u32 m_ = (u32)(edi + 0x118u); eax = (u32)(M32(m_)); }
  /* 0061aab1 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0061aab5 mov ebx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0061aab8 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061aabb mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0061aabd sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0061aabf shr edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0061aac2 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0061aac4 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0061aac8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061aac9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061aaca call 0x61a7c0 */ esp -= 4; M32(esp) = 0x61aacfu; SAVEALL; F_0061a7c0(c); ABI_CHECK(0x61a7c0u, 0x61aacau); RETCHK(0x61aacfu, 0x61aacau); LOADALL;
  /* 0061aacf mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0061aad2 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061aad5 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0061aad8 mov eax, dword ptr [edi + 0xfc] */ { const u32 m_ = (u32)(edi + 0xfcu); eax = (u32)(M32(m_)); }
  /* 0061aade test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061aae0 jne 0x61aaf3 */ if (!ZF_) goto L_0061aaf3;
  /* 0061aae2 mov eax, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); eax = (u32)(M32(m_)); }
  /* 0061aae8 test ah, 0x40 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0061aaeb jne 0x61aaf3 */ if (!ZF_) goto L_0061aaf3;
  /* 0061aaed mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0061aaef or al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0061aaf1 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
L_0061aaf3:;
  /* 0061aaf3 mov eax, esi */ { eax = (u32)(esi); }
  /* 0061aaf5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061aaf6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061aaf7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061aaf8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061aaf9:;
  /* 0061aaf9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061aafa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061aafb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061aafd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061aafe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ab00(CPU *c) {
  NATIVE_HOOK(0x61ab00u) REGS; LOADALL;
L_0061ab00:;
  /* 0061ab00 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0061ab04 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061ab07 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0061ab08 mov ebx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebx = (u32)(M32(m_)); }
  /* 0061ab0c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061ab0d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061ab0e lea edi, [eax + 0x5c] */ edi = (u32)((u32)(eax + 0x5cu));
  /* 0061ab11 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0061ab14 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061ab16 je 0x61ab21 */ if (ZF_) goto L_0061ab21;
  /* 0061ab18 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061ab19 call 0x61a650 */ esp -= 4; M32(esp) = 0x61ab1eu; SAVEALL; F_0061a650(c); ABI_CHECK(0x61a650u, 0x61ab19u); RETCHK(0x61ab1eu, 0x61ab19u); LOADALL;
  /* 0061ab1e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0061ab21:;
  /* 0061ab21 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0061ab23 mov ecx, dword ptr [edi + 0x118] */ { const u32 m_ = (u32)(edi + 0x118u); ecx = (u32)(M32(m_)); }
  /* 0061ab29 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0061ab2c mov ecx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0061ab2f cmp edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061ab32 jne 0x61ab85 */ if (!ZF_) goto L_0061ab85;
  /* 0061ab34 mov edx, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061ab37 mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0061ab3f mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 0061ab41 mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0061ab45 fild qword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s64)M64(m_)); }
  /* 0061ab49 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0061ab4c fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0061ab50 fnstcw word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); M16(m_) = (u16)c->fcw; }
  /* 0061ab54 fld dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0061ab58 mov ax, word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061ab5d or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 0061ab60 mov word ptr [esp + 0x1c], ax */ { const u32 m_ = (u32)(esp + 0x1cu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0061ab65 fldcw word ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 0061ab69 fistp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0061ab6d fldcw word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 0061ab71 mov esi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); esi = (u32)(M32(m_)); }
  /* 0061ab74 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0061ab78 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061ab7a lea eax, [esi + eax - 1] */ eax = (u32)((u32)(esi + eax + 0xffffffffu));
  /* 0061ab7e div esi */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, esi, &q_, &r_, 0x61ab7eu); eax = q_; edx = r_; }
  /* 0061ab80 imul eax, esi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)esi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0061ab83 jmp 0x61ab88 */ goto L_0061ab88;
L_0061ab85:;
  /* 0061ab85 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
L_0061ab88:;
  /* 0061ab88 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061ab8a div dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, M32(m_), &q_, &r_, 0x61ab8au); eax = q_; edx = r_; }
  /* 0061ab8d mov edx, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061ab90 mov esi, eax */ { esi = (u32)(eax); }
  /* 0061ab92 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061ab94 mov al, byte ptr [edx + 0xd] */ { const u32 m_ = (u32)(edx + 0xdu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0061ab97 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061ab99 imul esi, eax */ { s64 p_ = (s64)(s32)esi * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0061ab9c mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0061ab9e mov dx, word ptr [ecx + 0x1a] */ { const u32 m_ = (u32)(ecx + 0x1au); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061aba2 imul esi, edx */ { s64 p_ = (s64)(s32)esi * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0061aba5 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0061aba8 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0061aba9 je 0x61abe5 */ if (ZF_) goto L_0061abe5;
  /* 0061abab dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0061abac je 0x61abda */ if (ZF_) goto L_0061abda;
  /* 0061abae dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0061abaf jne 0x61abf1 */ if (!ZF_) goto L_0061abf1;
  /* 0061abb1 mov ecx, dword ptr [edi + 0x118] */ { const u32 m_ = (u32)(edi + 0x118u); ecx = (u32)(M32(m_)); }
  /* 0061abb7 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0061abb9 shl edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0061abbc mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0061abbf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061abc0 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0061abc2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061abc4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061abc5 mov dword ptr [edi + 0x140], edx */ { const u32 m_ = (u32)(edi + 0x140u); M32(m_) = (u32)(edx); }
  /* 0061abcb call 0x61a430 */ esp -= 4; M32(esp) = 0x61abd0u; SAVEALL; F_0061a430(c); ABI_CHECK(0x61a430u, 0x61abcbu); RETCHK(0x61abd0u, 0x61abcbu); LOADALL;
  /* 0061abd0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061abd3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061abd4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061abd5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061abd6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061abd9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061abda:;
  /* 0061abda mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0061abdc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061abdd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061abde call 0x619f70 */ esp -= 4; M32(esp) = 0x61abe3u; SAVEALL; F_00619f70(c); ABI_CHECK(0x619f70u, 0x61abdeu); RETCHK(0x61abe3u, 0x61abdeu); LOADALL;
  /* 0061abe3 jmp 0x61abee */ goto L_0061abee;
L_0061abe5:;
  /* 0061abe5 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0061abe7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061abe8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061abe9 call 0x619fa0 */ esp -= 4; M32(esp) = 0x61abeeu; SAVEALL; F_00619fa0(c); ABI_CHECK(0x619fa0u, 0x61abe9u); RETCHK(0x61abeeu, 0x61abe9u); LOADALL;
L_0061abee:;
  /* 0061abee add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0061abf1:;
  /* 0061abf1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061abf2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061abf4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061abf5 call 0x61a430 */ esp -= 4; M32(esp) = 0x61abfau; SAVEALL; F_0061a430(c); ABI_CHECK(0x61a430u, 0x61abf5u); RETCHK(0x61abfau, 0x61abf5u); LOADALL;
  /* 0061abfa add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061abfd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061abfe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061abff pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061ac00 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061ac03 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ac10(CPU *c) {
  NATIVE_HOOK(0x61ac10u) REGS; LOADALL;
L_0061ac10:;
  /* 0061ac10 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0061ac14 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061ac15 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0061ac19 add eax, 0x5c */ { u32 a_ = eax, b_ = 0x5cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061ac1c mov ecx, dword ptr [eax + 0x150] */ { const u32 m_ = (u32)(eax + 0x150u); ecx = (u32)(M32(m_)); }
  /* 0061ac22 mov edx, dword ptr [eax + 0x148] */ { const u32 m_ = (u32)(eax + 0x148u); edx = (u32)(M32(m_)); }
  /* 0061ac28 lea ecx, [ecx + ecx*4] */ ecx = (u32)((u32)(ecx + ecx * 4u));
  /* 0061ac2b lea ecx, [edx + ecx*4] */ ecx = (u32)((u32)(edx + ecx * 4u));
  /* 0061ac2e mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0061ac31 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0061ac32 je 0x61ac5c */ if (ZF_) goto L_0061ac5c;
  /* 0061ac34 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0061ac35 je 0x61ac56 */ if (ZF_) goto L_0061ac56;
  /* 0061ac37 mov dword ptr [esi + 4], 3 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x3u); }
  /* 0061ac3e mov edx, dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); edx = (u32)(M32(m_)); }
  /* 0061ac44 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0061ac45 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061ac46 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 0061ac48 mov ebx, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0061ac4b sub edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0061ac4d shr edi, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0061ac50 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 0061ac52 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061ac53 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0061ac54 jmp 0x61ac63 */ goto L_0061ac63;
L_0061ac56:;
  /* 0061ac56 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0061ac58 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 0061ac5a jmp 0x61ac61 */ goto L_0061ac61;
L_0061ac5c:;
  /* 0061ac5c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0061ac5e mov edx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (u32)(M32(m_)); }
L_0061ac61:;
  /* 0061ac61 mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
L_0061ac63:;
  /* 0061ac63 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061ac65 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061ac66 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061ac67 mov dword ptr [esi + 0xc], 2 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x2u); }
  /* 0061ac6e call 0x61a7c0 */ esp -= 4; M32(esp) = 0x61ac73u; SAVEALL; F_0061a7c0(c); ABI_CHECK(0x61a7c0u, 0x61ac6eu); RETCHK(0x61ac73u, 0x61ac6eu); LOADALL;
  /* 0061ac73 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061ac76 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0061ac79 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061ac7a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ac80(CPU *c) {
  NATIVE_HOOK(0x61ac80u) REGS; LOADALL;
L_0061ac80:;
  /* 0061ac80 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061ac84 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061ac86 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0061ac8a je 0x61ac9c */ if (ZF_) goto L_0061ac9c;
  /* 0061ac8c mov ecx, dword ptr [eax + 0x1e4] */ { const u32 m_ = (u32)(eax + 0x1e4u); ecx = (u32)(M32(m_)); }
  /* 0061ac92 or ch, 0x40 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 0061ac95 mov dword ptr [eax + 0x1e4], ecx */ { const u32 m_ = (u32)(eax + 0x1e4u); M32(m_) = (u32)(ecx); }
  /* 0061ac9b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061ac9c:;
  /* 0061ac9c mov edx, dword ptr [eax + 0x1e4] */ { const u32 m_ = (u32)(eax + 0x1e4u); edx = (u32)(M32(m_)); }
  /* 0061aca2 and dh, 0xbf */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = 0xbfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 0061aca5 mov dword ptr [eax + 0x1e4], edx */ { const u32 m_ = (u32)(eax + 0x1e4u); M32(m_) = (u32)(edx); }
  /* 0061acab ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061acb0(CPU *c) {
  NATIVE_HOOK(0x61acb0u) REGS; LOADALL;
L_0061acb0:;
  /* 0061acb0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0061acb4 mov eax, dword ptr [eax + 0x1e4] */ { const u32 m_ = (u32)(eax + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 0061acba and eax, 0x4000 */ { u32 a_ = eax, b_ = 0x4000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061acbf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061acc0(CPU *c) {
  NATIVE_HOOK(0x61acc0u) REGS; LOADALL;
L_0061acc0:;
  /* 0061acc0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0061acc4 mov eax, dword ptr [eax + 0x174] */ { const u32 m_ = (u32)(eax + 0x174u); eax = (u32)(M32(m_)); }
  /* 0061acca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061acd0(CPU *c) {
  NATIVE_HOOK(0x61acd0u) REGS; LOADALL;
L_0061acd0:;
  /* 0061acd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061acd1 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0061acd5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061acd6 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0061acda push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061acdb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061acdd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0061acde call 0x619c60 */ esp -= 4; M32(esp) = 0x61ace3u; SAVEALL; F_00619c60(c); ABI_CHECK(0x619c60u, 0x61acdeu); RETCHK(0x61ace3u, 0x61acdeu); LOADALL;
  /* 0061ace3 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0061ace6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061ace9 mov dword ptr [eax + 4], 0x61aa60 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x61aa60u); }
  /* 0061acf0 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0061acf3 mov dword ptr [ecx + 8], edi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edi); }
  /* 0061acf6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0061acf7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061acf8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ad00(CPU *c) {
  NATIVE_HOOK(0x61ad00u) REGS; LOADALL;
L_0061ad00:;
  /* 0061ad00 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061ad04 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061ad06 je 0x61ad16 */ if (ZF_) goto L_0061ad16;
  /* 0061ad08 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0061ad0c add eax, 0x5c */ { u32 a_ = eax, b_ = 0x5cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061ad0f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061ad10 call 0x61a650 */ esp -= 4; M32(esp) = 0x61ad15u; SAVEALL; F_0061a650(c); ABI_CHECK(0x61a650u, 0x61ad10u); RETCHK(0x61ad15u, 0x61ad10u); LOADALL;
  /* 0061ad15 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_0061ad16:;
  /* 0061ad16 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ad20(CPU *c) {
  NATIVE_HOOK(0x61ad20u) REGS; LOADALL;
L_0061ad20:;
  /* 0061ad20 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061ad24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061ad25 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ad29 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061ad2a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061ad2b call 0x61ab00 */ esp -= 4; M32(esp) = 0x61ad30u; SAVEALL; F_0061ab00(c); ABI_CHECK(0x61ab00u, 0x61ad2bu); RETCHK(0x61ad30u, 0x61ad2bu); LOADALL;
  /* 0061ad30 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061ad33 mov eax, esi */ { eax = (u32)(esi); }
  /* 0061ad35 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061ad36 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ad40(CPU *c) {
  NATIVE_HOOK(0x61ad40u) REGS; LOADALL;
L_0061ad40:;
  /* 0061ad40 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061ad44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061ad45 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ad49 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061ad4a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061ad4b call 0x61ac10 */ esp -= 4; M32(esp) = 0x61ad50u; SAVEALL; F_0061ac10(c); ABI_CHECK(0x61ac10u, 0x61ad4bu); RETCHK(0x61ad50u, 0x61ad4bu); LOADALL;
  /* 0061ad50 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061ad53 mov eax, esi */ { eax = (u32)(esi); }
  /* 0061ad55 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061ad56 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ad60(CPU *c) {
  NATIVE_HOOK(0x61ad60u) REGS; LOADALL;
L_0061ad60:;
  /* 0061ad60 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061ad64 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061ad65 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ad69 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0061ad6b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061ad6c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061ad6d call 0x61ac80 */ esp -= 4; M32(esp) = 0x61ad72u; SAVEALL; F_0061ac80(c); ABI_CHECK(0x61ac80u, 0x61ad6du); RETCHK(0x61ad72u, 0x61ad6du); LOADALL;
  /* 0061ad72 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061ad75 mov eax, esi */ { eax = (u32)(esi); }
  /* 0061ad77 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061ad78 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ad80(CPU *c) {
  NATIVE_HOOK(0x61ad80u) REGS; LOADALL;
L_0061ad80:;
  /* 0061ad80 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0061ad84 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061ad85 call 0x61acb0 */ esp -= 4; M32(esp) = 0x61ad8au; SAVEALL; F_0061acb0(c); ABI_CHECK(0x61acb0u, 0x61ad85u); RETCHK(0x61ad8au, 0x61ad85u); LOADALL;
  /* 0061ad8a mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0061ad8e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061ad91 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0061ad93 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0061ad95 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ada0(CPU *c) {
  NATIVE_HOOK(0x61ada0u) REGS; LOADALL;
L_0061ada0:;
  /* 0061ada0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0061ada4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061ada5 call 0x61acc0 */ esp -= 4; M32(esp) = 0x61adaau; SAVEALL; F_0061acc0(c); ABI_CHECK(0x61acc0u, 0x61ada5u); RETCHK(0x61adaau, 0x61ada5u); LOADALL;
  /* 0061adaa mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0061adae add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061adb1 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0061adb3 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0061adb5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061adc0(CPU *c) {
  NATIVE_HOOK(0x61adc0u) REGS; LOADALL;
L_0061adc0:;
  /* 0061adc0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061adc4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061adc5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061adc9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061adca push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061adcb call 0x61acd0 */ esp -= 4; M32(esp) = 0x61add0u; SAVEALL; F_0061acd0(c); ABI_CHECK(0x61acd0u, 0x61adcbu); RETCHK(0x61add0u, 0x61adcbu); LOADALL;
  /* 0061add0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061add3 mov eax, esi */ { eax = (u32)(esi); }
  /* 0061add5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061add6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ade0(CPU *c) {
  NATIVE_HOOK(0x61ade0u) REGS; LOADALL;
L_0061ade0:;
  /* 0061ade0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061ade4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061ade5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ade9 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0061adeb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061adec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061aded call 0x61ad00 */ esp -= 4; M32(esp) = 0x61adf2u; SAVEALL; F_0061ad00(c); ABI_CHECK(0x61ad00u, 0x61adedu); RETCHK(0x61adf2u, 0x61adedu); LOADALL;
  /* 0061adf2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061adf5 mov eax, esi */ { eax = (u32)(esi); }
  /* 0061adf7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061adf8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ae00(CPU *c) {
  NATIVE_HOOK(0x61ae00u) REGS; LOADALL;
L_0061ae00:;
  /* 0061ae00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061ae01 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ae05 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0061ae07 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061ae0a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061ae0b call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61ae11u; SAVEALL; call_ind(c, t_); RETCHK(0x61ae11u, 0x61ae0bu); LOADALL; }
  /* 0061ae11 mov ax, word ptr [esi + 6] */ { const u32 m_ = (u32)(esi + 0x6u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061ae15 cmp ax, word ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = (eax & 0xffffu), b_ = M16(m_); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0061ae19 jne 0x61ae34 */ if (!ZF_) goto L_0061ae34;
  /* 0061ae1b cmp word ptr [esi + 0xa], 0 */ { const u32 m_ = (u32)(esi + 0xau); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0061ae20 je 0x61ae34 */ if (ZF_) goto L_0061ae34;
  /* 0061ae22 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0061ae25 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061ae27 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0061ae29 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061ae2a call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61ae30u; SAVEALL; call_ind(c, t_); RETCHK(0x61ae30u, 0x61ae2au); LOADALL; }
  /* 0061ae30 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061ae32 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061ae33 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061ae34:;
  /* 0061ae34 and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061ae39 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0061ae3d lea edx, [eax + eax*4] */ edx = (u32)((u32)(eax + eax * 4u));
  /* 0061ae40 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0061ae42 lea eax, [eax + edx*4] */ eax = (u32)((u32)(eax + edx * 4u));
  /* 0061ae45 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0061ae49 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0061ae4c mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0061ae50 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0061ae53 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061ae57 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0061ae5a mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0061ae5e mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
  /* 0061ae61 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0061ae63 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061ae65 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0061ae67 mov ax, word ptr [esi + 6] */ { const u32 m_ = (u32)(esi + 0x6u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061ae6b mov dx, word ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061ae6f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061ae70 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061ae72 jne 0x61ae76 */ if (!ZF_) goto L_0061ae76;
  /* 0061ae74 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0061ae76:;
  /* 0061ae76 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0061ae78 mov cx, word ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061ae7c cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061ae7e jne 0x61ae86 */ if (!ZF_) goto L_0061ae86;
  /* 0061ae80 mov word ptr [esi + 0xa], 1 */ { const u32 m_ = (u32)(esi + 0xau); M16(m_) = (u16)(0x1u); }
L_0061ae86:;
  /* 0061ae86 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0061ae89 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061ae8b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0061ae8d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0061ae8e mov word ptr [esi + 6], ax */ { const u32 m_ = (u32)(esi + 0x6u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0061ae92 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61ae98u; SAVEALL; call_ind(c, t_); RETCHK(0x61ae98u, 0x61ae92u); LOADALL; }
  /* 0061ae98 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0061ae9d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061ae9e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061aea0(CPU *c) {
  NATIVE_HOOK(0x61aea0u) REGS; LOADALL;
L_0061aea0:;
  /* 0061aea0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061aea1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061aea5 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0061aea7 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061aeaa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061aeab call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61aeb1u; SAVEALL; call_ind(c, t_); RETCHK(0x61aeb1u, 0x61aeabu); LOADALL; }
  /* 0061aeb1 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0061aeb4 mov cx, word ptr [esi + 6] */ { const u32 m_ = (u32)(esi + 0x6u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0061aeb8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061aeba push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0061aebc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0061aebd mov word ptr [esi + 8], cx */ { const u32 m_ = (u32)(esi + 0x8u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 0061aec1 mov word ptr [esi + 0xa], 0 */ { const u32 m_ = (u32)(esi + 0xau); M16(m_) = (u16)(0x0u); }
  /* 0061aec7 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61aecdu; SAVEALL; call_ind(c, t_); RETCHK(0x61aecdu, 0x61aec7u); LOADALL; }
  /* 0061aecd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0061aece ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
