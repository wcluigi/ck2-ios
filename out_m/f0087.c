#include "funcs.h"

void F_006255f8(CPU *c) {
  NATIVE_HOOK(0x6255f8u) REGS; LOADALL;
L_006255f8:;
  /* 006255f8 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006255fb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625600(CPU *c) {
  NATIVE_HOOK(0x625600u) REGS; LOADALL;
L_00625600:;
  /* 00625600 lea ecx, [ebp - 0x49c] */ ecx = (u32)((u32)(ebp + 0xfffffb64u));
  /* 00625606 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062560b(CPU *c) {
  NATIVE_HOOK(0x62560bu) REGS; LOADALL;
L_0062560b:;
  /* 0062560b lea ecx, [ebp - 0x49c] */ ecx = (u32)((u32)(ebp + 0xfffffb64u));
  /* 00625611 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625616(CPU *c) {
  NATIVE_HOOK(0x625616u) REGS; LOADALL;
L_00625616:;
  /* 00625616 lea ecx, [ebp - 0x49c] */ ecx = (u32)((u32)(ebp + 0xfffffb64u));
  /* 0062561c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625621(CPU *c) {
  NATIVE_HOOK(0x625621u) REGS; LOADALL;
L_00625621:;
  /* 00625621 lea ecx, [ebp - 0x49c] */ ecx = (u32)((u32)(ebp + 0xfffffb64u));
  /* 00625627 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062562c(CPU *c) {
  NATIVE_HOOK(0x62562cu) REGS; LOADALL;
  goto L_0062562c;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062562c:;
  /* 0062562c mov eax, 0x66cb30 */ { eax = (u32)(0x66cb30u); }
  /* 00625631 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625640(CPU *c) {
  NATIVE_HOOK(0x625640u) REGS; LOADALL;
L_00625640:;
  /* 00625640 lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00625643 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_00625648(CPU *c) {
  NATIVE_HOOK(0x625648u) REGS; LOADALL;
  goto L_00625648;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625648:;
  /* 00625648 mov eax, 0x66cb78 */ { eax = (u32)(0x66cb78u); }
  /* 0062564d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625660(CPU *c) {
  NATIVE_HOOK(0x625660u) REGS; LOADALL;
L_00625660:;
  /* 00625660 mov eax, dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); eax = (u32)(M32(m_)); }
  /* 00625666 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00625667 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62566cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x625667u); RETCHK(0x62566cu, 0x625667u); LOADALL;
  /* 0062566c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062566d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062566e(CPU *c) {
  NATIVE_HOOK(0x62566eu) REGS; LOADALL;
L_0062566e:;
  /* 0062566e lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625674 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625679(CPU *c) {
  NATIVE_HOOK(0x625679u) REGS; LOADALL;
L_00625679:;
  /* 00625679 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062567f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625684(CPU *c) {
  NATIVE_HOOK(0x625684u) REGS; LOADALL;
L_00625684:;
  /* 00625684 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062568a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062568f(CPU *c) {
  NATIVE_HOOK(0x62568fu) REGS; LOADALL;
L_0062568f:;
  /* 0062568f lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625695 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062569a(CPU *c) {
  NATIVE_HOOK(0x62569au) REGS; LOADALL;
L_0062569a:;
  /* 0062569a lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006256a0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006256a5(CPU *c) {
  NATIVE_HOOK(0x6256a5u) REGS; LOADALL;
L_006256a5:;
  /* 006256a5 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006256ab jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006256b0(CPU *c) {
  NATIVE_HOOK(0x6256b0u) REGS; LOADALL;
L_006256b0:;
  /* 006256b0 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006256b6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006256bb(CPU *c) {
  NATIVE_HOOK(0x6256bbu) REGS; LOADALL;
L_006256bb:;
  /* 006256bb lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006256c1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006256c6(CPU *c) {
  NATIVE_HOOK(0x6256c6u) REGS; LOADALL;
L_006256c6:;
  /* 006256c6 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006256cc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006256d1(CPU *c) {
  NATIVE_HOOK(0x6256d1u) REGS; LOADALL;
L_006256d1:;
  /* 006256d1 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006256d7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006256dc(CPU *c) {
  NATIVE_HOOK(0x6256dcu) REGS; LOADALL;
L_006256dc:;
  /* 006256dc lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006256e2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006256e7(CPU *c) {
  NATIVE_HOOK(0x6256e7u) REGS; LOADALL;
L_006256e7:;
  /* 006256e7 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006256ed jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006256f2(CPU *c) {
  NATIVE_HOOK(0x6256f2u) REGS; LOADALL;
L_006256f2:;
  /* 006256f2 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006256f8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006256fd(CPU *c) {
  NATIVE_HOOK(0x6256fdu) REGS; LOADALL;
L_006256fd:;
  /* 006256fd lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625703 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625708(CPU *c) {
  NATIVE_HOOK(0x625708u) REGS; LOADALL;
L_00625708:;
  /* 00625708 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062570e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625713(CPU *c) {
  NATIVE_HOOK(0x625713u) REGS; LOADALL;
L_00625713:;
  /* 00625713 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625719 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062571e(CPU *c) {
  NATIVE_HOOK(0x62571eu) REGS; LOADALL;
L_0062571e:;
  /* 0062571e lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625724 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625729(CPU *c) {
  NATIVE_HOOK(0x625729u) REGS; LOADALL;
L_00625729:;
  /* 00625729 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062572f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625734(CPU *c) {
  NATIVE_HOOK(0x625734u) REGS; LOADALL;
L_00625734:;
  /* 00625734 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062573a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062573f(CPU *c) {
  NATIVE_HOOK(0x62573fu) REGS; LOADALL;
L_0062573f:;
  /* 0062573f lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625745 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062574a(CPU *c) {
  NATIVE_HOOK(0x62574au) REGS; LOADALL;
L_0062574a:;
  /* 0062574a lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625750 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625755(CPU *c) {
  NATIVE_HOOK(0x625755u) REGS; LOADALL;
L_00625755:;
  /* 00625755 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062575b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625760(CPU *c) {
  NATIVE_HOOK(0x625760u) REGS; LOADALL;
L_00625760:;
  /* 00625760 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625766 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062576b(CPU *c) {
  NATIVE_HOOK(0x62576bu) REGS; LOADALL;
L_0062576b:;
  /* 0062576b lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625771 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625776(CPU *c) {
  NATIVE_HOOK(0x625776u) REGS; LOADALL;
L_00625776:;
  /* 00625776 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062577c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625781(CPU *c) {
  NATIVE_HOOK(0x625781u) REGS; LOADALL;
L_00625781:;
  /* 00625781 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625787 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062578c(CPU *c) {
  NATIVE_HOOK(0x62578cu) REGS; LOADALL;
L_0062578c:;
  /* 0062578c lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625792 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625797(CPU *c) {
  NATIVE_HOOK(0x625797u) REGS; LOADALL;
L_00625797:;
  /* 00625797 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062579d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006257a2(CPU *c) {
  NATIVE_HOOK(0x6257a2u) REGS; LOADALL;
L_006257a2:;
  /* 006257a2 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006257a8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006257ad(CPU *c) {
  NATIVE_HOOK(0x6257adu) REGS; LOADALL;
L_006257ad:;
  /* 006257ad lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006257b3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006257b8(CPU *c) {
  NATIVE_HOOK(0x6257b8u) REGS; LOADALL;
L_006257b8:;
  /* 006257b8 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006257be jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006257c3(CPU *c) {
  NATIVE_HOOK(0x6257c3u) REGS; LOADALL;
L_006257c3:;
  /* 006257c3 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006257c9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006257ce(CPU *c) {
  NATIVE_HOOK(0x6257ceu) REGS; LOADALL;
L_006257ce:;
  /* 006257ce lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006257d4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006257d9(CPU *c) {
  NATIVE_HOOK(0x6257d9u) REGS; LOADALL;
L_006257d9:;
  /* 006257d9 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006257df jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006257e4(CPU *c) {
  NATIVE_HOOK(0x6257e4u) REGS; LOADALL;
L_006257e4:;
  /* 006257e4 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006257ea jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006257ef(CPU *c) {
  NATIVE_HOOK(0x6257efu) REGS; LOADALL;
L_006257ef:;
  /* 006257ef lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006257f5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006257fa(CPU *c) {
  NATIVE_HOOK(0x6257fau) REGS; LOADALL;
L_006257fa:;
  /* 006257fa lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625800 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625805(CPU *c) {
  NATIVE_HOOK(0x625805u) REGS; LOADALL;
L_00625805:;
  /* 00625805 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062580b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625810(CPU *c) {
  NATIVE_HOOK(0x625810u) REGS; LOADALL;
L_00625810:;
  /* 00625810 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625816 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062581b(CPU *c) {
  NATIVE_HOOK(0x62581bu) REGS; LOADALL;
L_0062581b:;
  /* 0062581b lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625821 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625826(CPU *c) {
  NATIVE_HOOK(0x625826u) REGS; LOADALL;
L_00625826:;
  /* 00625826 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062582c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625831(CPU *c) {
  NATIVE_HOOK(0x625831u) REGS; LOADALL;
L_00625831:;
  /* 00625831 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625837 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062583c(CPU *c) {
  NATIVE_HOOK(0x62583cu) REGS; LOADALL;
L_0062583c:;
  /* 0062583c lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625842 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625847(CPU *c) {
  NATIVE_HOOK(0x625847u) REGS; LOADALL;
L_00625847:;
  /* 00625847 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062584d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625852(CPU *c) {
  NATIVE_HOOK(0x625852u) REGS; LOADALL;
L_00625852:;
  /* 00625852 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625858 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062585d(CPU *c) {
  NATIVE_HOOK(0x62585du) REGS; LOADALL;
L_0062585d:;
  /* 0062585d lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625863 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625868(CPU *c) {
  NATIVE_HOOK(0x625868u) REGS; LOADALL;
L_00625868:;
  /* 00625868 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062586e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625873(CPU *c) {
  NATIVE_HOOK(0x625873u) REGS; LOADALL;
L_00625873:;
  /* 00625873 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625879 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062587e(CPU *c) {
  NATIVE_HOOK(0x62587eu) REGS; LOADALL;
L_0062587e:;
  /* 0062587e lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625884 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625889(CPU *c) {
  NATIVE_HOOK(0x625889u) REGS; LOADALL;
L_00625889:;
  /* 00625889 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062588f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625894(CPU *c) {
  NATIVE_HOOK(0x625894u) REGS; LOADALL;
L_00625894:;
  /* 00625894 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062589a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062589f(CPU *c) {
  NATIVE_HOOK(0x62589fu) REGS; LOADALL;
L_0062589f:;
  /* 0062589f lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006258a5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006258aa(CPU *c) {
  NATIVE_HOOK(0x6258aau) REGS; LOADALL;
L_006258aa:;
  /* 006258aa lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006258b0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006258b5(CPU *c) {
  NATIVE_HOOK(0x6258b5u) REGS; LOADALL;
L_006258b5:;
  /* 006258b5 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 006258bb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006258c0(CPU *c) {
  NATIVE_HOOK(0x6258c0u) REGS; LOADALL;
L_006258c0:;
  /* 006258c0 lea ecx, [ebp - 0x15c] */ ecx = (u32)((u32)(ebp + 0xfffffea4u));
  /* 006258c6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006258cb(CPU *c) {
  NATIVE_HOOK(0x6258cbu) REGS; LOADALL;
  goto L_006258cb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006258cb:;
  /* 006258cb mov eax, 0x66cd58 */ { eax = (u32)(0x66cd58u); }
  /* 006258d0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006258e0(CPU *c) {
  NATIVE_HOOK(0x6258e0u) REGS; LOADALL;
L_006258e0:;
  /* 006258e0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006258e3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006258e8(CPU *c) {
  NATIVE_HOOK(0x6258e8u) REGS; LOADALL;
L_006258e8:;
  /* 006258e8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006258eb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006258f0(CPU *c) {
  NATIVE_HOOK(0x6258f0u) REGS; LOADALL;
L_006258f0:;
  /* 006258f0 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 006258f3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006258f8(CPU *c) {
  NATIVE_HOOK(0x6258f8u) REGS; LOADALL;
L_006258f8:;
  /* 006258f8 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 006258fb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625900(CPU *c) {
  NATIVE_HOOK(0x625900u) REGS; LOADALL;
L_00625900:;
  /* 00625900 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00625903 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625908(CPU *c) {
  NATIVE_HOOK(0x625908u) REGS; LOADALL;
L_00625908:;
  /* 00625908 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062590b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625910(CPU *c) {
  NATIVE_HOOK(0x625910u) REGS; LOADALL;
L_00625910:;
  /* 00625910 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00625913 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625918(CPU *c) {
  NATIVE_HOOK(0x625918u) REGS; LOADALL;
L_00625918:;
  /* 00625918 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0062591b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625920(CPU *c) {
  NATIVE_HOOK(0x625920u) REGS; LOADALL;
L_00625920:;
  /* 00625920 mov ecx, dword ptr [ebp - 0x3a4] */ { const u32 m_ = (u32)(ebp + 0xfffffc5cu); ecx = (u32)(M32(m_)); }
  /* 00625926 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062592b(CPU *c) {
  NATIVE_HOOK(0x62592bu) REGS; LOADALL;
L_0062592b:;
  /* 0062592b lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062592e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625933(CPU *c) {
  NATIVE_HOOK(0x625933u) REGS; LOADALL;
L_00625933:;
  /* 00625933 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00625936 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062593b(CPU *c) {
  NATIVE_HOOK(0x62593bu) REGS; LOADALL;
L_0062593b:;
  /* 0062593b lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0062593e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625943(CPU *c) {
  NATIVE_HOOK(0x625943u) REGS; LOADALL;
L_00625943:;
  /* 00625943 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00625946 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062594b(CPU *c) {
  NATIVE_HOOK(0x62594bu) REGS; LOADALL;
L_0062594b:;
  /* 0062594b lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 0062594e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625953(CPU *c) {
  NATIVE_HOOK(0x625953u) REGS; LOADALL;
  goto L_00625953;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625953:;
  /* 00625953 mov eax, 0x66cde8 */ { eax = (u32)(0x66cde8u); }
  /* 00625958 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625960(CPU *c) {
  NATIVE_HOOK(0x625960u) REGS; LOADALL;
L_00625960:;
  /* 00625960 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625966 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062596b(CPU *c) {
  NATIVE_HOOK(0x62596bu) REGS; LOADALL;
L_0062596b:;
  /* 0062596b lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00625971 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625976(CPU *c) {
  NATIVE_HOOK(0x625976u) REGS; LOADALL;
  goto L_00625976;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625976:;
  /* 00625976 mov eax, 0x66ce14 */ { eax = (u32)(0x66ce14u); }
  /* 0062597b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625980(CPU *c) {
  NATIVE_HOOK(0x625980u) REGS; LOADALL;
L_00625980:;
  /* 00625980 lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00625983 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625988(CPU *c) {
  NATIVE_HOOK(0x625988u) REGS; LOADALL;
L_00625988:;
  /* 00625988 lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0062598b jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00625990(CPU *c) {
  NATIVE_HOOK(0x625990u) REGS; LOADALL;
L_00625990:;
  /* 00625990 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00625993 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625998(CPU *c) {
  NATIVE_HOOK(0x625998u) REGS; LOADALL;
  goto L_00625998;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625998:;
  /* 00625998 mov eax, 0x66ce48 */ { eax = (u32)(0x66ce48u); }
  /* 0062599d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006259b0(CPU *c) {
  NATIVE_HOOK(0x6259b0u) REGS; LOADALL;
L_006259b0:;
  /* 006259b0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006259b3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006259b8(CPU *c) {
  NATIVE_HOOK(0x6259b8u) REGS; LOADALL;
L_006259b8:;
  /* 006259b8 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006259bb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006259c0(CPU *c) {
  NATIVE_HOOK(0x6259c0u) REGS; LOADALL;
  goto L_006259c0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006259c0:;
  /* 006259c0 mov eax, 0x66ce74 */ { eax = (u32)(0x66ce74u); }
  /* 006259c5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006259d0(CPU *c) {
  NATIVE_HOOK(0x6259d0u) REGS; LOADALL;
L_006259d0:;
  /* 006259d0 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 006259d6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006259db(CPU *c) {
  NATIVE_HOOK(0x6259dbu) REGS; LOADALL;
L_006259db:;
  /* 006259db lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 006259e1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006259e6(CPU *c) {
  NATIVE_HOOK(0x6259e6u) REGS; LOADALL;
L_006259e6:;
  /* 006259e6 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 006259ec jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006259f1(CPU *c) {
  NATIVE_HOOK(0x6259f1u) REGS; LOADALL;
L_006259f1:;
  /* 006259f1 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 006259f7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006259fc(CPU *c) {
  NATIVE_HOOK(0x6259fcu) REGS; LOADALL;
L_006259fc:;
  /* 006259fc lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625a02 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625a07(CPU *c) {
  NATIVE_HOOK(0x625a07u) REGS; LOADALL;
L_00625a07:;
  /* 00625a07 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625a0d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625a12(CPU *c) {
  NATIVE_HOOK(0x625a12u) REGS; LOADALL;
L_00625a12:;
  /* 00625a12 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625a18 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625a1d(CPU *c) {
  NATIVE_HOOK(0x625a1du) REGS; LOADALL;
L_00625a1d:;
  /* 00625a1d lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625a23 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625a28(CPU *c) {
  NATIVE_HOOK(0x625a28u) REGS; LOADALL;
L_00625a28:;
  /* 00625a28 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625a2e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625a33(CPU *c) {
  NATIVE_HOOK(0x625a33u) REGS; LOADALL;
L_00625a33:;
  /* 00625a33 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625a39 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625a3e(CPU *c) {
  NATIVE_HOOK(0x625a3eu) REGS; LOADALL;
L_00625a3e:;
  /* 00625a3e lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625a44 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625a49(CPU *c) {
  NATIVE_HOOK(0x625a49u) REGS; LOADALL;
L_00625a49:;
  /* 00625a49 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625a4f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625a54(CPU *c) {
  NATIVE_HOOK(0x625a54u) REGS; LOADALL;
L_00625a54:;
  /* 00625a54 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625a5a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625a5f(CPU *c) {
  NATIVE_HOOK(0x625a5fu) REGS; LOADALL;
L_00625a5f:;
  /* 00625a5f lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625a65 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625a6a(CPU *c) {
  NATIVE_HOOK(0x625a6au) REGS; LOADALL;
L_00625a6a:;
  /* 00625a6a lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625a70 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625a75(CPU *c) {
  NATIVE_HOOK(0x625a75u) REGS; LOADALL;
L_00625a75:;
  /* 00625a75 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625a7b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625a80(CPU *c) {
  NATIVE_HOOK(0x625a80u) REGS; LOADALL;
L_00625a80:;
  /* 00625a80 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625a86 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625a8b(CPU *c) {
  NATIVE_HOOK(0x625a8bu) REGS; LOADALL;
L_00625a8b:;
  /* 00625a8b lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625a91 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625a96(CPU *c) {
  NATIVE_HOOK(0x625a96u) REGS; LOADALL;
L_00625a96:;
  /* 00625a96 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625a9c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625aa1(CPU *c) {
  NATIVE_HOOK(0x625aa1u) REGS; LOADALL;
L_00625aa1:;
  /* 00625aa1 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625aa7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625aac(CPU *c) {
  NATIVE_HOOK(0x625aacu) REGS; LOADALL;
L_00625aac:;
  /* 00625aac lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625ab2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625ab7(CPU *c) {
  NATIVE_HOOK(0x625ab7u) REGS; LOADALL;
L_00625ab7:;
  /* 00625ab7 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625abd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625ac2(CPU *c) {
  NATIVE_HOOK(0x625ac2u) REGS; LOADALL;
L_00625ac2:;
  /* 00625ac2 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625ac8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625acd(CPU *c) {
  NATIVE_HOOK(0x625acdu) REGS; LOADALL;
L_00625acd:;
  /* 00625acd lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625ad3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625ad8(CPU *c) {
  NATIVE_HOOK(0x625ad8u) REGS; LOADALL;
L_00625ad8:;
  /* 00625ad8 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625ade jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625ae3(CPU *c) {
  NATIVE_HOOK(0x625ae3u) REGS; LOADALL;
L_00625ae3:;
  /* 00625ae3 mov ecx, dword ptr [ebp - 0x358] */ { const u32 m_ = (u32)(ebp + 0xfffffca8u); ecx = (u32)(M32(m_)); }
  /* 00625ae9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625aee(CPU *c) {
  NATIVE_HOOK(0x625aeeu) REGS; LOADALL;
L_00625aee:;
  /* 00625aee lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625af4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625af9(CPU *c) {
  NATIVE_HOOK(0x625af9u) REGS; LOADALL;
L_00625af9:;
  /* 00625af9 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00625afc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625b01(CPU *c) {
  NATIVE_HOOK(0x625b01u) REGS; LOADALL;
L_00625b01:;
  /* 00625b01 mov ecx, dword ptr [ebp - 0x358] */ { const u32 m_ = (u32)(ebp + 0xfffffca8u); ecx = (u32)(M32(m_)); }
  /* 00625b07 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625b0c(CPU *c) {
  NATIVE_HOOK(0x625b0cu) REGS; LOADALL;
L_00625b0c:;
  /* 00625b0c lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625b12 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625b17(CPU *c) {
  NATIVE_HOOK(0x625b17u) REGS; LOADALL;
L_00625b17:;
  /* 00625b17 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625b1d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625b22(CPU *c) {
  NATIVE_HOOK(0x625b22u) REGS; LOADALL;
L_00625b22:;
  /* 00625b22 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625b28 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625b2d(CPU *c) {
  NATIVE_HOOK(0x625b2du) REGS; LOADALL;
L_00625b2d:;
  /* 00625b2d lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625b33 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625b38(CPU *c) {
  NATIVE_HOOK(0x625b38u) REGS; LOADALL;
L_00625b38:;
  /* 00625b38 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625b3e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625b43(CPU *c) {
  NATIVE_HOOK(0x625b43u) REGS; LOADALL;
L_00625b43:;
  /* 00625b43 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625b49 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625b4e(CPU *c) {
  NATIVE_HOOK(0x625b4eu) REGS; LOADALL;
L_00625b4e:;
  /* 00625b4e lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625b54 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625b59(CPU *c) {
  NATIVE_HOOK(0x625b59u) REGS; LOADALL;
L_00625b59:;
  /* 00625b59 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625b5f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625b64(CPU *c) {
  NATIVE_HOOK(0x625b64u) REGS; LOADALL;
L_00625b64:;
  /* 00625b64 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00625b6a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625b6f(CPU *c) {
  NATIVE_HOOK(0x625b6fu) REGS; LOADALL;
  goto L_00625b6f;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625b6f:;
  /* 00625b6f mov eax, 0x66cfc0 */ { eax = (u32)(0x66cfc0u); }
  /* 00625b74 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625b80(CPU *c) {
  NATIVE_HOOK(0x625b80u) REGS; LOADALL;
L_00625b80:;
  /* 00625b80 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00625b83 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625b88(CPU *c) {
  NATIVE_HOOK(0x625b88u) REGS; LOADALL;
L_00625b88:;
  /* 00625b88 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00625b8b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625b90(CPU *c) {
  NATIVE_HOOK(0x625b90u) REGS; LOADALL;
  goto L_00625b90;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625b90:;
  /* 00625b90 mov eax, 0x66cfec */ { eax = (u32)(0x66cfecu); }
  /* 00625b95 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625ba0(CPU *c) {
  NATIVE_HOOK(0x625ba0u) REGS; LOADALL;
L_00625ba0:;
  /* 00625ba0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00625ba3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625ba8(CPU *c) {
  NATIVE_HOOK(0x625ba8u) REGS; LOADALL;
L_00625ba8:;
  /* 00625ba8 lea ecx, [ebp - 0x88] */ ecx = (u32)((u32)(ebp + 0xffffff78u));
  /* 00625bae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625bb3(CPU *c) {
  NATIVE_HOOK(0x625bb3u) REGS; LOADALL;
  goto L_00625bb3;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625bb3:;
  /* 00625bb3 mov eax, 0x66d018 */ { eax = (u32)(0x66d018u); }
  /* 00625bb8 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625bc0(CPU *c) {
  NATIVE_HOOK(0x625bc0u) REGS; LOADALL;
L_00625bc0:;
  /* 00625bc0 lea ecx, [ebp - 0x3c0] */ ecx = (u32)((u32)(ebp + 0xfffffc40u));
  /* 00625bc6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625bcb(CPU *c) {
  NATIVE_HOOK(0x625bcbu) REGS; LOADALL;
L_00625bcb:;
  /* 00625bcb lea ecx, [ebp - 0x3dc] */ ecx = (u32)((u32)(ebp + 0xfffffc24u));
  /* 00625bd1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625bd6(CPU *c) {
  NATIVE_HOOK(0x625bd6u) REGS; LOADALL;
L_00625bd6:;
  /* 00625bd6 lea ecx, [ebp - 0x414] */ ecx = (u32)((u32)(ebp + 0xfffffbecu));
  /* 00625bdc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625be1(CPU *c) {
  NATIVE_HOOK(0x625be1u) REGS; LOADALL;
L_00625be1:;
  /* 00625be1 lea ecx, [ebp - 0x44c] */ ecx = (u32)((u32)(ebp + 0xfffffbb4u));
  /* 00625be7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625bec(CPU *c) {
  NATIVE_HOOK(0x625becu) REGS; LOADALL;
L_00625bec:;
  /* 00625bec lea ecx, [ebp - 0x2e0] */ ecx = (u32)((u32)(ebp + 0xfffffd20u));
  /* 00625bf2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625bf7(CPU *c) {
  NATIVE_HOOK(0x625bf7u) REGS; LOADALL;
L_00625bf7:;
  /* 00625bf7 lea ecx, [ebp - 0x3f8] */ ecx = (u32)((u32)(ebp + 0xfffffc08u));
  /* 00625bfd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625c02(CPU *c) {
  NATIVE_HOOK(0x625c02u) REGS; LOADALL;
L_00625c02:;
  /* 00625c02 lea ecx, [ebp - 0x318] */ ecx = (u32)((u32)(ebp + 0xfffffce8u));
  /* 00625c08 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625c0d(CPU *c) {
  NATIVE_HOOK(0x625c0du) REGS; LOADALL;
L_00625c0d:;
  /* 00625c0d lea ecx, [ebp - 0x2a8] */ ecx = (u32)((u32)(ebp + 0xfffffd58u));
  /* 00625c13 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625c18(CPU *c) {
  NATIVE_HOOK(0x625c18u) REGS; LOADALL;
L_00625c18:;
  /* 00625c18 lea ecx, [ebp - 0x350] */ ecx = (u32)((u32)(ebp + 0xfffffcb0u));
  /* 00625c1e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625c23(CPU *c) {
  NATIVE_HOOK(0x625c23u) REGS; LOADALL;
L_00625c23:;
  /* 00625c23 lea ecx, [ebp - 0x430] */ ecx = (u32)((u32)(ebp + 0xfffffbd0u));
  /* 00625c29 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625c2e(CPU *c) {
  NATIVE_HOOK(0x625c2eu) REGS; LOADALL;
L_00625c2e:;
  /* 00625c2e lea ecx, [ebp - 0x388] */ ecx = (u32)((u32)(ebp + 0xfffffc78u));
  /* 00625c34 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625c39(CPU *c) {
  NATIVE_HOOK(0x625c39u) REGS; LOADALL;
L_00625c39:;
  /* 00625c39 lea ecx, [ebp - 0x2c4] */ ecx = (u32)((u32)(ebp + 0xfffffd3cu));
  /* 00625c3f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625c44(CPU *c) {
  NATIVE_HOOK(0x625c44u) REGS; LOADALL;
L_00625c44:;
  /* 00625c44 lea ecx, [ebp - 0x2fc] */ ecx = (u32)((u32)(ebp + 0xfffffd04u));
  /* 00625c4a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625c4f(CPU *c) {
  NATIVE_HOOK(0x625c4fu) REGS; LOADALL;
L_00625c4f:;
  /* 00625c4f lea ecx, [ebp - 0x334] */ ecx = (u32)((u32)(ebp + 0xfffffcccu));
  /* 00625c55 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625c5a(CPU *c) {
  NATIVE_HOOK(0x625c5au) REGS; LOADALL;
L_00625c5a:;
  /* 00625c5a lea ecx, [ebp - 0x36c] */ ecx = (u32)((u32)(ebp + 0xfffffc94u));
  /* 00625c60 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
