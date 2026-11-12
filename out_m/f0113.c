#include "funcs.h"

void F_104058bc(CPU *c) {
  NATIVE_HOOK(0x104058bcu) REGS; LOADALL;
L_104058bc:;
  /* 104058bc push dword ptr [0x1040dc60] */ { const u32 m_ = (u32)(0x1040dc60u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104058c2 push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104058c6 call 0x10405890 */ esp -= 4; M32(esp) = 0x104058cbu; SAVEALL; F_10405890(c); ABI_CHECK(0x10405890u, 0x104058c6u); RETCHK(0x104058cbu, 0x104058c6u); LOADALL;
  /* 104058cb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104058cc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104058cd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104058ce(CPU *c) {
  NATIVE_HOOK(0x104058ceu) REGS; LOADALL;
L_104058ce:;
  /* 104058ce mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 104058d1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104058d3 je 0x10405919 */ if (ZF_) goto L_10405919;
  /* 104058d5 lea edx, [eax + 8] */ edx = (u32)((u32)(eax + 0x8u));
  /* 104058d8 cmp byte ptr [edx], 0 */ { const u32 m_ = (u32)(edx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 104058db je 0x10405919 */ if (ZF_) goto L_10405919;
  /* 104058dd mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104058e0 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104058e2 je 0x104058f4 */ if (ZF_) goto L_104058f4;
  /* 104058e4 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104058e7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104058e8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104058e9 call 0x10408590 */ esp -= 4; M32(esp) = 0x104058eeu; SAVEALL; F_10408590(c); ABI_CHECK(0x10408590u, 0x104058e9u); RETCHK(0x104058eeu, 0x104058e9u); LOADALL;
  /* 104058ee test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104058f0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104058f1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104058f2 jne 0x10405916 */ if (!ZF_) goto L_10405916;
L_104058f4:;
  /* 104058f4 test byte ptr [edi], 2 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104058f7 je 0x104058fe */ if (ZF_) goto L_104058fe;
  /* 104058f9 test byte ptr [esi], 8 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104058fc je 0x10405916 */ if (ZF_) goto L_10405916;
L_104058fe:;
  /* 104058fe mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10405902 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10405904 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10405906 je 0x1040590d */ if (ZF_) goto L_1040590d;
  /* 10405908 test byte ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1040590b je 0x10405916 */ if (ZF_) goto L_10405916;
L_1040590d:;
  /* 1040590d test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1040590f je 0x10405919 */ if (ZF_) goto L_10405919;
  /* 10405911 test byte ptr [esi], 2 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10405914 jne 0x10405919 */ if (!ZF_) goto L_10405919;
L_10405916:;
  /* 10405916 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10405918 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10405919:;
  /* 10405919 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040591b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040591c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040591d(CPU *c) {
  NATIVE_HOOK(0x1040591du) REGS; LOADALL;
L_1040591d:;
  /* 1040591d mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 1040591f cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405925 je 0x1040592a */ if (ZF_) goto L_1040592a;
  /* 10405927 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10405929 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1040592a:;
  /* 1040592a call 0x104061b1 */ esp -= 4; M32(esp) = 0x1040592fu; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x1040592au); RETCHK(0x1040592fu, 0x1040592au); LOADALL;
  /* 1040592f and dword ptr [eax + 0x84], 0 */ { const u32 m_ = (u32)(eax + 0x84u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405936 jmp 0x10406487 */ SAVEALL; F_10406487(c); return;
}

void F_1040593b(CPU *c) {
  NATIVE_HOOK(0x1040593bu) REGS; LOADALL;
L_1040593b:;
  /* 1040593b push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 1040593d push 0x1040b3c0 */ { u32 v_ = 0x1040b3c0u; esp -= 4; M32(esp) = v_; }
  /* 10405942 call 0x104056c0 */ esp -= 4; M32(esp) = 0x10405947u; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x10405942u); RETCHK(0x10405947u, 0x10405942u); LOADALL;
  /* 10405947 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 1040594a mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 1040594d mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 10405950 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405955u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405950u); RETCHK(0x10405955u, 0x10405950u); LOADALL;
  /* 10405955 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1040595a inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040595c and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405960 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
L_10405963:;
  /* 10405963 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405966 je 0x104059cc */ if (ZF_) goto L_104059cc;
  /* 10405968 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040596b jle 0x10405972 */ if ((ZF_|LT_)) goto L_10405972;
  /* 1040596d cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405970 jl 0x10405977 */ if (LT_) goto L_10405977;
L_10405972:;
  /* 10405972 call 0x104064bc */ esp -= 4; M32(esp) = 0x10405977u; SAVEALL; F_104064bc(c); ABI_CHECK(0x104064bcu, 0x10405972u); RETCHK(0x10405977u, 0x10405972u); LOADALL;
L_10405977:;
  /* 10405977 mov eax, esi */ { eax = (u32)(esi); }
  /* 10405979 shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 1040597c mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1040597f add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10405981 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 10405983 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 10405986 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 1040598d cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405991 je 0x104059a8 */ if (ZF_) goto L_104059a8;
  /* 10405993 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 10405996 push 0x103 */ { u32 v_ = 0x103u; esp -= 4; M32(esp) = v_; }
  /* 1040599b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040599c mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1040599f push dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104059a3 call 0x104064f0 */ esp -= 4; M32(esp) = 0x104059a8u; SAVEALL; F_104064f0(c); ABI_CHECK(0x104064f0u, 0x104059a3u); RETCHK(0x104059a8u, 0x104059a3u); LOADALL;
L_104059a8:;
  /* 104059a8 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104059ac jmp 0x104059c7 */ goto L_104059c7;
L_104059c7:;
  /* 104059c7 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 104059ca jmp 0x10405963 */ goto L_10405963;
L_104059cc:;
  /* 104059cc or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104059d0 call 0x104059ee */ esp -= 4; M32(esp) = 0x104059d5u; SAVEALL; F_104059ee(c); ABI_CHECK(0x104059eeu, 0x104059d0u); RETCHK(0x104059d5u, 0x104059d0u); LOADALL;
  /* 104059d5 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104059d8 je 0x104059df */ if (ZF_) goto L_104059df;
  /* 104059da call 0x104064bc */ esp -= 4; M32(esp) = 0x104059dfu; SAVEALL; F_104064bc(c); ABI_CHECK(0x104064bcu, 0x104059dau); RETCHK(0x104059dfu, 0x104059dau); LOADALL;
L_104059df:;
  /* 104059df mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 104059e2 call 0x104056fb */ esp -= 4; M32(esp) = 0x104059e7u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x104059e2u); RETCHK(0x104059e7u, 0x104059e2u); LOADALL;
  /* 104059e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104059ae(CPU *c) {
  NATIVE_HOOK(0x104059aeu) REGS; LOADALL;
L_104059ae:;
  /* 104059ae mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 104059b1 call 0x1040591d */ esp -= 4; M32(esp) = 0x104059b6u; SAVEALL; F_1040591d(c); ABI_CHECK(0x1040591du, 0x104059b1u); RETCHK(0x104059b6u, 0x104059b1u); LOADALL;
  /* 104059b6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104059b7(CPU *c) {
  NATIVE_HOOK(0x104059b7u) REGS; LOADALL;
  goto L_104059b7;
L_10405963:;
  /* 10405963 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405966 je 0x104059cc */ if (ZF_) goto L_104059cc;
  /* 10405968 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040596b jle 0x10405972 */ if ((ZF_|LT_)) goto L_10405972;
  /* 1040596d cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405970 jl 0x10405977 */ if (LT_) goto L_10405977;
L_10405972:;
  /* 10405972 call 0x104064bc */ esp -= 4; M32(esp) = 0x10405977u; SAVEALL; F_104064bc(c); ABI_CHECK(0x104064bcu, 0x10405972u); RETCHK(0x10405977u, 0x10405972u); LOADALL;
L_10405977:;
  /* 10405977 mov eax, esi */ { eax = (u32)(esi); }
  /* 10405979 shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 1040597c mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1040597f add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10405981 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 10405983 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 10405986 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 1040598d cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405991 je 0x104059a8 */ if (ZF_) goto L_104059a8;
  /* 10405993 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 10405996 push 0x103 */ { u32 v_ = 0x103u; esp -= 4; M32(esp) = v_; }
  /* 1040599b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040599c mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1040599f push dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104059a3 call 0x104064f0 */ esp -= 4; M32(esp) = 0x104059a8u; SAVEALL; F_104064f0(c); ABI_CHECK(0x104064f0u, 0x104059a3u); RETCHK(0x104059a8u, 0x104059a3u); LOADALL;
L_104059a8:;
  /* 104059a8 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104059ac jmp 0x104059c7 */ goto L_104059c7;
L_104059b7:;
  /* 104059b7 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 104059ba and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104059be mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 104059c1 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 104059c4 mov esi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); esi = (u32)(M32(m_)); }
L_104059c7:;
  /* 104059c7 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 104059ca jmp 0x10405963 */ goto L_10405963;
L_104059cc:;
  /* 104059cc or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104059d0 call 0x104059ee */ esp -= 4; M32(esp) = 0x104059d5u; SAVEALL; F_104059ee(c); ABI_CHECK(0x104059eeu, 0x104059d0u); RETCHK(0x104059d5u, 0x104059d0u); LOADALL;
  /* 104059d5 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104059d8 je 0x104059df */ if (ZF_) goto L_104059df;
  /* 104059da call 0x104064bc */ esp -= 4; M32(esp) = 0x104059dfu; SAVEALL; F_104064bc(c); ABI_CHECK(0x104064bcu, 0x104059dau); RETCHK(0x104059dfu, 0x104059dau); LOADALL;
L_104059df:;
  /* 104059df mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 104059e2 call 0x104056fb */ esp -= 4; M32(esp) = 0x104059e7u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x104059e2u); RETCHK(0x104059e7u, 0x104059e2u); LOADALL;
  /* 104059e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104059e8(CPU *c) {
  NATIVE_HOOK(0x104059e8u) REGS; LOADALL;
L_104059e8:;
  /* 104059e8 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 104059eb mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 104059ee call 0x104061b1 */ esp -= 4; M32(esp) = 0x104059f3u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x104059eeu); RETCHK(0x104059f3u, 0x104059eeu); LOADALL;
  /* 104059f3 cmp dword ptr [eax + 0x84], 0 */ { const u32 m_ = (u32)(eax + 0x84u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104059fa jle 0x10405a08 */ if ((ZF_|LT_)) goto L_10405a08;
  /* 104059fc call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405a01u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x104059fcu); RETCHK(0x10405a01u, 0x104059fcu); LOADALL;
  /* 10405a01 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10405a06 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10405a08:;
  /* 10405a08 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104059ee(CPU *c) {
  NATIVE_HOOK(0x104059eeu) REGS; LOADALL;
L_104059ee:;
  /* 104059ee call 0x104061b1 */ esp -= 4; M32(esp) = 0x104059f3u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x104059eeu); RETCHK(0x104059f3u, 0x104059eeu); LOADALL;
  /* 104059f3 cmp dword ptr [eax + 0x84], 0 */ { const u32 m_ = (u32)(eax + 0x84u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104059fa jle 0x10405a08 */ if ((ZF_|LT_)) goto L_10405a08;
  /* 104059fc call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405a01u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x104059fcu); RETCHK(0x10405a01u, 0x104059fcu); LOADALL;
  /* 10405a01 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10405a06 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10405a08:;
  /* 10405a08 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405a09(CPU *c) {
  NATIVE_HOOK(0x10405a09u) REGS; LOADALL;
L_10405a09:;
  /* 10405a09 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10405a0b push 0x1040b3d8 */ { u32 v_ = 0x1040b3d8u; esp -= 4; M32(esp) = v_; }
  /* 10405a10 call 0x104056c0 */ esp -= 4; M32(esp) = 0x10405a15u; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x10405a10u); RETCHK(0x10405a15u, 0x10405a10u); LOADALL;
  /* 10405a15 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10405a18 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405a1a je 0x10405a37 */ if (ZF_) goto L_10405a37;
  /* 10405a1c mov ecx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10405a1f mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10405a22 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405a24 je 0x10405a37 */ if (ZF_) goto L_10405a37;
  /* 10405a26 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405a2a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10405a2b push dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405a2e call 0x10404d6b */ esp -= 4; M32(esp) = 0x10405a33u; SAVEALL; F_10404d6b(c); ABI_CHECK(0x10404d6bu, 0x10405a2eu); RETCHK(0x10405a33u, 0x10405a2eu); LOADALL;
  /* 10405a33 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10405a37:;
  /* 10405a37 call 0x104056fb */ esp -= 4; M32(esp) = 0x10405a3cu; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10405a37u); RETCHK(0x10405a3cu, 0x10405a37u); LOADALL;
  /* 10405a3c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405a3d(CPU *c) {
  NATIVE_HOOK(0x10405a3du) REGS; LOADALL;
L_10405a3d:;
  /* 10405a3d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10405a3f cmp byte ptr [ebp + 0xc], al */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10405a42 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 10405a45 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405a46(CPU *c) {
  NATIVE_HOOK(0x10405a46u) REGS; LOADALL;
L_10405a46:;
  /* 10405a46 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10405a49 jmp 0x10406487 */ SAVEALL; F_10406487(c); return;
}

void F_10405a4e(CPU *c) {
  NATIVE_HOOK(0x10405a4eu) REGS; LOADALL;
L_10405a4e:;
  /* 10405a4e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405a4f mov esi, eax */ { esi = (u32)(eax); }
  /* 10405a51 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10405a53 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10405a55 cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405a59 jl 0x10405a6b */ if (LT_) goto L_10405a6b;
  /* 10405a5b mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10405a5e mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10405a61 mov esi, dword ptr [edx + esi] */ { const u32 m_ = (u32)(edx + esi); esi = (u32)(M32(m_)); }
  /* 10405a64 mov ecx, dword ptr [esi + ecx] */ { const u32 m_ = (u32)(esi + ecx); ecx = (u32)(M32(m_)); }
  /* 10405a67 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10405a69 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_10405a6b:;
  /* 10405a6b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10405a6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405a6d(CPU *c) {
  NATIVE_HOOK(0x10405a6du) REGS; LOADALL;
L_10405a6d:;
  /* 10405a6d push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 10405a6f push 0x1040b3e8 */ { u32 v_ = 0x1040b3e8u; esp -= 4; M32(esp) = v_; }
  /* 10405a74 call 0x104056c0 */ esp -= 4; M32(esp) = 0x10405a79u; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x10405a74u); RETCHK(0x10405a79u, 0x10405a74u); LOADALL;
  /* 10405a79 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10405a7b mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10405a7e mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10405a81 mov dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 10405a84 and dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405a88 mov eax, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10405a8b mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 10405a8e push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405a91 lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 10405a94 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10405a95 call 0x10405028 */ esp -= 4; M32(esp) = 0x10405a9au; SAVEALL; F_10405028(c); ABI_CHECK(0x10405028u, 0x10405a95u); RETCHK(0x10405a9au, 0x10405a95u); LOADALL;
  /* 10405a9a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405a9b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405a9c mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 10405a9f call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405aa4u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405a9fu); RETCHK(0x10405aa4u, 0x10405a9fu); LOADALL;
  /* 10405aa4 mov eax, dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); eax = (u32)(M32(m_)); }
  /* 10405aa7 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 10405aaa call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405aafu; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405aaau); RETCHK(0x10405aafu, 0x10405aaau); LOADALL;
  /* 10405aaf mov eax, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); eax = (u32)(M32(m_)); }
  /* 10405ab5 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 10405ab8 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405abdu; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405ab8u); RETCHK(0x10405abdu, 0x10405ab8u); LOADALL;
  /* 10405abd mov dword ptr [eax + 0x7c], esi */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(esi); }
  /* 10405ac0 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405ac5u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405ac0u); RETCHK(0x10405ac5u, 0x10405ac0u); LOADALL;
  /* 10405ac5 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10405ac8 mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 10405ace and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405ad2 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 10405ad9 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405adc push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405adf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10405ae0 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405ae3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10405ae4 call 0x104050bd */ esp -= 4; M32(esp) = 0x10405ae9u; SAVEALL; F_104050bd(c); ABI_CHECK(0x104050bdu, 0x10405ae4u); RETCHK(0x10405ae9u, 0x10405ae4u); LOADALL;
  /* 10405ae9 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10405aec mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10405aef and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405af3 jmp 0x10405ba7 */ goto L_10405ba7;
L_10405ba7:;
  /* 10405ba7 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405bab call 0x10405bc2 */ esp -= 4; M32(esp) = 0x10405bb0u; SAVEALL; F_10405bc2(c); ABI_CHECK(0x10405bc2u, 0x10405babu); RETCHK(0x10405bb0u, 0x10405babu); LOADALL;
  /* 10405bb0 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 10405bb3 call 0x104056fb */ esp -= 4; M32(esp) = 0x10405bb8u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10405bb3u); RETCHK(0x10405bb8u, 0x10405bb3u); LOADALL;
  /* 10405bb8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405af8(CPU *c) {
  NATIVE_HOOK(0x10405af8u) REGS; LOADALL;
L_10405af8:;
  /* 10405af8 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10405afb mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10405afd mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10405b00 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10405b03 cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405b09 jne 0x10405b3c */ if (!ZF_) goto L_10405b3c;
  /* 10405b0b mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10405b0e cmp dword ptr [eax + 0x10], 3 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405b12 jne 0x10405b3c */ if (!ZF_) goto L_10405b3c;
  /* 10405b14 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10405b17 cmp dword ptr [eax + 0x14], 0x19930520 */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405b1e je 0x10405b2c */ if (ZF_) goto L_10405b2c;
  /* 10405b20 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10405b23 cmp dword ptr [eax + 0x14], 0x19930521 */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405b2a jne 0x10405b3c */ if (!ZF_) goto L_10405b3c;
L_10405b2c:;
  /* 10405b2c mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10405b2f cmp dword ptr [eax + 0x1c], 0 */ { const u32 m_ = (u32)(eax + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405b33 mov dword ptr [ebp - 0x24], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x1u); }
  /* 10405b3a je 0x10405b43 */ if (ZF_) goto L_10405b43;
L_10405b3c:;
  /* 10405b3c mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
L_10405b43:;
  /* 10405b43 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 10405b46 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405b47(CPU *c) {
  NATIVE_HOOK(0x10405b47u) REGS; LOADALL;
L_10405b47:;
  /* 10405b47 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10405b4a mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 10405b4d mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10405b50 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 10405b53 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10405b56 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10405b59 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 10405b5c mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 10405b5f mov dword ptr [ebp - 0x2c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edx); }
  /* 10405b62 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_10405b64:;
  /* 10405b64 mov dword ptr [ebp - 0x34], edx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edx); }
  /* 10405b67 cmp edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405b6a jae 0x10405b90 */ if (!CF_) goto L_10405b90;
  /* 10405b6c lea esi, [edx + edx*4] */ esi = (u32)((u32)(edx + edx * 4u));
  /* 10405b6f mov ebx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ebx = (u32)(M32(m_)); }
  /* 10405b72 lea esi, [ebx + esi*4] */ esi = (u32)((u32)(ebx + esi * 4u));
  /* 10405b75 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10405b78 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405b7a jle 0x10405bb9 */ if ((ZF_|LT_)) goto L_10405bb9;
  /* 10405b7c cmp eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405b7f jg 0x10405bb9 */ if (!(ZF_|LT_)) goto L_10405bb9;
  /* 10405b81 lea eax, [ebx + 1] */ eax = (u32)((u32)(ebx + 0x1u));
  /* 10405b84 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 10405b87 mov edx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); edx = (u32)(M32(m_)); }
  /* 10405b8a mov eax, dword ptr [edx + eax*8] */ { const u32 m_ = (u32)(edx + eax * 8u); eax = (u32)(M32(m_)); }
  /* 10405b8d mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
L_10405b90:;
  /* 10405b90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10405b91 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10405b92 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10405b94 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405b95 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10405b96 call 0x1040593b */ esp -= 4; M32(esp) = 0x10405b9bu; SAVEALL; F_1040593b(c); ABI_CHECK(0x1040593bu, 0x10405b96u); RETCHK(0x10405b9bu, 0x10405b96u); LOADALL;
  /* 10405b9b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10405b9e mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 10405ba1 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 10405ba4 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10405ba7 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405bab call 0x10405bc2 */ esp -= 4; M32(esp) = 0x10405bb0u; SAVEALL; F_10405bc2(c); ABI_CHECK(0x10405bc2u, 0x10405babu); RETCHK(0x10405bb0u, 0x10405babu); LOADALL;
  /* 10405bb0 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 10405bb3 call 0x104056fb */ esp -= 4; M32(esp) = 0x10405bb8u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10405bb3u); RETCHK(0x10405bb8u, 0x10405bb3u); LOADALL;
  /* 10405bb8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10405bb9:;
  /* 10405bb9 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10405bba jmp 0x10405b64 */ goto L_10405b64;
}

void F_10405bbc(CPU *c) {
  NATIVE_HOOK(0x10405bbcu) REGS; LOADALL;
L_10405bbc:;
  /* 10405bbc mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10405bbf mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10405bc2 mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 10405bc5 mov dword ptr [edi - 4], eax */ { const u32 m_ = (u32)(edi + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10405bc8 push dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405bcb call 0x10405071 */ esp -= 4; M32(esp) = 0x10405bd0u; SAVEALL; F_10405071(c); ABI_CHECK(0x10405071u, 0x10405bcbu); RETCHK(0x10405bd0u, 0x10405bcbu); LOADALL;
  /* 10405bd0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405bd1 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405bd6u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405bd1u); RETCHK(0x10405bd6u, 0x10405bd1u); LOADALL;
  /* 10405bd6 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 10405bd9 mov dword ptr [eax + 0x7c], ecx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(ecx); }
  /* 10405bdc call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405be1u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405bdcu); RETCHK(0x10405be1u, 0x10405bdcu); LOADALL;
  /* 10405be1 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 10405be4 mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 10405bea cmp dword ptr [esi], 0xe06d7363 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405bf0 jne 0x10405c30 */ if (!ZF_) goto L_10405c30;
  /* 10405bf2 cmp dword ptr [esi + 0x10], 3 */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405bf6 jne 0x10405c30 */ if (!ZF_) goto L_10405c30;
  /* 10405bf8 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 10405bfb cmp eax, 0x19930520 */ { u32 a_ = eax, b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405c00 je 0x10405c09 */ if (ZF_) goto L_10405c09;
  /* 10405c02 cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405c07 jne 0x10405c30 */ if (!ZF_) goto L_10405c30;
L_10405c09:;
  /* 10405c09 cmp dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405c0d jne 0x10405c30 */ if (!ZF_) goto L_10405c30;
  /* 10405c0f cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405c13 je 0x10405c30 */ if (ZF_) goto L_10405c30;
  /* 10405c15 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405c18 call 0x10405050 */ esp -= 4; M32(esp) = 0x10405c1du; SAVEALL; F_10405050(c); ABI_CHECK(0x10405050u, 0x10405c18u); RETCHK(0x10405c1du, 0x10405c18u); LOADALL;
  /* 10405c1d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405c1e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405c20 je 0x10405c30 */ if (ZF_) goto L_10405c30;
  /* 10405c22 call 0x104051c2 */ esp -= 4; M32(esp) = 0x10405c27u; SAVEALL; F_104051c2(c); ABI_CHECK(0x104051c2u, 0x10405c22u); RETCHK(0x10405c27u, 0x10405c22u); LOADALL;
  /* 10405c27 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10405c28 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405c29 call 0x10405a09 */ esp -= 4; M32(esp) = 0x10405c2eu; SAVEALL; F_10405a09(c); ABI_CHECK(0x10405a09u, 0x10405c29u); RETCHK(0x10405c2eu, 0x10405c29u); LOADALL;
  /* 10405c2e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405c2f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10405c30:;
  /* 10405c30 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405bc2(CPU *c) {
  NATIVE_HOOK(0x10405bc2u) REGS; LOADALL;
L_10405bc2:;
  /* 10405bc2 mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 10405bc5 mov dword ptr [edi - 4], eax */ { const u32 m_ = (u32)(edi + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10405bc8 push dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405bcb call 0x10405071 */ esp -= 4; M32(esp) = 0x10405bd0u; SAVEALL; F_10405071(c); ABI_CHECK(0x10405071u, 0x10405bcbu); RETCHK(0x10405bd0u, 0x10405bcbu); LOADALL;
  /* 10405bd0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405bd1 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405bd6u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405bd1u); RETCHK(0x10405bd6u, 0x10405bd1u); LOADALL;
  /* 10405bd6 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 10405bd9 mov dword ptr [eax + 0x7c], ecx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(ecx); }
  /* 10405bdc call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405be1u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405bdcu); RETCHK(0x10405be1u, 0x10405bdcu); LOADALL;
  /* 10405be1 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 10405be4 mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 10405bea cmp dword ptr [esi], 0xe06d7363 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405bf0 jne 0x10405c30 */ if (!ZF_) goto L_10405c30;
  /* 10405bf2 cmp dword ptr [esi + 0x10], 3 */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405bf6 jne 0x10405c30 */ if (!ZF_) goto L_10405c30;
  /* 10405bf8 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 10405bfb cmp eax, 0x19930520 */ { u32 a_ = eax, b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405c00 je 0x10405c09 */ if (ZF_) goto L_10405c09;
  /* 10405c02 cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405c07 jne 0x10405c30 */ if (!ZF_) goto L_10405c30;
L_10405c09:;
  /* 10405c09 cmp dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405c0d jne 0x10405c30 */ if (!ZF_) goto L_10405c30;
  /* 10405c0f cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405c13 je 0x10405c30 */ if (ZF_) goto L_10405c30;
  /* 10405c15 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405c18 call 0x10405050 */ esp -= 4; M32(esp) = 0x10405c1du; SAVEALL; F_10405050(c); ABI_CHECK(0x10405050u, 0x10405c18u); RETCHK(0x10405c1du, 0x10405c18u); LOADALL;
  /* 10405c1d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405c1e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405c20 je 0x10405c30 */ if (ZF_) goto L_10405c30;
  /* 10405c22 call 0x104051c2 */ esp -= 4; M32(esp) = 0x10405c27u; SAVEALL; F_104051c2(c); ABI_CHECK(0x104051c2u, 0x10405c22u); RETCHK(0x10405c27u, 0x10405c22u); LOADALL;
  /* 10405c27 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10405c28 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405c29 call 0x10405a09 */ esp -= 4; M32(esp) = 0x10405c2eu; SAVEALL; F_10405a09(c); ABI_CHECK(0x10405a09u, 0x10405c29u); RETCHK(0x10405c2eu, 0x10405c29u); LOADALL;
  /* 10405c2e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405c2f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10405c30:;
  /* 10405c30 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405c31(CPU *c) {
  NATIVE_HOOK(0x10405c31u) REGS; LOADALL;
L_10405c31:;
  /* 10405c31 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10405c33 push 0x1040b400 */ { u32 v_ = 0x1040b400u; esp -= 4; M32(esp) = v_; }
  /* 10405c38 call 0x104056c0 */ esp -= 4; M32(esp) = 0x10405c3du; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x10405c38u); RETCHK(0x10405c3du, 0x10405c38u); LOADALL;
  /* 10405c3d mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10405c3f mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10405c42 mov edi, edx */ { edi = (u32)(edx); }
  /* 10405c44 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10405c47 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10405c4a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405c4c je 0x10405d9b */ if (ZF_) goto L_10405d9b;
  /* 10405c52 cmp byte ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10405c56 je 0x10405d9b */ if (ZF_) goto L_10405d9b;
  /* 10405c5c mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10405c5f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405c61 jne 0x10405c6d */ if (!ZF_) goto L_10405c6d;
  /* 10405c63 test byte ptr [eax + 3], 0x80 */ { const u32 m_ = (u32)(eax + 0x3u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10405c67 je 0x10405d9b */ if (ZF_) goto L_10405d9b;
L_10405c6d:;
  /* 10405c6d mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10405c6f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405c71 js 0x10405c77 */ if (SF_) goto L_10405c77;
  /* 10405c73 lea edi, [ecx + edi + 0xc] */ edi = (u32)((u32)(ecx + edi + 0xcu));
L_10405c77:;
  /* 10405c77 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405c7b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10405c7d push dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405c80 test al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10405c82 je 0x10405cb9 */ if (ZF_) goto L_10405cb9;
  /* 10405c84 call 0x10408618 */ esp -= 4; M32(esp) = 0x10405c89u; SAVEALL; F_10408618(c); ABI_CHECK(0x10408618u, 0x10405c84u); RETCHK(0x10405c89u, 0x10405c84u); LOADALL;
  /* 10405c89 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405c8a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405c8b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405c8d je 0x10405d92 */ if (ZF_) goto L_10405d92;
  /* 10405c93 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10405c95 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10405c96 call 0x10408634 */ esp -= 4; M32(esp) = 0x10405c9bu; SAVEALL; F_10408634(c); ABI_CHECK(0x10408634u, 0x10405c96u); RETCHK(0x10405c9bu, 0x10405c96u); LOADALL;
  /* 10405c9b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405c9c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405c9d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405c9f je 0x10405d92 */ if (ZF_) goto L_10405d92;
  /* 10405ca5 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 10405ca8 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
L_10405caa:;
  /* 10405caa lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10405cad call 0x10405a4e */ esp -= 4; M32(esp) = 0x10405cb2u; SAVEALL; F_10405a4e(c); ABI_CHECK(0x10405a4eu, 0x10405cadu); RETCHK(0x10405cb2u, 0x10405cadu); LOADALL;
  /* 10405cb2 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 10405cb4 jmp 0x10405d97 */ goto L_10405d97;
L_10405cb9:;
  /* 10405cb9 test byte ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10405cbc je 0x10405d04 */ if (ZF_) goto L_10405d04;
  /* 10405cbe call 0x10408618 */ esp -= 4; M32(esp) = 0x10405cc3u; SAVEALL; F_10408618(c); ABI_CHECK(0x10408618u, 0x10405cbeu); RETCHK(0x10405cc3u, 0x10405cbeu); LOADALL;
  /* 10405cc3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405cc4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405cc5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405cc7 je 0x10405d92 */ if (ZF_) goto L_10405d92;
  /* 10405ccd push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10405ccf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10405cd0 call 0x10408634 */ esp -= 4; M32(esp) = 0x10405cd5u; SAVEALL; F_10408634(c); ABI_CHECK(0x10408634u, 0x10405cd0u); RETCHK(0x10405cd5u, 0x10405cd0u); LOADALL;
  /* 10405cd5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405cd6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405cd7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405cd9 je 0x10405d92 */ if (ZF_) goto L_10405d92;
  /* 10405cdf push dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405ce2 push dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405ce5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10405ce6 call 0x10408670 */ esp -= 4; M32(esp) = 0x10405cebu; SAVEALL; F_10408670(c); ABI_CHECK(0x10408670u, 0x10405ce6u); RETCHK(0x10405cebu, 0x10405ce6u); LOADALL;
  /* 10405ceb add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10405cee cmp dword ptr [esi + 0x14], 4 */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405cf2 jne 0x10405d97 */ if (!ZF_) goto L_10405d97;
  /* 10405cf8 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10405cfa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405cfc je 0x10405d97 */ if (ZF_) goto L_10405d97;
  /* 10405d02 jmp 0x10405caa */ goto L_10405caa;
L_10405d04:;
  /* 10405d04 cmp dword ptr [esi + 0x18], 0 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405d08 jne 0x10405d3d */ if (!ZF_) goto L_10405d3d;
  /* 10405d0a call 0x10408618 */ esp -= 4; M32(esp) = 0x10405d0fu; SAVEALL; F_10408618(c); ABI_CHECK(0x10408618u, 0x10405d0au); RETCHK(0x10405d0fu, 0x10405d0au); LOADALL;
  /* 10405d0f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405d10 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405d11 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405d13 je 0x10405d92 */ if (ZF_) goto L_10405d92;
  /* 10405d15 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10405d17 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10405d18 call 0x10408634 */ esp -= 4; M32(esp) = 0x10405d1du; SAVEALL; F_10408634(c); ABI_CHECK(0x10408634u, 0x10405d18u); RETCHK(0x10405d1du, 0x10405d18u); LOADALL;
  /* 10405d1d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405d1e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405d1f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405d21 je 0x10405d92 */ if (ZF_) goto L_10405d92;
  /* 10405d23 push dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405d26 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10405d29 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 10405d2c call 0x10405a4e */ esp -= 4; M32(esp) = 0x10405d31u; SAVEALL; F_10405a4e(c); ABI_CHECK(0x10405a4eu, 0x10405d2cu); RETCHK(0x10405d31u, 0x10405d2cu); LOADALL;
  /* 10405d31 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10405d32 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10405d33 call 0x10408670 */ esp -= 4; M32(esp) = 0x10405d38u; SAVEALL; F_10408670(c); ABI_CHECK(0x10408670u, 0x10405d33u); RETCHK(0x10405d38u, 0x10405d33u); LOADALL;
  /* 10405d38 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10405d3b jmp 0x10405d97 */ goto L_10405d97;
L_10405d3d:;
  /* 10405d3d call 0x10408618 */ esp -= 4; M32(esp) = 0x10405d42u; SAVEALL; F_10408618(c); ABI_CHECK(0x10408618u, 0x10405d3du); RETCHK(0x10405d42u, 0x10405d3du); LOADALL;
  /* 10405d42 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405d43 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405d44 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405d46 je 0x10405d92 */ if (ZF_) goto L_10405d92;
  /* 10405d48 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10405d4a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10405d4b call 0x10408634 */ esp -= 4; M32(esp) = 0x10405d50u; SAVEALL; F_10408634(c); ABI_CHECK(0x10408634u, 0x10405d4bu); RETCHK(0x10405d50u, 0x10405d4bu); LOADALL;
  /* 10405d50 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405d51 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405d52 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405d54 je 0x10405d92 */ if (ZF_) goto L_10405d92;
  /* 10405d56 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405d59 call 0x10408650 */ esp -= 4; M32(esp) = 0x10405d5eu; SAVEALL; F_10408650(c); ABI_CHECK(0x10408650u, 0x10405d59u); RETCHK(0x10405d5eu, 0x10405d59u); LOADALL;
  /* 10405d5e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405d5f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405d61 je 0x10405d92 */ if (ZF_) goto L_10405d92;
  /* 10405d63 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 10405d66 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10405d69 test byte ptr [esi], 4 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10405d6c je 0x10405d81 */ if (ZF_) goto L_10405d81;
  /* 10405d6e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10405d70 call 0x10405a4e */ esp -= 4; M32(esp) = 0x10405d75u; SAVEALL; F_10405a4e(c); ABI_CHECK(0x10405a4eu, 0x10405d70u); RETCHK(0x10405d75u, 0x10405d70u); LOADALL;
  /* 10405d75 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10405d76 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405d79 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10405d7a call 0x10404d6b */ esp -= 4; M32(esp) = 0x10405d7fu; SAVEALL; F_10404d6b(c); ABI_CHECK(0x10404d6bu, 0x10405d7au); RETCHK(0x10405d7fu, 0x10405d7au); LOADALL;
  /* 10405d7f jmp 0x10405d97 */ goto L_10405d97;
L_10405d81:;
  /* 10405d81 call 0x10405a4e */ esp -= 4; M32(esp) = 0x10405d86u; SAVEALL; F_10405a4e(c); ABI_CHECK(0x10405a4eu, 0x10405d81u); RETCHK(0x10405d86u, 0x10405d81u); LOADALL;
  /* 10405d86 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10405d87 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405d8a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10405d8b call 0x10404d6b */ esp -= 4; M32(esp) = 0x10405d90u; SAVEALL; F_10404d6b(c); ABI_CHECK(0x10404d6bu, 0x10405d8bu); RETCHK(0x10405d90u, 0x10405d8bu); LOADALL;
  /* 10405d90 jmp 0x10405d97 */ goto L_10405d97;
L_10405d92:;
  /* 10405d92 call 0x104064bc */ esp -= 4; M32(esp) = 0x10405d97u; SAVEALL; F_104064bc(c); ABI_CHECK(0x104064bcu, 0x10405d92u); RETCHK(0x10405d97u, 0x10405d92u); LOADALL;
L_10405d97:;
  /* 10405d97 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10405d9b:;
  /* 10405d9b call 0x104056fb */ esp -= 4; M32(esp) = 0x10405da0u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10405d9bu); RETCHK(0x10405da0u, 0x10405d9bu); LOADALL;
  /* 10405da0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405da1(CPU *c) {
  NATIVE_HOOK(0x10405da1u) REGS; LOADALL;
L_10405da1:;
  /* 10405da1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10405da3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10405da4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405da5(CPU *c) {
  NATIVE_HOOK(0x10405da5u) REGS; LOADALL;
L_10405da5:;
  /* 10405da5 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10405da8 jmp 0x10406487 */ SAVEALL; F_10406487(c); return;
}

void F_10405dad(CPU *c) {
  NATIVE_HOOK(0x10405dadu) REGS; LOADALL;
L_10405dad:;
  /* 10405dad push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10405dae mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10405db0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405db2 je 0x10405dc1 */ if (ZF_) goto L_10405dc1;
  /* 10405db4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10405db5 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405db8 mov edx, esi */ { edx = (u32)(esi); }
  /* 10405dba call 0x10405c31 */ esp -= 4; M32(esp) = 0x10405dbfu; SAVEALL; F_10405c31(c); ABI_CHECK(0x10405c31u, 0x10405dbau); RETCHK(0x10405dbfu, 0x10405dbau); LOADALL;
  /* 10405dbf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405dc0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10405dc1:;
  /* 10405dc1 cmp dword ptr [ebp + 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405dc5 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405dc8 jne 0x10405dcd */ if (!ZF_) goto L_10405dcd;
  /* 10405dca push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405dcb jmp 0x10405dd0 */ goto L_10405dd0;
L_10405dcd:;
  /* 10405dcd push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
L_10405dd0:;
  /* 10405dd0 call 0x10404d72 */ esp -= 4; M32(esp) = 0x10405dd5u; SAVEALL; F_10404d72(c); ABI_CHECK(0x10404d72u, 0x10405dd0u); RETCHK(0x10405dd5u, 0x10405dd0u); LOADALL;
  /* 10405dd5 push dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405dd7 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405dda push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405ddd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405dde call 0x1040593b */ esp -= 4; M32(esp) = 0x10405de3u; SAVEALL; F_1040593b(c); ABI_CHECK(0x1040593bu, 0x10405ddeu); RETCHK(0x10405de3u, 0x10405ddeu); LOADALL;
  /* 10405de3 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10405de6 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10405deb push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405dee inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10405def push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405df2 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 10405df5 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405df8 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10405dfb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405dfc push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405dff call 0x10405a6d */ esp -= 4; M32(esp) = 0x10405e04u; SAVEALL; F_10405a6d(c); ABI_CHECK(0x10405a6du, 0x10405dffu); RETCHK(0x10405e04u, 0x10405dffu); LOADALL;
  /* 10405e04 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10405e07 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405e09 je 0x10405e12 */ if (ZF_) goto L_10405e12;
  /* 10405e0b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405e0c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10405e0d call 0x10404d3b */ esp -= 4; M32(esp) = 0x10405e12u; SAVEALL; F_10404d3b(c); ABI_CHECK(0x10404d3bu, 0x10405e0du); RETCHK(0x10405e12u, 0x10405e0du); LOADALL;
L_10405e12:;
  /* 10405e12 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10405e13 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405e14(CPU *c) {
  NATIVE_HOOK(0x10405e14u) REGS; LOADALL;
L_10405e14:;
  /* 10405e14 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10405e15 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10405e17 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10405e18 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10405e19 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405e1a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10405e1d cmp dword ptr [esi], 0x80000003 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x80000003u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405e23 je 0x10405ecf */ if (ZF_) goto L_10405ecf;
  /* 10405e29 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405e2eu; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405e29u); RETCHK(0x10405e2eu, 0x10405e29u); LOADALL;
  /* 10405e2e cmp dword ptr [eax + 0x74], 0 */ { const u32 m_ = (u32)(eax + 0x74u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405e32 je 0x10405e53 */ if (ZF_) goto L_10405e53;
  /* 10405e34 push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405e37 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405e3a push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405e3d push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405e40 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405e43 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405e46 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405e47 call 0x10404e35 */ esp -= 4; M32(esp) = 0x10405e4cu; SAVEALL; F_10404e35(c); ABI_CHECK(0x10404e35u, 0x10405e47u); RETCHK(0x10405e4cu, 0x10405e47u); LOADALL;
  /* 10405e4c add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10405e4f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405e51 jne 0x10405ecf */ if (!ZF_) goto L_10405ecf;
L_10405e53:;
  /* 10405e53 mov esi, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 10405e56 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10405e57 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 10405e5a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10405e5b lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10405e5e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10405e5f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405e60 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405e63 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405e66 call 0x10404fae */ esp -= 4; M32(esp) = 0x10405e6bu; SAVEALL; F_10404fae(c); ABI_CHECK(0x10404faeu, 0x10405e66u); RETCHK(0x10405e6bu, 0x10405e66u); LOADALL;
  /* 10405e6b mov edi, eax */ { edi = (u32)(eax); }
  /* 10405e6d mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10405e70 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10405e73 cmp eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405e76 jae 0x10405ece */ if (!CF_) goto L_10405ece;
  /* 10405e78 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
L_10405e79:;
  /* 10405e79 cmp esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405e7b jl 0x10405ebf */ if (LT_) goto L_10405ebf;
  /* 10405e7d cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405e80 jg 0x10405ebf */ if (!(ZF_|LT_)) goto L_10405ebf;
  /* 10405e82 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10405e85 mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10405e88 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10405e8b add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10405e8d mov ecx, dword ptr [eax - 0xc] */ { const u32 m_ = (u32)(eax + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10405e90 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405e92 je 0x10405e9a */ if (ZF_) goto L_10405e9a;
  /* 10405e94 cmp byte ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10405e98 jne 0x10405ebf */ if (!ZF_) goto L_10405ebf;
L_10405e9a:;
  /* 10405e9a push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405e9d mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10405ea0 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405ea3 lea ebx, [eax - 0x10] */ ebx = (u32)((u32)(eax + 0xfffffff0u));
  /* 10405ea6 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405ea9 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10405eab push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405eae push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405eb1 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405eb4 call 0x10405dad */ esp -= 4; M32(esp) = 0x10405eb9u; SAVEALL; F_10405dad(c); ABI_CHECK(0x10405dadu, 0x10405eb4u); RETCHK(0x10405eb9u, 0x10405eb4u); LOADALL;
  /* 10405eb9 mov esi, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 10405ebc add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10405ebf:;
  /* 10405ebf inc dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10405ec2 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10405ec5 add edi, 0x14 */ { u32 a_ = edi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10405ec8 cmp eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405ecb jb 0x10405e79 */ if (CF_) goto L_10405e79;
  /* 10405ecd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_10405ece:;
  /* 10405ece pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_10405ecf:;
  /* 10405ecf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10405ed0 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10405ed1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405ed2(CPU *c) {
  NATIVE_HOOK(0x10405ed2u) REGS; LOADALL;
L_10405ed2:;
  /* 10405ed2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10405ed3 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10405ed5 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10405ed8 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10405edb mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 10405ede cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405ee1 mov byte ptr [ebp - 1], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)(0x0u); }
  /* 10405ee5 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10405ee8 jl 0x10405ef2 */ if (LT_) goto L_10405ef2;
  /* 10405eea mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 10405eed cmp eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405ef0 jl 0x10405ef7 */ if (LT_) goto L_10405ef7;
L_10405ef2:;
  /* 10405ef2 call 0x104064bc */ esp -= 4; M32(esp) = 0x10405ef7u; SAVEALL; F_104064bc(c); ABI_CHECK(0x104064bcu, 0x10405ef2u); RETCHK(0x10405ef7u, 0x10405ef2u); LOADALL;
L_10405ef7:;
  /* 10405ef7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10405ef8 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10405efb cmp dword ptr [ebx], 0xe06d7363 */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405f01 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405f02 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10405f03 jne 0x104060ab */ if (!ZF_) goto L_104060ab;
  /* 10405f09 cmp dword ptr [ebx + 0x10], 3 */ { const u32 m_ = (u32)(ebx + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405f0d mov edi, 0x19930520 */ { edi = (u32)(0x19930520u); }
  /* 10405f12 jne 0x10405f9f */ if (!ZF_) goto L_10405f9f;
  /* 10405f18 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 10405f1b cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405f1d je 0x10405f26 */ if (ZF_) goto L_10405f26;
  /* 10405f1f cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405f24 jne 0x10405f9f */ if (!ZF_) goto L_10405f9f;
L_10405f26:;
  /* 10405f26 cmp dword ptr [ebx + 0x1c], 0 */ { const u32 m_ = (u32)(ebx + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405f2a jne 0x10405f9f */ if (!ZF_) goto L_10405f9f;
  /* 10405f2c call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405f31u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405f2cu); RETCHK(0x10405f31u, 0x10405f2cu); LOADALL;
  /* 10405f31 cmp dword ptr [eax + 0x7c], 0 */ { const u32 m_ = (u32)(eax + 0x7cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405f35 je 0x104060a3 */ if (ZF_) goto L_104060a3;
  /* 10405f3b call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405f40u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405f3bu); RETCHK(0x10405f40u, 0x10405f3bu); LOADALL;
  /* 10405f40 mov esi, dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); esi = (u32)(M32(m_)); }
  /* 10405f43 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 10405f46 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405f4bu; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405f46u); RETCHK(0x10405f4bu, 0x10405f46u); LOADALL;
  /* 10405f4b mov eax, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); eax = (u32)(M32(m_)); }
  /* 10405f51 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10405f53 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405f54 mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10405f57 mov byte ptr [ebp - 1], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)(0x1u); }
  /* 10405f5b call 0x10408618 */ esp -= 4; M32(esp) = 0x10405f60u; SAVEALL; F_10408618(c); ABI_CHECK(0x10408618u, 0x10405f5bu); RETCHK(0x10405f60u, 0x10405f5bu); LOADALL;
  /* 10405f60 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405f62 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405f63 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405f64 jne 0x10405f6b */ if (!ZF_) goto L_10405f6b;
  /* 10405f66 call 0x104064bc */ esp -= 4; M32(esp) = 0x10405f6bu; SAVEALL; F_104064bc(c); ABI_CHECK(0x104064bcu, 0x10405f66u); RETCHK(0x10405f6bu, 0x10405f66u); LOADALL;
L_10405f6b:;
  /* 10405f6b cmp dword ptr [esi], 0xe06d7363 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405f71 jne 0x104060a8 */ if (!ZF_) goto L_104060a8;
  /* 10405f77 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10405f7a cmp dword ptr [eax + 0x10], 3 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405f7e jne 0x10405f9c */ if (!ZF_) goto L_10405f9c;
  /* 10405f80 mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 10405f83 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405f85 je 0x10405f8e */ if (ZF_) goto L_10405f8e;
  /* 10405f87 cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405f8c jne 0x10405f9c */ if (!ZF_) goto L_10405f9c;
L_10405f8e:;
  /* 10405f8e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10405f91 cmp dword ptr [eax + 0x1c], 0 */ { const u32 m_ = (u32)(eax + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405f95 jne 0x10405f9c */ if (!ZF_) goto L_10405f9c;
  /* 10405f97 call 0x104064bc */ esp -= 4; M32(esp) = 0x10405f9cu; SAVEALL; F_104064bc(c); ABI_CHECK(0x104064bcu, 0x10405f97u); RETCHK(0x10405f9cu, 0x10405f97u); LOADALL;
L_10405f9c:;
  /* 10405f9c mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_10405f9f:;
  /* 10405f9f cmp dword ptr [ebx], 0xe06d7363 */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405fa5 jne 0x104060ab */ if (!ZF_) goto L_104060ab;
  /* 10405fab cmp dword ptr [ebx + 0x10], 3 */ { const u32 m_ = (u32)(ebx + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405faf jne 0x104060ab */ if (!ZF_) goto L_104060ab;
  /* 10405fb5 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 10405fb8 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405fba je 0x10405fc7 */ if (ZF_) goto L_10405fc7;
  /* 10405fbc cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405fc1 jne 0x104060ab */ if (!ZF_) goto L_104060ab;
L_10405fc7:;
  /* 10405fc7 mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 10405fca lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 10405fcd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10405fce lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 10405fd1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10405fd2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405fd3 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405fd6 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405fd9 call 0x10404fae */ esp -= 4; M32(esp) = 0x10405fdeu; SAVEALL; F_10404fae(c); ABI_CHECK(0x10404faeu, 0x10405fd9u); RETCHK(0x10405fdeu, 0x10405fd9u); LOADALL;
  /* 10405fde mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10405fe1 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10405fe4 cmp ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405fe7 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10405fea jae 0x10406093 */ if (!CF_) goto L_10406093;
  /* 10405ff0 jmp 0x10405ff5 */ goto L_10405ff5;
L_10405ff2:;
  /* 10405ff2 mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
L_10405ff5:;
  /* 10405ff5 cmp dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405ff7 jg 0x1040607e */ if (!(ZF_|LT_)) goto L_1040607e;
  /* 10405ffd cmp esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406000 jg 0x1040607e */ if (!(ZF_|LT_)) goto L_1040607e;
  /* 10406002 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10406005 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406007 mov esi, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); esi = (u32)(M32(m_)); }
  /* 1040600a mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 1040600d jle 0x1040607e */ if ((ZF_|LT_)) goto L_1040607e;
L_1040600f:;
  /* 1040600f mov ecx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10406012 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10406015 lea edx, [ecx + 4] */ edx = (u32)((u32)(ecx + 0x4u));
  /* 10406018 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 1040601a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040601c mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 1040601f mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 10406022 jle 0x10406048 */ if ((ZF_|LT_)) goto L_10406048;
L_10406024:;
  /* 10406024 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 10406027 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 10406029 push dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040602c mov dword ptr [ebp - 0x24], edi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edi); }
  /* 1040602f call 0x104058ce */ esp -= 4; M32(esp) = 0x10406034u; SAVEALL; F_104058ce(c); ABI_CHECK(0x104058ceu, 0x1040602fu); RETCHK(0x10406034u, 0x1040602fu); LOADALL;
  /* 10406034 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406036 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406037 jne 0x10406056 */ if (!ZF_) goto L_10406056;
  /* 10406039 dec dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1040603c add dword ptr [ebp - 0x10], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406040 cmp dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406043 jg 0x10406024 */ if (!(ZF_|LT_)) goto L_10406024;
  /* 10406045 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
L_10406048:;
  /* 10406048 dec dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1040604b add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040604e cmp dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406052 jg 0x1040600f */ if (!(ZF_|LT_)) goto L_1040600f;
  /* 10406054 jmp 0x1040607e */ goto L_1040607e;
L_10406056:;
  /* 10406056 push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406059 mov edi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edi = (u32)(M32(m_)); }
  /* 1040605c push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040605f mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 10406062 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406065 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406068 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040606b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040606c mov ebx, esi */ { ebx = (u32)(esi); }
  /* 1040606e mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10406071 call 0x10405dad */ esp -= 4; M32(esp) = 0x10406076u; SAVEALL; F_10405dad(c); ABI_CHECK(0x10405dadu, 0x10406071u); RETCHK(0x10406076u, 0x10406071u); LOADALL;
  /* 10406076 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10406079 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040607c mov eax, edi */ { eax = (u32)(edi); }
L_1040607e:;
  /* 1040607e inc dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406081 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10406084 add eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10406087 cmp ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040608a mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 1040608d jb 0x10405ff2 */ if (CF_) goto L_10405ff2;
L_10406093:;
  /* 10406093 cmp byte ptr [ebp + 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406097 je 0x104060a3 */ if (ZF_) goto L_104060a3;
  /* 10406099 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1040609b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040609c call 0x10405a09 */ esp -= 4; M32(esp) = 0x104060a1u; SAVEALL; F_10405a09(c); ABI_CHECK(0x10405a09u, 0x1040609cu); RETCHK(0x104060a1u, 0x1040609cu); LOADALL;
  /* 104060a1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104060a2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_104060a3:;
  /* 104060a3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104060a4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104060a5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104060a6 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104060a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104060a8:;
  /* 104060a8 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_104060ab:;
  /* 104060ab cmp byte ptr [ebp + 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 104060af jne 0x104060d1 */ if (!ZF_) goto L_104060d1;
  /* 104060b1 push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104060b4 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104060b7 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104060ba push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104060bd push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104060c0 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104060c3 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104060c6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104060c7 call 0x10405e14 */ esp -= 4; M32(esp) = 0x104060ccu; SAVEALL; F_10405e14(c); ABI_CHECK(0x10405e14u, 0x104060c7u); RETCHK(0x104060ccu, 0x104060c7u); LOADALL;
  /* 104060cc add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104060cf jmp 0x104060a3 */ goto L_104060a3;
L_104060d1:;
  /* 104060d1 jmp 0x10406487 */ SAVEALL; F_10406487(c); return;
}

void F_104060d6(CPU *c) {
  NATIVE_HOOK(0x104060d6u) REGS; LOADALL;
L_104060d6:;
  /* 104060d6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104060d7 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 104060d9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104060da mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
  /* 104060dd mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 104060df push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104060e0 and eax, 0x1fffffff */ { u32 a_ = eax, b_ = 0x1fffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104060e5 mov edi, 0x19930520 */ { edi = (u32)(0x19930520u); }
  /* 104060ea cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104060ec je 0x104060f3 */ if (ZF_) goto L_104060f3;
  /* 104060ee call 0x104064bc */ esp -= 4; M32(esp) = 0x104060f3u; SAVEALL; F_104064bc(c); ABI_CHECK(0x104064bcu, 0x104060eeu); RETCHK(0x104060f3u, 0x104060eeu); LOADALL;
L_104060f3:;
  /* 104060f3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104060f6 test byte ptr [eax + 4], 0x66 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M8(m_), b_ = 0x66u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104060fa je 0x1040611b */ if (ZF_) goto L_1040611b;
  /* 104060fc cmp dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406100 je 0x10406171 */ if (ZF_) goto L_10406171;
  /* 10406102 cmp dword ptr [ebp + 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406106 jne 0x10406171 */ if (!ZF_) goto L_10406171;
  /* 10406108 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 1040610a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040610b push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040610e push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406111 call 0x1040593b */ esp -= 4; M32(esp) = 0x10406116u; SAVEALL; F_1040593b(c); ABI_CHECK(0x1040593bu, 0x10406111u); RETCHK(0x10406116u, 0x10406111u); LOADALL;
  /* 10406116 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10406119 jmp 0x10406171 */ goto L_10406171;
L_1040611b:;
  /* 1040611b cmp dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040611f je 0x10406171 */ if (ZF_) goto L_10406171;
  /* 10406121 cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406127 jne 0x10406155 */ if (!ZF_) goto L_10406155;
  /* 10406129 cmp dword ptr [eax + 0x14], edi */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040612c jbe 0x10406155 */ if ((CF_|ZF_)) goto L_10406155;
  /* 1040612e mov ecx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10406131 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10406134 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406136 je 0x10406155 */ if (ZF_) goto L_10406155;
  /* 10406138 movzx edx, byte ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); edx = (u32)(M8(m_)); }
  /* 1040613c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040613d push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406140 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406143 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10406144 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406147 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040614a push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040614d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040614e call ecx */ { u32 t_ = ecx; esp -= 4; M32(esp) = 0x10406150u; SAVEALL; call_ind(c, t_); RETCHK(0x10406150u, 0x1040614eu); LOADALL; }
  /* 10406150 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10406153 jmp 0x10406174 */ goto L_10406174;
L_10406155:;
  /* 10406155 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406158 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040615b push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040615e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040615f push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406162 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406165 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406168 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10406169 call 0x10405ed2 */ esp -= 4; M32(esp) = 0x1040616eu; SAVEALL; F_10405ed2(c); ABI_CHECK(0x10405ed2u, 0x10406169u); RETCHK(0x1040616eu, 0x10406169u); LOADALL;
  /* 1040616e add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10406171:;
  /* 10406171 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10406173 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10406174:;
  /* 10406174 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10406175 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10406176 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10406177 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406178(CPU *c) {
  NATIVE_HOOK(0x10406178u) REGS; LOADALL;
L_10406178:;
  /* 10406178 call dword ptr [0x1040b034] */ { const u32 m_ = (u32)(0x1040b034u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040617eu; SAVEALL; call_ind(c, t_); RETCHK(0x1040617eu, 0x10406178u); LOADALL; }
  /* 1040617e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10406181(CPU *c) {
  NATIVE_HOOK(0x10406181u) REGS; LOADALL;
L_10406181:;
  /* 10406181 mov eax, dword ptr [0x1040d068] */ { const u32 m_ = (u32)(0x1040d068u); eax = (u32)(M32(m_)); }
  /* 10406186 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406189 je 0x10406199 */ if (ZF_) goto L_10406199;
  /* 1040618b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040618c call dword ptr [0x1040d948] */ { const u32 m_ = (u32)(0x1040d948u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406192u; SAVEALL; call_ind(c, t_); RETCHK(0x10406192u, 0x1040618cu); LOADALL; }
  /* 10406192 or dword ptr [0x1040d068], 0xffffffff */ { const u32 m_ = (u32)(0x1040d068u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10406199:;
  /* 10406199 jmp 0x104072c9 */ goto L_104072c9;
L_104072c9:;
  /* 104072c9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104072ca mov ebx, dword ptr [0x1040b06c] */ { const u32 m_ = (u32)(0x1040b06cu); ebx = (u32)(M32(m_)); }
  /* 104072d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104072d1 mov esi, 0x1040d1b8 */ { esi = (u32)(0x1040d1b8u); }
  /* 104072d6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_104072d7:;
  /* 104072d7 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 104072d9 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104072db je 0x104072f0 */ if (ZF_) goto L_104072f0;
  /* 104072dd cmp dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104072e1 je 0x104072f0 */ if (ZF_) goto L_104072f0;
  /* 104072e3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104072e4 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x104072e6u; SAVEALL; call_ind(c, t_); RETCHK(0x104072e6u, 0x104072e4u); LOADALL; }
  /* 104072e6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104072e7 call 0x1040549e */ esp -= 4; M32(esp) = 0x104072ecu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104072e7u); RETCHK(0x104072ecu, 0x104072e7u); LOADALL;
  /* 104072ec and dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104072ef pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_104072f0:;
  /* 104072f0 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104072f3 cmp esi, 0x1040d2d8 */ { u32 a_ = esi, b_ = 0x1040d2d8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104072f9 jl 0x104072d7 */ if (LT_) goto L_104072d7;
  /* 104072fb mov esi, 0x1040d1b8 */ { esi = (u32)(0x1040d1b8u); }
  /* 10407300 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_10407301:;
  /* 10407301 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10407303 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10407305 je 0x10407310 */ if (ZF_) goto L_10407310;
  /* 10407307 cmp dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040730b jne 0x10407310 */ if (!ZF_) goto L_10407310;
  /* 1040730d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040730e call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x10407310u; SAVEALL; call_ind(c, t_); RETCHK(0x10407310u, 0x1040730eu); LOADALL; }
L_10407310:;
  /* 10407310 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10407313 cmp esi, 0x1040d2d8 */ { u32 a_ = esi, b_ = 0x1040d2d8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407319 jl 0x10407301 */ if (LT_) goto L_10407301;
  /* 1040731b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040731c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040731d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040619e(CPU *c) {
  NATIVE_HOOK(0x1040619eu) REGS; LOADALL;
L_1040619e:;
  /* 1040619e mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 104061a2 mov dword ptr [eax + 0x54], 0x1040d098 */ { const u32 m_ = (u32)(eax + 0x54u); M32(m_) = (u32)(0x1040d098u); }
  /* 104061a9 mov dword ptr [eax + 0x14], 1 */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(0x1u); }
  /* 104061b0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104061b1(CPU *c) {
  NATIVE_HOOK(0x104061b1u) REGS; LOADALL;
L_104061b1:;
  /* 104061b1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104061b2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104061b3 call dword ptr [0x1040b03c] */ { const u32 m_ = (u32)(0x1040b03cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104061b9u; SAVEALL; call_ind(c, t_); RETCHK(0x104061b9u, 0x104061b3u); LOADALL; }
  /* 104061b9 push dword ptr [0x1040d068] */ { const u32 m_ = (u32)(0x1040d068u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104061bf mov ebx, eax */ { ebx = (u32)(eax); }
  /* 104061c1 call dword ptr [0x1040d940] */ { const u32 m_ = (u32)(0x1040d940u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104061c7u; SAVEALL; call_ind(c, t_); RETCHK(0x104061c7u, 0x104061c1u); LOADALL; }
  /* 104061c7 mov esi, eax */ { esi = (u32)(eax); }
  /* 104061c9 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104061cb jne 0x10406216 */ if (!ZF_) goto L_10406216;
  /* 104061cd push 0x8c */ { u32 v_ = 0x8cu; esp -= 4; M32(esp) = v_; }
  /* 104061d2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 104061d4 call 0x104066e3 */ esp -= 4; M32(esp) = 0x104061d9u; SAVEALL; F_104066e3(c); ABI_CHECK(0x104066e3u, 0x104061d4u); RETCHK(0x104061d9u, 0x104061d4u); LOADALL;
  /* 104061d9 mov esi, eax */ { esi = (u32)(eax); }
  /* 104061db test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104061dd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104061de pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104061df je 0x1040620e */ if (ZF_) goto L_1040620e;
  /* 104061e1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104061e2 push dword ptr [0x1040d068] */ { const u32 m_ = (u32)(0x1040d068u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104061e8 call dword ptr [0x1040d944] */ { const u32 m_ = (u32)(0x1040d944u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104061eeu; SAVEALL; call_ind(c, t_); RETCHK(0x104061eeu, 0x104061e8u); LOADALL; }
  /* 104061ee test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104061f0 je 0x1040620e */ if (ZF_) goto L_1040620e;
  /* 104061f2 mov dword ptr [esi + 0x54], 0x1040d098 */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x1040d098u); }
  /* 104061f9 mov dword ptr [esi + 0x14], 1 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x1u); }
  /* 10406200 call dword ptr [0x1040b00c] */ { const u32 m_ = (u32)(0x1040b00cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406206u; SAVEALL; call_ind(c, t_); RETCHK(0x10406206u, 0x10406200u); LOADALL; }
  /* 10406206 or dword ptr [esi + 4], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1040620a mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 1040620c jmp 0x10406216 */ goto L_10406216;
L_1040620e:;
  /* 1040620e push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10406210 call 0x1040546b */ esp -= 4; M32(esp) = 0x10406215u; SAVEALL; F_1040546b(c); ABI_CHECK(0x1040546bu, 0x10406210u); RETCHK(0x10406215u, 0x10406210u); LOADALL;
  /* 10406215 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10406216:;
  /* 10406216 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10406217 call dword ptr [0x1040b038] */ { const u32 m_ = (u32)(0x1040b038u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040621du; SAVEALL; call_ind(c, t_); RETCHK(0x1040621du, 0x10406217u); LOADALL; }
  /* 1040621d mov eax, esi */ { eax = (u32)(esi); }
  /* 1040621f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10406220 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10406221 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406222(CPU *c) {
  NATIVE_HOOK(0x10406222u) REGS; LOADALL;
L_10406222:;
  /* 10406222 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10406224 push 0x1040b410 */ { u32 v_ = 0x1040b410u; esp -= 4; M32(esp) = v_; }
  /* 10406229 call 0x104056c0 */ esp -= 4; M32(esp) = 0x1040622eu; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x10406229u); RETCHK(0x1040622eu, 0x10406229u); LOADALL;
  /* 1040622e mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10406231 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10406233 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406235 je 0x10406347 */ if (ZF_) goto L_10406347;
  /* 1040623b mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 1040623e cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406240 je 0x10406249 */ if (ZF_) goto L_10406249;
  /* 10406242 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10406243 call 0x1040549e */ esp -= 4; M32(esp) = 0x10406248u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10406243u); RETCHK(0x10406248u, 0x10406243u); LOADALL;
  /* 10406248 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10406249:;
  /* 10406249 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 1040624c cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040624e je 0x10406257 */ if (ZF_) goto L_10406257;
  /* 10406250 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10406251 call 0x1040549e */ esp -= 4; M32(esp) = 0x10406256u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10406251u); RETCHK(0x10406256u, 0x10406251u); LOADALL;
  /* 10406256 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10406257:;
  /* 10406257 mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 1040625a cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040625c je 0x10406265 */ if (ZF_) goto L_10406265;
  /* 1040625e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040625f call 0x1040549e */ esp -= 4; M32(esp) = 0x10406264u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040625fu); RETCHK(0x10406264u, 0x1040625fu); LOADALL;
  /* 10406264 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10406265:;
  /* 10406265 mov eax, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 10406268 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040626a je 0x10406273 */ if (ZF_) goto L_10406273;
  /* 1040626c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040626d call 0x1040549e */ esp -= 4; M32(esp) = 0x10406272u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040626du); RETCHK(0x10406272u, 0x1040626du); LOADALL;
  /* 10406272 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10406273:;
  /* 10406273 mov eax, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); eax = (u32)(M32(m_)); }
  /* 10406276 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406278 je 0x10406281 */ if (ZF_) goto L_10406281;
  /* 1040627a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040627b call 0x1040549e */ esp -= 4; M32(esp) = 0x10406280u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040627bu); RETCHK(0x10406280u, 0x1040627bu); LOADALL;
  /* 10406280 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10406281:;
  /* 10406281 mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 10406284 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406286 je 0x1040628f */ if (ZF_) goto L_1040628f;
  /* 10406288 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10406289 call 0x1040549e */ esp -= 4; M32(esp) = 0x1040628eu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10406289u); RETCHK(0x1040628eu, 0x10406289u); LOADALL;
  /* 1040628e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1040628f:;
  /* 1040628f mov eax, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); eax = (u32)(M32(m_)); }
  /* 10406292 cmp eax, 0x1040d098 */ { u32 a_ = eax, b_ = 0x1040d098u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406297 je 0x104062a0 */ if (ZF_) goto L_104062a0;
  /* 10406299 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040629a call 0x1040549e */ esp -= 4; M32(esp) = 0x1040629fu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040629au); RETCHK(0x1040629fu, 0x1040629au); LOADALL;
  /* 1040629f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_104062a0:;
  /* 104062a0 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 104062a2 call 0x104073d3 */ esp -= 4; M32(esp) = 0x104062a7u; SAVEALL; F_104073d3(c); ABI_CHECK(0x104073d3u, 0x104062a2u); RETCHK(0x104062a7u, 0x104062a2u); LOADALL;
  /* 104062a7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104062a8 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 104062ab mov eax, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); eax = (u32)(M32(m_)); }
  /* 104062ae mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 104062b1 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104062b3 je 0x104062c8 */ if (ZF_) goto L_104062c8;
  /* 104062b5 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 104062b7 jne 0x104062c8 */ if (!ZF_) goto L_104062c8;
  /* 104062b9 cmp eax, dword ptr [0x1040ddec] */ { const u32 m_ = (u32)(0x1040ddecu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104062bf je 0x104062c8 */ if (ZF_) goto L_104062c8;
  /* 104062c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104062c2 call 0x1040549e */ esp -= 4; M32(esp) = 0x104062c7u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104062c2u); RETCHK(0x104062c7u, 0x104062c2u); LOADALL;
  /* 104062c7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_104062c8:;
  /* 104062c8 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104062cc call 0x10406354 */ esp -= 4; M32(esp) = 0x104062d1u; SAVEALL; F_10406354(c); ABI_CHECK(0x10406354u, 0x104062ccu); RETCHK(0x104062d1u, 0x104062ccu); LOADALL;
  /* 104062d1 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 104062d3 call 0x104073d3 */ esp -= 4; M32(esp) = 0x104062d8u; SAVEALL; F_104073d3(c); ABI_CHECK(0x104073d3u, 0x104062d3u); RETCHK(0x104062d8u, 0x104062d3u); LOADALL;
  /* 104062d8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104062d9 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 104062e0 mov eax, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); eax = (u32)(M32(m_)); }
  /* 104062e3 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 104062e6 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104062e8 je 0x10406337 */ if (ZF_) goto L_10406337;
  /* 104062ea dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 104062ec cmp dword ptr [eax + 0x2c], edi */ { const u32 m_ = (u32)(eax + 0x2cu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104062ef je 0x104062f6 */ if (ZF_) goto L_104062f6;
  /* 104062f1 mov ecx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 104062f4 dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_104062f6:;
  /* 104062f6 cmp dword ptr [eax + 0x34], edi */ { const u32 m_ = (u32)(eax + 0x34u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104062f9 je 0x10406300 */ if (ZF_) goto L_10406300;
  /* 104062fb mov ecx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (u32)(M32(m_)); }
  /* 104062fe dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10406300:;
  /* 10406300 cmp dword ptr [eax + 0x30], edi */ { const u32 m_ = (u32)(eax + 0x30u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406303 je 0x1040630a */ if (ZF_) goto L_1040630a;
  /* 10406305 mov ecx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ecx = (u32)(M32(m_)); }
  /* 10406308 dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_1040630a:;
  /* 1040630a cmp dword ptr [eax + 0x40], edi */ { const u32 m_ = (u32)(eax + 0x40u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040630d je 0x10406314 */ if (ZF_) goto L_10406314;
  /* 1040630f mov ecx, dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); ecx = (u32)(M32(m_)); }
  /* 10406312 dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10406314:;
  /* 10406314 mov ecx, dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 10406317 dec dword ptr [ecx + 0xb4] */ { const u32 m_ = (u32)(ecx + 0xb4u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1040631d cmp eax, dword ptr [0x1040d33c] */ { const u32 m_ = (u32)(0x1040d33cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406323 je 0x10406337 */ if (ZF_) goto L_10406337;
  /* 10406325 cmp eax, 0x1040d2e8 */ { u32 a_ = eax, b_ = 0x1040d2e8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040632a je 0x10406337 */ if (ZF_) goto L_10406337;
  /* 1040632c cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040632e jne 0x10406337 */ if (!ZF_) goto L_10406337;
  /* 10406330 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10406331 call 0x104089ad */ esp -= 4; M32(esp) = 0x10406336u; SAVEALL; F_104089ad(c); ABI_CHECK(0x104089adu, 0x10406331u); RETCHK(0x10406336u, 0x10406331u); LOADALL;
  /* 10406336 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10406337:;
  /* 10406337 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1040633b call 0x10406360 */ esp -= 4; M32(esp) = 0x10406340u; SAVEALL; F_10406360(c); ABI_CHECK(0x10406360u, 0x1040633bu); RETCHK(0x10406340u, 0x1040633bu); LOADALL;
  /* 10406340 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10406341 call 0x1040549e */ esp -= 4; M32(esp) = 0x10406346u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10406341u); RETCHK(0x10406346u, 0x10406341u); LOADALL;
  /* 10406346 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10406347:;
  /* 10406347 call 0x104056fb */ esp -= 4; M32(esp) = 0x1040634cu; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10406347u); RETCHK(0x1040634cu, 0x10406347u); LOADALL;
  /* 1040634c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_1040634f(CPU *c) {
  NATIVE_HOOK(0x1040634fu) REGS; LOADALL;
L_1040634f:;
  /* 1040634f xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10406351 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10406354 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 10406356 call 0x1040731e */ esp -= 4; M32(esp) = 0x1040635bu; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x10406356u); RETCHK(0x1040635bu, 0x10406356u); LOADALL;
  /* 1040635b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040635c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406354(CPU *c) {
  NATIVE_HOOK(0x10406354u) REGS; LOADALL;
L_10406354:;
  /* 10406354 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 10406356 call 0x1040731e */ esp -= 4; M32(esp) = 0x1040635bu; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x10406356u); RETCHK(0x1040635bu, 0x10406356u); LOADALL;
  /* 1040635b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040635c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040635d(CPU *c) {
  NATIVE_HOOK(0x1040635du) REGS; LOADALL;
L_1040635d:;
  /* 1040635d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10406360 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10406362 call 0x1040731e */ esp -= 4; M32(esp) = 0x10406367u; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x10406362u); RETCHK(0x10406367u, 0x10406362u); LOADALL;
  /* 10406367 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406368 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406360(CPU *c) {
  NATIVE_HOOK(0x10406360u) REGS; LOADALL;
L_10406360:;
  /* 10406360 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10406362 call 0x1040731e */ esp -= 4; M32(esp) = 0x10406367u; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x10406362u); RETCHK(0x10406367u, 0x10406362u); LOADALL;
  /* 10406367 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406368 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406369(CPU *c) {
  NATIVE_HOOK(0x10406369u) REGS; LOADALL;
L_10406369:;
  /* 10406369 mov ecx, dword ptr [0x1040d068] */ { const u32 m_ = (u32)(0x1040d068u); ecx = (u32)(M32(m_)); }
  /* 1040636f cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406372 je 0x10406397 */ if (ZF_) goto L_10406397;
  /* 10406374 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10406378 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040637a jne 0x10406383 */ if (!ZF_) goto L_10406383;
  /* 1040637c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040637d call dword ptr [0x1040d940] */ { const u32 m_ = (u32)(0x1040d940u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406383u; SAVEALL; call_ind(c, t_); RETCHK(0x10406383u, 0x1040637du); LOADALL; }
L_10406383:;
  /* 10406383 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10406384 call 0x10406222 */ esp -= 4; M32(esp) = 0x10406389u; SAVEALL; F_10406222(c); ABI_CHECK(0x10406222u, 0x10406384u); RETCHK(0x10406389u, 0x10406384u); LOADALL;
  /* 10406389 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1040638b push dword ptr [0x1040d068] */ { const u32 m_ = (u32)(0x1040d068u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406391 call dword ptr [0x1040d944] */ { const u32 m_ = (u32)(0x1040d944u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406397u; SAVEALL; call_ind(c, t_); RETCHK(0x10406397u, 0x10406391u); LOADALL; }
L_10406397:;
  /* 10406397 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406398(CPU *c) {
  NATIVE_HOOK(0x10406398u) REGS; LOADALL;
L_10406398:;
  /* 10406398 call 0x10407280 */ esp -= 4; M32(esp) = 0x1040639du; SAVEALL; F_10407280(c); ABI_CHECK(0x10407280u, 0x10406398u); RETCHK(0x1040639du, 0x10406398u); LOADALL;
  /* 1040639d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040639f jne 0x104063a9 */ if (!ZF_) goto L_104063a9;
  /* 104063a1 call 0x10406181 */ esp -= 4; M32(esp) = 0x104063a6u; SAVEALL; F_10406181(c); ABI_CHECK(0x10406181u, 0x104063a1u); RETCHK(0x104063a6u, 0x104063a1u); LOADALL;
  /* 104063a6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104063a8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104063a9:;
  /* 104063a9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104063aa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104063ab push 0x1040b454 */ { u32 v_ = 0x1040b454u; esp -= 4; M32(esp) = v_; }
  /* 104063b0 call dword ptr [0x1040b050] */ { const u32 m_ = (u32)(0x1040b050u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104063b6u; SAVEALL; call_ind(c, t_); RETCHK(0x104063b6u, 0x104063b0u); LOADALL; }
  /* 104063b6 mov edi, eax */ { edi = (u32)(eax); }
  /* 104063b8 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104063ba je 0x10406427 */ if (ZF_) goto L_10406427;
  /* 104063bc mov esi, dword ptr [0x1040b04c] */ { const u32 m_ = (u32)(0x1040b04cu); esi = (u32)(M32(m_)); }
  /* 104063c2 push 0x1040b448 */ { u32 v_ = 0x1040b448u; esp -= 4; M32(esp) = v_; }
  /* 104063c7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104063c8 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x104063cau; SAVEALL; call_ind(c, t_); RETCHK(0x104063cau, 0x104063c8u); LOADALL; }
  /* 104063ca push 0x1040b43c */ { u32 v_ = 0x1040b43cu; esp -= 4; M32(esp) = v_; }
  /* 104063cf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104063d0 mov dword ptr [0x1040d93c], eax */ { const u32 m_ = (u32)(0x1040d93cu); M32(m_) = (u32)(eax); }
  /* 104063d5 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x104063d7u; SAVEALL; call_ind(c, t_); RETCHK(0x104063d7u, 0x104063d5u); LOADALL; }
  /* 104063d7 push 0x1040b430 */ { u32 v_ = 0x1040b430u; esp -= 4; M32(esp) = v_; }
  /* 104063dc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104063dd mov dword ptr [0x1040d940], eax */ { const u32 m_ = (u32)(0x1040d940u); M32(m_) = (u32)(eax); }
  /* 104063e2 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x104063e4u; SAVEALL; call_ind(c, t_); RETCHK(0x104063e4u, 0x104063e2u); LOADALL; }
  /* 104063e4 push 0x1040b428 */ { u32 v_ = 0x1040b428u; esp -= 4; M32(esp) = v_; }
  /* 104063e9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104063ea mov dword ptr [0x1040d944], eax */ { const u32 m_ = (u32)(0x1040d944u); M32(m_) = (u32)(eax); }
  /* 104063ef call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x104063f1u; SAVEALL; call_ind(c, t_); RETCHK(0x104063f1u, 0x104063efu); LOADALL; }
  /* 104063f1 cmp dword ptr [0x1040d940], 0 */ { const u32 m_ = (u32)(0x1040d940u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104063f8 mov dword ptr [0x1040d948], eax */ { const u32 m_ = (u32)(0x1040d948u); M32(m_) = (u32)(eax); }
  /* 104063fd jne 0x10406427 */ if (!ZF_) goto L_10406427;
  /* 104063ff mov eax, dword ptr [0x1040b048] */ { const u32 m_ = (u32)(0x1040b048u); eax = (u32)(M32(m_)); }
  /* 10406404 mov dword ptr [0x1040d940], eax */ { const u32 m_ = (u32)(0x1040d940u); M32(m_) = (u32)(eax); }
  /* 10406409 mov eax, dword ptr [0x1040b044] */ { const u32 m_ = (u32)(0x1040b044u); eax = (u32)(M32(m_)); }
  /* 1040640e mov dword ptr [0x1040d944], eax */ { const u32 m_ = (u32)(0x1040d944u); M32(m_) = (u32)(eax); }
  /* 10406413 mov eax, dword ptr [0x1040b040] */ { const u32 m_ = (u32)(0x1040b040u); eax = (u32)(M32(m_)); }
  /* 10406418 mov dword ptr [0x1040d93c], 0x10406178 */ { const u32 m_ = (u32)(0x1040d93cu); M32(m_) = (u32)(0x10406178u); }
  /* 10406422 mov dword ptr [0x1040d948], eax */ { const u32 m_ = (u32)(0x1040d948u); M32(m_) = (u32)(eax); }
L_10406427:;
  /* 10406427 push 0x10406222 */ { u32 v_ = 0x10406222u; esp -= 4; M32(esp) = v_; }
  /* 1040642c call dword ptr [0x1040d93c] */ { const u32 m_ = (u32)(0x1040d93cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406432u; SAVEALL; call_ind(c, t_); RETCHK(0x10406432u, 0x1040642cu); LOADALL; }
  /* 10406432 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406435 mov dword ptr [0x1040d068], eax */ { const u32 m_ = (u32)(0x1040d068u); M32(m_) = (u32)(eax); }
  /* 1040643a je 0x1040647d */ if (ZF_) goto L_1040647d;
  /* 1040643c xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1040643e push 0x8c */ { u32 v_ = 0x8cu; esp -= 4; M32(esp) = v_; }
  /* 10406443 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406444 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10406445 call 0x104066e3 */ esp -= 4; M32(esp) = 0x1040644au; SAVEALL; F_104066e3(c); ABI_CHECK(0x104066e3u, 0x10406445u); RETCHK(0x1040644au, 0x10406445u); LOADALL;
  /* 1040644a mov esi, eax */ { esi = (u32)(eax); }
  /* 1040644c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040644e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040644f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406450 je 0x1040647d */ if (ZF_) goto L_1040647d;
  /* 10406452 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10406453 push dword ptr [0x1040d068] */ { const u32 m_ = (u32)(0x1040d068u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406459 call dword ptr [0x1040d944] */ { const u32 m_ = (u32)(0x1040d944u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040645fu; SAVEALL; call_ind(c, t_); RETCHK(0x1040645fu, 0x10406459u); LOADALL; }
  /* 1040645f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406461 je 0x1040647d */ if (ZF_) goto L_1040647d;
  /* 10406463 mov dword ptr [esi + 0x54], 0x1040d098 */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x1040d098u); }
  /* 1040646a mov dword ptr [esi + 0x14], edi */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edi); }
  /* 1040646d call dword ptr [0x1040b00c] */ { const u32 m_ = (u32)(0x1040b00cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406473u; SAVEALL; call_ind(c, t_); RETCHK(0x10406473u, 0x1040646du); LOADALL; }
  /* 10406473 or dword ptr [esi + 4], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406477 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10406479 mov eax, edi */ { eax = (u32)(edi); }
  /* 1040647b jmp 0x10406484 */ goto L_10406484;
L_1040647d:;
  /* 1040647d call 0x10406181 */ esp -= 4; M32(esp) = 0x10406482u; SAVEALL; F_10406181(c); ABI_CHECK(0x10406181u, 0x1040647du); RETCHK(0x10406482u, 0x1040647du); LOADALL;
  /* 10406482 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10406484:;
  /* 10406484 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10406485 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10406486 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406487(CPU *c) {
  NATIVE_HOOK(0x10406487u) REGS; LOADALL;
L_10406487:;
  /* 10406487 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10406489 push 0x1040b468 */ { u32 v_ = 0x1040b468u; esp -= 4; M32(esp) = v_; }
  /* 1040648e call 0x104056c0 */ esp -= 4; M32(esp) = 0x10406493u; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x1040648eu); RETCHK(0x10406493u, 0x1040648eu); LOADALL;
  /* 10406493 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10406498u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10406493u); RETCHK(0x10406498u, 0x10406493u); LOADALL;
  /* 10406498 cmp dword ptr [eax + 0x6c], 0 */ { const u32 m_ = (u32)(eax + 0x6cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040649c je 0x104064b7 */ if (ZF_) goto L_104064b7;
  /* 1040649e and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104064a2 call 0x104061b1 */ esp -= 4; M32(esp) = 0x104064a7u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x104064a2u); RETCHK(0x104064a7u, 0x104064a2u); LOADALL;
  /* 104064a7 call dword ptr [eax + 0x6c] */ { const u32 m_ = (u32)(eax + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104064aau; SAVEALL; call_ind(c, t_); RETCHK(0x104064aau, 0x104064a7u); LOADALL; }
  /* 104064aa jmp 0x104064b3 */ goto L_104064b3;
L_104064b3:;
  /* 104064b3 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_104064b7:;
  /* 104064b7 jmp 0x1040905b */ goto L_1040905b;
L_1040905b:;
  /* 1040905b push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 1040905d call 0x104070d0 */ esp -= 4; M32(esp) = 0x10409062u; SAVEALL; F_104070d0(c); ABI_CHECK(0x104070d0u, 0x1040905du); RETCHK(0x10409062u, 0x1040905du); LOADALL;
  /* 10409062 push 0x16 */ { u32 v_ = 0x16u; esp -= 4; M32(esp) = v_; }
  /* 10409064 call 0x10409fba */ esp -= 4; M32(esp) = 0x10409069u; SAVEALL; F_10409fba(c); ABI_CHECK(0x10409fbau, 0x10409064u); RETCHK(0x10409069u, 0x10409064u); LOADALL;
  /* 10409069 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040906a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040906b push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 1040906d call 0x104066c3 */ esp -= 4; M32(esp) = 0x10409072u; SAVEALL; F_104066c3(c); ABI_CHECK(0x104066c3u, 0x1040906du); RETCHK(0x10409072u, 0x1040906du); LOADALL;
  /* 10409072 int3 */ TRAP(0x10409072u, "int3");
}

void F_104064ac(CPU *c) {
  NATIVE_HOOK(0x104064acu) REGS; LOADALL;
L_104064ac:;
  /* 104064ac xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104064ae inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104064af ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104064b0(CPU *c) {
  NATIVE_HOOK(0x104064b0u) REGS; LOADALL;
L_104064b0:;
  /* 104064b0 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 104064b3 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104064b7 jmp 0x1040905b */ goto L_1040905b;
L_1040905b:;
  /* 1040905b push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 1040905d call 0x104070d0 */ esp -= 4; M32(esp) = 0x10409062u; SAVEALL; F_104070d0(c); ABI_CHECK(0x104070d0u, 0x1040905du); RETCHK(0x10409062u, 0x1040905du); LOADALL;
  /* 10409062 push 0x16 */ { u32 v_ = 0x16u; esp -= 4; M32(esp) = v_; }
  /* 10409064 call 0x10409fba */ esp -= 4; M32(esp) = 0x10409069u; SAVEALL; F_10409fba(c); ABI_CHECK(0x10409fbau, 0x10409064u); RETCHK(0x10409069u, 0x10409064u); LOADALL;
  /* 10409069 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040906a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040906b push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 1040906d call 0x104066c3 */ esp -= 4; M32(esp) = 0x10409072u; SAVEALL; F_104066c3(c); ABI_CHECK(0x104066c3u, 0x1040906du); RETCHK(0x10409072u, 0x1040906du); LOADALL;
  /* 10409072 int3 */ TRAP(0x10409072u, "int3");
}

void F_104064bc(CPU *c) {
  NATIVE_HOOK(0x104064bcu) REGS; LOADALL;
L_104064bc:;
  /* 104064bc push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 104064be push 0x1040b478 */ { u32 v_ = 0x1040b478u; esp -= 4; M32(esp) = v_; }
  /* 104064c3 call 0x104056c0 */ esp -= 4; M32(esp) = 0x104064c8u; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x104064c3u); RETCHK(0x104064c8u, 0x104064c3u); LOADALL;
  /* 104064c8 mov eax, dword ptr [0x1040d06c] */ { const u32 m_ = (u32)(0x1040d06cu); eax = (u32)(M32(m_)); }
  /* 104064cd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104064cf je 0x104064e4 */ if (ZF_) goto L_104064e4;
  /* 104064d1 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104064d5 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x104064d7u; SAVEALL; call_ind(c, t_); RETCHK(0x104064d7u, 0x104064d5u); LOADALL; }
  /* 104064d7 jmp 0x104064e0 */ goto L_104064e0;
L_104064e0:;
  /* 104064e0 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_104064e4:;
  /* 104064e4 jmp 0x10406487 */ SAVEALL; F_10406487(c); return;
}

void F_104064d9(CPU *c) {
  NATIVE_HOOK(0x104064d9u) REGS; LOADALL;
L_104064d9:;
  /* 104064d9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104064db inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104064dd(CPU *c) {
  NATIVE_HOOK(0x104064ddu) REGS; LOADALL;
L_104064dd:;
  /* 104064dd mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 104064e0 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104064e4 jmp 0x10406487 */ SAVEALL; F_10406487(c); return;
}

void F_104064f0(CPU *c) {
  NATIVE_HOOK(0x104064f0u) REGS; LOADALL;
L_104064f0:;
  /* 104064f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104064f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 104064f3 sub esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104064f6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104064f7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104064f8 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 104064fb add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 104064fe mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10406501 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10406504 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10406505 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406508 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1040650b mov ebp, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebp = (u32)(M32(m_)); }
  /* 1040650e call 0x104051e5 */ esp -= 4; M32(esp) = 0x10406513u; SAVEALL; F_104051e5(c); ABI_CHECK(0x104051e5u, 0x1040650eu); RETCHK(0x10406513u, 0x1040650eu); LOADALL;
  /* 10406513 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10406514 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10406515 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10406517u; SAVEALL; call_ind(c, t_); RETCHK(0x10406517u, 0x10406515u); LOADALL; }
  /* 10406517 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10406518 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10406519 mov ebx, ebp */ { ebx = (u32)(ebp); }
  /* 1040651b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040651c mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1040651f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10406520 mov ebp, ebx */ { ebp = (u32)(ebx); }
  /* 10406522 cmp ecx, 0x100 */ { u32 a_ = ecx, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406528 jne 0x1040652f */ if (!ZF_) goto L_1040652f;
  /* 1040652a mov ecx, 2 */ { ecx = (u32)(0x2u); }
L_1040652f:;
  /* 1040652f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10406530 call 0x104051e5 */ esp -= 4; M32(esp) = 0x10406535u; SAVEALL; F_104051e5(c); ABI_CHECK(0x104051e5u, 0x10406530u); RETCHK(0x10406535u, 0x10406530u); LOADALL;
  /* 10406535 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10406536 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406537 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10406538 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10406539 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_1040653c(CPU *c) {
  NATIVE_HOOK(0x1040653cu) REGS; LOADALL;
L_1040653c:;
  /* 1040653c push 0x1040b494 */ { u32 v_ = 0x1040b494u; esp -= 4; M32(esp) = v_; }
  /* 10406541 call dword ptr [0x1040b050] */ { const u32 m_ = (u32)(0x1040b050u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406547u; SAVEALL; call_ind(c, t_); RETCHK(0x10406547u, 0x10406541u); LOADALL; }
  /* 10406547 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406549 je 0x10406561 */ if (ZF_) goto L_10406561;
  /* 1040654b push 0x1040b484 */ { u32 v_ = 0x1040b484u; esp -= 4; M32(esp) = v_; }
  /* 10406550 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10406551 call dword ptr [0x1040b04c] */ { const u32 m_ = (u32)(0x1040b04cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406557u; SAVEALL; call_ind(c, t_); RETCHK(0x10406557u, 0x10406551u); LOADALL; }
  /* 10406557 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406559 je 0x10406561 */ if (ZF_) goto L_10406561;
  /* 1040655b push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040655f call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10406561u; SAVEALL; call_ind(c, t_); RETCHK(0x10406561u, 0x1040655fu); LOADALL; }
L_10406561:;
  /* 10406561 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406565 call dword ptr [0x1040b004] */ { const u32 m_ = (u32)(0x1040b004u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040656bu; SAVEALL; call_ind(c, t_); RETCHK(0x1040656bu, 0x10406565u); LOADALL; }
}

void F_1040656c(CPU *c) {
  NATIVE_HOOK(0x1040656cu) REGS; LOADALL;
L_1040656c:;
  /* 1040656c push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 1040656e call 0x104073d3 */ esp -= 4; M32(esp) = 0x10406573u; SAVEALL; F_104073d3(c); ABI_CHECK(0x104073d3u, 0x1040656eu); RETCHK(0x10406573u, 0x1040656eu); LOADALL;
  /* 10406573 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406574 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406575(CPU *c) {
  NATIVE_HOOK(0x10406575u) REGS; LOADALL;
L_10406575:;
  /* 10406575 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10406577 call 0x1040731e */ esp -= 4; M32(esp) = 0x1040657cu; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x10406577u); RETCHK(0x1040657cu, 0x10406577u); LOADALL;
  /* 1040657c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040657d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040657e(CPU *c) {
  NATIVE_HOOK(0x1040657eu) REGS; LOADALL;
L_1040657e:;
  /* 1040657e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040657f mov esi, eax */ { esi = (u32)(eax); }
  /* 10406581 jmp 0x1040658e */ goto L_1040658e;
L_10406583:;
  /* 10406583 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10406585 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406587 je 0x1040658b */ if (ZF_) goto L_1040658b;
  /* 10406589 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1040658bu; SAVEALL; call_ind(c, t_); RETCHK(0x1040658bu, 0x10406589u); LOADALL; }
L_1040658b:;
  /* 1040658b add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_1040658e:;
  /* 1040658e cmp esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406592 jb 0x10406583 */ if (CF_) goto L_10406583;
  /* 10406594 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10406595 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406596(CPU *c) {
  NATIVE_HOOK(0x10406596u) REGS; LOADALL;
L_10406596:;
  /* 10406596 mov eax, dword ptr [0x1040e170] */ { const u32 m_ = (u32)(0x1040e170u); eax = (u32)(M32(m_)); }
  /* 1040659b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040659d je 0x104065a6 */ if (ZF_) goto L_104065a6;
  /* 1040659f push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104065a3 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x104065a5u; SAVEALL; call_ind(c, t_); RETCHK(0x104065a5u, 0x104065a3u); LOADALL; }
  /* 104065a5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_104065a6:;
  /* 104065a6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104065a7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104065a8 mov ecx, 0x1040d00c */ { ecx = (u32)(0x1040d00cu); }
  /* 104065ad mov edi, 0x1040d01c */ { edi = (u32)(0x1040d01cu); }
  /* 104065b2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104065b4 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104065b6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 104065b8 jae 0x104065d1 */ if (!CF_) goto L_104065d1;
L_104065ba:;
  /* 104065ba test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104065bc jne 0x104065fd */ if (!ZF_) goto L_104065fd;
  /* 104065be mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 104065c0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104065c2 je 0x104065c6 */ if (ZF_) goto L_104065c6;
  /* 104065c4 call ecx */ { u32 t_ = ecx; esp -= 4; M32(esp) = 0x104065c6u; SAVEALL; call_ind(c, t_); RETCHK(0x104065c6u, 0x104065c4u); LOADALL; }
L_104065c6:;
  /* 104065c6 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104065c9 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104065cb jb 0x104065ba */ if (CF_) goto L_104065ba;
  /* 104065cd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104065cf jne 0x104065fd */ if (!ZF_) goto L_104065fd;
L_104065d1:;
  /* 104065d1 push 0x10406e23 */ { u32 v_ = 0x10406e23u; esp -= 4; M32(esp) = v_; }
  /* 104065d6 call 0x10409153 */ esp -= 4; M32(esp) = 0x104065dbu; SAVEALL; F_10409153(c); ABI_CHECK(0x10409153u, 0x104065d6u); RETCHK(0x104065dbu, 0x104065d6u); LOADALL;
  /* 104065db mov esi, 0x1040d000 */ { esi = (u32)(0x1040d000u); }
  /* 104065e0 mov eax, esi */ { eax = (u32)(esi); }
  /* 104065e2 mov edi, 0x1040d008 */ { edi = (u32)(0x1040d008u); }
  /* 104065e7 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104065e9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104065ea jae 0x104065fb */ if (!CF_) goto L_104065fb;
L_104065ec:;
  /* 104065ec mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 104065ee test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104065f0 je 0x104065f4 */ if (ZF_) goto L_104065f4;
  /* 104065f2 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x104065f4u; SAVEALL; call_ind(c, t_); RETCHK(0x104065f4u, 0x104065f2u); LOADALL; }
L_104065f4:;
  /* 104065f4 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104065f7 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104065f9 jb 0x104065ec */ if (CF_) goto L_104065ec;
L_104065fb:;
  /* 104065fb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_104065fd:;
  /* 104065fd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104065fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104065ff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406600(CPU *c) {
  NATIVE_HOOK(0x10406600u) REGS; LOADALL;
L_10406600:;
  /* 10406600 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10406602 push 0x1040b4a0 */ { u32 v_ = 0x1040b4a0u; esp -= 4; M32(esp) = v_; }
  /* 10406607 call 0x104056c0 */ esp -= 4; M32(esp) = 0x1040660cu; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x10406607u); RETCHK(0x1040660cu, 0x10406607u); LOADALL;
  /* 1040660c push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 1040660e call 0x104073d3 */ esp -= 4; M32(esp) = 0x10406613u; SAVEALL; F_104073d3(c); ABI_CHECK(0x104073d3u, 0x1040660eu); RETCHK(0x10406613u, 0x1040660eu); LOADALL;
  /* 10406613 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406614 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10406616 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 10406619 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1040661b inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040661c cmp dword ptr [0x1040d990], esi */ { const u32 m_ = (u32)(0x1040d990u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406622 jne 0x10406634 */ if (!ZF_) goto L_10406634;
  /* 10406624 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406627 call dword ptr [0x1040b058] */ { const u32 m_ = (u32)(0x1040b058u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040662du; SAVEALL; call_ind(c, t_); RETCHK(0x1040662du, 0x10406627u); LOADALL; }
  /* 1040662d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040662e call dword ptr [0x1040b054] */ { const u32 m_ = (u32)(0x1040b054u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406634u; SAVEALL; call_ind(c, t_); RETCHK(0x10406634u, 0x1040662eu); LOADALL; }
L_10406634:;
  /* 10406634 mov dword ptr [0x1040d98c], esi */ { const u32 m_ = (u32)(0x1040d98cu); M32(m_) = (u32)(esi); }
  /* 1040663a mov al, byte ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040663d mov byte ptr [0x1040d988], al */ { const u32 m_ = (u32)(0x1040d988u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10406642 cmp dword ptr [ebp + 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406645 jne 0x1040667e */ if (!ZF_) goto L_1040667e;
  /* 10406647 cmp dword ptr [0x1040e168], edi */ { const u32 m_ = (u32)(0x1040e168u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040664d je 0x1040666e */ if (ZF_) goto L_1040666e;
L_1040664f:;
  /* 1040664f mov eax, dword ptr [0x1040e164] */ { const u32 m_ = (u32)(0x1040e164u); eax = (u32)(M32(m_)); }
  /* 10406654 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10406657 mov dword ptr [0x1040e164], eax */ { const u32 m_ = (u32)(0x1040e164u); M32(m_) = (u32)(eax); }
  /* 1040665c cmp eax, dword ptr [0x1040e168] */ { const u32 m_ = (u32)(0x1040e168u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406662 jb 0x1040666e */ if (CF_) goto L_1040666e;
  /* 10406664 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10406666 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406668 je 0x1040664f */ if (ZF_) goto L_1040664f;
  /* 1040666a call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1040666cu; SAVEALL; call_ind(c, t_); RETCHK(0x1040666cu, 0x1040666au); LOADALL; }
  /* 1040666c jmp 0x1040664f */ goto L_1040664f;
L_1040666e:;
  /* 1040666e push 0x1040d024 */ { u32 v_ = 0x1040d024u; esp -= 4; M32(esp) = v_; }
  /* 10406673 mov eax, 0x1040d020 */ { eax = (u32)(0x1040d020u); }
  /* 10406678 call 0x1040657e */ esp -= 4; M32(esp) = 0x1040667du; SAVEALL; F_1040657e(c); ABI_CHECK(0x1040657eu, 0x10406678u); RETCHK(0x1040667du, 0x10406678u); LOADALL;
  /* 1040667d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1040667e:;
  /* 1040667e push 0x1040d030 */ { u32 v_ = 0x1040d030u; esp -= 4; M32(esp) = v_; }
  /* 10406683 mov eax, 0x1040d028 */ { eax = (u32)(0x1040d028u); }
  /* 10406688 call 0x1040657e */ esp -= 4; M32(esp) = 0x1040668du; SAVEALL; F_1040657e(c); ABI_CHECK(0x1040657eu, 0x10406688u); RETCHK(0x1040668du, 0x10406688u); LOADALL;
  /* 1040668d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040668e or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406692 call 0x104066af */ esp -= 4; M32(esp) = 0x10406697u; SAVEALL; F_104066af(c); ABI_CHECK(0x104066afu, 0x10406692u); RETCHK(0x10406697u, 0x10406692u); LOADALL;
  /* 10406697 cmp dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040669a jne 0x104066bd */ if (!ZF_) goto L_104066bd;
  /* 1040669c mov dword ptr [0x1040d990], esi */ { const u32 m_ = (u32)(0x1040d990u); M32(m_) = (u32)(esi); }
  /* 104066a2 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104066a5 call 0x1040653c */ esp -= 4; M32(esp) = 0x104066aau; SAVEALL; F_1040653c(c); ABI_CHECK(0x1040653cu, 0x104066a5u); RETCHK(0x104066aau, 0x104066a5u); LOADALL;
  /* 104066aa xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 104066ac xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 104066ae inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104066af cmp dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104066b2 je 0x104066bc */ if (ZF_) goto L_104066bc;
  /* 104066b4 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 104066b6 call 0x1040731e */ esp -= 4; M32(esp) = 0x104066bbu; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x104066b6u); RETCHK(0x104066bbu, 0x104066b6u); LOADALL;
  /* 104066bb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_104066bc:;
  /* 104066bc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104066bd:;
  /* 104066bd call 0x104056fb */ esp -= 4; M32(esp) = 0x104066c2u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x104066bdu); RETCHK(0x104066c2u, 0x104066bdu); LOADALL;
  /* 104066c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104066aa(CPU *c) {
  NATIVE_HOOK(0x104066aau) REGS; LOADALL;
L_104066aa:;
  /* 104066aa xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 104066ac xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 104066ae inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104066af cmp dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104066b2 je 0x104066bc */ if (ZF_) goto L_104066bc;
  /* 104066b4 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 104066b6 call 0x1040731e */ esp -= 4; M32(esp) = 0x104066bbu; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x104066b6u); RETCHK(0x104066bbu, 0x104066b6u); LOADALL;
  /* 104066bb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_104066bc:;
  /* 104066bc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104066af(CPU *c) {
  NATIVE_HOOK(0x104066afu) REGS; LOADALL;
L_104066af:;
  /* 104066af cmp dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104066b2 je 0x104066bc */ if (ZF_) goto L_104066bc;
  /* 104066b4 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 104066b6 call 0x1040731e */ esp -= 4; M32(esp) = 0x104066bbu; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x104066b6u); RETCHK(0x104066bbu, 0x104066b6u); LOADALL;
  /* 104066bb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_104066bc:;
  /* 104066bc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104066c3(CPU *c) {
  NATIVE_HOOK(0x104066c3u) REGS; LOADALL;
L_104066c3:;
  /* 104066c3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 104066c5 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 104066c7 push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104066cb call 0x10406600 */ esp -= 4; M32(esp) = 0x104066d0u; SAVEALL; F_10406600(c); ABI_CHECK(0x10406600u, 0x104066cbu); RETCHK(0x104066d0u, 0x104066cbu); LOADALL;
  /* 104066d0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104066d3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104066d4(CPU *c) {
  NATIVE_HOOK(0x104066d4u) REGS; LOADALL;
L_104066d4:;
  /* 104066d4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 104066d6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 104066d8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 104066da call 0x10406600 */ esp -= 4; M32(esp) = 0x104066dfu; SAVEALL; F_10406600(c); ABI_CHECK(0x10406600u, 0x104066dau); RETCHK(0x104066dfu, 0x104066dau); LOADALL;
  /* 104066df add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104066e2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104066e3(CPU *c) {
  NATIVE_HOOK(0x104066e3u) REGS; LOADALL;
L_104066e3:;
  /* 104066e3 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 104066e5 push 0x1040b4b0 */ { u32 v_ = 0x1040b4b0u; esp -= 4; M32(esp) = v_; }
  /* 104066ea call 0x104056c0 */ esp -= 4; M32(esp) = 0x104066efu; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x104066eau); RETCHK(0x104066efu, 0x104066eau); LOADALL;
  /* 104066ef mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 104066f2 imul esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); s64 p_ = (s64)(s32)esi * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 104066f6 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 104066f9 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104066fb jne 0x104066fe */ if (!ZF_) goto L_104066fe;
  /* 104066fd inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_104066fe:;
  /* 104066fe xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10406700 mov dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edi); }
  /* 10406703 cmp esi, -0x20 */ { u32 a_ = esi, b_ = 0xffffffe0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406706 ja 0x1040676d */ if (!(CF_|ZF_)) goto L_1040676d;
  /* 10406708 cmp dword ptr [0x1040e040], 3 */ { const u32 m_ = (u32)(0x1040e040u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040670f jne 0x10406758 */ if (!ZF_) goto L_10406758;
  /* 10406711 add esi, 0xf */ { u32 a_ = esi, b_ = 0xfu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10406714 and esi, 0xfffffff0 */ { u32 a_ = esi, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10406717 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 1040671a mov ebx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ebx = (u32)(M32(m_)); }
  /* 1040671d cmp ebx, dword ptr [0x1040e02c] */ { const u32 m_ = (u32)(0x1040e02cu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406723 ja 0x10406758 */ if (!(CF_|ZF_)) goto L_10406758;
  /* 10406725 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10406727 call 0x104073d3 */ esp -= 4; M32(esp) = 0x1040672cu; SAVEALL; F_104073d3(c); ABI_CHECK(0x104073d3u, 0x10406727u); RETCHK(0x1040672cu, 0x10406727u); LOADALL;
  /* 1040672c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040672d and dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406730 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10406731 call 0x10407c2b */ esp -= 4; M32(esp) = 0x10406736u; SAVEALL; F_10407c2b(c); ABI_CHECK(0x10407c2bu, 0x10406731u); RETCHK(0x10406736u, 0x10406731u); LOADALL;
  /* 10406736 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406737 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 1040673a or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1040673e call 0x1040678d */ esp -= 4; M32(esp) = 0x10406743u; SAVEALL; F_1040678d(c); ABI_CHECK(0x1040678du, 0x1040673eu); RETCHK(0x10406743u, 0x1040673eu); LOADALL;
  /* 10406743 mov edi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edi = (u32)(M32(m_)); }
  /* 10406746 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406748 je 0x1040675c */ if (ZF_) goto L_1040675c;
  /* 1040674a push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040674d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1040674f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10406750 call 0x10409170 */ esp -= 4; M32(esp) = 0x10406755u; SAVEALL; F_10409170(c); ABI_CHECK(0x10409170u, 0x10406750u); RETCHK(0x10406755u, 0x10406750u); LOADALL;
  /* 10406755 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10406758:;
  /* 10406758 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040675a jne 0x10406796 */ if (!ZF_) goto L_10406796;
L_1040675c:;
  /* 1040675c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040675d push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 1040675f push dword ptr [0x1040e03c] */ { const u32 m_ = (u32)(0x1040e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406765 call dword ptr [0x1040b030] */ { const u32 m_ = (u32)(0x1040b030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040676bu; SAVEALL; call_ind(c, t_); RETCHK(0x1040676bu, 0x10406765u); LOADALL; }
  /* 1040676b mov edi, eax */ { edi = (u32)(eax); }
L_1040676d:;
  /* 1040676d test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040676f jne 0x10406796 */ if (!ZF_) goto L_10406796;
  /* 10406771 cmp dword ptr [0x1040dc60], edi */ { const u32 m_ = (u32)(0x1040dc60u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406777 je 0x10406796 */ if (ZF_) goto L_10406796;
  /* 10406779 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040677a call 0x10408504 */ esp -= 4; M32(esp) = 0x1040677fu; SAVEALL; F_10408504(c); ABI_CHECK(0x10408504u, 0x1040677au); RETCHK(0x1040677fu, 0x1040677au); LOADALL;
  /* 1040677f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406780 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406782 jne 0x104066fe */ if (!ZF_) goto L_104066fe;
  /* 10406788 jmp 0x10406798 */ goto L_10406798;
L_10406796:;
  /* 10406796 mov eax, edi */ { eax = (u32)(edi); }
L_10406798:;
  /* 10406798 call 0x104056fb */ esp -= 4; M32(esp) = 0x1040679du; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10406798u); RETCHK(0x1040679du, 0x10406798u); LOADALL;
  /* 1040679d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040678a(CPU *c) {
  NATIVE_HOOK(0x1040678au) REGS; LOADALL;
L_1040678a:;
  /* 1040678a mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 1040678d push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 1040678f call 0x1040731e */ esp -= 4; M32(esp) = 0x10406794u; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x1040678fu); RETCHK(0x10406794u, 0x1040678fu); LOADALL;
  /* 10406794 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406795 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040678d(CPU *c) {
  NATIVE_HOOK(0x1040678du) REGS; LOADALL;
L_1040678d:;
  /* 1040678d push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 1040678f call 0x1040731e */ esp -= 4; M32(esp) = 0x10406794u; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x1040678fu); RETCHK(0x10406794u, 0x1040678fu); LOADALL;
  /* 10406794 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406795 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040679e(CPU *c) {
  NATIVE_HOOK(0x1040679eu) REGS; LOADALL;
L_1040679e:;
  /* 1040679e sub esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104067a1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104067a2 mov ebx, 0x480 */ { ebx = (u32)(0x480u); }
  /* 104067a7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104067a8 call 0x104058bc */ esp -= 4; M32(esp) = 0x104067adu; SAVEALL; F_104058bc(c); ABI_CHECK(0x104058bcu, 0x104067a8u); RETCHK(0x104067adu, 0x104067a8u); LOADALL;
  /* 104067ad test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104067af pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104067b0 jne 0x104067ba */ if (!ZF_) goto L_104067ba;
  /* 104067b2 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104067b5 jmp 0x10406997 */ goto L_10406997;
L_104067ba:;
  /* 104067ba mov dword ptr [0x1040e060], eax */ { const u32 m_ = (u32)(0x1040e060u); M32(m_) = (u32)(eax); }
  /* 104067bf mov dword ptr [0x1040e044], 0x20 */ { const u32 m_ = (u32)(0x1040e044u); M32(m_) = (u32)(0x20u); }
  /* 104067c9 lea ecx, [eax + 0x480] */ ecx = (u32)((u32)(eax + 0x480u));
  /* 104067cf jmp 0x104067ef */ goto L_104067ef;
L_104067d1:;
  /* 104067d1 or dword ptr [eax], 0xffffffff */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104067d4 and dword ptr [eax + 8], 0 */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104067d8 mov byte ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 104067dc mov byte ptr [eax + 5], 0xa */ { const u32 m_ = (u32)(eax + 0x5u); M8(m_) = (u8)(0xau); }
  /* 104067e0 mov ecx, dword ptr [0x1040e060] */ { const u32 m_ = (u32)(0x1040e060u); ecx = (u32)(M32(m_)); }
  /* 104067e6 add eax, 0x24 */ { u32 a_ = eax, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 104067e9 add ecx, 0x480 */ { u32 a_ = ecx, b_ = 0x480u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_104067ef:;
  /* 104067ef cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104067f1 jb 0x104067d1 */ if (CF_) goto L_104067d1;
  /* 104067f3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104067f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104067f5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104067f6 lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 104067fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104067fb call dword ptr [0x1040b068] */ { const u32 m_ = (u32)(0x1040b068u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406801u; SAVEALL; call_ind(c, t_); RETCHK(0x10406801u, 0x104067fbu); LOADALL; }
  /* 10406801 cmp word ptr [esp + 0x46], 0 */ { const u32 m_ = (u32)(esp + 0x46u); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10406807 je 0x104068f6 */ if (ZF_) goto L_104068f6;
  /* 1040680d mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 10406811 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406813 je 0x104068f6 */ if (ZF_) goto L_104068f6;
  /* 10406819 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 1040681b lea ebp, [eax + 4] */ ebp = (u32)((u32)(eax + 0x4u));
  /* 1040681e lea eax, [edi + ebp] */ eax = (u32)((u32)(edi + ebp));
  /* 10406821 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10406825 mov eax, 0x800 */ { eax = (u32)(0x800u); }
  /* 1040682a cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040682c jl 0x10406830 */ if (LT_) goto L_10406830;
  /* 1040682e mov edi, eax */ { edi = (u32)(eax); }
L_10406830:;
  /* 10406830 cmp dword ptr [0x1040e044], edi */ { const u32 m_ = (u32)(0x1040e044u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406836 jge 0x10406886 */ if (!LT_) goto L_10406886;
  /* 10406838 mov esi, 0x1040e064 */ { esi = (u32)(0x1040e064u); }
L_1040683d:;
  /* 1040683d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040683e call 0x104058bc */ esp -= 4; M32(esp) = 0x10406843u; SAVEALL; F_104058bc(c); ABI_CHECK(0x104058bcu, 0x1040683eu); RETCHK(0x10406843u, 0x1040683eu); LOADALL;
  /* 10406843 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406845 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406846 je 0x10406880 */ if (ZF_) goto L_10406880;
  /* 10406848 add dword ptr [0x1040e044], 0x20 */ { const u32 m_ = (u32)(0x1040e044u); u32 a_ = M32(m_), b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 1040684f mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10406851 lea ecx, [eax + 0x480] */ ecx = (u32)((u32)(eax + 0x480u));
  /* 10406857 jmp 0x1040686f */ goto L_1040686f;
L_10406859:;
  /* 10406859 or dword ptr [eax], 0xffffffff */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1040685c and dword ptr [eax + 8], 0 */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406860 mov byte ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 10406864 mov byte ptr [eax + 5], 0xa */ { const u32 m_ = (u32)(eax + 0x5u); M8(m_) = (u8)(0xau); }
  /* 10406868 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 1040686a add eax, 0x24 */ { u32 a_ = eax, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1040686d add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_1040686f:;
  /* 1040686f cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406871 jb 0x10406859 */ if (CF_) goto L_10406859;
  /* 10406873 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10406876 cmp dword ptr [0x1040e044], edi */ { const u32 m_ = (u32)(0x1040e044u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040687c jl 0x1040683d */ if (LT_) goto L_1040683d;
  /* 1040687e jmp 0x10406886 */ goto L_10406886;
L_10406880:;
  /* 10406880 mov edi, dword ptr [0x1040e044] */ { const u32 m_ = (u32)(0x1040e044u); edi = (u32)(M32(m_)); }
L_10406886:;
  /* 10406886 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10406888 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040688a jle 0x104068f6 */ if ((ZF_|LT_)) goto L_104068f6;
L_1040688c:;
  /* 1040688c mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10406890 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10406892 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406895 je 0x104068eb */ if (ZF_) goto L_104068eb;
  /* 10406897 mov cl, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040689a test cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1040689d je 0x104068eb */ if (ZF_) goto L_104068eb;
  /* 1040689f test cl, 8 */ { u32 a_ = (ecx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104068a2 jne 0x104068af */ if (!ZF_) goto L_104068af;
  /* 104068a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104068a5 call dword ptr [0x1040b064] */ { const u32 m_ = (u32)(0x1040b064u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104068abu; SAVEALL; call_ind(c, t_); RETCHK(0x104068abu, 0x104068a5u); LOADALL; }
  /* 104068ab test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104068ad je 0x104068eb */ if (ZF_) goto L_104068eb;
L_104068af:;
  /* 104068af mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 104068b1 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 104068b3 and eax, 0x1f */ { u32 a_ = eax, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104068b6 lea eax, [eax + eax*8] */ eax = (u32)((u32)(eax + eax * 8u));
  /* 104068b9 sar ecx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 104068bc mov ecx, dword ptr [ecx*4 + 0x1040e060] */ { const u32 m_ = (u32)(ecx * 4u + 0x1040e060u); ecx = (u32)(M32(m_)); }
  /* 104068c3 lea esi, [ecx + eax*4] */ esi = (u32)((u32)(ecx + eax * 4u));
  /* 104068c6 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 104068ca mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 104068cc mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 104068ce mov al, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104068d1 mov byte ptr [esi + 4], al */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104068d4 lea eax, [esi + 0xc] */ eax = (u32)((u32)(esi + 0xcu));
  /* 104068d7 push 0xfa0 */ { u32 v_ = 0xfa0u; esp -= 4; M32(esp) = v_; }
  /* 104068dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104068dd call 0x104091e0 */ esp -= 4; M32(esp) = 0x104068e2u; SAVEALL; F_104091e0(c); ABI_CHECK(0x104091e0u, 0x104068ddu); RETCHK(0x104068e2u, 0x104068ddu); LOADALL;
  /* 104068e2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104068e4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104068e5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104068e6 je 0x10406916 */ if (ZF_) goto L_10406916;
  /* 104068e8 inc dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_104068eb:;
  /* 104068eb add dword ptr [esp + 0x10], 4 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 104068f0 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104068f1 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104068f2 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104068f4 jl 0x1040688c */ if (LT_) goto L_1040688c;
L_104068f6:;
  /* 104068f6 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_104068f8:;
  /* 104068f8 mov ecx, dword ptr [0x1040e060] */ { const u32 m_ = (u32)(0x1040e060u); ecx = (u32)(M32(m_)); }
  /* 104068fe lea eax, [ebx + ebx*8] */ eax = (u32)((u32)(ebx + ebx * 8u));
  /* 10406901 lea esi, [ecx + eax*4] */ esi = (u32)((u32)(ecx + eax * 4u));
  /* 10406904 cmp dword ptr [esi], -1 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406907 jne 0x10406978 */ if (!ZF_) goto L_10406978;
  /* 10406909 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040690b mov byte ptr [esi + 4], 0x81 */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)(0x81u); }
  /* 1040690f jne 0x1040691b */ if (!ZF_) goto L_1040691b;
  /* 10406911 push -0xa */ { u32 v_ = 0xfffffff6u; esp -= 4; M32(esp) = v_; }
  /* 10406913 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 10406914 jmp 0x10406925 */ goto L_10406925;
L_10406916:;
  /* 10406916 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10406919 jmp 0x10406994 */ goto L_10406994;
L_1040691b:;
  /* 1040691b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 1040691d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1040691e neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10406920 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10406922 add eax, -0xb */ { u32 a_ = eax, b_ = 0xfffffff5u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_10406925:;
  /* 10406925 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10406926 call dword ptr [0x1040b060] */ { const u32 m_ = (u32)(0x1040b060u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040692cu; SAVEALL; call_ind(c, t_); RETCHK(0x1040692cu, 0x10406926u); LOADALL; }
  /* 1040692c mov edi, eax */ { edi = (u32)(eax); }
  /* 1040692e cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406931 je 0x10406972 */ if (ZF_) goto L_10406972;
  /* 10406933 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10406934 call dword ptr [0x1040b064] */ { const u32 m_ = (u32)(0x1040b064u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040693au; SAVEALL; call_ind(c, t_); RETCHK(0x1040693au, 0x10406934u); LOADALL; }
  /* 1040693a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040693c je 0x10406972 */ if (ZF_) goto L_10406972;
  /* 1040693e and eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10406943 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406946 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 10406948 jne 0x10406950 */ if (!ZF_) goto L_10406950;
  /* 1040694a or byte ptr [esi + 4], 0x40 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M8(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 1040694e jmp 0x10406959 */ goto L_10406959;
L_10406950:;
  /* 10406950 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406953 jne 0x10406959 */ if (!ZF_) goto L_10406959;
  /* 10406955 or byte ptr [esi + 4], 8 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_10406959:;
  /* 10406959 lea eax, [esi + 0xc] */ eax = (u32)((u32)(esi + 0xcu));
  /* 1040695c push 0xfa0 */ { u32 v_ = 0xfa0u; esp -= 4; M32(esp) = v_; }
  /* 10406961 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10406962 call 0x104091e0 */ esp -= 4; M32(esp) = 0x10406967u; SAVEALL; F_104091e0(c); ABI_CHECK(0x104091e0u, 0x10406962u); RETCHK(0x10406967u, 0x10406962u); LOADALL;
  /* 10406967 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406969 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040696a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040696b je 0x10406916 */ if (ZF_) goto L_10406916;
  /* 1040696d inc dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406970 jmp 0x1040697c */ goto L_1040697c;
L_10406972:;
  /* 10406972 or byte ptr [esi + 4], 0x40 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M8(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10406976 jmp 0x1040697c */ goto L_1040697c;
L_10406978:;
  /* 10406978 or byte ptr [esi + 4], 0x80 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_1040697c:;
  /* 1040697c inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040697d cmp ebx, 3 */ { u32 a_ = ebx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406980 jl 0x104068f8 */ if (LT_) goto L_104068f8;
  /* 10406986 push dword ptr [0x1040e044] */ { const u32 m_ = (u32)(0x1040e044u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040698c call dword ptr [0x1040b05c] */ { const u32 m_ = (u32)(0x1040b05cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406992u; SAVEALL; call_ind(c, t_); RETCHK(0x10406992u, 0x1040698cu); LOADALL; }
  /* 10406992 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10406994:;
  /* 10406994 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10406995 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10406996 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_10406997:;
  /* 10406997 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10406998 add esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040699b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040699c(CPU *c) {
  NATIVE_HOOK(0x1040699cu) REGS; LOADALL;
L_1040699c:;
  /* 1040699c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040699d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040699e mov esi, 0x1040e060 */ { esi = (u32)(0x1040e060u); }
L_104069a3:;
  /* 104069a3 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 104069a5 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104069a7 je 0x104069da */ if (ZF_) goto L_104069da;
  /* 104069a9 lea eax, [edi + 0x480] */ eax = (u32)((u32)(edi + 0x480u));
  /* 104069af jmp 0x104069cb */ goto L_104069cb;
L_104069b1:;
  /* 104069b1 cmp dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104069b5 je 0x104069c1 */ if (ZF_) goto L_104069c1;
  /* 104069b7 lea eax, [edi + 0xc] */ eax = (u32)((u32)(edi + 0xcu));
  /* 104069ba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104069bb call dword ptr [0x1040b06c] */ { const u32 m_ = (u32)(0x1040b06cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104069c1u; SAVEALL; call_ind(c, t_); RETCHK(0x104069c1u, 0x104069bbu); LOADALL; }
L_104069c1:;
  /* 104069c1 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 104069c3 add edi, 0x24 */ { u32 a_ = edi, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104069c6 add eax, 0x480 */ { u32 a_ = eax, b_ = 0x480u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_104069cb:;
  /* 104069cb cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104069cd jb 0x104069b1 */ if (CF_) goto L_104069b1;
  /* 104069cf push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104069d1 call 0x1040549e */ esp -= 4; M32(esp) = 0x104069d6u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104069d1u); RETCHK(0x104069d6u, 0x104069d1u); LOADALL;
  /* 104069d6 and dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104069d9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_104069da:;
  /* 104069da add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104069dd cmp esi, 0x1040e160 */ { u32 a_ = esi, b_ = 0x1040e160u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104069e3 jl 0x104069a3 */ if (LT_) goto L_104069a3;
  /* 104069e5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104069e6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104069e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104069e8(CPU *c) {
  NATIVE_HOOK(0x104069e8u) REGS; LOADALL;
L_104069e8:;
  /* 104069e8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104069e9 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 104069eb cmp dword ptr [0x1040e16c], ebx */ { const u32 m_ = (u32)(0x1040e16cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104069f1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104069f2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104069f3 jne 0x104069fa */ if (!ZF_) goto L_104069fa;
  /* 104069f5 call 0x1040903d */ esp -= 4; M32(esp) = 0x104069fau; SAVEALL; F_1040903d(c); ABI_CHECK(0x1040903du, 0x104069f5u); RETCHK(0x104069fau, 0x104069f5u); LOADALL;
L_104069fa:;
  /* 104069fa mov esi, dword ptr [0x1040d928] */ { const u32 m_ = (u32)(0x1040d928u); esi = (u32)(M32(m_)); }
  /* 10406a00 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10406a02 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406a04 jne 0x10406a18 */ if (!ZF_) goto L_10406a18;
  /* 10406a06 jmp 0x10406a38 */ goto L_10406a38;
L_10406a08:;
  /* 10406a08 cmp al, 0x3d */ { u32 a_ = (eax & 0xffu), b_ = 0x3du; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406a0a je 0x10406a0d */ if (ZF_) goto L_10406a0d;
  /* 10406a0c inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10406a0d:;
  /* 10406a0d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10406a0e call 0x10408250 */ esp -= 4; M32(esp) = 0x10406a13u; SAVEALL; F_10408250(c); ABI_CHECK(0x10408250u, 0x10406a0eu); RETCHK(0x10406a13u, 0x10406a0eu); LOADALL;
  /* 10406a13 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406a14 lea esi, [esi + eax + 1] */ esi = (u32)((u32)(esi + eax + 0x1u));
L_10406a18:;
  /* 10406a18 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10406a1a cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406a1c jne 0x10406a08 */ if (!ZF_) goto L_10406a08;
  /* 10406a1e lea eax, [edi*4 + 4] */ eax = (u32)((u32)(edi * 4u + 0x4u));
  /* 10406a25 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10406a26 call 0x104058bc */ esp -= 4; M32(esp) = 0x10406a2bu; SAVEALL; F_104058bc(c); ABI_CHECK(0x104058bcu, 0x10406a26u); RETCHK(0x10406a2bu, 0x10406a26u); LOADALL;
  /* 10406a2b mov edi, eax */ { edi = (u32)(eax); }
  /* 10406a2d cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406a2f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406a30 mov dword ptr [0x1040d970], edi */ { const u32 m_ = (u32)(0x1040d970u); M32(m_) = (u32)(edi); }
  /* 10406a36 jne 0x10406a3d */ if (!ZF_) goto L_10406a3d;
L_10406a38:;
  /* 10406a38 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10406a3b jmp 0x10406a95 */ goto L_10406a95;
L_10406a3d:;
  /* 10406a3d mov esi, dword ptr [0x1040d928] */ { const u32 m_ = (u32)(0x1040d928u); esi = (u32)(M32(m_)); }
  /* 10406a43 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10406a44 jmp 0x10406a70 */ goto L_10406a70;
L_10406a46:;
  /* 10406a46 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10406a47 call 0x10408250 */ esp -= 4; M32(esp) = 0x10406a4cu; SAVEALL; F_10408250(c); ABI_CHECK(0x10408250u, 0x10406a47u); RETCHK(0x10406a4cu, 0x10406a47u); LOADALL;
  /* 10406a4c mov ebp, eax */ { ebp = (u32)(eax); }
  /* 10406a4e inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406a4f cmp byte ptr [esi], 0x3d */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x3du; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406a52 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406a53 je 0x10406a6e */ if (ZF_) goto L_10406a6e;
  /* 10406a55 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10406a56 call 0x104058bc */ esp -= 4; M32(esp) = 0x10406a5bu; SAVEALL; F_104058bc(c); ABI_CHECK(0x104058bcu, 0x10406a56u); RETCHK(0x10406a5bu, 0x10406a56u); LOADALL;
  /* 10406a5b cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406a5d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406a5e mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 10406a60 je 0x10406a99 */ if (ZF_) goto L_10406a99;
  /* 10406a62 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10406a63 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10406a64 call 0x10408020 */ esp -= 4; M32(esp) = 0x10406a69u; SAVEALL; F_10408020(c); ABI_CHECK(0x10408020u, 0x10406a64u); RETCHK(0x10406a69u, 0x10406a64u); LOADALL;
  /* 10406a69 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406a6a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406a6b add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10406a6e:;
  /* 10406a6e add esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_10406a70:;
  /* 10406a70 cmp byte ptr [esi], bl */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406a72 jne 0x10406a46 */ if (!ZF_) goto L_10406a46;
  /* 10406a74 push dword ptr [0x1040d928] */ { const u32 m_ = (u32)(0x1040d928u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406a7a call 0x1040549e */ esp -= 4; M32(esp) = 0x10406a7fu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10406a7au); RETCHK(0x10406a7fu, 0x10406a7au); LOADALL;
  /* 10406a7f mov dword ptr [0x1040d928], ebx */ { const u32 m_ = (u32)(0x1040d928u); M32(m_) = (u32)(ebx); }
  /* 10406a85 mov dword ptr [edi], ebx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebx); }
  /* 10406a87 mov dword ptr [0x1040e160], 1 */ { const u32 m_ = (u32)(0x1040e160u); M32(m_) = (u32)(0x1u); }
  /* 10406a91 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10406a93:;
  /* 10406a93 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406a94 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_10406a95:;
  /* 10406a95 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10406a96 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10406a97 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10406a98 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10406a99:;
  /* 10406a99 push dword ptr [0x1040d970] */ { const u32 m_ = (u32)(0x1040d970u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406a9f call 0x1040549e */ esp -= 4; M32(esp) = 0x10406aa4u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10406a9fu); RETCHK(0x10406aa4u, 0x10406a9fu); LOADALL;
  /* 10406aa4 mov dword ptr [0x1040d970], ebx */ { const u32 m_ = (u32)(0x1040d970u); M32(m_) = (u32)(ebx); }
  /* 10406aaa or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10406aad jmp 0x10406a93 */ goto L_10406a93;
}

void F_10406aaf(CPU *c) {
  NATIVE_HOOK(0x10406aafu) REGS; LOADALL;
L_10406aaf:;
  /* 10406aaf push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10406ab0 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10406ab2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10406ab3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10406ab4 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10406ab7 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10406ab9 cmp dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406abc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10406abd mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 10406abf mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10406ac1 mov dword ptr [ebx], 1 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x1u); }
  /* 10406ac7 je 0x10406ad2 */ if (ZF_) goto L_10406ad2;
  /* 10406ac9 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10406acc add dword ptr [ebp + 8], 4 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406ad0 mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
L_10406ad2:;
  /* 10406ad2 cmp byte ptr [eax], 0x22 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x22u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406ad5 jne 0x10406ae5 */ if (!ZF_) goto L_10406ae5;
  /* 10406ad7 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10406ad9 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406adb sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 10406ade inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406adf mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10406ae1 mov cl, 0x22 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x22u) & 0xffu); }
  /* 10406ae3 jmp 0x10406b12 */ goto L_10406b12;
L_10406ae5:;
  /* 10406ae5 inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406ae7 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406ae9 je 0x10406af0 */ if (ZF_) goto L_10406af0;
  /* 10406aeb mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10406aed mov byte ptr [edi], cl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10406aef inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10406af0:;
  /* 10406af0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10406af2 movzx ebx, cl */ { ebx = (u32)((ecx & 0xffu)); }
  /* 10406af5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406af6 test byte ptr [ebx + 0x1040de01], 4 */ { const u32 m_ = (u32)(ebx + 0x1040de01u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10406afd je 0x10406b0b */ if (ZF_) goto L_10406b0b;
  /* 10406aff inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406b01 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406b03 je 0x10406b0a */ if (ZF_) goto L_10406b0a;
  /* 10406b05 mov bl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10406b07 mov byte ptr [edi], bl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10406b09 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10406b0a:;
  /* 10406b0a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10406b0b:;
  /* 10406b0b test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10406b0d mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10406b10 je 0x10406b44 */ if (ZF_) goto L_10406b44;
L_10406b12:;
  /* 10406b12 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406b14 jne 0x10406ad2 */ if (!ZF_) goto L_10406ad2;
  /* 10406b16 cmp cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406b19 je 0x10406b20 */ if (ZF_) goto L_10406b20;
  /* 10406b1b cmp cl, 9 */ { u32 a_ = (ecx & 0xffu), b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406b1e jne 0x10406ad2 */ if (!ZF_) goto L_10406ad2;
L_10406b20:;
  /* 10406b20 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406b22 je 0x10406b28 */ if (ZF_) goto L_10406b28;
  /* 10406b24 mov byte ptr [edi - 1], 0 */ { const u32 m_ = (u32)(edi + 0xffffffffu); M8(m_) = (u8)(0x0u); }
L_10406b28:;
  /* 10406b28 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10406b2c:;
  /* 10406b2c cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406b2f je 0x10406c0b */ if (ZF_) goto L_10406c0b;
L_10406b35:;
  /* 10406b35 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10406b37 cmp cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406b3a je 0x10406b41 */ if (ZF_) goto L_10406b41;
  /* 10406b3c cmp cl, 9 */ { u32 a_ = (ecx & 0xffu), b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406b3f jne 0x10406b47 */ if (!ZF_) goto L_10406b47;
L_10406b41:;
  /* 10406b41 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406b42 jmp 0x10406b35 */ goto L_10406b35;
L_10406b44:;
  /* 10406b44 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10406b45 jmp 0x10406b28 */ goto L_10406b28;
L_10406b47:;
  /* 10406b47 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406b4a je 0x10406c0b */ if (ZF_) goto L_10406c0b;
  /* 10406b50 cmp dword ptr [ebp + 8], 0 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406b54 je 0x10406b5f */ if (ZF_) goto L_10406b5f;
  /* 10406b56 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10406b59 add dword ptr [ebp + 8], 4 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406b5d mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
L_10406b5f:;
  /* 10406b5f inc dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10406b61:;
  /* 10406b61 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10406b63 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406b64 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10406b66 jmp 0x10406b6a */ goto L_10406b6a;
L_10406b68:;
  /* 10406b68 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406b69 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10406b6a:;
  /* 10406b6a cmp byte ptr [eax], 0x5c */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x5cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406b6d je 0x10406b68 */ if (ZF_) goto L_10406b68;
  /* 10406b6f cmp byte ptr [eax], 0x22 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x22u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406b72 jne 0x10406b9a */ if (!ZF_) goto L_10406b9a;
  /* 10406b74 test dl, 1 */ { u32 a_ = (edx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10406b77 jne 0x10406b98 */ if (!ZF_) goto L_10406b98;
  /* 10406b79 cmp dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406b7d je 0x10406b8b */ if (ZF_) goto L_10406b8b;
  /* 10406b7f lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 10406b82 cmp byte ptr [ecx], 0x22 */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = 0x22u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406b85 jne 0x10406b8b */ if (!ZF_) goto L_10406b8b;
  /* 10406b87 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10406b89 jmp 0x10406b8d */ goto L_10406b8d;
L_10406b8b:;
  /* 10406b8b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_10406b8d:;
  /* 10406b8d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10406b8f cmp dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406b92 sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 10406b95 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
L_10406b98:;
  /* 10406b98 shr edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
L_10406b9a:;
  /* 10406b9a test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406b9c je 0x10406bab */ if (ZF_) goto L_10406bab;
L_10406b9e:;
  /* 10406b9e test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406ba0 je 0x10406ba6 */ if (ZF_) goto L_10406ba6;
  /* 10406ba2 mov byte ptr [edi], 0x5c */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)(0x5cu); }
  /* 10406ba5 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10406ba6:;
  /* 10406ba6 inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406ba8 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10406ba9 jne 0x10406b9e */ if (!ZF_) goto L_10406b9e;
L_10406bab:;
  /* 10406bab mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10406bad test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10406baf je 0x10406bf9 */ if (ZF_) goto L_10406bf9;
  /* 10406bb1 cmp dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406bb5 jne 0x10406bc1 */ if (!ZF_) goto L_10406bc1;
  /* 10406bb7 cmp cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406bba je 0x10406bf9 */ if (ZF_) goto L_10406bf9;
  /* 10406bbc cmp cl, 9 */ { u32 a_ = (ecx & 0xffu), b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406bbf je 0x10406bf9 */ if (ZF_) goto L_10406bf9;
L_10406bc1:;
  /* 10406bc1 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406bc3 je 0x10406bf3 */ if (ZF_) goto L_10406bf3;
  /* 10406bc5 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406bc7 je 0x10406be2 */ if (ZF_) goto L_10406be2;
  /* 10406bc9 movzx edx, cl */ { edx = (u32)((ecx & 0xffu)); }
  /* 10406bcc test byte ptr [edx + 0x1040de01], 4 */ { const u32 m_ = (u32)(edx + 0x1040de01u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10406bd3 je 0x10406bdb */ if (ZF_) goto L_10406bdb;
  /* 10406bd5 mov byte ptr [edi], cl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10406bd7 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406bd8 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406bd9 inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10406bdb:;
  /* 10406bdb mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10406bdd mov byte ptr [edi], cl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10406bdf inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406be0 jmp 0x10406bf1 */ goto L_10406bf1;
L_10406be2:;
  /* 10406be2 movzx ecx, cl */ { ecx = (u32)((ecx & 0xffu)); }
  /* 10406be5 test byte ptr [ecx + 0x1040de01], 4 */ { const u32 m_ = (u32)(ecx + 0x1040de01u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10406bec je 0x10406bf1 */ if (ZF_) goto L_10406bf1;
  /* 10406bee inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406bef inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10406bf1:;
  /* 10406bf1 inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10406bf3:;
  /* 10406bf3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406bf4 jmp 0x10406b61 */ goto L_10406b61;
L_10406bf9:;
  /* 10406bf9 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406bfb je 0x10406c01 */ if (ZF_) goto L_10406c01;
  /* 10406bfd mov byte ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)(0x0u); }
  /* 10406c00 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10406c01:;
  /* 10406c01 inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406c03 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10406c06 jmp 0x10406b2c */ goto L_10406b2c;
L_10406c0b:;
  /* 10406c0b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10406c0e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406c10 je 0x10406c15 */ if (ZF_) goto L_10406c15;
  /* 10406c12 and dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10406c15:;
  /* 10406c15 inc dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406c17 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10406c18 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10406c19 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10406c1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406c1b(CPU *c) {
  NATIVE_HOOK(0x10406c1bu) REGS; LOADALL;
L_10406c1b:;
  /* 10406c1b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10406c1c mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10406c1e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10406c1f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10406c20 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10406c21 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10406c22 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10406c23 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10406c25 cmp dword ptr [0x1040e16c], edi */ { const u32 m_ = (u32)(0x1040e16cu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406c2b jne 0x10406c32 */ if (!ZF_) goto L_10406c32;
  /* 10406c2d call 0x1040903d */ esp -= 4; M32(esp) = 0x10406c32u; SAVEALL; F_1040903d(c); ABI_CHECK(0x1040903du, 0x10406c2du); RETCHK(0x10406c32u, 0x10406c2du); LOADALL;
L_10406c32:;
  /* 10406c32 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 10406c37 mov esi, 0x1040d998 */ { esi = (u32)(0x1040d998u); }
  /* 10406c3c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10406c3d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10406c3e mov byte ptr [0x1040da9c], 0 */ { const u32 m_ = (u32)(0x1040da9cu); M8(m_) = (u8)(0x0u); }
  /* 10406c45 call dword ptr [0x1040b02c] */ { const u32 m_ = (u32)(0x1040b02cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406c4bu; SAVEALL; call_ind(c, t_); RETCHK(0x10406c4bu, 0x10406c45u); LOADALL; }
  /* 10406c4b mov eax, dword ptr [0x1040e174] */ { const u32 m_ = (u32)(0x1040e174u); eax = (u32)(M32(m_)); }
  /* 10406c50 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406c52 mov dword ptr [0x1040d980], esi */ { const u32 m_ = (u32)(0x1040d980u); M32(m_) = (u32)(esi); }
  /* 10406c58 je 0x10406c61 */ if (ZF_) goto L_10406c61;
  /* 10406c5a cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406c5d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10406c5f jne 0x10406c63 */ if (!ZF_) goto L_10406c63;
L_10406c61:;
  /* 10406c61 mov ebx, esi */ { ebx = (u32)(esi); }
L_10406c63:;
  /* 10406c63 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10406c66 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10406c67 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10406c68 lea esi, [ebp - 8] */ esi = (u32)((u32)(ebp + 0xfffffff8u));
  /* 10406c6b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10406c6d mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10406c6f call 0x10406aaf */ esp -= 4; M32(esp) = 0x10406c74u; SAVEALL; F_10406aaf(c); ABI_CHECK(0x10406aafu, 0x10406c6fu); RETCHK(0x10406c74u, 0x10406c6fu); LOADALL;
  /* 10406c74 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 10406c77 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 10406c7a shl esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10406c7d add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10406c7f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10406c80 call 0x104058bc */ esp -= 4; M32(esp) = 0x10406c85u; SAVEALL; F_104058bc(c); ABI_CHECK(0x104058bcu, 0x10406c80u); RETCHK(0x10406c85u, 0x10406c80u); LOADALL;
  /* 10406c85 mov edi, eax */ { edi = (u32)(eax); }
  /* 10406c87 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10406c8a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406c8c jne 0x10406c93 */ if (!ZF_) goto L_10406c93;
  /* 10406c8e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10406c91 jmp 0x10406cb8 */ goto L_10406cb8;
L_10406c93:;
  /* 10406c93 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10406c96 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10406c97 lea ecx, [esi + edi] */ ecx = (u32)((u32)(esi + edi));
  /* 10406c9a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10406c9b lea esi, [ebp - 8] */ esi = (u32)((u32)(ebp + 0xfffffff8u));
  /* 10406c9e mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10406ca0 call 0x10406aaf */ esp -= 4; M32(esp) = 0x10406ca5u; SAVEALL; F_10406aaf(c); ABI_CHECK(0x10406aafu, 0x10406ca0u); RETCHK(0x10406ca5u, 0x10406ca0u); LOADALL;
  /* 10406ca5 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10406ca8 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10406ca9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406caa mov dword ptr [0x1040d964], eax */ { const u32 m_ = (u32)(0x1040d964u); M32(m_) = (u32)(eax); }
  /* 10406caf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406cb0 mov dword ptr [0x1040d968], edi */ { const u32 m_ = (u32)(0x1040d968u); M32(m_) = (u32)(edi); }
  /* 10406cb6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10406cb8:;
  /* 10406cb8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10406cb9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10406cba pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10406cbb leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10406cbc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406cbd(CPU *c) {
  NATIVE_HOOK(0x10406cbdu) REGS; LOADALL;
L_10406cbd:;
  /* 10406cbd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10406cbe push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10406cbf mov eax, dword ptr [0x1040daa0] */ { const u32 m_ = (u32)(0x1040daa0u); eax = (u32)(M32(m_)); }
  /* 10406cc4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10406cc5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10406cc6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10406cc7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10406cc8 mov edi, dword ptr [0x1040b080] */ { const u32 m_ = (u32)(0x1040b080u); edi = (u32)(M32(m_)); }
  /* 10406cce xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10406cd0 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10406cd2 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406cd4 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 10406cd6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10406cd7 jne 0x10406d06 */ if (!ZF_) goto L_10406d06;
  /* 10406cd9 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x10406cdbu; SAVEALL; call_ind(c, t_); RETCHK(0x10406cdbu, 0x10406cd9u); LOADALL; }
  /* 10406cdb mov esi, eax */ { esi = (u32)(eax); }
  /* 10406cdd cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406cdf je 0x10406ced */ if (ZF_) goto L_10406ced;
  /* 10406ce1 mov dword ptr [0x1040daa0], 1 */ { const u32 m_ = (u32)(0x1040daa0u); M32(m_) = (u32)(0x1u); }
  /* 10406ceb jmp 0x10406d0b */ goto L_10406d0b;
L_10406ced:;
  /* 10406ced call dword ptr [0x1040b03c] */ { const u32 m_ = (u32)(0x1040b03cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406cf3u; SAVEALL; call_ind(c, t_); RETCHK(0x10406cf3u, 0x10406cedu); LOADALL; }
  /* 10406cf3 cmp eax, 0x78 */ { u32 a_ = eax, b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406cf6 jne 0x10406d01 */ if (!ZF_) goto L_10406d01;
  /* 10406cf8 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 10406cfa mov dword ptr [0x1040daa0], eax */ { const u32 m_ = (u32)(0x1040daa0u); M32(m_) = (u32)(eax); }
  /* 10406cff jmp 0x10406d06 */ goto L_10406d06;
L_10406d01:;
  /* 10406d01 mov eax, dword ptr [0x1040daa0] */ { const u32 m_ = (u32)(0x1040daa0u); eax = (u32)(M32(m_)); }
L_10406d06:;
  /* 10406d06 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406d09 jne 0x10406d88 */ if (!ZF_) goto L_10406d88;
L_10406d0b:;
  /* 10406d0b cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406d0d jne 0x10406d17 */ if (!ZF_) goto L_10406d17;
  /* 10406d0f call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x10406d11u; SAVEALL; call_ind(c, t_); RETCHK(0x10406d11u, 0x10406d0fu); LOADALL; }
  /* 10406d11 mov esi, eax */ { esi = (u32)(eax); }
  /* 10406d13 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406d15 je 0x10406d90 */ if (ZF_) goto L_10406d90;
L_10406d17:;
  /* 10406d17 cmp word ptr [esi], bx */ { const u32 m_ = (u32)(esi); u32 a_ = M16(m_), b_ = (ebx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10406d1a mov eax, esi */ { eax = (u32)(esi); }
  /* 10406d1c je 0x10406d2c */ if (ZF_) goto L_10406d2c;
L_10406d1e:;
  /* 10406d1e add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10406d20 cmp word ptr [eax], bx */ { const u32 m_ = (u32)(eax); u32 a_ = M16(m_), b_ = (ebx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10406d23 jne 0x10406d1e */ if (!ZF_) goto L_10406d1e;
  /* 10406d25 add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10406d27 cmp word ptr [eax], bx */ { const u32 m_ = (u32)(eax); u32 a_ = M16(m_), b_ = (ebx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10406d2a jne 0x10406d1e */ if (!ZF_) goto L_10406d1e;
L_10406d2c:;
  /* 10406d2c mov edi, dword ptr [0x1040b07c] */ { const u32 m_ = (u32)(0x1040b07cu); edi = (u32)(M32(m_)); }
  /* 10406d32 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10406d33 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10406d34 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10406d35 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10406d37 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10406d38 sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10406d3a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406d3b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10406d3c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10406d3d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10406d3e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10406d3f mov dword ptr [esp + 0x34], eax */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(eax); }
  /* 10406d43 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x10406d45u; SAVEALL; call_ind(c, t_); RETCHK(0x10406d45u, 0x10406d43u); LOADALL; }
  /* 10406d45 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 10406d47 cmp ebp, ebx */ { u32 a_ = ebp, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406d49 je 0x10406d7d */ if (ZF_) goto L_10406d7d;
  /* 10406d4b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10406d4c call 0x104058bc */ esp -= 4; M32(esp) = 0x10406d51u; SAVEALL; F_104058bc(c); ABI_CHECK(0x104058bcu, 0x10406d4cu); RETCHK(0x10406d51u, 0x10406d4cu); LOADALL;
  /* 10406d51 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406d53 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406d54 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10406d58 je 0x10406d7d */ if (ZF_) goto L_10406d7d;
  /* 10406d5a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10406d5b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10406d5c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10406d5d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10406d5e push dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406d62 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10406d63 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10406d64 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10406d65 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x10406d67u; SAVEALL; call_ind(c, t_); RETCHK(0x10406d67u, 0x10406d65u); LOADALL; }
  /* 10406d67 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406d69 jne 0x10406d79 */ if (!ZF_) goto L_10406d79;
  /* 10406d6b push dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406d6f call 0x1040549e */ esp -= 4; M32(esp) = 0x10406d74u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10406d6fu); RETCHK(0x10406d74u, 0x10406d6fu); LOADALL;
  /* 10406d74 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406d75 mov dword ptr [esp + 0x10], ebx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebx); }
L_10406d79:;
  /* 10406d79 mov ebx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebx = (u32)(M32(m_)); }
L_10406d7d:;
  /* 10406d7d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10406d7e call dword ptr [0x1040b078] */ { const u32 m_ = (u32)(0x1040b078u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406d84u; SAVEALL; call_ind(c, t_); RETCHK(0x10406d84u, 0x10406d7eu); LOADALL; }
  /* 10406d84 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10406d86 jmp 0x10406dd8 */ goto L_10406dd8;
L_10406d88:;
  /* 10406d88 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406d8a je 0x10406d94 */ if (ZF_) goto L_10406d94;
  /* 10406d8c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406d8e je 0x10406d94 */ if (ZF_) goto L_10406d94;
L_10406d90:;
  /* 10406d90 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10406d92 jmp 0x10406dd8 */ goto L_10406dd8;
L_10406d94:;
  /* 10406d94 call dword ptr [0x1040b074] */ { const u32 m_ = (u32)(0x1040b074u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406d9au; SAVEALL; call_ind(c, t_); RETCHK(0x10406d9au, 0x10406d94u); LOADALL; }
  /* 10406d9a mov esi, eax */ { esi = (u32)(eax); }
  /* 10406d9c cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406d9e je 0x10406d90 */ if (ZF_) goto L_10406d90;
  /* 10406da0 cmp byte ptr [esi], bl */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406da2 je 0x10406dae */ if (ZF_) goto L_10406dae;
L_10406da4:;
  /* 10406da4 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406da5 cmp byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406da7 jne 0x10406da4 */ if (!ZF_) goto L_10406da4;
  /* 10406da9 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406daa cmp byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10406dac jne 0x10406da4 */ if (!ZF_) goto L_10406da4;
L_10406dae:;
  /* 10406dae sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10406db0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406db1 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 10406db3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10406db4 call 0x104058bc */ esp -= 4; M32(esp) = 0x10406db9u; SAVEALL; F_104058bc(c); ABI_CHECK(0x104058bcu, 0x10406db4u); RETCHK(0x10406db9u, 0x10406db4u); LOADALL;
  /* 10406db9 mov edi, eax */ { edi = (u32)(eax); }
  /* 10406dbb cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406dbd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406dbe jne 0x10406dc4 */ if (!ZF_) goto L_10406dc4;
  /* 10406dc0 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10406dc2 jmp 0x10406dcf */ goto L_10406dcf;
L_10406dc4:;
  /* 10406dc4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10406dc5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10406dc6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10406dc7 call 0x10409270 */ esp -= 4; M32(esp) = 0x10406dccu; SAVEALL; F_10409270(c); ABI_CHECK(0x10409270u, 0x10406dc7u); RETCHK(0x10406dccu, 0x10406dc7u); LOADALL;
  /* 10406dcc add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10406dcf:;
  /* 10406dcf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10406dd0 call dword ptr [0x1040b070] */ { const u32 m_ = (u32)(0x1040b070u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406dd6u; SAVEALL; call_ind(c, t_); RETCHK(0x10406dd6u, 0x10406dd0u); LOADALL; }
  /* 10406dd6 mov eax, edi */ { eax = (u32)(edi); }
L_10406dd8:;
  /* 10406dd8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10406dd9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10406dda pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10406ddb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10406ddc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406ddd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406dde ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406ddf(CPU *c) {
  NATIVE_HOOK(0x10406ddfu) REGS; LOADALL;
L_10406ddf:;
  /* 10406ddf push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10406de1 push 0x1040b4c0 */ { u32 v_ = 0x1040b4c0u; esp -= 4; M32(esp) = v_; }
  /* 10406de6 call 0x104056c0 */ esp -= 4; M32(esp) = 0x10406debu; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x10406de6u); RETCHK(0x10406debu, 0x10406de6u); LOADALL;
  /* 10406deb mov dword ptr [ebp - 0x1c], 0x1040c2b8 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x1040c2b8u); }
L_10406df2:;
  /* 10406df2 cmp dword ptr [ebp - 0x1c], 0x1040c2b8 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x1040c2b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406df9 jae 0x10406e1d */ if (!CF_) goto L_10406e1d;
  /* 10406dfb and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406dff mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10406e02 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10406e04 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406e06 je 0x10406e13 */ if (ZF_) goto L_10406e13;
  /* 10406e08 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10406e0au; SAVEALL; call_ind(c, t_); RETCHK(0x10406e0au, 0x10406e08u); LOADALL; }
  /* 10406e0a jmp 0x10406e13 */ goto L_10406e13;
L_10406e13:;
  /* 10406e13 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406e17 add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406e1b jmp 0x10406df2 */ goto L_10406df2;
L_10406e1d:;
  /* 10406e1d call 0x104056fb */ esp -= 4; M32(esp) = 0x10406e22u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10406e1du); RETCHK(0x10406e22u, 0x10406e1du); LOADALL;
  /* 10406e22 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406e0c(CPU *c) {
  NATIVE_HOOK(0x10406e0cu) REGS; LOADALL;
L_10406e0c:;
  /* 10406e0c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10406e0e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406e0f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406e10(CPU *c) {
  NATIVE_HOOK(0x10406e10u) REGS; LOADALL;
  goto L_10406e10;
L_10406df2:;
  /* 10406df2 cmp dword ptr [ebp - 0x1c], 0x1040c2b8 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x1040c2b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406df9 jae 0x10406e1d */ if (!CF_) goto L_10406e1d;
  /* 10406dfb and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406dff mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10406e02 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10406e04 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406e06 je 0x10406e13 */ if (ZF_) goto L_10406e13;
  /* 10406e08 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10406e0au; SAVEALL; call_ind(c, t_); RETCHK(0x10406e0au, 0x10406e08u); LOADALL; }
  /* 10406e0a jmp 0x10406e13 */ goto L_10406e13;
L_10406e10:;
  /* 10406e10 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
L_10406e13:;
  /* 10406e13 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406e17 add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406e1b jmp 0x10406df2 */ goto L_10406df2;
L_10406e1d:;
  /* 10406e1d call 0x104056fb */ esp -= 4; M32(esp) = 0x10406e22u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10406e1du); RETCHK(0x10406e22u, 0x10406e1du); LOADALL;
  /* 10406e22 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406e23(CPU *c) {
  NATIVE_HOOK(0x10406e23u) REGS; LOADALL;
L_10406e23:;
  /* 10406e23 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10406e25 push 0x1040b4d0 */ { u32 v_ = 0x1040b4d0u; esp -= 4; M32(esp) = v_; }
  /* 10406e2a call 0x104056c0 */ esp -= 4; M32(esp) = 0x10406e2fu; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x10406e2au); RETCHK(0x10406e2fu, 0x10406e2au); LOADALL;
  /* 10406e2f mov dword ptr [ebp - 0x1c], 0x1040c2c0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x1040c2c0u); }
L_10406e36:;
  /* 10406e36 cmp dword ptr [ebp - 0x1c], 0x1040c2c0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x1040c2c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406e3d jae 0x10406e61 */ if (!CF_) goto L_10406e61;
  /* 10406e3f and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406e43 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10406e46 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10406e48 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406e4a je 0x10406e57 */ if (ZF_) goto L_10406e57;
  /* 10406e4c call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10406e4eu; SAVEALL; call_ind(c, t_); RETCHK(0x10406e4eu, 0x10406e4cu); LOADALL; }
  /* 10406e4e jmp 0x10406e57 */ goto L_10406e57;
L_10406e57:;
  /* 10406e57 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406e5b add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406e5f jmp 0x10406e36 */ goto L_10406e36;
L_10406e61:;
  /* 10406e61 call 0x104056fb */ esp -= 4; M32(esp) = 0x10406e66u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10406e61u); RETCHK(0x10406e66u, 0x10406e61u); LOADALL;
  /* 10406e66 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406e50(CPU *c) {
  NATIVE_HOOK(0x10406e50u) REGS; LOADALL;
L_10406e50:;
  /* 10406e50 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10406e52 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406e53 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406e54(CPU *c) {
  NATIVE_HOOK(0x10406e54u) REGS; LOADALL;
  goto L_10406e54;
L_10406e36:;
  /* 10406e36 cmp dword ptr [ebp - 0x1c], 0x1040c2c0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x1040c2c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406e3d jae 0x10406e61 */ if (!CF_) goto L_10406e61;
  /* 10406e3f and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406e43 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10406e46 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10406e48 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406e4a je 0x10406e57 */ if (ZF_) goto L_10406e57;
  /* 10406e4c call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10406e4eu; SAVEALL; call_ind(c, t_); RETCHK(0x10406e4eu, 0x10406e4cu); LOADALL; }
  /* 10406e4e jmp 0x10406e57 */ goto L_10406e57;
L_10406e54:;
  /* 10406e54 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
L_10406e57:;
  /* 10406e57 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406e5b add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406e5f jmp 0x10406e36 */ goto L_10406e36;
L_10406e61:;
  /* 10406e61 call 0x104056fb */ esp -= 4; M32(esp) = 0x10406e66u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10406e61u); RETCHK(0x10406e66u, 0x10406e61u); LOADALL;
  /* 10406e66 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406e67(CPU *c) {
  NATIVE_HOOK(0x10406e67u) REGS; LOADALL;
L_10406e67:;
  /* 10406e67 cmp dword ptr [0x1040d950], 2 */ { const u32 m_ = (u32)(0x1040d950u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406e6e jne 0x10406e7d */ if (!ZF_) goto L_10406e7d;
  /* 10406e70 cmp dword ptr [0x1040d95c], 5 */ { const u32 m_ = (u32)(0x1040d95cu); u32 a_ = M32(m_), b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406e77 jb 0x10406e7d */ if (CF_) goto L_10406e7d;
  /* 10406e79 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10406e7b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406e7c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10406e7d:;
  /* 10406e7d push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10406e7f pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 10406e80 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406e81(CPU *c) {
  NATIVE_HOOK(0x10406e81u) REGS; LOADALL;
L_10406e81:;
  /* 10406e81 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10406e83 cmp dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406e87 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10406e89 sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 10406e8c push 0x1000 */ { u32 v_ = 0x1000u; esp -= 4; M32(esp) = v_; }
  /* 10406e91 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10406e92 call dword ptr [0x1040b088] */ { const u32 m_ = (u32)(0x1040b088u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406e98u; SAVEALL; call_ind(c, t_); RETCHK(0x10406e98u, 0x10406e92u); LOADALL; }
  /* 10406e98 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406e9a mov dword ptr [0x1040e03c], eax */ { const u32 m_ = (u32)(0x1040e03cu); M32(m_) = (u32)(eax); }
  /* 10406e9f je 0x10406ecb */ if (ZF_) goto L_10406ecb;
  /* 10406ea1 call 0x10406e67 */ esp -= 4; M32(esp) = 0x10406ea6u; SAVEALL; F_10406e67(c); ABI_CHECK(0x10406e67u, 0x10406ea1u); RETCHK(0x10406ea6u, 0x10406ea1u); LOADALL;
  /* 10406ea6 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406ea9 mov dword ptr [0x1040e040], eax */ { const u32 m_ = (u32)(0x1040e040u); M32(m_) = (u32)(eax); }
  /* 10406eae jne 0x10406ece */ if (!ZF_) goto L_10406ece;
  /* 10406eb0 push 0x3f8 */ { u32 v_ = 0x3f8u; esp -= 4; M32(esp) = v_; }
  /* 10406eb5 call 0x10407404 */ esp -= 4; M32(esp) = 0x10406ebau; SAVEALL; F_10407404(c); ABI_CHECK(0x10407404u, 0x10406eb5u); RETCHK(0x10406ebau, 0x10406eb5u); LOADALL;
  /* 10406eba test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406ebc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10406ebd jne 0x10406ece */ if (!ZF_) goto L_10406ece;
  /* 10406ebf push dword ptr [0x1040e03c] */ { const u32 m_ = (u32)(0x1040e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406ec5 call dword ptr [0x1040b084] */ { const u32 m_ = (u32)(0x1040b084u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406ecbu; SAVEALL; call_ind(c, t_); RETCHK(0x10406ecbu, 0x10406ec5u); LOADALL; }
L_10406ecb:;
  /* 10406ecb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10406ecd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10406ece:;
  /* 10406ece xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10406ed0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406ed1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406ed2(CPU *c) {
  NATIVE_HOOK(0x10406ed2u) REGS; LOADALL;
L_10406ed2:;
  /* 10406ed2 cmp dword ptr [0x1040e040], 3 */ { const u32 m_ = (u32)(0x1040e040u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406ed9 jne 0x10406f44 */ if (!ZF_) goto L_10406f44;
  /* 10406edb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10406edc xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10406ede cmp dword ptr [0x1040e024], ebx */ { const u32 m_ = (u32)(0x1040e024u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406ee4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10406ee5 mov ebp, dword ptr [0x1040b018] */ { const u32 m_ = (u32)(0x1040b018u); ebp = (u32)(M32(m_)); }
  /* 10406eeb jle 0x10406f32 */ if ((ZF_|LT_)) goto L_10406f32;
  /* 10406eed push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10406eee mov esi, dword ptr [0x1040e028] */ { const u32 m_ = (u32)(0x1040e028u); esi = (u32)(M32(m_)); }
  /* 10406ef4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10406ef5 mov edi, dword ptr [0x1040b000] */ { const u32 m_ = (u32)(0x1040b000u); edi = (u32)(M32(m_)); }
  /* 10406efb add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_10406efe:;
  /* 10406efe push 0x4000 */ { u32 v_ = 0x4000u; esp -= 4; M32(esp) = v_; }
  /* 10406f03 push 0x100000 */ { u32 v_ = 0x100000u; esp -= 4; M32(esp) = v_; }
  /* 10406f08 push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406f0a call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x10406f0cu; SAVEALL; call_ind(c, t_); RETCHK(0x10406f0cu, 0x10406f0au); LOADALL; }
  /* 10406f0c push 0x8000 */ { u32 v_ = 0x8000u; esp -= 4; M32(esp) = v_; }
  /* 10406f11 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10406f13 push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406f15 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x10406f17u; SAVEALL; call_ind(c, t_); RETCHK(0x10406f17u, 0x10406f15u); LOADALL; }
  /* 10406f17 push dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406f1a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10406f1c push dword ptr [0x1040e03c] */ { const u32 m_ = (u32)(0x1040e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406f22 call ebp */ { u32 t_ = ebp; esp -= 4; M32(esp) = 0x10406f24u; SAVEALL; call_ind(c, t_); RETCHK(0x10406f24u, 0x10406f22u); LOADALL; }
  /* 10406f24 add esi, 0x14 */ { u32 a_ = esi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10406f27 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406f28 cmp ebx, dword ptr [0x1040e024] */ { const u32 m_ = (u32)(0x1040e024u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406f2e jl 0x10406efe */ if (LT_) goto L_10406efe;
  /* 10406f30 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10406f31 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10406f32:;
  /* 10406f32 push dword ptr [0x1040e028] */ { const u32 m_ = (u32)(0x1040e028u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406f38 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10406f3a push dword ptr [0x1040e03c] */ { const u32 m_ = (u32)(0x1040e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406f40 call ebp */ { u32 t_ = ebp; esp -= 4; M32(esp) = 0x10406f42u; SAVEALL; call_ind(c, t_); RETCHK(0x10406f42u, 0x10406f40u); LOADALL; }
  /* 10406f42 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10406f43 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_10406f44:;
  /* 10406f44 push dword ptr [0x1040e03c] */ { const u32 m_ = (u32)(0x1040e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10406f4a call dword ptr [0x1040b084] */ { const u32 m_ = (u32)(0x1040b084u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10406f50u; SAVEALL; call_ind(c, t_); RETCHK(0x10406f50u, 0x10406f4au); LOADALL; }
  /* 10406f50 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10406f51(CPU *c) {
  NATIVE_HOOK(0x10406f51u) REGS; LOADALL;
L_10406f51:;
  /* 10406f51 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10406f52 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10406f54 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10406f55 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10406f56 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10406f57 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10406f58 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10406f5du; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10406f58u); RETCHK(0x10406f5du, 0x10406f58u); LOADALL;
  /* 10406f5d mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10406f60 mov esi, eax */ { esi = (u32)(eax); }
  /* 10406f62 mov edx, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); edx = (u32)(M32(m_)); }
  /* 10406f65 mov eax, dword ptr [0x1040d11c] */ { const u32 m_ = (u32)(0x1040d11cu); eax = (u32)(M32(m_)); }
  /* 10406f6a mov ecx, edx */ { ecx = (u32)(edx); }
L_10406f6c:;
  /* 10406f6c cmp dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406f6e je 0x10406f7d */ if (ZF_) goto L_10406f7d;
  /* 10406f70 lea ebx, [eax + eax*2] */ ebx = (u32)((u32)(eax + eax * 2u));
  /* 10406f73 add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10406f76 lea ebx, [edx + ebx*4] */ ebx = (u32)((u32)(edx + ebx * 4u));
  /* 10406f79 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406f7b jb 0x10406f6c */ if (CF_) goto L_10406f6c;
L_10406f7d:;
  /* 10406f7d lea eax, [eax + eax*2] */ eax = (u32)((u32)(eax + eax * 2u));
  /* 10406f80 lea eax, [edx + eax*4] */ eax = (u32)((u32)(edx + eax * 4u));
  /* 10406f83 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406f85 jae 0x10406f8b */ if (!CF_) goto L_10406f8b;
  /* 10406f87 cmp dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406f89 je 0x10406f8d */ if (ZF_) goto L_10406f8d;
L_10406f8b:;
  /* 10406f8b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_10406f8d:;
  /* 10406f8d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406f8f je 0x104070a7 */ if (ZF_) goto L_104070a7;
  /* 10406f95 mov ebx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10406f98 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10406f9a mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10406f9d je 0x104070a7 */ if (ZF_) goto L_104070a7;
  /* 10406fa3 cmp ebx, 5 */ { u32 a_ = ebx, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406fa6 jne 0x10406fb4 */ if (!ZF_) goto L_10406fb4;
  /* 10406fa8 and dword ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406fac xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10406fae inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10406faf jmp 0x104070b0 */ goto L_104070b0;
L_10406fb4:;
  /* 10406fb4 cmp ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406fb7 je 0x104070a2 */ if (ZF_) goto L_104070a2;
  /* 10406fbd mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 10406fc0 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10406fc3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10406fc6 mov dword ptr [esi + 0x58], eax */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(eax); }
  /* 10406fc9 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10406fcc cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406fcf jne 0x10407094 */ if (!ZF_) goto L_10407094;
  /* 10406fd5 mov edx, dword ptr [0x1040d110] */ { const u32 m_ = (u32)(0x1040d110u); edx = (u32)(M32(m_)); }
  /* 10406fdb mov eax, dword ptr [0x1040d114] */ { const u32 m_ = (u32)(0x1040d114u); eax = (u32)(M32(m_)); }
  /* 10406fe0 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10406fe2 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10406fe4 jge 0x1040700d */ if (!LT_) goto L_1040700d;
  /* 10406fe6 lea eax, [edx + edx*2] */ eax = (u32)((u32)(edx + edx * 2u));
  /* 10406fe9 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_10406fec:;
  /* 10406fec mov edi, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); edi = (u32)(M32(m_)); }
  /* 10406fef and dword ptr [eax + edi + 8], 0 */ { const u32 m_ = (u32)(eax + edi + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10406ff4 mov edi, dword ptr [0x1040d110] */ { const u32 m_ = (u32)(0x1040d110u); edi = (u32)(M32(m_)); }
  /* 10406ffa mov ebx, dword ptr [0x1040d114] */ { const u32 m_ = (u32)(0x1040d114u); ebx = (u32)(M32(m_)); }
  /* 10407000 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10407001 add ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10407003 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10407006 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407008 jl 0x10406fec */ if (LT_) goto L_10406fec;
  /* 1040700a mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_1040700d:;
  /* 1040700d mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 1040700f cmp ecx, 0xc000008e */ { u32 a_ = ecx, b_ = 0xc000008eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407015 mov edi, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); edi = (u32)(M32(m_)); }
  /* 10407018 jne 0x10407023 */ if (!ZF_) goto L_10407023;
  /* 1040701a mov dword ptr [esi + 0x5c], 0x83 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x83u); }
  /* 10407021 jmp 0x10407087 */ goto L_10407087;
L_10407023:;
  /* 10407023 cmp ecx, 0xc0000090 */ { u32 a_ = ecx, b_ = 0xc0000090u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407029 jne 0x10407034 */ if (!ZF_) goto L_10407034;
  /* 1040702b mov dword ptr [esi + 0x5c], 0x81 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x81u); }
  /* 10407032 jmp 0x10407087 */ goto L_10407087;
L_10407034:;
  /* 10407034 cmp ecx, 0xc0000091 */ { u32 a_ = ecx, b_ = 0xc0000091u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040703a jne 0x10407045 */ if (!ZF_) goto L_10407045;
  /* 1040703c mov dword ptr [esi + 0x5c], 0x84 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x84u); }
  /* 10407043 jmp 0x10407087 */ goto L_10407087;
L_10407045:;
  /* 10407045 cmp ecx, 0xc0000093 */ { u32 a_ = ecx, b_ = 0xc0000093u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040704b jne 0x10407056 */ if (!ZF_) goto L_10407056;
  /* 1040704d mov dword ptr [esi + 0x5c], 0x85 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x85u); }
  /* 10407054 jmp 0x10407087 */ goto L_10407087;
L_10407056:;
  /* 10407056 cmp ecx, 0xc000008d */ { u32 a_ = ecx, b_ = 0xc000008du; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040705c jne 0x10407067 */ if (!ZF_) goto L_10407067;
  /* 1040705e mov dword ptr [esi + 0x5c], 0x82 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x82u); }
  /* 10407065 jmp 0x10407087 */ goto L_10407087;
L_10407067:;
  /* 10407067 cmp ecx, 0xc000008f */ { u32 a_ = ecx, b_ = 0xc000008fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040706d jne 0x10407078 */ if (!ZF_) goto L_10407078;
  /* 1040706f mov dword ptr [esi + 0x5c], 0x86 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x86u); }
  /* 10407076 jmp 0x10407087 */ goto L_10407087;
L_10407078:;
  /* 10407078 cmp ecx, 0xc0000092 */ { u32 a_ = ecx, b_ = 0xc0000092u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040707e jne 0x10407087 */ if (!ZF_) goto L_10407087;
  /* 10407080 mov dword ptr [esi + 0x5c], 0x8a */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x8au); }
L_10407087:;
  /* 10407087 push dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040708a push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 1040708c call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x1040708eu; SAVEALL; call_ind(c, t_); RETCHK(0x1040708eu, 0x1040708cu); LOADALL; }
  /* 1040708e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040708f mov dword ptr [esi + 0x5c], edi */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(edi); }
  /* 10407092 jmp 0x1040709b */ goto L_1040709b;
L_10407094:;
  /* 10407094 and dword ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407098 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10407099 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x1040709bu; SAVEALL; call_ind(c, t_); RETCHK(0x1040709bu, 0x10407099u); LOADALL; }
L_1040709b:;
  /* 1040709b mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 1040709e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040709f mov dword ptr [esi + 0x58], eax */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(eax); }
L_104070a2:;
  /* 104070a2 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104070a5 jmp 0x104070b0 */ goto L_104070b0;
L_104070a7:;
  /* 104070a7 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104070aa call dword ptr [0x1040b08c] */ { const u32 m_ = (u32)(0x1040b08cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104070b0u; SAVEALL; call_ind(c, t_); RETCHK(0x104070b0u, 0x104070aau); LOADALL; }
L_104070b0:;
  /* 104070b0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104070b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104070b2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104070b3 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104070b4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104070b5(CPU *c) {
  NATIVE_HOOK(0x104070b5u) REGS; LOADALL;
L_104070b5:;
  /* 104070b5 mov eax, 0xe06d7363 */ { eax = (u32)(0xe06d7363u); }
  /* 104070ba cmp dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104070be jne 0x104070cd */ if (!ZF_) goto L_104070cd;
  /* 104070c0 push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104070c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104070c5 call 0x10406f51 */ esp -= 4; M32(esp) = 0x104070cau; SAVEALL; F_10406f51(c); ABI_CHECK(0x10406f51u, 0x104070c5u); RETCHK(0x104070cau, 0x104070c5u); LOADALL;
  /* 104070ca pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104070cb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104070cc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104070cd:;
  /* 104070cd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104070cf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104070d0(CPU *c) {
  NATIVE_HOOK(0x104070d0u) REGS; LOADALL;
L_104070d0:;
  /* 104070d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104070d1 lea ebp, [esp - 0x8c] */ ebp = (u32)((u32)(esp + 0xffffff74u));
  /* 104070d8 sub esp, 0x10c */ { u32 a_ = esp, b_ = 0x10cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104070de mov eax, dword ptr [0x1040d040] */ { const u32 m_ = (u32)(0x1040d040u); eax = (u32)(M32(m_)); }
  /* 104070e3 mov ecx, dword ptr [ebp + 0x94] */ { const u32 m_ = (u32)(ebp + 0x94u); ecx = (u32)(M32(m_)); }
  /* 104070e9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104070ea push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104070eb mov dword ptr [ebp + 0x88], eax */ { const u32 m_ = (u32)(ebp + 0x88u); M32(m_) = (u32)(eax); }
  /* 104070f1 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 104070f3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104070f4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_104070f6:;
  /* 104070f6 cmp ecx, dword ptr [eax*8 + 0x1040d120] */ { const u32 m_ = (u32)(eax * 8u + 0x1040d120u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104070fd je 0x10407105 */ if (ZF_) goto L_10407105;
  /* 104070ff inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10407100 cmp eax, 0x13 */ { u32 a_ = eax, b_ = 0x13u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407103 jb 0x104070f6 */ if (CF_) goto L_104070f6;
L_10407105:;
  /* 10407105 mov esi, eax */ { esi = (u32)(eax); }
  /* 10407107 shl esi, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 1040710a cmp ecx, dword ptr [esi + 0x1040d120] */ { const u32 m_ = (u32)(esi + 0x1040d120u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407110 jne 0x1040722b */ if (!ZF_) goto L_1040722b;
  /* 10407116 mov eax, dword ptr [0x1040d930] */ { const u32 m_ = (u32)(0x1040d930u); eax = (u32)(M32(m_)); }
  /* 1040711b cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040711e je 0x10407203 */ if (ZF_) goto L_10407203;
  /* 10407124 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407126 jne 0x10407135 */ if (!ZF_) goto L_10407135;
  /* 10407128 cmp dword ptr [0x1040d934], 1 */ { const u32 m_ = (u32)(0x1040d934u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040712f je 0x10407203 */ if (ZF_) goto L_10407203;
L_10407135:;
  /* 10407135 cmp ecx, 0xfc */ { u32 a_ = ecx, b_ = 0xfcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040713b je 0x1040722b */ if (ZF_) goto L_1040722b;
  /* 10407141 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 10407146 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 10407149 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040714a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040714b mov byte ptr [ebp + 0x84], dl */ { const u32 m_ = (u32)(ebp + 0x84u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10407151 call dword ptr [0x1040b02c] */ { const u32 m_ = (u32)(0x1040b02cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10407157u; SAVEALL; call_ind(c, t_); RETCHK(0x10407157u, 0x10407151u); LOADALL; }
  /* 10407157 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10407159 jne 0x1040716b */ if (!ZF_) goto L_1040716b;
  /* 1040715b lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 1040715e push 0x1040b1f0 */ { u32 v_ = 0x1040b1f0u; esp -= 4; M32(esp) = v_; }
  /* 10407163 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10407164 call 0x10408020 */ esp -= 4; M32(esp) = 0x10407169u; SAVEALL; F_10408020(c); ABI_CHECK(0x10408020u, 0x10407164u); RETCHK(0x10407169u, 0x10407164u); LOADALL;
  /* 10407169 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040716a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1040716b:;
  /* 1040716b lea edi, [ebp - 0x80] */ edi = (u32)((u32)(ebp + 0xffffff80u));
  /* 1040716e mov eax, edi */ { eax = (u32)(edi); }
  /* 10407170 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10407171 call 0x10408250 */ esp -= 4; M32(esp) = 0x10407176u; SAVEALL; F_10408250(c); ABI_CHECK(0x10408250u, 0x10407171u); RETCHK(0x10407176u, 0x10407171u); LOADALL;
  /* 10407176 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10407177 cmp eax, 0x3c */ { u32 a_ = eax, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040717a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040717b jbe 0x1040719f */ if ((CF_|ZF_)) goto L_1040719f;
  /* 1040717d mov eax, edi */ { eax = (u32)(edi); }
  /* 1040717f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10407180 call 0x10408250 */ esp -= 4; M32(esp) = 0x10407185u; SAVEALL; F_10408250(c); ABI_CHECK(0x10408250u, 0x10407180u); RETCHK(0x10407185u, 0x10407180u); LOADALL;
  /* 10407185 mov edi, eax */ { edi = (u32)(eax); }
  /* 10407187 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 1040718a sub eax, 0x3b */ { u32 a_ = eax, b_ = 0x3bu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1040718d push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 1040718f add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10407191 push 0x1040b1ec */ { u32 v_ = 0x1040b1ecu; esp -= 4; M32(esp) = v_; }
  /* 10407196 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10407197 call 0x10408120 */ esp -= 4; M32(esp) = 0x1040719cu; SAVEALL; F_10408120(c); ABI_CHECK(0x10408120u, 0x10407197u); RETCHK(0x1040719cu, 0x10407197u); LOADALL;
  /* 1040719c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1040719f:;
  /* 1040719f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104071a0 call 0x10408250 */ esp -= 4; M32(esp) = 0x104071a5u; SAVEALL; F_10408250(c); ABI_CHECK(0x10408250u, 0x104071a0u); RETCHK(0x104071a5u, 0x104071a0u); LOADALL;
  /* 104071a5 push dword ptr [esi + 0x1040d124] */ { const u32 m_ = (u32)(esi + 0x1040d124u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104071ab mov ebx, eax */ { ebx = (u32)(eax); }
  /* 104071ad call 0x10408250 */ esp -= 4; M32(esp) = 0x104071b2u; SAVEALL; F_10408250(c); ABI_CHECK(0x10408250u, 0x104071adu); RETCHK(0x104071b2u, 0x104071adu); LOADALL;
  /* 104071b2 lea eax, [ebx + eax + 0x1c] */ eax = (u32)((u32)(ebx + eax + 0x1cu));
  /* 104071b6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104071b7 add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 104071ba pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104071bb and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104071be call 0x10404cf0 */ esp -= 4; M32(esp) = 0x104071c3u; SAVEALL; F_10404cf0(c); ABI_CHECK(0x10404cf0u, 0x104071beu); RETCHK(0x104071c3u, 0x104071beu); LOADALL;
  /* 104071c3 mov ebx, esp */ { ebx = (u32)(esp); }
  /* 104071c5 push 0x1040b880 */ { u32 v_ = 0x1040b880u; esp -= 4; M32(esp) = v_; }
  /* 104071ca push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104071cb call 0x10408020 */ esp -= 4; M32(esp) = 0x104071d0u; SAVEALL; F_10408020(c); ABI_CHECK(0x10408020u, 0x104071cbu); RETCHK(0x104071d0u, 0x104071cbu); LOADALL;
  /* 104071d0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104071d1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104071d2 call 0x10408030 */ esp -= 4; M32(esp) = 0x104071d7u; SAVEALL; F_10408030(c); ABI_CHECK(0x10408030u, 0x104071d2u); RETCHK(0x104071d7u, 0x104071d2u); LOADALL;
  /* 104071d7 push 0x1040b1e8 */ { u32 v_ = 0x1040b1e8u; esp -= 4; M32(esp) = v_; }
  /* 104071dc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104071dd call 0x10408030 */ esp -= 4; M32(esp) = 0x104071e2u; SAVEALL; F_10408030(c); ABI_CHECK(0x10408030u, 0x104071ddu); RETCHK(0x104071e2u, 0x104071ddu); LOADALL;
  /* 104071e2 push dword ptr [esi + 0x1040d124] */ { const u32 m_ = (u32)(esi + 0x1040d124u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104071e8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104071e9 call 0x10408030 */ esp -= 4; M32(esp) = 0x104071eeu; SAVEALL; F_10408030(c); ABI_CHECK(0x10408030u, 0x104071e9u); RETCHK(0x104071eeu, 0x104071e9u); LOADALL;
  /* 104071ee push 0x12010 */ { u32 v_ = 0x12010u; esp -= 4; M32(esp) = v_; }
  /* 104071f3 push 0x1040b1b4 */ { u32 v_ = 0x1040b1b4u; esp -= 4; M32(esp) = v_; }
  /* 104071f8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104071f9 call 0x10407f27 */ esp -= 4; M32(esp) = 0x104071feu; SAVEALL; F_10407f27(c); ABI_CHECK(0x10407f27u, 0x104071f9u); RETCHK(0x104071feu, 0x104071f9u); LOADALL;
  /* 104071fe add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10407201 jmp 0x1040722b */ goto L_1040722b;
L_10407203:;
  /* 10407203 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10407204 lea eax, [ebp + 0x94] */ eax = (u32)((u32)(ebp + 0x94u));
  /* 1040720a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040720b lea esi, [esi + 0x1040d124] */ esi = (u32)((u32)(esi + 0x1040d124u));
  /* 10407211 push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10407213 call 0x10408250 */ esp -= 4; M32(esp) = 0x10407218u; SAVEALL; F_10408250(c); ABI_CHECK(0x10408250u, 0x10407213u); RETCHK(0x10407218u, 0x10407213u); LOADALL;
  /* 10407218 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10407219 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040721a push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040721c push -0xc */ { u32 v_ = 0xfffffff4u; esp -= 4; M32(esp) = v_; }
  /* 1040721e call dword ptr [0x1040b060] */ { const u32 m_ = (u32)(0x1040b060u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10407224u; SAVEALL; call_ind(c, t_); RETCHK(0x10407224u, 0x1040721eu); LOADALL; }
  /* 10407224 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10407225 call dword ptr [0x1040b090] */ { const u32 m_ = (u32)(0x1040b090u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040722bu; SAVEALL; call_ind(c, t_); RETCHK(0x1040722bu, 0x10407225u); LOADALL; }
L_1040722b:;
  /* 1040722b lea esp, [ebp - 0x8c] */ esp = (u32)((u32)(ebp + 0xffffff74u));
  /* 10407231 mov ecx, dword ptr [ebp + 0x88] */ { const u32 m_ = (u32)(ebp + 0x88u); ecx = (u32)(M32(m_)); }
  /* 10407237 call 0x10404cdd */ esp -= 4; M32(esp) = 0x1040723cu; SAVEALL; F_10404cdd(c); ABI_CHECK(0x10404cddu, 0x10407237u); RETCHK(0x1040723cu, 0x10407237u); LOADALL;
  /* 1040723c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040723d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040723e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040723f add ebp, 0x8c */ { u32 a_ = ebp, b_ = 0x8cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 10407245 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10407246 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10407247(CPU *c) {
  NATIVE_HOOK(0x10407247u) REGS; LOADALL;
L_10407247:;
  /* 10407247 mov eax, dword ptr [0x1040d930] */ { const u32 m_ = (u32)(0x1040d930u); eax = (u32)(M32(m_)); }
  /* 1040724c cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040724f je 0x1040725e */ if (ZF_) goto L_1040725e;
  /* 10407251 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10407253 jne 0x1040727f */ if (!ZF_) goto L_1040727f;
  /* 10407255 cmp dword ptr [0x1040d934], 1 */ { const u32 m_ = (u32)(0x1040d934u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040725c jne 0x1040727f */ if (!ZF_) goto L_1040727f;
L_1040725e:;
  /* 1040725e push 0xfc */ { u32 v_ = 0xfcu; esp -= 4; M32(esp) = v_; }
  /* 10407263 call 0x104070d0 */ esp -= 4; M32(esp) = 0x10407268u; SAVEALL; F_104070d0(c); ABI_CHECK(0x104070d0u, 0x10407263u); RETCHK(0x10407268u, 0x10407263u); LOADALL;
  /* 10407268 mov eax, dword ptr [0x1040daa4] */ { const u32 m_ = (u32)(0x1040daa4u); eax = (u32)(M32(m_)); }
  /* 1040726d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040726f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10407270 je 0x10407274 */ if (ZF_) goto L_10407274;
  /* 10407272 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10407274u; SAVEALL; call_ind(c, t_); RETCHK(0x10407274u, 0x10407272u); LOADALL; }
L_10407274:;
  /* 10407274 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 10407279 call 0x104070d0 */ esp -= 4; M32(esp) = 0x1040727eu; SAVEALL; F_104070d0(c); ABI_CHECK(0x104070d0u, 0x10407279u); RETCHK(0x1040727eu, 0x10407279u); LOADALL;
  /* 1040727e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1040727f:;
  /* 1040727f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10407280(CPU *c) {
  NATIVE_HOOK(0x10407280u) REGS; LOADALL;
L_10407280:;
  /* 10407280 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10407281 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10407282 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10407284 mov edi, 0x1040daa8 */ { edi = (u32)(0x1040daa8u); }
L_10407289:;
  /* 10407289 cmp dword ptr [esi*8 + 0x1040d1bc], 1 */ { const u32 m_ = (u32)(esi * 8u + 0x1040d1bcu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407291 jne 0x104072b1 */ if (!ZF_) goto L_104072b1;
  /* 10407293 lea eax, [esi*8 + 0x1040d1b8] */ eax = (u32)((u32)(esi * 8u + 0x1040d1b8u));
  /* 1040729a mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 1040729c push 0xfa0 */ { u32 v_ = 0xfa0u; esp -= 4; M32(esp) = v_; }
  /* 104072a1 push dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104072a3 add edi, 0x18 */ { u32 a_ = edi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104072a6 call 0x104091e0 */ esp -= 4; M32(esp) = 0x104072abu; SAVEALL; F_104091e0(c); ABI_CHECK(0x104091e0u, 0x104072a6u); RETCHK(0x104072abu, 0x104072a6u); LOADALL;
  /* 104072ab test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104072ad pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104072ae pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104072af je 0x104072bd */ if (ZF_) goto L_104072bd;
L_104072b1:;
  /* 104072b1 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104072b2 cmp esi, 0x24 */ { u32 a_ = esi, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104072b5 jl 0x10407289 */ if (LT_) goto L_10407289;
  /* 104072b7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104072b9 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_104072ba:;
  /* 104072ba pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104072bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104072bc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104072bd:;
  /* 104072bd and dword ptr [esi*8 + 0x1040d1b8], 0 */ { const u32 m_ = (u32)(esi * 8u + 0x1040d1b8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104072c5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104072c7 jmp 0x104072ba */ goto L_104072ba;
}

void F_1040731e(CPU *c) {
  NATIVE_HOOK(0x1040731eu) REGS; LOADALL;
L_1040731e:;
  /* 1040731e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1040731f mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10407321 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10407324 push dword ptr [eax*8 + 0x1040d1b8] */ { const u32 m_ = (u32)(eax * 8u + 0x1040d1b8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040732b call dword ptr [0x1040b094] */ { const u32 m_ = (u32)(0x1040b094u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10407331u; SAVEALL; call_ind(c, t_); RETCHK(0x10407331u, 0x1040732bu); LOADALL; }
  /* 10407331 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10407332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10407333(CPU *c) {
  NATIVE_HOOK(0x10407333u) REGS; LOADALL;
L_10407333:;
  /* 10407333 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10407335 push 0x1040b8a0 */ { u32 v_ = 0x1040b8a0u; esp -= 4; M32(esp) = v_; }
  /* 1040733a call 0x104056c0 */ esp -= 4; M32(esp) = 0x1040733fu; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x1040733au); RETCHK(0x1040733fu, 0x1040733au); LOADALL;
  /* 1040733f mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10407342 lea esi, [esi*8 + 0x1040d1b8] */ esi = (u32)((u32)(esi * 8u + 0x1040d1b8u));
  /* 10407349 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1040734b cmp dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040734d jne 0x104073c1 */ if (!ZF_) goto L_104073c1;
  /* 1040734f push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 10407351 call 0x104058bc */ esp -= 4; M32(esp) = 0x10407356u; SAVEALL; F_104058bc(c); ABI_CHECK(0x104058bcu, 0x10407351u); RETCHK(0x10407356u, 0x10407351u); LOADALL;
  /* 10407356 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10407357 mov edi, eax */ { edi = (u32)(eax); }
  /* 10407359 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040735b jne 0x1040736a */ if (!ZF_) goto L_1040736a;
  /* 1040735d call 0x104095ad */ esp -= 4; M32(esp) = 0x10407362u; SAVEALL; F_104095ad(c); ABI_CHECK(0x104095adu, 0x1040735du); RETCHK(0x10407362u, 0x1040735du); LOADALL;
  /* 10407362 mov dword ptr [eax], 0xc */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0xcu); }
  /* 10407368 jmp 0x104073a9 */ goto L_104073a9;
L_1040736a:;
  /* 1040736a push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 1040736c call 0x104073d3 */ esp -= 4; M32(esp) = 0x10407371u; SAVEALL; F_104073d3(c); ABI_CHECK(0x104073d3u, 0x1040736cu); RETCHK(0x10407371u, 0x1040736cu); LOADALL;
  /* 10407371 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10407372 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 10407375 cmp dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407377 jne 0x104073b1 */ if (!ZF_) goto L_104073b1;
  /* 10407379 push 0xfa0 */ { u32 v_ = 0xfa0u; esp -= 4; M32(esp) = v_; }
  /* 1040737e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040737f call 0x104091e0 */ esp -= 4; M32(esp) = 0x10407384u; SAVEALL; F_104091e0(c); ABI_CHECK(0x104091e0u, 0x1040737fu); RETCHK(0x10407384u, 0x1040737fu); LOADALL;
  /* 10407384 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10407385 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10407386 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10407388 jne 0x104073ad */ if (!ZF_) goto L_104073ad;
  /* 1040738a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040738b call 0x1040549e */ esp -= 4; M32(esp) = 0x10407390u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x1040738bu); RETCHK(0x10407390u, 0x1040738bu); LOADALL;
  /* 10407390 call 0x104095ad */ esp -= 4; M32(esp) = 0x10407395u; SAVEALL; F_104095ad(c); ABI_CHECK(0x104095adu, 0x10407390u); RETCHK(0x10407395u, 0x10407390u); LOADALL;
  /* 10407395 mov dword ptr [eax], 0xc */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0xcu); }
  /* 1040739b push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 1040739d lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 104073a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104073a1 call 0x1040515a */ esp -= 4; M32(esp) = 0x104073a6u; SAVEALL; F_1040515a(c); ABI_CHECK(0x1040515au, 0x104073a1u); RETCHK(0x104073a6u, 0x104073a1u); LOADALL;
  /* 104073a6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_104073a9:;
  /* 104073a9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104073ab jmp 0x104073c4 */ goto L_104073c4;
L_104073ad:;
  /* 104073ad mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 104073af jmp 0x104073b8 */ goto L_104073b8;
L_104073b1:;
  /* 104073b1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104073b2 call 0x1040549e */ esp -= 4; M32(esp) = 0x104073b7u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104073b2u); RETCHK(0x104073b7u, 0x104073b2u); LOADALL;
  /* 104073b7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_104073b8:;
  /* 104073b8 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104073bc call 0x104073ca */ esp -= 4; M32(esp) = 0x104073c1u; SAVEALL; F_104073ca(c); ABI_CHECK(0x104073cau, 0x104073bcu); RETCHK(0x104073c1u, 0x104073bcu); LOADALL;
L_104073c1:;
  /* 104073c1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104073c3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_104073c4:;
  /* 104073c4 call 0x104056fb */ esp -= 4; M32(esp) = 0x104073c9u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x104073c4u); RETCHK(0x104073c9u, 0x104073c4u); LOADALL;
  /* 104073c9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104073ca(CPU *c) {
  NATIVE_HOOK(0x104073cau) REGS; LOADALL;
L_104073ca:;
  /* 104073ca push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 104073cc call 0x1040731e */ esp -= 4; M32(esp) = 0x104073d1u; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x104073ccu); RETCHK(0x104073d1u, 0x104073ccu); LOADALL;
  /* 104073d1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104073d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104073d3(CPU *c) {
  NATIVE_HOOK(0x104073d3u) REGS; LOADALL;
L_104073d3:;
  /* 104073d3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104073d4 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 104073d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104073d9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104073da lea esi, [eax*8 + 0x1040d1b8] */ esi = (u32)((u32)(eax * 8u + 0x1040d1b8u));
  /* 104073e1 cmp dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104073e4 jne 0x104073f9 */ if (!ZF_) goto L_104073f9;
  /* 104073e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104073e7 call 0x10407333 */ esp -= 4; M32(esp) = 0x104073ecu; SAVEALL; F_10407333(c); ABI_CHECK(0x10407333u, 0x104073e7u); RETCHK(0x104073ecu, 0x104073e7u); LOADALL;
  /* 104073ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104073ee pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104073ef jne 0x104073f9 */ if (!ZF_) goto L_104073f9;
  /* 104073f1 push 0x11 */ { u32 v_ = 0x11u; esp -= 4; M32(esp) = v_; }
  /* 104073f3 call 0x1040546b */ esp -= 4; M32(esp) = 0x104073f8u; SAVEALL; F_1040546b(c); ABI_CHECK(0x1040546bu, 0x104073f3u); RETCHK(0x104073f8u, 0x104073f3u); LOADALL;
  /* 104073f8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_104073f9:;
  /* 104073f9 push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104073fb call dword ptr [0x1040b098] */ { const u32 m_ = (u32)(0x1040b098u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10407401u; SAVEALL; call_ind(c, t_); RETCHK(0x10407401u, 0x104073fbu); LOADALL; }
  /* 10407401 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10407402 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10407403 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10407404(CPU *c) {
  NATIVE_HOOK(0x10407404u) REGS; LOADALL;
L_10407404:;
  /* 10407404 push 0x140 */ { u32 v_ = 0x140u; esp -= 4; M32(esp) = v_; }
  /* 10407409 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1040740b push dword ptr [0x1040e03c] */ { const u32 m_ = (u32)(0x1040e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10407411 call dword ptr [0x1040b030] */ { const u32 m_ = (u32)(0x1040b030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10407417u; SAVEALL; call_ind(c, t_); RETCHK(0x10407417u, 0x10407411u); LOADALL; }
  /* 10407417 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10407419 mov dword ptr [0x1040e028], eax */ { const u32 m_ = (u32)(0x1040e028u); M32(m_) = (u32)(eax); }
  /* 1040741e jne 0x10407421 */ if (!ZF_) goto L_10407421;
  /* 10407420 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10407421:;
  /* 10407421 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10407425 and dword ptr [0x1040e020], 0 */ { const u32 m_ = (u32)(0x1040e020u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1040742c and dword ptr [0x1040e024], 0 */ { const u32 m_ = (u32)(0x1040e024u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407433 mov dword ptr [0x1040e030], eax */ { const u32 m_ = (u32)(0x1040e030u); M32(m_) = (u32)(eax); }
  /* 10407438 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040743a mov dword ptr [0x1040e02c], ecx */ { const u32 m_ = (u32)(0x1040e02cu); M32(m_) = (u32)(ecx); }
  /* 10407440 mov dword ptr [0x1040e034], 0x10 */ { const u32 m_ = (u32)(0x1040e034u); M32(m_) = (u32)(0x10u); }
  /* 1040744a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040744b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040744c(CPU *c) {
  NATIVE_HOOK(0x1040744cu) REGS; LOADALL;
L_1040744c:;
  /* 1040744c mov eax, dword ptr [0x1040e024] */ { const u32 m_ = (u32)(0x1040e024u); eax = (u32)(M32(m_)); }
  /* 10407451 lea ecx, [eax + eax*4] */ ecx = (u32)((u32)(eax + eax * 4u));
  /* 10407454 mov eax, dword ptr [0x1040e028] */ { const u32 m_ = (u32)(0x1040e028u); eax = (u32)(M32(m_)); }
  /* 10407459 lea ecx, [eax + ecx*4] */ ecx = (u32)((u32)(eax + ecx * 4u));
  /* 1040745c jmp 0x10407470 */ goto L_10407470;
L_1040745e:;
  /* 1040745e mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10407462 sub edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10407465 cmp edx, 0x100000 */ { u32 a_ = edx, b_ = 0x100000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040746b jb 0x10407476 */ if (CF_) goto L_10407476;
  /* 1040746d add eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_10407470:;
  /* 10407470 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407472 jb 0x1040745e */ if (CF_) goto L_1040745e;
  /* 10407474 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10407476:;
  /* 10407476 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10407477(CPU *c) {
  NATIVE_HOOK(0x10407477u) REGS; LOADALL;
L_10407477:;
  /* 10407477 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10407478 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1040747a sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040747d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10407480 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 10407483 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10407484 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10407487 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10407488 mov edi, esi */ { edi = (u32)(esi); }
  /* 1040748a sub edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040748d add esi, -4 */ { u32 a_ = esi, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10407490 shr edi, 0xf */ { u32 n_ = (15u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10407493 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10407495 imul ecx, ecx, 0x204 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x204u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 1040749b lea ecx, [ecx + eax + 0x144] */ ecx = (u32)((u32)(ecx + eax + 0x144u));
  /* 104074a2 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 104074a5 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 104074a7 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 104074a8 test cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104074ab mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 104074ae jne 0x1040778b */ if (!ZF_) goto L_1040778b;
  /* 104074b4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104074b5 lea ebx, [ecx + esi] */ ebx = (u32)((u32)(ecx + esi));
  /* 104074b8 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 104074ba mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 104074bd mov edx, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 104074c0 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 104074c3 mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 104074c6 test dl, 1 */ { u32 a_ = (edx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104074c9 mov dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 104074cc jne 0x10407542 */ if (!ZF_) goto L_10407542;
  /* 104074ce sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 104074d1 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 104074d2 cmp edx, 0x3f */ { u32 a_ = edx, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104074d5 jbe 0x104074da */ if ((CF_|ZF_)) goto L_104074da;
  /* 104074d7 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 104074d9 pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
L_104074da:;
  /* 104074da mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104074dd cmp ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104074e0 jne 0x10407524 */ if (!ZF_) goto L_10407524;
  /* 104074e2 cmp edx, 0x20 */ { u32 a_ = edx, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104074e5 mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 104074ea jae 0x10407505 */ if (!CF_) goto L_10407505;
  /* 104074ec mov ecx, edx */ { ecx = (u32)(edx); }
  /* 104074ee shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 104074f0 lea ecx, [edx + eax + 4] */ ecx = (u32)((u32)(edx + eax + 0x4u));
  /* 104074f4 not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 104074f6 and dword ptr [eax + edi*4 + 0x44], ebx */ { const u32 m_ = (u32)(eax + edi * 4u + 0x44u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104074fa dec byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 104074fc jne 0x10407521 */ if (!ZF_) goto L_10407521;
  /* 104074fe mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10407501 and dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407503 jmp 0x10407521 */ goto L_10407521;
L_10407505:;
  /* 10407505 lea ecx, [edx - 0x20] */ ecx = (u32)((u32)(edx + 0xffffffe0u));
  /* 10407508 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 1040750a lea ecx, [edx + eax + 4] */ ecx = (u32)((u32)(edx + eax + 0x4u));
  /* 1040750e not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 10407510 and dword ptr [eax + edi*4 + 0xc4], ebx */ { const u32 m_ = (u32)(eax + edi * 4u + 0xc4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407517 dec byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 10407519 jne 0x10407521 */ if (!ZF_) goto L_10407521;
  /* 1040751b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1040751e and dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10407521:;
  /* 10407521 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
L_10407524:;
  /* 10407524 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10407527 mov ebx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 1040752a mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 1040752d add ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10407530 mov dword ptr [edx + 4], ebx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 10407533 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10407536 mov ebx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10407539 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 1040753c mov dword ptr [ebx + 8], edx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(edx); }
  /* 1040753f mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
L_10407542:;
  /* 10407542 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10407544 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10407547 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10407548 cmp edx, 0x3f */ { u32 a_ = edx, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040754b jbe 0x10407550 */ if ((CF_|ZF_)) goto L_10407550;
  /* 1040754d push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 1040754f pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
L_10407550:;
  /* 10407550 mov ebx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ebx = (u32)(M32(m_)); }
  /* 10407553 and ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10407556 mov dword ptr [ebp - 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ebx); }
  /* 10407559 jne 0x104075ee */ if (!ZF_) goto L_104075ee;
  /* 1040755f sub esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10407562 mov ebx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ebx = (u32)(M32(m_)); }
  /* 10407565 sar ebx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ebx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10407568 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 1040756a mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 1040756d dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1040756e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040756f cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407571 jbe 0x10407575 */ if ((CF_|ZF_)) goto L_10407575;
  /* 10407573 mov ebx, esi */ { ebx = (u32)(esi); }
L_10407575:;
  /* 10407575 add ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10407578 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 1040757a sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 1040757d dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1040757e cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407580 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10407583 jbe 0x10407587 */ if ((CF_|ZF_)) goto L_10407587;
  /* 10407585 mov edx, esi */ { edx = (u32)(esi); }
L_10407587:;
  /* 10407587 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407589 je 0x104075e9 */ if (ZF_) goto L_104075e9;
  /* 1040758b mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1040758e mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 10407591 cmp esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407594 jne 0x104075d1 */ if (!ZF_) goto L_104075d1;
  /* 10407596 cmp ebx, 0x20 */ { u32 a_ = ebx, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407599 mov esi, 0x80000000 */ { esi = (u32)(0x80000000u); }
  /* 1040759e jae 0x104075b7 */ if (!CF_) goto L_104075b7;
  /* 104075a0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 104075a2 shr esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 104075a4 not esi */ { esi = (u32)(~esi & 0xffffffffu); }
  /* 104075a6 and dword ptr [eax + edi*4 + 0x44], esi */ { const u32 m_ = (u32)(eax + edi * 4u + 0x44u); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104075aa dec byte ptr [ebx + eax + 4] */ { const u32 m_ = (u32)(ebx + eax + 0x4u); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 104075ae jne 0x104075d1 */ if (!ZF_) goto L_104075d1;
  /* 104075b0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 104075b3 and dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104075b5 jmp 0x104075d1 */ goto L_104075d1;
L_104075b7:;
  /* 104075b7 lea ecx, [ebx - 0x20] */ ecx = (u32)((u32)(ebx + 0xffffffe0u));
  /* 104075ba shr esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 104075bc not esi */ { esi = (u32)(~esi & 0xffffffffu); }
  /* 104075be and dword ptr [eax + edi*4 + 0xc4], esi */ { const u32 m_ = (u32)(eax + edi * 4u + 0xc4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104075c5 dec byte ptr [ebx + eax + 4] */ { const u32 m_ = (u32)(ebx + eax + 0x4u); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 104075c9 jne 0x104075d1 */ if (!ZF_) goto L_104075d1;
  /* 104075cb mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 104075ce and dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_104075d1:;
  /* 104075d1 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 104075d4 mov esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); esi = (u32)(M32(m_)); }
  /* 104075d7 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104075da mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 104075dd mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 104075e0 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 104075e3 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 104075e6 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
L_104075e9:;
  /* 104075e9 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 104075ec jmp 0x104075f1 */ goto L_104075f1;
L_104075ee:;
  /* 104075ee mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_104075f1:;
  /* 104075f1 cmp dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104075f5 jne 0x104075ff */ if (!ZF_) goto L_104075ff;
  /* 104075f7 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104075f9 je 0x1040767f */ if (ZF_) goto L_1040767f;
L_104075ff:;
  /* 104075ff mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10407602 lea ecx, [ecx + edx*8] */ ecx = (u32)((u32)(ecx + edx * 8u));
  /* 10407605 mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10407608 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 1040760b mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 1040760e mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 10407611 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10407614 mov dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(esi); }
  /* 10407617 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1040761a cmp ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040761d jne 0x1040767f */ if (!ZF_) goto L_1040767f;
  /* 1040761f mov cl, byte ptr [edx + eax + 4] */ { const u32 m_ = (u32)(edx + eax + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10407623 mov byte ptr [ebp + 0xf], cl */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10407626 inc cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 10407628 cmp edx, 0x20 */ { u32 a_ = edx, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040762b mov byte ptr [edx + eax + 4], cl */ { const u32 m_ = (u32)(edx + eax + 0x4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 1040762f jae 0x10407656 */ if (!CF_) goto L_10407656;
  /* 10407631 cmp byte ptr [ebp + 0xf], 0 */ { const u32 m_ = (u32)(ebp + 0xfu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10407635 jne 0x10407645 */ if (!ZF_) goto L_10407645;
  /* 10407637 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10407639 mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 1040763e shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10407640 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10407643 or dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10407645:;
  /* 10407645 mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 1040764a mov ecx, edx */ { ecx = (u32)(edx); }
  /* 1040764c shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 1040764e lea eax, [eax + edi*4 + 0x44] */ eax = (u32)((u32)(eax + edi * 4u + 0x44u));
  /* 10407652 or dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407654 jmp 0x1040767f */ goto L_1040767f;
L_10407656:;
  /* 10407656 cmp byte ptr [ebp + 0xf], 0 */ { const u32 m_ = (u32)(ebp + 0xfu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1040765a jne 0x1040766c */ if (!ZF_) goto L_1040766c;
  /* 1040765c lea ecx, [edx - 0x20] */ ecx = (u32)((u32)(edx + 0xffffffe0u));
  /* 1040765f mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 10407664 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10407666 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10407669 or dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1040766c:;
  /* 1040766c lea ecx, [edx - 0x20] */ ecx = (u32)((u32)(edx + 0xffffffe0u));
  /* 1040766f mov edx, 0x80000000 */ { edx = (u32)(0x80000000u); }
  /* 10407674 shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10407676 lea eax, [eax + edi*4 + 0xc4] */ eax = (u32)((u32)(eax + edi * 4u + 0xc4u));
  /* 1040767d or dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1040767f:;
  /* 1040767f mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10407682 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10407684 mov dword ptr [eax + esi - 4], eax */ { const u32 m_ = (u32)(eax + esi + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10407688 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040768b dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1040768d jne 0x1040778a */ if (!ZF_) goto L_1040778a;
  /* 10407693 mov eax, dword ptr [0x1040e020] */ { const u32 m_ = (u32)(0x1040e020u); eax = (u32)(M32(m_)); }
  /* 10407698 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040769a je 0x1040777c */ if (ZF_) goto L_1040777c;
  /* 104076a0 mov ecx, dword ptr [0x1040e038] */ { const u32 m_ = (u32)(0x1040e038u); ecx = (u32)(M32(m_)); }
  /* 104076a6 mov esi, dword ptr [0x1040b000] */ { const u32 m_ = (u32)(0x1040b000u); esi = (u32)(M32(m_)); }
  /* 104076ac push 0x4000 */ { u32 v_ = 0x4000u; esp -= 4; M32(esp) = v_; }
  /* 104076b1 shl ecx, 0xf */ { u32 n_ = (15u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 104076b4 add ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104076b7 mov ebx, 0x8000 */ { ebx = (u32)(0x8000u); }
  /* 104076bc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104076bd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104076be call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x104076c0u; SAVEALL; call_ind(c, t_); RETCHK(0x104076c0u, 0x104076beu); LOADALL; }
  /* 104076c0 mov ecx, dword ptr [0x1040e038] */ { const u32 m_ = (u32)(0x1040e038u); ecx = (u32)(M32(m_)); }
  /* 104076c6 mov eax, dword ptr [0x1040e020] */ { const u32 m_ = (u32)(0x1040e020u); eax = (u32)(M32(m_)); }
  /* 104076cb mov edx, 0x80000000 */ { edx = (u32)(0x80000000u); }
  /* 104076d0 shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 104076d2 or dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104076d5 mov eax, dword ptr [0x1040e020] */ { const u32 m_ = (u32)(0x1040e020u); eax = (u32)(M32(m_)); }
  /* 104076da mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 104076dd mov ecx, dword ptr [0x1040e038] */ { const u32 m_ = (u32)(0x1040e038u); ecx = (u32)(M32(m_)); }
  /* 104076e3 and dword ptr [eax + ecx*4 + 0xc4], 0 */ { const u32 m_ = (u32)(eax + ecx * 4u + 0xc4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104076eb mov eax, dword ptr [0x1040e020] */ { const u32 m_ = (u32)(0x1040e020u); eax = (u32)(M32(m_)); }
  /* 104076f0 mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 104076f3 dec byte ptr [eax + 0x43] */ { const u32 m_ = (u32)(eax + 0x43u); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 104076f6 mov eax, dword ptr [0x1040e020] */ { const u32 m_ = (u32)(0x1040e020u); eax = (u32)(M32(m_)); }
  /* 104076fb mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 104076fe cmp byte ptr [ecx + 0x43], 0 */ { const u32 m_ = (u32)(ecx + 0x43u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10407702 jne 0x1040770d */ if (!ZF_) goto L_1040770d;
  /* 10407704 and dword ptr [eax + 4], 0xfffffffe */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407708 mov eax, dword ptr [0x1040e020] */ { const u32 m_ = (u32)(0x1040e020u); eax = (u32)(M32(m_)); }
L_1040770d:;
  /* 1040770d cmp dword ptr [eax + 8], -1 */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407711 jne 0x1040777c */ if (!ZF_) goto L_1040777c;
  /* 10407713 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10407714 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10407716 push dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10407719 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x1040771bu; SAVEALL; call_ind(c, t_); RETCHK(0x1040771bu, 0x10407719u); LOADALL; }
  /* 1040771b mov eax, dword ptr [0x1040e020] */ { const u32 m_ = (u32)(0x1040e020u); eax = (u32)(M32(m_)); }
  /* 10407720 push dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10407723 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10407725 push dword ptr [0x1040e03c] */ { const u32 m_ = (u32)(0x1040e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040772b call dword ptr [0x1040b018] */ { const u32 m_ = (u32)(0x1040b018u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10407731u; SAVEALL; call_ind(c, t_); RETCHK(0x10407731u, 0x1040772bu); LOADALL; }
  /* 10407731 mov eax, dword ptr [0x1040e024] */ { const u32 m_ = (u32)(0x1040e024u); eax = (u32)(M32(m_)); }
  /* 10407736 mov edx, dword ptr [0x1040e028] */ { const u32 m_ = (u32)(0x1040e028u); edx = (u32)(M32(m_)); }
  /* 1040773c lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 1040773f shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10407742 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10407744 mov eax, dword ptr [0x1040e020] */ { const u32 m_ = (u32)(0x1040e020u); eax = (u32)(M32(m_)); }
  /* 10407749 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1040774b lea ecx, [ecx + edx - 0x14] */ ecx = (u32)((u32)(ecx + edx + 0xffffffecu));
  /* 1040774f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10407750 lea ecx, [eax + 0x14] */ ecx = (u32)((u32)(eax + 0x14u));
  /* 10407753 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10407754 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10407755 call 0x10408670 */ esp -= 4; M32(esp) = 0x1040775au; SAVEALL; F_10408670(c); ABI_CHECK(0x10408670u, 0x10407755u); RETCHK(0x1040775au, 0x10407755u); LOADALL;
  /* 1040775a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040775d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10407760 dec dword ptr [0x1040e024] */ { const u32 m_ = (u32)(0x1040e024u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10407766 cmp eax, dword ptr [0x1040e020] */ { const u32 m_ = (u32)(0x1040e020u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040776c jbe 0x10407772 */ if ((CF_|ZF_)) goto L_10407772;
  /* 1040776e sub dword ptr [ebp + 8], 0x14 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
L_10407772:;
  /* 10407772 mov eax, dword ptr [0x1040e028] */ { const u32 m_ = (u32)(0x1040e028u); eax = (u32)(M32(m_)); }
  /* 10407777 mov dword ptr [0x1040e030], eax */ { const u32 m_ = (u32)(0x1040e030u); M32(m_) = (u32)(eax); }
L_1040777c:;
  /* 1040777c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040777f mov dword ptr [0x1040e020], eax */ { const u32 m_ = (u32)(0x1040e020u); M32(m_) = (u32)(eax); }
  /* 10407784 mov dword ptr [0x1040e038], edi */ { const u32 m_ = (u32)(0x1040e038u); M32(m_) = (u32)(edi); }
L_1040778a:;
  /* 1040778a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_1040778b:;
  /* 1040778b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040778c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040778d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040778e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040778f(CPU *c) {
  NATIVE_HOOK(0x1040778fu) REGS; LOADALL;
L_1040778f:;
  /* 1040778f mov eax, dword ptr [0x1040e024] */ { const u32 m_ = (u32)(0x1040e024u); eax = (u32)(M32(m_)); }
  /* 10407794 mov ecx, dword ptr [0x1040e034] */ { const u32 m_ = (u32)(0x1040e034u); ecx = (u32)(M32(m_)); }
  /* 1040779a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040779b xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1040779d cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040779f jne 0x104077d5 */ if (!ZF_) goto L_104077d5;
  /* 104077a1 lea eax, [ecx + ecx*4 + 0x50] */ eax = (u32)((u32)(ecx + ecx * 4u + 0x50u));
  /* 104077a5 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 104077a8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104077a9 push dword ptr [0x1040e028] */ { const u32 m_ = (u32)(0x1040e028u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104077af push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104077b0 push dword ptr [0x1040e03c] */ { const u32 m_ = (u32)(0x1040e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104077b6 call dword ptr [0x1040b0a0] */ { const u32 m_ = (u32)(0x1040b0a0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104077bcu; SAVEALL; call_ind(c, t_); RETCHK(0x104077bcu, 0x104077b6u); LOADALL; }
  /* 104077bc cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104077be jne 0x104077c4 */ if (!ZF_) goto L_104077c4;
  /* 104077c0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104077c2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104077c3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104077c4:;
  /* 104077c4 add dword ptr [0x1040e034], 0x10 */ { const u32 m_ = (u32)(0x1040e034u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 104077cb mov dword ptr [0x1040e028], eax */ { const u32 m_ = (u32)(0x1040e028u); M32(m_) = (u32)(eax); }
  /* 104077d0 mov eax, dword ptr [0x1040e024] */ { const u32 m_ = (u32)(0x1040e024u); eax = (u32)(M32(m_)); }
L_104077d5:;
  /* 104077d5 mov ecx, dword ptr [0x1040e028] */ { const u32 m_ = (u32)(0x1040e028u); ecx = (u32)(M32(m_)); }
  /* 104077db push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104077dc push 0x41c4 */ { u32 v_ = 0x41c4u; esp -= 4; M32(esp) = v_; }
  /* 104077e1 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 104077e3 push dword ptr [0x1040e03c] */ { const u32 m_ = (u32)(0x1040e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104077e9 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 104077ec lea esi, [ecx + eax*4] */ esi = (u32)((u32)(ecx + eax * 4u));
  /* 104077ef call dword ptr [0x1040b030] */ { const u32 m_ = (u32)(0x1040b030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104077f5u; SAVEALL; call_ind(c, t_); RETCHK(0x104077f5u, 0x104077efu); LOADALL; }
  /* 104077f5 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104077f7 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 104077fa jne 0x10407800 */ if (!ZF_) goto L_10407800;
L_104077fc:;
  /* 104077fc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104077fe jmp 0x10407843 */ goto L_10407843;
L_10407800:;
  /* 10407800 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10407802 push 0x2000 */ { u32 v_ = 0x2000u; esp -= 4; M32(esp) = v_; }
  /* 10407807 push 0x100000 */ { u32 v_ = 0x100000u; esp -= 4; M32(esp) = v_; }
  /* 1040780c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040780d call dword ptr [0x1040b09c] */ { const u32 m_ = (u32)(0x1040b09cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10407813u; SAVEALL; call_ind(c, t_); RETCHK(0x10407813u, 0x1040780du); LOADALL; }
  /* 10407813 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407815 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10407818 jne 0x1040782c */ if (!ZF_) goto L_1040782c;
  /* 1040781a push dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040781d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040781e push dword ptr [0x1040e03c] */ { const u32 m_ = (u32)(0x1040e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10407824 call dword ptr [0x1040b018] */ { const u32 m_ = (u32)(0x1040b018u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040782au; SAVEALL; call_ind(c, t_); RETCHK(0x1040782au, 0x10407824u); LOADALL; }
  /* 1040782a jmp 0x104077fc */ goto L_104077fc;
L_1040782c:;
  /* 1040782c or dword ptr [esi + 8], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407830 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 10407832 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 10407835 inc dword ptr [0x1040e024] */ { const u32 m_ = (u32)(0x1040e024u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040783b mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 1040783e or dword ptr [eax], 0xffffffff */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407841 mov eax, esi */ { eax = (u32)(esi); }
L_10407843:;
  /* 10407843 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10407844 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10407845 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10407846(CPU *c) {
  NATIVE_HOOK(0x10407846u) REGS; LOADALL;
L_10407846:;
  /* 10407846 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10407847 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10407849 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040784a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040784b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1040784e mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10407851 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10407852 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10407853 mov esi, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); esi = (u32)(M32(m_)); }
  /* 10407856 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10407857 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10407859 jmp 0x1040785e */ goto L_1040785e;
L_1040785b:;
  /* 1040785b shl eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 1040785d inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1040785e:;
  /* 1040785e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10407860 jge 0x1040785b */ if (!LT_) goto L_1040785b;
  /* 10407862 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10407864 imul eax, eax, 0x204 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x204u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 1040786a lea eax, [eax + esi + 0x144] */ eax = (u32)((u32)(eax + esi + 0x144u));
  /* 10407871 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10407873 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10407876 pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
L_10407877:;
  /* 10407877 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 1040787a mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 1040787d add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10407880 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10407881 jne 0x10407877 */ if (!ZF_) goto L_10407877;
  /* 10407883 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10407885 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 10407887 push 0x1000 */ { u32 v_ = 0x1000u; esp -= 4; M32(esp) = v_; }
  /* 1040788c shl edi, 0xf */ { u32 n_ = (15u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 1040788f add edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10407892 push 0x8000 */ { u32 v_ = 0x8000u; esp -= 4; M32(esp) = v_; }
  /* 10407897 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10407898 call dword ptr [0x1040b09c] */ { const u32 m_ = (u32)(0x1040b09cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040789eu; SAVEALL; call_ind(c, t_); RETCHK(0x1040789eu, 0x10407898u); LOADALL; }
  /* 1040789e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104078a0 jne 0x104078aa */ if (!ZF_) goto L_104078aa;
  /* 104078a2 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104078a5 jmp 0x10407947 */ goto L_10407947;
L_104078aa:;
  /* 104078aa lea edx, [edi + 0x7000] */ edx = (u32)((u32)(edi + 0x7000u));
  /* 104078b0 cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104078b2 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 104078b5 ja 0x104078fa */ if (!(CF_|ZF_)) goto L_104078fa;
  /* 104078b7 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 104078b9 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104078bb shr ecx, 0xc */ { u32 n_ = (12u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 104078be lea eax, [edi + 0x10] */ eax = (u32)((u32)(edi + 0x10u));
  /* 104078c1 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_104078c2:;
  /* 104078c2 or dword ptr [eax - 8], 0xffffffff */ { const u32 m_ = (u32)(eax + 0xfffffff8u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104078c6 or dword ptr [eax + 0xfec], 0xffffffff */ { const u32 m_ = (u32)(eax + 0xfecu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104078cd lea edx, [eax + 0xffc] */ edx = (u32)((u32)(eax + 0xffcu));
  /* 104078d3 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 104078d5 lea edx, [eax - 0x1004] */ edx = (u32)((u32)(eax + 0xffffeffcu));
  /* 104078db mov dword ptr [eax - 4], 0xff0 */ { const u32 m_ = (u32)(eax + 0xfffffffcu); M32(m_) = (u32)(0xff0u); }
  /* 104078e2 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 104078e5 mov dword ptr [eax + 0xfe8], 0xff0 */ { const u32 m_ = (u32)(eax + 0xfe8u); M32(m_) = (u32)(0xff0u); }
  /* 104078ef add eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 104078f4 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 104078f5 jne 0x104078c2 */ if (!ZF_) goto L_104078c2;
  /* 104078f7 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
L_104078fa:;
  /* 104078fa mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 104078fd add eax, 0x1f8 */ { u32 a_ = eax, b_ = 0x1f8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10407902 lea ecx, [edi + 0xc] */ ecx = (u32)((u32)(edi + 0xcu));
  /* 10407905 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10407908 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 1040790b lea ecx, [edx + 0xc] */ ecx = (u32)((u32)(edx + 0xcu));
  /* 1040790e mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10407911 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10407914 and dword ptr [esi + ebx*4 + 0x44], 0 */ { const u32 m_ = (u32)(esi + ebx * 4u + 0x44u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407919 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1040791b inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040791c mov dword ptr [esi + ebx*4 + 0xc4], edi */ { const u32 m_ = (u32)(esi + ebx * 4u + 0xc4u); M32(m_) = (u32)(edi); }
  /* 10407923 mov al, byte ptr [esi + 0x43] */ { const u32 m_ = (u32)(esi + 0x43u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10407926 mov cl, al */ { ecx = (ecx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 10407928 inc cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 1040792a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1040792c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040792f mov byte ptr [esi + 0x43], cl */ { const u32 m_ = (u32)(esi + 0x43u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10407932 jne 0x10407937 */ if (!ZF_) goto L_10407937;
  /* 10407934 or dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10407937:;
  /* 10407937 mov edx, 0x80000000 */ { edx = (u32)(0x80000000u); }
  /* 1040793c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 1040793e shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10407940 not edx */ { edx = (u32)(~edx & 0xffffffffu); }
  /* 10407942 and dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407945 mov eax, ebx */ { eax = (u32)(ebx); }
L_10407947:;
  /* 10407947 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10407948 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10407949 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040794a leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040794b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040794c(CPU *c) {
  NATIVE_HOOK(0x1040794cu) REGS; LOADALL;
L_1040794c:;
  /* 1040794c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1040794d mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1040794f sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10407952 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10407955 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 10407958 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10407959 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040795a mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 1040795d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040795e mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10407961 mov edx, edi */ { edx = (u32)(edi); }
  /* 10407963 sub edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10407966 add esi, 0x17 */ { u32 a_ = esi, b_ = 0x17u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10407969 shr edx, 0xf */ { u32 n_ = (15u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 1040796c mov ecx, edx */ { ecx = (u32)(edx); }
  /* 1040796e imul ecx, ecx, 0x204 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x204u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10407974 lea ecx, [ecx + eax + 0x144] */ ecx = (u32)((u32)(ecx + eax + 0x144u));
  /* 1040797b mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 1040797e mov ecx, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10407981 and esi, 0xfffffff0 */ { u32 a_ = esi, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10407984 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10407985 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407987 lea edi, [ecx + edi - 4] */ edi = (u32)((u32)(ecx + edi + 0xfffffffcu));
  /* 1040798b mov ebx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (u32)(M32(m_)); }
  /* 1040798d mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 10407990 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 10407993 jle 0x10407aee */ if ((ZF_|LT_)) goto L_10407aee;
  /* 10407999 test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1040799c jne 0x10407ae7 */ if (!ZF_) goto L_10407ae7;
  /* 104079a2 add ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 104079a4 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104079a6 jg 0x10407ae7 */ if (!(ZF_|LT_)) goto L_10407ae7;
  /* 104079ac mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 104079af sar ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 104079b2 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 104079b3 cmp ecx, 0x3f */ { u32 a_ = ecx, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104079b6 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 104079b9 jbe 0x104079c1 */ if ((CF_|ZF_)) goto L_104079c1;
  /* 104079bb push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 104079bd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104079be mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
L_104079c1:;
  /* 104079c1 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 104079c4 cmp ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104079c7 jne 0x10407a0c */ if (!ZF_) goto L_10407a0c;
  /* 104079c9 cmp ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104079cc mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 104079d1 jae 0x104079ed */ if (!CF_) goto L_104079ed;
  /* 104079d3 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 104079d5 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 104079d8 lea ecx, [ecx + eax + 4] */ ecx = (u32)((u32)(ecx + eax + 0x4u));
  /* 104079dc not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 104079de and dword ptr [eax + edx*4 + 0x44], ebx */ { const u32 m_ = (u32)(eax + edx * 4u + 0x44u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104079e2 dec byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 104079e4 jne 0x10407a0c */ if (!ZF_) goto L_10407a0c;
  /* 104079e6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 104079e9 and dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104079eb jmp 0x10407a0c */ goto L_10407a0c;
L_104079ed:;
  /* 104079ed add ecx, -0x20 */ { u32 a_ = ecx, b_ = 0xffffffe0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104079f0 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 104079f2 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 104079f5 lea ecx, [ecx + eax + 4] */ ecx = (u32)((u32)(ecx + eax + 0x4u));
  /* 104079f9 not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 104079fb and dword ptr [eax + edx*4 + 0xc4], ebx */ { const u32 m_ = (u32)(eax + edx * 4u + 0xc4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407a02 dec byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 10407a04 jne 0x10407a0c */ if (!ZF_) goto L_10407a0c;
  /* 10407a06 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10407a09 and dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10407a0c:;
  /* 10407a0c mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10407a0f mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10407a12 mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 10407a15 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10407a18 mov edi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edi = (u32)(M32(m_)); }
  /* 10407a1b mov dword ptr [ecx + 8], edi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edi); }
  /* 10407a1e mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10407a21 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10407a23 add dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407a26 cmp dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407a2a jle 0x10407ad5 */ if ((ZF_|LT_)) goto L_10407ad5;
  /* 10407a30 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 10407a33 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10407a36 sar edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10407a39 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10407a3a cmp edi, 0x3f */ { u32 a_ = edi, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407a3d lea ecx, [ecx + esi - 4] */ ecx = (u32)((u32)(ecx + esi + 0xfffffffcu));
  /* 10407a41 jbe 0x10407a46 */ if ((CF_|ZF_)) goto L_10407a46;
  /* 10407a43 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10407a45 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_10407a46:;
  /* 10407a46 mov ebx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ebx = (u32)(M32(m_)); }
  /* 10407a49 lea ebx, [ebx + edi*8] */ ebx = (u32)((u32)(ebx + edi * 8u));
  /* 10407a4c mov dword ptr [ebp + 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 10407a4f mov ebx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10407a52 mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 10407a55 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 10407a58 mov dword ptr [ecx + 8], ebx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10407a5b mov dword ptr [ebx + 4], ecx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10407a5e mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10407a61 mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10407a64 mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10407a67 cmp ebx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407a6a jne 0x10407ac3 */ if (!ZF_) goto L_10407ac3;
  /* 10407a6c mov cl, byte ptr [edi + eax + 4] */ { const u32 m_ = (u32)(edi + eax + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10407a70 mov byte ptr [ebp + 0x13], cl */ { const u32 m_ = (u32)(ebp + 0x13u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10407a73 inc cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 10407a75 cmp edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407a78 mov byte ptr [edi + eax + 4], cl */ { const u32 m_ = (u32)(edi + eax + 0x4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10407a7c jae 0x10407a9a */ if (!CF_) goto L_10407a9a;
  /* 10407a7e cmp byte ptr [ebp + 0x13], 0 */ { const u32 m_ = (u32)(ebp + 0x13u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10407a82 jne 0x10407a92 */ if (!ZF_) goto L_10407a92;
  /* 10407a84 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10407a86 mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 10407a8b shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10407a8d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10407a90 or dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10407a92:;
  /* 10407a92 lea eax, [eax + edx*4 + 0x44] */ eax = (u32)((u32)(eax + edx * 4u + 0x44u));
  /* 10407a96 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10407a98 jmp 0x10407aba */ goto L_10407aba;
L_10407a9a:;
  /* 10407a9a cmp byte ptr [ebp + 0x13], 0 */ { const u32 m_ = (u32)(ebp + 0x13u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10407a9e jne 0x10407ab0 */ if (!ZF_) goto L_10407ab0;
  /* 10407aa0 lea ecx, [edi - 0x20] */ ecx = (u32)((u32)(edi + 0xffffffe0u));
  /* 10407aa3 mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 10407aa8 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10407aaa mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10407aad or dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10407ab0:;
  /* 10407ab0 lea eax, [eax + edx*4 + 0xc4] */ eax = (u32)((u32)(eax + edx * 4u + 0xc4u));
  /* 10407ab7 lea ecx, [edi - 0x20] */ ecx = (u32)((u32)(edi + 0xffffffe0u));
L_10407aba:;
  /* 10407aba mov edx, 0x80000000 */ { edx = (u32)(0x80000000u); }
  /* 10407abf shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10407ac1 or dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10407ac3:;
  /* 10407ac3 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10407ac6 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10407ac9 lea eax, [edx + esi - 4] */ eax = (u32)((u32)(edx + esi + 0xfffffffcu));
  /* 10407acd mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10407acf mov dword ptr [ecx + eax - 4], ecx */ { const u32 m_ = (u32)(ecx + eax + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10407ad3 jmp 0x10407ad8 */ goto L_10407ad8;
L_10407ad5:;
  /* 10407ad5 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
L_10407ad8:;
  /* 10407ad8 lea eax, [esi + 1] */ eax = (u32)((u32)(esi + 0x1u));
  /* 10407adb mov dword ptr [edx - 4], eax */ { const u32 m_ = (u32)(edx + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10407ade mov dword ptr [edx + esi - 8], eax */ { const u32 m_ = (u32)(edx + esi + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10407ae2 jmp 0x10407c23 */ goto L_10407c23;
L_10407ae7:;
  /* 10407ae7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10407ae9 jmp 0x10407c26 */ goto L_10407c26;
L_10407aee:;
  /* 10407aee jge 0x10407c23 */ if (!LT_) goto L_10407c23;
  /* 10407af4 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10407af7 sub dword ptr [ebp + 0x10], esi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407afa lea ecx, [esi + 1] */ ecx = (u32)((u32)(esi + 0x1u));
  /* 10407afd mov dword ptr [ebx - 4], ecx */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10407b00 lea ebx, [ebx + esi - 4] */ ebx = (u32)((u32)(ebx + esi + 0xfffffffcu));
  /* 10407b04 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10407b07 sar esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10407b0a dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10407b0b cmp esi, 0x3f */ { u32 a_ = esi, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407b0e mov dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 10407b11 mov dword ptr [ebx - 4], ecx */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10407b14 jbe 0x10407b19 */ if ((CF_|ZF_)) goto L_10407b19;
  /* 10407b16 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10407b18 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10407b19:;
  /* 10407b19 test byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10407b1d jne 0x10407ba3 */ if (!ZF_) goto L_10407ba3;
  /* 10407b23 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 10407b26 sar esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10407b29 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10407b2a cmp esi, 0x3f */ { u32 a_ = esi, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407b2d jbe 0x10407b32 */ if ((CF_|ZF_)) goto L_10407b32;
  /* 10407b2f push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10407b31 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10407b32:;
  /* 10407b32 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10407b35 cmp ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407b38 jne 0x10407b7c */ if (!ZF_) goto L_10407b7c;
  /* 10407b3a cmp esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407b3d mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 10407b42 jae 0x10407b5d */ if (!CF_) goto L_10407b5d;
  /* 10407b44 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10407b46 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10407b48 lea esi, [esi + eax + 4] */ esi = (u32)((u32)(esi + eax + 0x4u));
  /* 10407b4c not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 10407b4e and dword ptr [eax + edx*4 + 0x44], ebx */ { const u32 m_ = (u32)(eax + edx * 4u + 0x44u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407b52 dec byte ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 10407b54 jne 0x10407b79 */ if (!ZF_) goto L_10407b79;
  /* 10407b56 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10407b59 and dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407b5b jmp 0x10407b79 */ goto L_10407b79;
L_10407b5d:;
  /* 10407b5d lea ecx, [esi - 0x20] */ ecx = (u32)((u32)(esi + 0xffffffe0u));
  /* 10407b60 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10407b62 lea ecx, [esi + eax + 4] */ ecx = (u32)((u32)(esi + eax + 0x4u));
  /* 10407b66 not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 10407b68 and dword ptr [eax + edx*4 + 0xc4], ebx */ { const u32 m_ = (u32)(eax + edx * 4u + 0xc4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407b6f dec byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 10407b71 jne 0x10407b79 */ if (!ZF_) goto L_10407b79;
  /* 10407b73 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10407b76 and dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10407b79:;
  /* 10407b79 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
L_10407b7c:;
  /* 10407b7c mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10407b7f mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 10407b82 mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 10407b85 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 10407b88 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10407b8b mov dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(esi); }
  /* 10407b8e mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10407b91 add esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10407b94 mov dword ptr [ebp + 0x10], esi */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esi); }
  /* 10407b97 sar esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10407b9a dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10407b9b cmp esi, 0x3f */ { u32 a_ = esi, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407b9e jbe 0x10407ba3 */ if ((CF_|ZF_)) goto L_10407ba3;
  /* 10407ba0 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10407ba2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10407ba3:;
  /* 10407ba3 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10407ba6 lea ecx, [ecx + esi*8] */ ecx = (u32)((u32)(ecx + esi * 8u));
  /* 10407ba9 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 10407bac mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10407baf mov dword ptr [ebx + 4], edi */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(edi); }
  /* 10407bb2 mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 10407bb5 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10407bb8 mov dword ptr [ecx + 8], ebx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10407bbb mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10407bbe cmp ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407bc1 jne 0x10407c1a */ if (!ZF_) goto L_10407c1a;
  /* 10407bc3 mov cl, byte ptr [esi + eax + 4] */ { const u32 m_ = (u32)(esi + eax + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10407bc7 mov byte ptr [ebp + 0xf], cl */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10407bca inc cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 10407bcc cmp esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407bcf mov byte ptr [esi + eax + 4], cl */ { const u32 m_ = (u32)(esi + eax + 0x4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10407bd3 jae 0x10407bf1 */ if (!CF_) goto L_10407bf1;
  /* 10407bd5 cmp byte ptr [ebp + 0xf], 0 */ { const u32 m_ = (u32)(ebp + 0xfu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10407bd9 jne 0x10407be9 */ if (!ZF_) goto L_10407be9;
  /* 10407bdb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10407bdd mov edi, 0x80000000 */ { edi = (u32)(0x80000000u); }
  /* 10407be2 shr edi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10407be4 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10407be7 or dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10407be9:;
  /* 10407be9 lea eax, [eax + edx*4 + 0x44] */ eax = (u32)((u32)(eax + edx * 4u + 0x44u));
  /* 10407bed mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10407bef jmp 0x10407c11 */ goto L_10407c11;
L_10407bf1:;
  /* 10407bf1 cmp byte ptr [ebp + 0xf], 0 */ { const u32 m_ = (u32)(ebp + 0xfu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10407bf5 jne 0x10407c07 */ if (!ZF_) goto L_10407c07;
  /* 10407bf7 lea ecx, [esi - 0x20] */ ecx = (u32)((u32)(esi + 0xffffffe0u));
  /* 10407bfa mov edi, 0x80000000 */ { edi = (u32)(0x80000000u); }
  /* 10407bff shr edi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10407c01 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10407c04 or dword ptr [ecx + 4], edi */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10407c07:;
  /* 10407c07 lea eax, [eax + edx*4 + 0xc4] */ eax = (u32)((u32)(eax + edx * 4u + 0xc4u));
  /* 10407c0e lea ecx, [esi - 0x20] */ ecx = (u32)((u32)(esi + 0xffffffe0u));
L_10407c11:;
  /* 10407c11 mov edx, 0x80000000 */ { edx = (u32)(0x80000000u); }
  /* 10407c16 shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10407c18 or dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10407c1a:;
  /* 10407c1a mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10407c1d mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 10407c1f mov dword ptr [eax + ebx - 4], eax */ { const u32 m_ = (u32)(eax + ebx + 0xfffffffcu); M32(m_) = (u32)(eax); }
L_10407c23:;
  /* 10407c23 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10407c25 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10407c26:;
  /* 10407c26 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10407c27 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10407c28 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10407c29 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10407c2a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10407c2b(CPU *c) {
  NATIVE_HOOK(0x10407c2bu) REGS; LOADALL;
L_10407c2b:;
  /* 10407c2b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10407c2c mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10407c2e sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10407c31 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10407c34 mov eax, dword ptr [0x1040e024] */ { const u32 m_ = (u32)(0x1040e024u); eax = (u32)(M32(m_)); }
  /* 10407c39 mov edx, dword ptr [0x1040e028] */ { const u32 m_ = (u32)(0x1040e028u); edx = (u32)(M32(m_)); }
  /* 10407c3f add ecx, 0x17 */ { u32 a_ = ecx, b_ = 0x17u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10407c42 and ecx, 0xfffffff0 */ { u32 a_ = ecx, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10407c45 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10407c46 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 10407c49 sar ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10407c4c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10407c4d lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 10407c50 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10407c51 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10407c52 cmp ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407c55 lea edi, [edx + eax*4] */ edi = (u32)((u32)(edx + eax * 4u));
  /* 10407c58 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 10407c5b jge 0x10407c68 */ if (!LT_) goto L_10407c68;
  /* 10407c5d or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10407c60 shr esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10407c62 or dword ptr [ebp - 8], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407c66 jmp 0x10407c75 */ goto L_10407c75;
L_10407c68:;
  /* 10407c68 add ecx, -0x20 */ { u32 a_ = ecx, b_ = 0xffffffe0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10407c6b or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10407c6e xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10407c70 shr eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10407c72 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10407c75:;
  /* 10407c75 mov eax, dword ptr [0x1040e030] */ { const u32 m_ = (u32)(0x1040e030u); eax = (u32)(M32(m_)); }
  /* 10407c7a mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10407c7c mov dword ptr [ebp - 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(esi); }
  /* 10407c7f cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407c81 jmp 0x10407c97 */ goto L_10407c97;
L_10407c83:;
  /* 10407c83 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10407c86 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 10407c88 and ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10407c8b and edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10407c8d or ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10407c8f jne 0x10407c9c */ if (!ZF_) goto L_10407c9c;
  /* 10407c91 add ebx, 0x14 */ { u32 a_ = ebx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10407c94 cmp ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
L_10407c97:;
  /* 10407c97 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10407c9a jb 0x10407c83 */ if (CF_) goto L_10407c83;
L_10407c9c:;
  /* 10407c9c cmp ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407c9f jne 0x10407cc5 */ if (!ZF_) goto L_10407cc5;
  /* 10407ca1 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 10407ca3 jmp 0x10407cb6 */ goto L_10407cb6;
L_10407ca5:;
  /* 10407ca5 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10407ca8 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 10407caa and ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10407cad and edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10407caf or ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10407cb1 jne 0x10407cbd */ if (!ZF_) goto L_10407cbd;
  /* 10407cb3 add ebx, 0x14 */ { u32 a_ = ebx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
L_10407cb6:;
  /* 10407cb6 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407cb8 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10407cbb jb 0x10407ca5 */ if (CF_) goto L_10407ca5;
L_10407cbd:;
  /* 10407cbd cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407cbf je 0x10407d59 */ if (ZF_) goto L_10407d59;
L_10407cc5:;
  /* 10407cc5 mov dword ptr [0x1040e030], ebx */ { const u32 m_ = (u32)(0x1040e030u); M32(m_) = (u32)(ebx); }
  /* 10407ccb mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 10407cce mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10407cd0 cmp edx, -1 */ { u32 a_ = edx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407cd3 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 10407cd6 je 0x10407cec */ if (ZF_) goto L_10407cec;
  /* 10407cd8 mov ecx, dword ptr [eax + edx*4 + 0xc4] */ { const u32 m_ = (u32)(eax + edx * 4u + 0xc4u); ecx = (u32)(M32(m_)); }
  /* 10407cdf mov edi, dword ptr [eax + edx*4 + 0x44] */ { const u32 m_ = (u32)(eax + edx * 4u + 0x44u); edi = (u32)(M32(m_)); }
  /* 10407ce3 and ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10407ce6 and edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10407ce8 or ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10407cea jne 0x10407d22 */ if (!ZF_) goto L_10407d22;
L_10407cec:;
  /* 10407cec mov edx, dword ptr [eax + 0xc4] */ { const u32 m_ = (u32)(eax + 0xc4u); edx = (u32)(M32(m_)); }
  /* 10407cf2 and edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = edx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10407cf5 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407cf9 lea ecx, [eax + 0x44] */ ecx = (u32)((u32)(eax + 0x44u));
  /* 10407cfc mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 10407cfe and esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10407d01 or edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10407d03 mov esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); esi = (u32)(M32(m_)); }
  /* 10407d06 jne 0x10407d1f */ if (!ZF_) goto L_10407d1f;
L_10407d08:;
  /* 10407d08 mov edx, dword ptr [ecx + 0x84] */ { const u32 m_ = (u32)(ecx + 0x84u); edx = (u32)(M32(m_)); }
  /* 10407d0e and edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = edx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10407d11 inc dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10407d14 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10407d17 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 10407d19 and edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10407d1b or edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10407d1d je 0x10407d08 */ if (ZF_) goto L_10407d08;
L_10407d1f:;
  /* 10407d1f mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
L_10407d22:;
  /* 10407d22 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10407d24 imul ecx, ecx, 0x204 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x204u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10407d2a lea ecx, [ecx + eax + 0x144] */ ecx = (u32)((u32)(ecx + eax + 0x144u));
  /* 10407d31 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 10407d34 mov ecx, dword ptr [eax + edx*4 + 0x44] */ { const u32 m_ = (u32)(eax + edx * 4u + 0x44u); ecx = (u32)(M32(m_)); }
  /* 10407d38 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10407d3a and ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10407d3c jne 0x10407dab */ if (!ZF_) goto L_10407dab;
  /* 10407d3e mov ecx, dword ptr [eax + edx*4 + 0xc4] */ { const u32 m_ = (u32)(eax + edx * 4u + 0xc4u); ecx = (u32)(M32(m_)); }
  /* 10407d45 and ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10407d48 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10407d4a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10407d4b jmp 0x10407dab */ goto L_10407dab;
L_10407d4d:;
  /* 10407d4d cmp dword ptr [ebx + 8], 0 */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407d51 jne 0x10407d5e */ if (!ZF_) goto L_10407d5e;
  /* 10407d53 add ebx, 0x14 */ { u32 a_ = ebx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10407d56 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
L_10407d59:;
  /* 10407d59 cmp ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407d5c jb 0x10407d4d */ if (CF_) goto L_10407d4d;
L_10407d5e:;
  /* 10407d5e cmp ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407d61 jne 0x10407d89 */ if (!ZF_) goto L_10407d89;
  /* 10407d63 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 10407d65 jmp 0x10407d70 */ goto L_10407d70;
L_10407d67:;
  /* 10407d67 cmp dword ptr [ebx + 8], 0 */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407d6b jne 0x10407d77 */ if (!ZF_) goto L_10407d77;
  /* 10407d6d add ebx, 0x14 */ { u32 a_ = ebx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
L_10407d70:;
  /* 10407d70 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407d72 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10407d75 jb 0x10407d67 */ if (CF_) goto L_10407d67;
L_10407d77:;
  /* 10407d77 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407d79 jne 0x10407d89 */ if (!ZF_) goto L_10407d89;
  /* 10407d7b call 0x1040778f */ esp -= 4; M32(esp) = 0x10407d80u; SAVEALL; F_1040778f(c); ABI_CHECK(0x1040778fu, 0x10407d7bu); RETCHK(0x10407d80u, 0x10407d7bu); LOADALL;
  /* 10407d80 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10407d82 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10407d84 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10407d87 je 0x10407da1 */ if (ZF_) goto L_10407da1;
L_10407d89:;
  /* 10407d89 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10407d8a call 0x10407846 */ esp -= 4; M32(esp) = 0x10407d8fu; SAVEALL; F_10407846(c); ABI_CHECK(0x10407846u, 0x10407d8au); RETCHK(0x10407d8fu, 0x10407d8au); LOADALL;
  /* 10407d8f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10407d90 mov ecx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10407d93 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 10407d95 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 10407d98 cmp dword ptr [eax], -1 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407d9b jne 0x10407cc5 */ if (!ZF_) goto L_10407cc5;
L_10407da1:;
  /* 10407da1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10407da3 jmp 0x10407f22 */ goto L_10407f22;
L_10407da8:;
  /* 10407da8 shl ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10407daa inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10407dab:;
  /* 10407dab test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10407dad jge 0x10407da8 */ if (!LT_) goto L_10407da8;
  /* 10407daf mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10407db2 mov edx, dword ptr [ecx + edi*8 + 4] */ { const u32 m_ = (u32)(ecx + edi * 8u + 0x4u); edx = (u32)(M32(m_)); }
  /* 10407db6 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 10407db8 sub ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10407dbb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10407dbd sar esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10407dc0 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10407dc1 cmp esi, 0x3f */ { u32 a_ = esi, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407dc4 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 10407dc7 jle 0x10407dcc */ if ((ZF_|LT_)) goto L_10407dcc;
  /* 10407dc9 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10407dcb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10407dcc:;
  /* 10407dcc cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407dce je 0x10407ed5 */ if (ZF_) goto L_10407ed5;
  /* 10407dd4 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10407dd7 cmp ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407dda jne 0x10407e38 */ if (!ZF_) goto L_10407e38;
  /* 10407ddc cmp edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407ddf mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 10407de4 jge 0x10407e0c */ if (!LT_) goto L_10407e0c;
  /* 10407de6 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10407de8 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10407dea mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10407ded lea edi, [eax + edi + 4] */ edi = (u32)((u32)(eax + edi + 0x4u));
  /* 10407df1 not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 10407df3 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 10407df6 and ebx, dword ptr [eax + ecx*4 + 0x44] */ { const u32 m_ = (u32)(eax + ecx * 4u + 0x44u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10407dfa mov dword ptr [eax + ecx*4 + 0x44], ebx */ { const u32 m_ = (u32)(eax + ecx * 4u + 0x44u); M32(m_) = (u32)(ebx); }
  /* 10407dfe dec byte ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 10407e00 jne 0x10407e35 */ if (!ZF_) goto L_10407e35;
  /* 10407e02 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 10407e05 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10407e08 and dword ptr [ebx], ecx */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407e0a jmp 0x10407e38 */ goto L_10407e38;
L_10407e0c:;
  /* 10407e0c lea ecx, [edi - 0x20] */ ecx = (u32)((u32)(edi + 0xffffffe0u));
  /* 10407e0f shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10407e11 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10407e14 lea ecx, [eax + ecx*4 + 0xc4] */ ecx = (u32)((u32)(eax + ecx * 4u + 0xc4u));
  /* 10407e1b lea edi, [eax + edi + 4] */ edi = (u32)((u32)(eax + edi + 0x4u));
  /* 10407e1f not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 10407e21 and dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407e23 dec byte ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 10407e25 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 10407e28 jne 0x10407e35 */ if (!ZF_) goto L_10407e35;
  /* 10407e2a mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10407e2d mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 10407e30 and dword ptr [ebx + 4], ecx */ { const u32 m_ = (u32)(ebx + 0x4u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407e33 jmp 0x10407e38 */ goto L_10407e38;
L_10407e35:;
  /* 10407e35 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_10407e38:;
  /* 10407e38 cmp dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407e3c mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10407e3f mov edi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (u32)(M32(m_)); }
  /* 10407e42 mov dword ptr [ecx + 4], edi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edi); }
  /* 10407e45 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10407e48 mov edi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edi = (u32)(M32(m_)); }
  /* 10407e4b mov dword ptr [ecx + 8], edi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edi); }
  /* 10407e4e je 0x10407ee1 */ if (ZF_) goto L_10407ee1;
  /* 10407e54 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10407e57 lea ecx, [ecx + esi*8] */ ecx = (u32)((u32)(ecx + esi * 8u));
  /* 10407e5a mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 10407e5d mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10407e60 mov dword ptr [edx + 4], edi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(edi); }
  /* 10407e63 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 10407e66 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10407e69 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 10407e6c mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10407e6f cmp ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407e72 jne 0x10407ed2 */ if (!ZF_) goto L_10407ed2;
  /* 10407e74 mov cl, byte ptr [esi + eax + 4] */ { const u32 m_ = (u32)(esi + eax + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10407e78 mov byte ptr [ebp + 0xb], cl */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10407e7b inc cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 10407e7d cmp esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407e80 mov byte ptr [esi + eax + 4], cl */ { const u32 m_ = (u32)(esi + eax + 0x4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10407e84 jge 0x10407ea9 */ if (!LT_) goto L_10407ea9;
  /* 10407e86 cmp byte ptr [ebp + 0xb], 0 */ { const u32 m_ = (u32)(ebp + 0xbu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10407e8a jne 0x10407e97 */ if (!ZF_) goto L_10407e97;
  /* 10407e8c mov edi, 0x80000000 */ { edi = (u32)(0x80000000u); }
  /* 10407e91 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10407e93 shr edi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10407e95 or dword ptr [ebx], edi */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10407e97:;
  /* 10407e97 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10407e99 mov edi, 0x80000000 */ { edi = (u32)(0x80000000u); }
  /* 10407e9e shr edi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10407ea0 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10407ea3 or dword ptr [eax + ecx*4 + 0x44], edi */ { const u32 m_ = (u32)(eax + ecx * 4u + 0x44u); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10407ea7 jmp 0x10407ed2 */ goto L_10407ed2;
L_10407ea9:;
  /* 10407ea9 cmp byte ptr [ebp + 0xb], 0 */ { const u32 m_ = (u32)(ebp + 0xbu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10407ead jne 0x10407ebc */ if (!ZF_) goto L_10407ebc;
  /* 10407eaf lea ecx, [esi - 0x20] */ ecx = (u32)((u32)(esi + 0xffffffe0u));
  /* 10407eb2 mov edi, 0x80000000 */ { edi = (u32)(0x80000000u); }
  /* 10407eb7 shr edi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10407eb9 or dword ptr [ebx + 4], edi */ { const u32 m_ = (u32)(ebx + 0x4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10407ebc:;
  /* 10407ebc mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10407ebf lea edi, [eax + ecx*4 + 0xc4] */ edi = (u32)((u32)(eax + ecx * 4u + 0xc4u));
  /* 10407ec6 lea ecx, [esi - 0x20] */ ecx = (u32)((u32)(esi + 0xffffffe0u));
  /* 10407ec9 mov esi, 0x80000000 */ { esi = (u32)(0x80000000u); }
  /* 10407ece shr esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10407ed0 or dword ptr [edi], esi */ { const u32 m_ = (u32)(edi); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10407ed2:;
  /* 10407ed2 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
L_10407ed5:;
  /* 10407ed5 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10407ed7 je 0x10407ee4 */ if (ZF_) goto L_10407ee4;
  /* 10407ed9 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 10407edb mov dword ptr [ecx + edx - 4], ecx */ { const u32 m_ = (u32)(ecx + edx + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10407edf jmp 0x10407ee4 */ goto L_10407ee4;
L_10407ee1:;
  /* 10407ee1 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
L_10407ee4:;
  /* 10407ee4 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 10407ee7 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10407ee9 lea ecx, [esi + 1] */ ecx = (u32)((u32)(esi + 0x1u));
  /* 10407eec mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 10407eee mov dword ptr [edx + esi - 4], ecx */ { const u32 m_ = (u32)(edx + esi + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10407ef2 mov esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); esi = (u32)(M32(m_)); }
  /* 10407ef5 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 10407ef7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10407ef9 lea edi, [ecx + 1] */ edi = (u32)((u32)(ecx + 0x1u));
  /* 10407efc mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 10407efe jne 0x10407f1a */ if (!ZF_) goto L_10407f1a;
  /* 10407f00 cmp ebx, dword ptr [0x1040e020] */ { const u32 m_ = (u32)(0x1040e020u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407f06 jne 0x10407f1a */ if (!ZF_) goto L_10407f1a;
  /* 10407f08 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10407f0b cmp ecx, dword ptr [0x1040e038] */ { const u32 m_ = (u32)(0x1040e038u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407f11 jne 0x10407f1a */ if (!ZF_) goto L_10407f1a;
  /* 10407f13 and dword ptr [0x1040e020], 0 */ { const u32 m_ = (u32)(0x1040e020u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10407f1a:;
  /* 10407f1a mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10407f1d mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10407f1f lea eax, [edx + 4] */ eax = (u32)((u32)(edx + 0x4u));
L_10407f22:;
  /* 10407f22 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10407f23 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10407f24 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10407f25 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10407f26 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10407f27(CPU *c) {
  NATIVE_HOOK(0x10407f27u) REGS; LOADALL;
L_10407f27:;
  /* 10407f27 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10407f28 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10407f2a sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10407f2d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10407f2e xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10407f30 cmp dword ptr [0x1040dbf8], ebx */ { const u32 m_ = (u32)(0x1040dbf8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407f36 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10407f37 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10407f38 jne 0x10407fa7 */ if (!ZF_) goto L_10407fa7;
  /* 10407f3a push 0x1040b910 */ { u32 v_ = 0x1040b910u; esp -= 4; M32(esp) = v_; }
  /* 10407f3f call dword ptr [0x1040b0a8] */ { const u32 m_ = (u32)(0x1040b0a8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10407f45u; SAVEALL; call_ind(c, t_); RETCHK(0x10407f45u, 0x10407f3fu); LOADALL; }
  /* 10407f45 mov edi, eax */ { edi = (u32)(eax); }
  /* 10407f47 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407f49 je 0x10407fe2 */ if (ZF_) goto L_10407fe2;
  /* 10407f4f mov esi, dword ptr [0x1040b04c] */ { const u32 m_ = (u32)(0x1040b04cu); esi = (u32)(M32(m_)); }
  /* 10407f55 push 0x1040b904 */ { u32 v_ = 0x1040b904u; esp -= 4; M32(esp) = v_; }
  /* 10407f5a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10407f5b call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10407f5du; SAVEALL; call_ind(c, t_); RETCHK(0x10407f5du, 0x10407f5bu); LOADALL; }
  /* 10407f5d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10407f5f mov dword ptr [0x1040dbf8], eax */ { const u32 m_ = (u32)(0x1040dbf8u); M32(m_) = (u32)(eax); }
  /* 10407f64 je 0x10407fe2 */ if (ZF_) goto L_10407fe2;
  /* 10407f66 push 0x1040b8f4 */ { u32 v_ = 0x1040b8f4u; esp -= 4; M32(esp) = v_; }
  /* 10407f6b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10407f6c call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10407f6eu; SAVEALL; call_ind(c, t_); RETCHK(0x10407f6eu, 0x10407f6cu); LOADALL; }
  /* 10407f6e push 0x1040b8e0 */ { u32 v_ = 0x1040b8e0u; esp -= 4; M32(esp) = v_; }
  /* 10407f73 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10407f74 mov dword ptr [0x1040dbfc], eax */ { const u32 m_ = (u32)(0x1040dbfcu); M32(m_) = (u32)(eax); }
  /* 10407f79 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10407f7bu; SAVEALL; call_ind(c, t_); RETCHK(0x10407f7bu, 0x10407f79u); LOADALL; }
  /* 10407f7b cmp dword ptr [0x1040d950], 2 */ { const u32 m_ = (u32)(0x1040d950u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407f82 mov dword ptr [0x1040dc00], eax */ { const u32 m_ = (u32)(0x1040dc00u); M32(m_) = (u32)(eax); }
  /* 10407f87 jne 0x10407fa7 */ if (!ZF_) goto L_10407fa7;
  /* 10407f89 push 0x1040b8c4 */ { u32 v_ = 0x1040b8c4u; esp -= 4; M32(esp) = v_; }
  /* 10407f8e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10407f8f call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10407f91u; SAVEALL; call_ind(c, t_); RETCHK(0x10407f91u, 0x10407f8fu); LOADALL; }
  /* 10407f91 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10407f93 mov dword ptr [0x1040dc08], eax */ { const u32 m_ = (u32)(0x1040dc08u); M32(m_) = (u32)(eax); }
  /* 10407f98 je 0x10407fa7 */ if (ZF_) goto L_10407fa7;
  /* 10407f9a push 0x1040b8ac */ { u32 v_ = 0x1040b8acu; esp -= 4; M32(esp) = v_; }
  /* 10407f9f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10407fa0 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10407fa2u; SAVEALL; call_ind(c, t_); RETCHK(0x10407fa2u, 0x10407fa0u); LOADALL; }
  /* 10407fa2 mov dword ptr [0x1040dc04], eax */ { const u32 m_ = (u32)(0x1040dc04u); M32(m_) = (u32)(eax); }
L_10407fa7:;
  /* 10407fa7 mov eax, dword ptr [0x1040dc04] */ { const u32 m_ = (u32)(0x1040dc04u); eax = (u32)(M32(m_)); }
  /* 10407fac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10407fae je 0x10407fec */ if (ZF_) goto L_10407fec;
  /* 10407fb0 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10407fb2u; SAVEALL; call_ind(c, t_); RETCHK(0x10407fb2u, 0x10407fb0u); LOADALL; }
  /* 10407fb2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10407fb4 je 0x10407fd3 */ if (ZF_) goto L_10407fd3;
  /* 10407fb6 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10407fb9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10407fba push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10407fbc lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 10407fbf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10407fc0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10407fc2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10407fc3 call dword ptr [0x1040dc08] */ { const u32 m_ = (u32)(0x1040dc08u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10407fc9u; SAVEALL; call_ind(c, t_); RETCHK(0x10407fc9u, 0x10407fc3u); LOADALL; }
  /* 10407fc9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10407fcb je 0x10407fd3 */ if (ZF_) goto L_10407fd3;
  /* 10407fcd test byte ptr [ebp - 8], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10407fd1 jne 0x10407fec */ if (!ZF_) goto L_10407fec;
L_10407fd3:;
  /* 10407fd3 cmp dword ptr [0x1040d95c], 4 */ { const u32 m_ = (u32)(0x1040d95cu); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10407fda jb 0x10407fe6 */ if (CF_) goto L_10407fe6;
  /* 10407fdc or byte ptr [ebp + 0x12], 0x20 */ { const u32 m_ = (u32)(ebp + 0x12u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10407fe0 jmp 0x1040800b */ goto L_1040800b;
L_10407fe2:;
  /* 10407fe2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10407fe4 jmp 0x1040801b */ goto L_1040801b;
L_10407fe6:;
  /* 10407fe6 or byte ptr [ebp + 0x12], 4 */ { const u32 m_ = (u32)(ebp + 0x12u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10407fea jmp 0x1040800b */ goto L_1040800b;
L_10407fec:;
  /* 10407fec mov eax, dword ptr [0x1040dbfc] */ { const u32 m_ = (u32)(0x1040dbfcu); eax = (u32)(M32(m_)); }
  /* 10407ff1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10407ff3 je 0x1040800b */ if (ZF_) goto L_1040800b;
  /* 10407ff5 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10407ff7u; SAVEALL; call_ind(c, t_); RETCHK(0x10407ff7u, 0x10407ff5u); LOADALL; }
  /* 10407ff7 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10407ff9 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10407ffb je 0x1040800b */ if (ZF_) goto L_1040800b;
  /* 10407ffd mov eax, dword ptr [0x1040dc00] */ { const u32 m_ = (u32)(0x1040dc00u); eax = (u32)(M32(m_)); }
  /* 10408002 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408004 je 0x1040800b */ if (ZF_) goto L_1040800b;
  /* 10408006 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10408007 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10408009u; SAVEALL; call_ind(c, t_); RETCHK(0x10408009u, 0x10408007u); LOADALL; }
  /* 10408009 mov ebx, eax */ { ebx = (u32)(eax); }
L_1040800b:;
  /* 1040800b push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040800e push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408011 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408014 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10408015 call dword ptr [0x1040dbf8] */ { const u32 m_ = (u32)(0x1040dbf8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040801bu; SAVEALL; call_ind(c, t_); RETCHK(0x1040801bu, 0x10408015u); LOADALL; }
L_1040801b:;
  /* 1040801b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040801c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040801d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040801e leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040801f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408020(CPU *c) {
  NATIVE_HOOK(0x10408020u) REGS; LOADALL;
L_10408020:;
  /* 10408020 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10408021 mov edi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10408025 jmp 0x10408095 */ goto L_10408095;
L_10408095:;
  /* 10408095 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10408099 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040809f je 0x104080be */ if (ZF_) goto L_104080be;
L_104080a1:;
  /* 104080a1 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104080a3 add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104080a6 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104080a8 je 0x10408110 */ if (ZF_) goto L_10408110;
  /* 104080aa mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 104080ac add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104080af test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104080b5 jne 0x104080a1 */ if (!ZF_) goto L_104080a1;
  /* 104080b7 jmp 0x104080be */ goto L_104080be;
L_104080b9:;
  /* 104080b9 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 104080bb add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_104080be:;
  /* 104080be mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 104080c3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 104080c5 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 104080c7 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104080ca xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104080cc mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 104080ce add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104080d1 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104080d6 je 0x104080b9 */ if (ZF_) goto L_104080b9;
  /* 104080d8 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104080da je 0x10408110 */ if (ZF_) goto L_10408110;
  /* 104080dc test dh, dh */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = ((edx >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104080de je 0x10408107 */ if (ZF_) goto L_10408107;
  /* 104080e0 test edx, 0xff0000 */ { u32 a_ = edx, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104080e6 je 0x104080fa */ if (ZF_) goto L_104080fa;
  /* 104080e8 test edx, 0xff000000 */ { u32 a_ = edx, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104080ee je 0x104080f2 */ if (ZF_) goto L_104080f2;
  /* 104080f0 jmp 0x104080b9 */ goto L_104080b9;
L_104080f2:;
  /* 104080f2 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 104080f4 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104080f8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104080f9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104080fa:;
  /* 104080fa mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 104080fd mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408101 mov byte ptr [edi + 2], 0 */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)(0x0u); }
  /* 10408105 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408106 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408107:;
  /* 10408107 mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 1040810a mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040810e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040810f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408110:;
  /* 10408110 mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10408112 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408116 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408117 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408030(CPU *c) {
  NATIVE_HOOK(0x10408030u) REGS; LOADALL;
L_10408030:;
  /* 10408030 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10408034 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10408035 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040803b je 0x10408050 */ if (ZF_) goto L_10408050;
L_1040803d:;
  /* 1040803d mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040803f add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10408042 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10408044 je 0x10408083 */ if (ZF_) goto L_10408083;
  /* 10408046 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040804c jne 0x1040803d */ if (!ZF_) goto L_1040803d;
  /* 1040804e mov edi, edi */ { edi = (u32)(edi); }
L_10408050:;
  /* 10408050 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10408052 mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 10408057 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10408059 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040805c xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040805e add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10408061 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408066 je 0x10408050 */ if (ZF_) goto L_10408050;
  /* 10408068 mov eax, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 1040806b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1040806d je 0x10408092 */ if (ZF_) goto L_10408092;
  /* 1040806f test ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10408071 je 0x1040808d */ if (ZF_) goto L_1040808d;
  /* 10408073 test eax, 0xff0000 */ { u32 a_ = eax, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408078 je 0x10408088 */ if (ZF_) goto L_10408088;
  /* 1040807a test eax, 0xff000000 */ { u32 a_ = eax, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040807f je 0x10408083 */ if (ZF_) goto L_10408083;
  /* 10408081 jmp 0x10408050 */ goto L_10408050;
L_10408083:;
  /* 10408083 lea edi, [ecx - 1] */ edi = (u32)((u32)(ecx + 0xffffffffu));
  /* 10408086 jmp 0x10408095 */ goto L_10408095;
L_10408088:;
  /* 10408088 lea edi, [ecx - 2] */ edi = (u32)((u32)(ecx + 0xfffffffeu));
  /* 1040808b jmp 0x10408095 */ goto L_10408095;
L_1040808d:;
  /* 1040808d lea edi, [ecx - 3] */ edi = (u32)((u32)(ecx + 0xfffffffdu));
  /* 10408090 jmp 0x10408095 */ goto L_10408095;
L_10408092:;
  /* 10408092 lea edi, [ecx - 4] */ edi = (u32)((u32)(ecx + 0xfffffffcu));
L_10408095:;
  /* 10408095 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10408099 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040809f je 0x104080be */ if (ZF_) goto L_104080be;
L_104080a1:;
  /* 104080a1 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104080a3 add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104080a6 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104080a8 je 0x10408110 */ if (ZF_) goto L_10408110;
  /* 104080aa mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 104080ac add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104080af test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104080b5 jne 0x104080a1 */ if (!ZF_) goto L_104080a1;
  /* 104080b7 jmp 0x104080be */ goto L_104080be;
L_104080b9:;
  /* 104080b9 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 104080bb add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_104080be:;
  /* 104080be mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 104080c3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 104080c5 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 104080c7 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104080ca xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104080cc mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 104080ce add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104080d1 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104080d6 je 0x104080b9 */ if (ZF_) goto L_104080b9;
  /* 104080d8 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104080da je 0x10408110 */ if (ZF_) goto L_10408110;
  /* 104080dc test dh, dh */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = ((edx >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104080de je 0x10408107 */ if (ZF_) goto L_10408107;
  /* 104080e0 test edx, 0xff0000 */ { u32 a_ = edx, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104080e6 je 0x104080fa */ if (ZF_) goto L_104080fa;
  /* 104080e8 test edx, 0xff000000 */ { u32 a_ = edx, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104080ee je 0x104080f2 */ if (ZF_) goto L_104080f2;
  /* 104080f0 jmp 0x104080b9 */ goto L_104080b9;
L_104080f2:;
  /* 104080f2 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 104080f4 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104080f8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104080f9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104080fa:;
  /* 104080fa mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 104080fd mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408101 mov byte ptr [edi + 2], 0 */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)(0x0u); }
  /* 10408105 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408106 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408107:;
  /* 10408107 mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 1040810a mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040810e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040810f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408110:;
  /* 10408110 mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10408112 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408116 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408117 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408120(CPU *c) {
  NATIVE_HOOK(0x10408120u) REGS; LOADALL;
L_10408120:;
  /* 10408120 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10408124 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10408125 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408127 je 0x104081bf */ if (ZF_) goto L_104081bf;
  /* 1040812d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040812e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040812f mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10408131 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 10408135 test esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040813b mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 1040813f jne 0x1040814c */ if (!ZF_) goto L_1040814c;
  /* 10408141 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10408144 jne 0x104081cf */ if (!ZF_) goto L_104081cf;
  /* 1040814a jmp 0x10408173 */ goto L_10408173;
L_1040814c:;
  /* 1040814c mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040814e add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10408151 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408153 add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10408156 sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10408159 je 0x10408186 */ if (ZF_) goto L_10408186;
  /* 1040815b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1040815d je 0x1040818e */ if (ZF_) goto L_1040818e;
  /* 1040815f test esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408165 jne 0x1040814c */ if (!ZF_) goto L_1040814c;
  /* 10408167 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10408169 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1040816c jne 0x104081cf */ if (!ZF_) goto L_104081cf;
L_1040816e:;
  /* 1040816e and ebx, 3 */ { u32 a_ = ebx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10408171 je 0x10408186 */ if (ZF_) goto L_10408186;
L_10408173:;
  /* 10408173 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408175 add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10408178 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040817a add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040817d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1040817f je 0x104081b8 */ if (ZF_) goto L_104081b8;
  /* 10408181 sub ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10408184 jne 0x10408173 */ if (!ZF_) goto L_10408173;
L_10408186:;
  /* 10408186 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 1040818a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040818b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040818c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040818d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1040818e:;
  /* 1040818e test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408194 je 0x104081ac */ if (ZF_) goto L_104081ac;
L_10408196:;
  /* 10408196 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408198 add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040819b sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1040819e je 0x1040823c */ if (ZF_) goto L_1040823c;
  /* 104081a4 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104081aa jne 0x10408196 */ if (!ZF_) goto L_10408196;
L_104081ac:;
  /* 104081ac mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 104081ae shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 104081b1 jne 0x10408227 */ if (!ZF_) goto L_10408227;
L_104081b3:;
  /* 104081b3 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104081b5 add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_104081b8:;
  /* 104081b8 sub ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 104081bb jne 0x104081b3 */ if (!ZF_) goto L_104081b3;
  /* 104081bd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104081be pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_104081bf:;
  /* 104081bf mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104081c3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104081c4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104081c5:;
  /* 104081c5 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 104081c7 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104081ca sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104081cd je 0x1040816e */ if (ZF_) goto L_1040816e;
L_104081cf:;
  /* 104081cf mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 104081d4 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 104081d6 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 104081d8 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104081db xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104081dd mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 104081df add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104081e2 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104081e7 je 0x104081c5 */ if (ZF_) goto L_104081c5;
  /* 104081e9 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104081eb je 0x10408219 */ if (ZF_) goto L_10408219;
  /* 104081ed test dh, dh */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = ((edx >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104081ef je 0x1040820f */ if (ZF_) goto L_1040820f;
  /* 104081f1 test edx, 0xff0000 */ { u32 a_ = edx, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104081f7 je 0x10408205 */ if (ZF_) goto L_10408205;
  /* 104081f9 test edx, 0xff000000 */ { u32 a_ = edx, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104081ff jne 0x104081c5 */ if (!ZF_) goto L_104081c5;
  /* 10408201 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10408203 jmp 0x1040821d */ goto L_1040821d;
L_10408205:;
  /* 10408205 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1040820b mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 1040820d jmp 0x1040821d */ goto L_1040821d;
L_1040820f:;
  /* 1040820f and edx, 0xff */ { u32 a_ = edx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10408215 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10408217 jmp 0x1040821d */ goto L_1040821d;
L_10408219:;
  /* 10408219 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1040821b mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
L_1040821d:;
  /* 1040821d add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10408220 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10408222 sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10408225 je 0x10408233 */ if (ZF_) goto L_10408233;
L_10408227:;
  /* 10408227 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10408229:;
  /* 10408229 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 1040822b add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040822e sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10408231 jne 0x10408229 */ if (!ZF_) goto L_10408229;
L_10408233:;
  /* 10408233 and ebx, 3 */ { u32 a_ = ebx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10408236 jne 0x104081b3 */ if (!ZF_) goto L_104081b3;
L_1040823c:;
  /* 1040823c mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10408240 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10408241 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408242 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408243 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408250(CPU *c) {
  NATIVE_HOOK(0x10408250u) REGS; LOADALL;
L_10408250:;
  /* 10408250 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10408254 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040825a je 0x10408280 */ if (ZF_) goto L_10408280;
L_1040825c:;
  /* 1040825c mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040825e add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10408261 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10408263 je 0x104082b3 */ if (ZF_) goto L_104082b3;
  /* 10408265 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040826b jne 0x1040825c */ if (!ZF_) goto L_1040825c;
  /* 1040826d add eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10408272 lea esp, [esp] */ esp = (u32)((u32)(esp));
  /* 10408279 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_10408280:;
  /* 10408280 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10408282 mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 10408287 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10408289 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040828c xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040828e add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10408291 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408296 je 0x10408280 */ if (ZF_) goto L_10408280;
  /* 10408298 mov eax, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 1040829b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1040829d je 0x104082d1 */ if (ZF_) goto L_104082d1;
  /* 1040829f test ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104082a1 je 0x104082c7 */ if (ZF_) goto L_104082c7;
  /* 104082a3 test eax, 0xff0000 */ { u32 a_ = eax, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104082a8 je 0x104082bd */ if (ZF_) goto L_104082bd;
  /* 104082aa test eax, 0xff000000 */ { u32 a_ = eax, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104082af je 0x104082b3 */ if (ZF_) goto L_104082b3;
  /* 104082b1 jmp 0x10408280 */ goto L_10408280;
L_104082b3:;
  /* 104082b3 lea eax, [ecx - 1] */ eax = (u32)((u32)(ecx + 0xffffffffu));
  /* 104082b6 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104082ba sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 104082bc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104082bd:;
  /* 104082bd lea eax, [ecx - 2] */ eax = (u32)((u32)(ecx + 0xfffffffeu));
  /* 104082c0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104082c4 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 104082c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104082c7:;
  /* 104082c7 lea eax, [ecx - 3] */ eax = (u32)((u32)(ecx + 0xfffffffdu));
  /* 104082ca mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104082ce sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 104082d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104082d1:;
  /* 104082d1 lea eax, [ecx - 4] */ eax = (u32)((u32)(ecx + 0xfffffffcu));
  /* 104082d4 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104082d8 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 104082da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104082db(CPU *c) {
  NATIVE_HOOK(0x104082dbu) REGS; LOADALL;
L_104082db:;
  /* 104082db push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104082dc mov ebp, esp */ { ebp = (u32)(esp); }
  /* 104082de sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104082e1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104082e2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104082e3 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 104082e6 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 104082e9 test bl, 3 */ { u32 a_ = (ebx & 0xffu), b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104082ec jne 0x10408309 */ if (!ZF_) goto L_10408309;
  /* 104082ee mov eax, dword ptr fs:[0x18] */ { const u32 m_ = (u32)(0x18u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 104082f4 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 104082f7 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104082fa mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 104082fd cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104082ff mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10408302 jb 0x10408310 */ if (CF_) goto L_10408310;
  /* 10408304 cmp ebx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408307 jae 0x10408310 */ if (!CF_) goto L_10408310;
L_10408309:;
  /* 10408309 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040830b jmp 0x10408500 */ goto L_10408500;
L_10408310:;
  /* 10408310 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10408311 mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 10408314 cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408317 jne 0x10408321 */ if (!ZF_) goto L_10408321;
L_10408319:;
  /* 10408319 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040831b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040831c jmp 0x104084ff */ goto L_104084ff;
L_10408321:;
  /* 10408321 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10408323 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 10408326 mov eax, ebx */ { eax = (u32)(ebx); }
L_10408328:;
  /* 10408328 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1040832a cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040832d je 0x10408337 */ if (ZF_) goto L_10408337;
  /* 1040832f cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408331 jae 0x1040847c */ if (!CF_) goto L_1040847c;
L_10408337:;
  /* 10408337 cmp dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040833b je 0x10408340 */ if (ZF_) goto L_10408340;
  /* 1040833d inc dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10408340:;
  /* 10408340 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408341 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10408344 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408346 jbe 0x10408328 */ if ((CF_|ZF_)) goto L_10408328;
  /* 10408348 cmp dword ptr [ebp + 8], 0 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040834c je 0x10408362 */ if (ZF_) goto L_10408362;
  /* 1040834e mov eax, dword ptr [esi - 8] */ { const u32 m_ = (u32)(esi + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 10408351 cmp eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408354 jb 0x1040847c */ if (CF_) goto L_1040847c;
  /* 1040835a cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040835c jae 0x1040847c */ if (!CF_) goto L_1040847c;
L_10408362:;
  /* 10408362 mov eax, dword ptr [0x1040dc10] */ { const u32 m_ = (u32)(0x1040dc10u); eax = (u32)(M32(m_)); }
  /* 10408367 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 10408369 and edi, 0xfffff000 */ { u32 a_ = edi, b_ = 0xfffff000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1040836f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10408371 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408373 jle 0x10408387 */ if ((ZF_|LT_)) goto L_10408387;
L_10408375:;
  /* 10408375 cmp dword ptr [esi*4 + 0x1040dc18], edi */ { const u32 m_ = (u32)(esi * 4u + 0x1040dc18u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040837c je 0x10408480 */ if (ZF_) goto L_10408480;
  /* 10408382 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408383 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408385 jl 0x10408375 */ if (LT_) goto L_10408375;
L_10408387:;
  /* 10408387 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 10408389 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 1040838c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040838d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040838e call dword ptr [0x1040b0b0] */ { const u32 m_ = (u32)(0x1040b0b0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10408394u; SAVEALL; call_ind(c, t_); RETCHK(0x10408394u, 0x1040838eu); LOADALL; }
  /* 10408394 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408396 je 0x104084fc */ if (ZF_) goto L_104084fc;
  /* 1040839c cmp dword ptr [ebp - 8], 0x1000000 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_), b_ = 0x1000000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104083a3 jne 0x104084fc */ if (!ZF_) goto L_104084fc;
  /* 104083a9 test byte ptr [ebp - 0xc], 0xcc */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M8(m_), b_ = 0xccu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104083ad je 0x10408405 */ if (ZF_) goto L_10408405;
  /* 104083af mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 104083b2 cmp word ptr [ecx], 0x5a4d */ { const u32 m_ = (u32)(ecx); u32 a_ = M16(m_), b_ = 0x5a4du; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 104083b7 jne 0x104084fc */ if (!ZF_) goto L_104084fc;
  /* 104083bd mov eax, dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 104083c0 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 104083c2 cmp dword ptr [eax], 0x4550 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x4550u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104083c8 jne 0x104084fc */ if (!ZF_) goto L_104084fc;
  /* 104083ce cmp word ptr [eax + 0x18], 0x10b */ { const u32 m_ = (u32)(eax + 0x18u); u32 a_ = M16(m_), b_ = 0x10bu; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 104083d4 jne 0x104084fc */ if (!ZF_) goto L_104084fc;
  /* 104083da sub ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 104083dc cmp word ptr [eax + 6], 0 */ { const u32 m_ = (u32)(eax + 0x6u); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 104083e1 movzx ecx, word ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M16(m_)); }
  /* 104083e5 lea ecx, [ecx + eax + 0x18] */ ecx = (u32)((u32)(ecx + eax + 0x18u));
  /* 104083e9 jbe 0x104084fc */ if ((CF_|ZF_)) goto L_104084fc;
  /* 104083ef mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 104083f2 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104083f4 jb 0x10408405 */ if (CF_) goto L_10408405;
  /* 104083f6 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 104083f9 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 104083fb cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104083fd jae 0x10408405 */ if (!CF_) goto L_10408405;
  /* 104083ff test byte ptr [ecx + 0x27], 0x80 */ { const u32 m_ = (u32)(ecx + 0x27u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10408403 jne 0x1040847c */ if (!ZF_) goto L_1040847c;
L_10408405:;
  /* 10408405 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10408407 push 0x1040dc58 */ { u32 v_ = 0x1040dc58u; esp -= 4; M32(esp) = v_; }
  /* 1040840c call dword ptr [0x1040b0ac] */ { const u32 m_ = (u32)(0x1040b0acu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10408412u; SAVEALL; call_ind(c, t_); RETCHK(0x10408412u, 0x1040840cu); LOADALL; }
  /* 10408412 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408414 jne 0x10408319 */ if (!ZF_) goto L_10408319;
  /* 1040841a mov ecx, dword ptr [0x1040dc10] */ { const u32 m_ = (u32)(0x1040dc10u); ecx = (u32)(M32(m_)); }
  /* 10408420 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408422 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10408424 jle 0x10408439 */ if ((ZF_|LT_)) goto L_10408439;
  /* 10408426 lea eax, [ecx*4 + 0x1040dc14] */ eax = (u32)((u32)(ecx * 4u + 0x1040dc14u));
L_1040842d:;
  /* 1040842d cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040842f je 0x10408439 */ if (ZF_) goto L_10408439;
  /* 10408431 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10408432 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10408435 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408437 jg 0x1040842d */ if (!(ZF_|LT_)) goto L_1040842d;
L_10408439:;
  /* 10408439 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040843b jne 0x1040846a */ if (!ZF_) goto L_1040846a;
  /* 1040843d push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 1040843f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10408440 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408442 jg 0x10408446 */ if (!(ZF_|LT_)) goto L_10408446;
  /* 10408444 mov ebx, ecx */ { ebx = (u32)(ecx); }
L_10408446:;
  /* 10408446 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10408448 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040844a jl 0x1040845e */ if (LT_) goto L_1040845e;
L_1040844c:;
  /* 1040844c lea eax, [edx*4 + 0x1040dc18] */ eax = (u32)((u32)(edx * 4u + 0x1040dc18u));
  /* 10408453 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 10408455 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408456 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408458 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 1040845a mov edi, esi */ { edi = (u32)(esi); }
  /* 1040845c jle 0x1040844c */ if ((ZF_|LT_)) goto L_1040844c;
L_1040845e:;
  /* 1040845e cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408461 jge 0x1040846a */ if (!LT_) goto L_1040846a;
  /* 10408463 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408464 mov dword ptr [0x1040dc10], ecx */ { const u32 m_ = (u32)(0x1040dc10u); M32(m_) = (u32)(ecx); }
L_1040846a:;
  /* 1040846a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1040846c push 0x1040dc58 */ { u32 v_ = 0x1040dc58u; esp -= 4; M32(esp) = v_; }
  /* 10408471 call dword ptr [0x1040b0ac] */ { const u32 m_ = (u32)(0x1040b0acu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10408477u; SAVEALL; call_ind(c, t_); RETCHK(0x10408477u, 0x10408471u); LOADALL; }
  /* 10408477 jmp 0x10408319 */ goto L_10408319;
L_1040847c:;
  /* 1040847c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040847e jmp 0x104084ff */ goto L_104084ff;
L_10408480:;
  /* 10408480 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408482 jle 0x10408319 */ if ((ZF_|LT_)) goto L_10408319;
  /* 10408488 mov ebx, dword ptr [0x1040b0ac] */ { const u32 m_ = (u32)(0x1040b0acu); ebx = (u32)(M32(m_)); }
  /* 1040848e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10408490 push 0x1040dc58 */ { u32 v_ = 0x1040dc58u; esp -= 4; M32(esp) = v_; }
  /* 10408495 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x10408497u; SAVEALL; call_ind(c, t_); RETCHK(0x10408497u, 0x10408495u); LOADALL; }
  /* 10408497 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408499 jne 0x10408319 */ if (!ZF_) goto L_10408319;
  /* 1040849f cmp dword ptr [esi*4 + 0x1040dc18], edi */ { const u32 m_ = (u32)(esi * 4u + 0x1040dc18u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104084a6 je 0x104084d6 */ if (ZF_) goto L_104084d6;
  /* 104084a8 mov eax, dword ptr [0x1040dc10] */ { const u32 m_ = (u32)(0x1040dc10u); eax = (u32)(M32(m_)); }
  /* 104084ad lea esi, [eax - 1] */ esi = (u32)((u32)(eax + 0xffffffffu));
  /* 104084b0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104084b2 jl 0x104084c4 */ if (LT_) goto L_104084c4;
L_104084b4:;
  /* 104084b4 cmp dword ptr [esi*4 + 0x1040dc18], edi */ { const u32 m_ = (u32)(esi * 4u + 0x1040dc18u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104084bb je 0x104084c0 */ if (ZF_) goto L_104084c0;
  /* 104084bd dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 104084be jns 0x104084b4 */ if (!SF_) goto L_104084b4;
L_104084c0:;
  /* 104084c0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104084c2 jge 0x104084d4 */ if (!LT_) goto L_104084d4;
L_104084c4:;
  /* 104084c4 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104084c7 jge 0x104084cf */ if (!LT_) goto L_104084cf;
  /* 104084c9 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104084ca mov dword ptr [0x1040dc10], eax */ { const u32 m_ = (u32)(0x1040dc10u); M32(m_) = (u32)(eax); }
L_104084cf:;
  /* 104084cf lea esi, [eax - 1] */ esi = (u32)((u32)(eax + 0xffffffffu));
  /* 104084d2 jmp 0x104084d6 */ goto L_104084d6;
L_104084d4:;
  /* 104084d4 je 0x104084ee */ if (ZF_) goto L_104084ee;
L_104084d6:;
  /* 104084d6 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 104084d8 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104084da jl 0x104084ee */ if (LT_) goto L_104084ee;
L_104084dc:;
  /* 104084dc lea eax, [ecx*4 + 0x1040dc18] */ eax = (u32)((u32)(ecx * 4u + 0x1040dc18u));
  /* 104084e3 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 104084e5 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104084e6 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104084e8 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 104084ea mov edi, edx */ { edi = (u32)(edx); }
  /* 104084ec jle 0x104084dc */ if ((ZF_|LT_)) goto L_104084dc;
L_104084ee:;
  /* 104084ee push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 104084f0 push 0x1040dc58 */ { u32 v_ = 0x1040dc58u; esp -= 4; M32(esp) = v_; }
  /* 104084f5 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x104084f7u; SAVEALL; call_ind(c, t_); RETCHK(0x104084f7u, 0x104084f5u); LOADALL; }
  /* 104084f7 jmp 0x10408319 */ goto L_10408319;
L_104084fc:;
  /* 104084fc or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_104084ff:;
  /* 104084ff pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_10408500:;
  /* 10408500 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408501 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10408502 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10408503 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408504(CPU *c) {
  NATIVE_HOOK(0x10408504u) REGS; LOADALL;
L_10408504:;
  /* 10408504 mov eax, dword ptr [0x1040dc5c] */ { const u32 m_ = (u32)(0x1040dc5cu); eax = (u32)(M32(m_)); }
  /* 10408509 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040850b je 0x1040851c */ if (ZF_) goto L_1040851c;
  /* 1040850d push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408511 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10408513u; SAVEALL; call_ind(c, t_); RETCHK(0x10408513u, 0x10408511u); LOADALL; }
  /* 10408513 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408515 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10408516 je 0x1040851c */ if (ZF_) goto L_1040851c;
  /* 10408518 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040851a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040851b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1040851c:;
  /* 1040851c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040851e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040851f(CPU *c) {
  NATIVE_HOOK(0x1040851fu) REGS; LOADALL;
L_1040851f:;
  /* 1040851f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10408520 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10408524 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10408526 cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040852c jne 0x1040854a */ if (!ZF_) goto L_1040854a;
  /* 1040852e cmp dword ptr [eax + 0x10], 3 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408532 jne 0x1040854a */ if (!ZF_) goto L_1040854a;
  /* 10408534 mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 10408537 cmp eax, 0x19930520 */ { u32 a_ = eax, b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040853c je 0x10408545 */ if (ZF_) goto L_10408545;
  /* 1040853e cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408543 jne 0x1040854a */ if (!ZF_) goto L_1040854a;
L_10408545:;
  /* 10408545 call 0x10406487 */ esp -= 4; M32(esp) = 0x1040854au; SAVEALL; F_10406487(c); ABI_CHECK(0x10406487u, 0x10408545u); RETCHK(0x1040854au, 0x10408545u); LOADALL;
L_1040854a:;
  /* 1040854a mov eax, dword ptr [0x1040dc64] */ { const u32 m_ = (u32)(0x1040dc64u); eax = (u32)(M32(m_)); }
  /* 1040854f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408551 je 0x10408567 */ if (ZF_) goto L_10408567;
  /* 10408553 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10408554 call 0x10408650 */ esp -= 4; M32(esp) = 0x10408559u; SAVEALL; F_10408650(c); ABI_CHECK(0x10408650u, 0x10408554u); RETCHK(0x10408559u, 0x10408554u); LOADALL;
  /* 10408559 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040855b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040855c je 0x10408567 */ if (ZF_) goto L_10408567;
  /* 1040855e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040855f call dword ptr [0x1040dc64] */ { const u32 m_ = (u32)(0x1040dc64u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10408565u; SAVEALL; call_ind(c, t_); RETCHK(0x10408565u, 0x1040855fu); LOADALL; }
  /* 10408565 jmp 0x10408569 */ goto L_10408569;
L_10408567:;
  /* 10408567 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10408569:;
  /* 10408569 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040856a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_1040856d(CPU *c) {
  NATIVE_HOOK(0x1040856du) REGS; LOADALL;
L_1040856d:;
  /* 1040856d push 0x1040851f */ { u32 v_ = 0x1040851fu; esp -= 4; M32(esp) = v_; }
  /* 10408572 call dword ptr [0x1040b0b4] */ { const u32 m_ = (u32)(0x1040b0b4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10408578u; SAVEALL; call_ind(c, t_); RETCHK(0x10408578u, 0x10408572u); LOADALL; }
  /* 10408578 mov dword ptr [0x1040dc64], eax */ { const u32 m_ = (u32)(0x1040dc64u); M32(m_) = (u32)(eax); }
  /* 1040857d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040857f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408580(CPU *c) {
  NATIVE_HOOK(0x10408580u) REGS; LOADALL;
L_10408580:;
  /* 10408580 push dword ptr [0x1040dc64] */ { const u32 m_ = (u32)(0x1040dc64u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408586 call dword ptr [0x1040b0b4] */ { const u32 m_ = (u32)(0x1040b0b4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040858cu; SAVEALL; call_ind(c, t_); RETCHK(0x1040858cu, 0x10408586u); LOADALL; }
  /* 1040858c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408590(CPU *c) {
  NATIVE_HOOK(0x10408590u) REGS; LOADALL;
L_10408590:;
  /* 10408590 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10408594 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10408598 test edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040859e jne 0x104085dc */ if (!ZF_) goto L_104085dc;
L_104085a0:;
  /* 104085a0 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 104085a2 cmp al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 104085a4 jne 0x104085d4 */ if (!ZF_) goto L_104085d4;
  /* 104085a6 or al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 104085a8 je 0x104085d0 */ if (ZF_) goto L_104085d0;
  /* 104085aa cmp ah, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 104085ad jne 0x104085d4 */ if (!ZF_) goto L_104085d4;
  /* 104085af or ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 104085b1 je 0x104085d0 */ if (ZF_) goto L_104085d0;
  /* 104085b3 shr eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 104085b6 cmp al, byte ptr [ecx + 2] */ { const u32 m_ = (u32)(ecx + 0x2u); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 104085b9 jne 0x104085d4 */ if (!ZF_) goto L_104085d4;
  /* 104085bb or al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 104085bd je 0x104085d0 */ if (ZF_) goto L_104085d0;
  /* 104085bf cmp ah, byte ptr [ecx + 3] */ { const u32 m_ = (u32)(ecx + 0x3u); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 104085c2 jne 0x104085d4 */ if (!ZF_) goto L_104085d4;
  /* 104085c4 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104085c7 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 104085ca or ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 104085cc jne 0x104085a0 */ if (!ZF_) goto L_104085a0;
  /* 104085ce mov edi, edi */ { edi = (u32)(edi); }
L_104085d0:;
  /* 104085d0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104085d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104085d4:;
  /* 104085d4 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 104085d6 shl eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 104085d8 add eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 104085db ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104085dc:;
  /* 104085dc test edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104085e2 je 0x104085fc */ if (ZF_) goto L_104085fc;
  /* 104085e4 mov al, byte ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104085e6 add edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 104085e9 cmp al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 104085eb jne 0x104085d4 */ if (!ZF_) goto L_104085d4;
  /* 104085ed add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104085f0 or al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 104085f2 je 0x104085d0 */ if (ZF_) goto L_104085d0;
  /* 104085f4 test edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104085fa je 0x104085a0 */ if (ZF_) goto L_104085a0;
L_104085fc:;
  /* 104085fc mov ax, word ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 104085ff add edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10408602 cmp al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10408604 jne 0x104085d4 */ if (!ZF_) goto L_104085d4;
  /* 10408606 or al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10408608 je 0x104085d0 */ if (ZF_) goto L_104085d0;
  /* 1040860a cmp ah, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1040860d jne 0x104085d4 */ if (!ZF_) goto L_104085d4;
  /* 1040860f or ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10408611 je 0x104085d0 */ if (ZF_) goto L_104085d0;
  /* 10408613 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10408616 jmp 0x104085a0 */ goto L_104085a0;
}

void F_10408618(CPU *c) {
  NATIVE_HOOK(0x10408618u) REGS; LOADALL;
L_10408618:;
  /* 10408618 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10408619 push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040861d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1040861f push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408623 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408624 call dword ptr [0x1040b0b8] */ { const u32 m_ = (u32)(0x1040b0b8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040862au; SAVEALL; call_ind(c, t_); RETCHK(0x1040862au, 0x10408624u); LOADALL; }
  /* 1040862a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040862c je 0x10408630 */ if (ZF_) goto L_10408630;
  /* 1040862e xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_10408630:;
  /* 10408630 mov eax, esi */ { eax = (u32)(esi); }
  /* 10408632 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408633 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408634(CPU *c) {
  NATIVE_HOOK(0x10408634u) REGS; LOADALL;
L_10408634:;
  /* 10408634 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10408635 push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408639 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1040863b push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040863f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408640 call dword ptr [0x1040b0a4] */ { const u32 m_ = (u32)(0x1040b0a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10408646u; SAVEALL; call_ind(c, t_); RETCHK(0x10408646u, 0x10408640u); LOADALL; }
  /* 10408646 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408648 je 0x1040864c */ if (ZF_) goto L_1040864c;
  /* 1040864a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_1040864c:;
  /* 1040864c mov eax, esi */ { eax = (u32)(esi); }
  /* 1040864e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040864f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408650(CPU *c) {
  NATIVE_HOOK(0x10408650u) REGS; LOADALL;
L_10408650:;
  /* 10408650 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10408651 push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408655 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10408657 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408658 call dword ptr [0x1040b0bc] */ { const u32 m_ = (u32)(0x1040b0bcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040865eu; SAVEALL; call_ind(c, t_); RETCHK(0x1040865eu, 0x10408658u); LOADALL; }
  /* 1040865e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408660 je 0x10408664 */ if (ZF_) goto L_10408664;
  /* 10408662 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_10408664:;
  /* 10408664 mov eax, esi */ { eax = (u32)(esi); }
  /* 10408666 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408667 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040865c(CPU *c) {
  NATIVE_HOOK(0x1040865cu) REGS; LOADALL;
L_1040865c:;
  /* 1040865c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040865d adc byte ptr [ebp + 0x330274c0], al */ { const u32 m_ = (u32)(ebp + 0x330274c0u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10408663 test byte ptr [ebx - 0x333ca13a], -0x34 */ { const u32 m_ = (u32)(ebx + 0xccc35ec6u); u32 a_ = M8(m_), b_ = 0xccu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1040866a int3 */ TRAP(0x1040866au, "int3");
}

void F_10408670(CPU *c) {
  NATIVE_HOOK(0x10408670u) REGS; LOADALL;
L_10408670:;
  /* 10408670 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10408671 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10408673 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10408674 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10408675 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10408678 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1040867b mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 1040867e mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10408680 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10408682 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10408684 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408686 jbe 0x10408690 */ if ((CF_|ZF_)) goto L_10408690;
  /* 10408688 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040868a jb 0x1040880c */ if (CF_) goto L_1040880c;
L_10408690:;
  /* 10408690 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10408696 jne 0x104086ac */ if (!ZF_) goto L_104086ac;
  /* 10408698 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1040869b and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1040869e cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104086a1 jb 0x104086cc */ if (CF_) goto L_104086cc;
  /* 104086a3 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 104086a5 jmp dword ptr [edx*4 + 0x104087bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104087bcu); u32 t_ = M32(m_); switch (t_) { case 0x104087ccu: goto L_104087cc; case 0x104087d4u: goto L_104087d4; case 0x104087e0u: goto L_104087e0; case 0x104087f4u: goto L_104087f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104086ac:;
  /* 104086ac mov eax, edi */ { eax = (u32)(edi); }
  /* 104086ae mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 104086b3 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104086b6 jb 0x104086c4 */ if (CF_) goto L_104086c4;
  /* 104086b8 and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104086bb add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104086bd jmp dword ptr [eax*4 + 0x104086d0] */ { const u32 m_ = (u32)(eax * 4u + 0x104086d0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_104086c4:;
  /* 104086c4 jmp dword ptr [ecx*4 + 0x104087cc] */ { const u32 m_ = (u32)(ecx * 4u + 0x104087ccu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_104086cc:;
  /* 104086cc jmp dword ptr [ecx*4 + 0x10408750] */ { const u32 m_ = (u32)(ecx * 4u + 0x10408750u); u32 t_ = M32(m_); switch (t_) { case 0x10408770u: goto L_10408770; case 0x10408778u: goto L_10408778; case 0x10408780u: goto L_10408780; case 0x10408788u: goto L_10408788; case 0x10408790u: goto L_10408790; case 0x10408798u: goto L_10408798; case 0x104087a0u: goto L_104087a0; case 0x104087b3u: goto L_104087b3; default: SAVEALL; call_ind(c, t_); return; } }
L_10408770:;
  /* 10408770 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10408774 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10408778:;
  /* 10408778 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1040877c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10408780:;
  /* 10408780 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10408784 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10408788:;
  /* 10408788 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040878c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10408790:;
  /* 10408790 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10408794 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10408798:;
  /* 10408798 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040879c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_104087a0:;
  /* 104087a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104087a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104087a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104087af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104087b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_104087b3:;
  /* 104087b3 jmp dword ptr [edx*4 + 0x104087bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104087bcu); u32 t_ = M32(m_); switch (t_) { case 0x104087ccu: goto L_104087cc; case 0x104087d4u: goto L_104087d4; case 0x104087e0u: goto L_104087e0; case 0x104087f4u: goto L_104087f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104087cc:;
  /* 104087cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087d4:;
  /* 104087d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087e0:;
  /* 104087e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087f4:;
  /* 104087f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408801 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408804 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408807 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408808 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408809 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040880a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1040880c:;
  /* 1040880c lea esi, [ecx + esi - 4] */ esi = (u32)((u32)(ecx + esi + 0xfffffffcu));
  /* 10408810 lea edi, [ecx + edi - 4] */ edi = (u32)((u32)(ecx + edi + 0xfffffffcu));
  /* 10408814 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040881a jne 0x10408840 */ if (!ZF_) goto L_10408840;
  /* 1040881c shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1040881f and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10408822 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408825 jb 0x10408834 */ if (CF_) goto L_10408834;
  /* 10408827 std */ c->df = 1;
  /* 10408828 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1040882a cld */ c->df = 0;
  /* 1040882b jmp dword ptr [edx*4 + 0x10408958] */ { const u32 m_ = (u32)(edx * 4u + 0x10408958u); u32 t_ = M32(m_); switch (t_) { case 0x10408968u: goto L_10408968; case 0x10408970u: goto L_10408970; case 0x10408980u: goto L_10408980; case 0x10408994u: goto L_10408994; default: SAVEALL; call_ind(c, t_); return; } }
L_10408834:;
  /* 10408834 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10408836 jmp dword ptr [ecx*4 + 0x10408908] */ { const u32 m_ = (u32)(ecx * 4u + 0x10408908u); u32 t_ = M32(m_); switch (t_) { case 0x1040894fu: goto L_1040894f; default: SAVEALL; call_ind(c, t_); return; } }
L_10408840:;
  /* 10408840 mov eax, edi */ { eax = (u32)(edi); }
  /* 10408842 mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 10408847 cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040884a jb 0x10408858 */ if (CF_) goto L_10408858;
  /* 1040884c and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040884f sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10408851 jmp dword ptr [eax*4 + 0x1040885c] */ { const u32 m_ = (u32)(eax * 4u + 0x1040885cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10408858:;
  /* 10408858 jmp dword ptr [ecx*4 + 0x10408958] */ { const u32 m_ = (u32)(ecx * 4u + 0x10408958u); u32 t_ = M32(m_); switch (t_) { case 0x10408968u: goto L_10408968; case 0x10408970u: goto L_10408970; case 0x10408980u: goto L_10408980; case 0x10408994u: goto L_10408994; default: SAVEALL; call_ind(c, t_); return; } }
L_1040894f:;
  /* 1040894f jmp dword ptr [edx*4 + 0x10408958] */ { const u32 m_ = (u32)(edx * 4u + 0x10408958u); u32 t_ = M32(m_); switch (t_) { case 0x10408968u: goto L_10408968; case 0x10408970u: goto L_10408970; case 0x10408980u: goto L_10408980; case 0x10408994u: goto L_10408994; default: SAVEALL; call_ind(c, t_); return; } }
L_10408968:;
  /* 10408968 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040896b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040896c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040896d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040896e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408970:;
  /* 10408970 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408973 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408976 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408979 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040897a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040897b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040897c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408980:;
  /* 10408980 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408983 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408986 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408989 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040898c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040898f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408990 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408991 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10408992 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408994:;
  /* 10408994 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408997 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040899a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040899d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104089a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104089a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104089aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104089ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104089ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104086d0(CPU *c) {
  NATIVE_HOOK(0x104086d0u) REGS; LOADALL;
  goto L_104086d0;
L_1040865c:;
  /* 1040865c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040865d adc byte ptr [ebp + 0x330274c0], al */ { const u32 m_ = (u32)(ebp + 0x330274c0u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10408663 test byte ptr [ebx - 0x333ca13a], -0x34 */ { const u32 m_ = (u32)(ebx + 0xccc35ec6u); u32 a_ = M8(m_), b_ = 0xccu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1040866a int3 */ TRAP(0x1040866au, "int3");
L_104086cc:;
  /* 104086cc jmp dword ptr [ecx*4 + 0x10408750] */ { const u32 m_ = (u32)(ecx * 4u + 0x10408750u); u32 t_ = M32(m_); switch (t_) { case 0x10408770u: goto L_10408770; case 0x10408778u: goto L_10408778; case 0x10408780u: goto L_10408780; case 0x10408788u: goto L_10408788; case 0x10408790u: goto L_10408790; case 0x10408798u: goto L_10408798; case 0x104087a0u: goto L_104087a0; case 0x104087b3u: goto L_104087b3; default: SAVEALL; call_ind(c, t_); return; } }
L_104086d0:;
  /* 104086d0 xchg dword ptr [eax + 0x10], eax */ { const u32 m_ = (u32)(eax + 0x10u); u32 o_ = (u32)__atomic_exchange_n((u32 *)HP(m_), (u32)eax, __ATOMIC_SEQ_CST); eax = (u32)(o_); }
  /* 104086d3 nop */ ;
  /* 104086d4 loopne 0x1040865c */ if (--ecx != 0 && !ZF_) goto L_1040865c;
  /* 104086d6 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104086d7 adc byte ptr [edi + eax*4], cl */ { const u32 m_ = (u32)(edi + eax * 4u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 104086da inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104086db adc byte ptr [eax], dh */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = ((edx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 104086dd xchg dword ptr [eax + 0x10], eax */ { const u32 m_ = (u32)(eax + 0x10u); u32 o_ = (u32)__atomic_exchange_n((u32 *)HP(m_), (u32)eax, __ATOMIC_SEQ_CST); eax = (u32)(o_); }
  /* 104086e0 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 104086e2 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104086e4 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104086e6 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104086e9 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104086ec mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104086ef shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 104086f2 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104086f5 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104086f8 add edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104086fb cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104086fe jb 0x104086cc */ if (CF_) goto L_104086cc;
  /* 10408700 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10408702 jmp dword ptr [edx*4 + 0x104087bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104087bcu); u32 t_ = M32(m_); switch (t_) { case 0x104087ccu: goto L_104087cc; case 0x104087d4u: goto L_104087d4; case 0x104087e0u: goto L_104087e0; case 0x104087f4u: goto L_104087f4; default: SAVEALL; call_ind(c, t_); return; } }
L_10408770:;
  /* 10408770 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10408774 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10408778:;
  /* 10408778 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1040877c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10408780:;
  /* 10408780 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10408784 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10408788:;
  /* 10408788 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040878c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10408790:;
  /* 10408790 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10408794 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10408798:;
  /* 10408798 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040879c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_104087a0:;
  /* 104087a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104087a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104087a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104087af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104087b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_104087b3:;
  /* 104087b3 jmp dword ptr [edx*4 + 0x104087bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104087bcu); u32 t_ = M32(m_); switch (t_) { case 0x104087ccu: goto L_104087cc; case 0x104087d4u: goto L_104087d4; case 0x104087e0u: goto L_104087e0; case 0x104087f4u: goto L_104087f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104087cc:;
  /* 104087cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087d4:;
  /* 104087d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087e0:;
  /* 104087e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087f4:;
  /* 104087f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408801 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408804 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408807 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408808 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408809 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040880a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104086e0(CPU *c) {
  NATIVE_HOOK(0x104086e0u) REGS; LOADALL;
  goto L_104086e0;
L_104086cc:;
  /* 104086cc jmp dword ptr [ecx*4 + 0x10408750] */ { const u32 m_ = (u32)(ecx * 4u + 0x10408750u); u32 t_ = M32(m_); switch (t_) { case 0x10408770u: goto L_10408770; case 0x10408778u: goto L_10408778; case 0x10408780u: goto L_10408780; case 0x10408788u: goto L_10408788; case 0x10408790u: goto L_10408790; case 0x10408798u: goto L_10408798; case 0x104087a0u: goto L_104087a0; case 0x104087b3u: goto L_104087b3; default: SAVEALL; call_ind(c, t_); return; } }
L_104086e0:;
  /* 104086e0 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 104086e2 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104086e4 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104086e6 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104086e9 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104086ec mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104086ef shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 104086f2 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104086f5 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104086f8 add edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104086fb cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104086fe jb 0x104086cc */ if (CF_) goto L_104086cc;
  /* 10408700 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10408702 jmp dword ptr [edx*4 + 0x104087bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104087bcu); u32 t_ = M32(m_); switch (t_) { case 0x104087ccu: goto L_104087cc; case 0x104087d4u: goto L_104087d4; case 0x104087e0u: goto L_104087e0; case 0x104087f4u: goto L_104087f4; default: SAVEALL; call_ind(c, t_); return; } }
L_10408770:;
  /* 10408770 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10408774 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10408778:;
  /* 10408778 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1040877c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10408780:;
  /* 10408780 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10408784 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10408788:;
  /* 10408788 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040878c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10408790:;
  /* 10408790 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10408794 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10408798:;
  /* 10408798 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040879c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_104087a0:;
  /* 104087a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104087a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104087a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104087af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104087b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_104087b3:;
  /* 104087b3 jmp dword ptr [edx*4 + 0x104087bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104087bcu); u32 t_ = M32(m_); switch (t_) { case 0x104087ccu: goto L_104087cc; case 0x104087d4u: goto L_104087d4; case 0x104087e0u: goto L_104087e0; case 0x104087f4u: goto L_104087f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104087cc:;
  /* 104087cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087d4:;
  /* 104087d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087e0:;
  /* 104087e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087f4:;
  /* 104087f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408801 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408804 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408807 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408808 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408809 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040880a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040870c(CPU *c) {
  NATIVE_HOOK(0x1040870cu) REGS; LOADALL;
  goto L_1040870c;
L_104086cc:;
  /* 104086cc jmp dword ptr [ecx*4 + 0x10408750] */ { const u32 m_ = (u32)(ecx * 4u + 0x10408750u); u32 t_ = M32(m_); switch (t_) { case 0x10408770u: goto L_10408770; case 0x10408778u: goto L_10408778; case 0x10408780u: goto L_10408780; case 0x10408788u: goto L_10408788; case 0x10408790u: goto L_10408790; case 0x10408798u: goto L_10408798; case 0x104087a0u: goto L_104087a0; case 0x104087b3u: goto L_104087b3; default: SAVEALL; call_ind(c, t_); return; } }
L_1040870c:;
  /* 1040870c and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1040870e mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408710 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408712 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408715 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10408718 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040871b add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040871e add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10408721 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408724 jb 0x104086cc */ if (CF_) goto L_104086cc;
  /* 10408726 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10408728 jmp dword ptr [edx*4 + 0x104087bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104087bcu); u32 t_ = M32(m_); switch (t_) { case 0x104087ccu: goto L_104087cc; case 0x104087d4u: goto L_104087d4; case 0x104087e0u: goto L_104087e0; case 0x104087f4u: goto L_104087f4; default: SAVEALL; call_ind(c, t_); return; } }
L_10408770:;
  /* 10408770 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10408774 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10408778:;
  /* 10408778 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1040877c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10408780:;
  /* 10408780 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10408784 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10408788:;
  /* 10408788 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040878c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10408790:;
  /* 10408790 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10408794 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10408798:;
  /* 10408798 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040879c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_104087a0:;
  /* 104087a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104087a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104087a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104087af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104087b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_104087b3:;
  /* 104087b3 jmp dword ptr [edx*4 + 0x104087bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104087bcu); u32 t_ = M32(m_); switch (t_) { case 0x104087ccu: goto L_104087cc; case 0x104087d4u: goto L_104087d4; case 0x104087e0u: goto L_104087e0; case 0x104087f4u: goto L_104087f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104087cc:;
  /* 104087cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087d4:;
  /* 104087d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087e0:;
  /* 104087e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087f4:;
  /* 104087f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408801 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408804 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408807 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408808 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408809 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040880a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408730(CPU *c) {
  NATIVE_HOOK(0x10408730u) REGS; LOADALL;
  goto L_10408730;
L_104086cc:;
  /* 104086cc jmp dword ptr [ecx*4 + 0x10408750] */ { const u32 m_ = (u32)(ecx * 4u + 0x10408750u); u32 t_ = M32(m_); switch (t_) { case 0x10408770u: goto L_10408770; case 0x10408778u: goto L_10408778; case 0x10408780u: goto L_10408780; case 0x10408788u: goto L_10408788; case 0x10408790u: goto L_10408790; case 0x10408798u: goto L_10408798; case 0x104087a0u: goto L_104087a0; case 0x104087b3u: goto L_104087b3; default: SAVEALL; call_ind(c, t_); return; } }
L_10408730:;
  /* 10408730 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10408732 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408734 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408736 add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10408739 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1040873c add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040873f cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408742 jb 0x104086cc */ if (CF_) goto L_104086cc;
  /* 10408744 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10408746 jmp dword ptr [edx*4 + 0x104087bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104087bcu); u32 t_ = M32(m_); switch (t_) { case 0x104087ccu: goto L_104087cc; case 0x104087d4u: goto L_104087d4; case 0x104087e0u: goto L_104087e0; case 0x104087f4u: goto L_104087f4; default: SAVEALL; call_ind(c, t_); return; } }
L_10408770:;
  /* 10408770 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10408774 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10408778:;
  /* 10408778 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1040877c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10408780:;
  /* 10408780 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10408784 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10408788:;
  /* 10408788 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040878c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10408790:;
  /* 10408790 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10408794 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10408798:;
  /* 10408798 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040879c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_104087a0:;
  /* 104087a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104087a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104087a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104087af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104087b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_104087b3:;
  /* 104087b3 jmp dword ptr [edx*4 + 0x104087bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104087bcu); u32 t_ = M32(m_); switch (t_) { case 0x104087ccu: goto L_104087cc; case 0x104087d4u: goto L_104087d4; case 0x104087e0u: goto L_104087e0; case 0x104087f4u: goto L_104087f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104087cc:;
  /* 104087cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087d4:;
  /* 104087d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087e0:;
  /* 104087e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087f4:;
  /* 104087f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408801 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408804 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408807 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408808 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408809 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040880a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408750(CPU *c) {
  NATIVE_HOOK(0x10408750u) REGS; LOADALL;
L_10408750:;
  /* 10408750 mov bl, 0x87 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x87u) & 0xffu); }
  /* 10408752 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408753 adc byte ptr [eax - 0x67efbf79], ah */ { const u32 m_ = (u32)(eax + 0x98104087u); u32 a_ = M8(m_), b_ = ((eax >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10408759 xchg dword ptr [eax + 0x10], eax */ { const u32 m_ = (u32)(eax + 0x10u); u32 o_ = (u32)__atomic_exchange_n((u32 *)HP(m_), (u32)eax, __ATOMIC_SEQ_CST); eax = (u32)(o_); }
  /* 1040875c nop */ ;
  /* 1040875d xchg dword ptr [eax + 0x10], eax */ { const u32 m_ = (u32)(eax + 0x10u); u32 o_ = (u32)__atomic_exchange_n((u32 *)HP(m_), (u32)eax, __ATOMIC_SEQ_CST); eax = (u32)(o_); }
  /* 10408760 mov byte ptr [edi - 0x787fefc0], al */ { const u32 m_ = (u32)(edi + 0x87801040u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408766 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408767 adc byte ptr [eax - 0x79], bh */ { const u32 m_ = (u32)(eax + 0xffffff87u); u32 a_ = M8(m_), b_ = ((ebx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 1040876a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040876b adc byte ptr [eax - 0x79], dh */ { const u32 m_ = (u32)(eax + 0xffffff87u); u32 a_ = M8(m_), b_ = ((edx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 1040876e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040876f adc byte ptr [ebx - 0x761b71bc], cl */ { const u32 m_ = (u32)(ebx + 0x89e48e44u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10408775 inc esp */ { u32 a_ = esp; u32 r_ = (a_ + 1u) & 0xffffffffu; esp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  TRAP(0x10408776u, "undecodable");
}

void F_10408770(CPU *c) {
  NATIVE_HOOK(0x10408770u) REGS; LOADALL;
L_10408770:;
  /* 10408770 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10408774 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10408778 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1040877c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 10408780 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10408784 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10408788 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040878c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10408790 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10408794 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10408798 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040879c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 104087a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104087a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104087a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104087af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104087b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104087b3 jmp dword ptr [edx*4 + 0x104087bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104087bcu); u32 t_ = M32(m_); switch (t_) { case 0x104087ccu: goto L_104087cc; case 0x104087d4u: goto L_104087d4; case 0x104087e0u: goto L_104087e0; case 0x104087f4u: goto L_104087f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104087cc:;
  /* 104087cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087d4:;
  /* 104087d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087e0:;
  /* 104087e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087f4:;
  /* 104087f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408801 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408804 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408807 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408808 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408809 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040880a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408778(CPU *c) {
  NATIVE_HOOK(0x10408778u) REGS; LOADALL;
L_10408778:;
  /* 10408778 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1040877c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 10408780 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10408784 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10408788 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040878c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10408790 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10408794 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10408798 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040879c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 104087a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104087a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104087a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104087af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104087b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104087b3 jmp dword ptr [edx*4 + 0x104087bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104087bcu); u32 t_ = M32(m_); switch (t_) { case 0x104087ccu: goto L_104087cc; case 0x104087d4u: goto L_104087d4; case 0x104087e0u: goto L_104087e0; case 0x104087f4u: goto L_104087f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104087cc:;
  /* 104087cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087d4:;
  /* 104087d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087e0:;
  /* 104087e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087f4:;
  /* 104087f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408801 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408804 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408807 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408808 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408809 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040880a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408780(CPU *c) {
  NATIVE_HOOK(0x10408780u) REGS; LOADALL;
L_10408780:;
  /* 10408780 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10408784 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10408788 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040878c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10408790 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10408794 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10408798 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040879c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 104087a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104087a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104087a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104087af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104087b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104087b3 jmp dword ptr [edx*4 + 0x104087bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104087bcu); u32 t_ = M32(m_); switch (t_) { case 0x104087ccu: goto L_104087cc; case 0x104087d4u: goto L_104087d4; case 0x104087e0u: goto L_104087e0; case 0x104087f4u: goto L_104087f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104087cc:;
  /* 104087cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087d4:;
  /* 104087d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087e0:;
  /* 104087e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087f4:;
  /* 104087f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408801 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408804 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408807 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408808 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408809 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040880a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408788(CPU *c) {
  NATIVE_HOOK(0x10408788u) REGS; LOADALL;
L_10408788:;
  /* 10408788 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1040878c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10408790 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10408794 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10408798 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040879c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 104087a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104087a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104087a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104087af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104087b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104087b3 jmp dword ptr [edx*4 + 0x104087bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104087bcu); u32 t_ = M32(m_); switch (t_) { case 0x104087ccu: goto L_104087cc; case 0x104087d4u: goto L_104087d4; case 0x104087e0u: goto L_104087e0; case 0x104087f4u: goto L_104087f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104087cc:;
  /* 104087cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087d4:;
  /* 104087d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087e0:;
  /* 104087e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087f4:;
  /* 104087f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408801 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408804 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408807 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408808 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408809 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040880a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408790(CPU *c) {
  NATIVE_HOOK(0x10408790u) REGS; LOADALL;
L_10408790:;
  /* 10408790 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10408794 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10408798 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040879c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 104087a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104087a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104087a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104087af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104087b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104087b3 jmp dword ptr [edx*4 + 0x104087bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104087bcu); u32 t_ = M32(m_); switch (t_) { case 0x104087ccu: goto L_104087cc; case 0x104087d4u: goto L_104087d4; case 0x104087e0u: goto L_104087e0; case 0x104087f4u: goto L_104087f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104087cc:;
  /* 104087cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087d4:;
  /* 104087d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087e0:;
  /* 104087e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087f4:;
  /* 104087f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408801 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408804 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408807 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408808 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408809 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040880a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408798(CPU *c) {
  NATIVE_HOOK(0x10408798u) REGS; LOADALL;
L_10408798:;
  /* 10408798 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1040879c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 104087a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104087a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104087a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104087af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104087b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104087b3 jmp dword ptr [edx*4 + 0x104087bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104087bcu); u32 t_ = M32(m_); switch (t_) { case 0x104087ccu: goto L_104087cc; case 0x104087d4u: goto L_104087d4; case 0x104087e0u: goto L_104087e0; case 0x104087f4u: goto L_104087f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104087cc:;
  /* 104087cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087d4:;
  /* 104087d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087e0:;
  /* 104087e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087f4:;
  /* 104087f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408801 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408804 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408807 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408808 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408809 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040880a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104087a0(CPU *c) {
  NATIVE_HOOK(0x104087a0u) REGS; LOADALL;
L_104087a0:;
  /* 104087a0 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104087a4 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104087a8 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 104087af add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104087b1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104087b3 jmp dword ptr [edx*4 + 0x104087bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104087bcu); u32 t_ = M32(m_); switch (t_) { case 0x104087ccu: goto L_104087cc; case 0x104087d4u: goto L_104087d4; case 0x104087e0u: goto L_104087e0; case 0x104087f4u: goto L_104087f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104087cc:;
  /* 104087cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087d4:;
  /* 104087d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087e0:;
  /* 104087e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087f4:;
  /* 104087f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408801 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408804 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408807 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408808 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408809 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040880a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104087b3(CPU *c) {
  NATIVE_HOOK(0x104087b3u) REGS; LOADALL;
L_104087b3:;
  /* 104087b3 jmp dword ptr [edx*4 + 0x104087bc] */ { const u32 m_ = (u32)(edx * 4u + 0x104087bcu); u32 t_ = M32(m_); switch (t_) { case 0x104087ccu: goto L_104087cc; case 0x104087d4u: goto L_104087d4; case 0x104087e0u: goto L_104087e0; case 0x104087f4u: goto L_104087f4; default: SAVEALL; call_ind(c, t_); return; } }
L_104087cc:;
  /* 104087cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087d4:;
  /* 104087d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087e0:;
  /* 104087e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104087f4:;
  /* 104087f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408801 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408804 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408807 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408808 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408809 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040880a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104087bc(CPU *c) {
  NATIVE_HOOK(0x104087bcu) REGS; LOADALL;
L_104087bc:;
  /* 104087bc int3 */ TRAP(0x104087bcu, "int3");
}

void F_104087cc(CPU *c) {
  NATIVE_HOOK(0x104087ccu) REGS; LOADALL;
L_104087cc:;
  /* 104087cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104087d4(CPU *c) {
  NATIVE_HOOK(0x104087d4u) REGS; LOADALL;
L_104087d4:;
  /* 104087d4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087d6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087dd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104087e0(CPU *c) {
  NATIVE_HOOK(0x104087e0u) REGS; LOADALL;
L_104087e0:;
  /* 104087e0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e2 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087e4 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087e7 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104087ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104087ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104087ef leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104087f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104087f4(CPU *c) {
  NATIVE_HOOK(0x104087f4u) REGS; LOADALL;
L_104087f4:;
  /* 104087f4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087f6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087f8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104087fb mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104087fe mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408801 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408804 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408807 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408808 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408809 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040880a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040885c(CPU *c) {
  NATIVE_HOOK(0x1040885cu) REGS; LOADALL;
L_1040885c:;
  /* 1040885c mov dword ptr [eax + 0x10], eax */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(eax); }
  /* 1040885f nop */ ;
  /* 10408860 insb byte ptr es:[edi], dx */ TRAP(0x10408860u, "insb");
}

void F_1040886c(CPU *c) {
  NATIVE_HOOK(0x1040886cu) REGS; LOADALL;
  goto L_1040886c;
L_10408834:;
  /* 10408834 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10408836 jmp dword ptr [ecx*4 + 0x10408908] */ { const u32 m_ = (u32)(ecx * 4u + 0x10408908u); u32 t_ = M32(m_); switch (t_) { case 0x1040894fu: goto L_1040894f; default: SAVEALL; call_ind(c, t_); return; } }
L_1040886c:;
  /* 1040886c mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040886f and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10408871 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408874 sub esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10408877 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1040887a sub edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040887d cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408880 jb 0x10408834 */ if (CF_) goto L_10408834;
  /* 10408882 std */ c->df = 1;
  /* 10408883 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10408885 cld */ c->df = 0;
  /* 10408886 jmp dword ptr [edx*4 + 0x10408958] */ { const u32 m_ = (u32)(edx * 4u + 0x10408958u); u32 t_ = M32(m_); switch (t_) { case 0x10408968u: goto L_10408968; case 0x10408970u: goto L_10408970; case 0x10408980u: goto L_10408980; case 0x10408994u: goto L_10408994; default: SAVEALL; call_ind(c, t_); return; } }
L_1040894f:;
  /* 1040894f jmp dword ptr [edx*4 + 0x10408958] */ { const u32 m_ = (u32)(edx * 4u + 0x10408958u); u32 t_ = M32(m_); switch (t_) { case 0x10408968u: goto L_10408968; case 0x10408970u: goto L_10408970; case 0x10408980u: goto L_10408980; case 0x10408994u: goto L_10408994; default: SAVEALL; call_ind(c, t_); return; } }
L_10408968:;
  /* 10408968 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040896b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040896c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040896d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040896e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408970:;
  /* 10408970 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408973 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408976 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408979 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040897a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040897b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040897c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408980:;
  /* 10408980 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408983 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408986 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408989 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040898c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040898f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408990 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408991 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10408992 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408994:;
  /* 10408994 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408997 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040899a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040899d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104089a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104089a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104089aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104089ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104089ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408890(CPU *c) {
  NATIVE_HOOK(0x10408890u) REGS; LOADALL;
  goto L_10408890;
L_10408834:;
  /* 10408834 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10408836 jmp dword ptr [ecx*4 + 0x10408908] */ { const u32 m_ = (u32)(ecx * 4u + 0x10408908u); u32 t_ = M32(m_); switch (t_) { case 0x1040894fu: goto L_1040894f; default: SAVEALL; call_ind(c, t_); return; } }
L_10408890:;
  /* 10408890 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408893 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10408895 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408898 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040889b shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1040889e mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104088a1 sub esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104088a4 sub edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104088a7 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104088aa jb 0x10408834 */ if (CF_) goto L_10408834;
  /* 104088ac std */ c->df = 1;
  /* 104088ad rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 104088af cld */ c->df = 0;
  /* 104088b0 jmp dword ptr [edx*4 + 0x10408958] */ { const u32 m_ = (u32)(edx * 4u + 0x10408958u); u32 t_ = M32(m_); switch (t_) { case 0x10408968u: goto L_10408968; case 0x10408970u: goto L_10408970; case 0x10408980u: goto L_10408980; case 0x10408994u: goto L_10408994; default: SAVEALL; call_ind(c, t_); return; } }
L_1040894f:;
  /* 1040894f jmp dword ptr [edx*4 + 0x10408958] */ { const u32 m_ = (u32)(edx * 4u + 0x10408958u); u32 t_ = M32(m_); switch (t_) { case 0x10408968u: goto L_10408968; case 0x10408970u: goto L_10408970; case 0x10408980u: goto L_10408980; case 0x10408994u: goto L_10408994; default: SAVEALL; call_ind(c, t_); return; } }
L_10408968:;
  /* 10408968 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040896b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040896c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040896d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040896e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408970:;
  /* 10408970 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408973 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408976 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408979 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040897a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040897b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040897c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408980:;
  /* 10408980 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408983 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408986 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408989 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040898c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040898f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408990 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408991 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10408992 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408994:;
  /* 10408994 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408997 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040899a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040899d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104089a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104089a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104089aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104089ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104089ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104088b8(CPU *c) {
  NATIVE_HOOK(0x104088b8u) REGS; LOADALL;
  goto L_104088b8;
L_10408834:;
  /* 10408834 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10408836 jmp dword ptr [ecx*4 + 0x10408908] */ { const u32 m_ = (u32)(ecx * 4u + 0x10408908u); u32 t_ = M32(m_); switch (t_) { case 0x1040894fu: goto L_1040894f; default: SAVEALL; call_ind(c, t_); return; } }
L_104088b8:;
  /* 104088b8 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104088bb and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 104088bd mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104088c0 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104088c3 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104088c6 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104088c9 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 104088cc mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104088cf sub esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104088d2 sub edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104088d5 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104088d8 jb 0x10408834 */ if (CF_) goto L_10408834;
  /* 104088de std */ c->df = 1;
  /* 104088df rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 104088e1 cld */ c->df = 0;
  /* 104088e2 jmp dword ptr [edx*4 + 0x10408958] */ { const u32 m_ = (u32)(edx * 4u + 0x10408958u); u32 t_ = M32(m_); switch (t_) { case 0x10408968u: goto L_10408968; case 0x10408970u: goto L_10408970; case 0x10408980u: goto L_10408980; case 0x10408994u: goto L_10408994; default: SAVEALL; call_ind(c, t_); return; } }
L_1040894f:;
  /* 1040894f jmp dword ptr [edx*4 + 0x10408958] */ { const u32 m_ = (u32)(edx * 4u + 0x10408958u); u32 t_ = M32(m_); switch (t_) { case 0x10408968u: goto L_10408968; case 0x10408970u: goto L_10408970; case 0x10408980u: goto L_10408980; case 0x10408994u: goto L_10408994; default: SAVEALL; call_ind(c, t_); return; } }
L_10408968:;
  /* 10408968 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040896b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040896c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040896d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040896e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408970:;
  /* 10408970 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408973 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408976 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408979 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040897a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040897b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040897c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408980:;
  /* 10408980 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408983 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408986 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408989 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040898c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040898f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408990 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408991 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10408992 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408994:;
  /* 10408994 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408997 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040899a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040899d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104089a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104089a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104089aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104089ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104089ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408908(CPU *c) {
  NATIVE_HOOK(0x10408908u) REGS; LOADALL;
L_10408908:;
  /* 10408908 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10408909 mov dword ptr [eax + 0x10], eax */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(eax); }
  /* 1040890c mov eax, dword ptr [esi + ecx*4 + 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10408910 mov dword ptr [edi + ecx*4 + 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10408914 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 10408918 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 1040891c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10408920 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10408924 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10408928 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1040892c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10408930 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10408934 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408938 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1040893c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10408940 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10408944 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1040894b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040894d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040894f jmp dword ptr [edx*4 + 0x10408958] */ { const u32 m_ = (u32)(edx * 4u + 0x10408958u); u32 t_ = M32(m_); switch (t_) { case 0x10408968u: goto L_10408968; case 0x10408970u: goto L_10408970; case 0x10408980u: goto L_10408980; case 0x10408994u: goto L_10408994; default: SAVEALL; call_ind(c, t_); return; } }
L_10408968:;
  /* 10408968 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040896b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040896c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040896d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040896e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408970:;
  /* 10408970 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408973 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408976 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408979 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040897a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040897b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040897c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408980:;
  /* 10408980 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408983 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408986 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408989 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040898c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040898f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408990 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408991 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10408992 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408994:;
  /* 10408994 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408997 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040899a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040899d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104089a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104089a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104089aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104089ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104089ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040890c(CPU *c) {
  NATIVE_HOOK(0x1040890cu) REGS; LOADALL;
L_1040890c:;
  /* 1040890c mov eax, dword ptr [esi + ecx*4 + 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10408910 mov dword ptr [edi + ecx*4 + 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10408914 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 10408918 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 1040891c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10408920 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10408924 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10408928 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1040892c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10408930 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10408934 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408938 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1040893c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10408940 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10408944 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1040894b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040894d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040894f jmp dword ptr [edx*4 + 0x10408958] */ { const u32 m_ = (u32)(edx * 4u + 0x10408958u); u32 t_ = M32(m_); switch (t_) { case 0x10408968u: goto L_10408968; case 0x10408970u: goto L_10408970; case 0x10408980u: goto L_10408980; case 0x10408994u: goto L_10408994; default: SAVEALL; call_ind(c, t_); return; } }
L_10408968:;
  /* 10408968 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040896b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040896c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040896d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040896e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408970:;
  /* 10408970 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408973 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408976 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408979 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040897a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040897b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040897c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408980:;
  /* 10408980 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408983 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408986 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408989 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040898c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040898f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408990 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408991 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10408992 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408994:;
  /* 10408994 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408997 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040899a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040899d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104089a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104089a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104089aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104089ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104089ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408914(CPU *c) {
  NATIVE_HOOK(0x10408914u) REGS; LOADALL;
L_10408914:;
  /* 10408914 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 10408918 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 1040891c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10408920 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10408924 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10408928 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1040892c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10408930 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10408934 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408938 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1040893c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10408940 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10408944 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1040894b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040894d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040894f jmp dword ptr [edx*4 + 0x10408958] */ { const u32 m_ = (u32)(edx * 4u + 0x10408958u); u32 t_ = M32(m_); switch (t_) { case 0x10408968u: goto L_10408968; case 0x10408970u: goto L_10408970; case 0x10408980u: goto L_10408980; case 0x10408994u: goto L_10408994; default: SAVEALL; call_ind(c, t_); return; } }
L_10408968:;
  /* 10408968 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040896b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040896c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040896d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040896e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408970:;
  /* 10408970 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408973 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408976 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408979 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040897a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040897b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040897c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408980:;
  /* 10408980 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408983 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408986 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408989 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040898c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040898f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408990 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408991 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10408992 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408994:;
  /* 10408994 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408997 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040899a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040899d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104089a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104089a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104089aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104089ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104089ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040891c(CPU *c) {
  NATIVE_HOOK(0x1040891cu) REGS; LOADALL;
L_1040891c:;
  /* 1040891c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10408920 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10408924 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10408928 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1040892c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10408930 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10408934 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408938 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1040893c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10408940 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10408944 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1040894b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040894d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040894f jmp dword ptr [edx*4 + 0x10408958] */ { const u32 m_ = (u32)(edx * 4u + 0x10408958u); u32 t_ = M32(m_); switch (t_) { case 0x10408968u: goto L_10408968; case 0x10408970u: goto L_10408970; case 0x10408980u: goto L_10408980; case 0x10408994u: goto L_10408994; default: SAVEALL; call_ind(c, t_); return; } }
L_10408968:;
  /* 10408968 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040896b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040896c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040896d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040896e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408970:;
  /* 10408970 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408973 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408976 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408979 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040897a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040897b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040897c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408980:;
  /* 10408980 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408983 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408986 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408989 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040898c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040898f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408990 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408991 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10408992 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408994:;
  /* 10408994 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408997 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040899a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040899d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104089a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104089a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104089aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104089ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104089ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408924(CPU *c) {
  NATIVE_HOOK(0x10408924u) REGS; LOADALL;
L_10408924:;
  /* 10408924 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10408928 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1040892c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10408930 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10408934 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408938 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1040893c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10408940 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10408944 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1040894b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040894d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040894f jmp dword ptr [edx*4 + 0x10408958] */ { const u32 m_ = (u32)(edx * 4u + 0x10408958u); u32 t_ = M32(m_); switch (t_) { case 0x10408968u: goto L_10408968; case 0x10408970u: goto L_10408970; case 0x10408980u: goto L_10408980; case 0x10408994u: goto L_10408994; default: SAVEALL; call_ind(c, t_); return; } }
L_10408968:;
  /* 10408968 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040896b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040896c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040896d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040896e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408970:;
  /* 10408970 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408973 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408976 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408979 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040897a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040897b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040897c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408980:;
  /* 10408980 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408983 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408986 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408989 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040898c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040898f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408990 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408991 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10408992 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408994:;
  /* 10408994 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408997 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040899a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040899d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104089a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104089a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104089aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104089ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104089ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040892c(CPU *c) {
  NATIVE_HOOK(0x1040892cu) REGS; LOADALL;
L_1040892c:;
  /* 1040892c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10408930 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10408934 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408938 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1040893c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10408940 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10408944 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1040894b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040894d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040894f jmp dword ptr [edx*4 + 0x10408958] */ { const u32 m_ = (u32)(edx * 4u + 0x10408958u); u32 t_ = M32(m_); switch (t_) { case 0x10408968u: goto L_10408968; case 0x10408970u: goto L_10408970; case 0x10408980u: goto L_10408980; case 0x10408994u: goto L_10408994; default: SAVEALL; call_ind(c, t_); return; } }
L_10408968:;
  /* 10408968 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040896b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040896c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040896d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040896e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408970:;
  /* 10408970 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408973 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408976 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408979 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040897a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040897b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040897c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408980:;
  /* 10408980 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408983 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408986 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408989 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040898c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040898f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408990 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408991 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10408992 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408994:;
  /* 10408994 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408997 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040899a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040899d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104089a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104089a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104089aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104089ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104089ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408934(CPU *c) {
  NATIVE_HOOK(0x10408934u) REGS; LOADALL;
L_10408934:;
  /* 10408934 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408938 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1040893c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10408940 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10408944 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1040894b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040894d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040894f jmp dword ptr [edx*4 + 0x10408958] */ { const u32 m_ = (u32)(edx * 4u + 0x10408958u); u32 t_ = M32(m_); switch (t_) { case 0x10408968u: goto L_10408968; case 0x10408970u: goto L_10408970; case 0x10408980u: goto L_10408980; case 0x10408994u: goto L_10408994; default: SAVEALL; call_ind(c, t_); return; } }
L_10408968:;
  /* 10408968 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040896b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040896c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040896d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040896e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408970:;
  /* 10408970 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408973 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408976 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408979 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040897a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040897b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040897c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408980:;
  /* 10408980 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408983 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408986 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408989 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040898c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040898f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408990 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408991 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10408992 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408994:;
  /* 10408994 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408997 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040899a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040899d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104089a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104089a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104089aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104089ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104089ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040893c(CPU *c) {
  NATIVE_HOOK(0x1040893cu) REGS; LOADALL;
L_1040893c:;
  /* 1040893c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10408940 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10408944 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1040894b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040894d add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040894f jmp dword ptr [edx*4 + 0x10408958] */ { const u32 m_ = (u32)(edx * 4u + 0x10408958u); u32 t_ = M32(m_); switch (t_) { case 0x10408968u: goto L_10408968; case 0x10408970u: goto L_10408970; case 0x10408980u: goto L_10408980; case 0x10408994u: goto L_10408994; default: SAVEALL; call_ind(c, t_); return; } }
L_10408968:;
  /* 10408968 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040896b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040896c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040896d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040896e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408970:;
  /* 10408970 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408973 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408976 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408979 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040897a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040897b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040897c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408980:;
  /* 10408980 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408983 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408986 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408989 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040898c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040898f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408990 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408991 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10408992 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408994:;
  /* 10408994 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408997 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040899a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040899d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104089a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104089a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104089aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104089ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104089ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040894f(CPU *c) {
  NATIVE_HOOK(0x1040894fu) REGS; LOADALL;
L_1040894f:;
  /* 1040894f jmp dword ptr [edx*4 + 0x10408958] */ { const u32 m_ = (u32)(edx * 4u + 0x10408958u); u32 t_ = M32(m_); switch (t_) { case 0x10408968u: goto L_10408968; case 0x10408970u: goto L_10408970; case 0x10408980u: goto L_10408980; case 0x10408994u: goto L_10408994; default: SAVEALL; call_ind(c, t_); return; } }
L_10408968:;
  /* 10408968 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040896b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040896c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040896d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040896e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408970:;
  /* 10408970 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408973 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408976 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408979 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040897a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040897b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040897c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408980:;
  /* 10408980 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408983 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408986 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408989 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040898c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040898f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408990 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408991 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10408992 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408994:;
  /* 10408994 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408997 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040899a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040899d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104089a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104089a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104089aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104089ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104089ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408958(CPU *c) {
  NATIVE_HOOK(0x10408958u) REGS; LOADALL;
L_10408958:;
  /* 10408958 push 0x70104089 */ { u32 v_ = 0x70104089u; esp -= 4; M32(esp) = v_; }
  /* 1040895d mov dword ptr [eax + 0x10], eax */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(eax); }
  /* 10408960 or byte ptr [ecx - 0x766befc0], 0x40 */ { const u32 m_ = (u32)(ecx + 0x89941040u); u32 a_ = M8(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10408967 adc byte ptr [ebx + 0x5f5e0845], cl */ { const u32 m_ = (u32)(ebx + 0x5f5e0845u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 1040896d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040896e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408968(CPU *c) {
  NATIVE_HOOK(0x10408968u) REGS; LOADALL;
L_10408968:;
  /* 10408968 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040896b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040896c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040896d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040896e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408970(CPU *c) {
  NATIVE_HOOK(0x10408970u) REGS; LOADALL;
L_10408970:;
  /* 10408970 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408973 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408976 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408979 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040897a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040897b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040897c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408980(CPU *c) {
  NATIVE_HOOK(0x10408980u) REGS; LOADALL;
L_10408980:;
  /* 10408980 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408983 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408986 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408989 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040898c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040898f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408990 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408991 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10408992 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408994(CPU *c) {
  NATIVE_HOOK(0x10408994u) REGS; LOADALL;
L_10408994:;
  /* 10408994 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408997 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1040899a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040899d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a0 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104089a3 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 104089a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104089a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104089aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104089ab leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 104089ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104089ad(CPU *c) {
  NATIVE_HOOK(0x104089adu) REGS; LOADALL;
L_104089ad:;
  /* 104089ad push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104089ae mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 104089b2 mov eax, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 104089b5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104089b6 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 104089b8 cmp eax, dword ptr [0x1040dc84] */ { const u32 m_ = (u32)(0x1040dc84u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104089be je 0x10408a23 */ if (ZF_) goto L_10408a23;
  /* 104089c0 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104089c2 je 0x10408a23 */ if (ZF_) goto L_10408a23;
  /* 104089c4 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 104089c7 cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104089c9 jne 0x10408a23 */ if (!ZF_) goto L_10408a23;
  /* 104089cb mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 104089ce cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104089d0 je 0x104089ee */ if (ZF_) goto L_104089ee;
  /* 104089d2 cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104089d4 jne 0x104089ee */ if (!ZF_) goto L_104089ee;
  /* 104089d6 cmp eax, dword ptr [0x1040dde0] */ { const u32 m_ = (u32)(0x1040dde0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104089dc je 0x104089ee */ if (ZF_) goto L_104089ee;
  /* 104089de push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104089df call 0x1040549e */ esp -= 4; M32(esp) = 0x104089e4u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x104089dfu); RETCHK(0x104089e4u, 0x104089dfu); LOADALL;
  /* 104089e4 push dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104089e7 call 0x104097a5 */ esp -= 4; M32(esp) = 0x104089ecu; SAVEALL; F_104097a5(c); ABI_CHECK(0x104097a5u, 0x104089e7u); RETCHK(0x104089ecu, 0x104089e7u); LOADALL;
  /* 104089ec pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104089ed pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_104089ee:;
  /* 104089ee mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 104089f1 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104089f3 je 0x10408a11 */ if (ZF_) goto L_10408a11;
  /* 104089f5 cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104089f7 jne 0x10408a11 */ if (!ZF_) goto L_10408a11;
  /* 104089f9 cmp eax, dword ptr [0x1040dde4] */ { const u32 m_ = (u32)(0x1040dde4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104089ff je 0x10408a11 */ if (ZF_) goto L_10408a11;
  /* 10408a01 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10408a02 call 0x1040549e */ esp -= 4; M32(esp) = 0x10408a07u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10408a02u); RETCHK(0x10408a07u, 0x10408a02u); LOADALL;
  /* 10408a07 push dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408a0a call 0x10409746 */ esp -= 4; M32(esp) = 0x10408a0fu; SAVEALL; F_10409746(c); ABI_CHECK(0x10409746u, 0x10408a0au); RETCHK(0x10408a0fu, 0x10408a0au); LOADALL;
  /* 10408a0f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10408a10 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10408a11:;
  /* 10408a11 push dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408a14 call 0x1040549e */ esp -= 4; M32(esp) = 0x10408a19u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10408a14u); RETCHK(0x10408a19u, 0x10408a14u); LOADALL;
  /* 10408a19 push dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408a1c call 0x1040549e */ esp -= 4; M32(esp) = 0x10408a21u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10408a1cu); RETCHK(0x10408a21u, 0x10408a1cu); LOADALL;
  /* 10408a21 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10408a22 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10408a23:;
  /* 10408a23 mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 10408a26 cmp eax, dword ptr [0x1040dddc] */ { const u32 m_ = (u32)(0x1040dddcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408a2c je 0x10408a4c */ if (ZF_) goto L_10408a4c;
  /* 10408a2e cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408a30 je 0x10408a4c */ if (ZF_) goto L_10408a4c;
  /* 10408a32 cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408a34 jne 0x10408a4c */ if (!ZF_) goto L_10408a4c;
  /* 10408a36 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10408a37 call 0x1040549e */ esp -= 4; M32(esp) = 0x10408a3cu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10408a37u); RETCHK(0x10408a3cu, 0x10408a37u); LOADALL;
  /* 10408a3c mov eax, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); eax = (u32)(M32(m_)); }
  /* 10408a3f sub eax, 0xfe */ { u32 a_ = eax, b_ = 0xfeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10408a44 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10408a45 call 0x1040549e */ esp -= 4; M32(esp) = 0x10408a4au; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10408a45u); RETCHK(0x10408a4au, 0x10408a45u); LOADALL;
  /* 10408a4a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10408a4b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10408a4c:;
  /* 10408a4c mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 10408a4f cmp eax, dword ptr [0x1040dc80] */ { const u32 m_ = (u32)(0x1040dc80u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408a55 je 0x10408a73 */ if (ZF_) goto L_10408a73;
  /* 10408a57 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408a59 je 0x10408a73 */ if (ZF_) goto L_10408a73;
  /* 10408a5b cmp dword ptr [eax + 0xb4], edi */ { const u32 m_ = (u32)(eax + 0xb4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408a61 jne 0x10408a73 */ if (!ZF_) goto L_10408a73;
  /* 10408a63 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10408a64 call 0x104095b6 */ esp -= 4; M32(esp) = 0x10408a69u; SAVEALL; F_104095b6(c); ABI_CHECK(0x104095b6u, 0x10408a64u); RETCHK(0x10408a69u, 0x10408a64u); LOADALL;
  /* 10408a69 push dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408a6c call 0x1040549e */ esp -= 4; M32(esp) = 0x10408a71u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10408a6cu); RETCHK(0x10408a71u, 0x10408a6cu); LOADALL;
  /* 10408a71 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10408a72 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10408a73:;
  /* 10408a73 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10408a74 call 0x1040549e */ esp -= 4; M32(esp) = 0x10408a79u; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10408a74u); RETCHK(0x10408a79u, 0x10408a74u); LOADALL;
  /* 10408a79 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10408a7a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408a7b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408a7c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408a7d(CPU *c) {
  NATIVE_HOOK(0x10408a7du) REGS; LOADALL;
L_10408a7d:;
  /* 10408a7d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10408a7e call 0x104061b1 */ esp -= 4; M32(esp) = 0x10408a83u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10408a7eu); RETCHK(0x10408a83u, 0x10408a7eu); LOADALL;
  /* 10408a83 mov esi, eax */ { esi = (u32)(eax); }
  /* 10408a85 mov ecx, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); ecx = (u32)(M32(m_)); }
  /* 10408a88 cmp ecx, dword ptr [0x1040d33c] */ { const u32 m_ = (u32)(0x1040d33cu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408a8e je 0x10408b39 */ if (ZF_) goto L_10408b39;
  /* 10408a94 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10408a96 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408a98 je 0x10408ac9 */ if (ZF_) goto L_10408ac9;
  /* 10408a9a mov eax, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 10408a9d dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10408a9f cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408aa1 je 0x10408aa5 */ if (ZF_) goto L_10408aa5;
  /* 10408aa3 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10408aa5:;
  /* 10408aa5 mov eax, dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); eax = (u32)(M32(m_)); }
  /* 10408aa8 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408aaa je 0x10408aae */ if (ZF_) goto L_10408aae;
  /* 10408aac dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10408aae:;
  /* 10408aae mov eax, dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); eax = (u32)(M32(m_)); }
  /* 10408ab1 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408ab3 je 0x10408ab7 */ if (ZF_) goto L_10408ab7;
  /* 10408ab5 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10408ab7:;
  /* 10408ab7 mov eax, dword ptr [ecx + 0x40] */ { const u32 m_ = (u32)(ecx + 0x40u); eax = (u32)(M32(m_)); }
  /* 10408aba cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408abc je 0x10408ac0 */ if (ZF_) goto L_10408ac0;
  /* 10408abe dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10408ac0:;
  /* 10408ac0 mov eax, dword ptr [ecx + 0x4c] */ { const u32 m_ = (u32)(ecx + 0x4cu); eax = (u32)(M32(m_)); }
  /* 10408ac3 dec dword ptr [eax + 0xb4] */ { const u32 m_ = (u32)(eax + 0xb4u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10408ac9:;
  /* 10408ac9 mov eax, dword ptr [0x1040d33c] */ { const u32 m_ = (u32)(0x1040d33cu); eax = (u32)(M32(m_)); }
  /* 10408ace mov dword ptr [esi + 0x64], eax */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(eax); }
  /* 10408ad1 mov eax, dword ptr [0x1040d33c] */ { const u32 m_ = (u32)(0x1040d33cu); eax = (u32)(M32(m_)); }
  /* 10408ad6 inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408ad8 mov eax, dword ptr [0x1040d33c] */ { const u32 m_ = (u32)(0x1040d33cu); eax = (u32)(M32(m_)); }
  /* 10408add cmp dword ptr [eax + 0x2c], edx */ { const u32 m_ = (u32)(eax + 0x2cu); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408ae0 je 0x10408aec */ if (ZF_) goto L_10408aec;
  /* 10408ae2 mov eax, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); eax = (u32)(M32(m_)); }
  /* 10408ae5 inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408ae7 mov eax, dword ptr [0x1040d33c] */ { const u32 m_ = (u32)(0x1040d33cu); eax = (u32)(M32(m_)); }
L_10408aec:;
  /* 10408aec cmp dword ptr [eax + 0x34], edx */ { const u32 m_ = (u32)(eax + 0x34u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408aef je 0x10408afb */ if (ZF_) goto L_10408afb;
  /* 10408af1 mov eax, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); eax = (u32)(M32(m_)); }
  /* 10408af4 inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408af6 mov eax, dword ptr [0x1040d33c] */ { const u32 m_ = (u32)(0x1040d33cu); eax = (u32)(M32(m_)); }
L_10408afb:;
  /* 10408afb cmp dword ptr [eax + 0x30], edx */ { const u32 m_ = (u32)(eax + 0x30u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408afe je 0x10408b0a */ if (ZF_) goto L_10408b0a;
  /* 10408b00 mov eax, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); eax = (u32)(M32(m_)); }
  /* 10408b03 inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408b05 mov eax, dword ptr [0x1040d33c] */ { const u32 m_ = (u32)(0x1040d33cu); eax = (u32)(M32(m_)); }
L_10408b0a:;
  /* 10408b0a cmp dword ptr [eax + 0x40], edx */ { const u32 m_ = (u32)(eax + 0x40u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408b0d je 0x10408b19 */ if (ZF_) goto L_10408b19;
  /* 10408b0f mov eax, dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); eax = (u32)(M32(m_)); }
  /* 10408b12 inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408b14 mov eax, dword ptr [0x1040d33c] */ { const u32 m_ = (u32)(0x1040d33cu); eax = (u32)(M32(m_)); }
L_10408b19:;
  /* 10408b19 mov eax, dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); eax = (u32)(M32(m_)); }
  /* 10408b1c inc dword ptr [eax + 0xb4] */ { const u32 m_ = (u32)(eax + 0xb4u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408b22 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408b24 je 0x10408b39 */ if (ZF_) goto L_10408b39;
  /* 10408b26 cmp dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408b28 jne 0x10408b39 */ if (!ZF_) goto L_10408b39;
  /* 10408b2a cmp ecx, 0x1040d2e8 */ { u32 a_ = ecx, b_ = 0x1040d2e8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408b30 je 0x10408b39 */ if (ZF_) goto L_10408b39;
  /* 10408b32 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10408b33 call 0x104089ad */ esp -= 4; M32(esp) = 0x10408b38u; SAVEALL; F_104089ad(c); ABI_CHECK(0x104089adu, 0x10408b33u); RETCHK(0x10408b38u, 0x10408b33u); LOADALL;
  /* 10408b38 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10408b39:;
  /* 10408b39 mov eax, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); eax = (u32)(M32(m_)); }
  /* 10408b3c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408b3d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408b3e(CPU *c) {
  NATIVE_HOOK(0x10408b3eu) REGS; LOADALL;
L_10408b3e:;
  /* 10408b3e push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10408b40 push 0x1040baa0 */ { u32 v_ = 0x1040baa0u; esp -= 4; M32(esp) = v_; }
  /* 10408b45 call 0x104056c0 */ esp -= 4; M32(esp) = 0x10408b4au; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x10408b45u); RETCHK(0x10408b4au, 0x10408b45u); LOADALL;
  /* 10408b4a push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10408b4c call 0x104073d3 */ esp -= 4; M32(esp) = 0x10408b51u; SAVEALL; F_104073d3(c); ABI_CHECK(0x104073d3u, 0x10408b4cu); RETCHK(0x10408b51u, 0x10408b4cu); LOADALL;
  /* 10408b51 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10408b52 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10408b56 call 0x10408a7d */ esp -= 4; M32(esp) = 0x10408b5bu; SAVEALL; F_10408a7d(c); ABI_CHECK(0x10408a7du, 0x10408b56u); RETCHK(0x10408b5bu, 0x10408b56u); LOADALL;
  /* 10408b5b mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10408b5e or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10408b62 call 0x10408b70 */ esp -= 4; M32(esp) = 0x10408b67u; SAVEALL; F_10408b70(c); ABI_CHECK(0x10408b70u, 0x10408b62u); RETCHK(0x10408b67u, 0x10408b62u); LOADALL;
  /* 10408b67 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10408b6a call 0x104056fb */ esp -= 4; M32(esp) = 0x10408b6fu; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10408b6au); RETCHK(0x10408b6fu, 0x10408b6au); LOADALL;
  /* 10408b6f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408b70(CPU *c) {
  NATIVE_HOOK(0x10408b70u) REGS; LOADALL;
L_10408b70:;
  /* 10408b70 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10408b72 call 0x1040731e */ esp -= 4; M32(esp) = 0x10408b77u; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x10408b72u); RETCHK(0x10408b77u, 0x10408b72u); LOADALL;
  /* 10408b77 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10408b78 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408b79(CPU *c) {
  NATIVE_HOOK(0x10408b79u) REGS; LOADALL;
L_10408b79:;
  /* 10408b79 sub eax, 0x3a4 */ { u32 a_ = eax, b_ = 0x3a4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10408b7e je 0x10408ba2 */ if (ZF_) goto L_10408ba2;
  /* 10408b80 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10408b83 je 0x10408b9c */ if (ZF_) goto L_10408b9c;
  /* 10408b85 sub eax, 0xd */ { u32 a_ = eax, b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10408b88 je 0x10408b96 */ if (ZF_) goto L_10408b96;
  /* 10408b8a dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10408b8b je 0x10408b90 */ if (ZF_) goto L_10408b90;
  /* 10408b8d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10408b8f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408b90:;
  /* 10408b90 mov eax, 0x404 */ { eax = (u32)(0x404u); }
  /* 10408b95 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408b96:;
  /* 10408b96 mov eax, 0x412 */ { eax = (u32)(0x412u); }
  /* 10408b9b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408b9c:;
  /* 10408b9c mov eax, 0x804 */ { eax = (u32)(0x804u); }
  /* 10408ba1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10408ba2:;
  /* 10408ba2 mov eax, 0x411 */ { eax = (u32)(0x411u); }
  /* 10408ba7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408ba8(CPU *c) {
  NATIVE_HOOK(0x10408ba8u) REGS; LOADALL;
L_10408ba8:;
  /* 10408ba8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10408ba9 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 10408bab xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10408bad pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10408bae mov edi, 0x1040de00 */ { edi = (u32)(0x1040de00u); }
  /* 10408bb3 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10408bb5 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 10408bb6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10408bb8 mov dword ptr [0x1040df04], eax */ { const u32 m_ = (u32)(0x1040df04u); M32(m_) = (u32)(eax); }
  /* 10408bbd mov dword ptr [0x1040ddf0], eax */ { const u32 m_ = (u32)(0x1040ddf0u); M32(m_) = (u32)(eax); }
  /* 10408bc2 mov dword ptr [0x1040dde8], eax */ { const u32 m_ = (u32)(0x1040dde8u); M32(m_) = (u32)(eax); }
  /* 10408bc7 mov edi, 0x1040df10 */ { edi = (u32)(0x1040df10u); }
  /* 10408bcc stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = (u32)eax; edi += st_; }
  /* 10408bcd stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = (u32)eax; edi += st_; }
  /* 10408bce stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = (u32)eax; edi += st_; }
  /* 10408bcf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408bd0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408bd1(CPU *c) {
  NATIVE_HOOK(0x10408bd1u) REGS; LOADALL;
L_10408bd1:;
  /* 10408bd1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10408bd2 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10408bd4 sub esp, 0x518 */ { u32 a_ = esp, b_ = 0x518u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10408bda mov eax, dword ptr [0x1040d040] */ { const u32 m_ = (u32)(0x1040d040u); eax = (u32)(M32(m_)); }
  /* 10408bdf mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10408be2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10408be3 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 10408be6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10408be7 push dword ptr [0x1040df04] */ { const u32 m_ = (u32)(0x1040df04u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408bed call dword ptr [0x1040b0c8] */ { const u32 m_ = (u32)(0x1040b0c8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10408bf3u; SAVEALL; call_ind(c, t_); RETCHK(0x10408bf3u, 0x10408bedu); LOADALL; }
  /* 10408bf3 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408bf6 mov esi, 0x100 */ { esi = (u32)(0x100u); }
  /* 10408bfb jne 0x10408d0e */ if (!ZF_) goto L_10408d0e;
  /* 10408c01 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10408c03:;
  /* 10408c03 mov byte ptr [ebp + eax - 0x118], al */ { const u32 m_ = (u32)(ebp + eax + 0xfffffee8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10408c0a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408c0b cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408c0d jb 0x10408c03 */ if (CF_) goto L_10408c03;
  /* 10408c0f mov al, byte ptr [ebp - 0x12] */ { const u32 m_ = (u32)(ebp + 0xffffffeeu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408c12 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10408c14 mov byte ptr [ebp - 0x118], 0x20 */ { const u32 m_ = (u32)(ebp + 0xfffffee8u); M8(m_) = (u8)(0x20u); }
  /* 10408c1b je 0x10408c53 */ if (ZF_) goto L_10408c53;
  /* 10408c1d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10408c1e lea edx, [ebp - 0x11] */ edx = (u32)((u32)(ebp + 0xffffffefu));
  /* 10408c21 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_10408c22:;
  /* 10408c22 movzx ecx, byte ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M8(m_)); }
  /* 10408c25 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 10408c28 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408c2a ja 0x10408c49 */ if (!(CF_|ZF_)) goto L_10408c49;
  /* 10408c2c sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10408c2e inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408c2f mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10408c31 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10408c34 lea edi, [ebp + eax - 0x118] */ edi = (u32)((u32)(ebp + eax + 0xfffffee8u));
  /* 10408c3b mov eax, 0x20202020 */ { eax = (u32)(0x20202020u); }
  /* 10408c40 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10408c42 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10408c44 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10408c47 rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
L_10408c49:;
  /* 10408c49 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408c4a mov al, byte ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408c4c inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408c4d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10408c4f jne 0x10408c22 */ if (!ZF_) goto L_10408c22;
  /* 10408c51 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408c52 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_10408c53:;
  /* 10408c53 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10408c55 push dword ptr [0x1040dde8] */ { const u32 m_ = (u32)(0x1040dde8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408c5b lea eax, [ebp - 0x518] */ eax = (u32)((u32)(ebp + 0xfffffae8u));
  /* 10408c61 push dword ptr [0x1040df04] */ { const u32 m_ = (u32)(0x1040df04u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408c67 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10408c68 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10408c69 lea eax, [ebp - 0x118] */ eax = (u32)((u32)(ebp + 0xfffffee8u));
  /* 10408c6f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10408c70 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10408c72 call 0x10409988 */ esp -= 4; M32(esp) = 0x10408c77u; SAVEALL; F_10409988(c); ABI_CHECK(0x10409988u, 0x10408c72u); RETCHK(0x10408c77u, 0x10408c72u); LOADALL;
  /* 10408c77 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10408c79 push dword ptr [0x1040df04] */ { const u32 m_ = (u32)(0x1040df04u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408c7f lea eax, [ebp - 0x218] */ eax = (u32)((u32)(ebp + 0xfffffde8u));
  /* 10408c85 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10408c86 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10408c87 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10408c88 lea eax, [ebp - 0x118] */ eax = (u32)((u32)(ebp + 0xfffffee8u));
  /* 10408c8e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10408c8f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10408c90 push dword ptr [0x1040dde8] */ { const u32 m_ = (u32)(0x1040dde8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408c96 call 0x10409bd0 */ esp -= 4; M32(esp) = 0x10408c9bu; SAVEALL; F_10409bd0(c); ABI_CHECK(0x10409bd0u, 0x10408c96u); RETCHK(0x10408c9bu, 0x10408c96u); LOADALL;
  /* 10408c9b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10408c9d push dword ptr [0x1040df04] */ { const u32 m_ = (u32)(0x1040df04u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408ca3 lea eax, [ebp - 0x318] */ eax = (u32)((u32)(ebp + 0xfffffce8u));
  /* 10408ca9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10408caa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10408cab push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10408cac lea eax, [ebp - 0x118] */ eax = (u32)((u32)(ebp + 0xfffffee8u));
  /* 10408cb2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10408cb3 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 10408cb8 push dword ptr [0x1040dde8] */ { const u32 m_ = (u32)(0x1040dde8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408cbe call 0x10409bd0 */ esp -= 4; M32(esp) = 0x10408cc3u; SAVEALL; F_10409bd0(c); ABI_CHECK(0x10409bd0u, 0x10408cbeu); RETCHK(0x10408cc3u, 0x10408cbeu); LOADALL;
  /* 10408cc3 add esp, 0x5c */ { u32 a_ = esp, b_ = 0x5cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10408cc6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10408cc8:;
  /* 10408cc8 mov cx, word ptr [ebp + eax*2 - 0x518] */ { const u32 m_ = (u32)(ebp + eax * 2u + 0xfffffae8u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10408cd0 test cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10408cd3 je 0x10408ceb */ if (ZF_) goto L_10408ceb;
  /* 10408cd5 or byte ptr [eax + 0x1040de01], 0x10 */ { const u32 m_ = (u32)(eax + 0x1040de01u); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10408cdc mov cl, byte ptr [ebp + eax - 0x218] */ { const u32 m_ = (u32)(ebp + eax + 0xfffffde8u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
L_10408ce3:;
  /* 10408ce3 mov byte ptr [eax + 0x1040df20], cl */ { const u32 m_ = (u32)(eax + 0x1040df20u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10408ce9 jmp 0x10408d07 */ goto L_10408d07;
L_10408ceb:;
  /* 10408ceb test cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10408cee je 0x10408d00 */ if (ZF_) goto L_10408d00;
  /* 10408cf0 or byte ptr [eax + 0x1040de01], 0x20 */ { const u32 m_ = (u32)(eax + 0x1040de01u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10408cf7 mov cl, byte ptr [ebp + eax - 0x318] */ { const u32 m_ = (u32)(ebp + eax + 0xfffffce8u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408cfe jmp 0x10408ce3 */ goto L_10408ce3;
L_10408d00:;
  /* 10408d00 mov byte ptr [eax + 0x1040df20], 0 */ { const u32 m_ = (u32)(eax + 0x1040df20u); M8(m_) = (u8)(0x0u); }
L_10408d07:;
  /* 10408d07 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408d08 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408d0a jb 0x10408cc8 */ if (CF_) goto L_10408cc8;
  /* 10408d0c jmp 0x10408d52 */ goto L_10408d52;
L_10408d0e:;
  /* 10408d0e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10408d10:;
  /* 10408d10 cmp eax, 0x41 */ { u32 a_ = eax, b_ = 0x41u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408d13 jb 0x10408d2e */ if (CF_) goto L_10408d2e;
  /* 10408d15 cmp eax, 0x5a */ { u32 a_ = eax, b_ = 0x5au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408d18 ja 0x10408d2e */ if (!(CF_|ZF_)) goto L_10408d2e;
  /* 10408d1a or byte ptr [eax + 0x1040de01], 0x10 */ { const u32 m_ = (u32)(eax + 0x1040de01u); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10408d21 mov cl, al */ { ecx = (ecx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 10408d23 add cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_10408d26:;
  /* 10408d26 mov byte ptr [eax + 0x1040df20], cl */ { const u32 m_ = (u32)(eax + 0x1040df20u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10408d2c jmp 0x10408d4d */ goto L_10408d4d;
L_10408d2e:;
  /* 10408d2e cmp eax, 0x61 */ { u32 a_ = eax, b_ = 0x61u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408d31 jb 0x10408d46 */ if (CF_) goto L_10408d46;
  /* 10408d33 cmp eax, 0x7a */ { u32 a_ = eax, b_ = 0x7au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408d36 ja 0x10408d46 */ if (!(CF_|ZF_)) goto L_10408d46;
  /* 10408d38 or byte ptr [eax + 0x1040de01], 0x20 */ { const u32 m_ = (u32)(eax + 0x1040de01u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10408d3f mov cl, al */ { ecx = (ecx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 10408d41 sub cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10408d44 jmp 0x10408d26 */ goto L_10408d26;
L_10408d46:;
  /* 10408d46 mov byte ptr [eax + 0x1040df20], 0 */ { const u32 m_ = (u32)(eax + 0x1040df20u); M8(m_) = (u8)(0x0u); }
L_10408d4d:;
  /* 10408d4d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408d4e cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408d50 jb 0x10408d10 */ if (CF_) goto L_10408d10;
L_10408d52:;
  /* 10408d52 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10408d55 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408d56 call 0x10404cdd */ esp -= 4; M32(esp) = 0x10408d5bu; SAVEALL; F_10404cdd(c); ABI_CHECK(0x10404cddu, 0x10408d56u); RETCHK(0x10408d5bu, 0x10408d56u); LOADALL;
  /* 10408d5b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10408d5c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408d5d(CPU *c) {
  NATIVE_HOOK(0x10408d5du) REGS; LOADALL;
L_10408d5d:;
  /* 10408d5d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10408d5e mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10408d60 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10408d63 mov eax, dword ptr [0x1040d040] */ { const u32 m_ = (u32)(0x1040d040u); eax = (u32)(M32(m_)); }
  /* 10408d68 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10408d69 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10408d6a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10408d6d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10408d6f cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408d71 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10408d74 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10408d75 je 0x10408ecf */ if (ZF_) goto L_10408ecf;
  /* 10408d7b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10408d7d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10408d7f:;
  /* 10408d7f cmp dword ptr [eax + 0x1040d480], esi */ { const u32 m_ = (u32)(eax + 0x1040d480u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408d85 je 0x10408dec */ if (ZF_) goto L_10408dec;
  /* 10408d87 add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10408d8a inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408d8b cmp eax, 0xf0 */ { u32 a_ = eax, b_ = 0xf0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408d90 jb 0x10408d7f */ if (CF_) goto L_10408d7f;
  /* 10408d92 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 10408d95 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10408d96 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10408d97 call dword ptr [0x1040b0c8] */ { const u32 m_ = (u32)(0x1040b0c8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10408d9du; SAVEALL; call_ind(c, t_); RETCHK(0x10408d9du, 0x10408d97u); LOADALL; }
  /* 10408d9d cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408da0 jne 0x10408ec7 */ if (!ZF_) goto L_10408ec7;
  /* 10408da6 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 10408da8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10408daa cmp dword ptr [ebp - 0x18], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408dae pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10408daf mov edi, 0x1040de00 */ { edi = (u32)(0x1040de00u); }
  /* 10408db4 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10408db6 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 10408db7 mov dword ptr [0x1040df04], esi */ { const u32 m_ = (u32)(0x1040df04u); M32(m_) = (u32)(esi); }
  /* 10408dbd mov dword ptr [0x1040dde8], ebx */ { const u32 m_ = (u32)(0x1040dde8u); M32(m_) = (u32)(ebx); }
  /* 10408dc3 jbe 0x10408eb5 */ if ((CF_|ZF_)) goto L_10408eb5;
  /* 10408dc9 cmp byte ptr [ebp - 0x12], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffeeu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10408dcd je 0x10408e8d */ if (ZF_) goto L_10408e8d;
  /* 10408dd3 lea ecx, [ebp - 0x11] */ ecx = (u32)((u32)(ebp + 0xffffffefu));
L_10408dd6:;
  /* 10408dd6 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408dd8 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10408dda je 0x10408e8d */ if (ZF_) goto L_10408e8d;
  /* 10408de0 movzx eax, byte ptr [ecx - 1] */ { const u32 m_ = (u32)(ecx + 0xffffffffu); eax = (u32)(M8(m_)); }
  /* 10408de4 movzx edx, dl */ { edx = (u32)((edx & 0xffu)); }
  /* 10408de7 jmp 0x10408e7d */ goto L_10408e7d;
L_10408dec:;
  /* 10408dec push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 10408dee xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10408df0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10408df1 mov edi, 0x1040de00 */ { edi = (u32)(0x1040de00u); }
  /* 10408df6 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10408df8 lea ecx, [edx + edx*2] */ ecx = (u32)((u32)(edx + edx * 2u));
  /* 10408dfb shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10408dfe mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 10408e01 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 10408e02 lea ebx, [ecx + 0x1040d490] */ ebx = (u32)((u32)(ecx + 0x1040d490u));
L_10408e08:;
  /* 10408e08 mov al, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408e0a mov esi, ebx */ { esi = (u32)(ebx); }
  /* 10408e0c jmp 0x10408e37 */ goto L_10408e37;
L_10408e0e:;
  /* 10408e0e mov dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408e11 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10408e13 je 0x10408e3b */ if (ZF_) goto L_10408e3b;
  /* 10408e15 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 10408e18 movzx edi, dl */ { edi = (u32)((edx & 0xffu)); }
  /* 10408e1b cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408e1d ja 0x10408e33 */ if (!(CF_|ZF_)) goto L_10408e33;
  /* 10408e1f mov edx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edx = (u32)(M32(m_)); }
  /* 10408e22 mov dl, byte ptr [edx + 0x1040d478] */ { const u32 m_ = (u32)(edx + 0x1040d478u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
L_10408e28:;
  /* 10408e28 or byte ptr [eax + 0x1040de01], dl */ { const u32 m_ = (u32)(eax + 0x1040de01u); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10408e2e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408e2f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408e31 jbe 0x10408e28 */ if ((CF_|ZF_)) goto L_10408e28;
L_10408e33:;
  /* 10408e33 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408e34 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408e35 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
L_10408e37:;
  /* 10408e37 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10408e39 jne 0x10408e0e */ if (!ZF_) goto L_10408e0e;
L_10408e3b:;
  /* 10408e3b inc dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408e3e add ebx, 8 */ { u32 a_ = ebx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10408e41 cmp dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408e45 jb 0x10408e08 */ if (CF_) goto L_10408e08;
  /* 10408e47 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408e4a mov dword ptr [0x1040df04], eax */ { const u32 m_ = (u32)(0x1040df04u); M32(m_) = (u32)(eax); }
  /* 10408e4f mov dword ptr [0x1040ddf0], 1 */ { const u32 m_ = (u32)(0x1040ddf0u); M32(m_) = (u32)(0x1u); }
  /* 10408e59 call 0x10408b79 */ esp -= 4; M32(esp) = 0x10408e5eu; SAVEALL; F_10408b79(c); ABI_CHECK(0x10408b79u, 0x10408e59u); RETCHK(0x10408e5eu, 0x10408e59u); LOADALL;
  /* 10408e5e lea ecx, [ecx + 0x1040d484] */ ecx = (u32)((u32)(ecx + 0x1040d484u));
  /* 10408e64 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10408e66 mov edi, 0x1040df10 */ { edi = (u32)(0x1040df10u); }
  /* 10408e6b movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 10408e6c movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 10408e6d mov dword ptr [0x1040dde8], eax */ { const u32 m_ = (u32)(0x1040dde8u); M32(m_) = (u32)(eax); }
  /* 10408e72 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 10408e73 jmp 0x10408ed4 */ goto L_10408ed4;
L_10408e75:;
  /* 10408e75 or byte ptr [eax + 0x1040de01], 4 */ { const u32 m_ = (u32)(eax + 0x1040de01u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10408e7c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10408e7d:;
  /* 10408e7d cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408e7f jbe 0x10408e75 */ if ((CF_|ZF_)) goto L_10408e75;
  /* 10408e81 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408e82 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408e83 cmp byte ptr [ecx - 1], 0 */ { const u32 m_ = (u32)(ecx + 0xffffffffu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10408e87 jne 0x10408dd6 */ if (!ZF_) goto L_10408dd6;
L_10408e8d:;
  /* 10408e8d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10408e8f inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408e90 mov eax, ecx */ { eax = (u32)(ecx); }
L_10408e92:;
  /* 10408e92 or byte ptr [eax + 0x1040de01], 8 */ { const u32 m_ = (u32)(eax + 0x1040de01u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10408e99 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408e9a cmp eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408e9f jb 0x10408e92 */ if (CF_) goto L_10408e92;
  /* 10408ea1 mov eax, esi */ { eax = (u32)(esi); }
  /* 10408ea3 call 0x10408b79 */ esp -= 4; M32(esp) = 0x10408ea8u; SAVEALL; F_10408b79(c); ABI_CHECK(0x10408b79u, 0x10408ea3u); RETCHK(0x10408ea8u, 0x10408ea3u); LOADALL;
  /* 10408ea8 mov dword ptr [0x1040dde8], eax */ { const u32 m_ = (u32)(0x1040dde8u); M32(m_) = (u32)(eax); }
  /* 10408ead mov dword ptr [0x1040ddf0], ecx */ { const u32 m_ = (u32)(0x1040ddf0u); M32(m_) = (u32)(ecx); }
  /* 10408eb3 jmp 0x10408ebb */ goto L_10408ebb;
L_10408eb5:;
  /* 10408eb5 mov dword ptr [0x1040ddf0], ebx */ { const u32 m_ = (u32)(0x1040ddf0u); M32(m_) = (u32)(ebx); }
L_10408ebb:;
  /* 10408ebb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10408ebd mov edi, 0x1040df10 */ { edi = (u32)(0x1040df10u); }
  /* 10408ec2 stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = (u32)eax; edi += st_; }
  /* 10408ec3 stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = (u32)eax; edi += st_; }
  /* 10408ec4 stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = (u32)eax; edi += st_; }
  /* 10408ec5 jmp 0x10408ed4 */ goto L_10408ed4;
L_10408ec7:;
  /* 10408ec7 cmp dword ptr [0x1040dc74], ebx */ { const u32 m_ = (u32)(0x1040dc74u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408ecd je 0x10408edd */ if (ZF_) goto L_10408edd;
L_10408ecf:;
  /* 10408ecf call 0x10408ba8 */ esp -= 4; M32(esp) = 0x10408ed4u; SAVEALL; F_10408ba8(c); ABI_CHECK(0x10408ba8u, 0x10408ecfu); RETCHK(0x10408ed4u, 0x10408ecfu); LOADALL;
L_10408ed4:;
  /* 10408ed4 call 0x10408bd1 */ esp -= 4; M32(esp) = 0x10408ed9u; SAVEALL; F_10408bd1(c); ABI_CHECK(0x10408bd1u, 0x10408ed4u); RETCHK(0x10408ed9u, 0x10408ed4u); LOADALL;
  /* 10408ed9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10408edb jmp 0x10408ee0 */ goto L_10408ee0;
L_10408edd:;
  /* 10408edd or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10408ee0:;
  /* 10408ee0 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10408ee3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10408ee4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10408ee5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10408ee6 call 0x10404cdd */ esp -= 4; M32(esp) = 0x10408eebu; SAVEALL; F_10404cdd(c); ABI_CHECK(0x10404cddu, 0x10408ee6u); RETCHK(0x10408eebu, 0x10408ee6u); LOADALL;
  /* 10408eeb leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10408eec ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10408eed(CPU *c) {
  NATIVE_HOOK(0x10408eedu) REGS; LOADALL;
L_10408eed:;
  /* 10408eed push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 10408eef push 0x1040bab0 */ { u32 v_ = 0x1040bab0u; esp -= 4; M32(esp) = v_; }
  /* 10408ef4 call 0x104056c0 */ esp -= 4; M32(esp) = 0x10408ef9u; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x10408ef4u); RETCHK(0x10408ef9u, 0x10408ef4u); LOADALL;
  /* 10408ef9 or dword ptr [ebp - 0x20], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10408efd push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 10408eff call 0x104073d3 */ esp -= 4; M32(esp) = 0x10408f04u; SAVEALL; F_104073d3(c); ABI_CHECK(0x104073d3u, 0x10408effu); RETCHK(0x10408f04u, 0x10408effu); LOADALL;
  /* 10408f04 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10408f05 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10408f07 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 10408f0a mov dword ptr [0x1040dc74], edi */ { const u32 m_ = (u32)(0x1040dc74u); M32(m_) = (u32)(edi); }
  /* 10408f10 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10408f13 cmp eax, -2 */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408f16 jne 0x10408f2a */ if (!ZF_) goto L_10408f2a;
  /* 10408f18 mov dword ptr [0x1040dc74], 1 */ { const u32 m_ = (u32)(0x1040dc74u); M32(m_) = (u32)(0x1u); }
  /* 10408f22 call dword ptr [0x1040b0c4] */ { const u32 m_ = (u32)(0x1040b0c4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10408f28u; SAVEALL; call_ind(c, t_); RETCHK(0x10408f28u, 0x10408f22u); LOADALL; }
  /* 10408f28 jmp 0x10408f55 */ goto L_10408f55;
L_10408f2a:;
  /* 10408f2a cmp eax, -3 */ { u32 a_ = eax, b_ = 0xfffffffdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408f2d jne 0x10408f41 */ if (!ZF_) goto L_10408f41;
  /* 10408f2f mov dword ptr [0x1040dc74], 1 */ { const u32 m_ = (u32)(0x1040dc74u); M32(m_) = (u32)(0x1u); }
  /* 10408f39 call dword ptr [0x1040b0c0] */ { const u32 m_ = (u32)(0x1040b0c0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10408f3fu; SAVEALL; call_ind(c, t_); RETCHK(0x10408f3fu, 0x10408f39u); LOADALL; }
  /* 10408f3f jmp 0x10408f55 */ goto L_10408f55;
L_10408f41:;
  /* 10408f41 cmp eax, -4 */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408f44 jne 0x10408f55 */ if (!ZF_) goto L_10408f55;
  /* 10408f46 mov dword ptr [0x1040dc74], 1 */ { const u32 m_ = (u32)(0x1040dc74u); M32(m_) = (u32)(0x1u); }
  /* 10408f50 mov eax, dword ptr [0x1040dcc4] */ { const u32 m_ = (u32)(0x1040dcc4u); eax = (u32)(M32(m_)); }
L_10408f55:;
  /* 10408f55 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 10408f58 cmp eax, dword ptr [0x1040df04] */ { const u32 m_ = (u32)(0x1040df04u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408f5e je 0x1040901f */ if (ZF_) goto L_1040901f;
  /* 10408f64 mov esi, dword ptr [0x1040ddec] */ { const u32 m_ = (u32)(0x1040ddecu); esi = (u32)(M32(m_)); }
  /* 10408f6a mov dword ptr [ebp - 0x24], esi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(esi); }
  /* 10408f6d cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408f6f je 0x10408f75 */ if (ZF_) goto L_10408f75;
  /* 10408f71 cmp dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408f73 je 0x10408f85 */ if (ZF_) goto L_10408f85;
L_10408f75:;
  /* 10408f75 push 0x220 */ { u32 v_ = 0x220u; esp -= 4; M32(esp) = v_; }
  /* 10408f7a call 0x104058bc */ esp -= 4; M32(esp) = 0x10408f7fu; SAVEALL; F_104058bc(c); ABI_CHECK(0x104058bcu, 0x10408f7au); RETCHK(0x10408f7fu, 0x10408f7au); LOADALL;
  /* 10408f7f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10408f80 mov esi, eax */ { esi = (u32)(eax); }
  /* 10408f82 mov dword ptr [ebp - 0x24], esi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(esi); }
L_10408f85:;
  /* 10408f85 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408f87 je 0x10409008 */ if (ZF_) goto L_10409008;
  /* 10408f89 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10408f8c call 0x10408d5d */ esp -= 4; M32(esp) = 0x10408f91u; SAVEALL; F_10408d5d(c); ABI_CHECK(0x10408d5du, 0x10408f8cu); RETCHK(0x10408f91u, 0x10408f8cu); LOADALL;
  /* 10408f91 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10408f92 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10408f95 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408f97 jne 0x10409008 */ if (!ZF_) goto L_10409008;
  /* 10408f99 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 10408f9b mov eax, dword ptr [0x1040df04] */ { const u32 m_ = (u32)(0x1040df04u); eax = (u32)(M32(m_)); }
  /* 10408fa0 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 10408fa3 mov eax, dword ptr [0x1040ddf0] */ { const u32 m_ = (u32)(0x1040ddf0u); eax = (u32)(M32(m_)); }
  /* 10408fa8 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 10408fab mov eax, dword ptr [0x1040dde8] */ { const u32 m_ = (u32)(0x1040dde8u); eax = (u32)(M32(m_)); }
  /* 10408fb0 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10408fb3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10408fb5:;
  /* 10408fb5 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10408fb8 cmp eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408fbb jge 0x10408fcd */ if (!LT_) goto L_10408fcd;
  /* 10408fbd mov cx, word ptr [eax*2 + 0x1040df10] */ { const u32 m_ = (u32)(eax * 2u + 0x1040df10u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10408fc5 mov word ptr [esi + eax*2 + 0x10], cx */ { const u32 m_ = (u32)(esi + eax * 2u + 0x10u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 10408fca inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408fcb jmp 0x10408fb5 */ goto L_10408fb5;
L_10408fcd:;
  /* 10408fcd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10408fcf:;
  /* 10408fcf mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10408fd2 cmp eax, 0x101 */ { u32 a_ = eax, b_ = 0x101u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408fd7 jge 0x10408fe6 */ if (!LT_) goto L_10408fe6;
  /* 10408fd9 mov cl, byte ptr [eax + 0x1040de00] */ { const u32 m_ = (u32)(eax + 0x1040de00u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408fdf mov byte ptr [eax + esi + 0x1c], cl */ { const u32 m_ = (u32)(eax + esi + 0x1cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10408fe3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10408fe4 jmp 0x10408fcf */ goto L_10408fcf;
L_10408fe6:;
  /* 10408fe6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10408fe8:;
  /* 10408fe8 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10408feb cmp eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10408ff0 jge 0x10409002 */ if (!LT_) goto L_10409002;
  /* 10408ff2 mov cl, byte ptr [eax + 0x1040df20] */ { const u32 m_ = (u32)(eax + 0x1040df20u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10408ff8 mov byte ptr [eax + esi + 0x11d], cl */ { const u32 m_ = (u32)(eax + esi + 0x11du); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10408fff inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10409000 jmp 0x10408fe8 */ goto L_10408fe8;
L_10409002:;
  /* 10409002 mov dword ptr [0x1040ddec], esi */ { const u32 m_ = (u32)(0x1040ddecu); M32(m_) = (u32)(esi); }
L_10409008:;
  /* 10409008 cmp dword ptr [ebp - 0x20], -1 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040900c jne 0x10409022 */ if (!ZF_) goto L_10409022;
  /* 1040900e cmp esi, dword ptr [0x1040ddec] */ { const u32 m_ = (u32)(0x1040ddecu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409014 je 0x10409022 */ if (ZF_) goto L_10409022;
  /* 10409016 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409017 call 0x1040549e */ esp -= 4; M32(esp) = 0x1040901cu; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10409017u); RETCHK(0x1040901cu, 0x10409017u); LOADALL;
  /* 1040901c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040901d jmp 0x10409022 */ goto L_10409022;
L_1040901f:;
  /* 1040901f mov dword ptr [ebp - 0x20], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edi); }
L_10409022:;
  /* 10409022 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10409026 call 0x10409034 */ esp -= 4; M32(esp) = 0x1040902bu; SAVEALL; F_10409034(c); ABI_CHECK(0x10409034u, 0x10409026u); RETCHK(0x1040902bu, 0x10409026u); LOADALL;
  /* 1040902b mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 1040902e call 0x104056fb */ esp -= 4; M32(esp) = 0x10409033u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x1040902eu); RETCHK(0x10409033u, 0x1040902eu); LOADALL;
  /* 10409033 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409034(CPU *c) {
  NATIVE_HOOK(0x10409034u) REGS; LOADALL;
L_10409034:;
  /* 10409034 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 10409036 call 0x1040731e */ esp -= 4; M32(esp) = 0x1040903bu; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x10409036u); RETCHK(0x1040903bu, 0x10409036u); LOADALL;
  /* 1040903b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040903c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040903d(CPU *c) {
  NATIVE_HOOK(0x1040903du) REGS; LOADALL;
L_1040903d:;
  /* 1040903d cmp dword ptr [0x1040e16c], 0 */ { const u32 m_ = (u32)(0x1040e16cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409044 jne 0x10409058 */ if (!ZF_) goto L_10409058;
  /* 10409046 push -3 */ { u32 v_ = 0xfffffffdu; esp -= 4; M32(esp) = v_; }
  /* 10409048 call 0x10408eed */ esp -= 4; M32(esp) = 0x1040904du; SAVEALL; F_10408eed(c); ABI_CHECK(0x10408eedu, 0x10409048u); RETCHK(0x1040904du, 0x10409048u); LOADALL;
  /* 1040904d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040904e mov dword ptr [0x1040e16c], 1 */ { const u32 m_ = (u32)(0x1040e16cu); M32(m_) = (u32)(0x1u); }
L_10409058:;
  /* 10409058 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040905a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10409073(CPU *c) {
  NATIVE_HOOK(0x10409073u) REGS; LOADALL;
L_10409073:;
  /* 10409073 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10409074 push dword ptr [0x1040e168] */ { const u32 m_ = (u32)(0x1040e168u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040907a call 0x1040a2e0 */ esp -= 4; M32(esp) = 0x1040907fu; SAVEALL; F_1040a2e0(c); ABI_CHECK(0x1040a2e0u, 0x1040907au); RETCHK(0x1040907fu, 0x1040907au); LOADALL;
  /* 1040907f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10409080 mov ecx, dword ptr [0x1040e164] */ { const u32 m_ = (u32)(0x1040e164u); ecx = (u32)(M32(m_)); }
  /* 10409086 mov esi, eax */ { esi = (u32)(eax); }
  /* 10409088 mov eax, dword ptr [0x1040e168] */ { const u32 m_ = (u32)(0x1040e168u); eax = (u32)(M32(m_)); }
  /* 1040908d mov edx, ecx */ { edx = (u32)(ecx); }
  /* 1040908f sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10409091 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10409094 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10409096 jae 0x104090e6 */ if (!CF_) goto L_104090e6;
  /* 10409098 mov ecx, 0x800 */ { ecx = (u32)(0x800u); }
  /* 1040909d cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040909f jae 0x104090a3 */ if (!CF_) goto L_104090a3;
  /* 104090a1 mov ecx, esi */ { ecx = (u32)(esi); }
L_104090a3:;
  /* 104090a3 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104090a5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104090a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104090a7 call 0x1040a133 */ esp -= 4; M32(esp) = 0x104090acu; SAVEALL; F_1040a133(c); ABI_CHECK(0x1040a133u, 0x104090a7u); RETCHK(0x104090acu, 0x104090a7u); LOADALL;
  /* 104090ac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104090ae pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104090af pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104090b0 jne 0x104090c9 */ if (!ZF_) goto L_104090c9;
  /* 104090b2 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104090b5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104090b6 push dword ptr [0x1040e168] */ { const u32 m_ = (u32)(0x1040e168u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104090bc call 0x1040a133 */ esp -= 4; M32(esp) = 0x104090c1u; SAVEALL; F_1040a133(c); ABI_CHECK(0x1040a133u, 0x104090bcu); RETCHK(0x104090c1u, 0x104090bcu); LOADALL;
  /* 104090c1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104090c3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104090c4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104090c5 jne 0x104090c9 */ if (!ZF_) goto L_104090c9;
  /* 104090c7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104090c8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_104090c9:;
  /* 104090c9 mov ecx, dword ptr [0x1040e164] */ { const u32 m_ = (u32)(0x1040e164u); ecx = (u32)(M32(m_)); }
  /* 104090cf sub ecx, dword ptr [0x1040e168] */ { const u32 m_ = (u32)(0x1040e168u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104090d5 mov dword ptr [0x1040e168], eax */ { const u32 m_ = (u32)(0x1040e168u); M32(m_) = (u32)(eax); }
  /* 104090da sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 104090dd lea ecx, [eax + ecx*4] */ ecx = (u32)((u32)(eax + ecx * 4u));
  /* 104090e0 mov dword ptr [0x1040e164], ecx */ { const u32 m_ = (u32)(0x1040e164u); M32(m_) = (u32)(ecx); }
L_104090e6:;
  /* 104090e6 mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 104090e8 add dword ptr [0x1040e164], 4 */ { const u32 m_ = (u32)(0x1040e164u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 104090ef mov eax, edi */ { eax = (u32)(edi); }
  /* 104090f1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104090f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
