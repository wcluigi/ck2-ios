#include "funcs.h"

void F_101024b0(CPU *c) {
  NATIVE_HOOK(0x101024b0u) REGS; LOADALL;
L_101024b0:;
  /* 101024b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101024b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 101024b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 101024b5 push 0x1010c770 */ { u32 v_ = 0x1010c770u; esp -= 4; M32(esp) = v_; }
  /* 101024ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 101024c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101024c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 101024c8 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101024cb mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101024ce push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101024cf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101024d0 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 101024d2 or ebx, 0xf */ { u32 a_ = ebx, b_ = 0xfu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 101024d5 cmp ebx, -2 */ { u32 a_ = ebx, b_ = 0xfffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101024d8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101024d9 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 101024db mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 101024de mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 101024e1 jbe 0x101024e7 */ if ((CF_|ZF_)) goto L_101024e7;
  /* 101024e3 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 101024e5 jmp 0x10102509 */ goto L_10102509;
L_101024e7:;
  /* 101024e7 mov edi, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edi = (u32)(M32(m_)); }
  /* 101024ea mov eax, 0xaaaaaaab */ { eax = (u32)(0xaaaaaaabu); }
  /* 101024ef mul ebx */ { u64 p_ = (u64)eax * ebx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 101024f1 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 101024f3 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 101024f5 shr edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 101024f7 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101024f9 jae 0x10102509 */ if (!CF_) goto L_10102509;
  /* 101024fb mov eax, 0xfffffffe */ { eax = (u32)(0xfffffffeu); }
  /* 10102500 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10102502 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102504 ja 0x10102509 */ if (!(CF_|ZF_)) goto L_10102509;
  /* 10102506 lea ebx, [ecx + edi] */ ebx = (u32)((u32)(ecx + edi));
L_10102509:;
  /* 10102509 lea ecx, [ebx + 1] */ ecx = (u32)((u32)(ebx + 0x1u));
  /* 1010250c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010250d mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 10102514 call 0x10104f6a */ esp -= 4; M32(esp) = 0x10102519u; SAVEALL; F_10104f6a(c); ABI_CHECK(0x10104f6au, 0x10102514u); RETCHK(0x10102519u, 0x10102514u); LOADALL;
  /* 10102519 mov edx, eax */ { edx = (u32)(eax); }
  /* 1010251b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010251e mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 10102521 jmp 0x1010254c */ goto L_1010254c;
L_1010254c:;
  /* 1010254c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1010254f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102551 jbe 0x10102577 */ if ((CF_|ZF_)) goto L_10102577;
  /* 10102553 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102557 jb 0x1010255e */ if (CF_) goto L_1010255e;
  /* 10102559 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 1010255c jmp 0x10102561 */ goto L_10102561;
L_1010255e:;
  /* 1010255e add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_10102561:;
  /* 10102561 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10102563 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10102566 mov edi, edx */ { edi = (u32)(edx); }
  /* 10102568 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1010256a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 1010256c and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 1010256f rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10102571 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 10102574 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
L_10102577:;
  /* 10102577 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010257b jb 0x1010258f */ if (CF_) goto L_1010258f;
  /* 1010257d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10102580 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102581 call 0x10105a9d */ esp -= 4; M32(esp) = 0x10102586u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10102581u); RETCHK(0x10102586u, 0x10102581u); LOADALL;
  /* 10102586 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10102589 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1010258c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1010258f:;
  /* 1010258f cmp ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102592 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 10102595 mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 10102598 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 1010259a mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 1010259d mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 101025a0 jb 0x101025a4 */ if (CF_) goto L_101025a4;
  /* 101025a2 mov eax, edx */ { eax = (u32)(edx); }
L_101025a4:;
  /* 101025a4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101025a5 mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
  /* 101025a9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 101025ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101025ad mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 101025b4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101025b5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 101025b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101025b8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10102523(CPU *c) {
  NATIVE_HOOK(0x10102523u) REGS; LOADALL;
L_10102523:;
  /* 10102523 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10102526 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 10102529 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010252a mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 1010252d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010252e mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 10102532 call 0x10104f6a */ esp -= 4; M32(esp) = 0x10102537u; SAVEALL; F_10104f6a(c); ABI_CHECK(0x10104f6au, 0x10102532u); RETCHK(0x10102537u, 0x10102532u); LOADALL;
  /* 10102537 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010253a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010253d mov eax, 0x10102543 */ { eax = (u32)(0x10102543u); }
  /* 10102542 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10102543(CPU *c) {
  NATIVE_HOOK(0x10102543u) REGS; LOADALL;
L_10102543:;
  /* 10102543 mov ebx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ebx = (u32)(M32(m_)); }
  /* 10102546 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 10102549 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 1010254c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1010254f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102551 jbe 0x10102577 */ if ((CF_|ZF_)) goto L_10102577;
  /* 10102553 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102557 jb 0x1010255e */ if (CF_) goto L_1010255e;
  /* 10102559 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 1010255c jmp 0x10102561 */ goto L_10102561;
L_1010255e:;
  /* 1010255e add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_10102561:;
  /* 10102561 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10102563 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10102566 mov edi, edx */ { edi = (u32)(edx); }
  /* 10102568 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1010256a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 1010256c and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 1010256f rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10102571 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 10102574 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
L_10102577:;
  /* 10102577 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010257b jb 0x1010258f */ if (CF_) goto L_1010258f;
  /* 1010257d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10102580 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102581 call 0x10105a9d */ esp -= 4; M32(esp) = 0x10102586u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10102581u); RETCHK(0x10102586u, 0x10102581u); LOADALL;
  /* 10102586 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10102589 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1010258c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1010258f:;
  /* 1010258f cmp ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102592 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 10102595 mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 10102598 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 1010259a mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 1010259d mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 101025a0 jb 0x101025a4 */ if (CF_) goto L_101025a4;
  /* 101025a2 mov eax, edx */ { eax = (u32)(edx); }
L_101025a4:;
  /* 101025a4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101025a5 mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
  /* 101025a9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 101025ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101025ad mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 101025b4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101025b5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 101025b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101025b8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_101025bb(CPU *c) {
  NATIVE_HOOK(0x101025bbu) REGS; LOADALL;
L_101025bb:;
  /* 101025bb mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 101025be cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101025c2 jb 0x101025d0 */ if (CF_) goto L_101025d0;
  /* 101025c4 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 101025c7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 101025c8 call 0x10105a9d */ esp -= 4; M32(esp) = 0x101025cdu; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x101025c8u); RETCHK(0x101025cdu, 0x101025c8u); LOADALL;
  /* 101025cd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_101025d0:;
  /* 101025d0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 101025d2 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 101025d9 mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 101025e0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 101025e2 mov byte ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 101025e6 call 0x10105ab6 */ esp -= 4; M32(esp) = 0x101025ebu; SAVEALL; F_10105ab6(c); ABI_CHECK(0x10105ab6u, 0x101025e6u); RETCHK(0x101025ebu, 0x101025e6u); LOADALL;
  /* 101025eb int3 */ TRAP(0x101025ebu, "int3");
}

void F_101025f0(CPU *c) {
  NATIVE_HOOK(0x101025f0u) REGS; LOADALL;
L_101025f0:;
  /* 101025f0 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 101025f2 call 0x10104f6a */ esp -= 4; M32(esp) = 0x101025f7u; SAVEALL; F_10104f6a(c); ABI_CHECK(0x10104f6au, 0x101025f2u); RETCHK(0x101025f7u, 0x101025f2u); LOADALL;
  /* 101025f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101025fa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101025fc je 0x10102600 */ if (ZF_) goto L_10102600;
  /* 101025fe mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
L_10102600:;
  /* 10102600 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 10102603 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102605 je 0x10102609 */ if (ZF_) goto L_10102609;
  /* 10102607 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
L_10102609:;
  /* 10102609 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10102610(CPU *c) {
  NATIVE_HOOK(0x10102610u) REGS; LOADALL;
L_10102610:;
  /* 10102610 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10102614 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102616 jbe 0x10102632 */ if ((CF_|ZF_)) goto L_10102632;
  /* 10102618 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 1010261c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 1010261e mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10102622 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_10102623:;
  /* 10102623 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102625 je 0x1010262b */ if (ZF_) goto L_1010262b;
  /* 10102627 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 10102629 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
L_1010262b:;
  /* 1010262b add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010262e dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010262f jne 0x10102623 */ if (!ZF_) goto L_10102623;
  /* 10102631 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10102632:;
  /* 10102632 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10102670(CPU *c) {
  NATIVE_HOOK(0x10102670u) REGS; LOADALL;
L_10102670:;
  /* 10102670 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102671 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10102673 cmp dword ptr [esi + 0x20], 0x10 */ { const u32 m_ = (u32)(esi + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102677 jb 0x10102685 */ if (CF_) goto L_10102685;
  /* 10102679 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 1010267c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010267d call 0x10105a9d */ esp -= 4; M32(esp) = 0x10102682u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x1010267du); RETCHK(0x10102682u, 0x1010267du); LOADALL;
  /* 10102682 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10102685:;
  /* 10102685 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10102687 mov dword ptr [esi + 0x20], 0xf */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(0xfu); }
  /* 1010268e mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10102691 mov byte ptr [esi + 0xc], al */ { const u32 m_ = (u32)(esi + 0xcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10102694 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102695 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101026a0(CPU *c) {
  NATIVE_HOOK(0x101026a0u) REGS; LOADALL;
L_101026a0:;
  /* 101026a0 cmp dword ptr [ecx + 0x24], 0x10 */ { const u32 m_ = (u32)(ecx + 0x24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101026a4 jb 0x101026aa */ if (CF_) goto L_101026aa;
  /* 101026a6 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 101026a9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101026aa:;
  /* 101026aa lea eax, [ecx + 0x10] */ eax = (u32)((u32)(ecx + 0x10u));
  /* 101026ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101026b0(CPU *c) {
  NATIVE_HOOK(0x101026b0u) REGS; LOADALL;
L_101026b0:;
  /* 101026b0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101026b1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101026b2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101026b3 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 101026b7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101026b8 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 101026bc cmp dword ptr [edi + 0x14], esi */ { const u32 m_ = (u32)(edi + 0x14u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101026bf mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 101026c1 jae 0x101026c8 */ if (!CF_) goto L_101026c8;
  /* 101026c3 call 0x10104fb5 */ esp -= 4; M32(esp) = 0x101026c8u; SAVEALL; F_10104fb5(c); ABI_CHECK(0x10104fb5u, 0x101026c3u); RETCHK(0x101026c8u, 0x101026c3u); LOADALL;
L_101026c8:;
  /* 101026c8 mov ebp, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); ebp = (u32)(M32(m_)); }
  /* 101026cb mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 101026cf sub ebp, esi */ { u32 a_ = ebp, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 101026d1 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101026d3 jae 0x101026d7 */ if (!CF_) goto L_101026d7;
  /* 101026d5 mov ebp, eax */ { ebp = (u32)(eax); }
L_101026d7:;
  /* 101026d7 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101026d9 jne 0x101026fa */ if (!ZF_) goto L_101026fa;
  /* 101026db push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 101026dd add ebp, esi */ { u32 a_ = ebp, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 101026df push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101026e0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 101026e2 call 0x10102430 */ esp -= 4; M32(esp) = 0x101026e7u; SAVEALL; F_10102430(c); ABI_CHECK(0x10102430u, 0x101026e2u); RETCHK(0x101026e7u, 0x101026e2u); LOADALL;
  /* 101026e7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101026e8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 101026ea mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 101026ec call 0x10102430 */ esp -= 4; M32(esp) = 0x101026f1u; SAVEALL; F_10102430(c); ABI_CHECK(0x10102430u, 0x101026ecu); RETCHK(0x101026f1u, 0x101026ecu); LOADALL;
  /* 101026f1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101026f2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101026f3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101026f4 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 101026f6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101026f7 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_101026fa:;
  /* 101026fa cmp ebp, -2 */ { u32 a_ = ebp, b_ = 0xfffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101026fd jbe 0x10102706 */ if ((CF_|ZF_)) goto L_10102706;
  /* 101026ff mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10102701 call 0x1010500d */ esp -= 4; M32(esp) = 0x10102706u; SAVEALL; F_1010500d(c); ABI_CHECK(0x1010500du, 0x10102701u); RETCHK(0x10102706u, 0x10102701u); LOADALL;
L_10102706:;
  /* 10102706 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 10102709 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010270b jae 0x1010272e */ if (!CF_) goto L_1010272e;
  /* 1010270d mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 10102710 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102711 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10102712 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10102714 call 0x101024b0 */ esp -= 4; M32(esp) = 0x10102719u; SAVEALL; F_101024b0(c); ABI_CHECK(0x101024b0u, 0x10102714u); RETCHK(0x10102719u, 0x10102714u); LOADALL;
  /* 10102719 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
L_1010271b:;
  /* 1010271b jbe 0x1010278a */ if ((CF_|ZF_)) goto L_1010278a;
  /* 1010271d mov ecx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 10102720 mov eax, 0x10 */ { eax = (u32)(0x10u); }
  /* 10102725 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102727 jb 0x10102758 */ if (CF_) goto L_10102758;
  /* 10102729 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 1010272c jmp 0x1010275b */ goto L_1010275b;
L_1010272e:;
  /* 1010272e test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102730 jne 0x1010271b */ if (!ZF_) goto L_1010271b;
  /* 10102732 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102735 mov dword ptr [ebx + 0x14], ebp */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(ebp); }
  /* 10102738 jb 0x10102749 */ if (CF_) goto L_10102749;
  /* 1010273a mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 1010273d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010273e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010273f mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 10102742 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10102743 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10102745 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10102746 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10102749:;
  /* 10102749 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010274a lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 1010274d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010274e mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 10102751 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10102752 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10102754 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10102755 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10102758:;
  /* 10102758 lea edx, [edi + 4] */ edx = (u32)((u32)(edi + 0x4u));
L_1010275b:;
  /* 1010275b cmp dword ptr [ebx + 0x18], eax */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010275e lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 10102761 jb 0x10102767 */ if (CF_) goto L_10102767;
  /* 10102763 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 10102765 jmp 0x10102769 */ goto L_10102769;
L_10102767:;
  /* 10102767 mov edi, eax */ { edi = (u32)(eax); }
L_10102769:;
  /* 10102769 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1010276b mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 1010276d mov edx, ecx */ { edx = (u32)(ecx); }
  /* 1010276f shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10102772 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10102774 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10102776 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10102779 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 1010277b cmp dword ptr [ebx + 0x18], 0x10 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010277f mov dword ptr [ebx + 0x14], ebp */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(ebp); }
  /* 10102782 jb 0x10102786 */ if (CF_) goto L_10102786;
  /* 10102784 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
L_10102786:;
  /* 10102786 mov byte ptr [eax + ebp], 0 */ { const u32 m_ = (u32)(eax + ebp); M8(m_) = (u8)(0x0u); }
L_1010278a:;
  /* 1010278a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010278b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010278c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010278d mov eax, ebx */ { eax = (u32)(ebx); }
  /* 1010278f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10102790 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_101027a0(CPU *c) {
  NATIVE_HOOK(0x101027a0u) REGS; LOADALL;
L_101027a0:;
  /* 101027a0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101027a1 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 101027a3 mov edx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edx = (u32)(M32(m_)); }
  /* 101027a6 cmp edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101027a9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101027aa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101027ab jb 0x101027b2 */ if (CF_) goto L_101027b2;
  /* 101027ad mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 101027b0 jmp 0x101027b5 */ goto L_101027b5;
L_101027b2:;
  /* 101027b2 lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
L_101027b5:;
  /* 101027b5 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 101027b9 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101027bb jb 0x101027f1 */ if (CF_) goto L_101027f1;
  /* 101027bd cmp edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101027c0 lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 101027c3 jb 0x101027c9 */ if (CF_) goto L_101027c9;
  /* 101027c5 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 101027c7 jmp 0x101027cb */ goto L_101027cb;
L_101027c9:;
  /* 101027c9 mov ecx, eax */ { ecx = (u32)(eax); }
L_101027cb:;
  /* 101027cb mov edi, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); edi = (u32)(M32(m_)); }
  /* 101027ce add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101027d0 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101027d2 jbe 0x101027f1 */ if ((CF_|ZF_)) goto L_101027f1;
  /* 101027d4 cmp edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101027d7 jb 0x101027db */ if (CF_) goto L_101027db;
  /* 101027d9 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
L_101027db:;
  /* 101027db mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 101027df push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101027e0 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101027e2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101027e3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101027e4 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 101027e6 call 0x101026b0 */ esp -= 4; M32(esp) = 0x101027ebu; SAVEALL; F_101026b0(c); ABI_CHECK(0x101026b0u, 0x101027e6u); RETCHK(0x101027ebu, 0x101027e6u); LOADALL;
  /* 101027eb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101027ec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101027ed pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101027ee ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_101027f1:;
  /* 101027f1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101027f2 mov ebp, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebp = (u32)(M32(m_)); }
  /* 101027f6 cmp ebp, -2 */ { u32 a_ = ebp, b_ = 0xfffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101027f9 jbe 0x10102802 */ if ((CF_|ZF_)) goto L_10102802;
  /* 101027fb mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 101027fd call 0x1010500d */ esp -= 4; M32(esp) = 0x10102802u; SAVEALL; F_1010500d(c); ABI_CHECK(0x1010500du, 0x101027fdu); RETCHK(0x10102802u, 0x101027fdu); LOADALL;
L_10102802:;
  /* 10102802 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 10102805 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102807 jae 0x10102824 */ if (!CF_) goto L_10102824;
  /* 10102809 mov edx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); edx = (u32)(M32(m_)); }
  /* 1010280c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1010280d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1010280e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10102810 call 0x101024b0 */ esp -= 4; M32(esp) = 0x10102815u; SAVEALL; F_101024b0(c); ABI_CHECK(0x101024b0u, 0x10102810u); RETCHK(0x10102815u, 0x10102810u); LOADALL;
  /* 10102815 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
L_10102817:;
  /* 10102817 jbe 0x10102881 */ if ((CF_|ZF_)) goto L_10102881;
  /* 10102819 cmp dword ptr [ebx + 0x18], 0x10 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010281d jb 0x1010284e */ if (CF_) goto L_1010284e;
  /* 1010281f mov edi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edi = (u32)(M32(m_)); }
  /* 10102822 jmp 0x10102851 */ goto L_10102851;
L_10102824:;
  /* 10102824 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102826 jne 0x10102817 */ if (!ZF_) goto L_10102817;
  /* 10102828 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010282b mov dword ptr [ebx + 0x14], ebp */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(ebp); }
  /* 1010282e jb 0x1010283f */ if (CF_) goto L_1010283f;
  /* 10102830 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10102833 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10102834 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10102835 mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 10102838 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102839 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 1010283b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1010283c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1010283f:;
  /* 1010283f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10102840 lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 10102843 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10102844 mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 10102847 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102848 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 1010284a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1010284b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1010284e:;
  /* 1010284e lea edi, [ebx + 4] */ edi = (u32)((u32)(ebx + 0x4u));
L_10102851:;
  /* 10102851 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10102853 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10102855 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10102858 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1010285a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 1010285c and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 1010285f rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10102861 cmp dword ptr [ebx + 0x18], 0x10 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102865 mov dword ptr [ebx + 0x14], ebp */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(ebp); }
  /* 10102868 jb 0x1010287a */ if (CF_) goto L_1010287a;
  /* 1010286a mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 1010286d mov byte ptr [eax + ebp], 0 */ { const u32 m_ = (u32)(eax + ebp); M8(m_) = (u8)(0x0u); }
  /* 10102871 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10102872 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10102873 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102874 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10102876 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10102877 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1010287a:;
  /* 1010287a lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 1010287d mov byte ptr [eax + ebp], 0 */ { const u32 m_ = (u32)(eax + ebp); M8(m_) = (u8)(0x0u); }
L_10102881:;
  /* 10102881 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10102882 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10102883 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102884 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10102886 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10102887 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10102890(CPU *c) {
  NATIVE_HOOK(0x10102890u) REGS; LOADALL;
L_10102890:;
  /* 10102890 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10102894 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102895 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10102899 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010289a mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 1010289e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010289f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101028a0 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 101028a4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101028a5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101028a6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101028a7 call 0x10102610 */ esp -= 4; M32(esp) = 0x101028acu; SAVEALL; F_10102610(c); ABI_CHECK(0x10102610u, 0x101028a7u); RETCHK(0x101028acu, 0x101028a7u); LOADALL;
  /* 101028ac add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101028af lea eax, [edi + esi*4] */ eax = (u32)((u32)(edi + esi * 4u));
  /* 101028b2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101028b3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101028b4 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_101028c0(CPU *c) {
  NATIVE_HOOK(0x101028c0u) REGS; LOADALL;
L_101028c0:;
  /* 101028c0 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101028c3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101028c4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101028c5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101028c6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101028c7 mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 101028cb mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 101028cd mov esi, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); esi = (u32)(M32(m_)); }
  /* 101028d0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101028d1 mov dword ptr [esp + 0x18], ebp */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ebp); }
  /* 101028d5 call 0x10102390 */ esp -= 4; M32(esp) = 0x101028dau; SAVEALL; F_10102390(c); ABI_CHECK(0x10102390u, 0x101028d5u); RETCHK(0x101028dau, 0x101028d5u); LOADALL;
  /* 101028da mov ecx, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 101028dd and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101028df add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101028e2 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101028e4 ja 0x101028ef */ if (!(CF_|ZF_)) goto L_101028ef;
  /* 101028e6 shr esi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 101028e8 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 101028eb sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101028ed add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_101028ef:;
  /* 101028ef mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 101028f2 mov ebx, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); ebx = (u32)(M32(m_)); }
  /* 101028f5 mov ecx, dword ptr [edx + eax*4 + 4] */ { const u32 m_ = (u32)(edx + eax * 4u + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101028f9 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101028fb lea eax, [edx + eax*4] */ eax = (u32)((u32)(edx + eax * 4u));
  /* 101028fe mov dword ptr [esp + 0x10], ebx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 10102902 je 0x10102985 */ if (ZF_) goto L_10102985;
  /* 10102908 mov ecx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 1010290b mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 1010290e mov ebp, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); ebp = (u32)(M32(m_)); }
  /* 10102911 mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 10102915 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 10102919 jmp 0x10102920 */ goto L_10102920;
L_1010291b:;
  /* 1010291b mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 1010291f nop */ ;
L_10102920:;
  /* 10102920 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10102924 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 10102929 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010292b jb 0x10102932 */ if (CF_) goto L_10102932;
  /* 1010292d mov edi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edi = (u32)(M32(m_)); }
  /* 10102930 jmp 0x10102935 */ goto L_10102935;
L_10102932:;
  /* 10102932 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10102935:;
  /* 10102935 mov edx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); edx = (u32)(M32(m_)); }
  /* 10102938 mov eax, edx */ { eax = (u32)(edx); }
  /* 1010293a cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010293c jae 0x1010293e */ if (!CF_) goto L_1010293e;
L_1010293e:;
  /* 1010293e test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102940 je 0x10102966 */ if (ZF_) goto L_10102966;
  /* 10102942 cmp edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102944 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10102946 jb 0x1010294a */ if (CF_) goto L_1010294a;
  /* 10102948 mov ecx, ebp */ { ecx = (u32)(ebp); }
L_1010294a:;
  /* 1010294a cmp dword ptr [ebx + 0x20], esi */ { const u32 m_ = (u32)(ebx + 0x20u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010294d jb 0x10102954 */ if (CF_) goto L_10102954;
  /* 1010294f mov esi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); esi = (u32)(M32(m_)); }
  /* 10102952 jmp 0x10102957 */ goto L_10102957;
L_10102954:;
  /* 10102954 lea esi, [ebx + 0xc] */ esi = (u32)((u32)(ebx + 0xcu));
L_10102957:;
  /* 10102957 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10102959 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 1010295b je 0x10102962 */ if (ZF_) goto L_10102962;
  /* 1010295d sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 1010295f sbb eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
L_10102962:;
  /* 10102962 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102964 jne 0x10102973 */ if (!ZF_) goto L_10102973;
L_10102966:;
  /* 10102966 cmp edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102968 jb 0x10102975 */ if (CF_) goto L_10102975;
  /* 1010296a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010296c cmp edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010296e setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 10102971 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
L_10102973:;
  /* 10102973 jge 0x10102998 */ if (!LT_) goto L_10102998;
L_10102975:;
  /* 10102975 mov ebx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ebx = (u32)(M32(m_)); }
  /* 10102977 cmp ebx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010297b jne 0x1010291b */ if (!ZF_) goto L_1010291b;
  /* 1010297d mov ebp, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebp = (u32)(M32(m_)); }
  /* 10102981 mov dword ptr [esp + 0x10], ebx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebx); }
L_10102985:;
  /* 10102985 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10102988 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 1010298c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010298d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010298e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010298f mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10102991 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10102992 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102995 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10102998:;
  /* 10102998 cmp dword ptr [ebx + 0x20], 0x10 */ { const u32 m_ = (u32)(ebx + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010299c mov eax, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); eax = (u32)(M32(m_)); }
  /* 1010299f mov dword ptr [esp + 0x10], ebx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 101029a3 jb 0x101029aa */ if (CF_) goto L_101029aa;
  /* 101029a5 mov ebx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ebx = (u32)(M32(m_)); }
  /* 101029a8 jmp 0x101029ad */ goto L_101029ad;
L_101029aa:;
  /* 101029aa add ebx, 0xc */ { u32 a_ = ebx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
L_101029ad:;
  /* 101029ad mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 101029b1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101029b2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101029b3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101029b4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 101029b6 call 0x10101980 */ esp -= 4; M32(esp) = 0x101029bbu; SAVEALL; F_10101980(c); ABI_CHECK(0x10101980u, 0x101029b6u); RETCHK(0x101029bbu, 0x101029b6u); LOADALL;
  /* 101029bb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101029bd jge 0x101029e0 */ if (!LT_) goto L_101029e0;
  /* 101029bf mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 101029c3 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101029c6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101029c7 lea eax, [esp + 0x20] */ eax = (u32)((u32)(esp + 0x20u));
  /* 101029cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101029cc mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 101029d0 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 101029d2 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 101029d6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101029d7 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 101029d9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101029da add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101029dd ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_101029e0:;
  /* 101029e0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101029e1 lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 101029e5 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 101029e7 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 101029eb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101029ec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101029ed mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 101029ef pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101029f0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101029f3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10102a00(CPU *c) {
  NATIVE_HOOK(0x10102a00u) REGS; LOADALL;
L_10102a00:;
  /* 10102a00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102a01 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10102a03 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10102a06 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102a08 je 0x10102a13 */ if (ZF_) goto L_10102a13;
  /* 10102a0a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102a0b call 0x10105a9d */ esp -= 4; M32(esp) = 0x10102a10u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10102a0bu); RETCHK(0x10102a10u, 0x10102a0bu); LOADALL;
  /* 10102a10 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10102a13:;
  /* 10102a13 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 10102a1a mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 10102a21 mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 10102a28 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102a29 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10102a30(CPU *c) {
  NATIVE_HOOK(0x10102a30u) REGS; LOADALL;
L_10102a30:;
  /* 10102a30 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10102a34 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10102a35 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10102a39 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102a3b je 0x10102a5b */ if (ZF_) goto L_10102a5b;
  /* 10102a3d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102a3e mov esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); esi = (u32)(M32(m_)); }
  /* 10102a41 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102a43 mov edx, edi */ { edx = (u32)(edi); }
  /* 10102a45 je 0x10102a57 */ if (ZF_) goto L_10102a57;
  /* 10102a47 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
L_10102a48:;
  /* 10102a48 mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 10102a4a mov dword ptr [edx], ebx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ebx); }
  /* 10102a4c add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10102a4f add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10102a52 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102a54 jne 0x10102a48 */ if (!ZF_) goto L_10102a48;
  /* 10102a56 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_10102a57:;
  /* 10102a57 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 10102a5a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10102a5b:;
  /* 10102a5b mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10102a5f mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 10102a61 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10102a62 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10102a70(CPU *c) {
  NATIVE_HOOK(0x10102a70u) REGS; LOADALL;
L_10102a70:;
  /* 10102a70 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10102a72 push 0x1010c7a8 */ { u32 v_ = 0x1010c7a8u; esp -= 4; M32(esp) = v_; }
  /* 10102a77 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10102a7d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102a7e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10102a85 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102a86 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102a87 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10102a89 mov dword ptr [esp + 4], esi */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(esi); }
  /* 10102a8d call 0x10105af0 */ esp -= 4; M32(esp) = 0x10102a92u; SAVEALL; F_10105af0(c); ABI_CHECK(0x10105af0u, 0x10102a8du); RETCHK(0x10102a92u, 0x10102a8du); LOADALL;
  /* 10102a92 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10102a94 lea ecx, [esi + 0xc] */ ecx = (u32)((u32)(esi + 0xcu));
  /* 10102a97 mov dword ptr [esi], 0x1010d290 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1010d290u); }
  /* 10102a9d push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10102a9f mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 10102aa2 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 10102aa9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102aaa mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 10102aae mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10102ab1 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 10102ab5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102ab6 call 0x101026b0 */ esp -= 4; M32(esp) = 0x10102abbu; SAVEALL; F_101026b0(c); ABI_CHECK(0x101026b0u, 0x10102ab6u); RETCHK(0x10102abbu, 0x10102ab6u); LOADALL;
  /* 10102abb mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10102abf mov eax, esi */ { eax = (u32)(esi); }
  /* 10102ac1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102ac2 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10102ac9 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102acc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10102ad0(CPU *c) {
  NATIVE_HOOK(0x10102ad0u) REGS; LOADALL;
L_10102ad0:;
  /* 10102ad0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102ad1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10102ad3 call 0x10102af0 */ esp -= 4; M32(esp) = 0x10102ad8u; SAVEALL; F_10102af0(c); ABI_CHECK(0x10102af0u, 0x10102ad3u); RETCHK(0x10102ad8u, 0x10102ad3u); LOADALL;
  /* 10102ad8 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10102add je 0x10102ae8 */ if (ZF_) goto L_10102ae8;
  /* 10102adf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102ae0 call 0x10105a9d */ esp -= 4; M32(esp) = 0x10102ae5u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10102ae0u); RETCHK(0x10102ae5u, 0x10102ae0u); LOADALL;
  /* 10102ae5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10102ae8:;
  /* 10102ae8 mov eax, esi */ { eax = (u32)(esi); }
  /* 10102aea pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102aeb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10102af0(CPU *c) {
  NATIVE_HOOK(0x10102af0u) REGS; LOADALL;
L_10102af0:;
  /* 10102af0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102af1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10102af3 mov dword ptr [esi], 0x1010d290 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1010d290u); }
  /* 10102af9 cmp dword ptr [esi + 0x24], 0x10 */ { const u32 m_ = (u32)(esi + 0x24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102afd jb 0x10102b0b */ if (CF_) goto L_10102b0b;
  /* 10102aff mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 10102b02 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102b03 call 0x10105a9d */ esp -= 4; M32(esp) = 0x10102b08u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10102b03u); RETCHK(0x10102b08u, 0x10102b03u); LOADALL;
  /* 10102b08 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10102b0b:;
  /* 10102b0b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10102b0d mov dword ptr [esi + 0x24], 0xf */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(0xfu); }
  /* 10102b14 mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 10102b17 mov byte ptr [esi + 0x10], al */ { const u32 m_ = (u32)(esi + 0x10u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10102b1a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10102b1c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102b1d jmp 0x10105b88 */ SAVEALL; F_10105b88(c); return;
}

void F_10102b30(CPU *c) {
  NATIVE_HOOK(0x10102b30u) REGS; LOADALL;
L_10102b30:;
  /* 10102b30 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10102b34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102b35 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10102b37 mov eax, edx */ { eax = (u32)(edx); }
  /* 10102b39 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10102b3a mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 10102b41 mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 10102b48 mov byte ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 10102b4c lea edi, [eax + 1] */ edi = (u32)((u32)(eax + 0x1u));
  /* 10102b4f nop */ ;
L_10102b50:;
  /* 10102b50 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10102b52 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10102b53 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10102b55 jne 0x10102b50 */ if (!ZF_) goto L_10102b50;
  /* 10102b57 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10102b59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102b5a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10102b5b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10102b5d call 0x101027a0 */ esp -= 4; M32(esp) = 0x10102b62u; SAVEALL; F_101027a0(c); ABI_CHECK(0x101027a0u, 0x10102b5du); RETCHK(0x10102b62u, 0x10102b5du); LOADALL;
  /* 10102b62 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10102b63 mov eax, esi */ { eax = (u32)(esi); }
  /* 10102b65 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102b66 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10102b70(CPU *c) {
  NATIVE_HOOK(0x10102b70u) REGS; LOADALL;
L_10102b70:;
  /* 10102b70 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10102b76 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10102b7a push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10102b7c push 0x1010c788 */ { u32 v_ = 0x1010c788u; esp -= 4; M32(esp) = v_; }
  /* 10102b81 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102b82 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10102b89 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10102b8c sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102b8f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102b90 mov esi, 0x7ffffff */ { esi = (u32)(0x7ffffffu); }
  /* 10102b95 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10102b97 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102b99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102b9a jae 0x10102bed */ if (!CF_) goto L_10102bed;
  /* 10102b9c push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10102b9e push 0x1010d160 */ { u32 v_ = 0x1010d160u; esp -= 4; M32(esp) = v_; }
  /* 10102ba3 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 10102ba7 mov dword ptr [esp + 0x20], 0xf */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(0xfu); }
  /* 10102baf mov dword ptr [esp + 0x1c], 0 */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0x0u); }
  /* 10102bb7 mov byte ptr [esp + 0xc], 0 */ { const u32 m_ = (u32)(esp + 0xcu); M8(m_) = (u8)(0x0u); }
  /* 10102bbc call 0x101027a0 */ esp -= 4; M32(esp) = 0x10102bc1u; SAVEALL; F_101027a0(c); ABI_CHECK(0x101027a0u, 0x10102bbcu); RETCHK(0x10102bc1u, 0x10102bbcu); LOADALL;
  /* 10102bc1 lea eax, [esp] */ eax = (u32)((u32)(esp));
  /* 10102bc4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102bc5 lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 10102bc9 mov dword ptr [esp + 0x50], 0 */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(0x0u); }
  /* 10102bd1 call 0x10102a70 */ esp -= 4; M32(esp) = 0x10102bd6u; SAVEALL; F_10102a70(c); ABI_CHECK(0x10102a70u, 0x10102bd1u); RETCHK(0x10102bd6u, 0x10102bd1u); LOADALL;
  /* 10102bd6 push 0x1010e8e0 */ { u32 v_ = 0x1010e8e0u; esp -= 4; M32(esp) = v_; }
  /* 10102bdb lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 10102bdf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102be0 mov dword ptr [esp + 0x24], 0x1010d29c */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0x1010d29cu); }
  /* 10102be8 call 0x10105ab6 */ esp -= 4; M32(esp) = 0x10102bedu; SAVEALL; F_10105ab6(c); ABI_CHECK(0x10105ab6u, 0x10102be8u); RETCHK(0x10102bedu, 0x10102be8u); LOADALL;
L_10102bed:;
  /* 10102bed add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10102bef mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 10102bf2 mov ecx, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); ecx = (u32)(M32(m_)); }
  /* 10102bf6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10102bfd add esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102c00 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10102c10(CPU *c) {
  NATIVE_HOOK(0x10102c10u) REGS; LOADALL;
L_10102c10:;
  /* 10102c10 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10102c12 push 0x1010c7a8 */ { u32 v_ = 0x1010c7a8u; esp -= 4; M32(esp) = v_; }
  /* 10102c17 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10102c1d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102c1e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10102c25 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102c26 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102c27 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10102c28 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 10102c2c mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10102c2e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10102c2f mov dword ptr [esp + 0xc], esi */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(esi); }
  /* 10102c33 call 0x10105b3e */ esp -= 4; M32(esp) = 0x10102c38u; SAVEALL; F_10105b3e(c); ABI_CHECK(0x10105b3eu, 0x10102c33u); RETCHK(0x10102c38u, 0x10102c33u); LOADALL;
  /* 10102c38 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10102c3a push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10102c3c lea ecx, [esi + 0xc] */ ecx = (u32)((u32)(esi + 0xcu));
  /* 10102c3f mov dword ptr [esi], 0x1010d290 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1010d290u); }
  /* 10102c45 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102c46 add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10102c49 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 10102c50 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 10102c53 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10102c54 mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 10102c58 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10102c5b call 0x101026b0 */ esp -= 4; M32(esp) = 0x10102c60u; SAVEALL; F_101026b0(c); ABI_CHECK(0x101026b0u, 0x10102c5bu); RETCHK(0x10102c60u, 0x10102c5bu); LOADALL;
  /* 10102c60 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10102c64 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10102c65 mov eax, esi */ { eax = (u32)(esi); }
  /* 10102c67 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102c68 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10102c6f add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102c72 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10102c80(CPU *c) {
  NATIVE_HOOK(0x10102c80u) REGS; LOADALL;
L_10102c80:;
  /* 10102c80 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10102c84 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102c85 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102c86 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10102c88 call 0x10102c10 */ esp -= 4; M32(esp) = 0x10102c8du; SAVEALL; F_10102c10(c); ABI_CHECK(0x10102c10u, 0x10102c88u); RETCHK(0x10102c8du, 0x10102c88u); LOADALL;
  /* 10102c8d mov dword ptr [esi], 0x1010d29c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1010d29cu); }
  /* 10102c93 mov eax, esi */ { eax = (u32)(esi); }
  /* 10102c95 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102c96 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10102ca0(CPU *c) {
  NATIVE_HOOK(0x10102ca0u) REGS; LOADALL;
L_10102ca0:;
  /* 10102ca0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10102ca2 push 0x1010c788 */ { u32 v_ = 0x1010c788u; esp -= 4; M32(esp) = v_; }
  /* 10102ca7 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10102cad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102cae mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10102cb5 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102cb8 push 0x12 */ { u32 v_ = 0x12u; esp -= 4; M32(esp) = v_; }
  /* 10102cba push 0x1010d174 */ { u32 v_ = 0x1010d174u; esp -= 4; M32(esp) = v_; }
  /* 10102cbf lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 10102cc3 mov dword ptr [esp + 0x20], 0xf */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(0xfu); }
  /* 10102ccb mov dword ptr [esp + 0x1c], 0 */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0x0u); }
  /* 10102cd3 mov byte ptr [esp + 0xc], 0 */ { const u32 m_ = (u32)(esp + 0xcu); M8(m_) = (u8)(0x0u); }
  /* 10102cd8 call 0x101027a0 */ esp -= 4; M32(esp) = 0x10102cddu; SAVEALL; F_101027a0(c); ABI_CHECK(0x101027a0u, 0x10102cd8u); RETCHK(0x10102cddu, 0x10102cd8u); LOADALL;
  /* 10102cdd lea eax, [esp] */ eax = (u32)((u32)(esp));
  /* 10102ce0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102ce1 lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 10102ce5 mov dword ptr [esp + 0x50], 0 */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(0x0u); }
  /* 10102ced call 0x10102a70 */ esp -= 4; M32(esp) = 0x10102cf2u; SAVEALL; F_10102a70(c); ABI_CHECK(0x10102a70u, 0x10102cedu); RETCHK(0x10102cf2u, 0x10102cedu); LOADALL;
  /* 10102cf2 push 0x1010e8e0 */ { u32 v_ = 0x1010e8e0u; esp -= 4; M32(esp) = v_; }
  /* 10102cf7 lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 10102cfb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102cfc mov dword ptr [esp + 0x24], 0x1010d29c */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0x1010d29cu); }
  /* 10102d04 call 0x10105ab6 */ esp -= 4; M32(esp) = 0x10102d09u; SAVEALL; F_10105ab6(c); ABI_CHECK(0x10105ab6u, 0x10102d04u); RETCHK(0x10102d09u, 0x10102d04u); LOADALL;
  /* 10102d09 int3 */ TRAP(0x10102d09u, "int3");
}

