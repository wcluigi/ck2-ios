#include "funcs.h"

void F_0061d7be(CPU *c) {
  NATIVE_HOOK(0x61d7beu) REGS; LOADALL;
  goto L_0061d7be;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d7be:;
  /* 0061d7be mov eax, 0x65fad0 */ { eax = (u32)(0x65fad0u); }
  /* 0061d7c3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d7d0(CPU *c) {
  NATIVE_HOOK(0x61d7d0u) REGS; LOADALL;
L_0061d7d0:;
  /* 0061d7d0 mov eax, dword ptr [0x9ba6e0] */ { const u32 m_ = (u32)(0x9ba6e0u); eax = (u32)(M32(m_)); }
  /* 0061d7d5 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061d7d8 mov dword ptr [0x9ba6e0], eax */ { const u32 m_ = (u32)(0x9ba6e0u); M32(m_) = (u32)(eax); }
  /* 0061d7dd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061d7de(CPU *c) {
  NATIVE_HOOK(0x61d7deu) REGS; LOADALL;
  goto L_0061d7de;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d7de:;
  /* 0061d7de mov eax, 0x65faf4 */ { eax = (u32)(0x65faf4u); }
  /* 0061d7e3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d7f0(CPU *c) {
  NATIVE_HOOK(0x61d7f0u) REGS; LOADALL;
L_0061d7f0:;
  /* 0061d7f0 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0061d7f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061d7f4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061d7f7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061d7f8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61d7fdu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61d7f8u); RETCHK(0x61d7fdu, 0x61d7f8u); LOADALL;
  /* 0061d7fd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061d800 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061d801(CPU *c) {
  NATIVE_HOOK(0x61d801u) REGS; LOADALL;
  goto L_0061d801;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d801:;
  /* 0061d801 mov eax, 0x65fb70 */ { eax = (u32)(0x65fb70u); }
  /* 0061d806 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d810(CPU *c) {
  NATIVE_HOOK(0x61d810u) REGS; LOADALL;
L_0061d810:;
  /* 0061d810 lea esi, [ebp - 0x20] */ esi = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0061d813 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d818(CPU *c) {
  NATIVE_HOOK(0x61d818u) REGS; LOADALL;
  goto L_0061d818;
L_0054c450:;
  /* 0054c450 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054c453 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c455 je 0x54c460 */ if (ZF_) goto L_0054c460;
  /* 0054c457 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054c458 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54c45du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54c458u); RETCHK(0x54c45du, 0x54c458u); LOADALL;
  /* 0054c45d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054c460:;
  /* 0054c460 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0054c467 mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 0054c46e mov dword ptr [esi + 0x10], 0 */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(0x0u); }
  /* 0054c475 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061d818:;
  /* 0061d818 lea esi, [ebp - 0x34] */ esi = (u32)((u32)(ebp + 0xffffffccu));
  /* 0061d81b jmp 0x54c450 */ goto L_0054c450;
}

void F_0061d820(CPU *c) {
  NATIVE_HOOK(0x61d820u) REGS; LOADALL;
  goto L_0061d820;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d820:;
  /* 0061d820 mov eax, 0x65fbc0 */ { eax = (u32)(0x65fbc0u); }
  /* 0061d825 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d830(CPU *c) {
  NATIVE_HOOK(0x61d830u) REGS; LOADALL;
L_0061d830:;
  /* 0061d830 lea ecx, [ebp - 0xe0] */ ecx = (u32)((u32)(ebp + 0xffffff20u));
  /* 0061d836 jmp 0x41b9e0 */ SAVEALL; F_0041b9e0(c); return;
}

void F_0061d83b(CPU *c) {
  NATIVE_HOOK(0x61d83bu) REGS; LOADALL;
L_0061d83b:;
  /* 0061d83b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061d83e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d843(CPU *c) {
  NATIVE_HOOK(0x61d843u) REGS; LOADALL;
L_0061d843:;
  /* 0061d843 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061d846 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d84b(CPU *c) {
  NATIVE_HOOK(0x61d84bu) REGS; LOADALL;
L_0061d84b:;
  /* 0061d84b lea esi, [ebp - 0x90] */ esi = (u32)((u32)(ebp + 0xffffff70u));
  /* 0061d851 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0061d856(CPU *c) {
  NATIVE_HOOK(0x61d856u) REGS; LOADALL;
L_0061d856:;
  /* 0061d856 lea esi, [ebp - 0x6c] */ esi = (u32)((u32)(ebp + 0xffffff94u));
  /* 0061d859 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0061d85e(CPU *c) {
  NATIVE_HOOK(0x61d85eu) REGS; LOADALL;
  goto L_0061d85e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d85e:;
  /* 0061d85e mov eax, 0x65fc04 */ { eax = (u32)(0x65fc04u); }
  /* 0061d863 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d870(CPU *c) {
  NATIVE_HOOK(0x61d870u) REGS; LOADALL;
L_0061d870:;
  /* 0061d870 mov eax, dword ptr [0x9ba710] */ { const u32 m_ = (u32)(0x9ba710u); eax = (u32)(M32(m_)); }
  /* 0061d875 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061d878 mov dword ptr [0x9ba710], eax */ { const u32 m_ = (u32)(0x9ba710u); M32(m_) = (u32)(eax); }
  /* 0061d87d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061d87e(CPU *c) {
  NATIVE_HOOK(0x61d87eu) REGS; LOADALL;
  goto L_0061d87e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d87e:;
  /* 0061d87e mov eax, 0x65fc4c */ { eax = (u32)(0x65fc4cu); }
  /* 0061d883 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d890(CPU *c) {
  NATIVE_HOOK(0x61d890u) REGS; LOADALL;
L_0061d890:;
  /* 0061d890 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061d893 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d898(CPU *c) {
  NATIVE_HOOK(0x61d898u) REGS; LOADALL;
  goto L_0061d898;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d898:;
  /* 0061d898 mov eax, 0x65feb0 */ { eax = (u32)(0x65feb0u); }
  /* 0061d89d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d8b0(CPU *c) {
  NATIVE_HOOK(0x61d8b0u) REGS; LOADALL;
L_0061d8b0:;
  /* 0061d8b0 lea ecx, [ebp - 0xdc] */ ecx = (u32)((u32)(ebp + 0xffffff24u));
  /* 0061d8b6 jmp 0x41b9e0 */ SAVEALL; F_0041b9e0(c); return;
}

