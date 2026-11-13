#include "funcs.h"

void F_0062362c(CPU *c) {
  NATIVE_HOOK(0x62362cu) REGS; LOADALL;
L_0062362c:;
  /* 0062362c lea ecx, [ebp - 0x4f4] */ ecx = (u32)((u32)(ebp + 0xfffffb0cu));
  /* 00623632 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623637(CPU *c) {
  NATIVE_HOOK(0x623637u) REGS; LOADALL;
  goto L_00623637;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623637:;
  /* 00623637 mov eax, 0x66a770 */ { eax = (u32)(0x66a770u); }
  /* 0062363c jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623650(CPU *c) {
  NATIVE_HOOK(0x623650u) REGS; LOADALL;
L_00623650:;
  /* 00623650 lea ecx, [ebp - 0x268] */ ecx = (u32)((u32)(ebp + 0xfffffd98u));
  /* 00623656 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062365b(CPU *c) {
  NATIVE_HOOK(0x62365bu) REGS; LOADALL;
L_0062365b:;
  /* 0062365b lea ecx, [ebp - 0x268] */ ecx = (u32)((u32)(ebp + 0xfffffd98u));
  /* 00623661 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623666(CPU *c) {
  NATIVE_HOOK(0x623666u) REGS; LOADALL;
L_00623666:;
  /* 00623666 lea ecx, [ebp - 0x268] */ ecx = (u32)((u32)(ebp + 0xfffffd98u));
  /* 0062366c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623671(CPU *c) {
  NATIVE_HOOK(0x623671u) REGS; LOADALL;
L_00623671:;
  /* 00623671 lea ecx, [ebp - 0x268] */ ecx = (u32)((u32)(ebp + 0xfffffd98u));
  /* 00623677 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062367c(CPU *c) {
  NATIVE_HOOK(0x62367cu) REGS; LOADALL;
L_0062367c:;
  /* 0062367c lea ecx, [ebp - 0x268] */ ecx = (u32)((u32)(ebp + 0xfffffd98u));
  /* 00623682 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623687(CPU *c) {
  NATIVE_HOOK(0x623687u) REGS; LOADALL;
L_00623687:;
  /* 00623687 mov ecx, dword ptr [ebp - 0x26c] */ { const u32 m_ = (u32)(ebp + 0xfffffd94u); ecx = (u32)(M32(m_)); }
  /* 0062368d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623692(CPU *c) {
  NATIVE_HOOK(0x623692u) REGS; LOADALL;
L_00623692:;
  /* 00623692 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00623695 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062369a(CPU *c) {
  NATIVE_HOOK(0x62369au) REGS; LOADALL;
L_0062369a:;
  /* 0062369a mov ecx, dword ptr [ebp - 0x26c] */ { const u32 m_ = (u32)(ebp + 0xfffffd94u); ecx = (u32)(M32(m_)); }
  /* 006236a0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006236a5(CPU *c) {
  NATIVE_HOOK(0x6236a5u) REGS; LOADALL;
L_006236a5:;
  /* 006236a5 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006236a8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006236ad(CPU *c) {
  NATIVE_HOOK(0x6236adu) REGS; LOADALL;
L_006236ad:;
  /* 006236ad lea ecx, [ebp - 0x268] */ ecx = (u32)((u32)(ebp + 0xfffffd98u));
  /* 006236b3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006236b8(CPU *c) {
  NATIVE_HOOK(0x6236b8u) REGS; LOADALL;
L_006236b8:;
  /* 006236b8 lea ecx, [ebp - 0x268] */ ecx = (u32)((u32)(ebp + 0xfffffd98u));
  /* 006236be jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006236c3(CPU *c) {
  NATIVE_HOOK(0x6236c3u) REGS; LOADALL;
L_006236c3:;
  /* 006236c3 lea ecx, [ebp - 0x288] */ ecx = (u32)((u32)(ebp + 0xfffffd78u));
  /* 006236c9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006236ce(CPU *c) {
  NATIVE_HOOK(0x6236ceu) REGS; LOADALL;
L_006236ce:;
  /* 006236ce lea ecx, [ebp - 0x288] */ ecx = (u32)((u32)(ebp + 0xfffffd78u));
  /* 006236d4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006236d9(CPU *c) {
  NATIVE_HOOK(0x6236d9u) REGS; LOADALL;
L_006236d9:;
  /* 006236d9 lea ecx, [ebp - 0x268] */ ecx = (u32)((u32)(ebp + 0xfffffd98u));
  /* 006236df jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006236e4(CPU *c) {
  NATIVE_HOOK(0x6236e4u) REGS; LOADALL;
L_006236e4:;
  /* 006236e4 lea ecx, [ebp - 0x288] */ ecx = (u32)((u32)(ebp + 0xfffffd78u));
  /* 006236ea jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006236ef(CPU *c) {
  NATIVE_HOOK(0x6236efu) REGS; LOADALL;
  goto L_006236ef;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006236ef:;
  /* 006236ef mov eax, 0x66a850 */ { eax = (u32)(0x66a850u); }
  /* 006236f4 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623700(CPU *c) {
  NATIVE_HOOK(0x623700u) REGS; LOADALL;
L_00623700:;
  /* 00623700 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00623703 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623708(CPU *c) {
  NATIVE_HOOK(0x623708u) REGS; LOADALL;
L_00623708:;
  /* 00623708 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062370b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623710(CPU *c) {
  NATIVE_HOOK(0x623710u) REGS; LOADALL;
L_00623710:;
  /* 00623710 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00623713 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623718(CPU *c) {
  NATIVE_HOOK(0x623718u) REGS; LOADALL;
L_00623718:;
  /* 00623718 lea ecx, [ebp - 0x260] */ ecx = (u32)((u32)(ebp + 0xfffffda0u));
  /* 0062371e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623723(CPU *c) {
  NATIVE_HOOK(0x623723u) REGS; LOADALL;
L_00623723:;
  /* 00623723 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00623726 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062372b(CPU *c) {
  NATIVE_HOOK(0x62372bu) REGS; LOADALL;
L_0062372b:;
  /* 0062372b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062372e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623733(CPU *c) {
  NATIVE_HOOK(0x623733u) REGS; LOADALL;
L_00623733:;
  /* 00623733 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00623736 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062373b(CPU *c) {
  NATIVE_HOOK(0x62373bu) REGS; LOADALL;
L_0062373b:;
  /* 0062373b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062373e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623743(CPU *c) {
  NATIVE_HOOK(0x623743u) REGS; LOADALL;
L_00623743:;
  /* 00623743 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00623746 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062374b(CPU *c) {
  NATIVE_HOOK(0x62374bu) REGS; LOADALL;
L_0062374b:;
  /* 0062374b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062374e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623753(CPU *c) {
  NATIVE_HOOK(0x623753u) REGS; LOADALL;
L_00623753:;
  /* 00623753 lea ecx, [ebp - 0x260] */ ecx = (u32)((u32)(ebp + 0xfffffda0u));
  /* 00623759 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062375e(CPU *c) {
  NATIVE_HOOK(0x62375eu) REGS; LOADALL;
L_0062375e:;
  /* 0062375e lea ecx, [ebp - 0x260] */ ecx = (u32)((u32)(ebp + 0xfffffda0u));
  /* 00623764 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623769(CPU *c) {
  NATIVE_HOOK(0x623769u) REGS; LOADALL;
L_00623769:;
  /* 00623769 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062376c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623771(CPU *c) {
  NATIVE_HOOK(0x623771u) REGS; LOADALL;
L_00623771:;
  /* 00623771 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00623774 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623779(CPU *c) {
  NATIVE_HOOK(0x623779u) REGS; LOADALL;
L_00623779:;
  /* 00623779 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062377c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623781(CPU *c) {
  NATIVE_HOOK(0x623781u) REGS; LOADALL;
L_00623781:;
  /* 00623781 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00623784 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623789(CPU *c) {
  NATIVE_HOOK(0x623789u) REGS; LOADALL;
L_00623789:;
  /* 00623789 lea ecx, [ebp - 0x27c] */ ecx = (u32)((u32)(ebp + 0xfffffd84u));
  /* 0062378f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623794(CPU *c) {
  NATIVE_HOOK(0x623794u) REGS; LOADALL;
  goto L_00623794;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623794:;
  /* 00623794 mov eax, 0x66a8f8 */ { eax = (u32)(0x66a8f8u); }
  /* 00623799 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006237a0(CPU *c) {
  NATIVE_HOOK(0x6237a0u) REGS; LOADALL;
L_006237a0:;
  /* 006237a0 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 006237a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006237a4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6237a9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6237a4u); RETCHK(0x6237a9u, 0x6237a4u); LOADALL;
  /* 006237a9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006237aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006237ab(CPU *c) {
  NATIVE_HOOK(0x6237abu) REGS; LOADALL;
L_006237ab:;
  /* 006237ab lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006237ae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006237b3(CPU *c) {
  NATIVE_HOOK(0x6237b3u) REGS; LOADALL;
L_006237b3:;
  /* 006237b3 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006237b6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006237bb(CPU *c) {
  NATIVE_HOOK(0x6237bbu) REGS; LOADALL;
L_006237bb:;
  /* 006237bb lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006237be jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006237c3(CPU *c) {
  NATIVE_HOOK(0x6237c3u) REGS; LOADALL;
L_006237c3:;
  /* 006237c3 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006237c6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006237cb(CPU *c) {
  NATIVE_HOOK(0x6237cbu) REGS; LOADALL;
L_006237cb:;
  /* 006237cb lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006237ce jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006237d3(CPU *c) {
  NATIVE_HOOK(0x6237d3u) REGS; LOADALL;
L_006237d3:;
  /* 006237d3 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006237d6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006237db(CPU *c) {
  NATIVE_HOOK(0x6237dbu) REGS; LOADALL;
L_006237db:;
  /* 006237db lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006237de jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006237e3(CPU *c) {
  NATIVE_HOOK(0x6237e3u) REGS; LOADALL;
L_006237e3:;
  /* 006237e3 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006237e6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006237eb(CPU *c) {
  NATIVE_HOOK(0x6237ebu) REGS; LOADALL;
L_006237eb:;
  /* 006237eb lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006237ee jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006237f3(CPU *c) {
  NATIVE_HOOK(0x6237f3u) REGS; LOADALL;
L_006237f3:;
  /* 006237f3 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006237f6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006237fb(CPU *c) {
  NATIVE_HOOK(0x6237fbu) REGS; LOADALL;
L_006237fb:;
  /* 006237fb lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006237fe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623803(CPU *c) {
  NATIVE_HOOK(0x623803u) REGS; LOADALL;
L_00623803:;
  /* 00623803 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00623806 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062380b(CPU *c) {
  NATIVE_HOOK(0x62380bu) REGS; LOADALL;
L_0062380b:;
  /* 0062380b lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0062380e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623813(CPU *c) {
  NATIVE_HOOK(0x623813u) REGS; LOADALL;
L_00623813:;
  /* 00623813 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00623816 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062381b(CPU *c) {
  NATIVE_HOOK(0x62381bu) REGS; LOADALL;
L_0062381b:;
  /* 0062381b lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0062381e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623823(CPU *c) {
  NATIVE_HOOK(0x623823u) REGS; LOADALL;
L_00623823:;
  /* 00623823 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00623826 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062382b(CPU *c) {
  NATIVE_HOOK(0x62382bu) REGS; LOADALL;
L_0062382b:;
  /* 0062382b lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0062382e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623833(CPU *c) {
  NATIVE_HOOK(0x623833u) REGS; LOADALL;
L_00623833:;
  /* 00623833 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00623836 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062383b(CPU *c) {
  NATIVE_HOOK(0x62383bu) REGS; LOADALL;
L_0062383b:;
  /* 0062383b lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0062383e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623843(CPU *c) {
  NATIVE_HOOK(0x623843u) REGS; LOADALL;
L_00623843:;
  /* 00623843 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00623846 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062384b(CPU *c) {
  NATIVE_HOOK(0x62384bu) REGS; LOADALL;
L_0062384b:;
  /* 0062384b lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0062384e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623853(CPU *c) {
  NATIVE_HOOK(0x623853u) REGS; LOADALL;
L_00623853:;
  /* 00623853 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00623856 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062385b(CPU *c) {
  NATIVE_HOOK(0x62385bu) REGS; LOADALL;
L_0062385b:;
  /* 0062385b lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0062385e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623863(CPU *c) {
  NATIVE_HOOK(0x623863u) REGS; LOADALL;
L_00623863:;
  /* 00623863 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00623866 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062386b(CPU *c) {
  NATIVE_HOOK(0x62386bu) REGS; LOADALL;
L_0062386b:;
  /* 0062386b lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0062386e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623873(CPU *c) {
  NATIVE_HOOK(0x623873u) REGS; LOADALL;
L_00623873:;
  /* 00623873 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00623876 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062387b(CPU *c) {
  NATIVE_HOOK(0x62387bu) REGS; LOADALL;
L_0062387b:;
  /* 0062387b lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0062387e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623883(CPU *c) {
  NATIVE_HOOK(0x623883u) REGS; LOADALL;
L_00623883:;
  /* 00623883 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00623886 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062388b(CPU *c) {
  NATIVE_HOOK(0x62388bu) REGS; LOADALL;
L_0062388b:;
  /* 0062388b lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0062388e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623893(CPU *c) {
  NATIVE_HOOK(0x623893u) REGS; LOADALL;
L_00623893:;
  /* 00623893 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00623896 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062389b(CPU *c) {
  NATIVE_HOOK(0x62389bu) REGS; LOADALL;
L_0062389b:;
  /* 0062389b lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0062389e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006238a3(CPU *c) {
  NATIVE_HOOK(0x6238a3u) REGS; LOADALL;
L_006238a3:;
  /* 006238a3 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006238a6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006238ab(CPU *c) {
  NATIVE_HOOK(0x6238abu) REGS; LOADALL;
L_006238ab:;
  /* 006238ab lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006238ae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006238b3(CPU *c) {
  NATIVE_HOOK(0x6238b3u) REGS; LOADALL;
L_006238b3:;
  /* 006238b3 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006238b6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006238bb(CPU *c) {
  NATIVE_HOOK(0x6238bbu) REGS; LOADALL;
L_006238bb:;
  /* 006238bb lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006238be jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006238c3(CPU *c) {
  NATIVE_HOOK(0x6238c3u) REGS; LOADALL;
L_006238c3:;
  /* 006238c3 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006238c6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006238cb(CPU *c) {
  NATIVE_HOOK(0x6238cbu) REGS; LOADALL;
L_006238cb:;
  /* 006238cb lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006238ce jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006238d3(CPU *c) {
  NATIVE_HOOK(0x6238d3u) REGS; LOADALL;
L_006238d3:;
  /* 006238d3 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006238d6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006238db(CPU *c) {
  NATIVE_HOOK(0x6238dbu) REGS; LOADALL;
L_006238db:;
  /* 006238db lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006238de jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006238e3(CPU *c) {
  NATIVE_HOOK(0x6238e3u) REGS; LOADALL;
L_006238e3:;
  /* 006238e3 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006238e6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006238eb(CPU *c) {
  NATIVE_HOOK(0x6238ebu) REGS; LOADALL;
L_006238eb:;
  /* 006238eb lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006238ee jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006238f3(CPU *c) {
  NATIVE_HOOK(0x6238f3u) REGS; LOADALL;
L_006238f3:;
  /* 006238f3 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006238f6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006238fb(CPU *c) {
  NATIVE_HOOK(0x6238fbu) REGS; LOADALL;
  goto L_006238fb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006238fb:;
  /* 006238fb mov eax, 0x66aa70 */ { eax = (u32)(0x66aa70u); }
  /* 00623900 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623910(CPU *c) {
  NATIVE_HOOK(0x623910u) REGS; LOADALL;
L_00623910:;
  /* 00623910 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00623913 jmp 0x40db70 */ SAVEALL; F_0040db70(c); return;
}