void F_10102d10(CPU *c) {
  NATIVE_HOOK(0x10102d10u) REGS; LOADALL;
L_10102d10:;
  /* 10102d10 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10102d12 push 0x1010c7c8 */ { u32 v_ = 0x1010c7c8u; esp -= 4; M32(esp) = v_; }
  /* 10102d17 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10102d1d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102d1e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10102d25 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102d28 mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 10102d2c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10102d2d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102d2e xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10102d30 mov eax, edx */ { eax = (u32)(edx); }
  /* 10102d32 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10102d33 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10102d35 mov dword ptr [esp + 0x24], 0xf */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0xfu); }
  /* 10102d3d mov dword ptr [esp + 0x20], ebx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ebx); }
  /* 10102d41 mov byte ptr [esp + 0x10], bl */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10102d45 lea edi, [eax + 1] */ edi = (u32)((u32)(eax + 0x1u));
L_10102d48:;
  /* 10102d48 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10102d4a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10102d4b cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10102d4d jne 0x10102d48 */ if (!ZF_) goto L_10102d48;
  /* 10102d4f sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10102d51 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102d52 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10102d53 lea ecx, [esp + 0x14] */ ecx = (u32)((u32)(esp + 0x14u));
  /* 10102d57 call 0x101027a0 */ esp -= 4; M32(esp) = 0x10102d5cu; SAVEALL; F_101027a0(c); ABI_CHECK(0x101027a0u, 0x10102d57u); RETCHK(0x10102d5cu, 0x10102d57u); LOADALL;
  /* 10102d5c lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 10102d60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102d61 lea ecx, [esp + 0x3c] */ ecx = (u32)((u32)(esp + 0x3cu));
  /* 10102d65 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102d66 lea ecx, [esi + 0x10] */ ecx = (u32)((u32)(esi + 0x10u));
  /* 10102d69 mov dword ptr [esp + 0x38], ebx */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(ebx); }
  /* 10102d6d call 0x101028c0 */ esp -= 4; M32(esp) = 0x10102d72u; SAVEALL; F_101028c0(c); ABI_CHECK(0x101028c0u, 0x10102d6du); RETCHK(0x10102d72u, 0x10102d6du); LOADALL;
  /* 10102d72 cmp dword ptr [esp + 0x24], 0x10 */ { const u32 m_ = (u32)(esp + 0x24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102d77 jb 0x10102d86 */ if (CF_) goto L_10102d86;
  /* 10102d79 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10102d7d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10102d7e call 0x10105a9d */ esp -= 4; M32(esp) = 0x10102d83u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10102d7eu); RETCHK(0x10102d83u, 0x10102d7eu); LOADALL;
  /* 10102d83 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10102d86:;
  /* 10102d86 mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 10102d8a cmp eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102d8d je 0x10102da6 */ if (ZF_) goto L_10102da6;
  /* 10102d8f mov eax, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); eax = (u32)(M32(m_)); }
  /* 10102d92 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10102d93 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102d94 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10102d95 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10102d99 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10102da0 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102da3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10102da6:;
  /* 10102da6 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 10102daa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10102dab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102dac mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10102dae pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10102daf mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10102db6 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102db9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10102dc0(CPU *c) {
  NATIVE_HOOK(0x10102dc0u) REGS; LOADALL;
L_10102dc0:;
  /* 10102dc0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102dc1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10102dc2 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10102dc4 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10102dc7 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 10102dc9 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 10102dcb mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10102dce mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 10102dd1 cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102dd4 mov dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 10102ddb je 0x10102dfc */ if (ZF_) goto L_10102dfc;
  /* 10102ddd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10102dde mov edi, edi */ { edi = (u32)(edi); }
L_10102de0:;
  /* 10102de0 mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 10102de2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10102de4 call 0x10102670 */ esp -= 4; M32(esp) = 0x10102de9u; SAVEALL; F_10102670(c); ABI_CHECK(0x10102670u, 0x10102de4u); RETCHK(0x10102de9u, 0x10102de4u); LOADALL;
  /* 10102de9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102dea call 0x10105a9d */ esp -= 4; M32(esp) = 0x10102defu; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10102deau); RETCHK(0x10102defu, 0x10102deau); LOADALL;
  /* 10102def mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10102df2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102df5 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102df7 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 10102df9 jne 0x10102de0 */ if (!ZF_) goto L_10102de0;
  /* 10102dfb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_10102dfc:;
  /* 10102dfc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10102dfd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102dfe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10102e00(CPU *c) {
  NATIVE_HOOK(0x10102e00u) REGS; LOADALL;
L_10102e00:;
  /* 10102e00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10102e01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10102e03 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10102e05 push 0x1010c7e0 */ { u32 v_ = 0x1010c7e0u; esp -= 4; M32(esp) = v_; }
  /* 10102e0a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10102e10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102e11 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10102e18 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102e1b mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10102e1e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10102e1f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102e20 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10102e22 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10102e25 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102e27 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10102e29 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10102e2a mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 10102e2d mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 10102e30 jne 0x10102e36 */ if (!ZF_) goto L_10102e36;
  /* 10102e32 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10102e34 jmp 0x10102e3e */ goto L_10102e3e;
L_10102e36:;
  /* 10102e36 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10102e39 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10102e3b sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_10102e3e:;
  /* 10102e3e mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10102e41 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102e43 je 0x1010302a */ if (ZF_) goto L_1010302a;
  /* 10102e49 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102e4b jne 0x10102e51 */ if (!ZF_) goto L_10102e51;
  /* 10102e4d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10102e4f jmp 0x10102e59 */ goto L_10102e59;
L_10102e51:;
  /* 10102e51 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10102e54 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10102e56 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
L_10102e59:;
  /* 10102e59 mov edi, 0x3fffffff */ { edi = (u32)(0x3fffffffu); }
  /* 10102e5e sub edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10102e60 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102e62 jae 0x10102e6b */ if (!CF_) goto L_10102e6b;
  /* 10102e64 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10102e66 call 0x10102ca0 */ esp -= 4; M32(esp) = 0x10102e6bu; SAVEALL; F_10102ca0(c); ABI_CHECK(0x10102ca0u, 0x10102e66u); RETCHK(0x10102e6bu, 0x10102e66u); LOADALL;
L_10102e6b:;
  /* 10102e6b test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102e6d jne 0x10102e73 */ if (!ZF_) goto L_10102e73;
  /* 10102e6f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10102e71 jmp 0x10102e7b */ goto L_10102e7b;
L_10102e73:;
  /* 10102e73 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10102e76 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10102e78 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
L_10102e7b:;
  /* 10102e7b add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10102e7d cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102e7f jae 0x10102f7d */ if (!CF_) goto L_10102f7d;
  /* 10102e85 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10102e87 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10102e89 mov edi, 0x3fffffff */ { edi = (u32)(0x3fffffffu); }
  /* 10102e8e sub edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10102e90 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102e92 jae 0x10102e98 */ if (!CF_) goto L_10102e98;
  /* 10102e94 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10102e96 jmp 0x10102e9a */ goto L_10102e9a;
L_10102e98:;
  /* 10102e98 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_10102e9a:;
  /* 10102e9a test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102e9c jne 0x10102ea2 */ if (!ZF_) goto L_10102ea2;
  /* 10102e9e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10102ea0 jmp 0x10102eaa */ goto L_10102eaa;
L_10102ea2:;
  /* 10102ea2 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10102ea5 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10102ea7 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
L_10102eaa:;
  /* 10102eaa add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10102eac cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102eae jae 0x10102ec2 */ if (!CF_) goto L_10102ec2;
  /* 10102eb0 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102eb2 jne 0x10102eb8 */ if (!ZF_) goto L_10102eb8;
  /* 10102eb4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10102eb6 jmp 0x10102ec0 */ goto L_10102ec0;
L_10102eb8:;
  /* 10102eb8 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10102ebb sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10102ebd sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_10102ec0:;
  /* 10102ec0 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_10102ec2:;
  /* 10102ec2 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10102ec5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102ec6 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10102ec9 call 0x10104f6a */ esp -= 4; M32(esp) = 0x10102eceu; SAVEALL; F_10104f6a(c); ABI_CHECK(0x10104f6au, 0x10102ec9u); RETCHK(0x10102eceu, 0x10102ec9u); LOADALL;
  /* 10102ece mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10102ed1 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10102ed4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10102ed5 mov edi, eax */ { edi = (u32)(eax); }
  /* 10102ed7 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10102eda push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102edb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10102edc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102edd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102ede mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 10102ee1 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 10102ee8 call 0x10102400 */ esp -= 4; M32(esp) = 0x10102eedu; SAVEALL; F_10102400(c); ABI_CHECK(0x10102400u, 0x10102ee8u); RETCHK(0x10102eedu, 0x10102ee8u); LOADALL;
  /* 10102eed mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10102ef0 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102ef3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10102ef4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102ef5 lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 10102ef8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102ef9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10102efa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102efb mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 10102efe call 0x10102610 */ esp -= 4; M32(esp) = 0x10102f03u; SAVEALL; F_10102610(c); ABI_CHECK(0x10102610u, 0x10102efeu); RETCHK(0x10102f03u, 0x10102efeu); LOADALL;
  /* 10102f03 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10102f06 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10102f09 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102f0c lea eax, [edx + ebx*4] */ eax = (u32)((u32)(edx + ebx * 4u));
  /* 10102f0f mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10102f12 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10102f13 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102f14 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102f15 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10102f18 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102f19 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102f1a call 0x10102400 */ esp -= 4; M32(esp) = 0x10102f1fu; SAVEALL; F_10102400(c); ABI_CHECK(0x10102400u, 0x10102f1au); RETCHK(0x10102f1fu, 0x10102f1au); LOADALL;
  /* 10102f1f mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10102f22 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102f25 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102f27 jne 0x10102f2d */ if (!ZF_) goto L_10102f2d;
  /* 10102f29 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10102f2b jmp 0x10102f35 */ goto L_10102f35;
L_10102f2d:;
  /* 10102f2d mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10102f30 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10102f32 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_10102f35:;
  /* 10102f35 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10102f37 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102f39 je 0x10102f44 */ if (ZF_) goto L_10102f44;
  /* 10102f3b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102f3c call 0x10105a9d */ esp -= 4; M32(esp) = 0x10102f41u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10102f3cu); RETCHK(0x10102f41u, 0x10102f3cu); LOADALL;
  /* 10102f41 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10102f44:;
  /* 10102f44 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 10102f47 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10102f49 lea edx, [edi + ebx*4] */ edx = (u32)((u32)(edi + ebx * 4u));
  /* 10102f4c mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 10102f4f mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 10102f52 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 10102f55 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10102f58 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10102f5f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10102f60 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102f61 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10102f62 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10102f64 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10102f65 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10102f7d:;
  /* 10102f7d mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10102f80 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10102f83 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10102f85 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10102f87 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10102f8a cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102f8c lea ecx, [ebx*4] */ ecx = (u32)((u32)(ebx * 4u));
  /* 10102f93 mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10102f96 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10102f99 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10102f9a mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 10102f9d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102f9e jae 0x10102ffd */ if (!CF_) goto L_10102ffd;
  /* 10102fa0 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10102fa2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102fa3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102fa4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10102fa5 call 0x10102400 */ esp -= 4; M32(esp) = 0x10102faau; SAVEALL; F_10102400(c); ABI_CHECK(0x10102400u, 0x10102fa5u); RETCHK(0x10102faau, 0x10102fa5u); LOADALL;
  /* 10102faa mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10102fad mov edx, eax */ { edx = (u32)(eax); }
  /* 10102faf add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102fb2 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10102fb4 lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 10102fb7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102fb8 sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10102fbb sub ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10102fbd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10102fbe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102fbf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10102fc1 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 10102fc8 call 0x10102890 */ esp -= 4; M32(esp) = 0x10102fcdu; SAVEALL; F_10102890(c); ABI_CHECK(0x10102890u, 0x10102fc8u); RETCHK(0x10102fcdu, 0x10102fc8u); LOADALL;
  /* 10102fcd mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10102fd0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10102fd3 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10102fd5 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10102fd8 lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 10102fdb mov esi, ebx */ { esi = (u32)(ebx); }
  /* 10102fdd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102fde sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10102fe0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102fe1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10102fe2 call 0x10101960 */ esp -= 4; M32(esp) = 0x10102fe7u; SAVEALL; F_10101960(c); ABI_CHECK(0x10101960u, 0x10102fe2u); RETCHK(0x10102fe7u, 0x10102fe2u); LOADALL;
  /* 10102fe7 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102fea mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10102fed mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10102ff4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10102ff5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102ff6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10102ff7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10102ff9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10102ffa ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10102ffd:;
  /* 10102ffd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102ffe mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10103000 sub ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10103002 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103003 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10103004 call 0x10102400 */ esp -= 4; M32(esp) = 0x10103009u; SAVEALL; F_10102400(c); ABI_CHECK(0x10102400u, 0x10103004u); RETCHK(0x10103009u, 0x10103004u); LOADALL;
  /* 10103009 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010300c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1010300f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103010 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10103011 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103012 call 0x101023d0 */ esp -= 4; M32(esp) = 0x10103017u; SAVEALL; F_101023d0(c); ABI_CHECK(0x101023d0u, 0x10103012u); RETCHK(0x10103017u, 0x10103012u); LOADALL;
  /* 10103017 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 1010301a lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 1010301d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010301e add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10103020 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10103021 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103022 call 0x10101960 */ esp -= 4; M32(esp) = 0x10103027u; SAVEALL; F_10101960(c); ABI_CHECK(0x10101960u, 0x10103022u); RETCHK(0x10103027u, 0x10103022u); LOADALL;
  /* 10103027 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1010302a:;
  /* 1010302a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 1010302d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010302e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010302f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10103036 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103037 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10103039 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010303a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10102f68(CPU *c) {
  NATIVE_HOOK(0x10102f68u) REGS; LOADALL;
L_10102f68:;
  /* 10102f68 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 10102f6b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102f6c call 0x10105a9d */ esp -= 4; M32(esp) = 0x10102f71u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10102f6cu); RETCHK(0x10102f71u, 0x10102f6cu); LOADALL;
  /* 10102f71 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102f74 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10102f76 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10102f78 call 0x10105ab6 */ esp -= 4; M32(esp) = 0x10102f7du; SAVEALL; F_10105ab6(c); ABI_CHECK(0x10105ab6u, 0x10102f78u); RETCHK(0x10102f7du, 0x10102f78u); LOADALL;
  /* 10102f7d mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10102f80 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10102f83 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10102f85 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10102f87 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10102f8a cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102f8c lea ecx, [ebx*4] */ ecx = (u32)((u32)(ebx * 4u));
  /* 10102f93 mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10102f96 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10102f99 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10102f9a mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 10102f9d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102f9e jae 0x10102ffd */ if (!CF_) goto L_10102ffd;
  /* 10102fa0 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10102fa2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102fa3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102fa4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10102fa5 call 0x10102400 */ esp -= 4; M32(esp) = 0x10102faau; SAVEALL; F_10102400(c); ABI_CHECK(0x10102400u, 0x10102fa5u); RETCHK(0x10102faau, 0x10102fa5u); LOADALL;
  /* 10102faa mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10102fad mov edx, eax */ { edx = (u32)(eax); }
  /* 10102faf add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102fb2 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10102fb4 lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 10102fb7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102fb8 sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10102fbb sub ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10102fbd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10102fbe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102fbf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10102fc1 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 10102fc8 call 0x10102890 */ esp -= 4; M32(esp) = 0x10102fcdu; SAVEALL; F_10102890(c); ABI_CHECK(0x10102890u, 0x10102fc8u); RETCHK(0x10102fcdu, 0x10102fc8u); LOADALL;
  /* 10102fcd mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10102fd0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10102fd3 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10102fd5 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10102fd8 lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 10102fdb mov esi, ebx */ { esi = (u32)(ebx); }
  /* 10102fdd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102fde sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10102fe0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102fe1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10102fe2 call 0x10101960 */ esp -= 4; M32(esp) = 0x10102fe7u; SAVEALL; F_10101960(c); ABI_CHECK(0x10101960u, 0x10102fe2u); RETCHK(0x10102fe7u, 0x10102fe2u); LOADALL;
  /* 10102fe7 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102fea mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10102fed mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10102ff4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10102ff5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102ff6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10102ff7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10102ff9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10102ffa ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10102ffd:;
  /* 10102ffd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102ffe mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10103000 sub ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10103002 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103003 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10103004 call 0x10102400 */ esp -= 4; M32(esp) = 0x10103009u; SAVEALL; F_10102400(c); ABI_CHECK(0x10102400u, 0x10103004u); RETCHK(0x10103009u, 0x10103004u); LOADALL;
  /* 10103009 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010300c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1010300f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103010 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10103011 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103012 call 0x101023d0 */ esp -= 4; M32(esp) = 0x10103017u; SAVEALL; F_101023d0(c); ABI_CHECK(0x101023d0u, 0x10103012u); RETCHK(0x10103017u, 0x10103012u); LOADALL;
  /* 10103017 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 1010301a lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 1010301d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010301e add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10103020 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10103021 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103022 call 0x10101960 */ esp -= 4; M32(esp) = 0x10103027u; SAVEALL; F_10101960(c); ABI_CHECK(0x10101960u, 0x10103022u); RETCHK(0x10103027u, 0x10103022u); LOADALL;
  /* 10103027 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010302a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 1010302d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010302e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010302f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10103036 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103037 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10103039 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010303a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10102f74(CPU *c) {
  NATIVE_HOOK(0x10102f74u) REGS; LOADALL;
L_10102f74:;
  /* 10102f74 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10102f76 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10102f78 call 0x10105ab6 */ esp -= 4; M32(esp) = 0x10102f7du; SAVEALL; F_10105ab6(c); ABI_CHECK(0x10105ab6u, 0x10102f78u); RETCHK(0x10102f7du, 0x10102f78u); LOADALL;
  /* 10102f7d mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10102f80 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10102f83 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10102f85 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10102f87 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10102f8a cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102f8c lea ecx, [ebx*4] */ ecx = (u32)((u32)(ebx * 4u));
  /* 10102f93 mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10102f96 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10102f99 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10102f9a mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 10102f9d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102f9e jae 0x10102ffd */ if (!CF_) goto L_10102ffd;
  /* 10102fa0 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10102fa2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102fa3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102fa4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10102fa5 call 0x10102400 */ esp -= 4; M32(esp) = 0x10102faau; SAVEALL; F_10102400(c); ABI_CHECK(0x10102400u, 0x10102fa5u); RETCHK(0x10102faau, 0x10102fa5u); LOADALL;
  /* 10102faa mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10102fad mov edx, eax */ { edx = (u32)(eax); }
  /* 10102faf add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102fb2 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10102fb4 lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 10102fb7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102fb8 sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10102fbb sub ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10102fbd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10102fbe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102fbf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10102fc1 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 10102fc8 call 0x10102890 */ esp -= 4; M32(esp) = 0x10102fcdu; SAVEALL; F_10102890(c); ABI_CHECK(0x10102890u, 0x10102fc8u); RETCHK(0x10102fcdu, 0x10102fc8u); LOADALL;
  /* 10102fcd mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10102fd0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10102fd3 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10102fd5 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10102fd8 lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 10102fdb mov esi, ebx */ { esi = (u32)(ebx); }
  /* 10102fdd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102fde sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10102fe0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102fe1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10102fe2 call 0x10101960 */ esp -= 4; M32(esp) = 0x10102fe7u; SAVEALL; F_10101960(c); ABI_CHECK(0x10101960u, 0x10102fe2u); RETCHK(0x10102fe7u, 0x10102fe2u); LOADALL;
  /* 10102fe7 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102fea mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10102fed mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10102ff4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10102ff5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102ff6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10102ff7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10102ff9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10102ffa ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10102ffd:;
  /* 10102ffd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102ffe mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10103000 sub ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10103002 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103003 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10103004 call 0x10102400 */ esp -= 4; M32(esp) = 0x10103009u; SAVEALL; F_10102400(c); ABI_CHECK(0x10102400u, 0x10103004u); RETCHK(0x10103009u, 0x10103004u); LOADALL;
  /* 10103009 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010300c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1010300f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103010 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10103011 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103012 call 0x101023d0 */ esp -= 4; M32(esp) = 0x10103017u; SAVEALL; F_101023d0(c); ABI_CHECK(0x101023d0u, 0x10103012u); RETCHK(0x10103017u, 0x10103012u); LOADALL;
  /* 10103017 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 1010301a lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 1010301d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010301e add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10103020 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10103021 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103022 call 0x10101960 */ esp -= 4; M32(esp) = 0x10103027u; SAVEALL; F_10101960(c); ABI_CHECK(0x10101960u, 0x10103022u); RETCHK(0x10103027u, 0x10103022u); LOADALL;
  /* 10103027 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010302a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 1010302d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010302e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010302f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10103036 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103037 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10103039 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010303a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10103040(CPU *c) {
  NATIVE_HOOK(0x10103040u) REGS; LOADALL;
L_10103040:;
  /* 10103040 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10103041 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10103043 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10103045 push 0x1010c801 */ { u32 v_ = 0x1010c801u; esp -= 4; M32(esp) = v_; }
  /* 1010304a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10103050 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103051 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10103058 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010305b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1010305c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010305d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010305e mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 10103061 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 10103063 call 0x10104f6a */ esp -= 4; M32(esp) = 0x10103068u; SAVEALL; F_10104f6a(c); ABI_CHECK(0x10104f6au, 0x10103063u); RETCHK(0x10103068u, 0x10103063u); LOADALL;
  /* 10103068 mov edi, eax */ { edi = (u32)(eax); }
  /* 1010306a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010306c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010306f mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 10103072 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10103075 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 10103078 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010307a mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 1010307e je 0x101030af */ if (ZF_) goto L_101030af;
  /* 10103080 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10103083 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10103086 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 10103089 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 1010308b mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 1010308d lea esi, [edi + 8] */ esi = (u32)((u32)(edi + 0x8u));
  /* 10103090 mov dword ptr [edi + 4], edx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(edx); }
  /* 10103093 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103094 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 1010309b mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 1010309e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1010309f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101030a1 mov byte ptr [esi + 4], al */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101030a4 call 0x101026b0 */ esp -= 4; M32(esp) = 0x101030a9u; SAVEALL; F_101026b0(c); ABI_CHECK(0x101026b0u, 0x101030a4u); RETCHK(0x101030a9u, 0x101030a4u); LOADALL;
  /* 101030a9 mov eax, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); eax = (u32)(M32(m_)); }
  /* 101030ac mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
L_101030af:;
  /* 101030af mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 101030b2 mov eax, edi */ { eax = (u32)(edi); }
  /* 101030b4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101030b5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101030b6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 101030bd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101030be mov esp, ebp */ { esp = (u32)(ebp); }
  /* 101030c0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101030c1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_101030c4(CPU *c) {
  NATIVE_HOOK(0x101030c4u) REGS; LOADALL;
L_101030c4:;
  /* 101030c4 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 101030c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101030c8 call 0x10105a9d */ esp -= 4; M32(esp) = 0x101030cdu; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x101030c8u); RETCHK(0x101030cdu, 0x101030c8u); LOADALL;
  /* 101030cd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101030d0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101030d2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101030d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101030d4 call 0x10105ab6 */ esp -= 4; M32(esp) = 0x101030d9u; SAVEALL; F_10105ab6(c); ABI_CHECK(0x10105ab6u, 0x101030d4u); RETCHK(0x101030d9u, 0x101030d4u); LOADALL;
  /* 101030d9 int3 */ TRAP(0x101030d9u, "int3");
}

