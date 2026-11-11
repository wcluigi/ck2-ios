#include "funcs.h"

void F_1040914d(CPU *c) {
  NATIVE_HOOK(0x1040914du) REGS; LOADALL;
L_1040914d:;
  /* 1040914d call 0x10406575 */ esp -= 4; M32(esp) = 0x10409152u; SAVEALL; F_10406575(c); ABI_CHECK(0x10406575u, 0x1040914du); RETCHK(0x10409152u, 0x1040914du); LOADALL;
  /* 10409152 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409153(CPU *c) {
  NATIVE_HOOK(0x10409153u) REGS; LOADALL;
L_10409153:;
  /* 10409153 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409157 call 0x1040911b */ esp -= 4; M32(esp) = 0x1040915cu; SAVEALL; F_1040911b(c); ABI_CHECK(0x1040911bu, 0x10409157u); RETCHK(0x1040915cu, 0x10409157u); LOADALL;
  /* 1040915c neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 1040915e sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10409160 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10409162 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10409163 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10409164 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409170(CPU *c) {
  NATIVE_HOOK(0x10409170u) REGS; LOADALL;
L_10409170:;
  /* 10409170 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10409174 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10409178 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040917a je 0x104091cb */ if (ZF_) goto L_104091cb;
  /* 1040917c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040917e mov al, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409182 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409183 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10409185 cmp edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409188 jb 0x104091bb */ if (CF_) goto L_104091bb;
  /* 1040918a neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 1040918c and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 1040918f je 0x1040919d */ if (ZF_) goto L_1040919d;
  /* 10409191 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
L_10409193:;
  /* 10409193 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409195 add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10409198 sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1040919b jne 0x10409193 */ if (!ZF_) goto L_10409193;
L_1040919d:;
  /* 1040919d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 1040919f shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 104091a2 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 104091a4 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 104091a6 shl eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 104091a9 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 104091ab mov ecx, edx */ { ecx = (u32)(edx); }
  /* 104091ad and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 104091b0 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 104091b3 je 0x104091bb */ if (ZF_) goto L_104091bb;
  /* 104091b5 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 104091b7 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104091b9 je 0x104091c5 */ if (ZF_) goto L_104091c5;
L_104091bb:;
  /* 104091bb mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104091bd add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104091c0 sub edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 104091c3 jne 0x104091bb */ if (!ZF_) goto L_104091bb;
L_104091c5:;
  /* 104091c5 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104091c9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104091ca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104091cb:;
  /* 104091cb mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 104091cf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104091d0(CPU *c) {
  NATIVE_HOOK(0x104091d0u) REGS; LOADALL;
L_104091d0:;
  /* 104091d0 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104091d4 call dword ptr [0x1040b0cc] */ { const u32 m_ = (u32)(0x1040b0ccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104091dau; SAVEALL; call_ind(c, t_); RETCHK(0x104091dau, 0x104091d4u); LOADALL; }
  /* 104091da xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104091dc inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104091dd ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_104091e0(CPU *c) {
  NATIVE_HOOK(0x104091e0u) REGS; LOADALL;
L_104091e0:;
  /* 104091e0 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 104091e2 push 0x1040baf8 */ { u32 v_ = 0x1040baf8u; esp -= 4; M32(esp) = v_; }
  /* 104091e7 call 0x104056c0 */ esp -= 4; M32(esp) = 0x104091ecu; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x104091e7u); RETCHK(0x104091ecu, 0x104091e7u); LOADALL;
  /* 104091ec mov eax, dword ptr [0x1040dc78] */ { const u32 m_ = (u32)(0x1040dc78u); eax = (u32)(M32(m_)); }
  /* 104091f1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104091f3 jne 0x1040922c */ if (!ZF_) goto L_1040922c;
  /* 104091f5 cmp dword ptr [0x1040d950], 1 */ { const u32 m_ = (u32)(0x1040d950u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104091fc je 0x10409222 */ if (ZF_) goto L_10409222;
  /* 104091fe push 0x1040b454 */ { u32 v_ = 0x1040b454u; esp -= 4; M32(esp) = v_; }
  /* 10409203 call dword ptr [0x1040b050] */ { const u32 m_ = (u32)(0x1040b050u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409209u; SAVEALL; call_ind(c, t_); RETCHK(0x10409209u, 0x10409203u); LOADALL; }
  /* 10409209 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040920b je 0x10409222 */ if (ZF_) goto L_10409222;
  /* 1040920d push 0x1040bacc */ { u32 v_ = 0x1040baccu; esp -= 4; M32(esp) = v_; }
  /* 10409212 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409213 call dword ptr [0x1040b04c] */ { const u32 m_ = (u32)(0x1040b04cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409219u; SAVEALL; call_ind(c, t_); RETCHK(0x10409219u, 0x10409213u); LOADALL; }
  /* 10409219 mov dword ptr [0x1040dc78], eax */ { const u32 m_ = (u32)(0x1040dc78u); M32(m_) = (u32)(eax); }
  /* 1040921e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10409220 jne 0x1040922c */ if (!ZF_) goto L_1040922c;
L_10409222:;
  /* 10409222 mov eax, 0x104091d0 */ { eax = (u32)(0x104091d0u); }
  /* 10409227 mov dword ptr [0x1040dc78], eax */ { const u32 m_ = (u32)(0x1040dc78u); M32(m_) = (u32)(eax); }
L_1040922c:;
  /* 1040922c and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10409230 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409233 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409236 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10409238u; SAVEALL; call_ind(c, t_); RETCHK(0x10409238u, 0x10409236u); LOADALL; }
  /* 10409238 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 1040923b jmp 0x10409261 */ goto L_10409261;
L_10409261:;
  /* 10409261 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10409265 call 0x104056fb */ esp -= 4; M32(esp) = 0x1040926au; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10409265u); RETCHK(0x1040926au, 0x10409265u); LOADALL;
  /* 1040926a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040923d(CPU *c) {
  NATIVE_HOOK(0x1040923du) REGS; LOADALL;
L_1040923d:;
  /* 1040923d mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10409240 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10409242 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10409244 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10409247 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409249 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040924a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040924b(CPU *c) {
  NATIVE_HOOK(0x1040924bu) REGS; LOADALL;
L_1040924b:;
  /* 1040924b mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 1040924e cmp dword ptr [ebp - 0x1c], 0xc0000017 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0xc0000017u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409255 jne 0x1040925f */ if (!ZF_) goto L_1040925f;
  /* 10409257 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10409259 call dword ptr [0x1040b038] */ { const u32 m_ = (u32)(0x1040b038u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040925fu; SAVEALL; call_ind(c, t_); RETCHK(0x1040925fu, 0x10409259u); LOADALL; }
L_1040925f:;
  /* 1040925f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409261 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10409265 call 0x104056fb */ esp -= 4; M32(esp) = 0x1040926au; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10409265u); RETCHK(0x1040926au, 0x10409265u); LOADALL;
  /* 1040926a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409270(CPU *c) {
  NATIVE_HOOK(0x10409270u) REGS; LOADALL;
L_10409270:;
  /* 10409270 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10409271 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10409273 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409274 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409275 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10409278 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1040927b mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 1040927e mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10409280 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10409282 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10409284 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409286 jbe 0x10409290 */ if ((CF_|ZF_)) goto L_10409290;
  /* 10409288 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040928a jb 0x1040940c */ if (CF_) goto L_1040940c;
L_10409290:;
  /* 10409290 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10409296 jne 0x104092ac */ if (!ZF_) goto L_104092ac;
  /* 10409298 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1040929b and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1040929e cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104092a1 jb 0x104092cc */ if (CF_) goto L_104092cc;
  /* 104092a3 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 104092a5 jmp dword ptr [edx*4 + 0x104093bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104093bcu); u32 t_ = M32(m_); switch (t_) { case 0x104093ccu: goto L_104093cc; case 0x104093d4u: goto L_104093d4; case 0x104093e0u: goto L_104093e0; case 0x104093f4u: goto L_104093f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104092ac:;
  /* 104092ac mov eax, edi */ { eax = (u32)(edi); }
  /* 104092ae mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 104092b3 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104092b6 jb 0x104092c4 */ if (CF_) goto L_104092c4;
  /* 104092b8 and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104092bb add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104092bd jmp dword ptr [eax*4 + 0x104092d0] */ { const u32 m_ = (u32)(eax * 4u + 0x104092d0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_104092c4:;
  /* 104092c4 jmp dword ptr [ecx*4 + 0x104093cc] */ { const u32 m_ = (u32)(ecx * 4u + 0x104093ccu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_104092cc:;
  /* 104092cc jmp dword ptr [ecx*4 + 0x10409350] */ { const u32 m_ = (u32)(ecx * 4u + 0x10409350u); u32 t_ = M32(m_); switch (t_) { case 0x10409370u: goto L_10409370; case 0x10409378u: goto L_10409378; case 0x10409380u: goto L_10409380; case 0x10409388u: goto L_10409388; case 0x10409390u: goto L_10409390; case 0x10409398u: goto L_10409398; case 0x104093a0u: goto L_104093a0; case 0x104093b3u: goto L_104093b3; default: SAVEALL; call_ind(c, t_); return; } }
L_10409370:;
  /* 10409370 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10409374 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10409378:;
  /* 10409378 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1040937c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10409380:;
  /* 10409380 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10409384 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10409388:;
  /* 10409388 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040938c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10409390:;
  /* 10409390 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10409394 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10409398:;
  /* 10409398 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040939c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_104093a0:;
  /* 104093a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104093a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104093a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104093af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104093b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_104093b3:;
  /* 104093b3 jmp dword ptr [edx*4 + 0x104093bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104093bcu); u32 t_ = M32(m_); switch (t_) { case 0x104093ccu: goto L_104093cc; case 0x104093d4u: goto L_104093d4; case 0x104093e0u: goto L_104093e0; case 0x104093f4u: goto L_104093f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104093cc:;
  /* 104093cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093d4:;
  /* 104093d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093e0:;
  /* 104093e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093f4:;
  /* 104093f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409401 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409404 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409407 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409408 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409409 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040940a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1040940c:;
  /* 1040940c lea esi, [ecx + esi - 4] */ esi = (u32)((u32)(ecx + esi + 0xfffffffcu));
  /* 10409410 lea edi, [ecx + edi - 4] */ edi = (u32)((u32)(ecx + edi + 0xfffffffcu));
  /* 10409414 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040941a jne 0x10409440 */ if (!ZF_) goto L_10409440;
  /* 1040941c shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1040941f and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10409422 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409425 jb 0x10409434 */ if (CF_) goto L_10409434;
  /* 10409427 std */ c->df = 1;
  /* 10409428 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1040942a cld */ c->df = 0;
  /* 1040942b jmp dword ptr [edx*4 + 0x10409558] */ { const u32 m_ = (u32)(edx * 4u + 0x10409558u); u32 t_ = M32(m_); switch (t_) { case 0x10409568u: goto L_10409568; case 0x10409570u: goto L_10409570; case 0x10409580u: goto L_10409580; case 0x10409594u: goto L_10409594; default: SAVEALL; call_ind(c, t_); return; } }
L_10409434:;
  /* 10409434 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10409436 jmp dword ptr [ecx*4 + 0x10409508] */ { const u32 m_ = (u32)(ecx * 4u + 0x10409508u); u32 t_ = M32(m_); switch (t_) { case 0x1040954fu: goto L_1040954f; default: SAVEALL; call_ind(c, t_); return; } }
L_10409440:;
  /* 10409440 mov eax, edi */ { eax = (u32)(edi); }
  /* 10409442 mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 10409447 cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040944a jb 0x10409458 */ if (CF_) goto L_10409458;
  /* 1040944c and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040944f sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10409451 jmp dword ptr [eax*4 + 0x1040945c] */ { const u32 m_ = (u32)(eax * 4u + 0x1040945cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10409458:;
  /* 10409458 jmp dword ptr [ecx*4 + 0x10409558] */ { const u32 m_ = (u32)(ecx * 4u + 0x10409558u); u32 t_ = M32(m_); switch (t_) { case 0x10409568u: goto L_10409568; case 0x10409570u: goto L_10409570; case 0x10409580u: goto L_10409580; case 0x10409594u: goto L_10409594; default: SAVEALL; call_ind(c, t_); return; } }
L_1040954f:;
  /* 1040954f jmp dword ptr [edx*4 + 0x10409558] */ { const u32 m_ = (u32)(edx * 4u + 0x10409558u); u32 t_ = M32(m_); switch (t_) { case 0x10409568u: goto L_10409568; case 0x10409570u: goto L_10409570; case 0x10409580u: goto L_10409580; case 0x10409594u: goto L_10409594; default: SAVEALL; call_ind(c, t_); return; } }
L_10409568:;
  /* 10409568 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040956b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040956c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040956d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040956e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409570:;
  /* 10409570 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409573 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409576 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409579 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040957a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040957b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040957c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409580:;
  /* 10409580 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409583 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409586 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409589 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040958c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040958f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409590 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409591 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10409592 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409594:;
  /* 10409594 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409597 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040959a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040959d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104095a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104095a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104095aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104095ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104095ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104092d0(CPU *c) {
  NATIVE_HOOK(0x104092d0u) REGS; LOADALL;
L_104092d0:;
  /* 104092d0 xchg ebx, eax */ { u32 t_ = ebx; ebx = (u32)(eax); eax = (u32)(t_); }
  /* 104092d1 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104092d2 adc byte ptr [eax + 0x104092e0], dl */ { const u32 m_ = (u32)(eax + 0x104092e0u); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 104092d8 or al, 0x93 */ { u32 a_ = (eax & 0xffu), b_ = 0x93u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 104092da inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104092db adc byte ptr [eax], dh */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = ((edx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 104092dd xchg ebx, eax */ { u32 t_ = ebx; ebx = (u32)(eax); eax = (u32)(t_); }
  /* 104092de inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104092df adc byte ptr [ebx], ah */ { const u32 m_ = (u32)(ebx); u32 a_ = M8(m_), b_ = ((eax >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 104092e1 ror dword ptr [edx - 0x75f877fa], 1 */ { const u32 m_ = (u32)(edx + 0x8a078806u); u32 n_ = (1u) & 31u; if (n_) { u32 a_ = M32(m_); u32 k_ = n_ % 32u; u32 r_ = k_ ? (((a_ >> k_) | (a_ << (32u - k_))) & 0xffffffffu) : a_; u32 cf_ = (r_ >> 31) & 1u; u32 of_ = ((r_ >> 31) ^ (r_ >> 30)) & 1u; u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | (of_ << 11); SETRAW(e_); M32(m_) = (u32)(r_); } }
  /* 104092e7 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104092e8 add dword ptr [eax + 0x468a0147], ecx */ { const u32 m_ = (u32)(eax + 0x468a0147u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 104092ee add al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 104092f0 jmp 0x12881af7 */ TRAP(0x12881af7u, "bad jump target");
}

void F_104092e0(CPU *c) {
  NATIVE_HOOK(0x104092e0u) REGS; LOADALL;
  goto L_104092e0;
L_104092cc:;
  /* 104092cc jmp dword ptr [ecx*4 + 0x10409350] */ { const u32 m_ = (u32)(ecx * 4u + 0x10409350u); u32 t_ = M32(m_); switch (t_) { case 0x10409370u: goto L_10409370; case 0x10409378u: goto L_10409378; case 0x10409380u: goto L_10409380; case 0x10409388u: goto L_10409388; case 0x10409390u: goto L_10409390; case 0x10409398u: goto L_10409398; case 0x104093a0u: goto L_104093a0; case 0x104093b3u: goto L_104093b3; default: SAVEALL; call_ind(c, t_); return; } }
L_104092e0:;
  /* 104092e0 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 104092e2 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104092e4 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104092e6 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104092e9 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104092ec mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104092ef shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 104092f2 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104092f5 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104092f8 add edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104092fb cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104092fe jb 0x104092cc */ if (CF_) goto L_104092cc;
  /* 10409300 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10409302 jmp dword ptr [edx*4 + 0x104093bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104093bcu); u32 t_ = M32(m_); switch (t_) { case 0x104093ccu: goto L_104093cc; case 0x104093d4u: goto L_104093d4; case 0x104093e0u: goto L_104093e0; case 0x104093f4u: goto L_104093f4; default: SAVEALL; call_ind(c, t_); return; } }
L_10409370:;
  /* 10409370 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10409374 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10409378:;
  /* 10409378 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1040937c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10409380:;
  /* 10409380 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10409384 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10409388:;
  /* 10409388 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040938c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10409390:;
  /* 10409390 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10409394 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10409398:;
  /* 10409398 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040939c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_104093a0:;
  /* 104093a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104093a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104093a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104093af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104093b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_104093b3:;
  /* 104093b3 jmp dword ptr [edx*4 + 0x104093bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104093bcu); u32 t_ = M32(m_); switch (t_) { case 0x104093ccu: goto L_104093cc; case 0x104093d4u: goto L_104093d4; case 0x104093e0u: goto L_104093e0; case 0x104093f4u: goto L_104093f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104093cc:;
  /* 104093cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093d4:;
  /* 104093d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093e0:;
  /* 104093e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093f4:;
  /* 104093f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409401 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409404 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409407 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409408 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409409 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040940a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040930c(CPU *c) {
  NATIVE_HOOK(0x1040930cu) REGS; LOADALL;
  goto L_1040930c;
L_104092cc:;
  /* 104092cc jmp dword ptr [ecx*4 + 0x10409350] */ { const u32 m_ = (u32)(ecx * 4u + 0x10409350u); u32 t_ = M32(m_); switch (t_) { case 0x10409370u: goto L_10409370; case 0x10409378u: goto L_10409378; case 0x10409380u: goto L_10409380; case 0x10409388u: goto L_10409388; case 0x10409390u: goto L_10409390; case 0x10409398u: goto L_10409398; case 0x104093a0u: goto L_104093a0; case 0x104093b3u: goto L_104093b3; default: SAVEALL; call_ind(c, t_); return; } }
L_1040930c:;
  /* 1040930c and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1040930e mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409310 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409312 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409315 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10409318 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040931b add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040931e add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10409321 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409324 jb 0x104092cc */ if (CF_) goto L_104092cc;
  /* 10409326 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10409328 jmp dword ptr [edx*4 + 0x104093bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104093bcu); u32 t_ = M32(m_); switch (t_) { case 0x104093ccu: goto L_104093cc; case 0x104093d4u: goto L_104093d4; case 0x104093e0u: goto L_104093e0; case 0x104093f4u: goto L_104093f4; default: SAVEALL; call_ind(c, t_); return; } }
L_10409370:;
  /* 10409370 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10409374 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10409378:;
  /* 10409378 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1040937c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10409380:;
  /* 10409380 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10409384 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10409388:;
  /* 10409388 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040938c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10409390:;
  /* 10409390 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10409394 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10409398:;
  /* 10409398 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040939c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_104093a0:;
  /* 104093a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104093a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104093a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104093af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104093b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_104093b3:;
  /* 104093b3 jmp dword ptr [edx*4 + 0x104093bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104093bcu); u32 t_ = M32(m_); switch (t_) { case 0x104093ccu: goto L_104093cc; case 0x104093d4u: goto L_104093d4; case 0x104093e0u: goto L_104093e0; case 0x104093f4u: goto L_104093f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104093cc:;
  /* 104093cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093d4:;
  /* 104093d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093e0:;
  /* 104093e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093f4:;
  /* 104093f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409401 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409404 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409407 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409408 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409409 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040940a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409330(CPU *c) {
  NATIVE_HOOK(0x10409330u) REGS; LOADALL;
  goto L_10409330;
L_104092cc:;
  /* 104092cc jmp dword ptr [ecx*4 + 0x10409350] */ { const u32 m_ = (u32)(ecx * 4u + 0x10409350u); u32 t_ = M32(m_); switch (t_) { case 0x10409370u: goto L_10409370; case 0x10409378u: goto L_10409378; case 0x10409380u: goto L_10409380; case 0x10409388u: goto L_10409388; case 0x10409390u: goto L_10409390; case 0x10409398u: goto L_10409398; case 0x104093a0u: goto L_104093a0; case 0x104093b3u: goto L_104093b3; default: SAVEALL; call_ind(c, t_); return; } }
L_10409330:;
  /* 10409330 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10409332 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409334 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409336 add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10409339 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1040933c add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040933f cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409342 jb 0x104092cc */ if (CF_) goto L_104092cc;
  /* 10409344 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10409346 jmp dword ptr [edx*4 + 0x104093bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104093bcu); u32 t_ = M32(m_); switch (t_) { case 0x104093ccu: goto L_104093cc; case 0x104093d4u: goto L_104093d4; case 0x104093e0u: goto L_104093e0; case 0x104093f4u: goto L_104093f4; default: SAVEALL; call_ind(c, t_); return; } }
L_10409370:;
  /* 10409370 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10409374 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10409378:;
  /* 10409378 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1040937c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10409380:;
  /* 10409380 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10409384 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10409388:;
  /* 10409388 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040938c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10409390:;
  /* 10409390 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10409394 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10409398:;
  /* 10409398 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040939c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_104093a0:;
  /* 104093a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104093a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104093a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104093af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104093b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_104093b3:;
  /* 104093b3 jmp dword ptr [edx*4 + 0x104093bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104093bcu); u32 t_ = M32(m_); switch (t_) { case 0x104093ccu: goto L_104093cc; case 0x104093d4u: goto L_104093d4; case 0x104093e0u: goto L_104093e0; case 0x104093f4u: goto L_104093f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104093cc:;
  /* 104093cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093d4:;
  /* 104093d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093e0:;
  /* 104093e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093f4:;
  /* 104093f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409401 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409404 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409407 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409408 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409409 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040940a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409350(CPU *c) {
  NATIVE_HOOK(0x10409350u) REGS; LOADALL;
L_10409350:;
  /* 10409350 mov bl, 0x93 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x93u) & 0xffu); }
  /* 10409352 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10409353 adc byte ptr [eax - 0x67efbf6d], ah */ { const u32 m_ = (u32)(eax + 0x98104093u); u32 a_ = M8(m_), b_ = ((eax >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10409359 xchg ebx, eax */ { u32 t_ = ebx; ebx = (u32)(eax); eax = (u32)(t_); }
  /* 1040935a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040935b adc byte ptr [eax - 0x77efbf6d], dl */ { const u32 m_ = (u32)(eax + 0x88104093u); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10409361 xchg ebx, eax */ { u32 t_ = ebx; ebx = (u32)(eax); eax = (u32)(t_); }
  /* 10409362 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10409363 adc byte ptr [eax + 0x78104093], al */ { const u32 m_ = (u32)(eax + 0x78104093u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10409369 xchg ebx, eax */ { u32 t_ = ebx; ebx = (u32)(eax); eax = (u32)(t_); }
  /* 1040936a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040936b adc byte ptr [eax - 0x6d], dh */ { const u32 m_ = (u32)(eax + 0xffffff93u); u32 a_ = M8(m_), b_ = ((edx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 1040936e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040936f adc byte ptr [ebx - 0x761b71bc], cl */ { const u32 m_ = (u32)(ebx + 0x89e48e44u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10409375 inc esp */ { u32 a_ = esp; u32 r_ = (a_ + 1u) & 0xffffffffu; esp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  TRAP(0x10409376u, "undecodable");
}

void F_10409370(CPU *c) {
  NATIVE_HOOK(0x10409370u) REGS; LOADALL;
L_10409370:;
  /* 10409370 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10409374 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10409378 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1040937c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 10409380 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10409384 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10409388 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040938c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10409390 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10409394 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10409398 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040939c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 104093a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104093a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104093a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104093af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104093b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104093b3 jmp dword ptr [edx*4 + 0x104093bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104093bcu); u32 t_ = M32(m_); switch (t_) { case 0x104093ccu: goto L_104093cc; case 0x104093d4u: goto L_104093d4; case 0x104093e0u: goto L_104093e0; case 0x104093f4u: goto L_104093f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104093cc:;
  /* 104093cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093d4:;
  /* 104093d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093e0:;
  /* 104093e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093f4:;
  /* 104093f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409401 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409404 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409407 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409408 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409409 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040940a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409378(CPU *c) {
  NATIVE_HOOK(0x10409378u) REGS; LOADALL;
L_10409378:;
  /* 10409378 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1040937c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 10409380 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10409384 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10409388 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040938c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10409390 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10409394 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10409398 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040939c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 104093a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104093a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104093a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104093af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104093b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104093b3 jmp dword ptr [edx*4 + 0x104093bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104093bcu); u32 t_ = M32(m_); switch (t_) { case 0x104093ccu: goto L_104093cc; case 0x104093d4u: goto L_104093d4; case 0x104093e0u: goto L_104093e0; case 0x104093f4u: goto L_104093f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104093cc:;
  /* 104093cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093d4:;
  /* 104093d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093e0:;
  /* 104093e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093f4:;
  /* 104093f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409401 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409404 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409407 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409408 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409409 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040940a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409380(CPU *c) {
  NATIVE_HOOK(0x10409380u) REGS; LOADALL;
L_10409380:;
  /* 10409380 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10409384 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10409388 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040938c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10409390 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10409394 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10409398 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040939c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 104093a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104093a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104093a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104093af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104093b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104093b3 jmp dword ptr [edx*4 + 0x104093bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104093bcu); u32 t_ = M32(m_); switch (t_) { case 0x104093ccu: goto L_104093cc; case 0x104093d4u: goto L_104093d4; case 0x104093e0u: goto L_104093e0; case 0x104093f4u: goto L_104093f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104093cc:;
  /* 104093cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093d4:;
  /* 104093d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093e0:;
  /* 104093e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093f4:;
  /* 104093f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409401 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409404 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409407 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409408 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409409 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040940a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409388(CPU *c) {
  NATIVE_HOOK(0x10409388u) REGS; LOADALL;
L_10409388:;
  /* 10409388 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040938c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10409390 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10409394 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10409398 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040939c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 104093a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104093a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104093a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104093af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104093b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104093b3 jmp dword ptr [edx*4 + 0x104093bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104093bcu); u32 t_ = M32(m_); switch (t_) { case 0x104093ccu: goto L_104093cc; case 0x104093d4u: goto L_104093d4; case 0x104093e0u: goto L_104093e0; case 0x104093f4u: goto L_104093f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104093cc:;
  /* 104093cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093d4:;
  /* 104093d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093e0:;
  /* 104093e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093f4:;
  /* 104093f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409401 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409404 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409407 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409408 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409409 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040940a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409390(CPU *c) {
  NATIVE_HOOK(0x10409390u) REGS; LOADALL;
L_10409390:;
  /* 10409390 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10409394 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10409398 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040939c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 104093a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104093a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104093a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104093af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104093b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104093b3 jmp dword ptr [edx*4 + 0x104093bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104093bcu); u32 t_ = M32(m_); switch (t_) { case 0x104093ccu: goto L_104093cc; case 0x104093d4u: goto L_104093d4; case 0x104093e0u: goto L_104093e0; case 0x104093f4u: goto L_104093f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104093cc:;
  /* 104093cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093d4:;
  /* 104093d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093e0:;
  /* 104093e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093f4:;
  /* 104093f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409401 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409404 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409407 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409408 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409409 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040940a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409398(CPU *c) {
  NATIVE_HOOK(0x10409398u) REGS; LOADALL;
L_10409398:;
  /* 10409398 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040939c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 104093a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104093a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104093a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104093af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104093b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104093b3 jmp dword ptr [edx*4 + 0x104093bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104093bcu); u32 t_ = M32(m_); switch (t_) { case 0x104093ccu: goto L_104093cc; case 0x104093d4u: goto L_104093d4; case 0x104093e0u: goto L_104093e0; case 0x104093f4u: goto L_104093f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104093cc:;
  /* 104093cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093d4:;
  /* 104093d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093e0:;
  /* 104093e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093f4:;
  /* 104093f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409401 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409404 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409407 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409408 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409409 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040940a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104093a0(CPU *c) {
  NATIVE_HOOK(0x104093a0u) REGS; LOADALL;
L_104093a0:;
  /* 104093a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104093a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104093a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104093af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104093b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104093b3 jmp dword ptr [edx*4 + 0x104093bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104093bcu); u32 t_ = M32(m_); switch (t_) { case 0x104093ccu: goto L_104093cc; case 0x104093d4u: goto L_104093d4; case 0x104093e0u: goto L_104093e0; case 0x104093f4u: goto L_104093f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104093cc:;
  /* 104093cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093d4:;
  /* 104093d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093e0:;
  /* 104093e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093f4:;
  /* 104093f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409401 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409404 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409407 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409408 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409409 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040940a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104093b3(CPU *c) {
  NATIVE_HOOK(0x104093b3u) REGS; LOADALL;
L_104093b3:;
  /* 104093b3 jmp dword ptr [edx*4 + 0x104093bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104093bcu); u32 t_ = M32(m_); switch (t_) { case 0x104093ccu: goto L_104093cc; case 0x104093d4u: goto L_104093d4; case 0x104093e0u: goto L_104093e0; case 0x104093f4u: goto L_104093f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104093cc:;
  /* 104093cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093d4:;
  /* 104093d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093e0:;
  /* 104093e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104093f4:;
  /* 104093f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409401 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409404 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409407 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409408 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409409 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040940a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104093bc(CPU *c) {
  NATIVE_HOOK(0x104093bcu) REGS; LOADALL;
L_104093bc:;
  /* 104093bc int3 */ TRAP(0x104093bcu, "int3");
}

void F_104093cc(CPU *c) {
  NATIVE_HOOK(0x104093ccu) REGS; LOADALL;
L_104093cc:;
  /* 104093cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104093d4(CPU *c) {
  NATIVE_HOOK(0x104093d4u) REGS; LOADALL;
L_104093d4:;
  /* 104093d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104093e0(CPU *c) {
  NATIVE_HOOK(0x104093e0u) REGS; LOADALL;
L_104093e0:;
  /* 104093e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104093ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104093ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104093ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104093f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104093f4(CPU *c) {
  NATIVE_HOOK(0x104093f4u) REGS; LOADALL;
L_104093f4:;
  /* 104093f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104093fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104093fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409401 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409404 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409407 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409408 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409409 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040940a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040945c(CPU *c) {
  NATIVE_HOOK(0x1040945cu) REGS; LOADALL;
L_1040945c:;
  /* 1040945c xchg ebp, eax */ { u32 t_ = ebp; ebp = (u32)(eax); eax = (u32)(t_); }
  /* 1040945d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040945e adc byte ptr [eax + 0x1040946c], dl */ { const u32 m_ = (u32)(eax + 0x1040946cu); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10409464 nop */ ;
  /* 10409465 xchg esp, eax */ { u32 t_ = esp; esp = (u32)(eax); eax = (u32)(t_); }
  /* 10409466 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10409467 adc byte ptr [eax - 0x75efbf6c], bh */ { const u32 m_ = (u32)(eax + 0x8a104094u); u32 a_ = M8(m_), b_ = ((ebx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 1040946d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040946e add esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10409470 ror dword ptr [eax - 0x117cfcb9], 1 */ { const u32 m_ = (u32)(eax + 0xee830347u); u32 n_ = (1u) & 31u; if (n_) { u32 a_ = M32(m_); u32 k_ = n_ % 32u; u32 r_ = k_ ? (((a_ >> k_) | (a_ << (32u - k_))) & 0xffffffffu) : a_; u32 cf_ = (r_ >> 31) & 1u; u32 of_ = ((r_ >> 31) ^ (r_ >> 30)) & 1u; u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | (of_ << 11); SETRAW(e_); M32(m_) = (u32)(r_); } }
  /* 10409476 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10409478 jmp 0x1230177f */ TRAP(0x1230177fu, "bad jump target");
}

void F_1040946c(CPU *c) {
  NATIVE_HOOK(0x1040946cu) REGS; LOADALL;
  goto L_1040946c;
L_10409434:;
  /* 10409434 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10409436 jmp dword ptr [ecx*4 + 0x10409508] */ { const u32 m_ = (u32)(ecx * 4u + 0x10409508u); u32 t_ = M32(m_); switch (t_) { case 0x1040954fu: goto L_1040954f; default: SAVEALL; call_ind(c, t_); return; } }
L_1040946c:;
  /* 1040946c mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040946f and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10409471 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409474 sub esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10409477 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1040947a sub edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040947d cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409480 jb 0x10409434 */ if (CF_) goto L_10409434;
  /* 10409482 std */ c->df = 1;
  /* 10409483 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10409485 cld */ c->df = 0;
  /* 10409486 jmp dword ptr [edx*4 + 0x10409558] */ { const u32 m_ = (u32)(edx * 4u + 0x10409558u); u32 t_ = M32(m_); switch (t_) { case 0x10409568u: goto L_10409568; case 0x10409570u: goto L_10409570; case 0x10409580u: goto L_10409580; case 0x10409594u: goto L_10409594; default: SAVEALL; call_ind(c, t_); return; } }
L_1040954f:;
  /* 1040954f jmp dword ptr [edx*4 + 0x10409558] */ { const u32 m_ = (u32)(edx * 4u + 0x10409558u); u32 t_ = M32(m_); switch (t_) { case 0x10409568u: goto L_10409568; case 0x10409570u: goto L_10409570; case 0x10409580u: goto L_10409580; case 0x10409594u: goto L_10409594; default: SAVEALL; call_ind(c, t_); return; } }
L_10409568:;
  /* 10409568 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040956b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040956c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040956d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040956e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409570:;
  /* 10409570 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409573 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409576 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409579 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040957a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040957b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040957c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409580:;
  /* 10409580 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409583 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409586 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409589 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040958c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040958f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409590 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409591 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10409592 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409594:;
  /* 10409594 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409597 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040959a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040959d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104095a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104095a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104095aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104095ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104095ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409490(CPU *c) {
  NATIVE_HOOK(0x10409490u) REGS; LOADALL;
  goto L_10409490;
L_10409434:;
  /* 10409434 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10409436 jmp dword ptr [ecx*4 + 0x10409508] */ { const u32 m_ = (u32)(ecx * 4u + 0x10409508u); u32 t_ = M32(m_); switch (t_) { case 0x1040954fu: goto L_1040954f; default: SAVEALL; call_ind(c, t_); return; } }
L_10409490:;
  /* 10409490 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409493 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10409495 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409498 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040949b shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1040949e mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104094a1 sub esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104094a4 sub edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104094a7 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104094aa jb 0x10409434 */ if (CF_) goto L_10409434;
  /* 104094ac std */ c->df = 1;
  /* 104094ad rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 104094af cld */ c->df = 0;
  /* 104094b0 jmp dword ptr [edx*4 + 0x10409558] */ { const u32 m_ = (u32)(edx * 4u + 0x10409558u); u32 t_ = M32(m_); switch (t_) { case 0x10409568u: goto L_10409568; case 0x10409570u: goto L_10409570; case 0x10409580u: goto L_10409580; case 0x10409594u: goto L_10409594; default: SAVEALL; call_ind(c, t_); return; } }
L_1040954f:;
  /* 1040954f jmp dword ptr [edx*4 + 0x10409558] */ { const u32 m_ = (u32)(edx * 4u + 0x10409558u); u32 t_ = M32(m_); switch (t_) { case 0x10409568u: goto L_10409568; case 0x10409570u: goto L_10409570; case 0x10409580u: goto L_10409580; case 0x10409594u: goto L_10409594; default: SAVEALL; call_ind(c, t_); return; } }
L_10409568:;
  /* 10409568 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040956b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040956c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040956d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040956e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409570:;
  /* 10409570 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409573 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409576 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409579 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040957a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040957b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040957c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409580:;
  /* 10409580 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409583 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409586 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409589 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040958c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040958f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409590 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409591 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10409592 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409594:;
  /* 10409594 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409597 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040959a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040959d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104095a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104095a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104095aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104095ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104095ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104094b8(CPU *c) {
  NATIVE_HOOK(0x104094b8u) REGS; LOADALL;
  goto L_104094b8;
L_10409434:;
  /* 10409434 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10409436 jmp dword ptr [ecx*4 + 0x10409508] */ { const u32 m_ = (u32)(ecx * 4u + 0x10409508u); u32 t_ = M32(m_); switch (t_) { case 0x1040954fu: goto L_1040954f; default: SAVEALL; call_ind(c, t_); return; } }
L_104094b8:;
  /* 104094b8 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104094bb and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 104094bd mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104094c0 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104094c3 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104094c6 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104094c9 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 104094cc mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104094cf sub esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104094d2 sub edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104094d5 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104094d8 jb 0x10409434 */ if (CF_) goto L_10409434;
  /* 104094de std */ c->df = 1;
  /* 104094df rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 104094e1 cld */ c->df = 0;
  /* 104094e2 jmp dword ptr [edx*4 + 0x10409558] */ { const u32 m_ = (u32)(edx * 4u + 0x10409558u); u32 t_ = M32(m_); switch (t_) { case 0x10409568u: goto L_10409568; case 0x10409570u: goto L_10409570; case 0x10409580u: goto L_10409580; case 0x10409594u: goto L_10409594; default: SAVEALL; call_ind(c, t_); return; } }
L_1040954f:;
  /* 1040954f jmp dword ptr [edx*4 + 0x10409558] */ { const u32 m_ = (u32)(edx * 4u + 0x10409558u); u32 t_ = M32(m_); switch (t_) { case 0x10409568u: goto L_10409568; case 0x10409570u: goto L_10409570; case 0x10409580u: goto L_10409580; case 0x10409594u: goto L_10409594; default: SAVEALL; call_ind(c, t_); return; } }
L_10409568:;
  /* 10409568 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040956b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040956c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040956d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040956e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409570:;
  /* 10409570 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409573 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409576 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409579 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040957a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040957b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040957c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409580:;
  /* 10409580 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409583 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409586 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409589 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040958c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040958f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409590 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409591 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10409592 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409594:;
  /* 10409594 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409597 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040959a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040959d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104095a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104095a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104095aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104095ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104095ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409508(CPU *c) {
  NATIVE_HOOK(0x10409508u) REGS; LOADALL;
L_10409508:;
  /* 10409508 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10409509 xchg ebp, eax */ { u32 t_ = ebp; ebp = (u32)(eax); eax = (u32)(t_); }
  /* 1040950a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040950b adc byte ptr [ebx - 0x76e371bc], cl */ { const u32 m_ = (u32)(ebx + 0x891c8e44u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10409511 inc esp */ { u32 a_ = esp; u32 r_ = (a_ + 1u) & 0xffffffffu; esp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  TRAP(0x10409512u, "undecodable");
}

void F_1040950c(CPU *c) {
  NATIVE_HOOK(0x1040950cu) REGS; LOADALL;
L_1040950c:;
  /* 1040950c mov eax, dword ptr [esi + ecx*4 + 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10409510 mov dword ptr [edi + ecx*4 + 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10409514 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 10409518 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 1040951c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10409520 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10409524 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10409528 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1040952c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10409530 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10409534 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409538 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1040953c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10409540 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10409544 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1040954b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040954d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040954f jmp dword ptr [edx*4 + 0x10409558] */ { const u32 m_ = (u32)(edx * 4u + 0x10409558u); u32 t_ = M32(m_); switch (t_) { case 0x10409568u: goto L_10409568; case 0x10409570u: goto L_10409570; case 0x10409580u: goto L_10409580; case 0x10409594u: goto L_10409594; default: SAVEALL; call_ind(c, t_); return; } }
L_10409568:;
  /* 10409568 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040956b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040956c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040956d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040956e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409570:;
  /* 10409570 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409573 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409576 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409579 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040957a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040957b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040957c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409580:;
  /* 10409580 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409583 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409586 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409589 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040958c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040958f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409590 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409591 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10409592 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409594:;
  /* 10409594 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409597 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040959a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040959d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104095a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104095a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104095aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104095ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104095ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409514(CPU *c) {
  NATIVE_HOOK(0x10409514u) REGS; LOADALL;
L_10409514:;
  /* 10409514 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 10409518 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 1040951c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10409520 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10409524 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10409528 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1040952c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10409530 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10409534 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409538 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1040953c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10409540 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10409544 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1040954b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040954d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040954f jmp dword ptr [edx*4 + 0x10409558] */ { const u32 m_ = (u32)(edx * 4u + 0x10409558u); u32 t_ = M32(m_); switch (t_) { case 0x10409568u: goto L_10409568; case 0x10409570u: goto L_10409570; case 0x10409580u: goto L_10409580; case 0x10409594u: goto L_10409594; default: SAVEALL; call_ind(c, t_); return; } }
L_10409568:;
  /* 10409568 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040956b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040956c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040956d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040956e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409570:;
  /* 10409570 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409573 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409576 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409579 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040957a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040957b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040957c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409580:;
  /* 10409580 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409583 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409586 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409589 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040958c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040958f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409590 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409591 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10409592 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409594:;
  /* 10409594 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409597 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040959a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040959d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104095a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104095a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104095aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104095ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104095ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040951c(CPU *c) {
  NATIVE_HOOK(0x1040951cu) REGS; LOADALL;
L_1040951c:;
  /* 1040951c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10409520 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10409524 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10409528 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1040952c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10409530 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10409534 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409538 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1040953c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10409540 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10409544 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1040954b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040954d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040954f jmp dword ptr [edx*4 + 0x10409558] */ { const u32 m_ = (u32)(edx * 4u + 0x10409558u); u32 t_ = M32(m_); switch (t_) { case 0x10409568u: goto L_10409568; case 0x10409570u: goto L_10409570; case 0x10409580u: goto L_10409580; case 0x10409594u: goto L_10409594; default: SAVEALL; call_ind(c, t_); return; } }
L_10409568:;
  /* 10409568 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040956b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040956c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040956d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040956e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409570:;
  /* 10409570 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409573 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409576 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409579 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040957a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040957b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040957c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409580:;
  /* 10409580 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409583 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409586 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409589 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040958c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040958f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409590 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409591 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10409592 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409594:;
  /* 10409594 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409597 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040959a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040959d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104095a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104095a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104095aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104095ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104095ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409524(CPU *c) {
  NATIVE_HOOK(0x10409524u) REGS; LOADALL;
L_10409524:;
  /* 10409524 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10409528 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1040952c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10409530 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10409534 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409538 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1040953c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10409540 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10409544 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1040954b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040954d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040954f jmp dword ptr [edx*4 + 0x10409558] */ { const u32 m_ = (u32)(edx * 4u + 0x10409558u); u32 t_ = M32(m_); switch (t_) { case 0x10409568u: goto L_10409568; case 0x10409570u: goto L_10409570; case 0x10409580u: goto L_10409580; case 0x10409594u: goto L_10409594; default: SAVEALL; call_ind(c, t_); return; } }
L_10409568:;
  /* 10409568 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040956b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040956c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040956d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040956e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409570:;
  /* 10409570 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409573 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409576 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409579 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040957a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040957b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040957c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409580:;
  /* 10409580 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409583 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409586 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409589 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040958c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040958f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409590 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409591 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10409592 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409594:;
  /* 10409594 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409597 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040959a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040959d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104095a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104095a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104095aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104095ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104095ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040952c(CPU *c) {
  NATIVE_HOOK(0x1040952cu) REGS; LOADALL;
L_1040952c:;
  /* 1040952c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10409530 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10409534 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409538 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1040953c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10409540 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10409544 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1040954b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040954d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040954f jmp dword ptr [edx*4 + 0x10409558] */ { const u32 m_ = (u32)(edx * 4u + 0x10409558u); u32 t_ = M32(m_); switch (t_) { case 0x10409568u: goto L_10409568; case 0x10409570u: goto L_10409570; case 0x10409580u: goto L_10409580; case 0x10409594u: goto L_10409594; default: SAVEALL; call_ind(c, t_); return; } }
L_10409568:;
  /* 10409568 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040956b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040956c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040956d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040956e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409570:;
  /* 10409570 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409573 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409576 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409579 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040957a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040957b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040957c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409580:;
  /* 10409580 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409583 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409586 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409589 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040958c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040958f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409590 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409591 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10409592 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409594:;
  /* 10409594 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409597 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040959a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040959d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104095a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104095a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104095aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104095ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104095ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409534(CPU *c) {
  NATIVE_HOOK(0x10409534u) REGS; LOADALL;
L_10409534:;
  /* 10409534 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409538 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1040953c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10409540 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10409544 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1040954b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040954d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040954f jmp dword ptr [edx*4 + 0x10409558] */ { const u32 m_ = (u32)(edx * 4u + 0x10409558u); u32 t_ = M32(m_); switch (t_) { case 0x10409568u: goto L_10409568; case 0x10409570u: goto L_10409570; case 0x10409580u: goto L_10409580; case 0x10409594u: goto L_10409594; default: SAVEALL; call_ind(c, t_); return; } }
L_10409568:;
  /* 10409568 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040956b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040956c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040956d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040956e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409570:;
  /* 10409570 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409573 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409576 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409579 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040957a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040957b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040957c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409580:;
  /* 10409580 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409583 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409586 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409589 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040958c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040958f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409590 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409591 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10409592 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409594:;
  /* 10409594 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409597 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040959a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040959d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104095a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104095a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104095aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104095ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104095ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040953c(CPU *c) {
  NATIVE_HOOK(0x1040953cu) REGS; LOADALL;
L_1040953c:;
  /* 1040953c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10409540 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10409544 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1040954b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040954d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040954f jmp dword ptr [edx*4 + 0x10409558] */ { const u32 m_ = (u32)(edx * 4u + 0x10409558u); u32 t_ = M32(m_); switch (t_) { case 0x10409568u: goto L_10409568; case 0x10409570u: goto L_10409570; case 0x10409580u: goto L_10409580; case 0x10409594u: goto L_10409594; default: SAVEALL; call_ind(c, t_); return; } }
L_10409568:;
  /* 10409568 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040956b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040956c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040956d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040956e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409570:;
  /* 10409570 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409573 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409576 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409579 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040957a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040957b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040957c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409580:;
  /* 10409580 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409583 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409586 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409589 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040958c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040958f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409590 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409591 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10409592 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409594:;
  /* 10409594 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409597 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040959a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040959d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104095a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104095a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104095aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104095ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104095ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040954f(CPU *c) {
  NATIVE_HOOK(0x1040954fu) REGS; LOADALL;
L_1040954f:;
  /* 1040954f jmp dword ptr [edx*4 + 0x10409558] */ { const u32 m_ = (u32)(edx * 4u + 0x10409558u); u32 t_ = M32(m_); switch (t_) { case 0x10409568u: goto L_10409568; case 0x10409570u: goto L_10409570; case 0x10409580u: goto L_10409580; case 0x10409594u: goto L_10409594; default: SAVEALL; call_ind(c, t_); return; } }
L_10409568:;
  /* 10409568 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040956b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040956c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040956d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040956e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409570:;
  /* 10409570 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409573 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409576 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409579 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040957a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040957b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040957c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409580:;
  /* 10409580 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409583 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409586 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409589 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040958c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040958f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409590 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409591 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10409592 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10409594:;
  /* 10409594 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409597 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040959a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040959d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104095a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104095a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104095aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104095ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104095ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409558(CPU *c) {
  NATIVE_HOOK(0x10409558u) REGS; LOADALL;
L_10409558:;
  /* 10409558 push 0x70104095 */ { u32 v_ = 0x70104095u; esp -= 4; M32(esp) = v_; }
  /* 1040955d xchg ebp, eax */ { u32 t_ = ebp; ebp = (u32)(eax); eax = (u32)(t_); }
  /* 1040955e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040955f adc byte ptr [eax - 0x6befbf6b], al */ { const u32 m_ = (u32)(eax + 0x94104095u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10409565 xchg ebp, eax */ { u32 t_ = ebp; ebp = (u32)(eax); eax = (u32)(t_); }
  /* 10409566 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10409567 adc byte ptr [ebx + 0x5f5e0845], cl */ { const u32 m_ = (u32)(ebx + 0x5f5e0845u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 1040956d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040956e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409568(CPU *c) {
  NATIVE_HOOK(0x10409568u) REGS; LOADALL;
L_10409568:;
  /* 10409568 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040956b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040956c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040956d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040956e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409570(CPU *c) {
  NATIVE_HOOK(0x10409570u) REGS; LOADALL;
L_10409570:;
  /* 10409570 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409573 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409576 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409579 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040957a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040957b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040957c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409580(CPU *c) {
  NATIVE_HOOK(0x10409580u) REGS; LOADALL;
L_10409580:;
  /* 10409580 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409583 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10409586 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409589 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040958c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040958f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409590 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409591 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10409592 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409594(CPU *c) {
  NATIVE_HOOK(0x10409594u) REGS; LOADALL;
L_10409594:;
  /* 10409594 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10409597 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040959a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040959d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104095a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104095a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104095a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104095aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104095ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104095ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104095ad(CPU *c) {
  NATIVE_HOOK(0x104095adu) REGS; LOADALL;
L_104095ad:;
  /* 104095ad call 0x104061b1 */ esp -= 4; M32(esp) = 0x104095b2u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x104095adu); RETCHK(0x104095b2u, 0x104095adu); LOADALL;
  /* 104095b2 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 104095b5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104095b6(CPU *c) {
  NATIVE_HOOK(0x104095b6u) REGS; LOADALL;
L_104095b6:;
  /* 104095b6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104095b7 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 104095bb test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104095bd je 0x10409744 */ if (ZF_) goto L_10409744;
  /* 104095c3 push dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104095c6 call 0x1040549e */ esp -= 4; M32(esp) = 0x104095cbu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104095c6u); RETCHK(0x104095cbu, 0x104095c6u); LOADALL;
  /* 104095cb push dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104095ce call 0x1040549e */ esp -= 4; M32(esp) = 0x104095d3u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104095ceu); RETCHK(0x104095d3u, 0x104095ceu); LOADALL;
  /* 104095d3 push dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104095d6 call 0x1040549e */ esp -= 4; M32(esp) = 0x104095dbu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104095d6u); RETCHK(0x104095dbu, 0x104095d6u); LOADALL;
  /* 104095db push dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104095de call 0x1040549e */ esp -= 4; M32(esp) = 0x104095e3u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104095deu); RETCHK(0x104095e3u, 0x104095deu); LOADALL;
  /* 104095e3 push dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104095e6 call 0x1040549e */ esp -= 4; M32(esp) = 0x104095ebu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104095e6u); RETCHK(0x104095ebu, 0x104095e6u); LOADALL;
  /* 104095eb push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104095ee call 0x1040549e */ esp -= 4; M32(esp) = 0x104095f3u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104095eeu); RETCHK(0x104095f3u, 0x104095eeu); LOADALL;
  /* 104095f3 push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104095f5 call 0x1040549e */ esp -= 4; M32(esp) = 0x104095fau; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104095f5u); RETCHK(0x104095fau, 0x104095f5u); LOADALL;
  /* 104095fa push dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104095fd call 0x1040549e */ esp -= 4; M32(esp) = 0x10409602u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104095fdu); RETCHK(0x10409602u, 0x104095fdu); LOADALL;
  /* 10409602 push dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409605 call 0x1040549e */ esp -= 4; M32(esp) = 0x1040960au; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409605u); RETCHK(0x1040960au, 0x10409605u); LOADALL;
  /* 1040960a push dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040960d call 0x1040549e */ esp -= 4; M32(esp) = 0x10409612u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040960du); RETCHK(0x10409612u, 0x1040960du); LOADALL;
  /* 10409612 push dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409615 call 0x1040549e */ esp -= 4; M32(esp) = 0x1040961au; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409615u); RETCHK(0x1040961au, 0x10409615u); LOADALL;
  /* 1040961a push dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040961d call 0x1040549e */ esp -= 4; M32(esp) = 0x10409622u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040961du); RETCHK(0x10409622u, 0x1040961du); LOADALL;
  /* 10409622 push dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409625 call 0x1040549e */ esp -= 4; M32(esp) = 0x1040962au; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409625u); RETCHK(0x1040962au, 0x10409625u); LOADALL;
  /* 1040962a push dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040962d call 0x1040549e */ esp -= 4; M32(esp) = 0x10409632u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040962du); RETCHK(0x10409632u, 0x1040962du); LOADALL;
  /* 10409632 push dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409635 call 0x1040549e */ esp -= 4; M32(esp) = 0x1040963au; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409635u); RETCHK(0x1040963au, 0x10409635u); LOADALL;
  /* 1040963a push dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040963d call 0x1040549e */ esp -= 4; M32(esp) = 0x10409642u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040963du); RETCHK(0x10409642u, 0x1040963du); LOADALL;
  /* 10409642 add esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10409645 push dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409648 call 0x1040549e */ esp -= 4; M32(esp) = 0x1040964du; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409648u); RETCHK(0x1040964du, 0x10409648u); LOADALL;
  /* 1040964d push dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409650 call 0x1040549e */ esp -= 4; M32(esp) = 0x10409655u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409650u); RETCHK(0x10409655u, 0x10409650u); LOADALL;
  /* 10409655 push dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409658 call 0x1040549e */ esp -= 4; M32(esp) = 0x1040965du; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409658u); RETCHK(0x1040965du, 0x10409658u); LOADALL;
  /* 1040965d push dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409660 call 0x1040549e */ esp -= 4; M32(esp) = 0x10409665u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409660u); RETCHK(0x10409665u, 0x10409660u); LOADALL;
  /* 10409665 push dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409668 call 0x1040549e */ esp -= 4; M32(esp) = 0x1040966du; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409668u); RETCHK(0x1040966du, 0x10409668u); LOADALL;
  /* 1040966d push dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409670 call 0x1040549e */ esp -= 4; M32(esp) = 0x10409675u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409670u); RETCHK(0x10409675u, 0x10409670u); LOADALL;
  /* 10409675 push dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409678 call 0x1040549e */ esp -= 4; M32(esp) = 0x1040967du; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409678u); RETCHK(0x1040967du, 0x10409678u); LOADALL;
  /* 1040967d push dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409680 call 0x1040549e */ esp -= 4; M32(esp) = 0x10409685u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409680u); RETCHK(0x10409685u, 0x10409680u); LOADALL;
  /* 10409685 push dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409688 call 0x1040549e */ esp -= 4; M32(esp) = 0x1040968du; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409688u); RETCHK(0x1040968du, 0x10409688u); LOADALL;
  /* 1040968d push dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409690 call 0x1040549e */ esp -= 4; M32(esp) = 0x10409695u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409690u); RETCHK(0x10409695u, 0x10409690u); LOADALL;
  /* 10409695 push dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409698 call 0x1040549e */ esp -= 4; M32(esp) = 0x1040969du; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409698u); RETCHK(0x1040969du, 0x10409698u); LOADALL;
  /* 1040969d push dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104096a0 call 0x1040549e */ esp -= 4; M32(esp) = 0x104096a5u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104096a0u); RETCHK(0x104096a5u, 0x104096a0u); LOADALL;
  /* 104096a5 push dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104096a8 call 0x1040549e */ esp -= 4; M32(esp) = 0x104096adu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104096a8u); RETCHK(0x104096adu, 0x104096a8u); LOADALL;
  /* 104096ad push dword ptr [esi + 0x74] */ { const u32 m_ = (u32)(esi + 0x74u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104096b0 call 0x1040549e */ esp -= 4; M32(esp) = 0x104096b5u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104096b0u); RETCHK(0x104096b5u, 0x104096b0u); LOADALL;
  /* 104096b5 push dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104096b8 call 0x1040549e */ esp -= 4; M32(esp) = 0x104096bdu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104096b8u); RETCHK(0x104096bdu, 0x104096b8u); LOADALL;
  /* 104096bd push dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104096c0 call 0x1040549e */ esp -= 4; M32(esp) = 0x104096c5u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104096c0u); RETCHK(0x104096c5u, 0x104096c0u); LOADALL;
  /* 104096c5 add esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104096c8 push dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104096ce call 0x1040549e */ esp -= 4; M32(esp) = 0x104096d3u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104096ceu); RETCHK(0x104096d3u, 0x104096ceu); LOADALL;
  /* 104096d3 push dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104096d9 call 0x1040549e */ esp -= 4; M32(esp) = 0x104096deu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104096d9u); RETCHK(0x104096deu, 0x104096d9u); LOADALL;
  /* 104096de push dword ptr [esi + 0x88] */ { const u32 m_ = (u32)(esi + 0x88u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104096e4 call 0x1040549e */ esp -= 4; M32(esp) = 0x104096e9u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104096e4u); RETCHK(0x104096e9u, 0x104096e4u); LOADALL;
  /* 104096e9 push dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104096ef call 0x1040549e */ esp -= 4; M32(esp) = 0x104096f4u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104096efu); RETCHK(0x104096f4u, 0x104096efu); LOADALL;
  /* 104096f4 push dword ptr [esi + 0x90] */ { const u32 m_ = (u32)(esi + 0x90u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104096fa call 0x1040549e */ esp -= 4; M32(esp) = 0x104096ffu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104096fau); RETCHK(0x104096ffu, 0x104096fau); LOADALL;
  /* 104096ff push dword ptr [esi + 0x94] */ { const u32 m_ = (u32)(esi + 0x94u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409705 call 0x1040549e */ esp -= 4; M32(esp) = 0x1040970au; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409705u); RETCHK(0x1040970au, 0x10409705u); LOADALL;
  /* 1040970a push dword ptr [esi + 0x98] */ { const u32 m_ = (u32)(esi + 0x98u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409710 call 0x1040549e */ esp -= 4; M32(esp) = 0x10409715u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409710u); RETCHK(0x10409715u, 0x10409710u); LOADALL;
  /* 10409715 push dword ptr [esi + 0x9c] */ { const u32 m_ = (u32)(esi + 0x9cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040971b call 0x1040549e */ esp -= 4; M32(esp) = 0x10409720u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040971bu); RETCHK(0x10409720u, 0x1040971bu); LOADALL;
  /* 10409720 push dword ptr [esi + 0xa0] */ { const u32 m_ = (u32)(esi + 0xa0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409726 call 0x1040549e */ esp -= 4; M32(esp) = 0x1040972bu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409726u); RETCHK(0x1040972bu, 0x10409726u); LOADALL;
  /* 1040972b push dword ptr [esi + 0xa4] */ { const u32 m_ = (u32)(esi + 0xa4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409731 call 0x1040549e */ esp -= 4; M32(esp) = 0x10409736u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409731u); RETCHK(0x10409736u, 0x10409731u); LOADALL;
  /* 10409736 push dword ptr [esi + 0xa8] */ { const u32 m_ = (u32)(esi + 0xa8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040973c call 0x1040549e */ esp -= 4; M32(esp) = 0x10409741u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040973cu); RETCHK(0x10409741u, 0x1040973cu); LOADALL;
  /* 10409741 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10409744:;
  /* 10409744 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10409745 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409746(CPU *c) {
  NATIVE_HOOK(0x10409746u) REGS; LOADALL;
L_10409746:;
  /* 10409746 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409747 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 1040974b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040974d je 0x104097a3 */ if (ZF_) goto L_104097a3;
  /* 1040974f mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10409751 mov ecx, dword ptr [0x1040d7d4] */ { const u32 m_ = (u32)(0x1040d7d4u); ecx = (u32)(M32(m_)); }
  /* 10409757 cmp eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409759 je 0x1040976a */ if (ZF_) goto L_1040976a;
  /* 1040975b cmp eax, dword ptr [0x1040d7a4] */ { const u32 m_ = (u32)(0x1040d7a4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409761 je 0x1040976a */ if (ZF_) goto L_1040976a;
  /* 10409763 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409764 call 0x1040549e */ esp -= 4; M32(esp) = 0x10409769u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409764u); RETCHK(0x10409769u, 0x10409764u); LOADALL;
  /* 10409769 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1040976a:;
  /* 1040976a mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 1040976d mov ecx, dword ptr [0x1040d7d4] */ { const u32 m_ = (u32)(0x1040d7d4u); ecx = (u32)(M32(m_)); }
  /* 10409773 cmp eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409776 je 0x10409787 */ if (ZF_) goto L_10409787;
  /* 10409778 cmp eax, dword ptr [0x1040d7a8] */ { const u32 m_ = (u32)(0x1040d7a8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040977e je 0x10409787 */ if (ZF_) goto L_10409787;
  /* 10409780 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409781 call 0x1040549e */ esp -= 4; M32(esp) = 0x10409786u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409781u); RETCHK(0x10409786u, 0x10409781u); LOADALL;
  /* 10409786 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10409787:;
  /* 10409787 mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 1040978a mov eax, dword ptr [0x1040d7d4] */ { const u32 m_ = (u32)(0x1040d7d4u); eax = (u32)(M32(m_)); }
  /* 1040978f cmp esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409792 je 0x104097a3 */ if (ZF_) goto L_104097a3;
  /* 10409794 cmp esi, dword ptr [0x1040d7ac] */ { const u32 m_ = (u32)(0x1040d7acu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040979a je 0x104097a3 */ if (ZF_) goto L_104097a3;
  /* 1040979c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040979d call 0x1040549e */ esp -= 4; M32(esp) = 0x104097a2u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040979du); RETCHK(0x104097a2u, 0x1040979du); LOADALL;
  /* 104097a2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_104097a3:;
  /* 104097a3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104097a4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104097a5(CPU *c) {
  NATIVE_HOOK(0x104097a5u) REGS; LOADALL;
L_104097a5:;
  /* 104097a5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104097a6 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 104097aa test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104097ac je 0x1040987c */ if (ZF_) goto L_1040987c;
  /* 104097b2 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 104097b5 mov ecx, dword ptr [0x1040d7d4] */ { const u32 m_ = (u32)(0x1040d7d4u); ecx = (u32)(M32(m_)); }
  /* 104097bb cmp eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104097be je 0x104097cf */ if (ZF_) goto L_104097cf;
  /* 104097c0 cmp eax, dword ptr [0x1040d7b0] */ { const u32 m_ = (u32)(0x1040d7b0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104097c6 je 0x104097cf */ if (ZF_) goto L_104097cf;
  /* 104097c8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104097c9 call 0x1040549e */ esp -= 4; M32(esp) = 0x104097ceu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104097c9u); RETCHK(0x104097ceu, 0x104097c9u); LOADALL;
  /* 104097ce pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_104097cf:;
  /* 104097cf mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 104097d2 mov ecx, dword ptr [0x1040d7d4] */ { const u32 m_ = (u32)(0x1040d7d4u); ecx = (u32)(M32(m_)); }
  /* 104097d8 cmp eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104097db je 0x104097ec */ if (ZF_) goto L_104097ec;
  /* 104097dd cmp eax, dword ptr [0x1040d7b4] */ { const u32 m_ = (u32)(0x1040d7b4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104097e3 je 0x104097ec */ if (ZF_) goto L_104097ec;
  /* 104097e5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104097e6 call 0x1040549e */ esp -= 4; M32(esp) = 0x104097ebu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104097e6u); RETCHK(0x104097ebu, 0x104097e6u); LOADALL;
  /* 104097eb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_104097ec:;
  /* 104097ec mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 104097ef mov ecx, dword ptr [0x1040d7d4] */ { const u32 m_ = (u32)(0x1040d7d4u); ecx = (u32)(M32(m_)); }
  /* 104097f5 cmp eax, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104097f8 je 0x10409809 */ if (ZF_) goto L_10409809;
  /* 104097fa cmp eax, dword ptr [0x1040d7b8] */ { const u32 m_ = (u32)(0x1040d7b8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409800 je 0x10409809 */ if (ZF_) goto L_10409809;
  /* 10409802 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409803 call 0x1040549e */ esp -= 4; M32(esp) = 0x10409808u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409803u); RETCHK(0x10409808u, 0x10409803u); LOADALL;
  /* 10409808 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10409809:;
  /* 10409809 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 1040980c mov ecx, dword ptr [0x1040d7d4] */ { const u32 m_ = (u32)(0x1040d7d4u); ecx = (u32)(M32(m_)); }
  /* 10409812 cmp eax, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409815 je 0x10409826 */ if (ZF_) goto L_10409826;
  /* 10409817 cmp eax, dword ptr [0x1040d7bc] */ { const u32 m_ = (u32)(0x1040d7bcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040981d je 0x10409826 */ if (ZF_) goto L_10409826;
  /* 1040981f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409820 call 0x1040549e */ esp -= 4; M32(esp) = 0x10409825u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409820u); RETCHK(0x10409825u, 0x10409820u); LOADALL;
  /* 10409825 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10409826:;
  /* 10409826 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10409829 mov ecx, dword ptr [0x1040d7d4] */ { const u32 m_ = (u32)(0x1040d7d4u); ecx = (u32)(M32(m_)); }
  /* 1040982f cmp eax, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409832 je 0x10409843 */ if (ZF_) goto L_10409843;
  /* 10409834 cmp eax, dword ptr [0x1040d7c0] */ { const u32 m_ = (u32)(0x1040d7c0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040983a je 0x10409843 */ if (ZF_) goto L_10409843;
  /* 1040983c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040983d call 0x1040549e */ esp -= 4; M32(esp) = 0x10409842u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040983du); RETCHK(0x10409842u, 0x1040983du); LOADALL;
  /* 10409842 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10409843:;
  /* 10409843 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 10409846 mov ecx, dword ptr [0x1040d7d4] */ { const u32 m_ = (u32)(0x1040d7d4u); ecx = (u32)(M32(m_)); }
  /* 1040984c cmp eax, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040984f je 0x10409860 */ if (ZF_) goto L_10409860;
  /* 10409851 cmp eax, dword ptr [0x1040d7c4] */ { const u32 m_ = (u32)(0x1040d7c4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409857 je 0x10409860 */ if (ZF_) goto L_10409860;
  /* 10409859 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040985a call 0x1040549e */ esp -= 4; M32(esp) = 0x1040985fu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040985au); RETCHK(0x1040985fu, 0x1040985au); LOADALL;
  /* 1040985f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10409860:;
  /* 10409860 mov esi, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); esi = (u32)(M32(m_)); }
  /* 10409863 mov eax, dword ptr [0x1040d7d4] */ { const u32 m_ = (u32)(0x1040d7d4u); eax = (u32)(M32(m_)); }
  /* 10409868 cmp esi, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040986b je 0x1040987c */ if (ZF_) goto L_1040987c;
  /* 1040986d cmp esi, dword ptr [0x1040d7c8] */ { const u32 m_ = (u32)(0x1040d7c8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409873 je 0x1040987c */ if (ZF_) goto L_1040987c;
  /* 10409875 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409876 call 0x1040549e */ esp -= 4; M32(esp) = 0x1040987bu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409876u); RETCHK(0x1040987bu, 0x10409876u); LOADALL;
  /* 1040987b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1040987c:;
  /* 1040987c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040987d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409988(CPU *c) {
  NATIVE_HOOK(0x10409988u) REGS; LOADALL;
L_10409988:;
  /* 10409988 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 1040998a push 0x1040c138 */ { u32 v_ = 0x1040c138u; esp -= 4; M32(esp) = v_; }
  /* 1040998f call 0x104056c0 */ esp -= 4; M32(esp) = 0x10409994u; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x1040998fu); RETCHK(0x10409994u, 0x1040998fu); LOADALL;
  /* 10409994 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10409996 cmp dword ptr [0x1040dccc], esi */ { const u32 m_ = (u32)(0x1040dcccu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040999c jne 0x104099d3 */ if (!ZF_) goto L_104099d3;
  /* 1040999e lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 104099a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104099a2 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 104099a4 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104099a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104099a6 push 0x1040c134 */ { u32 v_ = 0x1040c134u; esp -= 4; M32(esp) = v_; }
  /* 104099ab push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104099ac call dword ptr [0x1040b0dc] */ { const u32 m_ = (u32)(0x1040b0dcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104099b2u; SAVEALL; call_ind(c, t_); RETCHK(0x104099b2u, 0x104099acu); LOADALL; }
  /* 104099b2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104099b4 je 0x104099be */ if (ZF_) goto L_104099be;
  /* 104099b6 mov dword ptr [0x1040dccc], edi */ { const u32 m_ = (u32)(0x1040dcccu); M32(m_) = (u32)(edi); }
  /* 104099bc jmp 0x104099d3 */ goto L_104099d3;
L_104099be:;
  /* 104099be call dword ptr [0x1040b03c] */ { const u32 m_ = (u32)(0x1040b03cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104099c4u; SAVEALL; call_ind(c, t_); RETCHK(0x104099c4u, 0x104099beu); LOADALL; }
  /* 104099c4 cmp eax, 0x78 */ { u32 a_ = eax, b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104099c7 jne 0x104099d3 */ if (!ZF_) goto L_104099d3;
  /* 104099c9 mov dword ptr [0x1040dccc], 2 */ { const u32 m_ = (u32)(0x1040dcccu); M32(m_) = (u32)(0x2u); }
L_104099d3:;
  /* 104099d3 mov eax, dword ptr [0x1040dccc] */ { const u32 m_ = (u32)(0x1040dcccu); eax = (u32)(M32(m_)); }
  /* 104099d8 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104099db je 0x10409acb */ if (ZF_) goto L_10409acb;
  /* 104099e1 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104099e3 je 0x10409acb */ if (ZF_) goto L_10409acb;
  /* 104099e9 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104099ec jne 0x10409af1 */ if (!ZF_) goto L_10409af1;
  /* 104099f2 mov dword ptr [ebp - 0x24], esi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(esi); }
  /* 104099f5 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 104099f8 cmp dword ptr [ebp + 0x18], esi */ { const u32 m_ = (u32)(ebp + 0x18u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104099fb jne 0x10409a05 */ if (!ZF_) goto L_10409a05;
  /* 104099fd mov eax, dword ptr [0x1040dcc4] */ { const u32 m_ = (u32)(0x1040dcc4u); eax = (u32)(M32(m_)); }
  /* 10409a02 mov dword ptr [ebp + 0x18], eax */ { const u32 m_ = (u32)(ebp + 0x18u); M32(m_) = (u32)(eax); }
L_10409a05:;
  /* 10409a05 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409a06 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409a07 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409a0a push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409a0d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409a0f cmp dword ptr [ebp + 0x20], esi */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409a12 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 10409a15 lea eax, [eax*8 + 1] */ eax = (u32)((u32)(eax * 8u + 0x1u));
  /* 10409a1c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409a1d push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409a20 call dword ptr [0x1040b0d8] */ { const u32 m_ = (u32)(0x1040b0d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409a26u; SAVEALL; call_ind(c, t_); RETCHK(0x10409a26u, 0x10409a20u); LOADALL; }
  /* 10409a26 mov edi, eax */ { edi = (u32)(eax); }
  /* 10409a28 mov dword ptr [ebp - 0x28], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edi); }
  /* 10409a2b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10409a2d je 0x10409af1 */ if (ZF_) goto L_10409af1;
  /* 10409a33 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10409a37 lea ebx, [edi + edi] */ ebx = (u32)((u32)(edi + edi));
  /* 10409a3a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10409a3c add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10409a3f and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409a42 call 0x10404cf0 */ esp -= 4; M32(esp) = 0x10409a47u; SAVEALL; F_10404cf0(c); ABI_CHECK(0x10404cf0u, 0x10409a42u); RETCHK(0x10409a47u, 0x10409a42u); LOADALL;
  /* 10409a47 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 10409a4a mov esi, esp */ { esi = (u32)(esp); }
  /* 10409a4c mov dword ptr [ebp - 0x2c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(esi); }
  /* 10409a4f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409a50 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10409a52 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409a53 call 0x10409170 */ esp -= 4; M32(esp) = 0x10409a58u; SAVEALL; F_10409170(c); ABI_CHECK(0x10409170u, 0x10409a53u); RETCHK(0x10409a58u, 0x10409a53u); LOADALL;
  /* 10409a58 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10409a5b or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10409a5f jmp 0x10409a76 */ goto L_10409a76;
L_10409a76:;
  /* 10409a76 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10409a78 jne 0x10409a91 */ if (!ZF_) goto L_10409a91;
  /* 10409a7a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409a7b push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 10409a7d call 0x104066e3 */ esp -= 4; M32(esp) = 0x10409a82u; SAVEALL; F_104066e3(c); ABI_CHECK(0x104066e3u, 0x10409a7du); RETCHK(0x10409a82u, 0x10409a7du); LOADALL;
  /* 10409a82 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10409a83 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10409a84 mov esi, eax */ { esi = (u32)(eax); }
  /* 10409a86 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10409a88 je 0x10409af1 */ if (ZF_) goto L_10409af1;
  /* 10409a8a mov dword ptr [ebp - 0x20], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x1u); }
L_10409a91:;
  /* 10409a91 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409a92 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409a93 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409a96 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409a99 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10409a9b push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409a9e call dword ptr [0x1040b0d8] */ { const u32 m_ = (u32)(0x1040b0d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409aa4u; SAVEALL; call_ind(c, t_); RETCHK(0x10409aa4u, 0x10409a9eu); LOADALL; }
  /* 10409aa4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10409aa6 je 0x10409ab9 */ if (ZF_) goto L_10409ab9;
  /* 10409aa8 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409aab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409aac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409aad push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409ab0 call dword ptr [0x1040b0dc] */ { const u32 m_ = (u32)(0x1040b0dcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409ab6u; SAVEALL; call_ind(c, t_); RETCHK(0x10409ab6u, 0x10409ab0u); LOADALL; }
  /* 10409ab6 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
L_10409ab9:;
  /* 10409ab9 cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409abd je 0x10409ac6 */ if (ZF_) goto L_10409ac6;
  /* 10409abf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409ac0 call 0x1040549e */ esp -= 4; M32(esp) = 0x10409ac5u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409ac0u); RETCHK(0x10409ac5u, 0x10409ac0u); LOADALL;
  /* 10409ac5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10409ac6:;
  /* 10409ac6 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 10409ac9 jmp 0x10409b39 */ goto L_10409b39;
L_10409acb:;
  /* 10409acb mov ebx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 10409ace cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409ad0 jne 0x10409ad8 */ if (!ZF_) goto L_10409ad8;
  /* 10409ad2 mov ebx, dword ptr [0x1040dcb4] */ { const u32 m_ = (u32)(0x1040dcb4u); ebx = (u32)(M32(m_)); }
L_10409ad8:;
  /* 10409ad8 mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 10409adb test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10409add jne 0x10409ae5 */ if (!ZF_) goto L_10409ae5;
  /* 10409adf mov edi, dword ptr [0x1040dcc4] */ { const u32 m_ = (u32)(0x1040dcc4u); edi = (u32)(M32(m_)); }
L_10409ae5:;
  /* 10409ae5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409ae6 call 0x1040a519 */ esp -= 4; M32(esp) = 0x10409aebu; SAVEALL; F_1040a519(c); ABI_CHECK(0x1040a519u, 0x10409ae6u); RETCHK(0x10409aebu, 0x10409ae6u); LOADALL;
  /* 10409aeb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10409aec cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409aef jne 0x10409af5 */ if (!ZF_) goto L_10409af5;
L_10409af1:;
  /* 10409af1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409af3 jmp 0x10409b39 */ goto L_10409b39;
L_10409af5:;
  /* 10409af5 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409af7 je 0x10409b17 */ if (ZF_) goto L_10409b17;
  /* 10409af9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10409afb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10409afd lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 10409b00 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10409b01 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409b04 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409b05 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409b06 call 0x1040a55c */ esp -= 4; M32(esp) = 0x10409b0bu; SAVEALL; F_1040a55c(c); ABI_CHECK(0x1040a55cu, 0x10409b06u); RETCHK(0x10409b0bu, 0x10409b06u); LOADALL;
  /* 10409b0b add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10409b0e mov esi, eax */ { esi = (u32)(eax); }
  /* 10409b10 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10409b12 je 0x10409af1 */ if (ZF_) goto L_10409af1;
  /* 10409b14 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
L_10409b17:;
  /* 10409b17 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409b1a push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409b1d push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409b20 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409b23 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409b24 call dword ptr [0x1040b0d4] */ { const u32 m_ = (u32)(0x1040b0d4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409b2au; SAVEALL; call_ind(c, t_); RETCHK(0x10409b2au, 0x10409b24u); LOADALL; }
  /* 10409b2a mov edi, eax */ { edi = (u32)(eax); }
  /* 10409b2c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10409b2e je 0x10409b37 */ if (ZF_) goto L_10409b37;
  /* 10409b30 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409b31 call 0x1040549e */ esp -= 4; M32(esp) = 0x10409b36u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409b31u); RETCHK(0x10409b36u, 0x10409b31u); LOADALL;
  /* 10409b36 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10409b37:;
  /* 10409b37 mov eax, edi */ { eax = (u32)(edi); }
L_10409b39:;
  /* 10409b39 lea esp, [ebp - 0x38] */ esp = (u32)((u32)(ebp + 0xffffffc8u));
  /* 10409b3c call 0x104056fb */ esp -= 4; M32(esp) = 0x10409b41u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10409b3cu); RETCHK(0x10409b41u, 0x10409b3cu); LOADALL;
  /* 10409b41 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409a61(CPU *c) {
  NATIVE_HOOK(0x10409a61u) REGS; LOADALL;
L_10409a61:;
  /* 10409a61 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409a63 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10409a64 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409a65(CPU *c) {
  NATIVE_HOOK(0x10409a65u) REGS; LOADALL;
L_10409a65:;
  /* 10409a65 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10409a68 call 0x1040a3ae */ esp -= 4; M32(esp) = 0x10409a6du; SAVEALL; F_1040a3ae(c); ABI_CHECK(0x1040a3aeu, 0x10409a68u); RETCHK(0x10409a6du, 0x10409a68u); LOADALL;
  /* 10409a6d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10409a6f or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10409a73 mov edi, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edi = (u32)(M32(m_)); }
  /* 10409a76 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10409a78 jne 0x10409a91 */ if (!ZF_) goto L_10409a91;
  /* 10409a7a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409a7b push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 10409a7d call 0x104066e3 */ esp -= 4; M32(esp) = 0x10409a82u; SAVEALL; F_104066e3(c); ABI_CHECK(0x104066e3u, 0x10409a7du); RETCHK(0x10409a82u, 0x10409a7du); LOADALL;
  /* 10409a82 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10409a83 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10409a84 mov esi, eax */ { esi = (u32)(eax); }
  /* 10409a86 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10409a88 je 0x10409af1 */ if (ZF_) goto L_10409af1;
  /* 10409a8a mov dword ptr [ebp - 0x20], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x1u); }
L_10409a91:;
  /* 10409a91 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409a92 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409a93 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409a96 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409a99 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10409a9b push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409a9e call dword ptr [0x1040b0d8] */ { const u32 m_ = (u32)(0x1040b0d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409aa4u; SAVEALL; call_ind(c, t_); RETCHK(0x10409aa4u, 0x10409a9eu); LOADALL; }
  /* 10409aa4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10409aa6 je 0x10409ab9 */ if (ZF_) goto L_10409ab9;
  /* 10409aa8 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409aab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409aac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409aad push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409ab0 call dword ptr [0x1040b0dc] */ { const u32 m_ = (u32)(0x1040b0dcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409ab6u; SAVEALL; call_ind(c, t_); RETCHK(0x10409ab6u, 0x10409ab0u); LOADALL; }
  /* 10409ab6 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
L_10409ab9:;
  /* 10409ab9 cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409abd je 0x10409ac6 */ if (ZF_) goto L_10409ac6;
  /* 10409abf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409ac0 call 0x1040549e */ esp -= 4; M32(esp) = 0x10409ac5u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409ac0u); RETCHK(0x10409ac5u, 0x10409ac0u); LOADALL;
  /* 10409ac5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10409ac6:;
  /* 10409ac6 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 10409ac9 jmp 0x10409b39 */ goto L_10409b39;
L_10409af1:;
  /* 10409af1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409af3 jmp 0x10409b39 */ goto L_10409b39;
L_10409b39:;
  /* 10409b39 lea esp, [ebp - 0x38] */ esp = (u32)((u32)(ebp + 0xffffffc8u));
  /* 10409b3c call 0x104056fb */ esp -= 4; M32(esp) = 0x10409b41u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10409b3cu); RETCHK(0x10409b41u, 0x10409b3cu); LOADALL;
  /* 10409b41 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409bd0(CPU *c) {
  NATIVE_HOOK(0x10409bd0u) REGS; LOADALL;
L_10409bd0:;
  /* 10409bd0 push 0x38 */ { u32 v_ = 0x38u; esp -= 4; M32(esp) = v_; }
  /* 10409bd2 push 0x1040c148 */ { u32 v_ = 0x1040c148u; esp -= 4; M32(esp) = v_; }
  /* 10409bd7 call 0x104056c0 */ esp -= 4; M32(esp) = 0x10409bdcu; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x10409bd7u); RETCHK(0x10409bdcu, 0x10409bd7u); LOADALL;
  /* 10409bdc xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10409bde cmp dword ptr [0x1040dcf4], ebx */ { const u32 m_ = (u32)(0x1040dcf4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409be4 jne 0x10409c1e */ if (!ZF_) goto L_10409c1e;
  /* 10409be6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409be7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409be8 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10409bea inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10409beb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409bec push 0x1040c134 */ { u32 v_ = 0x1040c134u; esp -= 4; M32(esp) = v_; }
  /* 10409bf1 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10409bf6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409bf7 call dword ptr [0x1040b0e4] */ { const u32 m_ = (u32)(0x1040b0e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409bfdu; SAVEALL; call_ind(c, t_); RETCHK(0x10409bfdu, 0x10409bf7u); LOADALL; }
  /* 10409bfd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10409bff je 0x10409c09 */ if (ZF_) goto L_10409c09;
  /* 10409c01 mov dword ptr [0x1040dcf4], esi */ { const u32 m_ = (u32)(0x1040dcf4u); M32(m_) = (u32)(esi); }
  /* 10409c07 jmp 0x10409c1e */ goto L_10409c1e;
L_10409c09:;
  /* 10409c09 call dword ptr [0x1040b03c] */ { const u32 m_ = (u32)(0x1040b03cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409c0fu; SAVEALL; call_ind(c, t_); RETCHK(0x10409c0fu, 0x10409c09u); LOADALL; }
  /* 10409c0f cmp eax, 0x78 */ { u32 a_ = eax, b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409c12 jne 0x10409c1e */ if (!ZF_) goto L_10409c1e;
  /* 10409c14 mov dword ptr [0x1040dcf4], 2 */ { const u32 m_ = (u32)(0x1040dcf4u); M32(m_) = (u32)(0x2u); }
L_10409c1e:;
  /* 10409c1e cmp dword ptr [ebp + 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409c21 jle 0x10409c3e */ if ((ZF_|LT_)) goto L_10409c3e;
  /* 10409c23 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 10409c26 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
L_10409c29:;
  /* 10409c29 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10409c2a cmp byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10409c2c je 0x10409c36 */ if (ZF_) goto L_10409c36;
  /* 10409c2e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10409c2f cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409c31 jne 0x10409c29 */ if (!ZF_) goto L_10409c29;
  /* 10409c33 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_10409c36:;
  /* 10409c36 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409c39 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10409c3b add dword ptr [ebp + 0x14], eax */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
L_10409c3e:;
  /* 10409c3e mov eax, dword ptr [0x1040dcf4] */ { const u32 m_ = (u32)(0x1040dcf4u); eax = (u32)(M32(m_)); }
  /* 10409c43 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409c46 je 0x10409e28 */ if (ZF_) goto L_10409e28;
  /* 10409c4c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409c4e je 0x10409e28 */ if (ZF_) goto L_10409e28;
  /* 10409c54 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409c57 jne 0x10409e5b */ if (!ZF_) goto L_10409e5b;
  /* 10409c5d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10409c5f mov dword ptr [ebp - 0x2c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edi); }
  /* 10409c62 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 10409c65 mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 10409c68 cmp dword ptr [ebp + 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409c6b jne 0x10409c75 */ if (!ZF_) goto L_10409c75;
  /* 10409c6d mov eax, dword ptr [0x1040dcc4] */ { const u32 m_ = (u32)(0x1040dcc4u); eax = (u32)(M32(m_)); }
  /* 10409c72 mov dword ptr [ebp + 0x20], eax */ { const u32 m_ = (u32)(ebp + 0x20u); M32(m_) = (u32)(eax); }
L_10409c75:;
  /* 10409c75 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409c76 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409c77 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409c7a push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409c7d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409c7f cmp dword ptr [ebp + 0x24], ebx */ { const u32 m_ = (u32)(ebp + 0x24u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409c82 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 10409c85 lea eax, [eax*8 + 1] */ eax = (u32)((u32)(eax * 8u + 0x1u));
  /* 10409c8c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409c8d push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409c90 call dword ptr [0x1040b0d8] */ { const u32 m_ = (u32)(0x1040b0d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409c96u; SAVEALL; call_ind(c, t_); RETCHK(0x10409c96u, 0x10409c90u); LOADALL; }
  /* 10409c96 mov esi, eax */ { esi = (u32)(eax); }
  /* 10409c98 mov dword ptr [ebp - 0x30], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(esi); }
  /* 10409c9b cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409c9d je 0x10409e5b */ if (ZF_) goto L_10409e5b;
  /* 10409ca3 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 10409caa lea eax, [esi + esi] */ eax = (u32)((u32)(esi + esi));
  /* 10409cad add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10409cb0 and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409cb3 call 0x10404cf0 */ esp -= 4; M32(esp) = 0x10409cb8u; SAVEALL; F_10404cf0(c); ABI_CHECK(0x10404cf0u, 0x10409cb3u); RETCHK(0x10409cb8u, 0x10409cb3u); LOADALL;
  /* 10409cb8 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 10409cbb mov eax, esp */ { eax = (u32)(esp); }
  /* 10409cbd mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10409cc0 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10409cc4 jmp 0x10409ce1 */ goto L_10409ce1;
L_10409ce1:;
  /* 10409ce1 cmp dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409ce4 jne 0x10409d02 */ if (!ZF_) goto L_10409d02;
  /* 10409ce6 lea eax, [esi + esi] */ eax = (u32)((u32)(esi + esi));
  /* 10409ce9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409cea call 0x104058bc */ esp -= 4; M32(esp) = 0x10409cefu; SAVEALL; F_104058bc(c); ABI_CHECK(0x104058bcu, 0x10409ceau); RETCHK(0x10409cefu, 0x10409ceau); LOADALL;
  /* 10409cef pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10409cf0 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10409cf3 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409cf5 je 0x10409e5b */ if (ZF_) goto L_10409e5b;
  /* 10409cfb mov dword ptr [ebp - 0x38], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x1u); }
L_10409d02:;
  /* 10409d02 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409d03 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d06 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d09 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d0c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10409d0e push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d11 call dword ptr [0x1040b0d8] */ { const u32 m_ = (u32)(0x1040b0d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409d17u; SAVEALL; call_ind(c, t_); RETCHK(0x10409d17u, 0x10409d11u); LOADALL; }
  /* 10409d17 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10409d19 je 0x10409e05 */ if (ZF_) goto L_10409e05;
  /* 10409d1f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409d20 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409d21 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409d22 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d25 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d28 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d2b call dword ptr [0x1040b0e4] */ { const u32 m_ = (u32)(0x1040b0e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409d31u; SAVEALL; call_ind(c, t_); RETCHK(0x10409d31u, 0x10409d2bu); LOADALL; }
  /* 10409d31 mov edi, eax */ { edi = (u32)(eax); }
  /* 10409d33 mov dword ptr [ebp - 0x2c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edi); }
  /* 10409d36 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409d38 je 0x10409e05 */ if (ZF_) goto L_10409e05;
  /* 10409d3e test byte ptr [ebp + 0xd], 4 */ { const u32 m_ = (u32)(ebp + 0xdu); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10409d42 je 0x10409d71 */ if (ZF_) goto L_10409d71;
  /* 10409d44 cmp dword ptr [ebp + 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409d47 je 0x10409e05 */ if (ZF_) goto L_10409e05;
  /* 10409d4d cmp edi, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409d50 jg 0x10409e05 */ if (!(ZF_|LT_)) goto L_10409e05;
  /* 10409d56 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d59 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d5c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409d5d push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d60 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d63 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d66 call dword ptr [0x1040b0e4] */ { const u32 m_ = (u32)(0x1040b0e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409d6cu; SAVEALL; call_ind(c, t_); RETCHK(0x10409d6cu, 0x10409d66u); LOADALL; }
  /* 10409d6c jmp 0x10409e05 */ goto L_10409e05;
L_10409d71:;
  /* 10409d71 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 10409d78 lea eax, [edi + edi] */ eax = (u32)((u32)(edi + edi));
  /* 10409d7b add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10409d7e and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409d81 call 0x10404cf0 */ esp -= 4; M32(esp) = 0x10409d86u; SAVEALL; F_10404cf0(c); ABI_CHECK(0x10404cf0u, 0x10409d81u); RETCHK(0x10409d86u, 0x10409d81u); LOADALL;
  /* 10409d86 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 10409d89 mov eax, esp */ { eax = (u32)(esp); }
  /* 10409d8b mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10409d8e or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10409d92 jmp 0x10409daf */ goto L_10409daf;
L_10409daf:;
  /* 10409daf cmp dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409db2 jne 0x10409dcc */ if (!ZF_) goto L_10409dcc;
  /* 10409db4 lea eax, [edi + edi] */ eax = (u32)((u32)(edi + edi));
  /* 10409db7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409db8 call 0x104058bc */ esp -= 4; M32(esp) = 0x10409dbdu; SAVEALL; F_104058bc(c); ABI_CHECK(0x104058bcu, 0x10409db8u); RETCHK(0x10409dbdu, 0x10409db8u); LOADALL;
  /* 10409dbd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10409dbe mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10409dc1 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409dc3 je 0x10409e05 */ if (ZF_) goto L_10409e05;
  /* 10409dc5 mov dword ptr [ebp - 0x34], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x1u); }
L_10409dcc:;
  /* 10409dcc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409dcd push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409dd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409dd1 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409dd4 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409dd7 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409dda call dword ptr [0x1040b0e4] */ { const u32 m_ = (u32)(0x1040b0e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409de0u; SAVEALL; call_ind(c, t_); RETCHK(0x10409de0u, 0x10409ddau); LOADALL; }
  /* 10409de0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10409de2 je 0x10409e05 */ if (ZF_) goto L_10409e05;
  /* 10409de4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409de5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409de6 cmp dword ptr [ebp + 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409de9 jne 0x10409def */ if (!ZF_) goto L_10409def;
  /* 10409deb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409dec push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409ded jmp 0x10409df5 */ goto L_10409df5;
L_10409def:;
  /* 10409def push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409df2 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
L_10409df5:;
  /* 10409df5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409df6 push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409df9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409dfa push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409dfd call dword ptr [0x1040b07c] */ { const u32 m_ = (u32)(0x1040b07cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409e03u; SAVEALL; call_ind(c, t_); RETCHK(0x10409e03u, 0x10409dfdu); LOADALL; }
  /* 10409e03 mov edi, eax */ { edi = (u32)(eax); }
L_10409e05:;
  /* 10409e05 cmp dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409e08 je 0x10409e13 */ if (ZF_) goto L_10409e13;
  /* 10409e0a push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409e0d call 0x1040549e */ esp -= 4; M32(esp) = 0x10409e12u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409e0du); RETCHK(0x10409e12u, 0x10409e0du); LOADALL;
  /* 10409e12 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10409e13:;
  /* 10409e13 cmp dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409e16 je 0x10409e21 */ if (ZF_) goto L_10409e21;
  /* 10409e18 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409e1b call 0x1040549e */ esp -= 4; M32(esp) = 0x10409e20u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409e1bu); RETCHK(0x10409e20u, 0x10409e1bu); LOADALL;
  /* 10409e20 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10409e21:;
  /* 10409e21 mov eax, edi */ { eax = (u32)(edi); }
  /* 10409e23 jmp 0x10409f83 */ goto L_10409f83;
L_10409e28:;
  /* 10409e28 mov dword ptr [ebp - 0x28], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ebx); }
  /* 10409e2b xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10409e2d mov dword ptr [ebp - 0x3c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(ebx); }
  /* 10409e30 cmp dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409e33 jne 0x10409e3d */ if (!ZF_) goto L_10409e3d;
  /* 10409e35 mov eax, dword ptr [0x1040dcb4] */ { const u32 m_ = (u32)(0x1040dcb4u); eax = (u32)(M32(m_)); }
  /* 10409e3a mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
L_10409e3d:;
  /* 10409e3d cmp dword ptr [ebp + 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409e40 jne 0x10409e4a */ if (!ZF_) goto L_10409e4a;
  /* 10409e42 mov eax, dword ptr [0x1040dcc4] */ { const u32 m_ = (u32)(0x1040dcc4u); eax = (u32)(M32(m_)); }
  /* 10409e47 mov dword ptr [ebp + 0x20], eax */ { const u32 m_ = (u32)(ebp + 0x20u); M32(m_) = (u32)(eax); }
L_10409e4a:;
  /* 10409e4a push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409e4d call 0x1040a519 */ esp -= 4; M32(esp) = 0x10409e52u; SAVEALL; F_1040a519(c); ABI_CHECK(0x1040a519u, 0x10409e4du); RETCHK(0x10409e52u, 0x10409e4du); LOADALL;
  /* 10409e52 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10409e53 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 10409e56 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409e59 jne 0x10409e62 */ if (!ZF_) goto L_10409e62;
L_10409e5b:;
  /* 10409e5b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409e5d jmp 0x10409f83 */ goto L_10409f83;
L_10409e62:;
  /* 10409e62 cmp eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409e65 je 0x10409f59 */ if (ZF_) goto L_10409f59;
  /* 10409e6b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409e6c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409e6d lea ecx, [ebp + 0x14] */ ecx = (u32)((u32)(ebp + 0x14u));
  /* 10409e70 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10409e71 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409e74 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409e75 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409e78 call 0x1040a55c */ esp -= 4; M32(esp) = 0x10409e7du; SAVEALL; F_1040a55c(c); ABI_CHECK(0x1040a55cu, 0x10409e78u); RETCHK(0x10409e7du, 0x10409e78u); LOADALL;
  /* 10409e7d add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10409e80 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 10409e83 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409e85 je 0x10409e5b */ if (ZF_) goto L_10409e5b;
  /* 10409e87 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409e88 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409e89 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409e8c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409e8d push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409e90 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409e93 call dword ptr [0x1040b0e0] */ { const u32 m_ = (u32)(0x1040b0e0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409e99u; SAVEALL; call_ind(c, t_); RETCHK(0x10409e99u, 0x10409e93u); LOADALL; }
  /* 10409e99 mov esi, eax */ { esi = (u32)(eax); }
  /* 10409e9b mov dword ptr [ebp - 0x24], esi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(esi); }
  /* 10409e9e cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409ea0 je 0x10409f48 */ if (ZF_) goto L_10409f48;
  /* 10409ea6 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 10409ea9 add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10409eac and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409eaf call 0x10404cf0 */ esp -= 4; M32(esp) = 0x10409eb4u; SAVEALL; F_10404cf0(c); ABI_CHECK(0x10404cf0u, 0x10409eafu); RETCHK(0x10409eb4u, 0x10409eafu); LOADALL;
  /* 10409eb4 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 10409eb7 mov edi, esp */ { edi = (u32)(esp); }
  /* 10409eb9 mov dword ptr [ebp - 0x44], edi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(edi); }
  /* 10409ebc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409ebd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409ebe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409ebf call 0x10409170 */ esp -= 4; M32(esp) = 0x10409ec4u; SAVEALL; F_10409170(c); ABI_CHECK(0x10409170u, 0x10409ebfu); RETCHK(0x10409ec4u, 0x10409ebfu); LOADALL;
  /* 10409ec4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10409ec7 jmp 0x10409ed9 */ goto L_10409ed9;
L_10409ed9:;
  /* 10409ed9 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10409edd cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409edf jne 0x10409f04 */ if (!ZF_) goto L_10409f04;
  /* 10409ee1 push dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409ee4 call 0x104058bc */ esp -= 4; M32(esp) = 0x10409ee9u; SAVEALL; F_104058bc(c); ABI_CHECK(0x104058bcu, 0x10409ee4u); RETCHK(0x10409ee9u, 0x10409ee4u); LOADALL;
  /* 10409ee9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10409eea mov edi, eax */ { edi = (u32)(eax); }
  /* 10409eec cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409eee je 0x10409f21 */ if (ZF_) goto L_10409f21;
  /* 10409ef0 push dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409ef3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409ef4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409ef5 call 0x10409170 */ esp -= 4; M32(esp) = 0x10409efau; SAVEALL; F_10409170(c); ABI_CHECK(0x10409170u, 0x10409ef5u); RETCHK(0x10409efau, 0x10409ef5u); LOADALL;
  /* 10409efa add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10409efd mov dword ptr [ebp - 0x3c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0x1u); }
L_10409f04:;
  /* 10409f04 push dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f07 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409f08 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f0b push dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f0e push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f11 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f14 call dword ptr [0x1040b0e0] */ { const u32 m_ = (u32)(0x1040b0e0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409f1au; SAVEALL; call_ind(c, t_); RETCHK(0x10409f1au, 0x10409f14u); LOADALL; }
  /* 10409f1a mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 10409f1d cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409f1f jne 0x10409f25 */ if (!ZF_) goto L_10409f25;
L_10409f21:;
  /* 10409f21 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10409f23 jmp 0x10409f4b */ goto L_10409f4b;
L_10409f25:;
  /* 10409f25 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f28 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f2b lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 10409f2e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409f2f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409f30 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f33 push dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f36 call 0x1040a55c */ esp -= 4; M32(esp) = 0x10409f3bu; SAVEALL; F_1040a55c(c); ABI_CHECK(0x1040a55cu, 0x10409f36u); RETCHK(0x10409f3bu, 0x10409f36u); LOADALL;
  /* 10409f3b add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10409f3e mov esi, eax */ { esi = (u32)(eax); }
  /* 10409f40 neg esi */ { u32 a_ = esi; u32 r_ = (0u - a_) & 0xffffffffu; esi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10409f42 sbb esi, esi */ { u32 a_ = esi, b_ = esi; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); esi = (u32)(r_); }
  /* 10409f44 neg esi */ { u32 a_ = esi; u32 r_ = (0u - a_) & 0xffffffffu; esi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10409f46 jmp 0x10409f4b */ goto L_10409f4b;
L_10409f48:;
  /* 10409f48 mov esi, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); esi = (u32)(M32(m_)); }
L_10409f4b:;
  /* 10409f4b cmp dword ptr [ebp - 0x3c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409f4e je 0x10409f73 */ if (ZF_) goto L_10409f73;
  /* 10409f50 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409f51 call 0x1040549e */ esp -= 4; M32(esp) = 0x10409f56u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409f51u); RETCHK(0x10409f56u, 0x10409f51u); LOADALL;
  /* 10409f56 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10409f57 jmp 0x10409f73 */ goto L_10409f73;
L_10409f59:;
  /* 10409f59 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f5c push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f5f push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f62 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f65 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f68 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f6b call dword ptr [0x1040b0e0] */ { const u32 m_ = (u32)(0x1040b0e0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409f71u; SAVEALL; call_ind(c, t_); RETCHK(0x10409f71u, 0x10409f6bu); LOADALL; }
  /* 10409f71 mov esi, eax */ { esi = (u32)(eax); }
L_10409f73:;
  /* 10409f73 cmp dword ptr [ebp - 0x28], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409f76 je 0x10409f81 */ if (ZF_) goto L_10409f81;
  /* 10409f78 push dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f7b call 0x1040549e */ esp -= 4; M32(esp) = 0x10409f80u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409f7bu); RETCHK(0x10409f80u, 0x10409f7bu); LOADALL;
  /* 10409f80 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10409f81:;
  /* 10409f81 mov eax, esi */ { eax = (u32)(esi); }
L_10409f83:;
  /* 10409f83 lea esp, [ebp - 0x54] */ esp = (u32)((u32)(ebp + 0xffffffacu));
  /* 10409f86 call 0x104056fb */ esp -= 4; M32(esp) = 0x10409f8bu; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10409f86u); RETCHK(0x10409f8bu, 0x10409f86u); LOADALL;
  /* 10409f8b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409cc6(CPU *c) {
  NATIVE_HOOK(0x10409cc6u) REGS; LOADALL;
L_10409cc6:;
  /* 10409cc6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409cc8 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10409cc9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409cca(CPU *c) {
  NATIVE_HOOK(0x10409ccau) REGS; LOADALL;
L_10409cca:;
  /* 10409cca mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10409ccd call 0x1040a3ae */ esp -= 4; M32(esp) = 0x10409cd2u; SAVEALL; F_1040a3ae(c); ABI_CHECK(0x1040a3aeu, 0x10409ccdu); RETCHK(0x10409cd2u, 0x10409ccdu); LOADALL;
  /* 10409cd2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10409cd4 mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 10409cd7 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10409cdb mov edi, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edi = (u32)(M32(m_)); }
  /* 10409cde mov esi, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); esi = (u32)(M32(m_)); }
  /* 10409ce1 cmp dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409ce4 jne 0x10409d02 */ if (!ZF_) goto L_10409d02;
  /* 10409ce6 lea eax, [esi + esi] */ eax = (u32)((u32)(esi + esi));
  /* 10409ce9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409cea call 0x104058bc */ esp -= 4; M32(esp) = 0x10409cefu; SAVEALL; F_104058bc(c); ABI_CHECK(0x104058bcu, 0x10409ceau); RETCHK(0x10409cefu, 0x10409ceau); LOADALL;
  /* 10409cef pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10409cf0 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10409cf3 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409cf5 je 0x10409e5b */ if (ZF_) goto L_10409e5b;
  /* 10409cfb mov dword ptr [ebp - 0x38], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x1u); }
L_10409d02:;
  /* 10409d02 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409d03 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d06 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d09 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d0c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10409d0e push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d11 call dword ptr [0x1040b0d8] */ { const u32 m_ = (u32)(0x1040b0d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409d17u; SAVEALL; call_ind(c, t_); RETCHK(0x10409d17u, 0x10409d11u); LOADALL; }
  /* 10409d17 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10409d19 je 0x10409e05 */ if (ZF_) goto L_10409e05;
  /* 10409d1f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409d20 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409d21 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409d22 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d25 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d28 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d2b call dword ptr [0x1040b0e4] */ { const u32 m_ = (u32)(0x1040b0e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409d31u; SAVEALL; call_ind(c, t_); RETCHK(0x10409d31u, 0x10409d2bu); LOADALL; }
  /* 10409d31 mov edi, eax */ { edi = (u32)(eax); }
  /* 10409d33 mov dword ptr [ebp - 0x2c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edi); }
  /* 10409d36 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409d38 je 0x10409e05 */ if (ZF_) goto L_10409e05;
  /* 10409d3e test byte ptr [ebp + 0xd], 4 */ { const u32 m_ = (u32)(ebp + 0xdu); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10409d42 je 0x10409d71 */ if (ZF_) goto L_10409d71;
  /* 10409d44 cmp dword ptr [ebp + 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409d47 je 0x10409e05 */ if (ZF_) goto L_10409e05;
  /* 10409d4d cmp edi, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409d50 jg 0x10409e05 */ if (!(ZF_|LT_)) goto L_10409e05;
  /* 10409d56 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d59 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d5c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409d5d push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d60 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d63 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409d66 call dword ptr [0x1040b0e4] */ { const u32 m_ = (u32)(0x1040b0e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409d6cu; SAVEALL; call_ind(c, t_); RETCHK(0x10409d6cu, 0x10409d66u); LOADALL; }
  /* 10409d6c jmp 0x10409e05 */ goto L_10409e05;
L_10409d71:;
  /* 10409d71 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 10409d78 lea eax, [edi + edi] */ eax = (u32)((u32)(edi + edi));
  /* 10409d7b add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10409d7e and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409d81 call 0x10404cf0 */ esp -= 4; M32(esp) = 0x10409d86u; SAVEALL; F_10404cf0(c); ABI_CHECK(0x10404cf0u, 0x10409d81u); RETCHK(0x10409d86u, 0x10409d81u); LOADALL;
  /* 10409d86 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 10409d89 mov eax, esp */ { eax = (u32)(esp); }
  /* 10409d8b mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10409d8e or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10409d92 jmp 0x10409daf */ goto L_10409daf;
L_10409daf:;
  /* 10409daf cmp dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409db2 jne 0x10409dcc */ if (!ZF_) goto L_10409dcc;
  /* 10409db4 lea eax, [edi + edi] */ eax = (u32)((u32)(edi + edi));
  /* 10409db7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409db8 call 0x104058bc */ esp -= 4; M32(esp) = 0x10409dbdu; SAVEALL; F_104058bc(c); ABI_CHECK(0x104058bcu, 0x10409db8u); RETCHK(0x10409dbdu, 0x10409db8u); LOADALL;
  /* 10409dbd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10409dbe mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10409dc1 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409dc3 je 0x10409e05 */ if (ZF_) goto L_10409e05;
  /* 10409dc5 mov dword ptr [ebp - 0x34], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x1u); }
L_10409dcc:;
  /* 10409dcc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409dcd push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409dd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409dd1 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409dd4 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409dd7 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409dda call dword ptr [0x1040b0e4] */ { const u32 m_ = (u32)(0x1040b0e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409de0u; SAVEALL; call_ind(c, t_); RETCHK(0x10409de0u, 0x10409ddau); LOADALL; }
  /* 10409de0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10409de2 je 0x10409e05 */ if (ZF_) goto L_10409e05;
  /* 10409de4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409de5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409de6 cmp dword ptr [ebp + 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409de9 jne 0x10409def */ if (!ZF_) goto L_10409def;
  /* 10409deb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409dec push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409ded jmp 0x10409df5 */ goto L_10409df5;
L_10409def:;
  /* 10409def push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409df2 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
L_10409df5:;
  /* 10409df5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409df6 push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409df9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409dfa push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409dfd call dword ptr [0x1040b07c] */ { const u32 m_ = (u32)(0x1040b07cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409e03u; SAVEALL; call_ind(c, t_); RETCHK(0x10409e03u, 0x10409dfdu); LOADALL; }
  /* 10409e03 mov edi, eax */ { edi = (u32)(eax); }
L_10409e05:;
  /* 10409e05 cmp dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409e08 je 0x10409e13 */ if (ZF_) goto L_10409e13;
  /* 10409e0a push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409e0d call 0x1040549e */ esp -= 4; M32(esp) = 0x10409e12u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409e0du); RETCHK(0x10409e12u, 0x10409e0du); LOADALL;
  /* 10409e12 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10409e13:;
  /* 10409e13 cmp dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409e16 je 0x10409e21 */ if (ZF_) goto L_10409e21;
  /* 10409e18 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409e1b call 0x1040549e */ esp -= 4; M32(esp) = 0x10409e20u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409e1bu); RETCHK(0x10409e20u, 0x10409e1bu); LOADALL;
  /* 10409e20 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10409e21:;
  /* 10409e21 mov eax, edi */ { eax = (u32)(edi); }
  /* 10409e23 jmp 0x10409f83 */ goto L_10409f83;
L_10409e5b:;
  /* 10409e5b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409e5d jmp 0x10409f83 */ goto L_10409f83;
L_10409f83:;
  /* 10409f83 lea esp, [ebp - 0x54] */ esp = (u32)((u32)(ebp + 0xffffffacu));
  /* 10409f86 call 0x104056fb */ esp -= 4; M32(esp) = 0x10409f8bu; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10409f86u); RETCHK(0x10409f8bu, 0x10409f86u); LOADALL;
  /* 10409f8b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409d94(CPU *c) {
  NATIVE_HOOK(0x10409d94u) REGS; LOADALL;
L_10409d94:;
  /* 10409d94 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409d96 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10409d97 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409d98(CPU *c) {
  NATIVE_HOOK(0x10409d98u) REGS; LOADALL;
L_10409d98:;
  /* 10409d98 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10409d9b call 0x1040a3ae */ esp -= 4; M32(esp) = 0x10409da0u; SAVEALL; F_1040a3ae(c); ABI_CHECK(0x1040a3aeu, 0x10409d9bu); RETCHK(0x10409da0u, 0x10409d9bu); LOADALL;
  /* 10409da0 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10409da2 mov dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 10409da5 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10409da9 mov edi, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edi = (u32)(M32(m_)); }
  /* 10409dac mov esi, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); esi = (u32)(M32(m_)); }
  /* 10409daf cmp dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409db2 jne 0x10409dcc */ if (!ZF_) goto L_10409dcc;
  /* 10409db4 lea eax, [edi + edi] */ eax = (u32)((u32)(edi + edi));
  /* 10409db7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409db8 call 0x104058bc */ esp -= 4; M32(esp) = 0x10409dbdu; SAVEALL; F_104058bc(c); ABI_CHECK(0x104058bcu, 0x10409db8u); RETCHK(0x10409dbdu, 0x10409db8u); LOADALL;
  /* 10409dbd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10409dbe mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10409dc1 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409dc3 je 0x10409e05 */ if (ZF_) goto L_10409e05;
  /* 10409dc5 mov dword ptr [ebp - 0x34], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x1u); }
L_10409dcc:;
  /* 10409dcc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409dcd push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409dd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409dd1 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409dd4 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409dd7 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409dda call dword ptr [0x1040b0e4] */ { const u32 m_ = (u32)(0x1040b0e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409de0u; SAVEALL; call_ind(c, t_); RETCHK(0x10409de0u, 0x10409ddau); LOADALL; }
  /* 10409de0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10409de2 je 0x10409e05 */ if (ZF_) goto L_10409e05;
  /* 10409de4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409de5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409de6 cmp dword ptr [ebp + 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409de9 jne 0x10409def */ if (!ZF_) goto L_10409def;
  /* 10409deb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409dec push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409ded jmp 0x10409df5 */ goto L_10409df5;
L_10409def:;
  /* 10409def push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409df2 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
L_10409df5:;
  /* 10409df5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409df6 push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409df9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409dfa push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409dfd call dword ptr [0x1040b07c] */ { const u32 m_ = (u32)(0x1040b07cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409e03u; SAVEALL; call_ind(c, t_); RETCHK(0x10409e03u, 0x10409dfdu); LOADALL; }
  /* 10409e03 mov edi, eax */ { edi = (u32)(eax); }
L_10409e05:;
  /* 10409e05 cmp dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409e08 je 0x10409e13 */ if (ZF_) goto L_10409e13;
  /* 10409e0a push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409e0d call 0x1040549e */ esp -= 4; M32(esp) = 0x10409e12u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409e0du); RETCHK(0x10409e12u, 0x10409e0du); LOADALL;
  /* 10409e12 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10409e13:;
  /* 10409e13 cmp dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409e16 je 0x10409e21 */ if (ZF_) goto L_10409e21;
  /* 10409e18 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409e1b call 0x1040549e */ esp -= 4; M32(esp) = 0x10409e20u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409e1bu); RETCHK(0x10409e20u, 0x10409e1bu); LOADALL;
  /* 10409e20 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10409e21:;
  /* 10409e21 mov eax, edi */ { eax = (u32)(edi); }
  /* 10409e23 jmp 0x10409f83 */ goto L_10409f83;
L_10409f83:;
  /* 10409f83 lea esp, [ebp - 0x54] */ esp = (u32)((u32)(ebp + 0xffffffacu));
  /* 10409f86 call 0x104056fb */ esp -= 4; M32(esp) = 0x10409f8bu; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10409f86u); RETCHK(0x10409f8bu, 0x10409f86u); LOADALL;
  /* 10409f8b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409ec9(CPU *c) {
  NATIVE_HOOK(0x10409ec9u) REGS; LOADALL;
L_10409ec9:;
  /* 10409ec9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409ecb inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10409ecc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409ecd(CPU *c) {
  NATIVE_HOOK(0x10409ecdu) REGS; LOADALL;
L_10409ecd:;
  /* 10409ecd mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10409ed0 call 0x1040a3ae */ esp -= 4; M32(esp) = 0x10409ed5u; SAVEALL; F_1040a3ae(c); ABI_CHECK(0x1040a3aeu, 0x10409ed0u); RETCHK(0x10409ed5u, 0x10409ed0u); LOADALL;
  /* 10409ed5 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10409ed7 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10409ed9 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10409edd cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409edf jne 0x10409f04 */ if (!ZF_) goto L_10409f04;
  /* 10409ee1 push dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409ee4 call 0x104058bc */ esp -= 4; M32(esp) = 0x10409ee9u; SAVEALL; F_104058bc(c); ABI_CHECK(0x104058bcu, 0x10409ee4u); RETCHK(0x10409ee9u, 0x10409ee4u); LOADALL;
  /* 10409ee9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10409eea mov edi, eax */ { edi = (u32)(eax); }
  /* 10409eec cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409eee je 0x10409f21 */ if (ZF_) goto L_10409f21;
  /* 10409ef0 push dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409ef3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10409ef4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409ef5 call 0x10409170 */ esp -= 4; M32(esp) = 0x10409efau; SAVEALL; F_10409170(c); ABI_CHECK(0x10409170u, 0x10409ef5u); RETCHK(0x10409efau, 0x10409ef5u); LOADALL;
  /* 10409efa add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10409efd mov dword ptr [ebp - 0x3c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0x1u); }
L_10409f04:;
  /* 10409f04 push dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f07 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409f08 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f0b push dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f0e push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f11 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f14 call dword ptr [0x1040b0e0] */ { const u32 m_ = (u32)(0x1040b0e0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10409f1au; SAVEALL; call_ind(c, t_); RETCHK(0x10409f1au, 0x10409f14u); LOADALL; }
  /* 10409f1a mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 10409f1d cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409f1f jne 0x10409f25 */ if (!ZF_) goto L_10409f25;
L_10409f21:;
  /* 10409f21 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10409f23 jmp 0x10409f4b */ goto L_10409f4b;
L_10409f25:;
  /* 10409f25 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f28 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f2b lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 10409f2e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10409f2f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409f30 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f33 push dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f36 call 0x1040a55c */ esp -= 4; M32(esp) = 0x10409f3bu; SAVEALL; F_1040a55c(c); ABI_CHECK(0x1040a55cu, 0x10409f36u); RETCHK(0x10409f3bu, 0x10409f36u); LOADALL;
  /* 10409f3b add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10409f3e mov esi, eax */ { esi = (u32)(eax); }
  /* 10409f40 neg esi */ { u32 a_ = esi; u32 r_ = (0u - a_) & 0xffffffffu; esi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10409f42 sbb esi, esi */ { u32 a_ = esi, b_ = esi; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); esi = (u32)(r_); }
  /* 10409f44 neg esi */ { u32 a_ = esi; u32 r_ = (0u - a_) & 0xffffffffu; esi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10409f46 jmp 0x10409f4b */ goto L_10409f4b;
L_10409f4b:;
  /* 10409f4b cmp dword ptr [ebp - 0x3c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409f4e je 0x10409f73 */ if (ZF_) goto L_10409f73;
  /* 10409f50 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10409f51 call 0x1040549e */ esp -= 4; M32(esp) = 0x10409f56u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409f51u); RETCHK(0x10409f56u, 0x10409f51u); LOADALL;
  /* 10409f56 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10409f57 jmp 0x10409f73 */ goto L_10409f73;
L_10409f73:;
  /* 10409f73 cmp dword ptr [ebp - 0x28], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409f76 je 0x10409f81 */ if (ZF_) goto L_10409f81;
  /* 10409f78 push dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10409f7b call 0x1040549e */ esp -= 4; M32(esp) = 0x10409f80u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409f7bu); RETCHK(0x10409f80u, 0x10409f7bu); LOADALL;
  /* 10409f80 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10409f81:;
  /* 10409f81 mov eax, esi */ { eax = (u32)(esi); }
  /* 10409f83 lea esp, [ebp - 0x54] */ esp = (u32)((u32)(ebp + 0xffffffacu));
  /* 10409f86 call 0x104056fb */ esp -= 4; M32(esp) = 0x10409f8bu; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10409f86u); RETCHK(0x10409f8bu, 0x10409f86u); LOADALL;
  /* 10409f8b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409f8c(CPU *c) {
  NATIVE_HOOK(0x10409f8cu) REGS; LOADALL;
L_10409f8c:;
  /* 10409f8c mov ecx, dword ptr [0x1040d11c] */ { const u32 m_ = (u32)(0x1040d11cu); ecx = (u32)(M32(m_)); }
  /* 10409f92 mov eax, edx */ { eax = (u32)(edx); }
  /* 10409f94 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_10409f95:;
  /* 10409f95 cmp dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409f98 je 0x10409fa7 */ if (ZF_) goto L_10409fa7;
  /* 10409f9a lea edi, [ecx + ecx*2] */ edi = (u32)((u32)(ecx + ecx * 2u));
  /* 10409f9d add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10409fa0 lea edi, [edx + edi*4] */ edi = (u32)((u32)(edx + edi * 4u));
  /* 10409fa3 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409fa5 jb 0x10409f95 */ if (CF_) goto L_10409f95;
L_10409fa7:;
  /* 10409fa7 lea ecx, [ecx + ecx*2] */ ecx = (u32)((u32)(ecx + ecx * 2u));
  /* 10409faa lea ecx, [edx + ecx*4] */ ecx = (u32)((u32)(edx + ecx * 4u));
  /* 10409fad cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409faf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10409fb0 jae 0x10409fb7 */ if (!CF_) goto L_10409fb7;
  /* 10409fb2 cmp dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409fb5 je 0x10409fb9 */ if (ZF_) goto L_10409fb9;
L_10409fb7:;
  /* 10409fb7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10409fb9:;
  /* 10409fb9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409fba(CPU *c) {
  NATIVE_HOOK(0x10409fbau) REGS; LOADALL;
L_10409fba:;
  /* 10409fba push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10409fbc push 0x1040c170 */ { u32 v_ = 0x1040c170u; esp -= 4; M32(esp) = v_; }
  /* 10409fc1 call 0x104056c0 */ esp -= 4; M32(esp) = 0x10409fc6u; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x10409fc1u); RETCHK(0x10409fc6u, 0x10409fc1u); LOADALL;
  /* 10409fc6 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10409fc8 mov dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ecx); }
  /* 10409fcb mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10409fce dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10409fcf dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10409fd0 je 0x1040a03c */ if (ZF_) goto L_1040a03c;
  /* 10409fd2 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10409fd3 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10409fd4 je 0x1040a01c */ if (ZF_) goto L_1040a01c;
  /* 10409fd6 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10409fd9 je 0x1040a01c */ if (ZF_) goto L_1040a01c;
  /* 10409fdb sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10409fde je 0x1040a01c */ if (ZF_) goto L_1040a01c;
  /* 10409fe0 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10409fe3 je 0x1040a00f */ if (ZF_) goto L_1040a00f;
  /* 10409fe5 sub eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10409fe8 je 0x1040a002 */ if (ZF_) goto L_1040a002;
  /* 10409fea dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10409feb je 0x10409ff5 */ if (ZF_) goto L_10409ff5;
  /* 10409fed or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10409ff0 jmp 0x1040a12d */ goto L_1040a12d;
L_10409ff5:;
  /* 10409ff5 mov esi, 0x1040dd00 */ { esi = (u32)(0x1040dd00u); }
  /* 10409ffa mov edi, dword ptr [0x1040dd00] */ { const u32 m_ = (u32)(0x1040dd00u); edi = (u32)(M32(m_)); }
  /* 1040a000 jmp 0x1040a047 */ goto L_1040a047;
L_1040a002:;
  /* 1040a002 mov esi, 0x1040dcfc */ { esi = (u32)(0x1040dcfcu); }
  /* 1040a007 mov edi, dword ptr [0x1040dcfc] */ { const u32 m_ = (u32)(0x1040dcfcu); edi = (u32)(M32(m_)); }
  /* 1040a00d jmp 0x1040a047 */ goto L_1040a047;
L_1040a00f:;
  /* 1040a00f mov esi, 0x1040dd04 */ { esi = (u32)(0x1040dd04u); }
  /* 1040a014 mov edi, dword ptr [0x1040dd04] */ { const u32 m_ = (u32)(0x1040dd04u); edi = (u32)(M32(m_)); }
  /* 1040a01a jmp 0x1040a047 */ goto L_1040a047;
L_1040a01c:;
  /* 1040a01c call 0x104061b1 */ esp -= 4; M32(esp) = 0x1040a021u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x1040a01cu); RETCHK(0x1040a021u, 0x1040a01cu); LOADALL;
  /* 1040a021 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 1040a023 mov dword ptr [ebp - 0x24], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ebx); }
  /* 1040a026 mov edx, dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); edx = (u32)(M32(m_)); }
  /* 1040a029 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 1040a02c call 0x10409f8c */ esp -= 4; M32(esp) = 0x1040a031u; SAVEALL; F_10409f8c(c); ABI_CHECK(0x10409f8cu, 0x1040a02cu); RETCHK(0x1040a031u, 0x1040a02cu); LOADALL;
  /* 1040a031 mov esi, eax */ { esi = (u32)(eax); }
  /* 1040a033 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040a036 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 1040a038 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 1040a03a jmp 0x1040a051 */ goto L_1040a051;
L_1040a03c:;
  /* 1040a03c mov esi, 0x1040dcf8 */ { esi = (u32)(0x1040dcf8u); }
  /* 1040a041 mov edi, dword ptr [0x1040dcf8] */ { const u32 m_ = (u32)(0x1040dcf8u); edi = (u32)(M32(m_)); }
L_1040a047:;
  /* 1040a047 mov dword ptr [ebp - 0x1c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x1u); }
  /* 1040a04e mov ebx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ebx = (u32)(M32(m_)); }
L_1040a051:;
  /* 1040a051 mov dword ptr [ebp - 0x20], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edi); }
  /* 1040a054 cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a057 je 0x1040a12b */ if (ZF_) goto L_1040a12b;
  /* 1040a05d cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a05f jne 0x1040a068 */ if (!ZF_) goto L_1040a068;
  /* 1040a061 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 1040a063 call 0x104066c3 */ esp -= 4; M32(esp) = 0x1040a068u; SAVEALL; F_104066c3(c); ABI_CHECK(0x104066c3u, 0x1040a063u); RETCHK(0x1040a068u, 0x1040a063u); LOADALL;
L_1040a068:;
  /* 1040a068 cmp dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a06b je 0x1040a076 */ if (ZF_) goto L_1040a076;
  /* 1040a06d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040a06e call 0x104073d3 */ esp -= 4; M32(esp) = 0x1040a073u; SAVEALL; F_104073d3(c); ABI_CHECK(0x104073d3u, 0x1040a06eu); RETCHK(0x1040a073u, 0x1040a06eu); LOADALL;
  /* 1040a073 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a074 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_1040a076:;
  /* 1040a076 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 1040a079 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040a07c cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a07f je 0x1040a08b */ if (ZF_) goto L_1040a08b;
  /* 1040a081 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a084 je 0x1040a08b */ if (ZF_) goto L_1040a08b;
  /* 1040a086 cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a089 jne 0x1040a0a6 */ if (!ZF_) goto L_1040a0a6;
L_1040a08b:;
  /* 1040a08b mov edx, dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); edx = (u32)(M32(m_)); }
  /* 1040a08e mov dword ptr [ebp - 0x2c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edx); }
  /* 1040a091 mov dword ptr [ebx + 0x58], ecx */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(ecx); }
  /* 1040a094 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a097 jne 0x1040a0d2 */ if (!ZF_) goto L_1040a0d2;
  /* 1040a099 mov edx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); edx = (u32)(M32(m_)); }
  /* 1040a09c mov dword ptr [ebp - 0x30], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(edx); }
  /* 1040a09f mov dword ptr [ebx + 0x5c], 0x8c */ { const u32 m_ = (u32)(ebx + 0x5cu); M32(m_) = (u32)(0x8cu); }
L_1040a0a6:;
  /* 1040a0a6 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a0a9 jne 0x1040a0d2 */ if (!ZF_) goto L_1040a0d2;
  /* 1040a0ab mov eax, dword ptr [0x1040d110] */ { const u32 m_ = (u32)(0x1040d110u); eax = (u32)(M32(m_)); }
L_1040a0b0:;
  /* 1040a0b0 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 1040a0b3 mov edx, dword ptr [0x1040d114] */ { const u32 m_ = (u32)(0x1040d114u); edx = (u32)(M32(m_)); }
  /* 1040a0b9 mov esi, dword ptr [0x1040d110] */ { const u32 m_ = (u32)(0x1040d110u); esi = (u32)(M32(m_)); }
  /* 1040a0bf add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 1040a0c1 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a0c3 jge 0x1040a0d4 */ if (!LT_) goto L_1040a0d4;
  /* 1040a0c5 lea edx, [eax + eax*2] */ edx = (u32)((u32)(eax + eax * 2u));
  /* 1040a0c8 mov esi, dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); esi = (u32)(M32(m_)); }
  /* 1040a0cb mov dword ptr [esi + edx*4 + 8], ecx */ { const u32 m_ = (u32)(esi + edx * 4u + 0x8u); M32(m_) = (u32)(ecx); }
  /* 1040a0cf inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040a0d0 jmp 0x1040a0b0 */ goto L_1040a0b0;
L_1040a0d2:;
  /* 1040a0d2 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
L_1040a0d4:;
  /* 1040a0d4 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1040a0d8 call 0x1040a0f5 */ esp -= 4; M32(esp) = 0x1040a0ddu; SAVEALL; F_1040a0f5(c); ABI_CHECK(0x1040a0f5u, 0x1040a0d8u); RETCHK(0x1040a0ddu, 0x1040a0d8u); LOADALL;
  /* 1040a0dd cmp dword ptr [ebp + 8], 8 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a0e1 jne 0x1040a102 */ if (!ZF_) goto L_1040a102;
  /* 1040a0e3 push dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a0e6 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 1040a0e8 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x1040a0eau; SAVEALL; call_ind(c, t_); RETCHK(0x1040a0eau, 0x1040a0e8u); LOADALL; }
  /* 1040a0ea pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a0eb jmp 0x1040a107 */ goto L_1040a107;
L_1040a102:;
  /* 1040a102 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a105 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x1040a107u; SAVEALL; call_ind(c, t_); RETCHK(0x1040a107u, 0x1040a105u); LOADALL; }
L_1040a107:;
  /* 1040a107 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a108 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040a10b cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a10e je 0x1040a11a */ if (ZF_) goto L_1040a11a;
  /* 1040a110 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a113 je 0x1040a11a */ if (ZF_) goto L_1040a11a;
  /* 1040a115 cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a118 jne 0x1040a12b */ if (!ZF_) goto L_1040a12b;
L_1040a11a:;
  /* 1040a11a mov ecx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ecx = (u32)(M32(m_)); }
  /* 1040a11d mov dword ptr [ebx + 0x58], ecx */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(ecx); }
  /* 1040a120 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a123 jne 0x1040a12b */ if (!ZF_) goto L_1040a12b;
  /* 1040a125 mov eax, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 1040a128 mov dword ptr [ebx + 0x5c], eax */ { const u32 m_ = (u32)(ebx + 0x5cu); M32(m_) = (u32)(eax); }
L_1040a12b:;
  /* 1040a12b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_1040a12d:;
  /* 1040a12d call 0x104056fb */ esp -= 4; M32(esp) = 0x1040a132u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x1040a12du); RETCHK(0x1040a132u, 0x1040a12du); LOADALL;
  /* 1040a132 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040a0ed(CPU *c) {
  NATIVE_HOOK(0x1040a0edu) REGS; LOADALL;
L_1040a0ed:;
  /* 1040a0ed mov edi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edi = (u32)(M32(m_)); }
  /* 1040a0f0 mov ebx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ebx = (u32)(M32(m_)); }
  /* 1040a0f3 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 1040a0f5 cmp dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a0f8 je 0x1040a101 */ if (ZF_) goto L_1040a101;
  /* 1040a0fa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040a0fb call 0x1040731e */ esp -= 4; M32(esp) = 0x1040a100u; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x1040a0fbu); RETCHK(0x1040a100u, 0x1040a0fbu); LOADALL;
  /* 1040a100 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1040a101:;
  /* 1040a101 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040a0f5(CPU *c) {
  NATIVE_HOOK(0x1040a0f5u) REGS; LOADALL;
L_1040a0f5:;
  /* 1040a0f5 cmp dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a0f8 je 0x1040a101 */ if (ZF_) goto L_1040a101;
  /* 1040a0fa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040a0fb call 0x1040731e */ esp -= 4; M32(esp) = 0x1040a100u; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x1040a0fbu); RETCHK(0x1040a100u, 0x1040a0fbu); LOADALL;
  /* 1040a100 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1040a101:;
  /* 1040a101 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040a133(CPU *c) {
  NATIVE_HOOK(0x1040a133u) REGS; LOADALL;
L_1040a133:;
  /* 1040a133 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 1040a135 push 0x1040c180 */ { u32 v_ = 0x1040c180u; esp -= 4; M32(esp) = v_; }
  /* 1040a13a call 0x104056c0 */ esp -= 4; M32(esp) = 0x1040a13fu; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x1040a13au); RETCHK(0x1040a13fu, 0x1040a13au); LOADALL;
  /* 1040a13f mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 1040a142 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1040a144 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a146 jne 0x1040a156 */ if (!ZF_) goto L_1040a156;
  /* 1040a148 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a14b call 0x104058bc */ esp -= 4; M32(esp) = 0x1040a150u; SAVEALL; F_104058bc(c); ABI_CHECK(0x104058bcu, 0x1040a14bu); RETCHK(0x1040a150u, 0x1040a14bu); LOADALL;
  /* 1040a150 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a151 jmp 0x1040a2da */ goto L_1040a2da;
L_1040a156:;
  /* 1040a156 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 1040a159 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a15b jne 0x1040a169 */ if (!ZF_) goto L_1040a169;
  /* 1040a15d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a15e call 0x1040549e */ esp -= 4; M32(esp) = 0x1040a163u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040a15eu); RETCHK(0x1040a163u, 0x1040a15eu); LOADALL;
  /* 1040a163 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a164 jmp 0x1040a2d8 */ goto L_1040a2d8;
L_1040a169:;
  /* 1040a169 cmp dword ptr [0x1040e040], 3 */ { const u32 m_ = (u32)(0x1040e040u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a170 jne 0x1040a2a4 */ if (!ZF_) goto L_1040a2a4;
L_1040a176:;
  /* 1040a176 mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 1040a179 cmp esi, -0x20 */ { u32 a_ = esi, b_ = 0xffffffe0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a17c ja 0x1040a273 */ if (!(CF_|ZF_)) goto L_1040a273;
  /* 1040a182 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 1040a184 call 0x104073d3 */ esp -= 4; M32(esp) = 0x1040a189u; SAVEALL; F_104073d3(c); ABI_CHECK(0x104073d3u, 0x1040a184u); RETCHK(0x1040a189u, 0x1040a184u); LOADALL;
  /* 1040a189 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a18a mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 1040a18d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a18e call 0x1040744c */ esp -= 4; M32(esp) = 0x1040a193u; SAVEALL; F_1040744c(c); ABI_CHECK(0x1040744cu, 0x1040a18eu); RETCHK(0x1040a193u, 0x1040a18eu); LOADALL;
  /* 1040a193 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a194 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 1040a197 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a199 je 0x1040a243 */ if (ZF_) goto L_1040a243;
  /* 1040a19f cmp esi, dword ptr [0x1040e02c] */ { const u32 m_ = (u32)(0x1040e02cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a1a5 ja 0x1040a1f3 */ if (!(CF_|ZF_)) goto L_1040a1f3;
  /* 1040a1a7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a1a8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a1a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a1aa call 0x1040794c */ esp -= 4; M32(esp) = 0x1040a1afu; SAVEALL; F_1040794c(c); ABI_CHECK(0x1040794cu, 0x1040a1aau); RETCHK(0x1040a1afu, 0x1040a1aau); LOADALL;
  /* 1040a1af add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040a1b2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040a1b4 je 0x1040a1bb */ if (ZF_) goto L_1040a1bb;
  /* 1040a1b6 mov dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edi); }
  /* 1040a1b9 jmp 0x1040a1f3 */ goto L_1040a1f3;
L_1040a1bb:;
  /* 1040a1bb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a1bc call 0x10407c2b */ esp -= 4; M32(esp) = 0x1040a1c1u; SAVEALL; F_10407c2b(c); ABI_CHECK(0x10407c2bu, 0x1040a1bcu); RETCHK(0x1040a1c1u, 0x1040a1bcu); LOADALL;
  /* 1040a1c1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a1c2 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 1040a1c5 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a1c7 je 0x1040a1f3 */ if (ZF_) goto L_1040a1f3;
  /* 1040a1c9 mov eax, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 1040a1cc dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1040a1cd mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 1040a1d0 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a1d2 jb 0x1040a1d6 */ if (CF_) goto L_1040a1d6;
  /* 1040a1d4 mov eax, esi */ { eax = (u32)(esi); }
L_1040a1d6:;
  /* 1040a1d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a1d7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a1d8 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a1db call 0x10409270 */ esp -= 4; M32(esp) = 0x1040a1e0u; SAVEALL; F_10409270(c); ABI_CHECK(0x10409270u, 0x1040a1dbu); RETCHK(0x1040a1e0u, 0x1040a1dbu); LOADALL;
  /* 1040a1e0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a1e1 call 0x1040744c */ esp -= 4; M32(esp) = 0x1040a1e6u; SAVEALL; F_1040744c(c); ABI_CHECK(0x1040744cu, 0x1040a1e1u); RETCHK(0x1040a1e6u, 0x1040a1e1u); LOADALL;
  /* 1040a1e6 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 1040a1e9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a1ea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a1eb call 0x10407477 */ esp -= 4; M32(esp) = 0x1040a1f0u; SAVEALL; F_10407477(c); ABI_CHECK(0x10407477u, 0x1040a1ebu); RETCHK(0x1040a1f0u, 0x1040a1ebu); LOADALL;
  /* 1040a1f0 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1040a1f3:;
  /* 1040a1f3 cmp dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a1f6 jne 0x1040a243 */ if (!ZF_) goto L_1040a243;
  /* 1040a1f8 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a1fa jne 0x1040a202 */ if (!ZF_) goto L_1040a202;
  /* 1040a1fc xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1040a1fe inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040a1ff mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
L_1040a202:;
  /* 1040a202 add esi, 0xf */ { u32 a_ = esi, b_ = 0xfu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040a205 and esi, 0xfffffff0 */ { u32 a_ = esi, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1040a208 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 1040a20b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a20c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040a20d push dword ptr [0x1040e03c] */ { const u32 m_ = (u32)(0x1040e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a213 call dword ptr [0x1040b030] */ { const u32 m_ = (u32)(0x1040b030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a219u; SAVEALL; call_ind(c, t_); RETCHK(0x1040a219u, 0x1040a213u); LOADALL; }
  /* 1040a219 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 1040a21c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a21e je 0x1040a243 */ if (ZF_) goto L_1040a243;
  /* 1040a220 mov eax, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 1040a223 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1040a224 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 1040a227 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a229 jb 0x1040a22d */ if (CF_) goto L_1040a22d;
  /* 1040a22b mov eax, esi */ { eax = (u32)(esi); }
L_1040a22d:;
  /* 1040a22d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a22e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a22f push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a232 call 0x10409270 */ esp -= 4; M32(esp) = 0x1040a237u; SAVEALL; F_10409270(c); ABI_CHECK(0x10409270u, 0x1040a232u); RETCHK(0x1040a237u, 0x1040a232u); LOADALL;
  /* 1040a237 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a238 push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a23b call 0x10407477 */ esp -= 4; M32(esp) = 0x1040a240u; SAVEALL; F_10407477(c); ABI_CHECK(0x10407477u, 0x1040a23bu); RETCHK(0x1040a240u, 0x1040a23bu); LOADALL;
  /* 1040a240 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1040a243:;
  /* 1040a243 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1040a247 call 0x1040a29b */ esp -= 4; M32(esp) = 0x1040a24cu; SAVEALL; F_1040a29b(c); ABI_CHECK(0x1040a29bu, 0x1040a247u); RETCHK(0x1040a24cu, 0x1040a247u); LOADALL;
  /* 1040a24c cmp dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a24f jne 0x1040a273 */ if (!ZF_) goto L_1040a273;
  /* 1040a251 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a253 jne 0x1040a258 */ if (!ZF_) goto L_1040a258;
  /* 1040a255 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1040a257 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1040a258:;
  /* 1040a258 add esi, 0xf */ { u32 a_ = esi, b_ = 0xfu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040a25b and esi, 0xfffffff0 */ { u32 a_ = esi, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1040a25e mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 1040a261 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a262 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a263 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040a264 push dword ptr [0x1040e03c] */ { const u32 m_ = (u32)(0x1040e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a26a call dword ptr [0x1040b0a0] */ { const u32 m_ = (u32)(0x1040b0a0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a270u; SAVEALL; call_ind(c, t_); RETCHK(0x1040a270u, 0x1040a26au); LOADALL; }
  /* 1040a270 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_1040a273:;
  /* 1040a273 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 1040a276 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a278 jne 0x1040a2da */ if (!ZF_) goto L_1040a2da;
  /* 1040a27a cmp dword ptr [0x1040dc60], ebx */ { const u32 m_ = (u32)(0x1040dc60u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a280 je 0x1040a2da */ if (ZF_) goto L_1040a2da;
  /* 1040a282 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a283 call 0x10408504 */ esp -= 4; M32(esp) = 0x1040a288u; SAVEALL; F_10408504(c); ABI_CHECK(0x10408504u, 0x1040a283u); RETCHK(0x1040a288u, 0x1040a283u); LOADALL;
  /* 1040a288 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a289 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040a28b jne 0x1040a176 */ if (!ZF_) goto L_1040a176;
  /* 1040a291 jmp 0x1040a2d8 */ goto L_1040a2d8;
L_1040a2a4:;
  /* 1040a2a4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040a2a6 cmp esi, -0x20 */ { u32 a_ = esi, b_ = 0xffffffe0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a2a9 ja 0x1040a2c1 */ if (!(CF_|ZF_)) goto L_1040a2c1;
  /* 1040a2ab cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a2ad jne 0x1040a2b2 */ if (!ZF_) goto L_1040a2b2;
  /* 1040a2af xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1040a2b1 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1040a2b2:;
  /* 1040a2b2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a2b3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a2b4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040a2b5 push dword ptr [0x1040e03c] */ { const u32 m_ = (u32)(0x1040e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a2bb call dword ptr [0x1040b0a0] */ { const u32 m_ = (u32)(0x1040b0a0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a2c1u; SAVEALL; call_ind(c, t_); RETCHK(0x1040a2c1u, 0x1040a2bbu); LOADALL; }
L_1040a2c1:;
  /* 1040a2c1 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a2c3 jne 0x1040a2da */ if (!ZF_) goto L_1040a2da;
  /* 1040a2c5 cmp dword ptr [0x1040dc60], ebx */ { const u32 m_ = (u32)(0x1040dc60u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a2cb je 0x1040a2da */ if (ZF_) goto L_1040a2da;
  /* 1040a2cd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a2ce call 0x10408504 */ esp -= 4; M32(esp) = 0x1040a2d3u; SAVEALL; F_10408504(c); ABI_CHECK(0x10408504u, 0x1040a2ceu); RETCHK(0x1040a2d3u, 0x1040a2ceu); LOADALL;
  /* 1040a2d3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a2d4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040a2d6 jne 0x1040a2a4 */ if (!ZF_) goto L_1040a2a4;
L_1040a2d8:;
  /* 1040a2d8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_1040a2da:;
  /* 1040a2da call 0x104056fb */ esp -= 4; M32(esp) = 0x1040a2dfu; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x1040a2dau); RETCHK(0x1040a2dfu, 0x1040a2dau); LOADALL;
  /* 1040a2df ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040a293(CPU *c) {
  NATIVE_HOOK(0x1040a293u) REGS; LOADALL;
L_1040a293:;
  /* 1040a293 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1040a295 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 1040a298 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 1040a29b push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 1040a29d call 0x1040731e */ esp -= 4; M32(esp) = 0x1040a2a2u; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x1040a29du); RETCHK(0x1040a2a2u, 0x1040a29du); LOADALL;
  /* 1040a2a2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a2a3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040a29b(CPU *c) {
  NATIVE_HOOK(0x1040a29bu) REGS; LOADALL;
L_1040a29b:;
  /* 1040a29b push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 1040a29d call 0x1040731e */ esp -= 4; M32(esp) = 0x1040a2a2u; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x1040a29du); RETCHK(0x1040a2a2u, 0x1040a29du); LOADALL;
  /* 1040a2a2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a2a3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040a2e0(CPU *c) {
  NATIVE_HOOK(0x1040a2e0u) REGS; LOADALL;
L_1040a2e0:;
  /* 1040a2e0 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 1040a2e2 push 0x1040c190 */ { u32 v_ = 0x1040c190u; esp -= 4; M32(esp) = v_; }
  /* 1040a2e7 call 0x104056c0 */ esp -= 4; M32(esp) = 0x1040a2ecu; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x1040a2e7u); RETCHK(0x1040a2ecu, 0x1040a2e7u); LOADALL;
  /* 1040a2ec cmp dword ptr [0x1040e040], 3 */ { const u32 m_ = (u32)(0x1040e040u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a2f3 jne 0x1040a32f */ if (!ZF_) goto L_1040a32f;
  /* 1040a2f5 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 1040a2f7 call 0x104073d3 */ esp -= 4; M32(esp) = 0x1040a2fcu; SAVEALL; F_104073d3(c); ABI_CHECK(0x104073d3u, 0x1040a2f7u); RETCHK(0x1040a2fcu, 0x1040a2f7u); LOADALL;
  /* 1040a2fc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a2fd and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1040a301 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 1040a304 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a305 call 0x1040744c */ esp -= 4; M32(esp) = 0x1040a30au; SAVEALL; F_1040744c(c); ABI_CHECK(0x1040744cu, 0x1040a305u); RETCHK(0x1040a30au, 0x1040a305u); LOADALL;
  /* 1040a30a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a30b mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 1040a30e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040a310 je 0x1040a31d */ if (ZF_) goto L_1040a31d;
  /* 1040a312 mov esi, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 1040a315 sub esi, 9 */ { u32 a_ = esi, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040a318 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 1040a31b jmp 0x1040a320 */ goto L_1040a320;
L_1040a31d:;
  /* 1040a31d mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
L_1040a320:;
  /* 1040a320 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1040a324 call 0x1040a34d */ esp -= 4; M32(esp) = 0x1040a329u; SAVEALL; F_1040a34d(c); ABI_CHECK(0x1040a34du, 0x1040a324u); RETCHK(0x1040a329u, 0x1040a324u); LOADALL;
  /* 1040a329 cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a32d jne 0x1040a342 */ if (!ZF_) goto L_1040a342;
L_1040a32f:;
  /* 1040a32f push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a332 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1040a334 push dword ptr [0x1040e03c] */ { const u32 m_ = (u32)(0x1040e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a33a call dword ptr [0x1040b0e8] */ { const u32 m_ = (u32)(0x1040b0e8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a340u; SAVEALL; call_ind(c, t_); RETCHK(0x1040a340u, 0x1040a33au); LOADALL; }
  /* 1040a340 mov esi, eax */ { esi = (u32)(eax); }
L_1040a342:;
  /* 1040a342 mov eax, esi */ { eax = (u32)(esi); }
  /* 1040a344 call 0x104056fb */ esp -= 4; M32(esp) = 0x1040a349u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x1040a344u); RETCHK(0x1040a349u, 0x1040a344u); LOADALL;
  /* 1040a349 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040a34a(CPU *c) {
  NATIVE_HOOK(0x1040a34au) REGS; LOADALL;
L_1040a34a:;
  /* 1040a34a mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 1040a34d push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 1040a34f call 0x1040731e */ esp -= 4; M32(esp) = 0x1040a354u; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x1040a34fu); RETCHK(0x1040a354u, 0x1040a34fu); LOADALL;
  /* 1040a354 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a355 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040a34d(CPU *c) {
  NATIVE_HOOK(0x1040a34du) REGS; LOADALL;
L_1040a34d:;
  /* 1040a34d push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 1040a34f call 0x1040731e */ esp -= 4; M32(esp) = 0x1040a354u; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x1040a34fu); RETCHK(0x1040a354u, 0x1040a34fu); LOADALL;
  /* 1040a354 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a355 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040a3ae(CPU *c) {
  NATIVE_HOOK(0x1040a3aeu) REGS; LOADALL;
L_1040a3ae:;
  /* 1040a3ae push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1040a3af mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1040a3b1 sub esp, 0x4c */ { u32 a_ = esp, b_ = 0x4cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040a3b4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040a3b5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a3b6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a3b7 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 1040a3b9 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 1040a3ba call 0x10404cf0 */ esp -= 4; M32(esp) = 0x1040a3bfu; SAVEALL; F_10404cf0(c); ABI_CHECK(0x10404cf0u, 0x1040a3bau); RETCHK(0x1040a3bfu, 0x1040a3bau); LOADALL;
  /* 1040a3bf mov esi, esp */ { esi = (u32)(esp); }
  /* 1040a3c1 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 1040a3c3 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 1040a3c6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a3c7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a3c8 call dword ptr [0x1040b0b0] */ { const u32 m_ = (u32)(0x1040b0b0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a3ceu; SAVEALL; call_ind(c, t_); RETCHK(0x1040a3ceu, 0x1040a3c8u); LOADALL; }
  /* 1040a3ce test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040a3d0 je 0x1040a449 */ if (ZF_) goto L_1040a449;
  /* 1040a3d2 mov ebx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ebx = (u32)(M32(m_)); }
  /* 1040a3d5 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1040a3d8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a3d9 call dword ptr [0x1040b0f0] */ { const u32 m_ = (u32)(0x1040b0f0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a3dfu; SAVEALL; call_ind(c, t_); RETCHK(0x1040a3dfu, 0x1040a3d9u); LOADALL; }
  /* 1040a3df mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 1040a3e2 mov eax, dword ptr [0x1040d950] */ { const u32 m_ = (u32)(0x1040d950u); eax = (u32)(M32(m_)); }
  /* 1040a3e7 lea edi, [ecx - 1] */ edi = (u32)((u32)(ecx + 0xffffffffu));
  /* 1040a3ea not edi */ { edi = (u32)(~edi & 0xffffffffu); }
  /* 1040a3ec and edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1040a3ee sub edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040a3f0 mov esi, eax */ { esi = (u32)(eax); }
  /* 1040a3f2 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1040a3f3 neg esi */ { u32 a_ = esi; u32 r_ = (0u - a_) & 0xffffffffu; esi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 1040a3f5 sbb esi, esi */ { u32 a_ = esi, b_ = esi; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); esi = (u32)(r_); }
  /* 1040a3f7 and esi, 0xfffffff1 */ { u32 a_ = esi, b_ = 0xfffffff1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1040a3fa add esi, 0x11 */ { u32 a_ = esi, b_ = 0x11u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040a3fd imul esi, ecx */ { s64 p_ = (s64)(s32)esi * (s64)(s32)ecx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 1040a400 add esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040a402 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a404 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 1040a407 jb 0x1040a449 */ if (CF_) goto L_1040a449;
  /* 1040a409 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a40c je 0x1040a46a */ if (ZF_) goto L_1040a46a;
  /* 1040a40e mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 1040a411 mov ebx, 0x1000 */ { ebx = (u32)(0x1000u); }
L_1040a416:;
  /* 1040a416 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 1040a418 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 1040a41b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a41c push dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a41f call dword ptr [0x1040b0b0] */ { const u32 m_ = (u32)(0x1040b0b0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a425u; SAVEALL; call_ind(c, t_); RETCHK(0x1040a425u, 0x1040a41fu); LOADALL; }
  /* 1040a425 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040a427 je 0x1040a449 */ if (ZF_) goto L_1040a449;
  /* 1040a429 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 1040a42c add dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 1040a42f test dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040a432 je 0x1040a416 */ if (ZF_) goto L_1040a416;
  /* 1040a434 test byte ptr [ebp - 0x13], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffedu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1040a438 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 1040a43b mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 1040a43e je 0x1040a445 */ if (ZF_) goto L_1040a445;
  /* 1040a440 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040a442 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040a443 jmp 0x1040a489 */ goto L_1040a489;
L_1040a445:;
  /* 1040a445 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a447 jae 0x1040a44d */ if (!CF_) goto L_1040a44d;
L_1040a449:;
  /* 1040a449 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040a44b jmp 0x1040a489 */ goto L_1040a489;
L_1040a44d:;
  /* 1040a44d cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a44f jae 0x1040a454 */ if (!CF_) goto L_1040a454;
  /* 1040a451 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
L_1040a454:;
  /* 1040a454 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 1040a456 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040a457 push dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a45a push dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a45d call dword ptr [0x1040b09c] */ { const u32 m_ = (u32)(0x1040b09cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a463u; SAVEALL; call_ind(c, t_); RETCHK(0x1040a463u, 0x1040a45du); LOADALL; }
  /* 1040a463 mov eax, dword ptr [0x1040d950] */ { const u32 m_ = (u32)(0x1040d950u); eax = (u32)(M32(m_)); }
  /* 1040a468 jmp 0x1040a46d */ goto L_1040a46d;
L_1040a46a:;
  /* 1040a46a mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
L_1040a46d:;
  /* 1040a46d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1040a46e neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 1040a470 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 1040a472 and eax, 0x103 */ { u32 a_ = eax, b_ = 0x103u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040a477 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 1040a47a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040a47b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040a47c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a47d push dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a480 push dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a483 call dword ptr [0x1040b0ec] */ { const u32 m_ = (u32)(0x1040b0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a489u; SAVEALL; call_ind(c, t_); RETCHK(0x1040a489u, 0x1040a483u); LOADALL; }
L_1040a489:;
  /* 1040a489 lea esp, [ebp - 0x58] */ esp = (u32)((u32)(ebp + 0xffffffa8u));
  /* 1040a48c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040a48d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040a48e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040a48f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040a490 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040a491(CPU *c) {
  NATIVE_HOOK(0x1040a491u) REGS; LOADALL;
L_1040a491:;
  /* 1040a491 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a492 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a493 call 0x104061b1 */ esp -= 4; M32(esp) = 0x1040a498u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x1040a493u); RETCHK(0x1040a498u, 0x1040a493u); LOADALL;
  /* 1040a498 mov edi, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); edi = (u32)(M32(m_)); }
  /* 1040a49b cmp edi, dword ptr [0x1040d33c] */ { const u32 m_ = (u32)(0x1040d33cu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a4a1 je 0x1040a4aa */ if (ZF_) goto L_1040a4aa;
  /* 1040a4a3 call 0x10408b3e */ esp -= 4; M32(esp) = 0x1040a4a8u; SAVEALL; F_10408b3e(c); ABI_CHECK(0x10408b3eu, 0x1040a4a3u); RETCHK(0x1040a4a8u, 0x1040a4a3u); LOADALL;
  /* 1040a4a8 mov edi, eax */ { edi = (u32)(eax); }
L_1040a4aa:;
  /* 1040a4aa mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
L_1040a4ae:;
  /* 1040a4ae cmp dword ptr [edi + 0x28], 1 */ { const u32 m_ = (u32)(edi + 0x28u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a4b2 movzx eax, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M8(m_)); }
  /* 1040a4b5 jle 0x1040a4c5 */ if ((ZF_|LT_)) goto L_1040a4c5;
  /* 1040a4b7 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 1040a4b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a4ba push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a4bb call 0x1040a725 */ esp -= 4; M32(esp) = 0x1040a4c0u; SAVEALL; F_1040a725(c); ABI_CHECK(0x1040a725u, 0x1040a4bbu); RETCHK(0x1040a4c0u, 0x1040a4bbu); LOADALL;
  /* 1040a4c0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040a4c3 jmp 0x1040a4cf */ goto L_1040a4cf;
L_1040a4c5:;
  /* 1040a4c5 mov ecx, dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); ecx = (u32)(M32(m_)); }
  /* 1040a4c8 movzx eax, byte ptr [ecx + eax*2] */ { const u32 m_ = (u32)(ecx + eax * 2u); eax = (u32)(M8(m_)); }
  /* 1040a4cc and eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_1040a4cf:;
  /* 1040a4cf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040a4d1 je 0x1040a4d6 */ if (ZF_) goto L_1040a4d6;
  /* 1040a4d3 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040a4d4 jmp 0x1040a4ae */ goto L_1040a4ae;
L_1040a4d6:;
  /* 1040a4d6 movzx ecx, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M8(m_)); }
  /* 1040a4d9 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040a4da cmp ecx, 0x2d */ { u32 a_ = ecx, b_ = 0x2du; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a4dd mov edx, ecx */ { edx = (u32)(ecx); }
  /* 1040a4df je 0x1040a4e6 */ if (ZF_) goto L_1040a4e6;
  /* 1040a4e1 cmp ecx, 0x2b */ { u32 a_ = ecx, b_ = 0x2bu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a4e4 jne 0x1040a4ea */ if (!ZF_) goto L_1040a4ea;
L_1040a4e6:;
  /* 1040a4e6 movzx ecx, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M8(m_)); }
  /* 1040a4e9 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1040a4ea:;
  /* 1040a4ea xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_1040a4ec:;
  /* 1040a4ec cmp ecx, 0x30 */ { u32 a_ = ecx, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a4ef jl 0x1040a4fb */ if (LT_) goto L_1040a4fb;
  /* 1040a4f1 cmp ecx, 0x39 */ { u32 a_ = ecx, b_ = 0x39u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a4f4 jg 0x1040a4fb */ if (!(ZF_|LT_)) goto L_1040a4fb;
  /* 1040a4f6 sub ecx, 0x30 */ { u32 a_ = ecx, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1040a4f9 jmp 0x1040a4fe */ goto L_1040a4fe;
L_1040a4fb:;
  /* 1040a4fb or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_1040a4fe:;
  /* 1040a4fe cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a501 je 0x1040a50f */ if (ZF_) goto L_1040a50f;
  /* 1040a503 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 1040a506 lea eax, [ecx + eax*2] */ eax = (u32)((u32)(ecx + eax * 2u));
  /* 1040a509 movzx ecx, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M8(m_)); }
  /* 1040a50c inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040a50d jmp 0x1040a4ec */ goto L_1040a4ec;
L_1040a50f:;
  /* 1040a50f cmp edx, 0x2d */ { u32 a_ = edx, b_ = 0x2du; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a512 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040a513 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040a514 jne 0x1040a518 */ if (!ZF_) goto L_1040a518;
  /* 1040a516 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
L_1040a518:;
  /* 1040a518 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040a519(CPU *c) {
  NATIVE_HOOK(0x1040a519u) REGS; LOADALL;
L_1040a519:;
  /* 1040a519 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1040a51a mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1040a51c sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040a51f mov eax, dword ptr [0x1040d040] */ { const u32 m_ = (u32)(0x1040d040u); eax = (u32)(M32(m_)); }
  /* 1040a524 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 1040a526 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 1040a529 lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 1040a52c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a52d push 0x1004 */ { u32 v_ = 0x1004u; esp -= 4; M32(esp) = v_; }
  /* 1040a532 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a535 mov byte ptr [ebp - 6], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffau); M8(m_) = (u8)(0x0u); }
  /* 1040a539 call dword ptr [0x1040b0d0] */ { const u32 m_ = (u32)(0x1040b0d0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a53fu; SAVEALL; call_ind(c, t_); RETCHK(0x1040a53fu, 0x1040a539u); LOADALL; }
  /* 1040a53f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040a541 jne 0x1040a548 */ if (!ZF_) goto L_1040a548;
  /* 1040a543 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040a546 jmp 0x1040a552 */ goto L_1040a552;
L_1040a548:;
  /* 1040a548 lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 1040a54b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a54c call 0x1040a491 */ esp -= 4; M32(esp) = 0x1040a551u; SAVEALL; F_1040a491(c); ABI_CHECK(0x1040a491u, 0x1040a54cu); RETCHK(0x1040a551u, 0x1040a54cu); LOADALL;
  /* 1040a551 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1040a552:;
  /* 1040a552 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 1040a555 call 0x10404cdd */ esp -= 4; M32(esp) = 0x1040a55au; SAVEALL; F_10404cdd(c); ABI_CHECK(0x10404cddu, 0x1040a555u); RETCHK(0x1040a55au, 0x1040a555u); LOADALL;
  /* 1040a55a leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040a55b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040a55c(CPU *c) {
  NATIVE_HOOK(0x1040a55cu) REGS; LOADALL;
L_1040a55c:;
  /* 1040a55c push 0x38 */ { u32 v_ = 0x38u; esp -= 4; M32(esp) = v_; }
  /* 1040a55e push 0x1040c1e0 */ { u32 v_ = 0x1040c1e0u; esp -= 4; M32(esp) = v_; }
  /* 1040a563 call 0x104056c0 */ esp -= 4; M32(esp) = 0x1040a568u; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x1040a563u); RETCHK(0x1040a568u, 0x1040a563u); LOADALL;
  /* 1040a568 mov eax, dword ptr [0x1040d040] */ { const u32 m_ = (u32)(0x1040d040u); eax = (u32)(M32(m_)); }
  /* 1040a56d mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 1040a570 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1040a572 mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 1040a575 mov dword ptr [ebp - 0x44], edi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(edi); }
  /* 1040a578 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 1040a57b mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 1040a57d mov dword ptr [ebp - 0x40], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ebx); }
  /* 1040a580 mov dword ptr [ebp - 0x3c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(edi); }
  /* 1040a583 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040a586 cmp eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a589 je 0x1040a702 */ if (ZF_) goto L_1040a702;
  /* 1040a58f lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 1040a592 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040a593 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a594 mov esi, dword ptr [0x1040b0c8] */ { const u32 m_ = (u32)(0x1040b0c8u); esi = (u32)(M32(m_)); }
  /* 1040a59a call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x1040a59cu; SAVEALL; call_ind(c, t_); RETCHK(0x1040a59cu, 0x1040a59au); LOADALL; }
  /* 1040a59c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040a59e je 0x1040a5c0 */ if (ZF_) goto L_1040a5c0;
  /* 1040a5a0 cmp dword ptr [ebp - 0x30], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a5a4 jne 0x1040a5c0 */ if (!ZF_) goto L_1040a5c0;
  /* 1040a5a6 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 1040a5a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a5aa push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a5ad call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x1040a5afu; SAVEALL; call_ind(c, t_); RETCHK(0x1040a5afu, 0x1040a5adu); LOADALL; }
  /* 1040a5af test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040a5b1 je 0x1040a5c0 */ if (ZF_) goto L_1040a5c0;
  /* 1040a5b3 cmp dword ptr [ebp - 0x30], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a5b7 jne 0x1040a5c0 */ if (!ZF_) goto L_1040a5c0;
  /* 1040a5b9 mov dword ptr [ebp - 0x3c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0x1u); }
L_1040a5c0:;
  /* 1040a5c0 cmp dword ptr [ebp - 0x3c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a5c3 je 0x1040a5df */ if (ZF_) goto L_1040a5df;
  /* 1040a5c5 cmp ebx, -1 */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a5c8 je 0x1040a5ce */ if (ZF_) goto L_1040a5ce;
  /* 1040a5ca mov esi, ebx */ { esi = (u32)(ebx); }
  /* 1040a5cc jmp 0x1040a5da */ goto L_1040a5da;
L_1040a5ce:;
  /* 1040a5ce push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a5d1 call 0x10408250 */ esp -= 4; M32(esp) = 0x1040a5d6u; SAVEALL; F_10408250(c); ABI_CHECK(0x10408250u, 0x1040a5d1u); RETCHK(0x1040a5d6u, 0x1040a5d1u); LOADALL;
  /* 1040a5d6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a5d7 mov esi, eax */ { esi = (u32)(eax); }
  /* 1040a5d9 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1040a5da:;
  /* 1040a5da mov dword ptr [ebp - 0x38], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(esi); }
  /* 1040a5dd jmp 0x1040a5e2 */ goto L_1040a5e2;
L_1040a5df:;
  /* 1040a5df mov esi, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); esi = (u32)(M32(m_)); }
L_1040a5e2:;
  /* 1040a5e2 cmp dword ptr [ebp - 0x3c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a5e5 jne 0x1040a601 */ if (!ZF_) goto L_1040a601;
  /* 1040a5e7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a5e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a5e9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040a5ea push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a5ed push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1040a5ef push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a5f2 call dword ptr [0x1040b0d8] */ { const u32 m_ = (u32)(0x1040b0d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a5f8u; SAVEALL; call_ind(c, t_); RETCHK(0x1040a5f8u, 0x1040a5f2u); LOADALL; }
  /* 1040a5f8 mov esi, eax */ { esi = (u32)(eax); }
  /* 1040a5fa mov dword ptr [ebp - 0x38], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(esi); }
  /* 1040a5fd cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a5ff je 0x1040a659 */ if (ZF_) goto L_1040a659;
L_1040a601:;
  /* 1040a601 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 1040a604 lea eax, [esi + esi] */ eax = (u32)((u32)(esi + esi));
  /* 1040a607 add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1040a60a and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040a60d call 0x10404cf0 */ esp -= 4; M32(esp) = 0x1040a612u; SAVEALL; F_10404cf0(c); ABI_CHECK(0x10404cf0u, 0x1040a60du); RETCHK(0x1040a612u, 0x1040a60du); LOADALL;
  /* 1040a612 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 1040a615 mov ebx, esp */ { ebx = (u32)(esp); }
  /* 1040a617 mov dword ptr [ebp - 0x48], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(ebx); }
  /* 1040a61a lea eax, [esi + esi] */ eax = (u32)((u32)(esi + esi));
  /* 1040a61d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a61e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a61f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040a620 call 0x10409170 */ esp -= 4; M32(esp) = 0x1040a625u; SAVEALL; F_10409170(c); ABI_CHECK(0x10409170u, 0x1040a620u); RETCHK(0x1040a625u, 0x1040a620u); LOADALL;
  /* 1040a625 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040a628 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1040a62c jmp 0x1040a645 */ goto L_1040a645;
L_1040a645:;
  /* 1040a645 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a647 jne 0x1040a667 */ if (!ZF_) goto L_1040a667;
  /* 1040a649 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a64a push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 1040a64c call 0x104066e3 */ esp -= 4; M32(esp) = 0x1040a651u; SAVEALL; F_104066e3(c); ABI_CHECK(0x104066e3u, 0x1040a64cu); RETCHK(0x1040a651u, 0x1040a64cu); LOADALL;
  /* 1040a651 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a652 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a653 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 1040a655 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a657 jne 0x1040a660 */ if (!ZF_) goto L_1040a660;
L_1040a659:;
  /* 1040a659 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040a65b jmp 0x1040a714 */ goto L_1040a714;
L_1040a660:;
  /* 1040a660 mov dword ptr [ebp - 0x44], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x1u); }
L_1040a667:;
  /* 1040a667 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a668 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040a669 push dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a66c push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a66f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1040a671 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a674 call dword ptr [0x1040b0d8] */ { const u32 m_ = (u32)(0x1040b0d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a67au; SAVEALL; call_ind(c, t_); RETCHK(0x1040a67au, 0x1040a674u); LOADALL; }
  /* 1040a67a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040a67c je 0x1040a705 */ if (ZF_) goto L_1040a705;
  /* 1040a682 cmp dword ptr [ebp + 0x18], edi */ { const u32 m_ = (u32)(ebp + 0x18u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a685 je 0x1040a6a7 */ if (ZF_) goto L_1040a6a7;
  /* 1040a687 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a688 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a689 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a68c push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a68f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a690 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040a691 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a692 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a695 call dword ptr [0x1040b07c] */ { const u32 m_ = (u32)(0x1040b07cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a69bu; SAVEALL; call_ind(c, t_); RETCHK(0x1040a69bu, 0x1040a695u); LOADALL; }
  /* 1040a69b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040a69d je 0x1040a705 */ if (ZF_) goto L_1040a705;
  /* 1040a69f mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 1040a6a2 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 1040a6a5 jmp 0x1040a705 */ goto L_1040a705;
L_1040a6a7:;
  /* 1040a6a7 cmp dword ptr [ebp - 0x3c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a6aa jne 0x1040a6c2 */ if (!ZF_) goto L_1040a6c2;
  /* 1040a6ac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a6ad push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a6ae push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a6af push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a6b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a6b1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040a6b2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a6b3 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a6b6 call dword ptr [0x1040b07c] */ { const u32 m_ = (u32)(0x1040b07cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a6bcu; SAVEALL; call_ind(c, t_); RETCHK(0x1040a6bcu, 0x1040a6b6u); LOADALL; }
  /* 1040a6bc mov esi, eax */ { esi = (u32)(eax); }
  /* 1040a6be cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a6c0 je 0x1040a705 */ if (ZF_) goto L_1040a705;
L_1040a6c2:;
  /* 1040a6c2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a6c3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1040a6c5 call 0x104066e3 */ esp -= 4; M32(esp) = 0x1040a6cau; SAVEALL; F_104066e3(c); ABI_CHECK(0x104066e3u, 0x1040a6c5u); RETCHK(0x1040a6cau, 0x1040a6c5u); LOADALL;
  /* 1040a6ca pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a6cb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a6cc mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 1040a6cf cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a6d1 je 0x1040a705 */ if (ZF_) goto L_1040a705;
  /* 1040a6d3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a6d4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a6d5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a6d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a6d7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a6d8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040a6d9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a6da push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a6dd call dword ptr [0x1040b07c] */ { const u32 m_ = (u32)(0x1040b07cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a6e3u; SAVEALL; call_ind(c, t_); RETCHK(0x1040a6e3u, 0x1040a6ddu); LOADALL; }
  /* 1040a6e3 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a6e5 jne 0x1040a6f5 */ if (!ZF_) goto L_1040a6f5;
  /* 1040a6e7 push dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a6ea call 0x1040549e */ esp -= 4; M32(esp) = 0x1040a6efu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040a6eau); RETCHK(0x1040a6efu, 0x1040a6eau); LOADALL;
  /* 1040a6ef pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a6f0 mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 1040a6f3 jmp 0x1040a705 */ goto L_1040a705;
L_1040a6f5:;
  /* 1040a6f5 cmp dword ptr [ebp - 0x40], -1 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a6f9 je 0x1040a705 */ if (ZF_) goto L_1040a705;
  /* 1040a6fb mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 1040a6fe mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 1040a700 jmp 0x1040a705 */ goto L_1040a705;
L_1040a702:;
  /* 1040a702 mov ebx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ebx = (u32)(M32(m_)); }
L_1040a705:;
  /* 1040a705 cmp dword ptr [ebp - 0x44], edi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a708 je 0x1040a711 */ if (ZF_) goto L_1040a711;
  /* 1040a70a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040a70b call 0x1040549e */ esp -= 4; M32(esp) = 0x1040a710u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040a70bu); RETCHK(0x1040a710u, 0x1040a70bu); LOADALL;
  /* 1040a710 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1040a711:;
  /* 1040a711 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
L_1040a714:;
  /* 1040a714 lea esp, [ebp - 0x54] */ esp = (u32)((u32)(ebp + 0xffffffacu));
  /* 1040a717 mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 1040a71a call 0x10404cdd */ esp -= 4; M32(esp) = 0x1040a71fu; SAVEALL; F_10404cdd(c); ABI_CHECK(0x10404cddu, 0x1040a71au); RETCHK(0x1040a71fu, 0x1040a71au); LOADALL;
  /* 1040a71f call 0x104056fb */ esp -= 4; M32(esp) = 0x1040a724u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x1040a71fu); RETCHK(0x1040a724u, 0x1040a71fu); LOADALL;
  /* 1040a724 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040a62e(CPU *c) {
  NATIVE_HOOK(0x1040a62eu) REGS; LOADALL;
L_1040a62e:;
  /* 1040a62e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040a630 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040a631 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040a632(CPU *c) {
  NATIVE_HOOK(0x1040a632u) REGS; LOADALL;
L_1040a632:;
  /* 1040a632 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 1040a635 call 0x1040a3ae */ esp -= 4; M32(esp) = 0x1040a63au; SAVEALL; F_1040a3ae(c); ABI_CHECK(0x1040a3aeu, 0x1040a635u); RETCHK(0x1040a63au, 0x1040a635u); LOADALL;
  /* 1040a63a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1040a63c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1040a63e or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1040a642 mov esi, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); esi = (u32)(M32(m_)); }
  /* 1040a645 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a647 jne 0x1040a667 */ if (!ZF_) goto L_1040a667;
  /* 1040a649 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a64a push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 1040a64c call 0x104066e3 */ esp -= 4; M32(esp) = 0x1040a651u; SAVEALL; F_104066e3(c); ABI_CHECK(0x104066e3u, 0x1040a64cu); RETCHK(0x1040a651u, 0x1040a64cu); LOADALL;
  /* 1040a651 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a652 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a653 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 1040a655 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a657 jne 0x1040a660 */ if (!ZF_) goto L_1040a660;
  /* 1040a659 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040a65b jmp 0x1040a714 */ goto L_1040a714;
L_1040a660:;
  /* 1040a660 mov dword ptr [ebp - 0x44], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x1u); }
L_1040a667:;
  /* 1040a667 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a668 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040a669 push dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a66c push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a66f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1040a671 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a674 call dword ptr [0x1040b0d8] */ { const u32 m_ = (u32)(0x1040b0d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a67au; SAVEALL; call_ind(c, t_); RETCHK(0x1040a67au, 0x1040a674u); LOADALL; }
  /* 1040a67a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040a67c je 0x1040a705 */ if (ZF_) goto L_1040a705;
  /* 1040a682 cmp dword ptr [ebp + 0x18], edi */ { const u32 m_ = (u32)(ebp + 0x18u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a685 je 0x1040a6a7 */ if (ZF_) goto L_1040a6a7;
  /* 1040a687 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a688 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a689 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a68c push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a68f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a690 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040a691 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a692 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a695 call dword ptr [0x1040b07c] */ { const u32 m_ = (u32)(0x1040b07cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a69bu; SAVEALL; call_ind(c, t_); RETCHK(0x1040a69bu, 0x1040a695u); LOADALL; }
  /* 1040a69b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040a69d je 0x1040a705 */ if (ZF_) goto L_1040a705;
  /* 1040a69f mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 1040a6a2 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 1040a6a5 jmp 0x1040a705 */ goto L_1040a705;
L_1040a6a7:;
  /* 1040a6a7 cmp dword ptr [ebp - 0x3c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a6aa jne 0x1040a6c2 */ if (!ZF_) goto L_1040a6c2;
  /* 1040a6ac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a6ad push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a6ae push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a6af push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a6b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a6b1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040a6b2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a6b3 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a6b6 call dword ptr [0x1040b07c] */ { const u32 m_ = (u32)(0x1040b07cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a6bcu; SAVEALL; call_ind(c, t_); RETCHK(0x1040a6bcu, 0x1040a6b6u); LOADALL; }
  /* 1040a6bc mov esi, eax */ { esi = (u32)(eax); }
  /* 1040a6be cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a6c0 je 0x1040a705 */ if (ZF_) goto L_1040a705;
L_1040a6c2:;
  /* 1040a6c2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a6c3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1040a6c5 call 0x104066e3 */ esp -= 4; M32(esp) = 0x1040a6cau; SAVEALL; F_104066e3(c); ABI_CHECK(0x104066e3u, 0x1040a6c5u); RETCHK(0x1040a6cau, 0x1040a6c5u); LOADALL;
  /* 1040a6ca pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a6cb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a6cc mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 1040a6cf cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a6d1 je 0x1040a705 */ if (ZF_) goto L_1040a705;
  /* 1040a6d3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a6d4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a6d5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a6d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a6d7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a6d8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040a6d9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a6da push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a6dd call dword ptr [0x1040b07c] */ { const u32 m_ = (u32)(0x1040b07cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040a6e3u; SAVEALL; call_ind(c, t_); RETCHK(0x1040a6e3u, 0x1040a6ddu); LOADALL; }
  /* 1040a6e3 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a6e5 jne 0x1040a6f5 */ if (!ZF_) goto L_1040a6f5;
  /* 1040a6e7 push dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a6ea call 0x1040549e */ esp -= 4; M32(esp) = 0x1040a6efu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040a6eau); RETCHK(0x1040a6efu, 0x1040a6eau); LOADALL;
  /* 1040a6ef pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a6f0 mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 1040a6f3 jmp 0x1040a705 */ goto L_1040a705;
L_1040a6f5:;
  /* 1040a6f5 cmp dword ptr [ebp - 0x40], -1 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a6f9 je 0x1040a705 */ if (ZF_) goto L_1040a705;
  /* 1040a6fb mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 1040a6fe mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 1040a700 jmp 0x1040a705 */ goto L_1040a705;
L_1040a705:;
  /* 1040a705 cmp dword ptr [ebp - 0x44], edi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a708 je 0x1040a711 */ if (ZF_) goto L_1040a711;
  /* 1040a70a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040a70b call 0x1040549e */ esp -= 4; M32(esp) = 0x1040a710u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040a70bu); RETCHK(0x1040a710u, 0x1040a70bu); LOADALL;
  /* 1040a710 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1040a711:;
  /* 1040a711 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
L_1040a714:;
  /* 1040a714 lea esp, [ebp - 0x54] */ esp = (u32)((u32)(ebp + 0xffffffacu));
  /* 1040a717 mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 1040a71a call 0x10404cdd */ esp -= 4; M32(esp) = 0x1040a71fu; SAVEALL; F_10404cdd(c); ABI_CHECK(0x10404cddu, 0x1040a71au); RETCHK(0x1040a71fu, 0x1040a71au); LOADALL;
  /* 1040a71f call 0x104056fb */ esp -= 4; M32(esp) = 0x1040a724u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x1040a71fu); RETCHK(0x1040a724u, 0x1040a71fu); LOADALL;
  /* 1040a724 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040a725(CPU *c) {
  NATIVE_HOOK(0x1040a725u) REGS; LOADALL;
L_1040a725:;
  /* 1040a725 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1040a726 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1040a728 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040a729 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1040a72c lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 1040a72f cmp ecx, 0x100 */ { u32 a_ = ecx, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040a735 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1040a738 ja 0x1040a743 */ if (!(CF_|ZF_)) goto L_1040a743;
  /* 1040a73a mov ecx, dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); ecx = (u32)(M32(m_)); }
  /* 1040a73d movzx eax, word ptr [ecx + eax*2] */ { const u32 m_ = (u32)(ecx + eax * 2u); eax = (u32)(M16(m_)); }
  /* 1040a741 jmp 0x1040a797 */ goto L_1040a797;
L_1040a743:;
  /* 1040a743 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040a744 mov edx, eax */ { edx = (u32)(eax); }
  /* 1040a746 sar edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 1040a749 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040a74a mov edi, dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); edi = (u32)(M32(m_)); }
  /* 1040a74d movzx esi, dl */ { esi = (u32)((edx & 0xffu)); }
  /* 1040a750 test byte ptr [edi + esi*2 + 1], 0x80 */ { const u32 m_ = (u32)(edi + esi * 2u + 0x1u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1040a755 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040a756 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040a757 je 0x1040a768 */ if (ZF_) goto L_1040a768;
  /* 1040a759 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 1040a75b mov byte ptr [ebp - 3], al */ { const u32 m_ = (u32)(ebp + 0xfffffffdu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040a75e mov byte ptr [ebp - 4], dl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 1040a761 mov byte ptr [ebp - 2], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffeu); M8(m_) = (u8)(0x0u); }
  /* 1040a765 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 1040a766 jmp 0x1040a772 */ goto L_1040a772;
L_1040a768:;
  /* 1040a768 mov byte ptr [ebp - 4], al */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040a76b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040a76d mov byte ptr [ebp - 3], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffdu); M8(m_) = (u8)(0x0u); }
  /* 1040a771 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1040a772:;
  /* 1040a772 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1040a774 push dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a777 push dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040a77a lea ecx, [ebp + 0xe] */ ecx = (u32)((u32)(ebp + 0xeu));
  /* 1040a77d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040a77e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a77f lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 1040a782 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a783 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1040a785 call 0x10409988 */ esp -= 4; M32(esp) = 0x1040a78au; SAVEALL; F_10409988(c); ABI_CHECK(0x10409988u, 0x1040a785u); RETCHK(0x1040a78au, 0x1040a785u); LOADALL;
  /* 1040a78a add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040a78d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040a78f jne 0x1040a793 */ if (!ZF_) goto L_1040a793;
  /* 1040a791 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040a792 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1040a793:;
  /* 1040a793 movzx eax, word ptr [ebp + 0xe] */ { const u32 m_ = (u32)(ebp + 0xeu); eax = (u32)(M16(m_)); }
L_1040a797:;
  /* 1040a797 and eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = eax, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040a79a leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040a79b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040a9be(CPU *c) {
  NATIVE_HOOK(0x1040a9beu) REGS; LOADALL;
L_1040a9be:;
  /* 1040a9be jmp dword ptr [0x1040b008] */ { const u32 m_ = (u32)(0x1040b008u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_1040a9d0(CPU *c) {
  NATIVE_HOOK(0x1040a9d0u) REGS; LOADALL;
L_1040a9d0:;
  /* 1040a9d0 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040a9d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040a9d4 call 0x10404ca7 */ esp -= 4; M32(esp) = 0x1040a9d9u; SAVEALL; F_10404ca7(c); ABI_CHECK(0x10404ca7u, 0x1040a9d4u); RETCHK(0x1040a9d9u, 0x1040a9d4u); LOADALL;
  /* 1040a9d9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040a9da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040a9db(CPU *c) {
  NATIVE_HOOK(0x1040a9dbu) REGS; LOADALL;
  goto L_1040a9db;
L_10404dc4:;
  /* 10404dc4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10404dc5 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10404dc7 sub esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10404dca push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10404dcb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404dcc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10404dcd cld */ c->df = 0;
  /* 10404dce mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10404dd1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404dd3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10404dd4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10404dd5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10404dd6 push dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404dd9 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404ddc push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404ddf push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404de2 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404de5 call 0x104060d6 */ esp -= 4; M32(esp) = 0x10404deau; SAVEALL; F_104060d6(c); ABI_CHECK(0x104060d6u, 0x10404de5u); RETCHK(0x10404deau, 0x10404de5u); LOADALL;
  /* 10404dea add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10404ded mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10404df0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10404df1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404df2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404df3 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10404df6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10404df8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10404df9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1040a9db:;
  /* 1040a9db mov eax, 0x1040c2cc */ { eax = (u32)(0x1040c2ccu); }
  /* 1040a9e0 jmp 0x10404dc4 */ goto L_10404dc4;
}