void F_00623918(CPU *c) {
  NATIVE_HOOK(0x623918u) REGS; LOADALL;
  goto L_00623918;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623918:;
  /* 00623918 mov eax, 0x66aaf4 */ { eax = (u32)(0x66aaf4u); }
  /* 0062391d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623930(CPU *c) {
  NATIVE_HOOK(0x623930u) REGS; LOADALL;
L_00623930:;
  /* 00623930 lea esi, [ebp - 0x64] */ esi = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00623933 jmp 0x42c910 */ SAVEALL; F_0042c910(c); return;
}

void F_00623938(CPU *c) {
  NATIVE_HOOK(0x623938u) REGS; LOADALL;
  goto L_00623938;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623938:;
  /* 00623938 mov eax, 0x66ab18 */ { eax = (u32)(0x66ab18u); }
  /* 0062393d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623950(CPU *c) {
  NATIVE_HOOK(0x623950u) REGS; LOADALL;
L_00623950:;
  /* 00623950 lea esi, [ebp - 0x78] */ esi = (u32)((u32)(ebp + 0xffffff88u));
  /* 00623953 jmp 0x42a3c0 */ SAVEALL; F_0042a3c0(c); return;
}

void F_00623958(CPU *c) {
  NATIVE_HOOK(0x623958u) REGS; LOADALL;
  goto L_00623958;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623958:;
  /* 00623958 mov eax, 0x66ab3c */ { eax = (u32)(0x66ab3cu); }
  /* 0062395d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623970(CPU *c) {
  NATIVE_HOOK(0x623970u) REGS; LOADALL;
L_00623970:;
  /* 00623970 mov eax, dword ptr [ebp - 0x234] */ { const u32 m_ = (u32)(ebp + 0xfffffdccu); eax = (u32)(M32(m_)); }
  /* 00623976 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00623977 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62397cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x623977u); RETCHK(0x62397cu, 0x623977u); LOADALL;
  /* 0062397c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062397d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062397e(CPU *c) {
  NATIVE_HOOK(0x62397eu) REGS; LOADALL;
L_0062397e:;
  /* 0062397e lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00623984 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623989(CPU *c) {
  NATIVE_HOOK(0x623989u) REGS; LOADALL;
L_00623989:;
  /* 00623989 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 0062398f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623994(CPU *c) {
  NATIVE_HOOK(0x623994u) REGS; LOADALL;
L_00623994:;
  /* 00623994 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 0062399a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062399f(CPU *c) {
  NATIVE_HOOK(0x62399fu) REGS; LOADALL;
L_0062399f:;
  /* 0062399f lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 006239a5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006239aa(CPU *c) {
  NATIVE_HOOK(0x6239aau) REGS; LOADALL;
L_006239aa:;
  /* 006239aa lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 006239b0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006239b5(CPU *c) {
  NATIVE_HOOK(0x6239b5u) REGS; LOADALL;
L_006239b5:;
  /* 006239b5 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 006239bb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006239c0(CPU *c) {
  NATIVE_HOOK(0x6239c0u) REGS; LOADALL;
L_006239c0:;
  /* 006239c0 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 006239c6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006239cb(CPU *c) {
  NATIVE_HOOK(0x6239cbu) REGS; LOADALL;
L_006239cb:;
  /* 006239cb lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 006239d1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006239d6(CPU *c) {
  NATIVE_HOOK(0x6239d6u) REGS; LOADALL;
L_006239d6:;
  /* 006239d6 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 006239dc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006239e1(CPU *c) {
  NATIVE_HOOK(0x6239e1u) REGS; LOADALL;
L_006239e1:;
  /* 006239e1 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 006239e7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006239ec(CPU *c) {
  NATIVE_HOOK(0x6239ecu) REGS; LOADALL;
L_006239ec:;
  /* 006239ec lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 006239f2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006239f7(CPU *c) {
  NATIVE_HOOK(0x6239f7u) REGS; LOADALL;
L_006239f7:;
  /* 006239f7 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 006239fd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623a02(CPU *c) {
  NATIVE_HOOK(0x623a02u) REGS; LOADALL;
L_00623a02:;
  /* 00623a02 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00623a08 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623a0d(CPU *c) {
  NATIVE_HOOK(0x623a0du) REGS; LOADALL;
L_00623a0d:;
  /* 00623a0d lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00623a13 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623a18(CPU *c) {
  NATIVE_HOOK(0x623a18u) REGS; LOADALL;
L_00623a18:;
  /* 00623a18 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00623a1e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623a23(CPU *c) {
  NATIVE_HOOK(0x623a23u) REGS; LOADALL;
L_00623a23:;
  /* 00623a23 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00623a29 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623a2e(CPU *c) {
  NATIVE_HOOK(0x623a2eu) REGS; LOADALL;
L_00623a2e:;
  /* 00623a2e lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00623a34 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623a39(CPU *c) {
  NATIVE_HOOK(0x623a39u) REGS; LOADALL;
L_00623a39:;
  /* 00623a39 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00623a3f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623a44(CPU *c) {
  NATIVE_HOOK(0x623a44u) REGS; LOADALL;
L_00623a44:;
  /* 00623a44 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00623a4a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623a4f(CPU *c) {
  NATIVE_HOOK(0x623a4fu) REGS; LOADALL;
L_00623a4f:;
  /* 00623a4f lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00623a55 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623a5a(CPU *c) {
  NATIVE_HOOK(0x623a5au) REGS; LOADALL;
L_00623a5a:;
  /* 00623a5a lea ecx, [ebp - 0x250] */ ecx = (u32)((u32)(ebp + 0xfffffdb0u));
  /* 00623a60 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623a65(CPU *c) {
  NATIVE_HOOK(0x623a65u) REGS; LOADALL;
  goto L_00623a65;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623a65:;
  /* 00623a65 mov eax, 0x66ac08 */ { eax = (u32)(0x66ac08u); }
  /* 00623a6a jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623a70(CPU *c) {
  NATIVE_HOOK(0x623a70u) REGS; LOADALL;
L_00623a70:;
  /* 00623a70 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00623a73 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00623a74 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x623a79u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x623a74u); RETCHK(0x623a79u, 0x623a74u); LOADALL;
  /* 00623a79 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00623a7a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00623a7b(CPU *c) {
  NATIVE_HOOK(0x623a7bu) REGS; LOADALL;
L_00623a7b:;
  /* 00623a7b lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00623a7e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623a83(CPU *c) {
  NATIVE_HOOK(0x623a83u) REGS; LOADALL;
L_00623a83:;
  /* 00623a83 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00623a86 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623a8b(CPU *c) {
  NATIVE_HOOK(0x623a8bu) REGS; LOADALL;
L_00623a8b:;
  /* 00623a8b lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00623a8e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623a93(CPU *c) {
  NATIVE_HOOK(0x623a93u) REGS; LOADALL;
L_00623a93:;
  /* 00623a93 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00623a96 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623a9b(CPU *c) {
  NATIVE_HOOK(0x623a9bu) REGS; LOADALL;
L_00623a9b:;
  /* 00623a9b lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00623a9e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623aa3(CPU *c) {
  NATIVE_HOOK(0x623aa3u) REGS; LOADALL;
L_00623aa3:;
  /* 00623aa3 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00623aa6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623aab(CPU *c) {
  NATIVE_HOOK(0x623aabu) REGS; LOADALL;
L_00623aab:;
  /* 00623aab lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00623aae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623ab3(CPU *c) {
  NATIVE_HOOK(0x623ab3u) REGS; LOADALL;
L_00623ab3:;
  /* 00623ab3 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00623ab6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623abb(CPU *c) {
  NATIVE_HOOK(0x623abbu) REGS; LOADALL;
L_00623abb:;
  /* 00623abb lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00623abe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623ac3(CPU *c) {
  NATIVE_HOOK(0x623ac3u) REGS; LOADALL;
L_00623ac3:;
  /* 00623ac3 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00623ac6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623acb(CPU *c) {
  NATIVE_HOOK(0x623acbu) REGS; LOADALL;
L_00623acb:;
  /* 00623acb lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00623ace jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623ad3(CPU *c) {
  NATIVE_HOOK(0x623ad3u) REGS; LOADALL;
L_00623ad3:;
  /* 00623ad3 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00623ad6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623adb(CPU *c) {
  NATIVE_HOOK(0x623adbu) REGS; LOADALL;
L_00623adb:;
  /* 00623adb lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00623ade jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623ae3(CPU *c) {
  NATIVE_HOOK(0x623ae3u) REGS; LOADALL;
L_00623ae3:;
  /* 00623ae3 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00623ae6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623aeb(CPU *c) {
  NATIVE_HOOK(0x623aebu) REGS; LOADALL;
L_00623aeb:;
  /* 00623aeb lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 00623aee jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623af3(CPU *c) {
  NATIVE_HOOK(0x623af3u) REGS; LOADALL;
  goto L_00623af3;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623af3:;
  /* 00623af3 mov eax, 0x66aca8 */ { eax = (u32)(0x66aca8u); }
  /* 00623af8 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623b00(CPU *c) {
  NATIVE_HOOK(0x623b00u) REGS; LOADALL;
L_00623b00:;
  /* 00623b00 lea esi, [ebp - 0x58] */ esi = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00623b03 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_00623b08(CPU *c) {
  NATIVE_HOOK(0x623b08u) REGS; LOADALL;
L_00623b08:;
  /* 00623b08 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00623b0b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623b10(CPU *c) {
  NATIVE_HOOK(0x623b10u) REGS; LOADALL;
L_00623b10:;
  /* 00623b10 lea ecx, [ebp - 0x2d4] */ ecx = (u32)((u32)(ebp + 0xfffffd2cu));
  /* 00623b16 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623b1b(CPU *c) {
  NATIVE_HOOK(0x623b1bu) REGS; LOADALL;
L_00623b1b:;
  /* 00623b1b lea ecx, [ebp - 0x29c] */ ecx = (u32)((u32)(ebp + 0xfffffd64u));
  /* 00623b21 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623b26(CPU *c) {
  NATIVE_HOOK(0x623b26u) REGS; LOADALL;
L_00623b26:;
  /* 00623b26 lea ecx, [ebp - 0x2b8] */ ecx = (u32)((u32)(ebp + 0xfffffd48u));
  /* 00623b2c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623b31(CPU *c) {
  NATIVE_HOOK(0x623b31u) REGS; LOADALL;
  goto L_00623b31;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623b31:;
  /* 00623b31 mov eax, 0x66acec */ { eax = (u32)(0x66acecu); }
  /* 00623b36 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623b40(CPU *c) {
  NATIVE_HOOK(0x623b40u) REGS; LOADALL;
L_00623b40:;
  /* 00623b40 lea ecx, [ebp - 0x230] */ ecx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00623b46 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623b4b(CPU *c) {
  NATIVE_HOOK(0x623b4bu) REGS; LOADALL;
L_00623b4b:;
  /* 00623b4b lea ecx, [ebp - 0x230] */ ecx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00623b51 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623b56(CPU *c) {
  NATIVE_HOOK(0x623b56u) REGS; LOADALL;
L_00623b56:;
  /* 00623b56 lea ecx, [ebp - 0x230] */ ecx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00623b5c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623b61(CPU *c) {
  NATIVE_HOOK(0x623b61u) REGS; LOADALL;
L_00623b61:;
  /* 00623b61 lea ecx, [ebp - 0x230] */ ecx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00623b67 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623b6c(CPU *c) {
  NATIVE_HOOK(0x623b6cu) REGS; LOADALL;
L_00623b6c:;
  /* 00623b6c lea ecx, [ebp - 0x230] */ ecx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00623b72 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623b77(CPU *c) {
  NATIVE_HOOK(0x623b77u) REGS; LOADALL;
L_00623b77:;
  /* 00623b77 lea ecx, [ebp - 0x230] */ ecx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00623b7d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623b82(CPU *c) {
  NATIVE_HOOK(0x623b82u) REGS; LOADALL;
L_00623b82:;
  /* 00623b82 lea ecx, [ebp - 0x254] */ ecx = (u32)((u32)(ebp + 0xfffffdacu));
  /* 00623b88 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623b8d(CPU *c) {
  NATIVE_HOOK(0x623b8du) REGS; LOADALL;
  goto L_00623b8d;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623b8d:;
  /* 00623b8d mov eax, 0x66ad40 */ { eax = (u32)(0x66ad40u); }
  /* 00623b92 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623ba0(CPU *c) {
  NATIVE_HOOK(0x623ba0u) REGS; LOADALL;
L_00623ba0:;
  /* 00623ba0 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00623ba3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623ba8(CPU *c) {
  NATIVE_HOOK(0x623ba8u) REGS; LOADALL;
L_00623ba8:;
  /* 00623ba8 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00623bab jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623bb0(CPU *c) {
  NATIVE_HOOK(0x623bb0u) REGS; LOADALL;
L_00623bb0:;
  /* 00623bb0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00623bb3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623bb8(CPU *c) {
  NATIVE_HOOK(0x623bb8u) REGS; LOADALL;
  goto L_00623bb8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623bb8:;
  /* 00623bb8 mov eax, 0x66ad74 */ { eax = (u32)(0x66ad74u); }
  /* 00623bbd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623bd0(CPU *c) {
  NATIVE_HOOK(0x623bd0u) REGS; LOADALL;
L_00623bd0:;
  /* 00623bd0 lea ecx, [ebp - 0x238] */ ecx = (u32)((u32)(ebp + 0xfffffdc8u));
  /* 00623bd6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623bdb(CPU *c) {
  NATIVE_HOOK(0x623bdbu) REGS; LOADALL;
L_00623bdb:;
  /* 00623bdb lea ecx, [ebp - 0x238] */ ecx = (u32)((u32)(ebp + 0xfffffdc8u));
  /* 00623be1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623be6(CPU *c) {
  NATIVE_HOOK(0x623be6u) REGS; LOADALL;
L_00623be6:;
  /* 00623be6 lea ecx, [ebp - 0x25c] */ ecx = (u32)((u32)(ebp + 0xfffffda4u));
  /* 00623bec jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623bf1(CPU *c) {
  NATIVE_HOOK(0x623bf1u) REGS; LOADALL;
  goto L_00623bf1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623bf1:;
  /* 00623bf1 mov eax, 0x66ada8 */ { eax = (u32)(0x66ada8u); }
  /* 00623bf6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623c00(CPU *c) {
  NATIVE_HOOK(0x623c00u) REGS; LOADALL;
L_00623c00:;
  /* 00623c00 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00623c03 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623c08(CPU *c) {
  NATIVE_HOOK(0x623c08u) REGS; LOADALL;
L_00623c08:;
  /* 00623c08 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00623c0b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