void F_101030e0(CPU *c) {
  NATIVE_HOOK(0x101030e0u) REGS; LOADALL;
L_101030e0:;
  /* 101030e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101030e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 101030e3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 101030e6 sub esp, 0x94 */ { u32 a_ = esp, b_ = 0x94u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101030ec mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 101030f1 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101030f4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101030f5 mov dword ptr [esp + 0x94], eax */ { const u32 m_ = (u32)(esp + 0x94u); M32(m_) = (u32)(eax); }
  /* 101030fc mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 101030ff xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10103101 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103103 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103104 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103105 je 0x1010318e */ if (ZF_) goto L_1010318e;
  /* 1010310b mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 1010310e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010310f call 0x10102d10 */ esp -= 4; M32(esp) = 0x10103114u; SAVEALL; F_10102d10(c); ABI_CHECK(0x10102d10u, 0x1010310fu); RETCHK(0x10103114u, 0x1010310fu); LOADALL;
  /* 10103114 mov edx, eax */ { edx = (u32)(eax); }
  /* 10103116 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103118 je 0x1010318e */ if (ZF_) goto L_1010318e;
  /* 1010311a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010311c mov ecx, 0x22 */ { ecx = (u32)(0x22u); }
  /* 10103121 lea edi, [esp + 0x10] */ edi = (u32)((u32)(esp + 0x10u));
  /* 10103125 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10103127 cmp byte ptr [ebp + 0xc], bl */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1010312a setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 1010312d cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010312f mov byte ptr [esp + 0x14], al */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10103133 mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 10103137 mov byte ptr [esp + 0x94], bl */ { const u32 m_ = (u32)(esp + 0x94u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 1010313e jne 0x10103146 */ if (!ZF_) goto L_10103146;
  /* 10103140 mov byte ptr [esp + 0x15], bl */ { const u32 m_ = (u32)(esp + 0x15u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10103144 jmp 0x1010316b */ goto L_1010316b;
L_10103146:;
  /* 10103146 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 1010314b lea ecx, [esp + 0x19] */ ecx = (u32)((u32)(esp + 0x19u));
  /* 1010314f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103150 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10103151 call 0x101050f0 */ esp -= 4; M32(esp) = 0x10103156u; SAVEALL; F_101050f0(c); ABI_CHECK(0x101050f0u, 0x10103151u); RETCHK(0x10103156u, 0x10103151u); LOADALL;
  /* 10103156 mov al, byte ptr [esp + 0xa0] */ { const u32 m_ = (u32)(esp + 0xa0u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010315d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10103160 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10103162 je 0x1010316b */ if (ZF_) goto L_1010316b;
  /* 10103164 mov byte ptr [esp + 0x94], bl */ { const u32 m_ = (u32)(esp + 0x94u); M8(m_) = (u8)((ebx & 0xffu)); }
L_1010316b:;
  /* 1010316b mov edx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (u32)(M32(m_)); }
  /* 1010316e mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 10103171 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10103172 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 10103175 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103176 lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 1010317a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010317b push 0xd1 */ { u32 v_ = 0xd1u; esp -= 4; M32(esp) = v_; }
  /* 10103180 mov ecx, 0x10110c80 */ { ecx = (u32)(0x10110c80u); }
  /* 10103185 call 0x10104a40 */ esp -= 4; M32(esp) = 0x1010318au; SAVEALL; F_10104a40(c); ABI_CHECK(0x10104a40u, 0x10103185u); RETCHK(0x1010318au, 0x10103185u); LOADALL;
  /* 1010318a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010318c jge 0x101031a5 */ if (!LT_) goto L_101031a5;
L_1010318e:;
  /* 1010318e xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10103190 mov ecx, dword ptr [esp + 0x9c] */ { const u32 m_ = (u32)(esp + 0x9cu); ecx = (u32)(M32(m_)); }
  /* 10103197 call 0x1010570f */ esp -= 4; M32(esp) = 0x1010319cu; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10103197u); RETCHK(0x1010319cu, 0x10103197u); LOADALL;
  /* 1010319c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010319d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010319e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1010319f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 101031a1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101031a2 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
L_101031a5:;
  /* 101031a5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101031a8 mov dword ptr [esp + 0xc], ebx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 101031ac add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101031af mov word ptr [esp + 0xc], 0xd1 */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)(0xd1u); }
  /* 101031b6 mov byte ptr [esp + 0xf], bl */ { const u32 m_ = (u32)(esp + 0xfu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 101031ba mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 101031be push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101031bf mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 101031c1 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 101031c4 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 101031c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101031c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101031c8 call dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101031cbu; SAVEALL; call_ind(c, t_); RETCHK(0x101031cbu, 0x101031c8u); LOADALL; }
  /* 101031cb mov ecx, dword ptr [esp + 0x9c] */ { const u32 m_ = (u32)(esp + 0x9cu); ecx = (u32)(M32(m_)); }
  /* 101031d2 call 0x1010570f */ esp -= 4; M32(esp) = 0x101031d7u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101031d2u); RETCHK(0x101031d7u, 0x101031d2u); LOADALL;
  /* 101031d7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101031d8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101031d9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101031da mov esp, ebp */ { esp = (u32)(ebp); }
  /* 101031dc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101031dd ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_101031e0(CPU *c) {
  NATIVE_HOOK(0x101031e0u) REGS; LOADALL;
L_101031e0:;
  /* 101031e0 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 101031e3 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101031e5 jne 0x101031eb */ if (!ZF_) goto L_101031eb;
  /* 101031e7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101031e9 jmp 0x101031f3 */ goto L_101031f3;
L_101031eb:;
  /* 101031eb mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 101031ee sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101031f0 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_101031f3:;
  /* 101031f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101031f4 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 101031f8 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101031fa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101031fb jae 0x10103223 */ if (!CF_) goto L_10103223;
  /* 101031fd test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101031ff jne 0x10103205 */ if (!ZF_) goto L_10103205;
  /* 10103201 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103203 jmp 0x1010320d */ goto L_1010320d;
L_10103205:;
  /* 10103205 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10103208 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010320a sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_1010320d:;
  /* 1010320d mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10103210 lea edi, [esp + 0x10] */ edi = (u32)((u32)(esp + 0x10u));
  /* 10103214 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103215 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10103217 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103218 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10103219 call 0x10102e00 */ esp -= 4; M32(esp) = 0x1010321eu; SAVEALL; F_10102e00(c); ABI_CHECK(0x10102e00u, 0x10103219u); RETCHK(0x1010321eu, 0x10103219u); LOADALL;
  /* 1010321e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010321f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103220 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10103223:;
  /* 10103223 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10103225 je 0x10103244 */ if (ZF_) goto L_10103244;
  /* 10103227 mov edi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 1010322a mov eax, edi */ { eax = (u32)(edi); }
  /* 1010322c sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010322e sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10103231 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103233 jae 0x10103244 */ if (!CF_) goto L_10103244;
  /* 10103235 lea eax, [edx + esi*4] */ eax = (u32)((u32)(edx + esi * 4u));
  /* 10103238 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103239 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010323a lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 1010323e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010323f call 0x10102a30 */ esp -= 4; M32(esp) = 0x10103244u; SAVEALL; F_10102a30(c); ABI_CHECK(0x10102a30u, 0x1010323fu); RETCHK(0x10103244u, 0x1010323fu); LOADALL;
L_10103244:;
  /* 10103244 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103245 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103246 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10103250(CPU *c) {
  NATIVE_HOOK(0x10103250u) REGS; LOADALL;
L_10103250:;
  /* 10103250 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10103251 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10103253 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10103255 push 0x1010c810 */ { u32 v_ = 0x1010c810u; esp -= 4; M32(esp) = v_; }
  /* 1010325a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10103260 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103261 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10103268 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010326b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010326e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1010326f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103270 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10103272 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10103274 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103276 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103277 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 1010327a mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 1010327d mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10103280 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10103283 mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 10103286 je 0x101032d3 */ if (ZF_) goto L_101032d3;
  /* 10103288 cmp eax, 0x3fffffff */ { u32 a_ = eax, b_ = 0x3fffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010328d jbe 0x10103296 */ if ((CF_|ZF_)) goto L_10103296;
  /* 1010328f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103291 call 0x10102ca0 */ esp -= 4; M32(esp) = 0x10103296u; SAVEALL; F_10102ca0(c); ABI_CHECK(0x10102ca0u, 0x10103291u); RETCHK(0x10103296u, 0x10103291u); LOADALL;
L_10103296:;
  /* 10103296 lea ebx, [eax*4] */ ebx = (u32)((u32)(eax * 4u));
  /* 1010329d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1010329e call 0x10104f6a */ esp -= 4; M32(esp) = 0x101032a3u; SAVEALL; F_10104f6a(c); ABI_CHECK(0x10104f6au, 0x1010329eu); RETCHK(0x101032a3u, 0x1010329eu); LOADALL;
  /* 101032a3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101032a6 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 101032a9 mov edi, eax */ { edi = (u32)(eax); }
  /* 101032ab push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101032ac lea eax, [ebx + edi] */ eax = (u32)((u32)(ebx + edi));
  /* 101032af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101032b0 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 101032b3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101032b6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 101032b7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101032b8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101032b9 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 101032bc mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 101032bf mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 101032c6 call 0x10102610 */ esp -= 4; M32(esp) = 0x101032cbu; SAVEALL; F_10102610(c); ABI_CHECK(0x10102610u, 0x101032c6u); RETCHK(0x101032cbu, 0x101032c6u); LOADALL;
  /* 101032cb add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101032ce add ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 101032d0 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
L_101032d3:;
  /* 101032d3 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 101032d6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101032d7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101032d8 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 101032df pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101032e0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 101032e2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101032e3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_101032e6(CPU *c) {
  NATIVE_HOOK(0x101032e6u) REGS; LOADALL;
L_101032e6:;
  /* 101032e6 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 101032e9 call 0x10102a00 */ esp -= 4; M32(esp) = 0x101032eeu; SAVEALL; F_10102a00(c); ABI_CHECK(0x10102a00u, 0x101032e9u); RETCHK(0x101032eeu, 0x101032e9u); LOADALL;
  /* 101032ee push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 101032f0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 101032f2 call 0x10105ab6 */ esp -= 4; M32(esp) = 0x101032f7u; SAVEALL; F_10105ab6(c); ABI_CHECK(0x10105ab6u, 0x101032f2u); RETCHK(0x101032f7u, 0x101032f2u); LOADALL;
  /* 101032f7 int3 */ TRAP(0x101032f7u, "int3");
}

void F_10103320(CPU *c) {
  NATIVE_HOOK(0x10103320u) REGS; LOADALL;
L_10103320:;
  /* 10103320 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10103322 push 0x1010c82b */ { u32 v_ = 0x1010c82bu; esp -= 4; M32(esp) = v_; }
  /* 10103327 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1010332d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010332e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10103335 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10103336 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 1010333a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010333b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1010333d mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010333f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103340 mov byte ptr [esi], cl */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10103342 lea edi, [esi + 4] */ edi = (u32)((u32)(esi + 0x4u));
  /* 10103345 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10103347 mov dword ptr [esp + 8], esi */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(esi); }
  /* 1010334b call 0x101025f0 */ esp -= 4; M32(esp) = 0x10103350u; SAVEALL; F_101025f0(c); ABI_CHECK(0x101025f0u, 0x1010334bu); RETCHK(0x10103350u, 0x1010334bu); LOADALL;
  /* 10103350 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 10103353 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103355 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 10103358 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 1010335b mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 1010335f lea eax, [esp + 0x1c] */ eax = (u32)((u32)(esp + 0x1cu));
  /* 10103363 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103364 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 10103366 lea ecx, [esi + 0x10] */ ecx = (u32)((u32)(esi + 0x10u));
  /* 10103369 mov dword ptr [esp + 0x24], edx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(edx); }
  /* 1010336d call 0x10103250 */ esp -= 4; M32(esp) = 0x10103372u; SAVEALL; F_10103250(c); ABI_CHECK(0x10103250u, 0x1010336du); RETCHK(0x10103372u, 0x1010336du); LOADALL;
  /* 10103372 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10103376 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 1010337b mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 1010337e mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 10103381 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103382 mov eax, esi */ { eax = (u32)(esi); }
  /* 10103384 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103385 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 1010338c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010338f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_101033a0(CPU *c) {
  NATIVE_HOOK(0x101033a0u) REGS; LOADALL;
L_101033a0:;
  /* 101033a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101033a1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 101033a3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101033a4 mov dword ptr [esi], 0x1010d188 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1010d188u); }
  /* 101033aa mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 101033ad xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 101033af cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101033b1 je 0x101033bc */ if (ZF_) goto L_101033bc;
  /* 101033b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101033b4 call 0x10105a9d */ esp -= 4; M32(esp) = 0x101033b9u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x101033b4u); RETCHK(0x101033b9u, 0x101033b4u); LOADALL;
  /* 101033b9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_101033bc:;
  /* 101033bc mov dword ptr [esi + 0x24], edi */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(edi); }
  /* 101033bf mov dword ptr [esi + 0x28], edi */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(edi); }
  /* 101033c2 mov dword ptr [esi + 0x2c], edi */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(edi); }
  /* 101033c5 add esi, 0x14 */ { u32 a_ = esi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101033c8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101033ca call 0x10102dc0 */ esp -= 4; M32(esp) = 0x101033cfu; SAVEALL; F_10102dc0(c); ABI_CHECK(0x10102dc0u, 0x101033cau); RETCHK(0x101033cfu, 0x101033cau); LOADALL;
  /* 101033cf mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 101033d2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101033d3 call 0x10105a9d */ esp -= 4; M32(esp) = 0x101033d8u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x101033d3u); RETCHK(0x101033d8u, 0x101033d3u); LOADALL;
  /* 101033d8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101033db mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 101033de pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101033df pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101033e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101033f0(CPU *c) {
  NATIVE_HOOK(0x101033f0u) REGS; LOADALL;
L_101033f0:;
  /* 101033f0 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101033f3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101033f4 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 101033f6 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 101033f9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101033fa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101033fb mov esi, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); esi = (u32)(M32(m_)); }
  /* 101033fe shr eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10103401 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103403 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103404 ja 0x10103572 */ if (!(CF_|ZF_)) goto L_10103572;
  /* 1010340a mov edx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); edx = (u32)(M32(m_)); }
  /* 1010340d test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010340f lea ecx, [ebx + 0x10] */ ecx = (u32)((u32)(ebx + 0x10u));
  /* 10103412 jne 0x10103418 */ if (!ZF_) goto L_10103418;
  /* 10103414 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103416 jmp 0x10103420 */ goto L_10103420;
L_10103418:;
  /* 10103418 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010341b sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010341d sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_10103420:;
  /* 10103420 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10103421 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103423 ja 0x1010344e */ if (!(CF_|ZF_)) goto L_1010344e;
  /* 10103425 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10103428 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010342a jne 0x10103430 */ if (!ZF_) goto L_10103430;
  /* 1010342c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010342e jmp 0x10103438 */ goto L_10103438;
L_10103430:;
  /* 10103430 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10103433 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10103435 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_10103438:;
  /* 10103438 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 1010343b lea eax, [eax + eax - 3] */ eax = (u32)((u32)(eax + eax + 0xfffffffdu));
  /* 1010343f mov dword ptr [ebx + 0x20], eax */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(eax); }
  /* 10103442 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10103443 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10103446 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103447 call 0x101031e0 */ esp -= 4; M32(esp) = 0x1010344cu; SAVEALL; F_101031e0(c); ABI_CHECK(0x101031e0u, 0x10103447u); RETCHK(0x1010344cu, 0x10103447u); LOADALL;
  /* 1010344c jmp 0x1010345c */ goto L_1010345c;
L_1010344e:;
  /* 1010344e mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 10103451 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103453 jae 0x1010345c */ if (!CF_) goto L_1010345c;
  /* 10103455 lea ecx, [eax + eax + 1] */ ecx = (u32)((u32)(eax + eax + 0x1u));
  /* 10103459 mov dword ptr [ebx + 0x20], ecx */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(ecx); }
L_1010345c:;
  /* 1010345c mov edx, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); edx = (u32)(M32(m_)); }
  /* 1010345f mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10103462 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 10103465 shr edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10103467 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10103469 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010346a mov esi, dword ptr [eax + ecx*4] */ { const u32 m_ = (u32)(eax + ecx * 4u); esi = (u32)(M32(m_)); }
  /* 1010346d mov edx, dword ptr [eax + ecx*4 + 4] */ { const u32 m_ = (u32)(eax + ecx * 4u + 0x4u); edx = (u32)(M32(m_)); }
  /* 10103471 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103473 lea eax, [eax + ecx*4] */ eax = (u32)((u32)(eax + ecx * 4u));
  /* 10103476 mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 1010347a je 0x1010356f */ if (ZF_) goto L_1010356f;
L_10103480:;
  /* 10103480 mov edx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); edx = (u32)(M32(m_)); }
  /* 10103483 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10103485 mov ebp, 0xdeadbeef */ { ebp = (u32)(0xdeadbeefu); }
  /* 1010348a jbe 0x101034b4 */ if ((CF_|ZF_)) goto L_101034b4;
  /* 1010348c mov eax, edx */ { eax = (u32)(edx); }
  /* 1010348e shr eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10103491 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10103492 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10103494 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_10103496:;
  /* 10103496 cmp dword ptr [esi + 0x20], 0x10 */ { const u32 m_ = (u32)(esi + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010349a jb 0x101034a1 */ if (CF_) goto L_101034a1;
  /* 1010349c mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 1010349f jmp 0x101034a4 */ goto L_101034a4;
L_101034a1:;
  /* 101034a1 lea edi, [esi + 0xc] */ edi = (u32)((u32)(esi + 0xcu));
L_101034a4:;
  /* 101034a4 movsx edi, byte ptr [edi + ecx] */ { const u32 m_ = (u32)(edi + ecx); edi = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 101034a8 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101034aa add ebp, edi */ { u32 a_ = ebp, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 101034ac cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101034ae jbe 0x10103496 */ if ((CF_|ZF_)) goto L_10103496;
  /* 101034b0 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
L_101034b4:;
  /* 101034b4 and ebp, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); u32 a_ = ebp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 101034b7 cmp ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101034b9 jne 0x101034c2 */ if (!ZF_) goto L_101034c2;
  /* 101034bb mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 101034bd jmp 0x1010355c */ goto L_1010355c;
L_101034c2:;
  /* 101034c2 mov ebp, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebp = (u32)(M32(m_)); }
  /* 101034c4 cmp ebp, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = ebp, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101034c7 je 0x10103536 */ if (ZF_) goto L_10103536;
  /* 101034c9 mov edx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); edx = (u32)(M32(m_)); }
  /* 101034cc mov eax, ecx */ { eax = (u32)(ecx); }
  /* 101034ce shl ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 101034d1 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 101034d3 cmp esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101034d5 jne 0x101034ee */ if (!ZF_) goto L_101034ee;
L_101034d7:;
  /* 101034d7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101034d9 mov ecx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); ecx = (u32)(M32(m_)); }
  /* 101034dc lea ecx, [ecx + eax*4] */ ecx = (u32)((u32)(ecx + eax * 4u));
  /* 101034df mov dword ptr [ecx], ebp */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ebp); }
  /* 101034e1 je 0x101034ee */ if (ZF_) goto L_101034ee;
  /* 101034e3 mov edx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); edx = (u32)(M32(m_)); }
  /* 101034e6 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101034e7 lea ecx, [edx + eax*4] */ ecx = (u32)((u32)(edx + eax * 4u));
  /* 101034ea cmp esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101034ec je 0x101034d7 */ if (ZF_) goto L_101034d7;
L_101034ee:;
  /* 101034ee mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 101034f1 lea ecx, [ebx + 4] */ ecx = (u32)((u32)(ebx + 0x4u));
  /* 101034f4 cmp ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101034f6 je 0x101034ff */ if (ZF_) goto L_101034ff;
  /* 101034f8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 101034fa call 0x10102b70 */ esp -= 4; M32(esp) = 0x101034ffu; SAVEALL; F_10102b70(c); ABI_CHECK(0x10102b70u, 0x101034fau); RETCHK(0x101034ffu, 0x101034fau); LOADALL;
L_101034ff:;
  /* 101034ff mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10103502 mov dword ptr [eax], ebp */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebp); }
  /* 10103504 mov ecx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10103507 mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 10103509 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 1010350c mov dword ptr [edx], esi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(esi); }
  /* 1010350e mov ecx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10103511 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10103514 mov dword ptr [edi + 4], ecx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10103517 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 1010351a mov dword ptr [ebp + 4], edx */ { const u32 m_ = (u32)(ebp + 0x4u); M32(m_) = (u32)(edx); }
  /* 1010351d mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 10103520 mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10103523 mov edx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); edx = (u32)(M32(m_)); }
  /* 10103526 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10103529 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 1010352c lea ecx, [edx + ecx*4 + 4] */ ecx = (u32)((u32)(edx + ecx * 4u + 0x4u));
  /* 10103530 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 10103532 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
L_10103536:;
  /* 10103536 mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 10103539 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010353b jae 0x10103555 */ if (!CF_) goto L_10103555;
  /* 1010353d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_10103540:;
  /* 10103540 mov edx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); edx = (u32)(M32(m_)); }
  /* 10103543 mov edi, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); edi = (u32)(M32(m_)); }
  /* 10103546 cmp edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103549 lea edx, [edx + eax*4] */ edx = (u32)((u32)(edx + eax * 4u));
  /* 1010354c jne 0x10103555 */ if (!ZF_) goto L_10103555;
  /* 1010354e dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010354f cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103551 mov dword ptr [edx], esi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(esi); }
  /* 10103553 jb 0x10103540 */ if (CF_) goto L_10103540;
L_10103555:;
  /* 10103555 cmp ebp, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = ebp, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103558 je 0x1010356f */ if (ZF_) goto L_1010356f;
  /* 1010355a mov esi, ebp */ { esi = (u32)(ebp); }
L_1010355c:;
  /* 1010355c mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 1010355f mov edx, dword ptr [eax + ecx*4 + 4] */ { const u32 m_ = (u32)(eax + ecx * 4u + 0x4u); edx = (u32)(M32(m_)); }
  /* 10103563 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103565 lea eax, [eax + ecx*4 + 4] */ eax = (u32)((u32)(eax + ecx * 4u + 0x4u));
  /* 10103569 jne 0x10103480 */ if (!ZF_) goto L_10103480;
L_1010356f:;
  /* 1010356f inc dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10103572:;
  /* 10103572 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 10103576 mov esi, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); esi = (u32)(M32(m_)); }
  /* 10103579 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010357b mov ebp, 0xdeadbeef */ { ebp = (u32)(0xdeadbeefu); }
  /* 10103580 mov dword ptr [esp + 0x10], esi */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(esi); }
  /* 10103584 jbe 0x101035b9 */ if ((CF_|ZF_)) goto L_101035b9;
  /* 10103586 mov edi, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edi = (u32)(M32(m_)); }
  /* 1010358a mov edx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); edx = (u32)(M32(m_)); }
  /* 1010358d mov eax, esi */ { eax = (u32)(esi); }
  /* 1010358f shr eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10103592 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10103593 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10103595 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10103597 mov dword ptr [esp + 0x14], edx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edx); }
  /* 1010359b add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010359e mov edi, edi */ { edi = (u32)(edi); }
L_101035a0:;
  /* 101035a0 cmp dword ptr [esp + 0x14], 0x10 */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101035a5 jb 0x101035ab */ if (CF_) goto L_101035ab;
  /* 101035a7 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 101035a9 jmp 0x101035ad */ goto L_101035ad;
L_101035ab:;
  /* 101035ab mov edx, edi */ { edx = (u32)(edi); }
L_101035ad:;
  /* 101035ad movsx edx, byte ptr [edx + ecx] */ { const u32 m_ = (u32)(edx + ecx); edx = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 101035b1 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101035b3 add ebp, edx */ { u32 a_ = ebp, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 101035b5 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101035b7 jbe 0x101035a0 */ if ((CF_|ZF_)) goto L_101035a0;
L_101035b9:;
  /* 101035b9 mov ecx, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); ecx = (u32)(M32(m_)); }
  /* 101035bc mov edx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); edx = (u32)(M32(m_)); }
  /* 101035bf mov eax, ecx */ { eax = (u32)(ecx); }
  /* 101035c1 and eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101035c3 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101035c5 ja 0x101035d0 */ if (!(CF_|ZF_)) goto L_101035d0;
  /* 101035c7 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 101035c9 or edx, 0xffffffff */ { u32 a_ = edx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 101035cc sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 101035ce add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_101035d0:;
  /* 101035d0 lea esi, [eax*4] */ esi = (u32)((u32)(eax * 4u));
  /* 101035d7 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 101035db mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 101035de mov ebp, dword ptr [eax + esi + 4] */ { const u32 m_ = (u32)(eax + esi + 0x4u); ebp = (u32)(M32(m_)); }
  /* 101035e2 mov ecx, dword ptr [eax + esi] */ { const u32 m_ = (u32)(eax + esi); ecx = (u32)(M32(m_)); }
  /* 101035e5 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101035e7 cmp ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101035e9 mov dword ptr [esp + 0x14], esi */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(esi); }
  /* 101035ed je 0x10103679 */ if (ZF_) goto L_10103679;
  /* 101035f3 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 101035f7 mov edx, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); edx = (u32)(M32(m_)); }
  /* 101035fa mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 101035fe mov edi, edi */ { edi = (u32)(edi); }
L_10103600:;
  /* 10103600 mov ebp, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); ebp = (u32)(M32(m_)); }
  /* 10103603 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103607 jb 0x1010360e */ if (CF_) goto L_1010360e;
  /* 10103609 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 1010360c jmp 0x10103611 */ goto L_10103611;
L_1010360e:;
  /* 1010360e lea edi, [ebp + 0xc] */ edi = (u32)((u32)(ebp + 0xcu));
L_10103611:;
  /* 10103611 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 10103615 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10103619 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010361b jae 0x1010361f */ if (!CF_) goto L_1010361f;
  /* 1010361d mov edx, eax */ { edx = (u32)(eax); }
L_1010361f:;
  /* 1010361f test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10103621 je 0x1010364f */ if (ZF_) goto L_1010364f;
  /* 10103623 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10103626 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103628 jae 0x1010362c */ if (!CF_) goto L_1010362c;
  /* 1010362a mov eax, edx */ { eax = (u32)(edx); }
L_1010362c:;
  /* 1010362c mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 10103630 cmp dword ptr [ecx + 0x18], 0x10 */ { const u32 m_ = (u32)(ecx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103634 jb 0x1010363b */ if (CF_) goto L_1010363b;
  /* 10103636 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 10103639 jmp 0x1010363e */ goto L_1010363e;
L_1010363b:;
  /* 1010363b lea esi, [ecx + 4] */ esi = (u32)((u32)(ecx + 0x4u));
L_1010363e:;
  /* 1010363e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10103640 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103642 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 10103644 je 0x1010364b */ if (ZF_) goto L_1010364b;
  /* 10103646 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10103648 sbb eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
L_1010364b:;
  /* 1010364b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010364d jne 0x1010365f */ if (!ZF_) goto L_1010365f;
L_1010364f:;
  /* 1010364f mov esi, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 10103652 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103654 jb 0x10103665 */ if (CF_) goto L_10103665;
  /* 10103656 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103658 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010365a setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 1010365d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
L_1010365f:;
  /* 1010365f jge 0x101036e5 */ if (!LT_) goto L_101036e5;
L_10103665:;
  /* 10103665 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 10103668 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 1010366c mov ecx, dword ptr [eax + edx] */ { const u32 m_ = (u32)(eax + edx); ecx = (u32)(M32(m_)); }
  /* 1010366f add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10103671 cmp ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103673 jne 0x10103600 */ if (!ZF_) goto L_10103600;
L_10103675:;
  /* 10103675 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
L_10103679:;
  /* 10103679 mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 1010367d mov edx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10103680 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103681 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10103682 lea ecx, [ebx + 4] */ ecx = (u32)((u32)(ebx + 0x4u));
  /* 10103685 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10103686 call 0x10103040 */ esp -= 4; M32(esp) = 0x1010368bu; SAVEALL; F_10103040(c); ABI_CHECK(0x10103040u, 0x10103686u); RETCHK(0x1010368bu, 0x10103686u); LOADALL;
  /* 1010368b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1010368d lea ecx, [ebx + 4] */ ecx = (u32)((u32)(ebx + 0x4u));
  /* 10103690 mov edi, eax */ { edi = (u32)(eax); }
  /* 10103692 call 0x10102b70 */ esp -= 4; M32(esp) = 0x10103697u; SAVEALL; F_10102b70(c); ABI_CHECK(0x10102b70u, 0x10103692u); RETCHK(0x10103697u, 0x10103692u); LOADALL;
  /* 10103697 mov dword ptr [ebp + 4], edi */ { const u32 m_ = (u32)(ebp + 0x4u); M32(m_) = (u32)(edi); }
  /* 1010369a mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 1010369d mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 1010369f mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 101036a2 mov ecx, dword ptr [eax + esi] */ { const u32 m_ = (u32)(eax + esi); ecx = (u32)(M32(m_)); }
  /* 101036a5 mov edx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); edx = (u32)(M32(m_)); }
  /* 101036a8 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101036aa cmp ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101036ac jne 0x101036d1 */ if (!ZF_) goto L_101036d1;
  /* 101036ae mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
L_101036b2:;
  /* 101036b2 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 101036b5 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101036b7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101036b9 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 101036bb je 0x101036d1 */ if (ZF_) goto L_101036d1;
  /* 101036bd mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 101036c0 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101036c1 lea esi, [ecx*4] */ esi = (u32)((u32)(ecx * 4u));
  /* 101036c8 mov edi, dword ptr [eax + esi] */ { const u32 m_ = (u32)(eax + esi); edi = (u32)(M32(m_)); }
  /* 101036cb add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101036cd cmp ebp, edi */ { u32 a_ = ebp, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101036cf je 0x101036b2 */ if (ZF_) goto L_101036b2;
L_101036d1:;
  /* 101036d1 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 101036d5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101036d6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101036d7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101036d8 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 101036da mov byte ptr [eax + 4], 1 */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)(0x1u); }
  /* 101036de pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101036df add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101036e2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_101036e5:;
  /* 101036e5 mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 101036e9 mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 101036ec mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 101036f1 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101036f3 jb 0x101036fa */ if (CF_) goto L_101036fa;
  /* 101036f5 mov edi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edi = (u32)(M32(m_)); }
  /* 101036f8 jmp 0x101036fd */ goto L_101036fd;
L_101036fa:;
  /* 101036fa lea edi, [eax + 4] */ edi = (u32)((u32)(eax + 0x4u));
L_101036fd:;
  /* 101036fd mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 10103700 mov eax, edx */ { eax = (u32)(edx); }
  /* 10103702 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103704 jae 0x10103706 */ if (!CF_) goto L_10103706;
L_10103706:;
  /* 10103706 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10103708 je 0x10103730 */ if (ZF_) goto L_10103730;
  /* 1010370a mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1010370e cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103710 jae 0x10103714 */ if (!CF_) goto L_10103714;
  /* 10103712 mov ecx, edx */ { ecx = (u32)(edx); }
L_10103714:;
  /* 10103714 cmp dword ptr [ebp + 0x20], esi */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103717 jb 0x1010371e */ if (CF_) goto L_1010371e;
  /* 10103719 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 1010371c jmp 0x10103721 */ goto L_10103721;
L_1010371e:;
  /* 1010371e lea esi, [ebp + 0xc] */ esi = (u32)((u32)(ebp + 0xcu));
L_10103721:;
  /* 10103721 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103723 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 10103725 je 0x1010372c */ if (ZF_) goto L_1010372c;
  /* 10103727 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10103729 sbb eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
L_1010372c:;
  /* 1010372c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010372e jne 0x10103741 */ if (!ZF_) goto L_10103741;
L_10103730:;
  /* 10103730 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10103734 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103736 jb 0x10103743 */ if (CF_) goto L_10103743;
  /* 10103738 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010373a cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010373c setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 1010373f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
L_10103741:;
  /* 10103741 jge 0x1010374b */ if (!LT_) goto L_1010374b;
L_10103743:;
  /* 10103743 mov ebp, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); ebp = (u32)(M32(m_)); }
  /* 10103746 jmp 0x10103675 */ goto L_10103675;
L_1010374b:;
  /* 1010374b mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 1010374f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103750 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103751 mov dword ptr [eax], ebp */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebp); }
  /* 10103753 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10103754 mov byte ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 10103758 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103759 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010375c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10103760(CPU *c) {
  NATIVE_HOOK(0x10103760u) REGS; LOADALL;
L_10103760:;
  /* 10103760 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10103761 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10103762 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103763 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103764 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10103766 call 0x10104f30 */ esp -= 4; M32(esp) = 0x1010376bu; SAVEALL; F_10104f30(c); ABI_CHECK(0x10104f30u, 0x10103766u); RETCHK(0x1010376bu, 0x10103766u); LOADALL;
  /* 1010376b lea eax, [esp + 0xf] */ eax = (u32)((u32)(esp + 0xfu));
  /* 1010376f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103770 lea ecx, [esp + 0x13] */ ecx = (u32)((u32)(esp + 0x13u));
  /* 10103774 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10103776 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10103777 lea ecx, [esi + 0x10] */ ecx = (u32)((u32)(esi + 0x10u));
  /* 1010377a mov dword ptr [esi], 0x1010d188 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1010d188u); }
  /* 10103780 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10103783 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 10103786 call 0x10103320 */ esp -= 4; M32(esp) = 0x1010378bu; SAVEALL; F_10103320(c); ABI_CHECK(0x10103320u, 0x10103786u); RETCHK(0x1010378bu, 0x10103786u); LOADALL;
  /* 1010378b mov dword ptr [esi + 0x38], ebx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ebx); }
  /* 1010378e mov word ptr [esi + 0x20bc], bx */ { const u32 m_ = (u32)(esi + 0x20bcu); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 10103795 mov byte ptr [esi + 0x25c8], bl */ { const u32 m_ = (u32)(esi + 0x25c8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 1010379b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010379d lea edi, [esi + 0x3c] */ edi = (u32)((u32)(esi + 0x3cu));
  /* 101037a0 mov ecx, 0x820 */ { ecx = (u32)(0x820u); }
  /* 101037a5 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 101037a7 lea edi, [esi + 0x20be] */ edi = (u32)((u32)(esi + 0x20beu));
  /* 101037ad mov ecx, 0x142 */ { ecx = (u32)(0x142u); }
  /* 101037b2 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 101037b4 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 101037b6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101037b7 mov eax, esi */ { eax = (u32)(esi); }
  /* 101037b9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101037ba pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101037bb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101037bc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101037c0(CPU *c) {
  NATIVE_HOOK(0x101037c0u) REGS; LOADALL;
L_101037c0:;
  /* 101037c0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101037c1 mov edi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edi = (u32)(M32(m_)); }
  /* 101037c5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101037c6 call 0x10104f60 */ esp -= 4; M32(esp) = 0x101037cbu; SAVEALL; F_10104f60(c); ABI_CHECK(0x10104f60u, 0x101037c6u); RETCHK(0x101037cbu, 0x101037c6u); LOADALL;
  /* 101037cb mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 101037cd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101037ce call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101037d1u; SAVEALL; call_ind(c, t_); RETCHK(0x101037d1u, 0x101037ceu); LOADALL; }
  /* 101037d1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101037d3 jg 0x10103805 */ if (!(ZF_|LT_)) goto L_10103805;
  /* 101037d5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101037d6 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 101037d9 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101037db je 0x101037f4 */ if (ZF_) goto L_101037f4;
  /* 101037dd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101037df call 0x10101050 */ esp -= 4; M32(esp) = 0x101037e4u; SAVEALL; F_10101050(c); ABI_CHECK(0x10101050u, 0x101037dfu); RETCHK(0x101037e4u, 0x101037dfu); LOADALL;
  /* 101037e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101037e5 call 0x10105a9d */ esp -= 4; M32(esp) = 0x101037eau; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x101037e5u); RETCHK(0x101037eau, 0x101037e5u); LOADALL;
  /* 101037ea add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101037ed mov dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(0x0u); }
L_101037f4:;
  /* 101037f4 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 101037f6 call 0x101033a0 */ esp -= 4; M32(esp) = 0x101037fbu; SAVEALL; F_101033a0(c); ABI_CHECK(0x101033a0u, 0x101037f6u); RETCHK(0x101037fbu, 0x101037f6u); LOADALL;
  /* 101037fb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101037fc call 0x10105a9d */ esp -= 4; M32(esp) = 0x10103801u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x101037fcu); RETCHK(0x10103801u, 0x101037fcu); LOADALL;
  /* 10103801 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10103804 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10103805:;
  /* 10103805 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103806 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10103810(CPU *c) {
  NATIVE_HOOK(0x10103810u) REGS; LOADALL;
L_10103810:;
  /* 10103810 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10103816 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10103818 push 0x1010c848 */ { u32 v_ = 0x1010c848u; esp -= 4; M32(esp) = v_; }
  /* 1010381d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010381e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10103825 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10103828 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103829 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010382a mov edi, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); edi = (u32)(M32(m_)); }
  /* 1010382e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010382f lea eax, [esp + 0x44] */ eax = (u32)((u32)(esp + 0x44u));
  /* 10103833 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103834 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10103836 call 0x101028c0 */ esp -= 4; M32(esp) = 0x1010383bu; SAVEALL; F_101028c0(c); ABI_CHECK(0x101028c0u, 0x10103836u); RETCHK(0x1010383bu, 0x10103836u); LOADALL;
  /* 1010383b mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010383e mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 10103842 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103844 jne 0x101038ac */ if (!ZF_) goto L_101038ac;
  /* 10103846 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10103847 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10103849 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 1010384b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1010384c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010384d lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 10103851 mov dword ptr [esp + 0x38], 0xf */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(0xfu); }
  /* 10103859 mov dword ptr [esp + 0x34], ebx */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(ebx); }
  /* 1010385d mov byte ptr [esp + 0x24], bl */ { const u32 m_ = (u32)(esp + 0x24u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10103861 call 0x101026b0 */ esp -= 4; M32(esp) = 0x10103866u; SAVEALL; F_101026b0(c); ABI_CHECK(0x101026b0u, 0x10103861u); RETCHK(0x10103866u, 0x10103861u); LOADALL;
  /* 10103866 mov dword ptr [esp + 0x30], ebx */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(ebx); }
  /* 1010386a lea ecx, [esp + 0x14] */ ecx = (u32)((u32)(esp + 0x14u));
  /* 1010386e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010386f lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 10103873 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10103874 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103876 mov dword ptr [esp + 0x44], ebx */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(ebx); }
  /* 1010387a call 0x101033f0 */ esp -= 4; M32(esp) = 0x1010387fu; SAVEALL; F_101033f0(c); ABI_CHECK(0x101033f0u, 0x1010387au); RETCHK(0x1010387fu, 0x1010387au); LOADALL;
  /* 1010387f mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 10103881 cmp dword ptr [esp + 0x2c], 0x10 */ { const u32 m_ = (u32)(esp + 0x2cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103886 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103887 jb 0x10103896 */ if (CF_) goto L_10103896;
  /* 10103889 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 1010388d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010388e call 0x10105a9d */ esp -= 4; M32(esp) = 0x10103893u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x1010388eu); RETCHK(0x10103893u, 0x1010388eu); LOADALL;
  /* 10103893 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10103896:;
  /* 10103896 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103897 lea eax, [esi + 0x24] */ eax = (u32)((u32)(esi + 0x24u));
  /* 1010389a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010389b mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 1010389f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 101038a6 add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101038a9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_101038ac:;
  /* 101038ac lea eax, [ecx + 0x24] */ eax = (u32)((u32)(ecx + 0x24u));
  /* 101038af mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 101038b3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101038b4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101038b5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 101038bc add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101038bf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101038d0(CPU *c) {
  NATIVE_HOOK(0x101038d0u) REGS; LOADALL;
L_101038d0:;
  /* 101038d0 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 101038d6 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 101038d8 push 0x1010c86b */ { u32 v_ = 0x1010c86bu; esp -= 4; M32(esp) = v_; }
  /* 101038dd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101038de mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 101038e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101038e6 call 0x10101770 */ esp -= 4; M32(esp) = 0x101038ebu; SAVEALL; F_10101770(c); ABI_CHECK(0x10101770u, 0x101038e6u); RETCHK(0x101038ebu, 0x101038e6u); LOADALL;
  /* 101038eb test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101038ed je 0x10103931 */ if (ZF_) goto L_10103931;
  /* 101038ef mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 101038f3 mov ecx, dword ptr [0x10120c90] */ { const u32 m_ = (u32)(0x10120c90u); ecx = (u32)(M32(m_)); }
  /* 101038f9 push 0x1010d158 */ { u32 v_ = 0x1010d158u; esp -= 4; M32(esp) = v_; }
  /* 101038fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101038ff push 0x1010d14c */ { u32 v_ = 0x1010d14cu; esp -= 4; M32(esp) = v_; }
  /* 10103904 call 0x10104e30 */ esp -= 4; M32(esp) = 0x10103909u; SAVEALL; F_10104e30(c); ABI_CHECK(0x10104e30u, 0x10103904u); RETCHK(0x10103909u, 0x10103904u); LOADALL;
  /* 10103909 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010390b mov ecx, dword ptr [0x10120c90] */ { const u32 m_ = (u32)(0x10120c90u); ecx = (u32)(M32(m_)); }
  /* 10103911 jne 0x10103945 */ if (!ZF_) goto L_10103945;
  /* 10103913 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10103915 je 0x10103927 */ if (ZF_) goto L_10103927;
  /* 10103917 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10103919 call 0x10101760 */ esp -= 4; M32(esp) = 0x1010391eu; SAVEALL; F_10101760(c); ABI_CHECK(0x10101760u, 0x10103919u); RETCHK(0x1010391eu, 0x10103919u); LOADALL;
  /* 1010391e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010391f call 0x10105a9d */ esp -= 4; M32(esp) = 0x10103924u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x1010391fu); RETCHK(0x10103924u, 0x1010391fu); LOADALL;
  /* 10103924 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10103927:;
  /* 10103927 mov dword ptr [0x10120c90], 0 */ { const u32 m_ = (u32)(0x10120c90u); M32(m_) = (u32)(0x0u); }