void F_0061d8bb(CPU *c) {
  NATIVE_HOOK(0x61d8bbu) REGS; LOADALL;
L_0061d8bb:;
  /* 0061d8bb lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061d8be jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d8c3(CPU *c) {
  NATIVE_HOOK(0x61d8c3u) REGS; LOADALL;
L_0061d8c3:;
  /* 0061d8c3 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061d8c6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d8cb(CPU *c) {
  NATIVE_HOOK(0x61d8cbu) REGS; LOADALL;
  goto L_0061d8cb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d8cb:;
  /* 0061d8cb mov eax, 0x65fee4 */ { eax = (u32)(0x65fee4u); }
  /* 0061d8d0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d8e0(CPU *c) {
  NATIVE_HOOK(0x61d8e0u) REGS; LOADALL;
L_0061d8e0:;
  /* 0061d8e0 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061d8e3 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d8e8(CPU *c) {
  NATIVE_HOOK(0x61d8e8u) REGS; LOADALL;
L_0061d8e8:;
  /* 0061d8e8 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061d8eb add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061d8ee jmp 0x5417b0 */ SAVEALL; F_005417b0(c); return;
}

void F_0061d8f3(CPU *c) {
  NATIVE_HOOK(0x61d8f3u) REGS; LOADALL;
  goto L_0061d8f3;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d8f3:;
  /* 0061d8f3 mov eax, 0x65ff10 */ { eax = (u32)(0x65ff10u); }
  /* 0061d8f8 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d900(CPU *c) {
  NATIVE_HOOK(0x61d900u) REGS; LOADALL;
L_0061d900:;
  /* 0061d900 mov eax, dword ptr [0x9ba720] */ { const u32 m_ = (u32)(0x9ba720u); eax = (u32)(M32(m_)); }
  /* 0061d905 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061d908 mov dword ptr [0x9ba720], eax */ { const u32 m_ = (u32)(0x9ba720u); M32(m_) = (u32)(eax); }
  /* 0061d90d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061d90e(CPU *c) {
  NATIVE_HOOK(0x61d90eu) REGS; LOADALL;
  goto L_0061d90e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d90e:;
  /* 0061d90e mov eax, 0x65ff7c */ { eax = (u32)(0x65ff7cu); }
  /* 0061d913 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d920(CPU *c) {
  NATIVE_HOOK(0x61d920u) REGS; LOADALL;
L_0061d920:;
  /* 0061d920 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d923 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0061d928(CPU *c) {
  NATIVE_HOOK(0x61d928u) REGS; LOADALL;
L_0061d928:;
  /* 0061d928 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d92b add ecx, 0x180 */ { u32 a_ = ecx, b_ = 0x180u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061d931 jmp 0x5267e0 */ SAVEALL; F_005267e0(c); return;
}

void F_0061d936(CPU *c) {
  NATIVE_HOOK(0x61d936u) REGS; LOADALL;
  goto L_0061d936;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d936:;
  /* 0061d936 mov eax, 0x65ffa8 */ { eax = (u32)(0x65ffa8u); }
  /* 0061d93b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d940(CPU *c) {
  NATIVE_HOOK(0x61d940u) REGS; LOADALL;
L_0061d940:;
  /* 0061d940 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061d943 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d948(CPU *c) {
  NATIVE_HOOK(0x61d948u) REGS; LOADALL;
L_0061d948:;
  /* 0061d948 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0061d94b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d950(CPU *c) {
  NATIVE_HOOK(0x61d950u) REGS; LOADALL;
  goto L_0061d950;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d950:;
  /* 0061d950 mov eax, 0x65ffd4 */ { eax = (u32)(0x65ffd4u); }
  /* 0061d955 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d960(CPU *c) {
  NATIVE_HOOK(0x61d960u) REGS; LOADALL;
L_0061d960:;
  /* 0061d960 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d963 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0061d968(CPU *c) {
  NATIVE_HOOK(0x61d968u) REGS; LOADALL;
L_0061d968:;
  /* 0061d968 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d96b add ecx, 0x190 */ { u32 a_ = ecx, b_ = 0x190u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061d971 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d976(CPU *c) {
  NATIVE_HOOK(0x61d976u) REGS; LOADALL;
L_0061d976:;
  /* 0061d976 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d979 add ecx, 0x1ac */ { u32 a_ = ecx, b_ = 0x1acu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061d97f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d984(CPU *c) {
  NATIVE_HOOK(0x61d984u) REGS; LOADALL;
  goto L_0061d984;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d984:;
  /* 0061d984 mov eax, 0x660034 */ { eax = (u32)(0x660034u); }
  /* 0061d989 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d990(CPU *c) {
  NATIVE_HOOK(0x61d990u) REGS; LOADALL;
  goto L_0061d990;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d990:;
  /* 0061d990 mov eax, 0x6600b8 */ { eax = (u32)(0x6600b8u); }
  /* 0061d995 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d9a0(CPU *c) {
  NATIVE_HOOK(0x61d9a0u) REGS; LOADALL;
L_0061d9a0:;
  /* 0061d9a0 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061d9a3 jmp 0x50bc50 */ SAVEALL; F_0050bc50(c); return;
}

void F_0061d9a8(CPU *c) {
  NATIVE_HOOK(0x61d9a8u) REGS; LOADALL;
  goto L_0061d9a8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d9a8:;
  /* 0061d9a8 mov eax, 0x660148 */ { eax = (u32)(0x660148u); }
  /* 0061d9ad jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d9c0(CPU *c) {
  NATIVE_HOOK(0x61d9c0u) REGS; LOADALL;
L_0061d9c0:;
  /* 0061d9c0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061d9c3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d9c8(CPU *c) {
  NATIVE_HOOK(0x61d9c8u) REGS; LOADALL;
L_0061d9c8:;
  /* 0061d9c8 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0061d9cb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d9d0(CPU *c) {
  NATIVE_HOOK(0x61d9d0u) REGS; LOADALL;
L_0061d9d0:;
  /* 0061d9d0 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061d9d3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d9d8(CPU *c) {
  NATIVE_HOOK(0x61d9d8u) REGS; LOADALL;
L_0061d9d8:;
  /* 0061d9d8 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 0061d9db jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d9e0(CPU *c) {
  NATIVE_HOOK(0x61d9e0u) REGS; LOADALL;
  goto L_0061d9e0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d9e0:;
  /* 0061d9e0 mov eax, 0x660184 */ { eax = (u32)(0x660184u); }
  /* 0061d9e5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d9f0(CPU *c) {
  NATIVE_HOOK(0x61d9f0u) REGS; LOADALL;
L_0061d9f0:;
  /* 0061d9f0 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0061d9f3 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d9f6 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0061d9fb(CPU *c) {
  NATIVE_HOOK(0x61d9fbu) REGS; LOADALL;
L_0061d9fb:;
  /* 0061d9fb mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0061d9fe add esi, 0x18 */ { u32 a_ = esi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061da01 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0061da06(CPU *c) {
  NATIVE_HOOK(0x61da06u) REGS; LOADALL;
L_0061da06:;
  /* 0061da06 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061da09 add ecx, 0x54 */ { u32 a_ = ecx, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061da0c jmp 0x530ae0 */ SAVEALL; F_00530ae0(c); return;
}

void F_0061da11(CPU *c) {
  NATIVE_HOOK(0x61da11u) REGS; LOADALL;
L_0061da11:;
  /* 0061da11 push 0x530b90 */ { u32 v_ = 0x530b90u; esp -= 4; M32(esp) = v_; }
  /* 0061da16 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0061da18 push 0x2c */ { u32 v_ = 0x2cu; esp -= 4; M32(esp) = v_; }
  /* 0061da1a mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0061da1d add eax, 0xe8 */ { u32 a_ = eax, b_ = 0xe8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061da22 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061da23 call 0x5fe890 */ esp -= 4; M32(esp) = 0x61da28u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x61da23u); RETCHK(0x61da28u, 0x61da23u); LOADALL;
  /* 0061da28 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061da29(CPU *c) {
  NATIVE_HOOK(0x61da29u) REGS; LOADALL;
L_0061da29:;
  /* 0061da29 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0061da2c add esi, 0x3b0 */ { u32 a_ = esi, b_ = 0x3b0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061da32 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061da37(CPU *c) {
  NATIVE_HOOK(0x61da37u) REGS; LOADALL;
L_0061da37:;
  /* 0061da37 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0061da3a add esi, 0x3c0 */ { u32 a_ = esi, b_ = 0x3c0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061da40 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061da45(CPU *c) {
  NATIVE_HOOK(0x61da45u) REGS; LOADALL;
  goto L_0061da45;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061da45:;
  /* 0061da45 mov eax, 0x6601d0 */ { eax = (u32)(0x6601d0u); }
  /* 0061da4a jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061da50(CPU *c) {
  NATIVE_HOOK(0x61da50u) REGS; LOADALL;
L_0061da50:;
  /* 0061da50 lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 0061da53 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061da58(CPU *c) {
  NATIVE_HOOK(0x61da58u) REGS; LOADALL;
L_0061da58:;
  /* 0061da58 lea ecx, [ebp - 0x4c4] */ ecx = (u32)((u32)(ebp + 0xfffffb3cu));
  /* 0061da5e jmp 0x41b9e0 */ SAVEALL; F_0041b9e0(c); return;
}

void F_0061da63(CPU *c) {
  NATIVE_HOOK(0x61da63u) REGS; LOADALL;
L_0061da63:;
  /* 0061da63 lea esi, [ebp - 0x38] */ esi = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0061da66 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0061da6b(CPU *c) {
  NATIVE_HOOK(0x61da6bu) REGS; LOADALL;
L_0061da6b:;
  /* 0061da6b lea ecx, [ebp - 0x47c] */ ecx = (u32)((u32)(ebp + 0xfffffb84u));
  /* 0061da71 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061da76(CPU *c) {
  NATIVE_HOOK(0x61da76u) REGS; LOADALL;
  goto L_0061da76;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061da76:;
  /* 0061da76 mov eax, 0x66020c */ { eax = (u32)(0x66020cu); }
  /* 0061da7b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061da80(CPU *c) {
  NATIVE_HOOK(0x61da80u) REGS; LOADALL;
L_0061da80:;
  /* 0061da80 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0061da83 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061da84 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061da87 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061da88 call 0x459c10 */ esp -= 4; M32(esp) = 0x61da8du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61da88u); RETCHK(0x61da8du, 0x61da88u); LOADALL;
  /* 0061da8d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061da90 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061da91(CPU *c) {
  NATIVE_HOOK(0x61da91u) REGS; LOADALL;
  goto L_0061da91;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061da91:;
  /* 0061da91 mov eax, 0x660264 */ { eax = (u32)(0x660264u); }
  /* 0061da96 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061daa0(CPU *c) {
  NATIVE_HOOK(0x61daa0u) REGS; LOADALL;
L_0061daa0:;
  /* 0061daa0 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0061daa3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061daa4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061daa7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061daa8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61daadu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61daa8u); RETCHK(0x61daadu, 0x61daa8u); LOADALL;
  /* 0061daad add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061dab0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061dab1(CPU *c) {
  NATIVE_HOOK(0x61dab1u) REGS; LOADALL;
  goto L_0061dab1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dab1:;
  /* 0061dab1 mov eax, 0x6602bc */ { eax = (u32)(0x6602bcu); }
  /* 0061dab6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061dac0(CPU *c) {
  NATIVE_HOOK(0x61dac0u) REGS; LOADALL;
L_0061dac0:;
  /* 0061dac0 lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0061dac3 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0061dac8(CPU *c) {
  NATIVE_HOOK(0x61dac8u) REGS; LOADALL;
L_0061dac8:;
  /* 0061dac8 lea esi, [ebp - 0x6c] */ esi = (u32)((u32)(ebp + 0xffffff94u));
  /* 0061dacb jmp 0x442b90 */ SAVEALL; F_00442b90(c); return;
}

void F_0061dad0(CPU *c) {
  NATIVE_HOOK(0x61dad0u) REGS; LOADALL;
  goto L_0061dad0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dad0:;
  /* 0061dad0 mov eax, 0x660330 */ { eax = (u32)(0x660330u); }
  /* 0061dad5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061dae0(CPU *c) {
  NATIVE_HOOK(0x61dae0u) REGS; LOADALL;
L_0061dae0:;
  /* 0061dae0 lea esi, [ebp - 0xac] */ esi = (u32)((u32)(ebp + 0xffffff54u));
  /* 0061dae6 jmp 0x529870 */ SAVEALL; F_00529870(c); return;
}

void F_0061daeb(CPU *c) {
  NATIVE_HOOK(0x61daebu) REGS; LOADALL;
  goto L_0061daeb;
L_0052acf0:;
  /* 0052acf0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052acf1 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052acf3 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052acf6 call 0x529870 */ esp -= 4; M32(esp) = 0x52acfbu; SAVEALL; F_00529870(c); ABI_CHECK(0x529870u, 0x52acf6u); RETCHK(0x52acfbu, 0x52acf6u); LOADALL;
  /* 0052acfb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052acfc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061daeb:;
  /* 0061daeb lea eax, [ebp - 0x14c] */ eax = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0061daf1 jmp 0x52acf0 */ goto L_0052acf0;
}

void F_0061daf6(CPU *c) {
  NATIVE_HOOK(0x61daf6u) REGS; LOADALL;
  goto L_0061daf6;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061daf6:;
  /* 0061daf6 mov eax, 0x66035c */ { eax = (u32)(0x66035cu); }
  /* 0061dafb jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061db00(CPU *c) {
  NATIVE_HOOK(0x61db00u) REGS; LOADALL;
  goto L_0061db00;
L_00527b40:;
  /* 00527b40 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00527b41 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00527b43 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00527b46 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00527b48 mov dword ptr [esi], 0x652f44 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x652f44u); }
  /* 00527b4e je 0x527b60 */ if (ZF_) goto L_00527b60;
  /* 00527b50 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527b51 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x527b56u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x527b51u); RETCHK(0x527b56u, 0x527b51u); LOADALL;
  /* 00527b56 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00527b59 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
L_00527b60:;
  /* 00527b60 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00527b61 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061db00:;
  /* 0061db00 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0061db03 jmp 0x527b40 */ goto L_00527b40;
}

void F_0061db08(CPU *c) {
  NATIVE_HOOK(0x61db08u) REGS; LOADALL;
  goto L_0061db08;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061db08:;
  /* 0061db08 mov eax, 0x660380 */ { eax = (u32)(0x660380u); }
  /* 0061db0d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061db20(CPU *c) {
  NATIVE_HOOK(0x61db20u) REGS; LOADALL;
L_0061db20:;
  /* 0061db20 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061db23 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0061db28(CPU *c) {
  NATIVE_HOOK(0x61db28u) REGS; LOADALL;
L_0061db28:;
  /* 0061db28 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061db2b add ecx, 0x180 */ { u32 a_ = ecx, b_ = 0x180u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061db31 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061db36(CPU *c) {
  NATIVE_HOOK(0x61db36u) REGS; LOADALL;
L_0061db36:;
  /* 0061db36 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061db39 add ecx, 0x1f4 */ { u32 a_ = ecx, b_ = 0x1f4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061db3f jmp 0x5267e0 */ SAVEALL; F_005267e0(c); return;
}

void F_0061db44(CPU *c) {
  NATIVE_HOOK(0x61db44u) REGS; LOADALL;
  goto L_0061db44;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061db44:;
  /* 0061db44 mov eax, 0x6603b4 */ { eax = (u32)(0x6603b4u); }
  /* 0061db49 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061db50(CPU *c) {
  NATIVE_HOOK(0x61db50u) REGS; LOADALL;
L_0061db50:;
  /* 0061db50 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061db53 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0061db58(CPU *c) {
  NATIVE_HOOK(0x61db58u) REGS; LOADALL;
L_0061db58:;
  /* 0061db58 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061db5b add ecx, 0x20c */ { u32 a_ = ecx, b_ = 0x20cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061db61 jmp 0x5267e0 */ SAVEALL; F_005267e0(c); return;
}

void F_0061db66(CPU *c) {
  NATIVE_HOOK(0x61db66u) REGS; LOADALL;
L_0061db66:;
  /* 0061db66 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061db69 add ecx, 0x2a8 */ { u32 a_ = ecx, b_ = 0x2a8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061db6f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061db74(CPU *c) {
  NATIVE_HOOK(0x61db74u) REGS; LOADALL;
L_0061db74:;
  /* 0061db74 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061db77 add ecx, 0x2d4 */ { u32 a_ = ecx, b_ = 0x2d4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061db7d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061db82(CPU *c) {
  NATIVE_HOOK(0x61db82u) REGS; LOADALL;
  goto L_0061db82;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061db82:;
  /* 0061db82 mov eax, 0x6603f0 */ { eax = (u32)(0x6603f0u); }
  /* 0061db87 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061db90(CPU *c) {
  NATIVE_HOOK(0x61db90u) REGS; LOADALL;
L_0061db90:;
  /* 0061db90 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061db93 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0061db98(CPU *c) {
  NATIVE_HOOK(0x61db98u) REGS; LOADALL;
  goto L_0061db98;
L_00502310:;
  /* 00502310 cmp dword ptr [esi + 0x18], 8 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502314 jb 0x502322 */ if (CF_) goto L_00502322;
  /* 00502316 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00502319 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050231a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50231fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50231au); RETCHK(0x50231fu, 0x50231au); LOADALL;
  /* 0050231f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00502322:;
  /* 00502322 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00502324 mov dword ptr [esi + 0x18], 7 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x7u); }
  /* 0050232b mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0050232e mov word ptr [esi + 4], ax */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00502332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061db98:;
  /* 0061db98 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061db9b add esi, 0x184 */ { u32 a_ = esi, b_ = 0x184u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061dba1 jmp 0x502310 */ goto L_00502310;
}

void F_0061dba6(CPU *c) {
  NATIVE_HOOK(0x61dba6u) REGS; LOADALL;
L_0061dba6:;
  /* 0061dba6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061dba9 add ecx, 0x1dc */ { u32 a_ = ecx, b_ = 0x1dcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061dbaf jmp 0x5267e0 */ SAVEALL; F_005267e0(c); return;
}

void F_0061dbb4(CPU *c) {
  NATIVE_HOOK(0x61dbb4u) REGS; LOADALL;
L_0061dbb4:;
  /* 0061dbb4 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061dbb7 add ecx, 0x270 */ { u32 a_ = ecx, b_ = 0x270u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061dbbd jmp 0x527610 */ SAVEALL; F_00527610(c); return;
}

void F_0061dbc2(CPU *c) {
  NATIVE_HOOK(0x61dbc2u) REGS; LOADALL;
  goto L_0061dbc2;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dbc2:;
  /* 0061dbc2 mov eax, 0x66042c */ { eax = (u32)(0x66042cu); }
  /* 0061dbc7 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061dbd0(CPU *c) {
  NATIVE_HOOK(0x61dbd0u) REGS; LOADALL;
L_0061dbd0:;
  /* 0061dbd0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061dbd3 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0061dbd8(CPU *c) {
  NATIVE_HOOK(0x61dbd8u) REGS; LOADALL;
L_0061dbd8:;
  /* 0061dbd8 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061dbdb add ecx, 0x18c */ { u32 a_ = ecx, b_ = 0x18cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061dbe1 jmp 0x529300 */ SAVEALL; F_00529300(c); return;
}

void F_0061dbe6(CPU *c) {
  NATIVE_HOOK(0x61dbe6u) REGS; LOADALL;
L_0061dbe6:;
  /* 0061dbe6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061dbe9 add ecx, 0x194 */ { u32 a_ = ecx, b_ = 0x194u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061dbef jmp 0x5267e0 */ SAVEALL; F_005267e0(c); return;
}

void F_0061dbf4(CPU *c) {
  NATIVE_HOOK(0x61dbf4u) REGS; LOADALL;
  goto L_0061dbf4;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dbf4:;
  /* 0061dbf4 mov eax, 0x660460 */ { eax = (u32)(0x660460u); }
  /* 0061dbf9 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061dc00(CPU *c) {
  NATIVE_HOOK(0x61dc00u) REGS; LOADALL;
L_0061dc00:;
  /* 0061dc00 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061dc03 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0061dc08(CPU *c) {
  NATIVE_HOOK(0x61dc08u) REGS; LOADALL;
L_0061dc08:;
  /* 0061dc08 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061dc0b add ecx, 0x180 */ { u32 a_ = ecx, b_ = 0x180u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061dc11 jmp 0x529300 */ SAVEALL; F_00529300(c); return;
}

void F_0061dc16(CPU *c) {
  NATIVE_HOOK(0x61dc16u) REGS; LOADALL;
L_0061dc16:;
  /* 0061dc16 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061dc19 add ecx, 0x188 */ { u32 a_ = ecx, b_ = 0x188u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061dc1f jmp 0x5267e0 */ SAVEALL; F_005267e0(c); return;
}

void F_0061dc24(CPU *c) {
  NATIVE_HOOK(0x61dc24u) REGS; LOADALL;
L_0061dc24:;
  /* 0061dc24 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061dc27 add ecx, 0x238 */ { u32 a_ = ecx, b_ = 0x238u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061dc2d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061dc32(CPU *c) {
  NATIVE_HOOK(0x61dc32u) REGS; LOADALL;
  goto L_0061dc32;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dc32:;
  /* 0061dc32 mov eax, 0x6604c0 */ { eax = (u32)(0x6604c0u); }
  /* 0061dc37 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061dc40(CPU *c) {
  NATIVE_HOOK(0x61dc40u) REGS; LOADALL;
  goto L_0061dc40;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dc40:;
  /* 0061dc40 mov eax, 0x660510 */ { eax = (u32)(0x660510u); }
  /* 0061dc45 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061dc50(CPU *c) {
  NATIVE_HOOK(0x61dc50u) REGS; LOADALL;
  goto L_0061dc50;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dc50:;
  /* 0061dc50 mov eax, 0x660560 */ { eax = (u32)(0x660560u); }
  /* 0061dc55 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061dc60(CPU *c) {
  NATIVE_HOOK(0x61dc60u) REGS; LOADALL;
L_0061dc60:;
  /* 0061dc60 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061dc63 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0061dc68(CPU *c) {
  NATIVE_HOOK(0x61dc68u) REGS; LOADALL;
  goto L_0061dc68;
L_00519190:;
  /* 00519190 jmp 0x531490 */ SAVEALL; F_00531490(c); return;
L_0061dc68:;
  /* 0061dc68 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061dc6b add esi, 0x180 */ { u32 a_ = esi, b_ = 0x180u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061dc71 jmp 0x519190 */ goto L_00519190;
}

void F_0061dc76(CPU *c) {
  NATIVE_HOOK(0x61dc76u) REGS; LOADALL;
L_0061dc76:;
  /* 0061dc76 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061dc79 add ecx, 0x194 */ { u32 a_ = ecx, b_ = 0x194u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061dc7f jmp 0x401760 */ SAVEALL; F_00401760(c); return;
}

void F_0061dc84(CPU *c) {
  NATIVE_HOOK(0x61dc84u) REGS; LOADALL;
  goto L_0061dc84;
L_005191a0:;
  /* 005191a0 jmp 0x51ac20 */ SAVEALL; F_0051ac20(c); return;
L_0061dc84:;
  /* 0061dc84 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061dc87 add esi, 0x1a8 */ { u32 a_ = esi, b_ = 0x1a8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061dc8d jmp 0x5191a0 */ goto L_005191a0;
}

void F_0061dc92(CPU *c) {
  NATIVE_HOOK(0x61dc92u) REGS; LOADALL;
  goto L_0061dc92;
L_005191a0:;
  /* 005191a0 jmp 0x51ac20 */ SAVEALL; F_0051ac20(c); return;
L_0061dc92:;
  /* 0061dc92 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061dc95 add esi, 0x1bc */ { u32 a_ = esi, b_ = 0x1bcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061dc9b jmp 0x5191a0 */ goto L_005191a0;
}

void F_0061dca0(CPU *c) {
  NATIVE_HOOK(0x61dca0u) REGS; LOADALL;
L_0061dca0:;
  /* 0061dca0 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061dca3 add esi, 0x1d0 */ { u32 a_ = esi, b_ = 0x1d0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061dca9 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061dcae(CPU *c) {
  NATIVE_HOOK(0x61dcaeu) REGS; LOADALL;
L_0061dcae:;
  /* 0061dcae mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061dcb1 add ecx, 0x1e0 */ { u32 a_ = ecx, b_ = 0x1e0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061dcb7 jmp 0x5267e0 */ SAVEALL; F_005267e0(c); return;
}

void F_0061dcbc(CPU *c) {
  NATIVE_HOOK(0x61dcbcu) REGS; LOADALL;
  goto L_0061dcbc;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dcbc:;
  /* 0061dcbc mov eax, 0x6605b4 */ { eax = (u32)(0x6605b4u); }
  /* 0061dcc1 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061dcd0(CPU *c) {
  NATIVE_HOOK(0x61dcd0u) REGS; LOADALL;
L_0061dcd0:;
  /* 0061dcd0 mov eax, dword ptr [0x9ba9b4] */ { const u32 m_ = (u32)(0x9ba9b4u); eax = (u32)(M32(m_)); }
  /* 0061dcd5 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061dcd8 mov dword ptr [0x9ba9b4], eax */ { const u32 m_ = (u32)(0x9ba9b4u); M32(m_) = (u32)(eax); }
  /* 0061dcdd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061dcde(CPU *c) {
  NATIVE_HOOK(0x61dcdeu) REGS; LOADALL;
  goto L_0061dcde;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dcde:;
  /* 0061dcde mov eax, 0x6605d8 */ { eax = (u32)(0x6605d8u); }
  /* 0061dce3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061dcf0(CPU *c) {
  NATIVE_HOOK(0x61dcf0u) REGS; LOADALL;
L_0061dcf0:;
  /* 0061dcf0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061dcf3 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0061dcf8(CPU *c) {
  NATIVE_HOOK(0x61dcf8u) REGS; LOADALL;
L_0061dcf8:;
  /* 0061dcf8 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061dcfb add ecx, 0x180 */ { u32 a_ = ecx, b_ = 0x180u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061dd01 jmp 0x5267e0 */ SAVEALL; F_005267e0(c); return;
}

void F_0061dd06(CPU *c) {
  NATIVE_HOOK(0x61dd06u) REGS; LOADALL;
L_0061dd06:;
  /* 0061dd06 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061dd09 add esi, 0x214 */ { u32 a_ = esi, b_ = 0x214u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061dd0f jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061dd14(CPU *c) {
  NATIVE_HOOK(0x61dd14u) REGS; LOADALL;
L_0061dd14:;
  /* 0061dd14 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061dd17 add esi, 0x224 */ { u32 a_ = esi, b_ = 0x224u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061dd1d jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061dd22(CPU *c) {
  NATIVE_HOOK(0x61dd22u) REGS; LOADALL;
  goto L_0061dd22;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dd22:;
  /* 0061dd22 mov eax, 0x660614 */ { eax = (u32)(0x660614u); }
  /* 0061dd27 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061dd30(CPU *c) {
  NATIVE_HOOK(0x61dd30u) REGS; LOADALL;
L_0061dd30:;
  /* 0061dd30 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061dd33 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0061dd38(CPU *c) {
  NATIVE_HOOK(0x61dd38u) REGS; LOADALL;
L_0061dd38:;
  /* 0061dd38 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061dd3b add esi, 0x180 */ { u32 a_ = esi, b_ = 0x180u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061dd41 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061dd46(CPU *c) {
  NATIVE_HOOK(0x61dd46u) REGS; LOADALL;
  goto L_0061dd46;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dd46:;
  /* 0061dd46 mov eax, 0x660640 */ { eax = (u32)(0x660640u); }
  /* 0061dd4b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061dd50(CPU *c) {
  NATIVE_HOOK(0x61dd50u) REGS; LOADALL;
L_0061dd50:;
  /* 0061dd50 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061dd53 jmp 0x5363c0 */ SAVEALL; F_005363c0(c); return;
}

void F_0061dd58(CPU *c) {
  NATIVE_HOOK(0x61dd58u) REGS; LOADALL;
  goto L_0061dd58;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dd58:;
  /* 0061dd58 mov eax, 0x660664 */ { eax = (u32)(0x660664u); }
  /* 0061dd5d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061dd70(CPU *c) {
  NATIVE_HOOK(0x61dd70u) REGS; LOADALL;
L_0061dd70:;
  /* 0061dd70 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061dd73 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061dd74 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061dd77 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061dd78 call 0x459c10 */ esp -= 4; M32(esp) = 0x61dd7du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61dd78u); RETCHK(0x61dd7du, 0x61dd78u); LOADALL;
  /* 0061dd7d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061dd80 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061dd81(CPU *c) {
  NATIVE_HOOK(0x61dd81u) REGS; LOADALL;
  goto L_0061dd81;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dd81:;
  /* 0061dd81 mov eax, 0x6606bc */ { eax = (u32)(0x6606bcu); }
  /* 0061dd86 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061dd90(CPU *c) {
  NATIVE_HOOK(0x61dd90u) REGS; LOADALL;
L_0061dd90:;
  /* 0061dd90 lea esi, [ebp - 0x34] */ esi = (u32)((u32)(ebp + 0xffffffccu));
  /* 0061dd93 jmp 0x5577c0 */ SAVEALL; F_005577c0(c); return;
}

void F_0061dd98(CPU *c) {
  NATIVE_HOOK(0x61dd98u) REGS; LOADALL;
  goto L_0061dd98;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dd98:;
  /* 0061dd98 mov eax, 0x660748 */ { eax = (u32)(0x660748u); }
  /* 0061dd9d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ddb0(CPU *c) {
  NATIVE_HOOK(0x61ddb0u) REGS; LOADALL;
L_0061ddb0:;
  /* 0061ddb0 lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0061ddb3 jmp 0x5577c0 */ SAVEALL; F_005577c0(c); return;
}

void F_0061ddb8(CPU *c) {
  NATIVE_HOOK(0x61ddb8u) REGS; LOADALL;
  goto L_0061ddb8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ddb8:;
  /* 0061ddb8 mov eax, 0x66076c */ { eax = (u32)(0x66076cu); }
  /* 0061ddbd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ddd0(CPU *c) {
  NATIVE_HOOK(0x61ddd0u) REGS; LOADALL;
L_0061ddd0:;
  /* 0061ddd0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061ddd3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061ddd4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061ddd7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061ddd8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61ddddu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61ddd8u); RETCHK(0x61ddddu, 0x61ddd8u); LOADALL;
  /* 0061dddd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061dde0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061dde1(CPU *c) {
  NATIVE_HOOK(0x61dde1u) REGS; LOADALL;
  goto L_0061dde1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dde1:;
  /* 0061dde1 mov eax, 0x6607c4 */ { eax = (u32)(0x6607c4u); }
  /* 0061dde6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ddf0(CPU *c) {
  NATIVE_HOOK(0x61ddf0u) REGS; LOADALL;
L_0061ddf0:;
  /* 0061ddf0 lea esi, [ebp - 0x80] */ esi = (u32)((u32)(ebp + 0xffffff80u));
  /* 0061ddf3 jmp 0x50f600 */ SAVEALL; F_0050f600(c); return;
}

void F_0061ddf8(CPU *c) {
  NATIVE_HOOK(0x61ddf8u) REGS; LOADALL;
  goto L_0061ddf8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ddf8:;
  /* 0061ddf8 mov eax, 0x660850 */ { eax = (u32)(0x660850u); }
  /* 0061ddfd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061de10(CPU *c) {
  NATIVE_HOOK(0x61de10u) REGS; LOADALL;
L_0061de10:;
  /* 0061de10 lea esi, [ebp - 0x7c] */ esi = (u32)((u32)(ebp + 0xffffff84u));
  /* 0061de13 jmp 0x50f600 */ SAVEALL; F_0050f600(c); return;
}

void F_0061de18(CPU *c) {
  NATIVE_HOOK(0x61de18u) REGS; LOADALL;
  goto L_0061de18;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061de18:;
  /* 0061de18 mov eax, 0x660874 */ { eax = (u32)(0x660874u); }
  /* 0061de1d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061de30(CPU *c) {
  NATIVE_HOOK(0x61de30u) REGS; LOADALL;
L_0061de30:;
  /* 0061de30 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061de33 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0061de38(CPU *c) {
  NATIVE_HOOK(0x61de38u) REGS; LOADALL;
L_0061de38:;
  /* 0061de38 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061de3b add ecx, 0x198 */ { u32 a_ = ecx, b_ = 0x198u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061de41 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061de46(CPU *c) {
  NATIVE_HOOK(0x61de46u) REGS; LOADALL;
L_0061de46:;
  /* 0061de46 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061de49 add ecx, 0x1b4 */ { u32 a_ = ecx, b_ = 0x1b4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061de4f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061de54(CPU *c) {
  NATIVE_HOOK(0x61de54u) REGS; LOADALL;
L_0061de54:;
  /* 0061de54 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061de57 add ecx, 0x1d0 */ { u32 a_ = ecx, b_ = 0x1d0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061de5d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061de62(CPU *c) {
  NATIVE_HOOK(0x61de62u) REGS; LOADALL;
  goto L_0061de62;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061de62:;
  /* 0061de62 mov eax, 0x6608d4 */ { eax = (u32)(0x6608d4u); }
  /* 0061de67 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061de70(CPU *c) {
  NATIVE_HOOK(0x61de70u) REGS; LOADALL;
L_0061de70:;
  /* 0061de70 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061de73 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0061de78(CPU *c) {
  NATIVE_HOOK(0x61de78u) REGS; LOADALL;
L_0061de78:;
  /* 0061de78 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061de7b add ecx, 0x180 */ { u32 a_ = ecx, b_ = 0x180u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061de81 jmp 0x527610 */ SAVEALL; F_00527610(c); return;
}

void F_0061de86(CPU *c) {
  NATIVE_HOOK(0x61de86u) REGS; LOADALL;
  goto L_0061de86;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061de86:;
  /* 0061de86 mov eax, 0x660900 */ { eax = (u32)(0x660900u); }
  /* 0061de8b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061de90(CPU *c) {
  NATIVE_HOOK(0x61de90u) REGS; LOADALL;
L_0061de90:;
  /* 0061de90 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061de93 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0061de98(CPU *c) {
  NATIVE_HOOK(0x61de98u) REGS; LOADALL;
L_0061de98:;
  /* 0061de98 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061de9b add ecx, 0x188 */ { u32 a_ = ecx, b_ = 0x188u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061dea1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061dea6(CPU *c) {
  NATIVE_HOOK(0x61dea6u) REGS; LOADALL;
L_0061dea6:;
  /* 0061dea6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061dea9 add ecx, 0x1a4 */ { u32 a_ = ecx, b_ = 0x1a4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061deaf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061deb4(CPU *c) {
  NATIVE_HOOK(0x61deb4u) REGS; LOADALL;
  goto L_0061deb4;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061deb4:;
  /* 0061deb4 mov eax, 0x660934 */ { eax = (u32)(0x660934u); }
  /* 0061deb9 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061dec0(CPU *c) {
  NATIVE_HOOK(0x61dec0u) REGS; LOADALL;
L_0061dec0:;
  /* 0061dec0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061dec3 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0061dec8(CPU *c) {
  NATIVE_HOOK(0x61dec8u) REGS; LOADALL;
L_0061dec8:;
  /* 0061dec8 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061decb add ecx, 0x184 */ { u32 a_ = ecx, b_ = 0x184u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061ded1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ded6(CPU *c) {
  NATIVE_HOOK(0x61ded6u) REGS; LOADALL;
L_0061ded6:;
  /* 0061ded6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061ded9 add ecx, 0x1a0 */ { u32 a_ = ecx, b_ = 0x1a0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061dedf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061dee4(CPU *c) {
  NATIVE_HOOK(0x61dee4u) REGS; LOADALL;
  goto L_0061dee4;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dee4:;
  /* 0061dee4 mov eax, 0x660968 */ { eax = (u32)(0x660968u); }
  /* 0061dee9 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061def0(CPU *c) {
  NATIVE_HOOK(0x61def0u) REGS; LOADALL;
L_0061def0:;
  /* 0061def0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061def3 jmp 0x50bc50 */ SAVEALL; F_0050bc50(c); return;
}

void F_0061def8(CPU *c) {
  NATIVE_HOOK(0x61def8u) REGS; LOADALL;
L_0061def8:;
  /* 0061def8 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061defb add ecx, 0x1cc */ { u32 a_ = ecx, b_ = 0x1ccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061df01 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061df06(CPU *c) {
  NATIVE_HOOK(0x61df06u) REGS; LOADALL;
L_0061df06:;
  /* 0061df06 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061df09 add ecx, 0x1e8 */ { u32 a_ = ecx, b_ = 0x1e8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061df0f jmp 0x527610 */ SAVEALL; F_00527610(c); return;
}

void F_0061df14(CPU *c) {
  NATIVE_HOOK(0x61df14u) REGS; LOADALL;
L_0061df14:;
  /* 0061df14 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061df17 add ecx, 0x294 */ { u32 a_ = ecx, b_ = 0x294u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061df1d jmp 0x527610 */ SAVEALL; F_00527610(c); return;
}

void F_0061df22(CPU *c) {
  NATIVE_HOOK(0x61df22u) REGS; LOADALL;
  goto L_0061df22;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061df22:;
  /* 0061df22 mov eax, 0x6609ec */ { eax = (u32)(0x6609ecu); }
  /* 0061df27 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061df30(CPU *c) {
  NATIVE_HOOK(0x61df30u) REGS; LOADALL;
L_0061df30:;
  /* 0061df30 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061df33 jmp 0x50bc50 */ SAVEALL; F_0050bc50(c); return;
}

void F_0061df38(CPU *c) {
  NATIVE_HOOK(0x61df38u) REGS; LOADALL;
L_0061df38:;
  /* 0061df38 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061df3b add esi, 0x1cc */ { u32 a_ = esi, b_ = 0x1ccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061df41 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061df46(CPU *c) {
  NATIVE_HOOK(0x61df46u) REGS; LOADALL;
L_0061df46:;
  /* 0061df46 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061df49 add ecx, 0x1dc */ { u32 a_ = ecx, b_ = 0x1dcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061df4f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