L_10103931:;
  /* 10103931 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103933 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10103937 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 1010393e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010393f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10103942 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10103945:;
  /* 10103945 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10103947 je 0x10103959 */ if (ZF_) goto L_10103959;
  /* 10103949 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1010394b call 0x10101760 */ esp -= 4; M32(esp) = 0x10103950u; SAVEALL; F_10101760(c); ABI_CHECK(0x10101760u, 0x1010394bu); RETCHK(0x10103950u, 0x1010394bu); LOADALL;
  /* 10103950 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103951 call 0x10105a9d */ esp -= 4; M32(esp) = 0x10103956u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10103951u); RETCHK(0x10103956u, 0x10103951u); LOADALL;
  /* 10103956 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10103959:;
  /* 10103959 push 0x25cc */ { u32 v_ = 0x25ccu; esp -= 4; M32(esp) = v_; }
  /* 1010395e mov dword ptr [0x10120c90], 0 */ { const u32 m_ = (u32)(0x10120c90u); M32(m_) = (u32)(0x0u); }
  /* 10103968 call 0x10104f6a */ esp -= 4; M32(esp) = 0x1010396du; SAVEALL; F_10104f6a(c); ABI_CHECK(0x10104f6au, 0x10103968u); RETCHK(0x1010396du, 0x10103968u); LOADALL;
  /* 1010396d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10103970 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 10103974 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10103976 mov dword ptr [esp + 0xc], 0 */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 1010397e je 0x1010398b */ if (ZF_) goto L_1010398b;
  /* 10103980 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10103982 call 0x10103760 */ esp -= 4; M32(esp) = 0x10103987u; SAVEALL; F_10103760(c); ABI_CHECK(0x10103760u, 0x10103982u); RETCHK(0x10103987u, 0x10103982u); LOADALL;
  /* 10103987 mov esi, eax */ { esi = (u32)(eax); }
  /* 10103989 jmp 0x1010398d */ goto L_1010398d;
L_1010398b:;
  /* 1010398b xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_1010398d:;
  /* 1010398d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010398f mov dword ptr [esp + 0xc], 0xffffffff */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(0xffffffffu); }
  /* 10103997 je 0x1010399e */ if (ZF_) goto L_1010399e;
  /* 10103999 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 1010399b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010399c call dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010399eu; SAVEALL; call_ind(c, t_); RETCHK(0x1010399eu, 0x1010399cu); LOADALL; }
L_1010399e:;
  /* 1010399e mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101039a2 mov eax, esi */ { eax = (u32)(esi); }
  /* 101039a4 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 101039ab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101039ac add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101039af ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101039c0(CPU *c) {
  NATIVE_HOOK(0x101039c0u) REGS; LOADALL;
L_101039c0:;
  /* 101039c0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 101039c2 push 0x1010c7c8 */ { u32 v_ = 0x1010c7c8u; esp -= 4; M32(esp) = v_; }
  /* 101039c7 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 101039cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101039ce mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 101039d5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101039d8 mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 101039dc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101039dd mov eax, edx */ { eax = (u32)(edx); }
  /* 101039df push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101039e0 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 101039e2 mov dword ptr [esp + 0x20], 0xf */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(0xfu); }
  /* 101039ea mov dword ptr [esp + 0x1c], 0 */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0x0u); }
  /* 101039f2 mov byte ptr [esp + 0xc], 0 */ { const u32 m_ = (u32)(esp + 0xcu); M8(m_) = (u8)(0x0u); }
  /* 101039f7 lea edi, [eax + 1] */ edi = (u32)((u32)(eax + 0x1u));
  /* 101039fa lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_10103a00:;
  /* 10103a00 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10103a02 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10103a03 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10103a05 jne 0x10103a00 */ if (!ZF_) goto L_10103a00;
  /* 10103a07 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10103a09 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103a0a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10103a0b lea ecx, [esp + 0x10] */ ecx = (u32)((u32)(esp + 0x10u));
  /* 10103a0f call 0x101027a0 */ esp -= 4; M32(esp) = 0x10103a14u; SAVEALL; F_101027a0(c); ABI_CHECK(0x101027a0u, 0x10103a0fu); RETCHK(0x10103a14u, 0x10103a0fu); LOADALL;
  /* 10103a14 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 10103a18 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103a19 lea ecx, [esi + 0x10] */ ecx = (u32)((u32)(esi + 0x10u));
  /* 10103a1c mov dword ptr [esp + 0x30], 0 */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(0x0u); }
  /* 10103a24 call 0x10103810 */ esp -= 4; M32(esp) = 0x10103a29u; SAVEALL; F_10103810(c); ABI_CHECK(0x10103810u, 0x10103a24u); RETCHK(0x10103a29u, 0x10103a24u); LOADALL;
  /* 10103a29 mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 10103a2d mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10103a2f cmp dword ptr [esp + 0x20], 0x10 */ { const u32 m_ = (u32)(esp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103a34 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103a35 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103a36 jb 0x10103a45 */ if (CF_) goto L_10103a45;
  /* 10103a38 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10103a3c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10103a3d call 0x10105a9d */ esp -= 4; M32(esp) = 0x10103a42u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10103a3du); RETCHK(0x10103a42u, 0x10103a3du); LOADALL;
  /* 10103a42 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10103a45:;
  /* 10103a45 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10103a49 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10103a50 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10103a53 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10103a70(CPU *c) {
  NATIVE_HOOK(0x10103a70u) REGS; LOADALL;
L_10103a70:;
  /* 10103a70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103a71 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103a72 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10103a76 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103a78 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10103a7a lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10103a80 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103a82 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103a83 call 0x10104b20 */ esp -= 4; M32(esp) = 0x10103a88u; SAVEALL; F_10104b20(c); ABI_CHECK(0x10104b20u, 0x10103a83u); RETCHK(0x10103a88u, 0x10103a83u); LOADALL;
  /* 10103a88 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103a8b je 0x10103ac0 */ if (ZF_) goto L_10103ac0;
  /* 10103a8d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10103a8f mov cl, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10103a92 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10103a93 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103a95 call 0x10104b20 */ esp -= 4; M32(esp) = 0x10103a9au; SAVEALL; F_10104b20(c); ABI_CHECK(0x10104b20u, 0x10103a95u); RETCHK(0x10103a9au, 0x10103a95u); LOADALL;
  /* 10103a9a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103a9d je 0x10103ac0 */ if (ZF_) goto L_10103ac0;
  /* 10103a9f push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10103aa4 add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10103aa7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103aa8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103aaa call 0x10104d30 */ esp -= 4; M32(esp) = 0x10103aafu; SAVEALL; F_10104d30(c); ABI_CHECK(0x10104d30u, 0x10103aaau); RETCHK(0x10103aafu, 0x10103aaau); LOADALL;
  /* 10103aaf cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103ab2 je 0x10103ac0 */ if (ZF_) goto L_10103ac0;
  /* 10103ab4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103ab6 call 0x10101910 */ esp -= 4; M32(esp) = 0x10103abbu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10103ab6u); RETCHK(0x10103abbu, 0x10103ab6u); LOADALL;
  /* 10103abb cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103abe jne 0x10103ac8 */ if (!ZF_) goto L_10103ac8;
L_10103ac0:;
  /* 10103ac0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103ac1 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103ac4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103ac5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10103ac8:;
  /* 10103ac8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103aca call 0x10101910 */ esp -= 4; M32(esp) = 0x10103acfu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10103acau); RETCHK(0x10103acfu, 0x10103acau); LOADALL;
  /* 10103acf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103ad0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103ad1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10103ae0(CPU *c) {
  NATIVE_HOOK(0x10103ae0u) REGS; LOADALL;
L_10103ae0:;
  /* 10103ae0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103ae1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103ae2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10103ae6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10103aec push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103aed mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103aef call 0x10104b50 */ esp -= 4; M32(esp) = 0x10103af4u; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x10103aefu); RETCHK(0x10103af4u, 0x10103aefu); LOADALL;
  /* 10103af4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103af7 je 0x10103b1a */ if (ZF_) goto L_10103b1a;
  /* 10103af9 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10103afa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103afb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103afd call 0x10104b50 */ esp -= 4; M32(esp) = 0x10103b02u; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x10103afdu); RETCHK(0x10103b02u, 0x10103afdu); LOADALL;
  /* 10103b02 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103b05 je 0x10103b1a */ if (ZF_) goto L_10103b1a;
  /* 10103b07 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10103b0c inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10103b0d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103b0e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103b10 call 0x10104c80 */ esp -= 4; M32(esp) = 0x10103b15u; SAVEALL; F_10104c80(c); ABI_CHECK(0x10104c80u, 0x10103b10u); RETCHK(0x10103b15u, 0x10103b10u); LOADALL;
  /* 10103b15 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103b18 jne 0x10103b22 */ if (!ZF_) goto L_10103b22;
L_10103b1a:;
  /* 10103b1a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103b1b or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103b1e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103b1f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10103b22:;
  /* 10103b22 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103b23 mov eax, 0x82 */ { eax = (u32)(0x82u); }
  /* 10103b28 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103b29 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10103b30(CPU *c) {
  NATIVE_HOOK(0x10103b30u) REGS; LOADALL;
L_10103b30:;
  /* 10103b30 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10103b34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103b35 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10103b3b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10103b3d mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10103b3f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10103b40 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103b42 call 0x10104b20 */ esp -= 4; M32(esp) = 0x10103b47u; SAVEALL; F_10104b20(c); ABI_CHECK(0x10104b20u, 0x10103b42u); RETCHK(0x10103b47u, 0x10103b42u); LOADALL;
  /* 10103b47 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103b4a jne 0x10103b52 */ if (!ZF_) goto L_10103b52;
  /* 10103b4c or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103b4e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103b4f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10103b52:;
  /* 10103b52 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103b54 call 0x10101910 */ esp -= 4; M32(esp) = 0x10103b59u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10103b54u); RETCHK(0x10103b59u, 0x10103b54u); LOADALL;
  /* 10103b59 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103b5a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10103b60(CPU *c) {
  NATIVE_HOOK(0x10103b60u) REGS; LOADALL;
L_10103b60:;
  /* 10103b60 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10103b64 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103b65 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10103b6b call 0x10104b50 */ esp -= 4; M32(esp) = 0x10103b70u; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x10103b6bu); RETCHK(0x10103b70u, 0x10103b6bu); LOADALL;
  /* 10103b70 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10103b71 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10103b73 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10103b75 and eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103b78 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10103b79 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10103b80(CPU *c) {
  NATIVE_HOOK(0x10103b80u) REGS; LOADALL;
L_10103b80:;
  /* 10103b80 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10103b84 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103b85 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10103b8b call 0x10104c40 */ esp -= 4; M32(esp) = 0x10103b90u; SAVEALL; F_10104c40(c); ABI_CHECK(0x10104c40u, 0x10103b8bu); RETCHK(0x10103b90u, 0x10103b8bu); LOADALL;
  /* 10103b90 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10103b91 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10103b93 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10103b95 and eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103b98 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10103b99 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10103ba0(CPU *c) {
  NATIVE_HOOK(0x10103ba0u) REGS; LOADALL;
L_10103ba0:;
  /* 10103ba0 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10103ba6 call 0x10101910 */ esp -= 4; M32(esp) = 0x10103babu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10103ba6u); RETCHK(0x10103babu, 0x10103ba6u); LOADALL;
  /* 10103bab ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10103bb0(CPU *c) {
  NATIVE_HOOK(0x10103bb0u) REGS; LOADALL;
L_10103bb0:;
  /* 10103bb0 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 10103bb5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10103bc0(CPU *c) {
  NATIVE_HOOK(0x10103bc0u) REGS; LOADALL;
L_10103bc0:;
  /* 10103bc0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103bc1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103bc2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10103bc6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10103bcc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103bcd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103bcf call 0x10104b50 */ esp -= 4; M32(esp) = 0x10103bd4u; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x10103bcfu); RETCHK(0x10103bd4u, 0x10103bcfu); LOADALL;
  /* 10103bd4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103bd7 jne 0x10103be0 */ if (!ZF_) goto L_10103be0;
  /* 10103bd9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103bda or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103bdc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103bdd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10103be0:;
  /* 10103be0 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10103be5 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10103be6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103be7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103be9 call 0x10104c80 */ esp -= 4; M32(esp) = 0x10103beeu; SAVEALL; F_10104c80(c); ABI_CHECK(0x10104c80u, 0x10103be9u); RETCHK(0x10103beeu, 0x10103be9u); LOADALL;
  /* 10103bee inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10103bef neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10103bf1 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10103bf3 and eax, 0x82 */ { u32 a_ = eax, b_ = 0x82u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103bf8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103bf9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10103bfa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103bfb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10103c00(CPU *c) {
  NATIVE_HOOK(0x10103c00u) REGS; LOADALL;
L_10103c00:;
  /* 10103c00 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10103c04 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103c05 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10103c0b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10103c0d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10103c0e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103c10 call 0x10104c00 */ esp -= 4; M32(esp) = 0x10103c15u; SAVEALL; F_10104c00(c); ABI_CHECK(0x10104c00u, 0x10103c10u); RETCHK(0x10103c15u, 0x10103c10u); LOADALL;
  /* 10103c15 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103c18 jne 0x10103c20 */ if (!ZF_) goto L_10103c20;
  /* 10103c1a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103c1c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103c1d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10103c20:;
  /* 10103c20 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103c22 call 0x10101910 */ esp -= 4; M32(esp) = 0x10103c27u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10103c22u); RETCHK(0x10103c27u, 0x10103c22u); LOADALL;
  /* 10103c27 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103c28 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10103c30(CPU *c) {
  NATIVE_HOOK(0x10103c30u) REGS; LOADALL;
L_10103c30:;
  /* 10103c30 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10103c31 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10103c32 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10103c33 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 10103c37 mov eax, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M32(m_)); }
  /* 10103c3a lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 10103c40 mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10103c44 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103c45 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10103c47 call 0x10104c00 */ esp -= 4; M32(esp) = 0x10103c4cu; SAVEALL; F_10104c00(c); ABI_CHECK(0x10104c00u, 0x10103c47u); RETCHK(0x10103c4cu, 0x10103c47u); LOADALL;
  /* 10103c4c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103c4f je 0x10103c76 */ if (ZF_) goto L_10103c76;
  /* 10103c51 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10103c53 mov cx, word ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10103c57 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10103c58 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10103c5a call 0x10104b80 */ esp -= 4; M32(esp) = 0x10103c5fu; SAVEALL; F_10104b80(c); ABI_CHECK(0x10104b80u, 0x10103c5au); RETCHK(0x10103c5fu, 0x10103c5au); LOADALL;
  /* 10103c5f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103c62 je 0x10103c76 */ if (ZF_) goto L_10103c76;
  /* 10103c64 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10103c66 mov dl, byte ptr [ebp + 6] */ { const u32 m_ = (u32)(ebp + 0x6u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10103c69 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10103c6b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10103c6c call 0x10104b20 */ esp -= 4; M32(esp) = 0x10103c71u; SAVEALL; F_10104b20(c); ABI_CHECK(0x10104b20u, 0x10103c6cu); RETCHK(0x10103c71u, 0x10103c6cu); LOADALL;
  /* 10103c71 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103c74 jne 0x10103c7f */ if (!ZF_) goto L_10103c7f;
L_10103c76:;
  /* 10103c76 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10103c77 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103c7a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103c7b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10103c7c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10103c7f:;
  /* 10103c7f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103c80 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103c81 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10103c83 lea edi, [ebp + 7] */ edi = (u32)((u32)(ebp + 0x7u));
L_10103c86:;
  /* 10103c86 movzx eax, word ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M16(m_)); }
  /* 10103c8a cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103c8c jge 0x10103ca9 */ if (!LT_) goto L_10103ca9;
  /* 10103c8e mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10103c92 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103c93 call 0x10103a70 */ esp -= 4; M32(esp) = 0x10103c98u; SAVEALL; F_10103a70(c); ABI_CHECK(0x10103a70u, 0x10103c93u); RETCHK(0x10103c98u, 0x10103c93u); LOADALL;
  /* 10103c98 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103c9b je 0x10103d06 */ if (ZF_) goto L_10103d06;
  /* 10103c9d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10103c9e add edi, 0x82 */ { u32 a_ = edi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10103ca4 cmp esi, 0x40 */ { u32 a_ = esi, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103ca7 jl 0x10103c86 */ if (LT_) goto L_10103c86;
L_10103ca9:;
  /* 10103ca9 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10103cab lea esi, [ebp + 0x2087] */ esi = (u32)((u32)(ebp + 0x2087u));
L_10103cb1:;
  /* 10103cb1 movzx ecx, byte ptr [ebp + 6] */ { const u32 m_ = (u32)(ebp + 0x6u); ecx = (u32)(M8(m_)); }
  /* 10103cb5 cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103cb7 jge 0x10103cf7 */ if (!LT_) goto L_10103cf7;
  /* 10103cb9 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10103cbb mov dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10103cbd mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10103cbf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10103cc0 call 0x10104b20 */ esp -= 4; M32(esp) = 0x10103cc5u; SAVEALL; F_10104b20(c); ABI_CHECK(0x10104b20u, 0x10103cc0u); RETCHK(0x10103cc5u, 0x10103cc0u); LOADALL;
  /* 10103cc5 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103cc8 je 0x10103d06 */ if (ZF_) goto L_10103d06;
  /* 10103cca push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10103ccf lea eax, [esi + 1] */ eax = (u32)((u32)(esi + 0x1u));
  /* 10103cd2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103cd3 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10103cd5 call 0x10104d30 */ esp -= 4; M32(esp) = 0x10103cdau; SAVEALL; F_10104d30(c); ABI_CHECK(0x10104d30u, 0x10103cd5u); RETCHK(0x10103cdau, 0x10103cd5u); LOADALL;
  /* 10103cda cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103cdd je 0x10103d06 */ if (ZF_) goto L_10103d06;
  /* 10103cdf mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10103ce1 call 0x10101910 */ esp -= 4; M32(esp) = 0x10103ce6u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10103ce1u); RETCHK(0x10103ce6u, 0x10103ce1u); LOADALL;
  /* 10103ce6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103ce9 je 0x10103d06 */ if (ZF_) goto L_10103d06;
  /* 10103ceb inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10103cec add esi, 0x81 */ { u32 a_ = esi, b_ = 0x81u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10103cf2 cmp edi, 0xa */ { u32 a_ = edi, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103cf5 jl 0x10103cb1 */ if (LT_) goto L_10103cb1;
L_10103cf7:;
  /* 10103cf7 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10103cf9 call 0x10101910 */ esp -= 4; M32(esp) = 0x10103cfeu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10103cf9u); RETCHK(0x10103cfeu, 0x10103cf9u); LOADALL;
  /* 10103cfe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103cff pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103d00 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10103d01 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103d02 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10103d03 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10103d06:;
  /* 10103d06 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103d07 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103d08 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10103d09 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103d0c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103d0d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10103d0e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10103d20(CPU *c) {
  NATIVE_HOOK(0x10103d20u) REGS; LOADALL;
L_10103d20:;
  /* 10103d20 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10103d21 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10103d22 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10103d26 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10103d27 lea ebp, [ecx + 0x10000] */ ebp = (u32)((u32)(ecx + 0x10000u));
  /* 10103d2d mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10103d31 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10103d32 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10103d34 call 0x10104c40 */ esp -= 4; M32(esp) = 0x10103d39u; SAVEALL; F_10104c40(c); ABI_CHECK(0x10104c40u, 0x10103d34u); RETCHK(0x10103d39u, 0x10103d34u); LOADALL;
  /* 10103d39 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103d3c je 0x10103d62 */ if (ZF_) goto L_10103d62;
  /* 10103d3e lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 10103d41 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103d42 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10103d44 call 0x10104bc0 */ esp -= 4; M32(esp) = 0x10103d49u; SAVEALL; F_10104bc0(c); ABI_CHECK(0x10104bc0u, 0x10103d44u); RETCHK(0x10103d49u, 0x10103d44u); LOADALL;
  /* 10103d49 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103d4c je 0x10103d62 */ if (ZF_) goto L_10103d62;
  /* 10103d4e lea eax, [ebx + 6] */ eax = (u32)((u32)(ebx + 0x6u));
  /* 10103d51 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103d52 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10103d54 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 10103d58 call 0x10104b50 */ esp -= 4; M32(esp) = 0x10103d5du; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x10103d58u); RETCHK(0x10103d5du, 0x10103d58u); LOADALL;
  /* 10103d5d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103d60 jne 0x10103d6b */ if (!ZF_) goto L_10103d6b;
L_10103d62:;
  /* 10103d62 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10103d63 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103d66 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103d67 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10103d68 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10103d6b:;
  /* 10103d6b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103d6c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103d6d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10103d6f lea edi, [ebx + 7] */ edi = (u32)((u32)(ebx + 0x7u));
L_10103d72:;
  /* 10103d72 movzx eax, word ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M16(m_)); }
  /* 10103d76 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103d78 jge 0x10103d95 */ if (!LT_) goto L_10103d95;
  /* 10103d7a mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10103d7e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103d7f call 0x10103ae0 */ esp -= 4; M32(esp) = 0x10103d84u; SAVEALL; F_10103ae0(c); ABI_CHECK(0x10103ae0u, 0x10103d7fu); RETCHK(0x10103d84u, 0x10103d7fu); LOADALL;
  /* 10103d84 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103d87 je 0x10103de6 */ if (ZF_) goto L_10103de6;
  /* 10103d89 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10103d8a add edi, 0x82 */ { u32 a_ = edi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10103d90 cmp esi, 0x40 */ { u32 a_ = esi, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103d93 jl 0x10103d72 */ if (LT_) goto L_10103d72;
L_10103d95:;
  /* 10103d95 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10103d97 lea esi, [ebx + 0x2087] */ esi = (u32)((u32)(ebx + 0x2087u));
  /* 10103d9d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_10103da0:;
  /* 10103da0 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 10103da4 movzx edx, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M8(m_)); }
  /* 10103da7 cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103da9 jge 0x10103dd9 */ if (!LT_) goto L_10103dd9;
  /* 10103dab push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103dac mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10103dae call 0x10104b50 */ esp -= 4; M32(esp) = 0x10103db3u; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x10103daeu); RETCHK(0x10103db3u, 0x10103daeu); LOADALL;
  /* 10103db3 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103db6 je 0x10103de6 */ if (ZF_) goto L_10103de6;
  /* 10103db8 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10103dbd lea eax, [esi + 1] */ eax = (u32)((u32)(esi + 0x1u));
  /* 10103dc0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103dc1 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10103dc3 call 0x10104c80 */ esp -= 4; M32(esp) = 0x10103dc8u; SAVEALL; F_10104c80(c); ABI_CHECK(0x10104c80u, 0x10103dc3u); RETCHK(0x10103dc8u, 0x10103dc3u); LOADALL;
  /* 10103dc8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103dcb je 0x10103de6 */ if (ZF_) goto L_10103de6;
  /* 10103dcd inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10103dce add esi, 0x81 */ { u32 a_ = esi, b_ = 0x81u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10103dd4 cmp edi, 0xa */ { u32 a_ = edi, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103dd7 jl 0x10103da0 */ if (LT_) goto L_10103da0;
L_10103dd9:;
  /* 10103dd9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103dda pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103ddb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10103ddc mov eax, 0x2594 */ { eax = (u32)(0x2594u); }
  /* 10103de1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103de2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10103de3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10103de6:;
  /* 10103de6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103de7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103de8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10103de9 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103dec pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103ded pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10103dee ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10103e00(CPU *c) {
  NATIVE_HOOK(0x10103e00u) REGS; LOADALL;
L_10103e00:;
  /* 10103e00 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10103e01 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103e02 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10103e06 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103e08 mov ax, word ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10103e0b lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 10103e11 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10103e13 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103e14 call 0x10104b80 */ esp -= 4; M32(esp) = 0x10103e19u; SAVEALL; F_10104b80(c); ABI_CHECK(0x10104b80u, 0x10103e14u); RETCHK(0x10103e19u, 0x10103e14u); LOADALL;
  /* 10103e19 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103e1c jne 0x10103e25 */ if (!ZF_) goto L_10103e25;
  /* 10103e1e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103e1f or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103e21 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103e22 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10103e25:;
  /* 10103e25 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103e26 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_10103e28:;
  /* 10103e28 movzx ecx, word ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M16(m_)); }
  /* 10103e2b cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103e2d jge 0x10103e48 */ if (!LT_) goto L_10103e48;
  /* 10103e2f xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10103e31 mov dl, byte ptr [esi + edi + 2] */ { const u32 m_ = (u32)(esi + edi + 0x2u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10103e35 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10103e37 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10103e38 call 0x10104b20 */ esp -= 4; M32(esp) = 0x10103e3du; SAVEALL; F_10104b20(c); ABI_CHECK(0x10104b20u, 0x10103e38u); RETCHK(0x10103e3du, 0x10103e38u); LOADALL;
  /* 10103e3d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103e40 je 0x10103e55 */ if (ZF_) goto L_10103e55;
  /* 10103e42 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10103e43 cmp esi, 0x40 */ { u32 a_ = esi, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103e46 jl 0x10103e28 */ if (LT_) goto L_10103e28;
L_10103e48:;
  /* 10103e48 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10103e4a call 0x10101910 */ esp -= 4; M32(esp) = 0x10103e4fu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10103e4au); RETCHK(0x10103e4fu, 0x10103e4au); LOADALL;
  /* 10103e4f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103e50 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103e51 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103e52 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10103e55:;
  /* 10103e55 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103e56 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103e57 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103e5a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103e5b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10103e60(CPU *c) {
  NATIVE_HOOK(0x10103e60u) REGS; LOADALL;
L_10103e60:;
  /* 10103e60 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10103e61 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103e62 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10103e66 lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 10103e6c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103e6d mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10103e6f call 0x10104bc0 */ esp -= 4; M32(esp) = 0x10103e74u; SAVEALL; F_10104bc0(c); ABI_CHECK(0x10104bc0u, 0x10103e6fu); RETCHK(0x10103e74u, 0x10103e6fu); LOADALL;
  /* 10103e74 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103e77 jne 0x10103e80 */ if (!ZF_) goto L_10103e80;
  /* 10103e79 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103e7a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103e7c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103e7d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10103e80:;
  /* 10103e80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103e81 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_10103e83:;
  /* 10103e83 movzx eax, word ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M16(m_)); }
  /* 10103e86 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103e88 jge 0x10103ea1 */ if (!LT_) goto L_10103ea1;
  /* 10103e8a lea ecx, [esi + edi + 2] */ ecx = (u32)((u32)(esi + edi + 0x2u));
  /* 10103e8e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10103e8f mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10103e91 call 0x10104b50 */ esp -= 4; M32(esp) = 0x10103e96u; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x10103e91u); RETCHK(0x10103e96u, 0x10103e91u); LOADALL;
  /* 10103e96 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103e99 je 0x10103eac */ if (ZF_) goto L_10103eac;
  /* 10103e9b inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10103e9c cmp esi, 0x40 */ { u32 a_ = esi, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103e9f jl 0x10103e83 */ if (LT_) goto L_10103e83;
L_10103ea1:;
  /* 10103ea1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103ea2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103ea3 mov eax, 0x42 */ { eax = (u32)(0x42u); }
  /* 10103ea8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103ea9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10103eac:;
  /* 10103eac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103ead pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103eae or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103eb1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103eb2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10103ec0(CPU *c) {
  NATIVE_HOOK(0x10103ec0u) REGS; LOADALL;
L_10103ec0:;
  /* 10103ec0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10103ec1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103ec2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103ec3 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10103ec7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103ec9 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10103ecb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10103ecd lea ebx, [esi + 0x10000] */ ebx = (u32)((u32)(esi + 0x10000u));
  /* 10103ed3 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10103ed5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103ed6 call 0x10104b20 */ esp -= 4; M32(esp) = 0x10103edbu; SAVEALL; F_10104b20(c); ABI_CHECK(0x10104b20u, 0x10103ed6u); RETCHK(0x10103edbu, 0x10103ed6u); LOADALL;
  /* 10103edb cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103ede je 0x10103f0f */ if (ZF_) goto L_10103f0f;
  /* 10103ee0 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10103ee3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103ee4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103ee6 call 0x10103c30 */ esp -= 4; M32(esp) = 0x10103eebu; SAVEALL; F_10103c30(c); ABI_CHECK(0x10103c30u, 0x10103ee6u); RETCHK(0x10103eebu, 0x10103ee6u); LOADALL;
  /* 10103eeb cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103eee je 0x10103f0f */ if (ZF_) goto L_10103f0f;
  /* 10103ef0 add edi, 0x2594 */ { u32 a_ = edi, b_ = 0x2594u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10103ef6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103ef7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103ef9 call 0x10103e00 */ esp -= 4; M32(esp) = 0x10103efeu; SAVEALL; F_10103e00(c); ABI_CHECK(0x10103e00u, 0x10103ef9u); RETCHK(0x10103efeu, 0x10103ef9u); LOADALL;
  /* 10103efe cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103f01 je 0x10103f0f */ if (ZF_) goto L_10103f0f;
  /* 10103f03 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10103f05 call 0x10101910 */ esp -= 4; M32(esp) = 0x10103f0au; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10103f05u); RETCHK(0x10103f0au, 0x10103f05u); LOADALL;
  /* 10103f0a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103f0d jne 0x10103f18 */ if (!ZF_) goto L_10103f18;
L_10103f0f:;
  /* 10103f0f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103f10 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103f11 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103f14 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103f15 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10103f18:;
  /* 10103f18 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10103f1a call 0x10101910 */ esp -= 4; M32(esp) = 0x10103f1fu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10103f1au); RETCHK(0x10103f1fu, 0x10103f1au); LOADALL;
  /* 10103f1f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103f20 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103f21 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10103f22 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10103f30(CPU *c) {
  NATIVE_HOOK(0x10103f30u) REGS; LOADALL;
L_10103f30:;
  /* 10103f30 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103f31 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103f32 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10103f36 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10103f38 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103f39 lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 10103f3f call 0x10104b50 */ esp -= 4; M32(esp) = 0x10103f44u; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x10103f3fu); RETCHK(0x10103f44u, 0x10103f3fu); LOADALL;
  /* 10103f44 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103f47 je 0x10103f6c */ if (ZF_) goto L_10103f6c;
  /* 10103f49 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10103f4c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103f4d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103f4f call 0x10103d20 */ esp -= 4; M32(esp) = 0x10103f54u; SAVEALL; F_10103d20(c); ABI_CHECK(0x10103d20u, 0x10103f4fu); RETCHK(0x10103f54u, 0x10103f4fu); LOADALL;
  /* 10103f54 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103f57 je 0x10103f6c */ if (ZF_) goto L_10103f6c;
  /* 10103f59 add edi, 0x2594 */ { u32 a_ = edi, b_ = 0x2594u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10103f5f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103f60 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103f62 call 0x10103e60 */ esp -= 4; M32(esp) = 0x10103f67u; SAVEALL; F_10103e60(c); ABI_CHECK(0x10103e60u, 0x10103f62u); RETCHK(0x10103f67u, 0x10103f62u); LOADALL;
  /* 10103f67 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103f6a jne 0x10103f74 */ if (!ZF_) goto L_10103f74;
L_10103f6c:;
  /* 10103f6c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103f6d or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103f70 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103f71 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10103f74:;
  /* 10103f74 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103f75 mov eax, 0x25dc */ { eax = (u32)(0x25dcu); }
  /* 10103f7a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103f7b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10103f80(CPU *c) {
  NATIVE_HOOK(0x10103f80u) REGS; LOADALL;
L_10103f80:;
  /* 10103f80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103f81 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103f82 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10103f86 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10103f88 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10103f8e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10103f8f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103f91 call 0x10104c00 */ esp -= 4; M32(esp) = 0x10103f96u; SAVEALL; F_10104c00(c); ABI_CHECK(0x10104c00u, 0x10103f91u); RETCHK(0x10103f96u, 0x10103f91u); LOADALL;
  /* 10103f96 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103f99 je 0x10103fc5 */ if (ZF_) goto L_10103fc5;
  /* 10103f9b push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10103fa0 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 10103fa3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10103fa4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103fa6 call 0x10104d30 */ esp -= 4; M32(esp) = 0x10103fabu; SAVEALL; F_10104d30(c); ABI_CHECK(0x10104d30u, 0x10103fa6u); RETCHK(0x10103fabu, 0x10103fa6u); LOADALL;
  /* 10103fab cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103fae je 0x10103fc5 */ if (ZF_) goto L_10103fc5;
  /* 10103fb0 push 0x64 */ { u32 v_ = 0x64u; esp -= 4; M32(esp) = v_; }
  /* 10103fb2 add edi, 0x84 */ { u32 a_ = edi, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10103fb8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103fb9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103fbb call 0x10104d30 */ esp -= 4; M32(esp) = 0x10103fc0u; SAVEALL; F_10104d30(c); ABI_CHECK(0x10104d30u, 0x10103fbbu); RETCHK(0x10103fc0u, 0x10103fbbu); LOADALL;
  /* 10103fc0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103fc3 jne 0x10103fcd */ if (!ZF_) goto L_10103fcd;
L_10103fc5:;
  /* 10103fc5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103fc6 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103fc9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103fca ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10103fcd:;
  /* 10103fcd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103fcf call 0x10101910 */ esp -= 4; M32(esp) = 0x10103fd4u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10103fcfu); RETCHK(0x10103fd4u, 0x10103fcfu); LOADALL;
  /* 10103fd4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103fd5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103fd6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10103fe0(CPU *c) {
  NATIVE_HOOK(0x10103fe0u) REGS; LOADALL;
L_10103fe0:;
  /* 10103fe0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10103fe1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103fe2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10103fe6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10103fec push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10103fed mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10103fef call 0x10104c40 */ esp -= 4; M32(esp) = 0x10103ff4u; SAVEALL; F_10104c40(c); ABI_CHECK(0x10104c40u, 0x10103fefu); RETCHK(0x10103ff4u, 0x10103fefu); LOADALL;
  /* 10103ff4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10103ff7 jne 0x10104001 */ if (!ZF_) goto L_10104001;
L_10103ff9:;
  /* 10103ff9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10103ffa or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10103ffd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10103ffe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104001:;
  /* 10104001 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10104006 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10104009 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010400a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1010400c call 0x10104c80 */ esp -= 4; M32(esp) = 0x10104011u; SAVEALL; F_10104c80(c); ABI_CHECK(0x10104c80u, 0x1010400cu); RETCHK(0x10104011u, 0x1010400cu); LOADALL;
  /* 10104011 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104014 je 0x10103ff9 */ if (ZF_) goto L_10103ff9;
  /* 10104016 push 0x64 */ { u32 v_ = 0x64u; esp -= 4; M32(esp) = v_; }
  /* 10104018 add edi, 0x84 */ { u32 a_ = edi, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010401e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010401f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104021 call 0x10104c80 */ esp -= 4; M32(esp) = 0x10104026u; SAVEALL; F_10104c80(c); ABI_CHECK(0x10104c80u, 0x10104021u); RETCHK(0x10104026u, 0x10104021u); LOADALL;
  /* 10104026 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10104027 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10104029 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 1010402b and eax, 0xe9 */ { u32 a_ = eax, b_ = 0xe9u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104030 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10104031 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10104032 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104033 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104040(CPU *c) {
  NATIVE_HOOK(0x10104040u) REGS; LOADALL;
L_10104040:;
  /* 10104040 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104041 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104042 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10104046 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10104048 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1010404e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010404f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104051 call 0x10104c00 */ esp -= 4; M32(esp) = 0x10104056u; SAVEALL; F_10104c00(c); ABI_CHECK(0x10104c00u, 0x10104051u); RETCHK(0x10104056u, 0x10104051u); LOADALL;
  /* 10104056 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104059 je 0x10104082 */ if (ZF_) goto L_10104082;
  /* 1010405b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 1010405d mov cl, byte ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10104060 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10104061 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104063 call 0x10104b20 */ esp -= 4; M32(esp) = 0x10104068u; SAVEALL; F_10104b20(c); ABI_CHECK(0x10104b20u, 0x10104063u); RETCHK(0x10104068u, 0x10104063u); LOADALL;
  /* 10104068 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010406b je 0x10104082 */ if (ZF_) goto L_10104082;
  /* 1010406d push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10104072 add edi, 5 */ { u32 a_ = edi, b_ = 0x5u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10104075 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104076 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104078 call 0x10104d30 */ esp -= 4; M32(esp) = 0x1010407du; SAVEALL; F_10104d30(c); ABI_CHECK(0x10104d30u, 0x10104078u); RETCHK(0x1010407du, 0x10104078u); LOADALL;
  /* 1010407d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104080 jne 0x1010408a */ if (!ZF_) goto L_1010408a;
L_10104082:;
  /* 10104082 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10104083 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104086 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104087 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1010408a:;
  /* 1010408a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1010408c call 0x10101910 */ esp -= 4; M32(esp) = 0x10104091u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x1010408cu); RETCHK(0x10104091u, 0x1010408cu); LOADALL;
  /* 10104091 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10104092 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104093 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101040a0(CPU *c) {
  NATIVE_HOOK(0x101040a0u) REGS; LOADALL;
L_101040a0:;
  /* 101040a0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 101040a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101040a5 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 101040ab push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 101040b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101040b1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101040b3 call 0x10104d30 */ esp -= 4; M32(esp) = 0x101040b8u; SAVEALL; F_10104d30(c); ABI_CHECK(0x10104d30u, 0x101040b3u); RETCHK(0x101040b8u, 0x101040b3u); LOADALL;
  /* 101040b8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101040bb jne 0x101040c3 */ if (!ZF_) goto L_101040c3;
  /* 101040bd or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101040bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101040c0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_101040c3:;
  /* 101040c3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101040c5 call 0x10101910 */ esp -= 4; M32(esp) = 0x101040cau; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x101040c5u); RETCHK(0x101040cau, 0x101040c5u); LOADALL;
  /* 101040ca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101040cb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101040d0(CPU *c) {
  NATIVE_HOOK(0x101040d0u) REGS; LOADALL;
L_101040d0:;
  /* 101040d0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 101040d4 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 101040d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101040da add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101040e0 call 0x10104c80 */ esp -= 4; M32(esp) = 0x101040e5u; SAVEALL; F_10104c80(c); ABI_CHECK(0x10104c80u, 0x101040e0u); RETCHK(0x101040e5u, 0x101040e0u); LOADALL;
  /* 101040e5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101040e6 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 101040e8 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 101040ea and eax, 0x81 */ { u32 a_ = eax, b_ = 0x81u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101040ef dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101040f0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104100(CPU *c) {
  NATIVE_HOOK(0x10104100u) REGS; LOADALL;
L_10104100:;
  /* 10104100 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104101 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104102 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10104106 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10104108 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1010410e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010410f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104111 call 0x10104c00 */ esp -= 4; M32(esp) = 0x10104116u; SAVEALL; F_10104c00(c); ABI_CHECK(0x10104c00u, 0x10104111u); RETCHK(0x10104116u, 0x10104111u); LOADALL;
  /* 10104116 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104119 je 0x10104130 */ if (ZF_) goto L_10104130;
  /* 1010411b push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10104120 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10104123 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104124 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104126 call 0x10104d30 */ esp -= 4; M32(esp) = 0x1010412bu; SAVEALL; F_10104d30(c); ABI_CHECK(0x10104d30u, 0x10104126u); RETCHK(0x1010412bu, 0x10104126u); LOADALL;
  /* 1010412b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010412e jne 0x10104138 */ if (!ZF_) goto L_10104138;
L_10104130:;
  /* 10104130 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10104131 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104134 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104135 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104138:;
  /* 10104138 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1010413a call 0x10101910 */ esp -= 4; M32(esp) = 0x1010413fu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x1010413au); RETCHK(0x1010413fu, 0x1010413au); LOADALL;
  /* 1010413f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10104140 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104141 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104150(CPU *c) {
  NATIVE_HOOK(0x10104150u) REGS; LOADALL;
L_10104150:;
  /* 10104150 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104151 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104152 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10104156 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1010415c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010415d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1010415f call 0x10104c40 */ esp -= 4; M32(esp) = 0x10104164u; SAVEALL; F_10104c40(c); ABI_CHECK(0x10104c40u, 0x1010415fu); RETCHK(0x10104164u, 0x1010415fu); LOADALL;
  /* 10104164 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104167 jne 0x10104170 */ if (!ZF_) goto L_10104170;
  /* 10104169 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010416a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010416c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010416d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104170:;
  /* 10104170 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10104175 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10104178 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104179 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1010417b call 0x10104c80 */ esp -= 4; M32(esp) = 0x10104180u; SAVEALL; F_10104c80(c); ABI_CHECK(0x10104c80u, 0x1010417bu); RETCHK(0x10104180u, 0x1010417bu); LOADALL;
  /* 10104180 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10104181 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10104183 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10104185 and eax, 0x85 */ { u32 a_ = eax, b_ = 0x85u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010418a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010418b dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010418c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010418d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104190(CPU *c) {
  NATIVE_HOOK(0x10104190u) REGS; LOADALL;
L_10104190:;
  /* 10104190 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104191 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104192 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10104196 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1010419c push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 101041a1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101041a2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101041a4 call 0x10104c80 */ esp -= 4; M32(esp) = 0x101041a9u; SAVEALL; F_10104c80(c); ABI_CHECK(0x10104c80u, 0x101041a4u); RETCHK(0x101041a9u, 0x101041a4u); LOADALL;
  /* 101041a9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101041ac jne 0x101041b5 */ if (!ZF_) goto L_101041b5;
  /* 101041ae pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101041af or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101041b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101041b2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_101041b5:;
  /* 101041b5 push 0x64 */ { u32 v_ = 0x64u; esp -= 4; M32(esp) = v_; }
  /* 101041b7 add edi, 0x80 */ { u32 a_ = edi, b_ = 0x80u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101041bd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101041be mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101041c0 call 0x10104c80 */ esp -= 4; M32(esp) = 0x101041c5u; SAVEALL; F_10104c80(c); ABI_CHECK(0x10104c80u, 0x101041c0u); RETCHK(0x101041c5u, 0x101041c0u); LOADALL;
  /* 101041c5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101041c6 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 101041c8 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 101041ca and eax, 0xe5 */ { u32 a_ = eax, b_ = 0xe5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101041cf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101041d0 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101041d1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101041d2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101041e0(CPU *c) {
  NATIVE_HOOK(0x101041e0u) REGS; LOADALL;
L_101041e0:;
  /* 101041e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101041e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101041e2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 101041e6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 101041ec push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 101041f1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101041f2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101041f4 call 0x10104d30 */ esp -= 4; M32(esp) = 0x101041f9u; SAVEALL; F_10104d30(c); ABI_CHECK(0x10104d30u, 0x101041f4u); RETCHK(0x101041f9u, 0x101041f4u); LOADALL;
  /* 101041f9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101041fc je 0x10104213 */ if (ZF_) goto L_10104213;
  /* 101041fe push 0x64 */ { u32 v_ = 0x64u; esp -= 4; M32(esp) = v_; }
  /* 10104200 add edi, 0x80 */ { u32 a_ = edi, b_ = 0x80u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10104206 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104207 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104209 call 0x10104d30 */ esp -= 4; M32(esp) = 0x1010420eu; SAVEALL; F_10104d30(c); ABI_CHECK(0x10104d30u, 0x10104209u); RETCHK(0x1010420eu, 0x10104209u); LOADALL;
  /* 1010420e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104211 jne 0x1010421b */ if (!ZF_) goto L_1010421b;
L_10104213:;
  /* 10104213 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10104214 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104217 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104218 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1010421b:;
  /* 1010421b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1010421d call 0x10101910 */ esp -= 4; M32(esp) = 0x10104222u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x1010421du); RETCHK(0x10104222u, 0x1010421du); LOADALL;
  /* 10104222 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10104223 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104224 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104230(CPU *c) {
  NATIVE_HOOK(0x10104230u) REGS; LOADALL;
L_10104230:;
  /* 10104230 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10104231 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10104232 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 10104236 lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 1010423c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1010423d mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 1010423f call 0x10104bc0 */ esp -= 4; M32(esp) = 0x10104244u; SAVEALL; F_10104bc0(c); ABI_CHECK(0x10104bc0u, 0x1010423fu); RETCHK(0x10104244u, 0x1010423fu); LOADALL;
  /* 10104244 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104247 jne 0x10104250 */ if (!ZF_) goto L_10104250;
  /* 10104249 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010424a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010424c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1010424d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104250:;
  /* 10104250 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104251 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104252 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10104254 lea esi, [ebp + 2] */ esi = (u32)((u32)(ebp + 0x2u));
L_10104257:;
  /* 10104257 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 1010425b cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010425d jge 0x1010428d */ if (!LT_) goto L_1010428d;
  /* 1010425f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104260 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10104262 call 0x10104b50 */ esp -= 4; M32(esp) = 0x10104267u; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x10104262u); RETCHK(0x10104267u, 0x10104262u); LOADALL;
  /* 10104267 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010426a je 0x10104299 */ if (ZF_) goto L_10104299;
  /* 1010426c push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10104271 lea ecx, [esi + 1] */ ecx = (u32)((u32)(esi + 0x1u));
  /* 10104274 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10104275 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10104277 call 0x10104c80 */ esp -= 4; M32(esp) = 0x1010427cu; SAVEALL; F_10104c80(c); ABI_CHECK(0x10104c80u, 0x10104277u); RETCHK(0x1010427cu, 0x10104277u); LOADALL;
  /* 1010427c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010427f je 0x10104299 */ if (ZF_) goto L_10104299;
  /* 10104281 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10104282 add esi, 0x81 */ { u32 a_ = esi, b_ = 0x81u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10104288 cmp edi, 0x40 */ { u32 a_ = edi, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010428b jl 0x10104257 */ if (LT_) goto L_10104257;
L_1010428d:;
  /* 1010428d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010428e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010428f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10104290 mov eax, 0x2042 */ { eax = (u32)(0x2042u); }
  /* 10104295 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10104296 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104299:;
  /* 10104299 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010429a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010429b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010429c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010429f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101042a0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101042b0(CPU *c) {
  NATIVE_HOOK(0x101042b0u) REGS; LOADALL;
L_101042b0:;
  /* 101042b0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101042b1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101042b2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101042b3 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 101042b7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101042b9 mov ax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 101042bd mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 101042bf lea ecx, [ebx + 0x10000] */ ecx = (u32)((u32)(ebx + 0x10000u));
  /* 101042c5 mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 101042c9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101042ca call 0x10104b80 */ esp -= 4; M32(esp) = 0x101042cfu; SAVEALL; F_10104b80(c); ABI_CHECK(0x10104b80u, 0x101042cau); RETCHK(0x101042cfu, 0x101042cau); LOADALL;
  /* 101042cf cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101042d2 jne 0x101042dc */ if (!ZF_) goto L_101042dc;
  /* 101042d4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101042d5 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101042d7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101042d8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101042d9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_101042dc:;
  /* 101042dc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101042dd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101042de xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 101042e0 lea edi, [ebp + 2] */ edi = (u32)((u32)(ebp + 0x2u));
L_101042e3:;
  /* 101042e3 movzx ecx, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M16(m_)); }
  /* 101042e7 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101042e9 jge 0x10104304 */ if (!LT_) goto L_10104304;
  /* 101042eb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101042ec mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 101042ee call 0x10103a70 */ esp -= 4; M32(esp) = 0x101042f3u; SAVEALL; F_10103a70(c); ABI_CHECK(0x10103a70u, 0x101042eeu); RETCHK(0x101042f3u, 0x101042eeu); LOADALL;
  /* 101042f3 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101042f6 je 0x10104315 */ if (ZF_) goto L_10104315;
  /* 101042f8 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101042f9 add edi, 0x82 */ { u32 a_ = edi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101042ff cmp esi, 0x40 */ { u32 a_ = esi, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104302 jl 0x101042e3 */ if (LT_) goto L_101042e3;
L_10104304:;
  /* 10104304 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10104308 call 0x10101910 */ esp -= 4; M32(esp) = 0x1010430du; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10104308u); RETCHK(0x1010430du, 0x10104308u); LOADALL;
  /* 1010430d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010430e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010430f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10104310 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10104311 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10104312 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104315:;
  /* 10104315 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10104316 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104317 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10104318 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010431b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1010431c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010431d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104320(CPU *c) {
  NATIVE_HOOK(0x10104320u) REGS; LOADALL;
L_10104320:;
  /* 10104320 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10104321 mov ebp, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebp = (u32)(M32(m_)); }
  /* 10104325 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104326 lea edi, [ecx + 0x10000] */ edi = (u32)((u32)(ecx + 0x10000u));
  /* 1010432c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1010432d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 1010432f call 0x10104bc0 */ esp -= 4; M32(esp) = 0x10104334u; SAVEALL; F_10104bc0(c); ABI_CHECK(0x10104bc0u, 0x1010432fu); RETCHK(0x10104334u, 0x1010432fu); LOADALL;
  /* 10104334 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104337 jne 0x10104340 */ if (!ZF_) goto L_10104340;
  /* 10104339 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010433a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010433c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010433d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104340:;
  /* 10104340 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10104341 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104342 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10104344 lea esi, [ebp + 3] */ esi = (u32)((u32)(ebp + 0x3u));
L_10104347:;
  /* 10104347 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 1010434b cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010434d jge 0x1010438d */ if (!LT_) goto L_1010438d;
  /* 1010434f lea ecx, [esi - 1] */ ecx = (u32)((u32)(esi + 0xffffffffu));
  /* 10104352 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10104353 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10104355 call 0x10104b50 */ esp -= 4; M32(esp) = 0x1010435au; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x10104355u); RETCHK(0x1010435au, 0x10104355u); LOADALL;
  /* 1010435a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010435d je 0x10104399 */ if (ZF_) goto L_10104399;
  /* 1010435f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104360 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10104362 call 0x10104b50 */ esp -= 4; M32(esp) = 0x10104367u; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x10104362u); RETCHK(0x10104367u, 0x10104362u); LOADALL;
  /* 10104367 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010436a je 0x10104399 */ if (ZF_) goto L_10104399;
  /* 1010436c push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10104371 lea edx, [esi + 1] */ edx = (u32)((u32)(esi + 0x1u));
  /* 10104374 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10104375 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10104377 call 0x10104c80 */ esp -= 4; M32(esp) = 0x1010437cu; SAVEALL; F_10104c80(c); ABI_CHECK(0x10104c80u, 0x10104377u); RETCHK(0x1010437cu, 0x10104377u); LOADALL;
  /* 1010437c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010437f je 0x10104399 */ if (ZF_) goto L_10104399;
  /* 10104381 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10104382 add esi, 0x82 */ { u32 a_ = esi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10104388 cmp ebx, 0x40 */ { u32 a_ = ebx, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010438b jl 0x10104347 */ if (LT_) goto L_10104347;
L_1010438d:;
  /* 1010438d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010438e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1010438f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10104390 mov eax, 0x2082 */ { eax = (u32)(0x2082u); }
  /* 10104395 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10104396 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104399:;
  /* 10104399 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010439a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1010439b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010439c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010439f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101043a0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101043b0(CPU *c) {
  NATIVE_HOOK(0x101043b0u) REGS; LOADALL;
L_101043b0:;
  /* 101043b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101043b1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101043b2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 101043b6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101043b8 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101043ba lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 101043c0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101043c2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101043c3 call 0x10104b20 */ esp -= 4; M32(esp) = 0x101043c8u; SAVEALL; F_10104b20(c); ABI_CHECK(0x10104b20u, 0x101043c3u); RETCHK(0x101043c8u, 0x101043c3u); LOADALL;
  /* 101043c8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101043cb je 0x101043f4 */ if (ZF_) goto L_101043f4;
  /* 101043cd xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 101043cf mov cl, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101043d2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101043d3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101043d5 call 0x10104b20 */ esp -= 4; M32(esp) = 0x101043dau; SAVEALL; F_10104b20(c); ABI_CHECK(0x10104b20u, 0x101043d5u); RETCHK(0x101043dau, 0x101043d5u); LOADALL;
  /* 101043da cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101043dd je 0x101043f4 */ if (ZF_) goto L_101043f4;
  /* 101043df push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 101043e4 add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101043e7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101043e8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101043ea call 0x10104d30 */ esp -= 4; M32(esp) = 0x101043efu; SAVEALL; F_10104d30(c); ABI_CHECK(0x10104d30u, 0x101043eau); RETCHK(0x101043efu, 0x101043eau); LOADALL;
  /* 101043ef cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101043f2 jne 0x101043fc */ if (!ZF_) goto L_101043fc;
L_101043f4:;
  /* 101043f4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101043f5 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101043f8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101043f9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_101043fc:;
  /* 101043fc mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101043fe call 0x10101910 */ esp -= 4; M32(esp) = 0x10104403u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x101043feu); RETCHK(0x10104403u, 0x101043feu); LOADALL;
  /* 10104403 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10104404 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104405 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104410(CPU *c) {
  NATIVE_HOOK(0x10104410u) REGS; LOADALL;
L_10104410:;
  /* 10104410 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104411 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104412 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10104416 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1010441c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010441d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1010441f call 0x10104b50 */ esp -= 4; M32(esp) = 0x10104424u; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x1010441fu); RETCHK(0x10104424u, 0x1010441fu); LOADALL;
  /* 10104424 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104427 jne 0x10104431 */ if (!ZF_) goto L_10104431;
L_10104429:;
  /* 10104429 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010442a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010442d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010442e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104431:;
  /* 10104431 lea eax, [edi + 1] */ eax = (u32)((u32)(edi + 0x1u));
  /* 10104434 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10104435 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104437 call 0x10104b50 */ esp -= 4; M32(esp) = 0x1010443cu; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x10104437u); RETCHK(0x1010443cu, 0x10104437u); LOADALL;
  /* 1010443c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010443f je 0x10104429 */ if (ZF_) goto L_10104429;
  /* 10104441 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10104446 add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10104449 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010444a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1010444c call 0x10104c80 */ esp -= 4; M32(esp) = 0x10104451u; SAVEALL; F_10104c80(c); ABI_CHECK(0x10104c80u, 0x1010444cu); RETCHK(0x10104451u, 0x1010444cu); LOADALL;
  /* 10104451 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10104452 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10104454 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10104456 and eax, 0x83 */ { u32 a_ = eax, b_ = 0x83u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010445b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010445c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010445d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010445e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104470(CPU *c) {
  NATIVE_HOOK(0x10104470u) REGS; LOADALL;
L_10104470:;
  /* 10104470 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104471 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104472 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10104476 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104478 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010447a lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10104480 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104482 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10104483 call 0x10104b20 */ esp -= 4; M32(esp) = 0x10104488u; SAVEALL; F_10104b20(c); ABI_CHECK(0x10104b20u, 0x10104483u); RETCHK(0x10104488u, 0x10104483u); LOADALL;
  /* 10104488 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010448b je 0x101044a0 */ if (ZF_) goto L_101044a0;
  /* 1010448d push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10104492 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10104493 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104494 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104496 call 0x10104d30 */ esp -= 4; M32(esp) = 0x1010449bu; SAVEALL; F_10104d30(c); ABI_CHECK(0x10104d30u, 0x10104496u); RETCHK(0x1010449bu, 0x10104496u); LOADALL;
  /* 1010449b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010449e jne 0x101044a8 */ if (!ZF_) goto L_101044a8;
L_101044a0:;
  /* 101044a0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101044a1 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101044a4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101044a5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_101044a8:;
  /* 101044a8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101044aa call 0x10101910 */ esp -= 4; M32(esp) = 0x101044afu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x101044aau); RETCHK(0x101044afu, 0x101044aau); LOADALL;
  /* 101044af pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101044b0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101044b1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101044c0(CPU *c) {
  NATIVE_HOOK(0x101044c0u) REGS; LOADALL;
L_101044c0:;
  /* 101044c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101044c1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101044c2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 101044c6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 101044cc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101044cd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101044cf call 0x10104c40 */ esp -= 4; M32(esp) = 0x101044d4u; SAVEALL; F_10104c40(c); ABI_CHECK(0x10104c40u, 0x101044cfu); RETCHK(0x101044d4u, 0x101044cfu); LOADALL;
  /* 101044d4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101044d7 jne 0x101044e1 */ if (!ZF_) goto L_101044e1;
L_101044d9:;
  /* 101044d9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101044da or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101044dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101044de ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_101044e1:;
  /* 101044e1 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 101044e4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101044e5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101044e7 call 0x10104b50 */ esp -= 4; M32(esp) = 0x101044ecu; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x101044e7u); RETCHK(0x101044ecu, 0x101044e7u); LOADALL;
  /* 101044ec cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101044ef je 0x101044d9 */ if (ZF_) goto L_101044d9;
  /* 101044f1 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 101044f6 add edi, 5 */ { u32 a_ = edi, b_ = 0x5u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101044f9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101044fa mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101044fc call 0x10104c80 */ esp -= 4; M32(esp) = 0x10104501u; SAVEALL; F_10104c80(c); ABI_CHECK(0x10104c80u, 0x101044fcu); RETCHK(0x10104501u, 0x101044fcu); LOADALL;
  /* 10104501 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10104502 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10104504 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10104506 and eax, 0x89 */ { u32 a_ = eax, b_ = 0x89u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010450b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010450c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010450d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010450e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104520(CPU *c) {
  NATIVE_HOOK(0x10104520u) REGS; LOADALL;
L_10104520:;
  /* 10104520 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10104524 sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10104527 je 0x10104570 */ if (ZF_) goto L_10104570;
  /* 10104529 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010452a je 0x10104532 */ if (ZF_) goto L_10104532;
  /* 1010452c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010452f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10104532:;
  /* 10104532 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104533 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104534 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10104538 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1010453e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010453f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104541 call 0x10104b50 */ esp -= 4; M32(esp) = 0x10104546u; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x10104541u); RETCHK(0x10104546u, 0x10104541u); LOADALL;
  /* 10104546 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104549 jne 0x10104552 */ if (!ZF_) goto L_10104552;
  /* 1010454b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010454c or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010454e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010454f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10104552:;
  /* 10104552 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10104557 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10104558 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104559 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1010455b call 0x10104c80 */ esp -= 4; M32(esp) = 0x10104560u; SAVEALL; F_10104c80(c); ABI_CHECK(0x10104c80u, 0x1010455bu); RETCHK(0x10104560u, 0x1010455bu); LOADALL;
  /* 10104560 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10104561 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10104563 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10104565 and eax, 0x82 */ { u32 a_ = eax, b_ = 0x82u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010456a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010456b dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010456c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010456d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10104570:;
  /* 10104570 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10104574 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10104575 call 0x101044c0 */ esp -= 4; M32(esp) = 0x1010457au; SAVEALL; F_101044c0(c); ABI_CHECK(0x101044c0u, 0x10104575u); RETCHK(0x1010457au, 0x10104575u); LOADALL;
  /* 1010457a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10104580(CPU *c) {
  NATIVE_HOOK(0x10104580u) REGS; LOADALL;
L_10104580:;
  /* 10104580 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10104581 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104582 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10104586 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104588 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010458a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010458b mov edi, ecx */ { edi = (u32)(ecx); }
  /* 1010458d lea ebx, [edi + 0x10000] */ ebx = (u32)((u32)(edi + 0x10000u));
  /* 10104593 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10104595 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10104596 call 0x10104b20 */ esp -= 4; M32(esp) = 0x1010459bu; SAVEALL; F_10104b20(c); ABI_CHECK(0x10104b20u, 0x10104596u); RETCHK(0x1010459bu, 0x10104596u); LOADALL;
  /* 1010459b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010459e je 0x101045d8 */ if (ZF_) goto L_101045d8;
  /* 101045a0 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 101045a2 mov cl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101045a5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101045a6 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 101045a8 call 0x10104b20 */ esp -= 4; M32(esp) = 0x101045adu; SAVEALL; F_10104b20(c); ABI_CHECK(0x10104b20u, 0x101045a8u); RETCHK(0x101045adu, 0x101045a8u); LOADALL;
  /* 101045ad cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101045b0 je 0x101045d8 */ if (ZF_) goto L_101045d8;
  /* 101045b2 movzx ecx, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (u32)(M8(m_)); }
  /* 101045b6 sub ecx, 0 */ { u32 a_ = ecx, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101045b9 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 101045bc je 0x101045cb */ if (ZF_) goto L_101045cb;
  /* 101045be dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101045bf jne 0x101045d8 */ if (!ZF_) goto L_101045d8;
  /* 101045c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101045c2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 101045c4 call 0x10104470 */ esp -= 4; M32(esp) = 0x101045c9u; SAVEALL; F_10104470(c); ABI_CHECK(0x10104470u, 0x101045c4u); RETCHK(0x101045c9u, 0x101045c4u); LOADALL;
  /* 101045c9 jmp 0x101045d3 */ goto L_101045d3;
L_101045cb:;
  /* 101045cb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101045cc mov ecx, edi */ { ecx = (u32)(edi); }
  /* 101045ce call 0x10104040 */ esp -= 4; M32(esp) = 0x101045d3u; SAVEALL; F_10104040(c); ABI_CHECK(0x10104040u, 0x101045ceu); RETCHK(0x101045d3u, 0x101045ceu); LOADALL;
L_101045d3:;
  /* 101045d3 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101045d6 jne 0x101045e1 */ if (!ZF_) goto L_101045e1;
L_101045d8:;
  /* 101045d8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101045d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101045da or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101045dd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101045de ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_101045e1:;
  /* 101045e1 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 101045e3 call 0x10101910 */ esp -= 4; M32(esp) = 0x101045e8u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x101045e3u); RETCHK(0x101045e8u, 0x101045e3u); LOADALL;
  /* 101045e8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101045e9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101045ea pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101045eb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101045f0(CPU *c) {
  NATIVE_HOOK(0x101045f0u) REGS; LOADALL;
L_101045f0:;
  /* 101045f0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101045f1 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 101045f5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101045f6 mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 101045f8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101045f9 lea esi, [ebp + 0x10000] */ esi = (u32)((u32)(ebp + 0x10000u));
  /* 101045ff push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10104600 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104602 call 0x10104b50 */ esp -= 4; M32(esp) = 0x10104607u; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x10104602u); RETCHK(0x10104607u, 0x10104602u); LOADALL;
  /* 10104607 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010460a jne 0x10104614 */ if (!ZF_) goto L_10104614;
  /* 1010460c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010460d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010460e or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104610 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10104611 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104614:;
  /* 10104614 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104615 lea edi, [ebx + 1] */ edi = (u32)((u32)(ebx + 0x1u));
  /* 10104618 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104619 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1010461b call 0x10104b50 */ esp -= 4; M32(esp) = 0x10104620u; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x1010461bu); RETCHK(0x10104620u, 0x1010461bu); LOADALL;
  /* 10104620 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104623 jne 0x1010462e */ if (!ZF_) goto L_1010462e;
  /* 10104625 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10104626 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104627 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10104628 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010462a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1010462b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1010462e:;
  /* 1010462e movzx eax, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M8(m_)); }
  /* 10104631 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10104632 add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10104635 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10104636 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10104638 call 0x10104520 */ esp -= 4; M32(esp) = 0x1010463du; SAVEALL; F_10104520(c); ABI_CHECK(0x10104520u, 0x10104638u); RETCHK(0x1010463du, 0x10104638u); LOADALL;
  /* 1010463d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010463e neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10104640 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10104641 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10104643 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104644 and eax, 0x8d */ { u32 a_ = eax, b_ = 0x8du; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104649 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010464a dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010464b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1010464c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104650(CPU *c) {
  NATIVE_HOOK(0x10104650u) REGS; LOADALL;
L_10104650:;
  /* 10104650 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10104651 mov ebp, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebp = (u32)(M32(m_)); }
  /* 10104655 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104657 mov ax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1010465b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010465c lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10104662 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104664 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10104665 call 0x10104b80 */ esp -= 4; M32(esp) = 0x1010466au; SAVEALL; F_10104b80(c); ABI_CHECK(0x10104b80u, 0x10104665u); RETCHK(0x1010466au, 0x10104665u); LOADALL;
  /* 1010466a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010466d jne 0x10104676 */ if (!ZF_) goto L_10104676;
  /* 1010466f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104670 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104672 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10104673 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104676:;
  /* 10104676 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10104677 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104678 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1010467a lea edi, [ebp + 2] */ edi = (u32)((u32)(ebp + 0x2u));
  /* 1010467d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_10104680:;
  /* 10104680 movzx ecx, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M16(m_)); }
  /* 10104684 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104686 jge 0x101046c6 */ if (!LT_) goto L_101046c6;
  /* 10104688 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1010468a mov dl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010468c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1010468e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1010468f call 0x10104b20 */ esp -= 4; M32(esp) = 0x10104694u; SAVEALL; F_10104b20(c); ABI_CHECK(0x10104b20u, 0x1010468fu); RETCHK(0x10104694u, 0x1010468fu); LOADALL;
  /* 10104694 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104697 je 0x101046d4 */ if (ZF_) goto L_101046d4;
  /* 10104699 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 1010469e lea eax, [edi + 1] */ eax = (u32)((u32)(edi + 0x1u));
  /* 101046a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101046a2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101046a4 call 0x10104d30 */ esp -= 4; M32(esp) = 0x101046a9u; SAVEALL; F_10104d30(c); ABI_CHECK(0x10104d30u, 0x101046a4u); RETCHK(0x101046a9u, 0x101046a4u); LOADALL;
  /* 101046a9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101046ac je 0x101046d4 */ if (ZF_) goto L_101046d4;
  /* 101046ae mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101046b0 call 0x10101910 */ esp -= 4; M32(esp) = 0x101046b5u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x101046b0u); RETCHK(0x101046b5u, 0x101046b0u); LOADALL;
  /* 101046b5 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101046b8 je 0x101046d4 */ if (ZF_) goto L_101046d4;
  /* 101046ba inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101046bb add edi, 0x81 */ { u32 a_ = edi, b_ = 0x81u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101046c1 cmp ebx, 0x40 */ { u32 a_ = ebx, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101046c4 jl 0x10104680 */ if (LT_) goto L_10104680;
L_101046c6:;
  /* 101046c6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101046c8 call 0x10101910 */ esp -= 4; M32(esp) = 0x101046cdu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x101046c8u); RETCHK(0x101046cdu, 0x101046c8u); LOADALL;
  /* 101046cd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101046ce pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101046cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101046d0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101046d1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_101046d4:;
  /* 101046d4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101046d5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101046d6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101046d7 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101046da pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101046db ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101046e0(CPU *c) {
  NATIVE_HOOK(0x101046e0u) REGS; LOADALL;
L_101046e0:;
  /* 101046e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101046e1 mov ebp, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebp = (u32)(M32(m_)); }
  /* 101046e5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101046e7 mov al, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101046ea push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101046eb lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 101046f1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101046f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101046f4 call 0x10104b20 */ esp -= 4; M32(esp) = 0x101046f9u; SAVEALL; F_10104b20(c); ABI_CHECK(0x10104b20u, 0x101046f4u); RETCHK(0x101046f9u, 0x101046f4u); LOADALL;
  /* 101046f9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101046fc jne 0x10104705 */ if (!ZF_) goto L_10104705;
  /* 101046fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101046ff or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104701 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10104702 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104705:;
  /* 10104705 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10104706 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104707 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10104709 lea edi, [ebp + 1] */ edi = (u32)((u32)(ebp + 0x1u));
  /* 1010470c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_10104710:;
  /* 10104710 movzx ecx, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M8(m_)); }
  /* 10104714 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104716 jge 0x10104756 */ if (!LT_) goto L_10104756;
  /* 10104718 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1010471a mov dl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010471c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1010471e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1010471f call 0x10104b20 */ esp -= 4; M32(esp) = 0x10104724u; SAVEALL; F_10104b20(c); ABI_CHECK(0x10104b20u, 0x1010471fu); RETCHK(0x10104724u, 0x1010471fu); LOADALL;
  /* 10104724 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104727 je 0x10104764 */ if (ZF_) goto L_10104764;
  /* 10104729 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 1010472e lea eax, [edi + 1] */ eax = (u32)((u32)(edi + 0x1u));
  /* 10104731 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10104732 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104734 call 0x10104d30 */ esp -= 4; M32(esp) = 0x10104739u; SAVEALL; F_10104d30(c); ABI_CHECK(0x10104d30u, 0x10104734u); RETCHK(0x10104739u, 0x10104734u); LOADALL;
  /* 10104739 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010473c je 0x10104764 */ if (ZF_) goto L_10104764;
  /* 1010473e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104740 call 0x10101910 */ esp -= 4; M32(esp) = 0x10104745u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10104740u); RETCHK(0x10104745u, 0x10104740u); LOADALL;
  /* 10104745 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104748 je 0x10104764 */ if (ZF_) goto L_10104764;
  /* 1010474a inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010474b add edi, 0x81 */ { u32 a_ = edi, b_ = 0x81u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10104751 cmp ebx, 0xa */ { u32 a_ = ebx, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104754 jl 0x10104710 */ if (LT_) goto L_10104710;
L_10104756:;
  /* 10104756 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104758 call 0x10101910 */ esp -= 4; M32(esp) = 0x1010475du; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10104758u); RETCHK(0x1010475du, 0x10104758u); LOADALL;
  /* 1010475d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010475e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1010475f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104760 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10104761 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104764:;
  /* 10104764 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10104765 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10104766 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104767 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010476a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010476b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104770(CPU *c) {
  NATIVE_HOOK(0x10104770u) REGS; LOADALL;
L_10104770:;
  /* 10104770 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10104771 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10104772 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 10104776 lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 1010477c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1010477d mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 1010477f call 0x10104b50 */ esp -= 4; M32(esp) = 0x10104784u; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x1010477fu); RETCHK(0x10104784u, 0x1010477fu); LOADALL;
  /* 10104784 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104787 jne 0x10104790 */ if (!ZF_) goto L_10104790;
  /* 10104789 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010478a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010478c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1010478d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104790:;
  /* 10104790 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104791 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104792 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10104794 lea esi, [ebp + 1] */ esi = (u32)((u32)(ebp + 0x1u));
L_10104797:;
  /* 10104797 movzx eax, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M8(m_)); }
  /* 1010479b cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010479d jge 0x101047cd */ if (!LT_) goto L_101047cd;
  /* 1010479f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101047a0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 101047a2 call 0x10104b50 */ esp -= 4; M32(esp) = 0x101047a7u; SAVEALL; F_10104b50(c); ABI_CHECK(0x10104b50u, 0x101047a2u); RETCHK(0x101047a7u, 0x101047a2u); LOADALL;
  /* 101047a7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101047aa je 0x101047d9 */ if (ZF_) goto L_101047d9;
  /* 101047ac push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 101047b1 lea ecx, [esi + 1] */ ecx = (u32)((u32)(esi + 0x1u));
  /* 101047b4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101047b5 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 101047b7 call 0x10104c80 */ esp -= 4; M32(esp) = 0x101047bcu; SAVEALL; F_10104c80(c); ABI_CHECK(0x10104c80u, 0x101047b7u); RETCHK(0x101047bcu, 0x101047b7u); LOADALL;
  /* 101047bc cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101047bf je 0x101047d9 */ if (ZF_) goto L_101047d9;
  /* 101047c1 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101047c2 add esi, 0x81 */ { u32 a_ = esi, b_ = 0x81u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101047c8 cmp edi, 0xa */ { u32 a_ = edi, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101047cb jl 0x10104797 */ if (LT_) goto L_10104797;
L_101047cd:;
  /* 101047cd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101047ce pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101047cf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101047d0 mov eax, 0x50b */ { eax = (u32)(0x50bu); }
  /* 101047d5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101047d6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_101047d9:;
  /* 101047d9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101047da pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101047db pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101047dc or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101047df pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101047e0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101047f0(CPU *c) {
  NATIVE_HOOK(0x101047f0u) REGS; LOADALL;
L_101047f0:;
  /* 101047f0 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 101047f2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101047f3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101047f5 mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 101047fa mov edi, edx */ { edi = (u32)(edx); }
  /* 101047fc rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 101047fe mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 10104803 lea edi, [edx + 0x8000] */ edi = (u32)((u32)(edx + 0x8000u));
  /* 10104809 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 1010480b mov dword ptr [edx + 4], 0x10103b30 */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(0x10103b30u); }
  /* 10104812 mov dword ptr [edx + 0x8004], 0x10103b60 */ { const u32 m_ = (u32)(edx + 0x8004u); M32(m_) = (u32)(0x10103b60u); }
  /* 1010481c mov dword ptr [edx + 0x324], 0x10103b30 */ { const u32 m_ = (u32)(edx + 0x324u); M32(m_) = (u32)(0x10103b30u); }
  /* 10104826 mov dword ptr [edx + 0x8324], 0x10103b60 */ { const u32 m_ = (u32)(edx + 0x8324u); M32(m_) = (u32)(0x10103b60u); }
  /* 10104830 mov dword ptr [edx + 0x32c], 0x10103b30 */ { const u32 m_ = (u32)(edx + 0x32cu); M32(m_) = (u32)(0x10103b30u); }
  /* 1010483a mov dword ptr [edx + 0x832c], 0x10103b60 */ { const u32 m_ = (u32)(edx + 0x832cu); M32(m_) = (u32)(0x10103b60u); }
  /* 10104844 mov dword ptr [edx + 0x330], 0x10103c00 */ { const u32 m_ = (u32)(edx + 0x330u); M32(m_) = (u32)(0x10103c00u); }
  /* 1010484e mov dword ptr [edx + 0x8330], 0x10103b80 */ { const u32 m_ = (u32)(edx + 0x8330u); M32(m_) = (u32)(0x10103b80u); }
  /* 10104858 mov dword ptr [edx + 0x338], 0x10104470 */ { const u32 m_ = (u32)(edx + 0x338u); M32(m_) = (u32)(0x10104470u); }
  /* 10104862 mov dword ptr [edx + 0x8338], 0x10103bc0 */ { const u32 m_ = (u32)(edx + 0x8338u); M32(m_) = (u32)(0x10103bc0u); }
  /* 1010486c mov dword ptr [edx + 0x33c], 0x101041e0 */ { const u32 m_ = (u32)(edx + 0x33cu); M32(m_) = (u32)(0x101041e0u); }
  /* 10104876 mov dword ptr [edx + 0x833c], 0x10104190 */ { const u32 m_ = (u32)(edx + 0x833cu); M32(m_) = (u32)(0x10104190u); }
  /* 10104880 mov dword ptr [edx + 0x340], 0x10103f80 */ { const u32 m_ = (u32)(edx + 0x340u); M32(m_) = (u32)(0x10103f80u); }
  /* 1010488a mov dword ptr [edx + 0x8340], 0x10103fe0 */ { const u32 m_ = (u32)(edx + 0x8340u); M32(m_) = (u32)(0x10103fe0u); }
  /* 10104894 mov dword ptr [edx + 0x344], 0x10104040 */ { const u32 m_ = (u32)(edx + 0x344u); M32(m_) = (u32)(0x10104040u); }
  /* 1010489e mov dword ptr [edx + 0x8344], 0x101044c0 */ { const u32 m_ = (u32)(edx + 0x8344u); M32(m_) = (u32)(0x101044c0u); }
  /* 101048a8 mov dword ptr [edx + 0x348], 0x10104470 */ { const u32 m_ = (u32)(edx + 0x348u); M32(m_) = (u32)(0x10104470u); }
  /* 101048b2 mov dword ptr [edx + 0x8348], 0x10103bc0 */ { const u32 m_ = (u32)(edx + 0x8348u); M32(m_) = (u32)(0x10103bc0u); }
  /* 101048bc mov dword ptr [edx + 0x350], 0x10104100 */ { const u32 m_ = (u32)(edx + 0x350u); M32(m_) = (u32)(0x10104100u); }
  /* 101048c6 mov dword ptr [edx + 0x8350], 0x10104150 */ { const u32 m_ = (u32)(edx + 0x8350u); M32(m_) = (u32)(0x10104150u); }
  /* 101048d0 mov dword ptr [edx + 0x354], 0x101040a0 */ { const u32 m_ = (u32)(edx + 0x354u); M32(m_) = (u32)(0x101040a0u); }
  /* 101048da mov dword ptr [edx + 0x8354], 0x101040d0 */ { const u32 m_ = (u32)(edx + 0x8354u); M32(m_) = (u32)(0x101040d0u); }
  /* 101048e4 mov dword ptr [edx + 0x358], 0x10104100 */ { const u32 m_ = (u32)(edx + 0x358u); M32(m_) = (u32)(0x10104100u); }
  /* 101048ee mov dword ptr [edx + 0x8358], 0x10104150 */ { const u32 m_ = (u32)(edx + 0x8358u); M32(m_) = (u32)(0x10104150u); }
  /* 101048f8 mov dword ptr [edx + 0x35c], 0x101041e0 */ { const u32 m_ = (u32)(edx + 0x35cu); M32(m_) = (u32)(0x101041e0u); }
  /* 10104902 mov dword ptr [edx + 0x835c], 0x10104190 */ { const u32 m_ = (u32)(edx + 0x835cu); M32(m_) = (u32)(0x10104190u); }
  /* 1010490c mov dword ptr [edx + 0x360], 0x101041e0 */ { const u32 m_ = (u32)(edx + 0x360u); M32(m_) = (u32)(0x101041e0u); }
  /* 10104916 mov dword ptr [edx + 0x8360], 0x10104190 */ { const u32 m_ = (u32)(edx + 0x8360u); M32(m_) = (u32)(0x10104190u); }
  /* 10104920 mov dword ptr [edx + 0x368], 0x10104100 */ { const u32 m_ = (u32)(edx + 0x368u); M32(m_) = (u32)(0x10104100u); }
  /* 1010492a mov dword ptr [edx + 0x8368], 0x10104150 */ { const u32 m_ = (u32)(edx + 0x8368u); M32(m_) = (u32)(0x10104150u); }
  /* 10104934 mov dword ptr [edx + 0x36c], 0x10104650 */ { const u32 m_ = (u32)(edx + 0x36cu); M32(m_) = (u32)(0x10104650u); }
  /* 1010493e mov dword ptr [edx + 0x836c], 0x10104230 */ { const u32 m_ = (u32)(edx + 0x836cu); M32(m_) = (u32)(0x10104230u); }
  /* 10104948 mov dword ptr [edx + 0x370], 0x101042b0 */ { const u32 m_ = (u32)(edx + 0x370u); M32(m_) = (u32)(0x101042b0u); }
  /* 10104952 mov dword ptr [edx + 0x8370], 0x10104320 */ { const u32 m_ = (u32)(edx + 0x8370u); M32(m_) = (u32)(0x10104320u); }
  /* 1010495c mov dword ptr [edx + 0x374], 0x101043b0 */ { const u32 m_ = (u32)(edx + 0x374u); M32(m_) = (u32)(0x101043b0u); }
  /* 10104966 mov dword ptr [edx + 0x8374], 0x10104410 */ { const u32 m_ = (u32)(edx + 0x8374u); M32(m_) = (u32)(0x10104410u); }
  /* 10104970 mov dword ptr [edx + 0x378], 0x10104580 */ { const u32 m_ = (u32)(edx + 0x378u); M32(m_) = (u32)(0x10104580u); }
  /* 1010497a mov dword ptr [edx + 0x8378], 0x101045f0 */ { const u32 m_ = (u32)(edx + 0x8378u); M32(m_) = (u32)(0x101045f0u); }
  /* 10104984 mov dword ptr [edx + 0x380], 0x10103ba0 */ { const u32 m_ = (u32)(edx + 0x380u); M32(m_) = (u32)(0x10103ba0u); }
  /* 1010498e mov dword ptr [edx + 0x8380], 0x10103bb0 */ { const u32 m_ = (u32)(edx + 0x8380u); M32(m_) = (u32)(0x10103bb0u); }
  /* 10104998 mov dword ptr [edx + 0x384], 0x10103c00 */ { const u32 m_ = (u32)(edx + 0x384u); M32(m_) = (u32)(0x10103c00u); }
  /* 101049a2 mov dword ptr [edx + 0x8384], 0x10103b80 */ { const u32 m_ = (u32)(edx + 0x8384u); M32(m_) = (u32)(0x10103b80u); }
  /* 101049ac mov dword ptr [edx + 0x388], 0x10103ec0 */ { const u32 m_ = (u32)(edx + 0x388u); M32(m_) = (u32)(0x10103ec0u); }
  /* 101049b6 mov dword ptr [edx + 0x8388], 0x10103f30 */ { const u32 m_ = (u32)(edx + 0x8388u); M32(m_) = (u32)(0x10103f30u); }
  /* 101049c0 mov dword ptr [edx + 0x390], 0x10104470 */ { const u32 m_ = (u32)(edx + 0x390u); M32(m_) = (u32)(0x10104470u); }
  /* 101049ca mov dword ptr [edx + 0x8390], 0x10103bc0 */ { const u32 m_ = (u32)(edx + 0x8390u); M32(m_) = (u32)(0x10103bc0u); }
  /* 101049d4 mov dword ptr [edx + 0x640], 0x10104650 */ { const u32 m_ = (u32)(edx + 0x640u); M32(m_) = (u32)(0x10104650u); }
  /* 101049de mov dword ptr [edx + 0x8640], 0x10104230 */ { const u32 m_ = (u32)(edx + 0x8640u); M32(m_) = (u32)(0x10104230u); }
  /* 101049e8 mov dword ptr [edx + 0x644], 0x101046e0 */ { const u32 m_ = (u32)(edx + 0x644u); M32(m_) = (u32)(0x101046e0u); }
  /* 101049f2 mov dword ptr [edx + 0x8644], 0x10104770 */ { const u32 m_ = (u32)(edx + 0x8644u); M32(m_) = (u32)(0x10104770u); }
  /* 101049fc mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 101049fe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101049ff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10104a00(CPU *c) {
  NATIVE_HOOK(0x10104a00u) REGS; LOADALL;
L_10104a00:;
  /* 10104a00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104a01 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10104a03 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104a04 lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 10104a0a call 0x10104ad0 */ esp -= 4; M32(esp) = 0x10104a0fu; SAVEALL; F_10104ad0(c); ABI_CHECK(0x10104ad0u, 0x10104a0au); RETCHK(0x10104a0fu, 0x10104a0au); LOADALL;
  /* 10104a0f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104a11 mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 10104a16 mov edi, esi */ { edi = (u32)(esi); }
  /* 10104a18 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10104a1a mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 10104a1f lea edi, [esi + 0x8000] */ edi = (u32)((u32)(esi + 0x8000u));
  /* 10104a25 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10104a27 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104a29 call 0x101047f0 */ esp -= 4; M32(esp) = 0x10104a2eu; SAVEALL; F_101047f0(c); ABI_CHECK(0x101047f0u, 0x10104a29u); RETCHK(0x10104a2eu, 0x10104a29u); LOADALL;
  /* 10104a2e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10104a2f mov eax, esi */ { eax = (u32)(esi); }
  /* 10104a31 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104a32 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10104a40(CPU *c) {
  NATIVE_HOOK(0x10104a40u) REGS; LOADALL;
L_10104a40:;
  /* 10104a40 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10104a44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104a45 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10104a47 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10104a4b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10104a4c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10104a4d lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 10104a53 call 0x10104b00 */ esp -= 4; M32(esp) = 0x10104a58u; SAVEALL; F_10104b00(c); ABI_CHECK(0x10104b00u, 0x10104a53u); RETCHK(0x10104a58u, 0x10104a53u); LOADALL;
  /* 10104a58 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10104a5c cmp eax, 0x2000 */ { u32 a_ = eax, b_ = 0x2000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104a61 jge 0x10104a6a */ if (!LT_) goto L_10104a6a;
  /* 10104a63 mov eax, dword ptr [esi + eax*4] */ { const u32 m_ = (u32)(esi + eax * 4u); eax = (u32)(M32(m_)); }
  /* 10104a66 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10104a68 jne 0x10104a71 */ if (!ZF_) goto L_10104a71;
L_10104a6a:;
  /* 10104a6a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104a6d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104a6e ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_10104a71:;
  /* 10104a71 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10104a75 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10104a76 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104a78 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10104a7au; SAVEALL; call_ind(c, t_); RETCHK(0x10104a7au, 0x10104a78u); LOADALL; }
  /* 10104a7a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104a7b ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_10104a80(CPU *c) {
  NATIVE_HOOK(0x10104a80u) REGS; LOADALL;
L_10104a80:;
  /* 10104a80 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10104a84 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104a85 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10104a87 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10104a8b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10104a8c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10104a8d lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 10104a93 call 0x10104b00 */ esp -= 4; M32(esp) = 0x10104a98u; SAVEALL; F_10104b00(c); ABI_CHECK(0x10104b00u, 0x10104a93u); RETCHK(0x10104a98u, 0x10104a93u); LOADALL;
  /* 10104a98 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10104a9c cmp eax, 0x2000 */ { u32 a_ = eax, b_ = 0x2000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104aa1 jge 0x10104aae */ if (!LT_) goto L_10104aae;
  /* 10104aa3 mov eax, dword ptr [esi + eax*4 + 0x8000] */ { const u32 m_ = (u32)(esi + eax * 4u + 0x8000u); eax = (u32)(M32(m_)); }
  /* 10104aaa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10104aac jne 0x10104ab5 */ if (!ZF_) goto L_10104ab5;
L_10104aae:;
  /* 10104aae or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104ab1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104ab2 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_10104ab5:;
  /* 10104ab5 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10104ab9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10104aba mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10104abc call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10104abeu; SAVEALL; call_ind(c, t_); RETCHK(0x10104abeu, 0x10104abcu); LOADALL; }
  /* 10104abe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104abf ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_10104ad0(CPU *c) {
  NATIVE_HOOK(0x10104ad0u) REGS; LOADALL;
L_10104ad0:;
  /* 10104ad0 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10104ad2 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10104ad4 mov dword ptr [eax], 0x1010d1d0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x1010d1d0u); }
  /* 10104ada mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10104add mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10104ae0 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 10104ae3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10104b00(CPU *c) {
  NATIVE_HOOK(0x10104b00u) REGS; LOADALL;
L_10104b00:;
  /* 10104b00 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10104b04 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10104b08 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10104b0b mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 10104b0e mov dword ptr [ecx + 0xc], 0 */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 10104b15 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10104b20(CPU *c) {
  NATIVE_HOOK(0x10104b20u) REGS; LOADALL;
L_10104b20:;
  /* 10104b20 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10104b23 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10104b24 mov ebx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10104b27 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 10104b2a cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104b2c jle 0x10104b35 */ if ((ZF_|LT_)) goto L_10104b35;
  /* 10104b2e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104b31 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10104b32 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104b35:;
  /* 10104b35 mov bl, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10104b39 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10104b3c mov byte ptr [eax + edx], bl */ { const u32 m_ = (u32)(eax + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10104b3f mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10104b42 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10104b43 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 10104b46 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10104b47 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104b50(CPU *c) {
  NATIVE_HOOK(0x10104b50u) REGS; LOADALL;
L_10104b50:;
  /* 10104b50 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10104b53 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104b54 mov esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); esi = (u32)(M32(m_)); }
  /* 10104b57 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 10104b5a cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104b5c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104b5d jle 0x10104b65 */ if ((ZF_|LT_)) goto L_10104b65;
  /* 10104b5f or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104b62 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104b65:;
  /* 10104b65 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10104b68 mov al, byte ptr [eax + edx] */ { const u32 m_ = (u32)(eax + edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10104b6b mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10104b6f mov byte ptr [edx], al */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10104b71 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10104b74 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10104b75 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 10104b78 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104b80(CPU *c) {
  NATIVE_HOOK(0x10104b80u) REGS; LOADALL;
L_10104b80:;
  /* 10104b80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104b81 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10104b83 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10104b86 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10104b89 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10104b8c cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104b8e jle 0x10104b97 */ if ((ZF_|LT_)) goto L_10104b97;
  /* 10104b90 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104b93 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104b94 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104b97:;
  /* 10104b97 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10104b9b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10104b9c call dword ptr [0x1010d118] */ { const u32 m_ = (u32)(0x1010d118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10104ba2u; SAVEALL; call_ind(c, t_); RETCHK(0x10104ba2u, 0x10104b9cu); LOADALL; }
  /* 10104ba2 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10104ba5 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10104ba8 mov word ptr [edx + ecx], ax */ { const u32 m_ = (u32)(edx + ecx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10104bac mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10104baf add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10104bb2 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10104bb5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104bb6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104bc0(CPU *c) {
  NATIVE_HOOK(0x10104bc0u) REGS; LOADALL;
L_10104bc0:;
  /* 10104bc0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104bc1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10104bc3 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10104bc6 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 10104bc9 lea ecx, [eax + 2] */ ecx = (u32)((u32)(eax + 0x2u));
  /* 10104bcc cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104bce jle 0x10104bd7 */ if ((ZF_|LT_)) goto L_10104bd7;
  /* 10104bd0 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104bd3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104bd4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104bd7:;
  /* 10104bd7 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10104bda movzx eax, word ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); eax = (u32)(M16(m_)); }
  /* 10104bde push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10104bdf call dword ptr [0x1010d114] */ { const u32 m_ = (u32)(0x1010d114u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10104be5u; SAVEALL; call_ind(c, t_); RETCHK(0x10104be5u, 0x10104bdfu); LOADALL; }
  /* 10104be5 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10104be9 mov word ptr [ecx], ax */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10104bec mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10104bef add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10104bf2 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10104bf5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104bf6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104c00(CPU *c) {
  NATIVE_HOOK(0x10104c00u) REGS; LOADALL;
L_10104c00:;
  /* 10104c00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104c01 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10104c03 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10104c06 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10104c09 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10104c0c cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104c0e jle 0x10104c17 */ if ((ZF_|LT_)) goto L_10104c17;
  /* 10104c10 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104c13 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104c14 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104c17:;
  /* 10104c17 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10104c1b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10104c1c call dword ptr [0x1010d11c] */ { const u32 m_ = (u32)(0x1010d11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10104c22u; SAVEALL; call_ind(c, t_); RETCHK(0x10104c22u, 0x10104c1cu); LOADALL; }
  /* 10104c22 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10104c25 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10104c28 mov dword ptr [edx + ecx], eax */ { const u32 m_ = (u32)(edx + ecx); M32(m_) = (u32)(eax); }
  /* 10104c2b mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10104c2e add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10104c31 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10104c34 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104c35 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104c40(CPU *c) {
  NATIVE_HOOK(0x10104c40u) REGS; LOADALL;
L_10104c40:;
  /* 10104c40 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104c41 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10104c43 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10104c46 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 10104c49 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 10104c4c cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104c4e jle 0x10104c57 */ if ((ZF_|LT_)) goto L_10104c57;
  /* 10104c50 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104c53 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104c54 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10104c57:;
  /* 10104c57 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10104c5a mov eax, dword ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); eax = (u32)(M32(m_)); }
  /* 10104c5d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10104c5e call dword ptr [0x1010d120] */ { const u32 m_ = (u32)(0x1010d120u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10104c64u; SAVEALL; call_ind(c, t_); RETCHK(0x10104c64u, 0x10104c5eu); LOADALL; }
  /* 10104c64 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10104c68 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 10104c6a mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10104c6d add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10104c70 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10104c73 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104c74 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104c80(CPU *c) {
  NATIVE_HOOK(0x10104c80u) REGS; LOADALL;
L_10104c80:;
  /* 10104c80 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10104c81 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10104c83 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10104c86 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10104c89 lea ecx, [eax + 2] */ ecx = (u32)((u32)(eax + 0x2u));
  /* 10104c8c cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104c8e jg 0x10104cac */ if (!(ZF_|LT_)) goto L_10104cac;
  /* 10104c90 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10104c93 movzx eax, word ptr [eax + edx] */ { const u32 m_ = (u32)(eax + edx); eax = (u32)(M16(m_)); }
  /* 10104c97 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10104c98 call dword ptr [0x1010d114] */ { const u32 m_ = (u32)(0x1010d114u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10104c9eu; SAVEALL; call_ind(c, t_); RETCHK(0x10104c9eu, 0x10104c98u); LOADALL; }
  /* 10104c9e mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 10104ca1 add edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10104ca4 cmp edx, -1 */ { u32 a_ = edx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104ca7 mov dword ptr [ebx + 0xc], edx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(edx); }
  /* 10104caa jne 0x10104cb3 */ if (!ZF_) goto L_10104cb3;
L_10104cac:;
  /* 10104cac or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104caf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10104cb0 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10104cb3:;
  /* 10104cb3 movzx eax, ax */ { eax = (u32)((eax & 0xffffu)); }
  /* 10104cb6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104cb7 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 10104cba lea ecx, [eax + edx] */ ecx = (u32)((u32)(eax + edx));
  /* 10104cbd cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104cbf jle 0x10104cc9 */ if ((ZF_|LT_)) goto L_10104cc9;
L_10104cc1:;
  /* 10104cc1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104cc2 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104cc5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10104cc6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10104cc9:;
  /* 10104cc9 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10104ccd lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 10104cd0 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104cd2 jg 0x10104cc1 */ if (!(ZF_|LT_)) goto L_10104cc1;
  /* 10104cd4 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 10104cd7 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10104cd8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104cd9 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10104cdb mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10104cdf mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10104ce1 mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 10104ce3 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10104ce6 mov edi, edx */ { edi = (u32)(edx); }
  /* 10104ce8 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10104cea mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10104cec and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10104cef rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10104cf1 mov byte ptr [eax + edx], 0 */ { const u32 m_ = (u32)(eax + edx); M8(m_) = (u8)(0x0u); }
  /* 10104cf5 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10104cf8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10104cf9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10104cfa add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10104cfc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104cfd mov dword ptr [ebx + 0xc], ecx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 10104d00 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10104d02 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10104d03 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10104d10(CPU *c) {
  NATIVE_HOOK(0x10104d10u) REGS; LOADALL;
L_10104d10:;
  /* 10104d10 test byte ptr [esp + 4], 1 */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10104d15 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104d16 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10104d18 mov dword ptr [esi], 0x1010d1d0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1010d1d0u); }
  /* 10104d1e je 0x10104d29 */ if (ZF_) goto L_10104d29;
  /* 10104d20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104d21 call 0x10105a9d */ esp -= 4; M32(esp) = 0x10104d26u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10104d21u); RETCHK(0x10104d26u, 0x10104d21u); LOADALL;
  /* 10104d26 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10104d29:;
  /* 10104d29 mov eax, esi */ { eax = (u32)(esi); }
  /* 10104d2b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104d2c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104d30(CPU *c) {
  NATIVE_HOOK(0x10104d30u) REGS; LOADALL;
L_10104d30:;
  /* 10104d30 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10104d31 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10104d32 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 10104d36 dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10104d37 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104d39 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10104d3b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104d3c mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10104d40 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10104d42 jle 0x10104d53 */ if ((ZF_|LT_)) goto L_10104d53;
L_10104d44:;
  /* 10104d44 cmp byte ptr [eax + esi], 0 */ { const u32 m_ = (u32)(eax + esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10104d48 je 0x10104d51 */ if (ZF_) goto L_10104d51;
  /* 10104d4a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10104d4b cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104d4d jl 0x10104d44 */ if (LT_) goto L_10104d44;
  /* 10104d4f jmp 0x10104d53 */ goto L_10104d53;
L_10104d51:;
  /* 10104d51 mov ebp, eax */ { ebp = (u32)(eax); }
L_10104d53:;
  /* 10104d53 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10104d56 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10104d59 lea edx, [eax + ebp + 2] */ edx = (u32)((u32)(eax + ebp + 0x2u));
  /* 10104d5d cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104d5f jg 0x10104d89 */ if (!(ZF_|LT_)) goto L_10104d89;
  /* 10104d61 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10104d64 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104d66 jg 0x10104d89 */ if (!(ZF_|LT_)) goto L_10104d89;
  /* 10104d68 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10104d69 call dword ptr [0x1010d118] */ { const u32 m_ = (u32)(0x1010d118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10104d6fu; SAVEALL; call_ind(c, t_); RETCHK(0x10104d6fu, 0x10104d69u); LOADALL; }
  /* 10104d6f mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 10104d72 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10104d75 mov word ptr [ecx + edx], ax */ { const u32 m_ = (u32)(ecx + edx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10104d79 mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 10104d7c add edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10104d7f mov eax, edx */ { eax = (u32)(edx); }
  /* 10104d81 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104d84 mov dword ptr [ebx + 0xc], edx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(edx); }
  /* 10104d87 jne 0x10104d92 */ if (!ZF_) goto L_10104d92;
L_10104d89:;
  /* 10104d89 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104d8a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10104d8b or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10104d8e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10104d8f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10104d92:;
  /* 10104d92 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104d93 mov edi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edi = (u32)(M32(m_)); }
  /* 10104d96 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10104d98 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10104d9a mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10104d9c shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10104d9f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10104da1 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10104da3 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10104da6 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10104da8 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10104dab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10104dac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104dad add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10104daf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10104db0 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 10104db3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10104db4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10104dc0(CPU *c) {
  NATIVE_HOOK(0x10104dc0u) REGS; LOADALL;
L_10104dc0:;
  /* 10104dc0 sub esp, 0x404 */ { u32 a_ = esp, b_ = 0x404u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10104dc6 mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 10104dcb mov ecx, dword ptr [esp + 0x408] */ { const u32 m_ = (u32)(esp + 0x408u); ecx = (u32)(M32(m_)); }
  /* 10104dd2 mov dword ptr [esp + 0x400], eax */ { const u32 m_ = (u32)(esp + 0x400u); M32(m_) = (u32)(eax); }
  /* 10104dd9 lea eax, [esp + 0x40c] */ eax = (u32)((u32)(esp + 0x40cu));
  /* 10104de0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10104de1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10104de2 lea edx, [esp + 8] */ edx = (u32)((u32)(esp + 0x8u));
  /* 10104de6 push 0x400 */ { u32 v_ = 0x400u; esp -= 4; M32(esp) = v_; }
  /* 10104deb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10104dec call 0x10105d1b */ esp -= 4; M32(esp) = 0x10104df1u; SAVEALL; F_10105d1b(c); ABI_CHECK(0x10105d1bu, 0x10104decu); RETCHK(0x10104df1u, 0x10104decu); LOADALL;
  /* 10104df1 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10104df4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10104df6 push 0x1010d1d4 */ { u32 v_ = 0x1010d1d4u; esp -= 4; M32(esp) = v_; }
  /* 10104dfb lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 10104dff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10104e00 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10104e02 call dword ptr [0x1010d10c] */ { const u32 m_ = (u32)(0x1010d10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10104e08u; SAVEALL; call_ind(c, t_); RETCHK(0x10104e08u, 0x10104e02u); LOADALL; }
  /* 10104e08 mov ecx, dword ptr [esp + 0x400] */ { const u32 m_ = (u32)(esp + 0x400u); ecx = (u32)(M32(m_)); }
  /* 10104e0f call 0x1010570f */ esp -= 4; M32(esp) = 0x10104e14u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10104e0fu); RETCHK(0x10104e14u, 0x10104e0fu); LOADALL;
  /* 10104e14 add esp, 0x404 */ { u32 a_ = esp, b_ = 0x404u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10104e1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10104e20(CPU *c) {
  NATIVE_HOOK(0x10104e20u) REGS; LOADALL;
L_10104e20:;
  /* 10104e20 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10104e22 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10104e30(CPU *c) {
  NATIVE_HOOK(0x10104e30u) REGS; LOADALL;
L_10104e30:;
  /* 10104e30 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10104e33 mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 10104e38 mov dword ptr [esp + 0x40], eax */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(eax); }
  /* 10104e3c mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 10104e40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10104e41 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 10104e45 push 0x1010d270 */ { u32 v_ = 0x1010d270u; esp -= 4; M32(esp) = v_; }
  /* 10104e4a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10104e4b call 0x10105d71 */ esp -= 4; M32(esp) = 0x10104e50u; SAVEALL; F_10105d71(c); ABI_CHECK(0x10105d71u, 0x10104e4bu); RETCHK(0x10104e50u, 0x10104e4bu); LOADALL;
  /* 10104e50 mov ecx, dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); ecx = (u32)(M32(m_)); }
  /* 10104e54 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10104e57 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10104e59 jne 0x10104e6c */ if (!ZF_) goto L_10104e6c;
  /* 10104e5b mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 10104e5d mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 10104e61 call 0x1010570f */ esp -= 4; M32(esp) = 0x10104e66u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10104e61u); RETCHK(0x10104e66u, 0x10104e61u); LOADALL;
  /* 10104e66 add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10104e69 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10104e6c:;
  /* 10104e6c mov eax, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); eax = (u32)(M32(m_)); }
  /* 10104e70 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10104e72 jne 0x10104e85 */ if (!ZF_) goto L_10104e85;
  /* 10104e74 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10104e76 mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 10104e7a call 0x1010570f */ esp -= 4; M32(esp) = 0x10104e7fu; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10104e7au); RETCHK(0x10104e7fu, 0x10104e7au); LOADALL;
  /* 10104e7f add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10104e82 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10104e85:;
  /* 10104e85 mov dx, word ptr [ecx + 2] */ { const u32 m_ = (u32)(ecx + 0x2u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10104e89 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10104e8a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10104e8c mov bx, word ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10104e8f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10104e90 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104e91 mov si, word ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (esi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10104e94 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10104e95 mov di, word ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10104e99 mov word ptr [esp + 0x5c], dx */ { const u32 m_ = (u32)(esp + 0x5cu); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 10104e9e mov word ptr [esp + 0x5e], si */ { const u32 m_ = (u32)(esp + 0x5eu); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 10104ea3 mov ebp, dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); ebp = (u32)(M32(m_)); }
  /* 10104ea7 mov word ptr [esp + 0x58], di */ { const u32 m_ = (u32)(esp + 0x58u); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 10104eac mov dword ptr [esp + 0x60], ebx */ { const u32 m_ = (u32)(esp + 0x60u); M32(m_) = (u32)(ebx); }
  /* 10104eb0 mov word ptr [esp + 0x5a], bx */ { const u32 m_ = (u32)(esp + 0x5au); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 10104eb5 mov ebx, dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); ebx = (u32)(M32(m_)); }
  /* 10104eb9 cmp ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10104ebb jne 0x10104ed2 */ if (!ZF_) goto L_10104ed2;
  /* 10104ebd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10104ebe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104ebf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10104ec0 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 10104ec2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10104ec3 mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 10104ec7 call 0x1010570f */ esp -= 4; M32(esp) = 0x10104eccu; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10104ec7u); RETCHK(0x10104eccu, 0x10104ec7u); LOADALL;
  /* 10104ecc add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10104ecf ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10104ed2:;
  /* 10104ed2 movzx ebx, word ptr [ecx + 6] */ { const u32 m_ = (u32)(ecx + 0x6u); ebx = (u32)(M16(m_)); }
  /* 10104ed6 movzx ecx, word ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M16(m_)); }
  /* 10104eda push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10104edb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10104edc movzx edx, dx */ { edx = (u32)((edx & 0xffffu)); }
  /* 10104edf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10104ee0 movzx ecx, si */ { ecx = (u32)((esi & 0xffffu)); }
  /* 10104ee3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10104ee4 movzx ecx, word ptr [eax + 6] */ { const u32 m_ = (u32)(eax + 0x6u); ecx = (u32)(M16(m_)); }
  /* 10104ee8 lea edx, [esp + 0x20] */ edx = (u32)((u32)(esp + 0x20u));
  /* 10104eec push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10104eed movzx edx, word ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M16(m_)); }
  /* 10104ef1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10104ef2 movzx ecx, word ptr [esp + 0x78] */ { const u32 m_ = (u32)(esp + 0x78u); ecx = (u32)(M16(m_)); }
  /* 10104ef7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10104ef8 movzx eax, di */ { eax = (u32)((edi & 0xffffu)); }
  /* 10104efb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10104efc lea edx, [esp + 0x30] */ edx = (u32)((u32)(esp + 0x30u));
  /* 10104f00 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10104f01 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10104f02 jbe 0x10104f0b */ if ((CF_|ZF_)) goto L_10104f0b;
  /* 10104f04 push 0x1010d228 */ { u32 v_ = 0x1010d228u; esp -= 4; M32(esp) = v_; }
  /* 10104f09 jmp 0x10104f10 */ goto L_10104f10;
L_10104f0b:;
  /* 10104f0b push 0x1010d1e0 */ { u32 v_ = 0x1010d1e0u; esp -= 4; M32(esp) = v_; }
L_10104f10:;
  /* 10104f10 call 0x10104dc0 */ esp -= 4; M32(esp) = 0x10104f15u; SAVEALL; F_10104dc0(c); ABI_CHECK(0x10104dc0u, 0x10104f10u); RETCHK(0x10104f15u, 0x10104f10u); LOADALL;
  /* 10104f15 mov ecx, dword ptr [esp + 0x7c] */ { const u32 m_ = (u32)(esp + 0x7cu); ecx = (u32)(M32(m_)); }
  /* 10104f19 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10104f1c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10104f1d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104f1e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10104f1f xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10104f21 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10104f22 call 0x1010570f */ esp -= 4; M32(esp) = 0x10104f27u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10104f22u); RETCHK(0x10104f27u, 0x10104f22u); LOADALL;
  /* 10104f27 add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10104f2a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10104f30(CPU *c) {
  NATIVE_HOOK(0x10104f30u) REGS; LOADALL;
L_10104f30:;
  /* 10104f30 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10104f32 mov dword ptr [eax], 0x1010d278 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x1010d278u); }
  /* 10104f38 mov dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 10104f3f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10104f40(CPU *c) {
  NATIVE_HOOK(0x10104f40u) REGS; LOADALL;
L_10104f40:;
  /* 10104f40 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10104f44 inc dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10104f47 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104f50(CPU *c) {
  NATIVE_HOOK(0x10104f50u) REGS; LOADALL;
L_10104f50:;
  /* 10104f50 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10104f54 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 10104f57 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104f60(CPU *c) {
  NATIVE_HOOK(0x10104f60u) REGS; LOADALL;
L_10104f60:;
  /* 10104f60 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10104f64 dec dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10104f67 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104f6a(CPU *c) {
  NATIVE_HOOK(0x10104f6au) REGS; LOADALL;
L_10104f6a:;
  /* 10104f6a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104f6b mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10104f6f jmp 0x10104f81 */ goto L_10104f81;
L_10104f71:;
  /* 10104f71 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104f72 call 0x1010611a */ esp -= 4; M32(esp) = 0x10104f77u; SAVEALL; F_1010611a(c); ABI_CHECK(0x1010611au, 0x10104f72u); RETCHK(0x10104f77u, 0x10104f72u); LOADALL;
  /* 10104f77 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10104f79 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10104f7a jne 0x10104f81 */ if (!ZF_) goto L_10104f81;
  /* 10104f7c call 0x1010508c */ esp -= 4; M32(esp) = 0x10104f81u; SAVEALL; F_1010508c(c); ABI_CHECK(0x1010508cu, 0x10104f7cu); RETCHK(0x10104f81u, 0x10104f7cu); LOADALL;
L_10104f81:;
  /* 10104f81 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104f82 call 0x10106108 */ esp -= 4; M32(esp) = 0x10104f87u; SAVEALL; F_10106108(c); ABI_CHECK(0x10106108u, 0x10104f82u); RETCHK(0x10104f87u, 0x10104f82u); LOADALL;
  /* 10104f87 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10104f89 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10104f8a je 0x10104f71 */ if (ZF_) goto L_10104f71;
  /* 10104f8c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104f8d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10104f8e(CPU *c) {
  NATIVE_HOOK(0x10104f8eu) REGS; LOADALL;
L_10104f8e:;
  /* 10104f8e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104f8f mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10104f91 call 0x10104faa */ esp -= 4; M32(esp) = 0x10104f96u; SAVEALL; F_10104faa(c); ABI_CHECK(0x10104faau, 0x10104f91u); RETCHK(0x10104f96u, 0x10104f91u); LOADALL;
  /* 10104f96 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10104f9b je 0x10104fa4 */ if (ZF_) goto L_10104fa4;
  /* 10104f9d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104f9e call 0x10105a9d */ esp -= 4; M32(esp) = 0x10104fa3u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10104f9eu); RETCHK(0x10104fa3u, 0x10104f9eu); LOADALL;
  /* 10104fa3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10104fa4:;
  /* 10104fa4 mov eax, esi */ { eax = (u32)(esi); }
  /* 10104fa6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10104fa7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10104faa(CPU *c) {
  NATIVE_HOOK(0x10104faau) REGS; LOADALL;
L_10104faa:;
  /* 10104faa mov dword ptr [ecx], 0x1010d2a8 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x1010d2a8u); }
  /* 10104fb0 jmp 0x10102af0 */ SAVEALL; F_10102af0(c); return;
}

void F_10104fb5(CPU *c) {
  NATIVE_HOOK(0x10104fb5u) REGS; LOADALL;
L_10104fb5:;
  /* 10104fb5 mov eax, 0x1010c87d */ { eax = (u32)(0x1010c87du); }
  /* 10104fba call 0x10106510 */ esp -= 4; M32(esp) = 0x10104fbfu; SAVEALL; F_10106510(c); ABI_CHECK(0x10106510u, 0x10104fbau); RETCHK(0x10104fbfu, 0x10104fbau); LOADALL;
  /* 10104fbf sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10104fc2 push 0x1010d2b0 */ { u32 v_ = 0x1010d2b0u; esp -= 4; M32(esp) = v_; }
  /* 10104fc7 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 10104fca call 0x10102b30 */ esp -= 4; M32(esp) = 0x10104fcfu; SAVEALL; F_10102b30(c); ABI_CHECK(0x10102b30u, 0x10104fcau); RETCHK(0x10104fcfu, 0x10104fcau); LOADALL;
  /* 10104fcf and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10104fd3 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 10104fd6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10104fd7 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 10104fda call 0x10102a70 */ esp -= 4; M32(esp) = 0x10104fdfu; SAVEALL; F_10102a70(c); ABI_CHECK(0x10102a70u, 0x10104fdau); RETCHK(0x10104fdfu, 0x10104fdau); LOADALL;
  /* 10104fdf push 0x1010eafc */ { u32 v_ = 0x1010eafcu; esp -= 4; M32(esp) = v_; }
  /* 10104fe4 lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 10104fe7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10104fe8 mov dword ptr [ebp - 0x50], 0x1010d2a8 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x1010d2a8u); }
  /* 10104fef call 0x10105ab6 */ esp -= 4; M32(esp) = 0x10104ff4u; SAVEALL; F_10105ab6(c); ABI_CHECK(0x10105ab6u, 0x10104fefu); RETCHK(0x10104ff4u, 0x10104fefu); LOADALL;
  /* 10104ff4 int3 */ TRAP(0x10104ff4u, "int3");
}

void F_10104ff5(CPU *c) {
  NATIVE_HOOK(0x10104ff5u) REGS; LOADALL;
L_10104ff5:;
  /* 10104ff5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10104ff6 push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10104ffa mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10104ffc call 0x10102c10 */ esp -= 4; M32(esp) = 0x10105001u; SAVEALL; F_10102c10(c); ABI_CHECK(0x10102c10u, 0x10104ffcu); RETCHK(0x10105001u, 0x10104ffcu); LOADALL;
  /* 10105001 mov dword ptr [esi], 0x1010d2a8 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1010d2a8u); }
  /* 10105007 mov eax, esi */ { eax = (u32)(esi); }
  /* 10105009 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010500a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_1010500d(CPU *c) {
  NATIVE_HOOK(0x1010500du) REGS; LOADALL;
L_1010500d:;
  /* 1010500d mov eax, 0x1010c87d */ { eax = (u32)(0x1010c87du); }
  /* 10105012 call 0x10106510 */ esp -= 4; M32(esp) = 0x10105017u; SAVEALL; F_10106510(c); ABI_CHECK(0x10106510u, 0x10105012u); RETCHK(0x10105017u, 0x10105012u); LOADALL;
  /* 10105017 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010501a push 0x1010d2c8 */ { u32 v_ = 0x1010d2c8u; esp -= 4; M32(esp) = v_; }
  /* 1010501f lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 10105022 call 0x10102b30 */ esp -= 4; M32(esp) = 0x10105027u; SAVEALL; F_10102b30(c); ABI_CHECK(0x10102b30u, 0x10105022u); RETCHK(0x10105027u, 0x10105022u); LOADALL;
  /* 10105027 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010502b lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 1010502e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010502f lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 10105032 call 0x10102a70 */ esp -= 4; M32(esp) = 0x10105037u; SAVEALL; F_10102a70(c); ABI_CHECK(0x10102a70u, 0x10105032u); RETCHK(0x10105037u, 0x10105032u); LOADALL;
  /* 10105037 push 0x1010e8e0 */ { u32 v_ = 0x1010e8e0u; esp -= 4; M32(esp) = v_; }
  /* 1010503c lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 1010503f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105040 mov dword ptr [ebp - 0x50], 0x1010d29c */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x1010d29cu); }
  /* 10105047 call 0x10105ab6 */ esp -= 4; M32(esp) = 0x1010504cu; SAVEALL; F_10105ab6(c); ABI_CHECK(0x10105ab6u, 0x10105047u); RETCHK(0x1010504cu, 0x10105047u); LOADALL;
  /* 1010504c int3 */ TRAP(0x1010504cu, "int3");
}

void F_1010504d(CPU *c) {
  NATIVE_HOOK(0x1010504du) REGS; LOADALL;
L_1010504d:;
  /* 1010504d mov dword ptr [ecx], 0x1010d2dc */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x1010d2dcu); }
  /* 10105053 jmp 0x10105b88 */ SAVEALL; F_10105b88(c); return;
}

void F_10105058(CPU *c) {
  NATIVE_HOOK(0x10105058u) REGS; LOADALL;
L_10105058:;
  /* 10105058 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105059 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1010505b call 0x1010504d */ esp -= 4; M32(esp) = 0x10105060u; SAVEALL; F_1010504d(c); ABI_CHECK(0x1010504du, 0x1010505bu); RETCHK(0x10105060u, 0x1010505bu); LOADALL;
  /* 10105060 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10105065 je 0x1010506e */ if (ZF_) goto L_1010506e;
  /* 10105067 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105068 call 0x10105a9d */ esp -= 4; M32(esp) = 0x1010506du; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10105068u); RETCHK(0x1010506du, 0x10105068u); LOADALL;
  /* 1010506d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1010506e:;
  /* 1010506e mov eax, esi */ { eax = (u32)(esi); }
  /* 10105070 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105071 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10105074(CPU *c) {
  NATIVE_HOOK(0x10105074u) REGS; LOADALL;
L_10105074:;
  /* 10105074 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105075 push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105079 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1010507b call 0x10105b3e */ esp -= 4; M32(esp) = 0x10105080u; SAVEALL; F_10105b3e(c); ABI_CHECK(0x10105b3eu, 0x1010507bu); RETCHK(0x10105080u, 0x1010507bu); LOADALL;
  /* 10105080 mov dword ptr [esi], 0x1010d2dc */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1010d2dcu); }
  /* 10105086 mov eax, esi */ { eax = (u32)(esi); }
  /* 10105088 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105089 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_1010508c(CPU *c) {
  NATIVE_HOOK(0x1010508cu) REGS; LOADALL;
L_1010508c:;
  /* 1010508c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1010508d mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1010508f sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10105092 test byte ptr [0x10120ca0], 1 */ { const u32 m_ = (u32)(0x10120ca0u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10105099 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010509a mov esi, 0x1010d2dc */ { esi = (u32)(0x1010d2dcu); }
  /* 1010509f jne 0x101050ce */ if (!ZF_) goto L_101050ce;
  /* 101050a1 or dword ptr [0x10120ca0], 1 */ { const u32 m_ = (u32)(0x10120ca0u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101050a8 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 101050ab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101050ac mov ecx, 0x10120c94 */ { ecx = (u32)(0x10120c94u); }
  /* 101050b1 mov dword ptr [ebp - 4], 0x1010d2e4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1010d2e4u); }
  /* 101050b8 call 0x10105b01 */ esp -= 4; M32(esp) = 0x101050bdu; SAVEALL; F_10105b01(c); ABI_CHECK(0x10105b01u, 0x101050b8u); RETCHK(0x101050bdu, 0x101050b8u); LOADALL;
  /* 101050bd push 0x1010c8ba */ { u32 v_ = 0x1010c8bau; esp -= 4; M32(esp) = v_; }
  /* 101050c2 mov dword ptr [0x10120c94], esi */ { const u32 m_ = (u32)(0x10120c94u); M32(m_) = (u32)(esi); }
  /* 101050c8 call 0x10105d09 */ esp -= 4; M32(esp) = 0x101050cdu; SAVEALL; F_10105d09(c); ABI_CHECK(0x10105d09u, 0x101050c8u); RETCHK(0x101050cdu, 0x101050c8u); LOADALL;
  /* 101050cd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101050ce:;
  /* 101050ce push 0x10120c94 */ { u32 v_ = 0x10120c94u; esp -= 4; M32(esp) = v_; }
  /* 101050d3 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 101050d6 call 0x10105b3e */ esp -= 4; M32(esp) = 0x101050dbu; SAVEALL; F_10105b3e(c); ABI_CHECK(0x10105b3eu, 0x101050d6u); RETCHK(0x101050dbu, 0x101050d6u); LOADALL;
  /* 101050db push 0x1010eb58 */ { u32 v_ = 0x1010eb58u; esp -= 4; M32(esp) = v_; }
  /* 101050e0 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 101050e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101050e4 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 101050e7 call 0x10105ab6 */ esp -= 4; M32(esp) = 0x101050ecu; SAVEALL; F_10105ab6(c); ABI_CHECK(0x10105ab6u, 0x101050e7u); RETCHK(0x101050ecu, 0x101050e7u); LOADALL;
  /* 101050ec int3 */ TRAP(0x101050ecu, "int3");
}

void F_101050f0(CPU *c) {
  NATIVE_HOOK(0x101050f0u) REGS; LOADALL;
L_101050f0:;
  /* 101050f0 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 101050f4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101050f5 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101050f7 je 0x1010518f */ if (ZF_) goto L_1010518f;
  /* 101050fd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101050fe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101050ff mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10105101 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 10105105 test esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010510b mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 1010510f jne 0x1010511c */ if (!ZF_) goto L_1010511c;
  /* 10105111 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10105114 jne 0x1010519f */ if (!ZF_) goto L_1010519f;
  /* 1010511a jmp 0x10105143 */ goto L_10105143;
L_1010511c:;
  /* 1010511c mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010511e add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10105121 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105123 add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10105126 sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10105129 je 0x10105156 */ if (ZF_) goto L_10105156;
  /* 1010512b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010512d je 0x1010515e */ if (ZF_) goto L_1010515e;
  /* 1010512f test esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105135 jne 0x1010511c */ if (!ZF_) goto L_1010511c;
  /* 10105137 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10105139 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1010513c jne 0x1010519f */ if (!ZF_) goto L_1010519f;
L_1010513e:;
  /* 1010513e and ebx, 3 */ { u32 a_ = ebx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10105141 je 0x10105156 */ if (ZF_) goto L_10105156;
L_10105143:;
  /* 10105143 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105145 add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10105148 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010514a add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010514d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010514f je 0x10105188 */ if (ZF_) goto L_10105188;
  /* 10105151 sub ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10105154 jne 0x10105143 */ if (!ZF_) goto L_10105143;
L_10105156:;
  /* 10105156 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 1010515a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1010515b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010515c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010515d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010515e:;
  /* 1010515e test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105164 je 0x1010517c */ if (ZF_) goto L_1010517c;
L_10105166:;
  /* 10105166 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105168 add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010516b sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1010516e je 0x1010520c */ if (ZF_) goto L_1010520c;
  /* 10105174 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010517a jne 0x10105166 */ if (!ZF_) goto L_10105166;
L_1010517c:;
  /* 1010517c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 1010517e shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10105181 jne 0x101051f7 */ if (!ZF_) goto L_101051f7;
L_10105183:;
  /* 10105183 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105185 add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10105188:;
  /* 10105188 sub ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 1010518b jne 0x10105183 */ if (!ZF_) goto L_10105183;
  /* 1010518d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1010518e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_1010518f:;
  /* 1010518f mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105193 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105194 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105195:;
  /* 10105195 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10105197 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010519a sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1010519d je 0x1010513e */ if (ZF_) goto L_1010513e;
L_1010519f:;
  /* 1010519f mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 101051a4 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 101051a6 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 101051a8 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101051ab xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101051ad mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 101051af add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101051b2 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101051b7 je 0x10105195 */ if (ZF_) goto L_10105195;
  /* 101051b9 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101051bb je 0x101051e9 */ if (ZF_) goto L_101051e9;
  /* 101051bd test dh, dh */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = ((edx >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101051bf je 0x101051df */ if (ZF_) goto L_101051df;
  /* 101051c1 test edx, 0xff0000 */ { u32 a_ = edx, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101051c7 je 0x101051d5 */ if (ZF_) goto L_101051d5;
  /* 101051c9 test edx, 0xff000000 */ { u32 a_ = edx, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101051cf jne 0x10105195 */ if (!ZF_) goto L_10105195;
  /* 101051d1 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 101051d3 jmp 0x101051ed */ goto L_101051ed;
L_101051d5:;
  /* 101051d5 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 101051db mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 101051dd jmp 0x101051ed */ goto L_101051ed;
L_101051df:;
  /* 101051df and edx, 0xff */ { u32 a_ = edx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 101051e5 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 101051e7 jmp 0x101051ed */ goto L_101051ed;
L_101051e9:;
  /* 101051e9 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 101051eb mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
L_101051ed:;
  /* 101051ed add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101051f0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101051f2 sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101051f5 je 0x10105203 */ if (ZF_) goto L_10105203;
L_101051f7:;
  /* 101051f7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_101051f9:;
  /* 101051f9 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 101051fb add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101051fe sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10105201 jne 0x101051f9 */ if (!ZF_) goto L_101051f9;
L_10105203:;
  /* 10105203 and ebx, 3 */ { u32 a_ = ebx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10105206 jne 0x10105183 */ if (!ZF_) goto L_10105183;
L_1010520c:;
  /* 1010520c mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10105210 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10105211 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105212 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105213 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105214(CPU *c) {
  NATIVE_HOOK(0x10105214u) REGS; LOADALL;
L_10105214:;
  /* 10105214 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10105215 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10105217 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10105218 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10105219 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1010521c add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010521f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10105222 mov ebx, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); ebx = (u32)(M32(m_)); }
  /* 10105229 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 1010522b mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 10105231 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105234 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10105237 mov esp, dword ptr [ebx - 4] */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); esp = (u32)(M32(m_)); }
  /* 1010523a mov ebp, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebp = (u32)(M32(m_)); }
  /* 1010523d jmp eax */ { u32 t_ = eax; SAVEALL; call_ind(c, t_); return; }
}

void F_10105244(CPU *c) {
  NATIVE_HOOK(0x10105244u) REGS; LOADALL;
L_10105244:;
  /* 10105244 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 10105245 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105246 xchg dword ptr [esp], eax */ { const u32 m_ = (u32)(esp); u32 o_ = (u32)__atomic_exchange_n((u32 *)HP(m_), (u32)eax, __ATOMIC_SEQ_CST); eax = (u32)(o_); }
  /* 10105249 jmp eax */ { u32 t_ = eax; SAVEALL; call_ind(c, t_); return; }
}

void F_1010524b(CPU *c) {
  NATIVE_HOOK(0x1010524bu) REGS; LOADALL;
L_1010524b:;
  /* 1010524b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1010524c mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1010524e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010524f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10105250 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10105251 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105252 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10105253 mov esi, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); esi = (u32)(M32(m_)); }
  /* 1010525a mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 1010525d mov dword ptr [ebp - 8], 0x10105274 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x10105274u); }
  /* 10105264 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10105266 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105269 push dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010526c push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010526f call 0x1010c6fe */ esp -= 4; M32(esp) = 0x10105274u; SAVEALL; F_1010c6fe(c); ABI_CHECK(0x1010c6feu, 0x1010526fu); RETCHK(0x10105274u, 0x1010526fu); LOADALL;
  /* 10105274 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10105277 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 1010527a and eax, 0xfffffffd */ { u32 a_ = eax, b_ = 0xfffffffdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010527d mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10105280 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10105283 mov edi, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); edi = (u32)(M32(m_)); }
  /* 1010528a mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 1010528d mov dword ptr [ebx], edi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edi); }
  /* 1010528f mov dword ptr fs:[0], ebx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ebx); }
  /* 10105296 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105297 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105298 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10105299 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010529a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10105274(CPU *c) {
  NATIVE_HOOK(0x10105274u) REGS; LOADALL;
L_10105274:;
  /* 10105274 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10105277 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 1010527a and eax, 0xfffffffd */ { u32 a_ = eax, b_ = 0xfffffffdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010527d mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10105280 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10105283 mov edi, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); edi = (u32)(M32(m_)); }
  /* 1010528a mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 1010528d mov dword ptr [ebx], edi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edi); }
  /* 1010528f mov dword ptr fs:[0], ebx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ebx); }
  /* 10105296 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105297 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105298 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10105299 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010529a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_101052d3(CPU *c) {
  NATIVE_HOOK(0x101052d3u) REGS; LOADALL;
L_101052d3:;
  /* 101052d3 cld */ c->df = 0;
  /* 101052d4 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101052d8 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101052db cmp ecx, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101052e1 je 0x101052ef */ if (ZF_) goto L_101052ef;
  /* 101052e3 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 101052e7 or dword ptr [eax + 4], 8 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101052eb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101052ed inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101052ee ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101052ef:;
  /* 101052ef push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 101052f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101052f2 push dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052f5 push dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052f8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 101052fa push dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052fe push dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105301 push dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105305 call 0x10106d37 */ esp -= 4; M32(esp) = 0x1010530au; SAVEALL; F_10106d37(c); ABI_CHECK(0x10106d37u, 0x10105305u); RETCHK(0x1010530au, 0x10105305u); LOADALL;
  /* 1010530a add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010530d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010530e(CPU *c) {
  NATIVE_HOOK(0x1010530eu) REGS; LOADALL;
L_1010530e:;
  /* 1010530e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1010530f mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10105311 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10105314 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10105315 cmp dword ptr [ebp + 8], 0x123 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x123u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010531c jne 0x10105330 */ if (!ZF_) goto L_10105330;
  /* 1010531e mov eax, 0x101053a9 */ { eax = (u32)(0x101053a9u); }
  /* 10105323 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10105326 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 10105328 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010532a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010532b jmp 0x101053d2 */ goto L_101053d2;
L_10105330:;
  /* 10105330 and dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105334 mov dword ptr [ebp - 0x24], 0x101053d5 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x101053d5u); }
  /* 1010533b mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 10105340 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10105343 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10105346 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10105349 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1010534c mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 1010534f mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10105352 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10105355 mov eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); eax = (u32)(M32(m_)); }
  /* 10105358 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 1010535b and dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010535f and dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105363 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105367 mov dword ptr [ebp - 0xc], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(esp); }
  /* 1010536a mov dword ptr [ebp - 8], ebp */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebp); }
  /* 1010536d mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10105373 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 10105376 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 10105379 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 1010537f mov dword ptr [ebp - 0x34], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x1u); }
  /* 10105386 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105389 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 1010538c mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 1010538f mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 10105392 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 10105395 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105396 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105399 push dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010539b call 0x10106e12 */ esp -= 4; M32(esp) = 0x101053a0u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010539bu); RETCHK(0x101053a0u, 0x1010539bu); LOADALL;
  /* 101053a0 call dword ptr [eax + 0x74] */ { const u32 m_ = (u32)(eax + 0x74u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101053a3u; SAVEALL; call_ind(c, t_); RETCHK(0x101053a3u, 0x101053a0u); LOADALL; }
  /* 101053a3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101053a4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101053a5 and dword ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101053a9 cmp dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101053ad je 0x101053c6 */ if (ZF_) goto L_101053c6;
  /* 101053af mov ebx, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); ebx = (u32)(M32(m_)); }
  /* 101053b6 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 101053b8 mov ebx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ebx = (u32)(M32(m_)); }
  /* 101053bb mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 101053bd mov dword ptr fs:[0], ebx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ebx); }
  /* 101053c4 jmp 0x101053cf */ goto L_101053cf;
L_101053c6:;
  /* 101053c6 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 101053c9 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
L_101053cf:;
  /* 101053cf mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
L_101053d2:;
  /* 101053d2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101053d3 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101053d4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101053a9(CPU *c) {
  NATIVE_HOOK(0x101053a9u) REGS; LOADALL;
L_101053a9:;
  /* 101053a9 cmp dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101053ad je 0x101053c6 */ if (ZF_) goto L_101053c6;
  /* 101053af mov ebx, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); ebx = (u32)(M32(m_)); }
  /* 101053b6 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 101053b8 mov ebx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ebx = (u32)(M32(m_)); }
  /* 101053bb mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 101053bd mov dword ptr fs:[0], ebx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ebx); }
  /* 101053c4 jmp 0x101053cf */ goto L_101053cf;
L_101053c6:;
  /* 101053c6 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 101053c9 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
L_101053cf:;
  /* 101053cf mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 101053d2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101053d3 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101053d4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101053d5(CPU *c) {
  NATIVE_HOOK(0x101053d5u) REGS; LOADALL;
L_101053d5:;
  /* 101053d5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101053d6 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 101053d8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101053d9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101053da cld */ c->df = 0;
  /* 101053db mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 101053de mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 101053e1 cmp eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101053e7 je 0x10105400 */ if (ZF_) goto L_10105400;
  /* 101053e9 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101053ec mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 101053ef or eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101053f2 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101053f5 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 101053f8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101053fa inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101053fb jmp 0x10105484 */ goto L_10105484;
L_10105400:;
  /* 10105400 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105403 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 10105406 and eax, 0x66 */ { u32 a_ = eax, b_ = 0x66u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10105409 je 0x1010541a */ if (ZF_) goto L_1010541a;
  /* 1010540b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1010540e mov dword ptr [eax + 0x24], 1 */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(0x1u); }
  /* 10105415 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10105417 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10105418 jmp 0x10105484 */ goto L_10105484;
L_1010541a:;
  /* 1010541a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1010541c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1010541f push dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105422 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10105425 push dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105428 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1010542b push dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010542e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10105430 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105433 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10105436 push dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105439 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010543c call 0x10106d37 */ esp -= 4; M32(esp) = 0x10105441u; SAVEALL; F_10106d37(c); ABI_CHECK(0x10106d37u, 0x1010543cu); RETCHK(0x10105441u, 0x1010543cu); LOADALL;
  /* 10105441 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10105444 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10105447 cmp dword ptr [eax + 0x24], 0 */ { const u32 m_ = (u32)(eax + 0x24u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010544b jne 0x10105458 */ if (!ZF_) goto L_10105458;
  /* 1010544d push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105450 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105453 call 0x1010524b */ esp -= 4; M32(esp) = 0x10105458u; SAVEALL; F_1010524b(c); ABI_CHECK(0x1010524bu, 0x10105453u); RETCHK(0x10105458u, 0x10105453u); LOADALL;
L_10105458:;
  /* 10105458 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1010545a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1010545c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1010545e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10105460 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10105462 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10105465 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105466 push 0x123 */ { u32 v_ = 0x123u; esp -= 4; M32(esp) = v_; }
  /* 1010546b call 0x1010530e */ esp -= 4; M32(esp) = 0x10105470u; SAVEALL; F_1010530e(c); ABI_CHECK(0x1010530eu, 0x1010546bu); RETCHK(0x10105470u, 0x1010546bu); LOADALL;
  /* 10105470 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10105473 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10105476 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10105479 mov esp, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); esp = (u32)(M32(m_)); }
  /* 1010547c mov ebp, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); ebp = (u32)(M32(m_)); }
  /* 1010547f jmp eax */ { u32 t_ = eax; SAVEALL; call_ind(c, t_); return; }
L_10105484:;
  /* 10105484 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10105485 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105486 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105487(CPU *c) {
  NATIVE_HOOK(0x10105487u) REGS; LOADALL;
L_10105487:;
  /* 10105487 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10105488 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1010548a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010548b cmp dword ptr [ebp + 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010548f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10105490 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105491 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10105492 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10105495 mov esi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); esi = (u32)(M32(m_)); }
  /* 10105498 mov ebx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ebx = (u32)(M32(m_)); }
  /* 1010549b mov eax, esi */ { eax = (u32)(esi); }
  /* 1010549d mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 101054a0 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 101054a3 jl 0x101054dd */ if (LT_) goto L_101054dd;
L_101054a5:;
  /* 101054a5 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101054a8 jne 0x101054af */ if (!ZF_) goto L_101054af;
  /* 101054aa call 0x1010711d */ esp -= 4; M32(esp) = 0x101054afu; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x101054aau); RETCHK(0x101054afu, 0x101054aau); LOADALL;
L_101054af:;
  /* 101054af mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 101054b2 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101054b3 lea eax, [esi + esi*4] */ eax = (u32)((u32)(esi + esi * 4u));
  /* 101054b6 lea eax, [ebx + eax*4] */ eax = (u32)((u32)(ebx + eax * 4u));
  /* 101054b9 cmp dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101054bc jge 0x101054c3 */ if (!LT_) goto L_101054c3;
  /* 101054be cmp ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101054c1 jle 0x101054c8 */ if ((ZF_|LT_)) goto L_101054c8;
L_101054c3:;
  /* 101054c3 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101054c6 jne 0x101054d4 */ if (!ZF_) goto L_101054d4;
L_101054c8:;
  /* 101054c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101054cb dec dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101054ce mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 101054d1 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
L_101054d4:;
  /* 101054d4 cmp dword ptr [ebp + 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101054d8 jge 0x101054a5 */ if (!LT_) goto L_101054a5;
  /* 101054da mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
L_101054dd:;
  /* 101054dd mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 101054e0 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101054e1 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 101054e3 mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 101054e6 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 101054e8 cmp eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101054eb ja 0x101054f1 */ if (!(CF_|ZF_)) goto L_101054f1;
  /* 101054ed cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101054ef jbe 0x101054f6 */ if ((CF_|ZF_)) goto L_101054f6;
L_101054f1:;
  /* 101054f1 call 0x1010711d */ esp -= 4; M32(esp) = 0x101054f6u; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x101054f1u); RETCHK(0x101054f6u, 0x101054f1u); LOADALL;
L_101054f6:;
  /* 101054f6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101054f7 lea eax, [esi + esi*4] */ eax = (u32)((u32)(esi + esi * 4u));
  /* 101054fa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101054fb lea eax, [ebx + eax*4] */ eax = (u32)((u32)(ebx + eax * 4u));
  /* 101054fe pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101054ff leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105500 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105501(CPU *c) {
  NATIVE_HOOK(0x10105501u) REGS; LOADALL;
L_10105501:;
  /* 10105501 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105505 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105506 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 1010550a mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 1010550c call 0x10106e12 */ esp -= 4; M32(esp) = 0x10105511u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010550cu); RETCHK(0x10105511u, 0x1010550cu); LOADALL;
  /* 10105511 mov eax, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); eax = (u32)(M32(m_)); }
  /* 10105517 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 1010551a call 0x10106e12 */ esp -= 4; M32(esp) = 0x1010551fu; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010551au); RETCHK(0x1010551fu, 0x1010551au); LOADALL;
  /* 1010551f mov dword ptr [eax + 0x88], esi */ { const u32 m_ = (u32)(eax + 0x88u); M32(m_) = (u32)(esi); }
  /* 10105525 mov eax, esi */ { eax = (u32)(esi); }
  /* 10105527 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105528 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105529(CPU *c) {
  NATIVE_HOOK(0x10105529u) REGS; LOADALL;
L_10105529:;
  /* 10105529 call 0x10106e12 */ esp -= 4; M32(esp) = 0x1010552eu; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10105529u); RETCHK(0x1010552eu, 0x10105529u); LOADALL;
  /* 1010552e mov eax, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); eax = (u32)(M32(m_)); }
  /* 10105534 jmp 0x10105541 */ goto L_10105541;
L_10105536:;
  /* 10105536 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10105538 cmp ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010553c je 0x10105547 */ if (ZF_) goto L_10105547;
  /* 1010553e mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
L_10105541:;
  /* 10105541 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105543 jne 0x10105536 */ if (!ZF_) goto L_10105536;
  /* 10105545 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10105546 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105547:;
  /* 10105547 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10105549 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010554a(CPU *c) {
  NATIVE_HOOK(0x1010554au) REGS; LOADALL;
L_1010554a:;
  /* 1010554a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010554b call 0x10106e12 */ esp -= 4; M32(esp) = 0x10105550u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010554bu); RETCHK(0x10105550u, 0x1010554bu); LOADALL;
  /* 10105550 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10105554 cmp esi, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010555a jne 0x1010556c */ if (!ZF_) goto L_1010556c;
  /* 1010555c call 0x10106e12 */ esp -= 4; M32(esp) = 0x10105561u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010555cu); RETCHK(0x10105561u, 0x1010555cu); LOADALL;
  /* 10105561 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10105564 mov dword ptr [eax + 0x88], ecx */ { const u32 m_ = (u32)(eax + 0x88u); M32(m_) = (u32)(ecx); }
  /* 1010556a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010556b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010556c:;
  /* 1010556c call 0x10106e12 */ esp -= 4; M32(esp) = 0x10105571u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010556cu); RETCHK(0x10105571u, 0x1010556cu); LOADALL;
  /* 10105571 mov eax, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); eax = (u32)(M32(m_)); }
  /* 10105577 jmp 0x10105582 */ goto L_10105582;
L_10105579:;
  /* 10105579 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1010557c cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010557e je 0x1010558e */ if (ZF_) goto L_1010558e;
  /* 10105580 mov eax, ecx */ { eax = (u32)(ecx); }
L_10105582:;
  /* 10105582 cmp dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105586 jne 0x10105579 */ if (!ZF_) goto L_10105579;
  /* 10105588 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105589 jmp 0x1010711d */ SAVEALL; F_1010711d(c); return;
L_1010558e:;
  /* 1010558e mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10105591 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10105594 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105595 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105596(CPU *c) {
  NATIVE_HOOK(0x10105596u) REGS; LOADALL;
L_10105596:;
  /* 10105596 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10105597 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10105599 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010559c mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 101055a1 and dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101055a5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101055a8 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 101055ab mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 101055ae mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 101055b1 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 101055b4 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101055b5 mov dword ptr [ebp - 0x14], 0x101052d3 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x101052d3u); }
  /* 101055bc mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 101055bf mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 101055c2 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 101055c8 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 101055cb lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 101055ce mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 101055d4 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101055d7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101055d8 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101055db call 0x10107150 */ esp -= 4; M32(esp) = 0x101055e0u; SAVEALL; F_10107150(c); ABI_CHECK(0x10107150u, 0x101055dbu); RETCHK(0x101055e0u, 0x101055dbu); LOADALL;
  /* 101055e0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 101055e2 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 101055e5 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 101055eb mov eax, ecx */ { eax = (u32)(ecx); }
  /* 101055ed leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101055ee ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101055f0(CPU *c) {
  NATIVE_HOOK(0x101055f0u) REGS; LOADALL;
L_101055f0:;
  /* 101055f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101055f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 101055f3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101055f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101055f5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101055f6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101055f7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 101055f9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 101055fb push 0x10105608 */ { u32 v_ = 0x10105608u; esp -= 4; M32(esp) = v_; }
  /* 10105600 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105603 call 0x1010c6fe */ esp -= 4; M32(esp) = 0x10105608u; SAVEALL; F_1010c6fe(c); ABI_CHECK(0x1010c6feu, 0x10105603u); RETCHK(0x10105608u, 0x10105603u); LOADALL;
  /* 10105608 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10105609 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010560a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010560b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1010560c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 1010560e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010560f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105608(CPU *c) {
  NATIVE_HOOK(0x10105608u) REGS; LOADALL;
L_10105608:;
  /* 10105608 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10105609 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010560a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010560b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1010560c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 1010560e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010560f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105610(CPU *c) {
  NATIVE_HOOK(0x10105610u) REGS; LOADALL;
L_10105610:;
  /* 10105610 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10105614 test dword ptr [ecx + 4], 6 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010561b mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 10105620 je 0x10105631 */ if (ZF_) goto L_10105631;
  /* 10105622 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105626 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 1010562a mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 1010562c mov eax, 3 */ { eax = (u32)(0x3u); }
L_10105631:;
  /* 10105631 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105632(CPU *c) {
  NATIVE_HOOK(0x10105632u) REGS; LOADALL;
L_10105632:;
  /* 10105632 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10105633 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105634 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10105635 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10105639 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010563a push -2 */ { u32 v_ = 0xfffffffeu; esp -= 4; M32(esp) = v_; }
  /* 1010563c push 0x10105610 */ { u32 v_ = 0x10105610u; esp -= 4; M32(esp) = v_; }
  /* 10105641 push dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105648 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
L_1010564f:;
  /* 1010564f mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 10105653 mov ebx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10105656 mov esi, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); esi = (u32)(M32(m_)); }
  /* 10105659 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010565c je 0x1010568c */ if (ZF_) goto L_1010568c;
  /* 1010565e cmp esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105662 je 0x1010568c */ if (ZF_) goto L_1010568c;
  /* 10105664 lea esi, [esi + esi*2] */ esi = (u32)((u32)(esi + esi * 2u));
  /* 10105667 mov ecx, dword ptr [ebx + esi*4] */ { const u32 m_ = (u32)(ebx + esi * 4u); ecx = (u32)(M32(m_)); }
  /* 1010566a mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 1010566e mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 10105671 cmp dword ptr [ebx + esi*4 + 4], 0 */ { const u32 m_ = (u32)(ebx + esi * 4u + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105676 jne 0x1010568a */ if (!ZF_) goto L_1010568a;
  /* 10105678 push 0x101 */ { u32 v_ = 0x101u; esp -= 4; M32(esp) = v_; }
  /* 1010567d mov eax, dword ptr [ebx + esi*4 + 8] */ { const u32 m_ = (u32)(ebx + esi * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10105681 call 0x101056c6 */ esp -= 4; M32(esp) = 0x10105686u; SAVEALL; F_101056c6(c); ABI_CHECK(0x101056c6u, 0x10105681u); RETCHK(0x10105686u, 0x10105681u); LOADALL;
  /* 10105686 call dword ptr [ebx + esi*4 + 8] */ { const u32 m_ = (u32)(ebx + esi * 4u + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010568au; SAVEALL; call_ind(c, t_); RETCHK(0x1010568au, 0x10105686u); LOADALL; }
L_1010568a:;
  /* 1010568a jmp 0x1010564f */ goto L_1010564f;
L_1010568c:;
  /* 1010568c pop dword ptr fs:[0] */ { u32 v_ = M32(esp); esp += 4; const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = v_; }
  /* 10105693 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10105696 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105697 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105698 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10105699 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010569a(CPU *c) {
  NATIVE_HOOK(0x1010569au) REGS; LOADALL;
L_1010569a:;
  /* 1010569a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010569c mov ecx, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); ecx = (u32)(M32(m_)); }
  /* 101056a3 cmp dword ptr [ecx + 4], 0x10105610 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x10105610u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101056aa jne 0x101056bc */ if (!ZF_) goto L_101056bc;
  /* 101056ac mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 101056af mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 101056b2 cmp dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101056b5 jne 0x101056bc */ if (!ZF_) goto L_101056bc;
  /* 101056b7 mov eax, 1 */ { eax = (u32)(0x1u); }
L_101056bc:;
  /* 101056bc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101056bd(CPU *c) {
  NATIVE_HOOK(0x101056bdu) REGS; LOADALL;
L_101056bd:;
  /* 101056bd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101056be push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101056bf mov ebx, 0x101100e0 */ { ebx = (u32)(0x101100e0u); }
  /* 101056c4 jmp 0x101056d0 */ goto L_101056d0;
L_101056d0:;
  /* 101056d0 mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 101056d3 mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 101056d6 mov dword ptr [ebx + 0xc], ebp */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ebp); }
  /* 101056d9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101056da pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101056db ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101056c6(CPU *c) {
  NATIVE_HOOK(0x101056c6u) REGS; LOADALL;
L_101056c6:;
  /* 101056c6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101056c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101056c8 mov ebx, 0x101100e0 */ { ebx = (u32)(0x101100e0u); }
  /* 101056cd mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101056d0 mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 101056d3 mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 101056d6 mov dword ptr [ebx + 0xc], ebp */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ebp); }
  /* 101056d9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101056da pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101056db ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101056fb(CPU *c) {
  NATIVE_HOOK(0x101056fbu) REGS; LOADALL;
L_101056fb:;
  /* 101056fb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101056fd inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101056fe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101056ff(CPU *c) {
  NATIVE_HOOK(0x101056ffu) REGS; LOADALL;
L_101056ff:;
  /* 101056ff mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10105702 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105706 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10105708 call dword ptr [0x1010d010] */ { const u32 m_ = (u32)(0x1010d010u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010570eu; SAVEALL; call_ind(c, t_); RETCHK(0x1010570eu, 0x10105708u); LOADALL; }
}

void F_1010570f(CPU *c) {
  NATIVE_HOOK(0x1010570fu) REGS; LOADALL;
  goto L_1010570f;
L_101056de:;
  /* 101056de push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 101056e0 push 0x1010d2f8 */ { u32 v_ = 0x1010d2f8u; esp -= 4; M32(esp) = v_; }
  /* 101056e5 call 0x1010734c */ esp -= 4; M32(esp) = 0x101056eau; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x101056e5u); RETCHK(0x101056eau, 0x101056e5u); LOADALL;
  /* 101056ea and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101056ee push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 101056f0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 101056f2 call 0x10107202 */ esp -= 4; M32(esp) = 0x101056f7u; SAVEALL; F_10107202(c); ABI_CHECK(0x10107202u, 0x101056f2u); RETCHK(0x101056f7u, 0x101056f2u); LOADALL;
  /* 101056f7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101056f8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101056f9 jmp 0x10105702 */ goto L_10105702;
L_10105702:;
  /* 10105702 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105706 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10105708 call dword ptr [0x1010d010] */ { const u32 m_ = (u32)(0x1010d010u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010570eu; SAVEALL; call_ind(c, t_); RETCHK(0x1010570eu, 0x10105708u); LOADALL; }
L_1010570f:;
  /* 1010570f cmp ecx, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105715 jne 0x10105718 */ if (!ZF_) goto L_10105718;
  /* 10105717 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105718:;
  /* 10105718 jmp 0x101056de */ goto L_101056de;
}

void F_10105720(CPU *c) {
  NATIVE_HOOK(0x10105720u) REGS; LOADALL;
L_10105720:;
  /* 10105720 cmp eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105725 jae 0x10105735 */ if (!CF_) goto L_10105735;
  /* 10105727 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10105729 add eax, esp */ { u32 a_ = eax, b_ = esp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010572b add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010572e test dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105730 xchg esp, eax */ { u32 t_ = esp; esp = (u32)(eax); eax = (u32)(t_); }
  /* 10105731 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10105733 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105734 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105735:;
  /* 10105735 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10105736 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
L_1010573a:;
  /* 1010573a sub ecx, 0x1000 */ { u32 a_ = ecx, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10105740 sub eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10105745 test dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105747 cmp eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010574c jae 0x1010573a */ if (!CF_) goto L_1010573a;
  /* 1010574e sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10105750 mov eax, esp */ { eax = (u32)(esp); }
  /* 10105752 test dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105754 mov esp, ecx */ { esp = (u32)(ecx); }
  /* 10105756 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10105758 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 1010575b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010575c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105760(CPU *c) {
  NATIVE_HOOK(0x10105760u) REGS; LOADALL;
L_10105760:;
  /* 10105760 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10105761 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10105763 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10105764 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105765 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10105768 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1010576b mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 1010576e mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10105770 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10105772 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10105774 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105776 jbe 0x10105780 */ if ((CF_|ZF_)) goto L_10105780;
  /* 10105778 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010577a jb 0x101058fc */ if (CF_) goto L_101058fc;
L_10105780:;
  /* 10105780 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105786 jne 0x1010579c */ if (!ZF_) goto L_1010579c;
  /* 10105788 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1010578b and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1010578e cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105791 jb 0x101057bc */ if (CF_) goto L_101057bc;
  /* 10105793 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10105795 jmp dword ptr [edx*4 + 0x101058ac] */ { const u32 m_ = (u32)(edx * 4u + 0x101058acu); u32 t_ = M32(m_); switch (t_) { case 0x101058bcu: goto L_101058bc; case 0x101058c4u: goto L_101058c4; case 0x101058d0u: goto L_101058d0; case 0x101058e4u: goto L_101058e4; default: SAVEALL; call_ind(c, t_); return; } }
L_1010579c:;
  /* 1010579c mov eax, edi */ { eax = (u32)(edi); }
  /* 1010579e mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 101057a3 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101057a6 jb 0x101057b4 */ if (CF_) goto L_101057b4;
  /* 101057a8 and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101057ab add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101057ad jmp dword ptr [eax*4 + 0x101057c0] */ { const u32 m_ = (u32)(eax * 4u + 0x101057c0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_101057b4:;
  /* 101057b4 jmp dword ptr [ecx*4 + 0x101058bc] */ { const u32 m_ = (u32)(ecx * 4u + 0x101058bcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_101057bc:;
  /* 101057bc jmp dword ptr [ecx*4 + 0x10105840] */ { const u32 m_ = (u32)(ecx * 4u + 0x10105840u); u32 t_ = M32(m_); switch (t_) { case 0x10105860u: goto L_10105860; case 0x10105868u: goto L_10105868; case 0x10105870u: goto L_10105870; case 0x10105878u: goto L_10105878; case 0x10105880u: goto L_10105880; case 0x10105888u: goto L_10105888; case 0x10105890u: goto L_10105890; case 0x101058a3u: goto L_101058a3; default: SAVEALL; call_ind(c, t_); return; } }
L_10105860:;
  /* 10105860 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10105864 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10105868:;
  /* 10105868 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1010586c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10105870:;
  /* 10105870 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10105874 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10105878:;
  /* 10105878 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1010587c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10105880:;
  /* 10105880 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10105884 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10105888:;
  /* 10105888 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1010588c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10105890:;
  /* 10105890 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10105894 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10105898 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010589f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101058a1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_101058a3:;
  /* 101058a3 jmp dword ptr [edx*4 + 0x101058ac] */ { const u32 m_ = (u32)(edx * 4u + 0x101058acu); u32 t_ = M32(m_); switch (t_) { case 0x101058bcu: goto L_101058bc; case 0x101058c4u: goto L_101058c4; case 0x101058d0u: goto L_101058d0; case 0x101058e4u: goto L_101058e4; default: SAVEALL; call_ind(c, t_); return; } }
L_101058bc:;
  /* 101058bc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058c1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101058c4:;
  /* 101058c4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058c6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
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
L_101058fc:;
  /* 101058fc lea esi, [ecx + esi - 4] */ esi = (u32)((u32)(ecx + esi + 0xfffffffcu));
  /* 10105900 lea edi, [ecx + edi - 4] */ edi = (u32)((u32)(ecx + edi + 0xfffffffcu));
  /* 10105904 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010590a jne 0x10105930 */ if (!ZF_) goto L_10105930;
  /* 1010590c shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1010590f and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10105912 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105915 jb 0x10105924 */ if (CF_) goto L_10105924;
  /* 10105917 std */ c->df = 1;
  /* 10105918 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1010591a cld */ c->df = 0;
  /* 1010591b jmp dword ptr [edx*4 + 0x10105a48] */ { const u32 m_ = (u32)(edx * 4u + 0x10105a48u); u32 t_ = M32(m_); switch (t_) { case 0x10105a58u: goto L_10105a58; case 0x10105a60u: goto L_10105a60; case 0x10105a70u: goto L_10105a70; case 0x10105a84u: goto L_10105a84; default: SAVEALL; call_ind(c, t_); return; } }
L_10105924:;
  /* 10105924 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10105926 jmp dword ptr [ecx*4 + 0x101059f8] */ { const u32 m_ = (u32)(ecx * 4u + 0x101059f8u); u32 t_ = M32(m_); switch (t_) { case 0x10105a3fu: goto L_10105a3f; default: SAVEALL; call_ind(c, t_); return; } }
L_10105930:;
  /* 10105930 mov eax, edi */ { eax = (u32)(edi); }
  /* 10105932 mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 10105937 cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010593a jb 0x10105948 */ if (CF_) goto L_10105948;
  /* 1010593c and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010593f sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10105941 jmp dword ptr [eax*4 + 0x1010594c] */ { const u32 m_ = (u32)(eax * 4u + 0x1010594cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10105948:;
  /* 10105948 jmp dword ptr [ecx*4 + 0x10105a48] */ { const u32 m_ = (u32)(ecx * 4u + 0x10105a48u); u32 t_ = M32(m_); switch (t_) { case 0x10105a58u: goto L_10105a58; case 0x10105a60u: goto L_10105a60; case 0x10105a70u: goto L_10105a70; case 0x10105a84u: goto L_10105a84; default: SAVEALL; call_ind(c, t_); return; } }
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

void F_101057c0(CPU *c) {
  NATIVE_HOOK(0x101057c0u) REGS; LOADALL;
L_101057c0:;
  /* 101057c0 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 101057c1 adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 101057c3 nop */ ;
  /* 101057c4 rcl byte ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); u32 n_ = (1u) & 31u; if (n_) { u32 a_ = M8(m_); u32 r_ = a_, cf_ = CF_; u32 of0_ = ((a_ >> 7) ^ cf_) & 1u; for (u32 j_ = n_ % 9u; j_; j_--) { u32 hi_ = (r_ >> 7) & 1u; r_ = ((r_ << 1) | cf_) & 0xffu; cf_ = hi_; } u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | ((((r_ >> 7) ^ cf_) & 1u) << 11); SETRAW(e_); M8(m_) = (u8)(r_); } }
  /* 101057c7 adc ah, bh */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((ebx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 101057c9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101057ca adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 101057cc and byte ptr [eax + 0x10], bl */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 101057cf adc byte ptr [ebx], ah */ { const u32 m_ = (u32)(ebx); u32 a_ = M8(m_), b_ = ((eax >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 101057d1 ror dword ptr [edx - 0x75f877fa], 1 */ { const u32 m_ = (u32)(edx + 0x8a078806u); u32 n_ = (1u) & 31u; if (n_) { u32 a_ = M32(m_); u32 k_ = n_ % 32u; u32 r_ = k_ ? (((a_ >> k_) | (a_ << (32u - k_))) & 0xffffffffu) : a_; u32 cf_ = (r_ >> 31) & 1u; u32 of_ = ((r_ >> 31) ^ (r_ >> 30)) & 1u; u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | (of_ << 11); SETRAW(e_); M32(m_) = (u32)(r_); } }
  /* 101057d7 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101057d8 add dword ptr [eax + 0x468a0147], ecx */ { const u32 m_ = (u32)(eax + 0x468a0147u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101057de add al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 101057e0 jmp 0x1257dfe7 */ TRAP(0x1257dfe7u, "bad jump target");
}

void F_101057d0(CPU *c) {
  NATIVE_HOOK(0x101057d0u) REGS; LOADALL;
  goto L_101057d0;
L_101057bc:;
  /* 101057bc jmp dword ptr [ecx*4 + 0x10105840] */ { const u32 m_ = (u32)(ecx * 4u + 0x10105840u); u32 t_ = M32(m_); switch (t_) { case 0x10105860u: goto L_10105860; case 0x10105868u: goto L_10105868; case 0x10105870u: goto L_10105870; case 0x10105878u: goto L_10105878; case 0x10105880u: goto L_10105880; case 0x10105888u: goto L_10105888; case 0x10105890u: goto L_10105890; case 0x101058a3u: goto L_101058a3; default: SAVEALL; call_ind(c, t_); return; } }
L_101057d0:;
  /* 101057d0 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 101057d2 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101057d4 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101057d6 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101057d9 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101057dc mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101057df shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 101057e2 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101057e5 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101057e8 add edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101057eb cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101057ee jb 0x101057bc */ if (CF_) goto L_101057bc;
  /* 101057f0 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 101057f2 jmp dword ptr [edx*4 + 0x101058ac] */ { const u32 m_ = (u32)(edx * 4u + 0x101058acu); u32 t_ = M32(m_); switch (t_) { case 0x101058bcu: goto L_101058bc; case 0x101058c4u: goto L_101058c4; case 0x101058d0u: goto L_101058d0; case 0x101058e4u: goto L_101058e4; default: SAVEALL; call_ind(c, t_); return; } }
L_10105860:;
  /* 10105860 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10105864 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10105868:;
  /* 10105868 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1010586c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10105870:;
  /* 10105870 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10105874 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10105878:;
  /* 10105878 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1010587c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10105880:;
  /* 10105880 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10105884 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10105888:;
  /* 10105888 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1010588c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10105890:;
  /* 10105890 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10105894 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10105898 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010589f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101058a1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_101058a3:;
  /* 101058a3 jmp dword ptr [edx*4 + 0x101058ac] */ { const u32 m_ = (u32)(edx * 4u + 0x101058acu); u32 t_ = M32(m_); switch (t_) { case 0x101058bcu: goto L_101058bc; case 0x101058c4u: goto L_101058c4; case 0x101058d0u: goto L_101058d0; case 0x101058e4u: goto L_101058e4; default: SAVEALL; call_ind(c, t_); return; } }
L_101058bc:;
  /* 101058bc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058c1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101058c4:;
  /* 101058c4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058c6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
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

void F_101057fc(CPU *c) {
  NATIVE_HOOK(0x101057fcu) REGS; LOADALL;
  goto L_101057fc;
L_101057bc:;
  /* 101057bc jmp dword ptr [ecx*4 + 0x10105840] */ { const u32 m_ = (u32)(ecx * 4u + 0x10105840u); u32 t_ = M32(m_); switch (t_) { case 0x10105860u: goto L_10105860; case 0x10105868u: goto L_10105868; case 0x10105870u: goto L_10105870; case 0x10105878u: goto L_10105878; case 0x10105880u: goto L_10105880; case 0x10105888u: goto L_10105888; case 0x10105890u: goto L_10105890; case 0x101058a3u: goto L_101058a3; default: SAVEALL; call_ind(c, t_); return; } }
L_101057fc:;
  /* 101057fc and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 101057fe mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105800 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105802 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105805 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10105808 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010580b add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1010580e add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10105811 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105814 jb 0x101057bc */ if (CF_) goto L_101057bc;
  /* 10105816 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10105818 jmp dword ptr [edx*4 + 0x101058ac] */ { const u32 m_ = (u32)(edx * 4u + 0x101058acu); u32 t_ = M32(m_); switch (t_) { case 0x101058bcu: goto L_101058bc; case 0x101058c4u: goto L_101058c4; case 0x101058d0u: goto L_101058d0; case 0x101058e4u: goto L_101058e4; default: SAVEALL; call_ind(c, t_); return; } }
L_10105860:;
  /* 10105860 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10105864 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10105868:;
  /* 10105868 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1010586c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10105870:;
  /* 10105870 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10105874 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10105878:;
  /* 10105878 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1010587c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10105880:;
  /* 10105880 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10105884 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10105888:;
  /* 10105888 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1010588c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10105890:;
  /* 10105890 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10105894 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10105898 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010589f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101058a1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_101058a3:;
  /* 101058a3 jmp dword ptr [edx*4 + 0x101058ac] */ { const u32 m_ = (u32)(edx * 4u + 0x101058acu); u32 t_ = M32(m_); switch (t_) { case 0x101058bcu: goto L_101058bc; case 0x101058c4u: goto L_101058c4; case 0x101058d0u: goto L_101058d0; case 0x101058e4u: goto L_101058e4; default: SAVEALL; call_ind(c, t_); return; } }
L_101058bc:;
  /* 101058bc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058c1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101058c4:;
  /* 101058c4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058c6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
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

void F_10105820(CPU *c) {
  NATIVE_HOOK(0x10105820u) REGS; LOADALL;
  goto L_10105820;
L_101057bc:;
  /* 101057bc jmp dword ptr [ecx*4 + 0x10105840] */ { const u32 m_ = (u32)(ecx * 4u + 0x10105840u); u32 t_ = M32(m_); switch (t_) { case 0x10105860u: goto L_10105860; case 0x10105868u: goto L_10105868; case 0x10105870u: goto L_10105870; case 0x10105878u: goto L_10105878; case 0x10105880u: goto L_10105880; case 0x10105888u: goto L_10105888; case 0x10105890u: goto L_10105890; case 0x101058a3u: goto L_101058a3; default: SAVEALL; call_ind(c, t_); return; } }
L_10105820:;
  /* 10105820 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10105822 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10105824 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10105826 add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10105829 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1010582c add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010582f cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105832 jb 0x101057bc */ if (CF_) goto L_101057bc;
  /* 10105834 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10105836 jmp dword ptr [edx*4 + 0x101058ac] */ { const u32 m_ = (u32)(edx * 4u + 0x101058acu); u32 t_ = M32(m_); switch (t_) { case 0x101058bcu: goto L_101058bc; case 0x101058c4u: goto L_101058c4; case 0x101058d0u: goto L_101058d0; case 0x101058e4u: goto L_101058e4; default: SAVEALL; call_ind(c, t_); return; } }
L_10105860:;
  /* 10105860 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10105864 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10105868:;
  /* 10105868 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1010586c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10105870:;
  /* 10105870 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10105874 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10105878:;
  /* 10105878 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1010587c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10105880:;
  /* 10105880 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10105884 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10105888:;
  /* 10105888 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1010588c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10105890:;
  /* 10105890 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10105894 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10105898 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010589f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101058a1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_101058a3:;
  /* 101058a3 jmp dword ptr [edx*4 + 0x101058ac] */ { const u32 m_ = (u32)(edx * 4u + 0x101058acu); u32 t_ = M32(m_); switch (t_) { case 0x101058bcu: goto L_101058bc; case 0x101058c4u: goto L_101058c4; case 0x101058d0u: goto L_101058d0; case 0x101058e4u: goto L_101058e4; default: SAVEALL; call_ind(c, t_); return; } }
L_101058bc:;
  /* 101058bc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058c1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101058c4:;
  /* 101058c4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058c6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
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

void F_10105840(CPU *c) {
  NATIVE_HOOK(0x10105840u) REGS; LOADALL;
L_10105840:;
  /* 10105840 mov dword ptr [0x90101058], eax */ { const u32 m_ = (u32)(0x90101058u); M32(m_) = (u32)(eax); }
  /* 10105845 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 10105846 adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10105848 mov byte ptr [eax + 0x10], bl */ { const u32 m_ = (u32)(eax + 0x10u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 1010584b adc byte ptr [eax + 0x78101058], al */ { const u32 m_ = (u32)(eax + 0x78101058u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10105851 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 10105852 adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10105854 jo 0x101058ae */ if (OF_) goto L_101058ae;
  /* 10105856 adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10105858 push 0x60101058 */ { u32 v_ = 0x60101058u; esp -= 4; M32(esp) = v_; }
  /* 1010585d pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 1010585e adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10105860 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10105864 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10105868 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1010586c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 10105870 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10105874 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10105878 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1010587c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10105880 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10105884 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10105888 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1010588c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10105890 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10105894 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10105898 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010589f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101058a1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101058a3 jmp dword ptr [edx*4 + 0x101058ac] */ { const u32 m_ = (u32)(edx * 4u + 0x101058acu); u32 t_ = M32(m_); switch (t_) { case 0x101058bcu: goto L_101058bc; case 0x101058c4u: goto L_101058c4; case 0x101058d0u: goto L_101058d0; case 0x101058e4u: goto L_101058e4; default: SAVEALL; call_ind(c, t_); return; } }
L_101058ae:;
  /* 101058ae adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 101058b0 les ebx, ptr [eax + 0x10] */ TRAP(0x101058b0u, "les");
L_101058bc:;
  /* 101058bc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058c1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101058c4:;
  /* 101058c4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058c6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
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

void F_10105860(CPU *c) {
  NATIVE_HOOK(0x10105860u) REGS; LOADALL;
L_10105860:;
  /* 10105860 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10105864 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10105868 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1010586c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 10105870 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10105874 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10105878 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1010587c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10105880 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10105884 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10105888 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1010588c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10105890 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10105894 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10105898 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010589f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101058a1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101058a3 jmp dword ptr [edx*4 + 0x101058ac] */ { const u32 m_ = (u32)(edx * 4u + 0x101058acu); u32 t_ = M32(m_); switch (t_) { case 0x101058bcu: goto L_101058bc; case 0x101058c4u: goto L_101058c4; case 0x101058d0u: goto L_101058d0; case 0x101058e4u: goto L_101058e4; default: SAVEALL; call_ind(c, t_); return; } }
L_101058bc:;
  /* 101058bc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058c1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101058c4:;
  /* 101058c4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058c6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
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

void F_10105868(CPU *c) {
  NATIVE_HOOK(0x10105868u) REGS; LOADALL;
L_10105868:;
  /* 10105868 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1010586c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 10105870 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10105874 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10105878 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1010587c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10105880 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10105884 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10105888 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1010588c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10105890 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10105894 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10105898 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010589f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101058a1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101058a3 jmp dword ptr [edx*4 + 0x101058ac] */ { const u32 m_ = (u32)(edx * 4u + 0x101058acu); u32 t_ = M32(m_); switch (t_) { case 0x101058bcu: goto L_101058bc; case 0x101058c4u: goto L_101058c4; case 0x101058d0u: goto L_101058d0; case 0x101058e4u: goto L_101058e4; default: SAVEALL; call_ind(c, t_); return; } }
L_101058bc:;
  /* 101058bc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058c1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101058c4:;
  /* 101058c4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058c6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
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

void F_10105870(CPU *c) {
  NATIVE_HOOK(0x10105870u) REGS; LOADALL;
L_10105870:;
  /* 10105870 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10105874 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10105878 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1010587c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10105880 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10105884 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10105888 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1010588c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10105890 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10105894 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10105898 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010589f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101058a1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101058a3 jmp dword ptr [edx*4 + 0x101058ac] */ { const u32 m_ = (u32)(edx * 4u + 0x101058acu); u32 t_ = M32(m_); switch (t_) { case 0x101058bcu: goto L_101058bc; case 0x101058c4u: goto L_101058c4; case 0x101058d0u: goto L_101058d0; case 0x101058e4u: goto L_101058e4; default: SAVEALL; call_ind(c, t_); return; } }
L_101058bc:;
  /* 101058bc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058c1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101058c4:;
  /* 101058c4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058c6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
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

void F_10105878(CPU *c) {
  NATIVE_HOOK(0x10105878u) REGS; LOADALL;
L_10105878:;
  /* 10105878 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1010587c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10105880 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10105884 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10105888 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1010588c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10105890 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10105894 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10105898 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010589f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101058a1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101058a3 jmp dword ptr [edx*4 + 0x101058ac] */ { const u32 m_ = (u32)(edx * 4u + 0x101058acu); u32 t_ = M32(m_); switch (t_) { case 0x101058bcu: goto L_101058bc; case 0x101058c4u: goto L_101058c4; case 0x101058d0u: goto L_101058d0; case 0x101058e4u: goto L_101058e4; default: SAVEALL; call_ind(c, t_); return; } }
L_101058bc:;
  /* 101058bc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058c1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101058c4:;
  /* 101058c4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058c6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
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

void F_10105880(CPU *c) {
  NATIVE_HOOK(0x10105880u) REGS; LOADALL;
L_10105880:;
  /* 10105880 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10105884 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10105888 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1010588c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10105890 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10105894 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10105898 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010589f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101058a1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101058a3 jmp dword ptr [edx*4 + 0x101058ac] */ { const u32 m_ = (u32)(edx * 4u + 0x101058acu); u32 t_ = M32(m_); switch (t_) { case 0x101058bcu: goto L_101058bc; case 0x101058c4u: goto L_101058c4; case 0x101058d0u: goto L_101058d0; case 0x101058e4u: goto L_101058e4; default: SAVEALL; call_ind(c, t_); return; } }
L_101058bc:;
  /* 101058bc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058c1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101058c4:;
  /* 101058c4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058c6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
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

void F_10105888(CPU *c) {
  NATIVE_HOOK(0x10105888u) REGS; LOADALL;
L_10105888:;
  /* 10105888 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1010588c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10105890 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10105894 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10105898 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010589f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101058a1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101058a3 jmp dword ptr [edx*4 + 0x101058ac] */ { const u32 m_ = (u32)(edx * 4u + 0x101058acu); u32 t_ = M32(m_); switch (t_) { case 0x101058bcu: goto L_101058bc; case 0x101058c4u: goto L_101058c4; case 0x101058d0u: goto L_101058d0; case 0x101058e4u: goto L_101058e4; default: SAVEALL; call_ind(c, t_); return; } }
L_101058bc:;
  /* 101058bc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058c1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101058c4:;
  /* 101058c4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058c6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
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

void F_10105890(CPU *c) {
  NATIVE_HOOK(0x10105890u) REGS; LOADALL;
L_10105890:;
  /* 10105890 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10105894 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10105898 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010589f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101058a1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101058a3 jmp dword ptr [edx*4 + 0x101058ac] */ { const u32 m_ = (u32)(edx * 4u + 0x101058acu); u32 t_ = M32(m_); switch (t_) { case 0x101058bcu: goto L_101058bc; case 0x101058c4u: goto L_101058c4; case 0x101058d0u: goto L_101058d0; case 0x101058e4u: goto L_101058e4; default: SAVEALL; call_ind(c, t_); return; } }
L_101058bc:;
  /* 101058bc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058c1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101058c4:;
  /* 101058c4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058c6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
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

void F_101058a3(CPU *c) {
  NATIVE_HOOK(0x101058a3u) REGS; LOADALL;
L_101058a3:;
  /* 101058a3 jmp dword ptr [edx*4 + 0x101058ac] */ { const u32 m_ = (u32)(edx * 4u + 0x101058acu); u32 t_ = M32(m_); switch (t_) { case 0x101058bcu: goto L_101058bc; case 0x101058c4u: goto L_101058c4; case 0x101058d0u: goto L_101058d0; case 0x101058e4u: goto L_101058e4; default: SAVEALL; call_ind(c, t_); return; } }
L_101058bc:;
  /* 101058bc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058c1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101058c4:;
  /* 101058c4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101058c6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101058c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
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

void F_101058ac(CPU *c) {
  NATIVE_HOOK(0x101058acu) REGS; LOADALL;
L_101058ac:;
  /* 101058ac mov esp, 0xc4101058 */ { esp = (u32)(0xc4101058u); }
  /* 101058b1 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 101058b2 adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 101058b4 rcr byte ptr [eax + 0x10], 1 */ { const u32 m_ = (u32)(eax + 0x10u); u32 n_ = (1u) & 31u; if (n_) { u32 a_ = M8(m_); u32 r_ = a_, cf_ = CF_; u32 of0_ = ((a_ >> 7) ^ cf_) & 1u; for (u32 j_ = n_ % 9u; j_; j_--) { u32 lo_ = r_ & 1u; r_ = (r_ >> 1) | (cf_ << 7); cf_ = lo_; } u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | ((of0_) << 11); SETRAW(e_); M8(m_) = (u8)(r_); } }
  /* 101058b7 adc ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 101058b9 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 101058ba adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 101058bc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101058bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101058c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101058c1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101058c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
