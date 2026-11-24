#include "funcs.h"

void F_10005f90(CPU *c) {
  NATIVE_HOOK(0x10005f90u) REGS; LOADALL;
L_10005f90:;
  /* 10005f90 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10005f92 push 0x10007618 */ { u32 v_ = 0x10007618u; esp -= 4; M32(esp) = v_; }
  /* 10005f97 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10005f9d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005f9e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10005fa5 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005fa8 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 10005fac push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10005fad push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10005fae mov ebp, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebp = (u32)(M32(m_)); }
  /* 10005fb2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10005fb3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10005fb4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10005fb6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10005fb7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005fb8 mov dword ptr [esp + 0x18], esi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(esi); }
  /* 10005fbc call 0x10004fe0 */ esp -= 4; M32(esp) = 0x10005fc1u; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x10005fbcu); RETCHK(0x10005fc1u, 0x10005fbcu); LOADALL;
  /* 10005fc1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005fc4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10005fc6 mov edi, eax */ { edi = (u32)(eax); }
  /* 10005fc8 call 0x10003440 */ esp -= 4; M32(esp) = 0x10005fcdu; SAVEALL; F_10003440(c); ABI_CHECK(0x10003440u, 0x10005fc8u); RETCHK(0x10005fcdu, 0x10005fc8u); LOADALL;
  /* 10005fcd xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10005fcf cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005fd1 mov dword ptr [esp + 0x38], eax */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(eax); }
  /* 10005fd5 je 0x100062d7 */ if (ZF_) goto L_100062d7;
  /* 10005fdb cmp byte ptr [edi], bl */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005fdd je 0x100062d7 */ if (ZF_) goto L_100062d7;
  /* 10005fe3 mov ecx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 10005fe7 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005fe9 je 0x10006001 */ if (ZF_) goto L_10006001;
  /* 10005feb push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10005fec push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10005fed call 0x10004eb0 */ esp -= 4; M32(esp) = 0x10005ff2u; SAVEALL; F_10004eb0(c); ABI_CHECK(0x10004eb0u, 0x10005fedu); RETCHK(0x10005ff2u, 0x10005fedu); LOADALL;
  /* 10005ff2 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10005ff4 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 10005ff7 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10005ffa mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 10005ffd mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
L_10006001:;
  /* 10006001 cmp byte ptr [edi], 0x3c */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006004 je 0x1000601f */ if (ZF_) goto L_1000601f;
  /* 10006006 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006008 je 0x10006307 */ if (ZF_) goto L_10006307;
  /* 1000600e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000600f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10006010 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006011 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10006013 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10006015 call 0x10005150 */ esp -= 4; M32(esp) = 0x1000601au; SAVEALL; F_10005150(c); ABI_CHECK(0x10005150u, 0x10006015u); RETCHK(0x1000601au, 0x10006015u); LOADALL;
  /* 1000601a jmp 0x10006307 */ goto L_10006307;
L_1000601f:;
  /* 1000601f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006020 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006021 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006022 call 0x10004fe0 */ esp -= 4; M32(esp) = 0x10006027u; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x10006022u); RETCHK(0x10006027u, 0x10006022u); LOADALL;
  /* 10006027 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006028 add esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1000602b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000602c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000602d mov dword ptr [esp + 0x44], eax */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(eax); }
  /* 10006031 call 0x10005240 */ esp -= 4; M32(esp) = 0x10006036u; SAVEALL; F_10005240(c); ABI_CHECK(0x10005240u, 0x10006031u); RETCHK(0x10006036u, 0x10006031u); LOADALL;
  /* 10006036 mov edi, eax */ { edi = (u32)(eax); }
  /* 10006038 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000603b cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000603d je 0x100062bb */ if (ZF_) goto L_100062bb;
  /* 10006043 cmp byte ptr [edi], bl */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006045 je 0x100062bb */ if (ZF_) goto L_100062bb;
  /* 1000604b push 0x1000826c */ { u32 v_ = 0x1000826cu; esp -= 4; M32(esp) = v_; }
  /* 10006050 lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 10006054 call 0x10006960 */ esp -= 4; M32(esp) = 0x10006059u; SAVEALL; F_10006960(c); ABI_CHECK(0x10006960u, 0x10006054u); RETCHK(0x10006059u, 0x10006054u); LOADALL;
  /* 10006059 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000605a lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 1000605e mov dword ptr [esp + 0x2c], ebx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 10006062 call 0x10005200 */ esp -= 4; M32(esp) = 0x10006067u; SAVEALL; F_10005200(c); ABI_CHECK(0x10005200u, 0x10006062u); RETCHK(0x10006067u, 0x10006062u); LOADALL;
  /* 10006067 push 0x1000821c */ { u32 v_ = 0x1000821cu; esp -= 4; M32(esp) = v_; }
  /* 1000606c lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 10006070 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10006075u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10006070u); RETCHK(0x10006075u, 0x10006070u); LOADALL;
L_10006075:;
  /* 10006075 cmp byte ptr [edi], bl */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006077 je 0x10006293 */ if (ZF_) goto L_10006293;
  /* 1000607d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000607e mov esi, edi */ { esi = (u32)(edi); }
  /* 10006080 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006081 mov dword ptr [esp + 0x38], esi */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(esi); }
  /* 10006085 call 0x10004fe0 */ esp -= 4; M32(esp) = 0x1000608au; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x10006085u); RETCHK(0x1000608au, 0x10006085u); LOADALL;
  /* 1000608a mov edi, eax */ { edi = (u32)(eax); }
  /* 1000608c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000608f cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006091 je 0x1000626a */ if (ZF_) goto L_1000626a;
  /* 10006097 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006099 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000609b je 0x1000626a */ if (ZF_) goto L_1000626a;
  /* 100060a1 cmp al, 0x2f */ { u32 a_ = (eax & 0xffu), b_ = 0x2fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100060a3 je 0x10006157 */ if (ZF_) goto L_10006157;
  /* 100060a9 cmp al, 0x3e */ { u32 a_ = (eax & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100060ab je 0x1000617e */ if (ZF_) goto L_1000617e;
  /* 100060b1 push 0x34 */ { u32 v_ = 0x34u; esp -= 4; M32(esp) = v_; }
  /* 100060b3 call 0x10006e4c */ esp -= 4; M32(esp) = 0x100060b8u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x100060b3u); RETCHK(0x100060b8u, 0x100060b3u); LOADALL;
  /* 100060b8 mov ecx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 100060bc mov esi, eax */ { esi = (u32)(eax); }
  /* 100060be add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100060c1 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100060c3 je 0x10006215 */ if (ZF_) goto L_10006215;
  /* 100060c9 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 100060cc mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 100060cf mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 100060d2 mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 100060d6 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 100060d9 mov dword ptr [esi], 0x10008224 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x10008224u); }
  /* 100060df mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 100060e2 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 100060e5 mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 100060e8 mov dword ptr [esi + 0x24], ebx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ebx); }
  /* 100060eb mov dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 100060ee mov dword ptr [esi + 0x28], ebx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(ebx); }
  /* 100060f1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100060f2 mov dword ptr [esi + 0x10], ebx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ebx); }
  /* 100060f5 mov dword ptr [esi + 0x30], ebx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(ebx); }
  /* 100060f8 mov dword ptr [esi + 0x2c], ebx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 100060fb mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 100060fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100060fe mov dword ptr [esi + 0x10], ecx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 10006101 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006102 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10006104 mov dword ptr [esp + 0x3c], edi */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(edi); }
  /* 10006108 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1000610bu; SAVEALL; call_ind(c, t_); RETCHK(0x1000610bu, 0x10006108u); LOADALL; }
  /* 1000610b mov edi, eax */ { edi = (u32)(eax); }
  /* 1000610d cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000610f je 0x10006246 */ if (ZF_) goto L_10006246;
  /* 10006115 cmp byte ptr [edi], bl */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006117 je 0x10006246 */ if (ZF_) goto L_10006246;
  /* 1000611d cmp dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006120 je 0x10006127 */ if (ZF_) goto L_10006127;
  /* 10006122 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 10006125 jmp 0x1000612c */ goto L_1000612c;
L_10006127:;
  /* 10006127 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_1000612c:;
  /* 1000612c mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10006130 add ecx, 0x34 */ { u32 a_ = ecx, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10006133 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006134 call 0x100041f0 */ esp -= 4; M32(esp) = 0x10006139u; SAVEALL; F_100041f0(c); ABI_CHECK(0x100041f0u, 0x10006134u); RETCHK(0x10006139u, 0x10006134u); LOADALL;
  /* 10006139 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000613b mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 1000613f jne 0x10006228 */ if (!ZF_) goto L_10006228;
  /* 10006145 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10006149 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000614a add ecx, 0x34 */ { u32 a_ = ecx, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1000614d call 0x100037b0 */ esp -= 4; M32(esp) = 0x10006152u; SAVEALL; F_100037b0(c); ABI_CHECK(0x100037b0u, 0x1000614du); RETCHK(0x10006152u, 0x1000614du); LOADALL;
  /* 10006152 jmp 0x10006075 */ goto L_10006075;
L_10006157:;
  /* 10006157 mov al, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000615a inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1000615b cmp al, 0x3e */ { u32 a_ = (eax & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000615d je 0x10006179 */ if (ZF_) goto L_10006179;
  /* 1000615f mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 10006163 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006165 je 0x10006280 */ if (ZF_) goto L_10006280;
  /* 1000616b mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 1000616f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006170 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10006171 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006172 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10006174 jmp 0x1000627b */ goto L_1000627b;
L_10006179:;
  /* 10006179 lea esi, [edi + 1] */ esi = (u32)((u32)(edi + 0x1u));
  /* 1000617c jmp 0x100061da */ goto L_100061da;
L_1000617e:;
  /* 1000617e mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 10006182 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10006186 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006187 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006188 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006189 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000618a call 0x10005790 */ esp -= 4; M32(esp) = 0x1000618fu; SAVEALL; F_10005790(c); ABI_CHECK(0x10005790u, 0x1000618au); RETCHK(0x1000618fu, 0x1000618au); LOADALL;
  /* 1000618f mov esi, eax */ { esi = (u32)(eax); }
  /* 10006191 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006193 je 0x10006280 */ if (ZF_) goto L_10006280;
  /* 10006199 cmp byte ptr [esi], bl */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000619b je 0x10006280 */ if (ZF_) goto L_10006280;
  /* 100061a1 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 100061a5 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100061a7 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 100061ab jne 0x100061b2 */ if (!ZF_) goto L_100061b2;
  /* 100061ad mov ecx, 0x10008158 */ { ecx = (u32)(0x10008158u); }
L_100061b2:;
  /* 100061b2 mov eax, esi */ { eax = (u32)(esi); }
  /* 100061b4 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_100061b6:;
  /* 100061b6 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100061b8 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100061ba je 0x100061ce */ if (ZF_) goto L_100061ce;
  /* 100061bc cmp byte ptr [eax + ecx], dl */ { const u32 m_ = (u32)(eax + ecx); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100061bf jne 0x100061ca */ if (!ZF_) goto L_100061ca;
  /* 100061c1 mov dl, byte ptr [eax + ecx + 1] */ { const u32 m_ = (u32)(eax + ecx + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100061c5 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100061c6 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100061c8 jne 0x100061b6 */ if (!ZF_) goto L_100061b6;
L_100061ca:;
  /* 100061ca cmp byte ptr [ecx], bl */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100061cc jne 0x10006202 */ if (!ZF_) goto L_10006202;
L_100061ce:;
  /* 100061ce mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 100061d2 neg edi */ { u32 a_ = edi; u32 r_ = (0u - a_) & 0xffffffffu; edi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 100061d4 sbb edi, edi */ { u32 a_ = edi, b_ = edi; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); edi = (u32)(r_); }
  /* 100061d6 and edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 100061d8 add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_100061da:;
  /* 100061da lea ecx, [esp + 0x14] */ ecx = (u32)((u32)(esp + 0x14u));
  /* 100061de mov dword ptr [esp + 0x28], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0xffffffffu); }
  /* 100061e6 call 0x10001640 */ esp -= 4; M32(esp) = 0x100061ebu; SAVEALL; F_10001640(c); ABI_CHECK(0x10001640u, 0x100061e6u); RETCHK(0x100061ebu, 0x100061e6u); LOADALL;
  /* 100061eb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100061ec mov eax, esi */ { eax = (u32)(esi); }
  /* 100061ee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100061ef pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100061f0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100061f1 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 100061f5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 100061fc add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100061ff ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10006202:;
  /* 10006202 mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 10006206 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006208 je 0x10006280 */ if (ZF_) goto L_10006280;
  /* 1000620a mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 1000620e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000620f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10006210 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006211 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 10006213 jmp 0x1000627b */ goto L_1000627b;
L_10006215:;
  /* 10006215 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006217 je 0x10006280 */ if (ZF_) goto L_10006280;
  /* 10006219 mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 1000621d mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 10006221 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006222 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006223 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10006224 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10006226 jmp 0x1000627b */ goto L_1000627b;
L_10006228:;
  /* 10006228 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1000622a call 0x100033f0 */ esp -= 4; M32(esp) = 0x1000622fu; SAVEALL; F_100033f0(c); ABI_CHECK(0x100033f0u, 0x1000622au); RETCHK(0x1000622fu, 0x1000622au); LOADALL;
  /* 1000622f mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 10006233 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006234 add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10006237 call 0x100069c0 */ esp -= 4; M32(esp) = 0x1000623cu; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10006237u); RETCHK(0x1000623cu, 0x10006237u); LOADALL;
  /* 1000623c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 1000623e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10006240 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10006242 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10006244u; SAVEALL; call_ind(c, t_); RETCHK(0x10006244u, 0x10006242u); LOADALL; }
  /* 10006244 jmp 0x10006280 */ goto L_10006280;
L_10006246:;
  /* 10006246 mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 1000624a cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000624c je 0x10006260 */ if (ZF_) goto L_10006260;
  /* 1000624e mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 10006252 mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 10006256 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006257 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10006258 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006259 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 1000625b call 0x10005150 */ esp -= 4; M32(esp) = 0x10006260u; SAVEALL; F_10005150(c); ABI_CHECK(0x10005150u, 0x1000625bu); RETCHK(0x10006260u, 0x1000625bu); LOADALL;
L_10006260:;
  /* 10006260 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 10006262 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10006264 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10006266 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10006268u; SAVEALL; call_ind(c, t_); RETCHK(0x10006268u, 0x10006266u); LOADALL; }
  /* 10006268 jmp 0x10006280 */ goto L_10006280;
L_1000626a:;
  /* 1000626a mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 1000626e cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006270 je 0x10006280 */ if (ZF_) goto L_10006280;
  /* 10006272 mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 10006276 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006277 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006278 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006279 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
L_1000627b:;
  /* 1000627b call 0x10005150 */ esp -= 4; M32(esp) = 0x10006280u; SAVEALL; F_10005150(c); ABI_CHECK(0x10005150u, 0x1000627bu); RETCHK(0x10006280u, 0x1000627bu); LOADALL;
L_10006280:;
  /* 10006280 lea ecx, [esp + 0x14] */ ecx = (u32)((u32)(esp + 0x14u));
  /* 10006284 mov dword ptr [esp + 0x28], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0xffffffffu); }
  /* 1000628c call 0x10001640 */ esp -= 4; M32(esp) = 0x10006291u; SAVEALL; F_10001640(c); ABI_CHECK(0x10001640u, 0x1000628cu); RETCHK(0x10006291u, 0x1000628cu); LOADALL;
  /* 10006291 jmp 0x10006307 */ goto L_10006307;
L_10006293:;
  /* 10006293 lea ecx, [esp + 0x14] */ ecx = (u32)((u32)(esp + 0x14u));
  /* 10006297 mov dword ptr [esp + 0x28], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0xffffffffu); }
  /* 1000629f call 0x10001640 */ esp -= 4; M32(esp) = 0x100062a4u; SAVEALL; F_10001640(c); ABI_CHECK(0x10001640u, 0x1000629fu); RETCHK(0x100062a4u, 0x1000629fu); LOADALL;
  /* 100062a4 mov eax, edi */ { eax = (u32)(edi); }
  /* 100062a6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100062a7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100062a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100062a9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100062aa mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 100062ae mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 100062b5 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100062b8 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_100062bb:;
  /* 100062bb mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 100062bf cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100062c1 je 0x10006307 */ if (ZF_) goto L_10006307;
  /* 100062c3 mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 100062c7 mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 100062cb push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100062cc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 100062cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100062ce push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 100062d0 call 0x10005150 */ esp -= 4; M32(esp) = 0x100062d5u; SAVEALL; F_10005150(c); ABI_CHECK(0x10005150u, 0x100062d0u); RETCHK(0x100062d5u, 0x100062d0u); LOADALL;
  /* 100062d5 jmp 0x10006307 */ goto L_10006307;
L_100062d7:;
  /* 100062d7 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100062d9 je 0x10006307 */ if (ZF_) goto L_10006307;
  /* 100062db cmp byte ptr [eax + 0x34], bl */ { const u32 m_ = (u32)(eax + 0x34u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100062de jne 0x10006307 */ if (!ZF_) goto L_10006307;
  /* 100062e0 mov byte ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)(0x1u); }
  /* 100062e4 mov dword ptr [eax + 0x38], 4 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x4u); }
  /* 100062eb mov ecx, dword ptr [0x1000a0e4] */ { const u32 m_ = (u32)(0x1000a0e4u); ecx = (u32)(M32(m_)); }
  /* 100062f1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100062f2 lea ecx, [eax + 0x3c] */ ecx = (u32)((u32)(eax + 0x3cu));
  /* 100062f5 call 0x100069c0 */ esp -= 4; M32(esp) = 0x100062fau; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x100062f5u); RETCHK(0x100062fau, 0x100062f5u); LOADALL;
  /* 100062fa mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 100062fe or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006301 mov dword ptr [eax + 0x50], ecx */ { const u32 m_ = (u32)(eax + 0x50u); M32(m_) = (u32)(ecx); }
  /* 10006304 mov dword ptr [eax + 0x4c], ecx */ { const u32 m_ = (u32)(eax + 0x4cu); M32(m_) = (u32)(ecx); }
L_10006307:;
  /* 10006307 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 1000630b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000630c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000630d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000630e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10006310 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006311 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10006318 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000631b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10006320(CPU *c) {
  NATIVE_HOOK(0x10006320u) REGS; LOADALL;
L_10006320:;
  /* 10006320 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10006321 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006322 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006323 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006324 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006325 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10006327 call 0x10003440 */ esp -= 4; M32(esp) = 0x1000632cu; SAVEALL; F_10003440(c); ABI_CHECK(0x10003440u, 0x10006327u); RETCHK(0x1000632cu, 0x10006327u); LOADALL;
  /* 1000632c lea ebp, [esi + 0x20] */ ebp = (u32)((u32)(esi + 0x20u));
  /* 1000632f push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 10006334 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10006336 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 1000633a call 0x100069c0 */ esp -= 4; M32(esp) = 0x1000633fu; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x1000633au); RETCHK(0x1000633fu, 0x1000633au); LOADALL;
  /* 1000633f mov ebx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebx = (u32)(M32(m_)); }
  /* 10006343 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10006347 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006348 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006349 call 0x10004fe0 */ esp -= 4; M32(esp) = 0x1000634eu; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x10006349u); RETCHK(0x1000634eu, 0x10006349u); LOADALL;
  /* 1000634e mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10006352 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006355 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006357 mov edi, eax */ { edi = (u32)(eax); }
  /* 10006359 je 0x1000636d */ if (ZF_) goto L_1000636d;
  /* 1000635b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1000635c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000635d call 0x10004eb0 */ esp -= 4; M32(esp) = 0x10006362u; SAVEALL; F_10004eb0(c); ABI_CHECK(0x10004eb0u, 0x1000635du); RETCHK(0x10006362u, 0x1000635du); LOADALL;
  /* 10006362 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10006364 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 10006367 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 1000636a mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_1000636d:;
  /* 1000636d test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000636f mov eax, 0x100081cc */ { eax = (u32)(0x100081ccu); }
  /* 10006374 je 0x10006399 */ if (ZF_) goto L_10006399;
  /* 10006376 cmp byte ptr [edi], 0 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006379 je 0x10006399 */ if (ZF_) goto L_10006399;
  /* 1000637b mov esi, edi */ { esi = (u32)(edi); }
  /* 1000637d sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1000637f nop */ ;
L_10006380:;
  /* 10006380 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006382 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006384 je 0x100063b1 */ if (ZF_) goto L_100063b1;
  /* 10006386 cmp byte ptr [esi + eax], dl */ { const u32 m_ = (u32)(esi + eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006389 jne 0x10006394 */ if (!ZF_) goto L_10006394;
  /* 1000638b mov dl, byte ptr [esi + eax + 1] */ { const u32 m_ = (u32)(esi + eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000638f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006390 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006392 jne 0x10006380 */ if (!ZF_) goto L_10006380;
L_10006394:;
  /* 10006394 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006397 je 0x100063b1 */ if (ZF_) goto L_100063b1;
L_10006399:;
  /* 10006399 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1000639a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1000639b mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 1000639f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100063a0 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 100063a2 call 0x10005150 */ esp -= 4; M32(esp) = 0x100063a7u; SAVEALL; F_10005150(c); ABI_CHECK(0x10005150u, 0x100063a2u); RETCHK(0x100063a7u, 0x100063a2u); LOADALL;
  /* 100063a7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100063a8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100063a9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100063aa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 100063ac pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100063ad pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 100063ae ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_100063b1:;
  /* 100063b1 mov eax, 0x100081cc */ { eax = (u32)(0x100081ccu); }
  /* 100063b6 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 100063b9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_100063c0:;
  /* 100063c0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100063c2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100063c3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100063c5 jne 0x100063c0 */ if (!ZF_) goto L_100063c0;
  /* 100063c7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100063c8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100063ca push 0x100081c8 */ { u32 v_ = 0x100081c8u; esp -= 4; M32(esp) = v_; }
  /* 100063cf sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 100063d1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100063d3 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 100063d5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100063d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100063d7 call 0x10005b10 */ esp -= 4; M32(esp) = 0x100063dcu; SAVEALL; F_10005b10(c); ABI_CHECK(0x10005b10u, 0x100063d7u); RETCHK(0x100063dcu, 0x100063d7u); LOADALL;
  /* 100063dc add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100063df pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100063e0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100063e1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100063e2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100063e3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 100063e4 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_100063f0(CPU *c) {
  NATIVE_HOOK(0x100063f0u) REGS; LOADALL;
L_100063f0:;
  /* 100063f0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 100063f4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100063f5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100063f6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100063f7 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 100063fb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100063fc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100063fd mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 100063ff call 0x10004fe0 */ esp -= 4; M32(esp) = 0x10006404u; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x100063ffu); RETCHK(0x10006404u, 0x100063ffu); LOADALL;
  /* 10006404 mov esi, eax */ { esi = (u32)(eax); }
  /* 10006406 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006409 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000640b je 0x10006553 */ if (ZF_) goto L_10006553;
  /* 10006411 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006414 je 0x10006553 */ if (ZF_) goto L_10006553;
  /* 1000641a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000641b mov ebp, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebp = (u32)(M32(m_)); }
  /* 1000641f test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006421 je 0x10006438 */ if (ZF_) goto L_10006438;
  /* 10006423 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006424 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006425 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10006427 call 0x10004eb0 */ esp -= 4; M32(esp) = 0x1000642cu; SAVEALL; F_10004eb0(c); ABI_CHECK(0x10004eb0u, 0x10006427u); RETCHK(0x1000642cu, 0x10006427u); LOADALL;
  /* 1000642c mov ecx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M32(m_)); }
  /* 1000642f mov dword ptr [ebx + 4], ecx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10006432 mov edx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10006435 mov dword ptr [ebx + 8], edx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(edx); }
L_10006438:;
  /* 10006438 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006439 lea eax, [ebx + 0x14] */ eax = (u32)((u32)(ebx + 0x14u));
  /* 1000643c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000643d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000643e call 0x10005240 */ esp -= 4; M32(esp) = 0x10006443u; SAVEALL; F_10005240(c); ABI_CHECK(0x10005240u, 0x1000643eu); RETCHK(0x10006443u, 0x1000643eu); LOADALL;
  /* 10006443 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006446 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006448 je 0x1000651b */ if (ZF_) goto L_1000651b;
  /* 1000644e cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006451 je 0x1000651b */ if (ZF_) goto L_1000651b;
  /* 10006457 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006458 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006459 call 0x10004fe0 */ esp -= 4; M32(esp) = 0x1000645eu; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x10006459u); RETCHK(0x1000645eu, 0x10006459u); LOADALL;
  /* 1000645e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006461 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006463 je 0x10006537 */ if (ZF_) goto L_10006537;
  /* 10006469 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000646b test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000646d je 0x10006537 */ if (ZF_) goto L_10006537;
  /* 10006473 cmp cl, 0x3d */ { u32 a_ = (ecx & 0xffu), b_ = 0x3du; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006476 jne 0x10006537 */ if (!ZF_) goto L_10006537;
  /* 1000647c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1000647d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000647e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000647f call 0x10004fe0 */ esp -= 4; M32(esp) = 0x10006484u; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x1000647fu); RETCHK(0x10006484u, 0x1000647fu); LOADALL;
  /* 10006484 mov esi, eax */ { esi = (u32)(eax); }
  /* 10006486 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006489 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000648b je 0x1000651b */ if (ZF_) goto L_1000651b;
  /* 10006491 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006493 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006495 je 0x1000651b */ if (ZF_) goto L_1000651b;
  /* 1000649b cmp al, 0x27 */ { u32 a_ = (eax & 0xffu), b_ = 0x27u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000649d jne 0x100064c0 */ if (!ZF_) goto L_100064c0;
  /* 1000649f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100064a0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100064a2 push 0x10008300 */ { u32 v_ = 0x10008300u; esp -= 4; M32(esp) = v_; }
L_100064a7:;
  /* 100064a7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100064a9 add ebx, 0x20 */ { u32 a_ = ebx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 100064ac push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100064ad inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100064ae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100064af call 0x10005b10 */ esp -= 4; M32(esp) = 0x100064b4u; SAVEALL; F_10005b10(c); ABI_CHECK(0x10005b10u, 0x100064afu); RETCHK(0x100064b4u, 0x100064afu); LOADALL;
  /* 100064b4 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100064b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100064b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100064b9 mov esi, eax */ { esi = (u32)(eax); }
  /* 100064bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100064bc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100064bd ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_100064c0:;
  /* 100064c0 cmp al, 0x22 */ { u32 a_ = (eax & 0xffu), b_ = 0x22u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100064c2 jne 0x100064ce */ if (!ZF_) goto L_100064ce;
  /* 100064c4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100064c5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100064c7 push 0x100082fc */ { u32 v_ = 0x100082fcu; esp -= 4; M32(esp) = v_; }
  /* 100064cc jmp 0x100064a7 */ goto L_100064a7;
L_100064ce:;
  /* 100064ce lea edi, [ebx + 0x20] */ edi = (u32)((u32)(ebx + 0x20u));
  /* 100064d1 push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 100064d6 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 100064d8 call 0x100069c0 */ esp -= 4; M32(esp) = 0x100064ddu; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x100064d8u); RETCHK(0x100064ddu, 0x100064d8u); LOADALL;
  /* 100064dd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_100064e0:;
  /* 100064e0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 100064e2 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100064e4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100064e6 je 0x10006512 */ if (ZF_) goto L_10006512;
  /* 100064e8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100064e9 call 0x10004d60 */ esp -= 4; M32(esp) = 0x100064eeu; SAVEALL; F_10004d60(c); ABI_CHECK(0x10004d60u, 0x100064e9u); RETCHK(0x100064eeu, 0x100064e9u); LOADALL;
  /* 100064ee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100064f1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100064f3 jne 0x10006512 */ if (!ZF_) goto L_10006512;
  /* 100064f5 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100064f7 cmp al, 0xa */ { u32 a_ = (eax & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100064f9 je 0x10006512 */ if (ZF_) goto L_10006512;
  /* 100064fb cmp al, 0xd */ { u32 a_ = (eax & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100064fd je 0x10006512 */ if (ZF_) goto L_10006512;
  /* 100064ff cmp al, 0x2f */ { u32 a_ = (eax & 0xffu), b_ = 0x2fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006501 je 0x10006512 */ if (ZF_) goto L_10006512;
  /* 10006503 cmp al, 0x3e */ { u32 a_ = (eax & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006505 je 0x10006512 */ if (ZF_) goto L_10006512;
  /* 10006507 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006508 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 1000650a call 0x100037d0 */ esp -= 4; M32(esp) = 0x1000650fu; SAVEALL; F_100037d0(c); ABI_CHECK(0x100037d0u, 0x1000650au); RETCHK(0x1000650fu, 0x1000650au); LOADALL;
  /* 1000650f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006510 jne 0x100064e0 */ if (!ZF_) goto L_100064e0;
L_10006512:;
  /* 10006512 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10006513 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006514 mov eax, esi */ { eax = (u32)(esi); }
  /* 10006516 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006517 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006518 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_1000651b:;
  /* 1000651b mov ebx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); ebx = (u32)(M32(m_)); }
  /* 1000651e test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006520 je 0x1000652e */ if (ZF_) goto L_1000652e;
  /* 10006522 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006523 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006524 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006525 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 10006527 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10006529 call 0x10005150 */ esp -= 4; M32(esp) = 0x1000652eu; SAVEALL; F_10005150(c); ABI_CHECK(0x10005150u, 0x10006529u); RETCHK(0x1000652eu, 0x10006529u); LOADALL;
L_1000652e:;
  /* 1000652e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000652f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006530 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006531 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10006533 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006534 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10006537:;
  /* 10006537 mov ebx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); ebx = (u32)(M32(m_)); }
  /* 1000653a test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000653c je 0x1000652e */ if (ZF_) goto L_1000652e;
  /* 1000653e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000653f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006540 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006541 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 10006543 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10006545 call 0x10005150 */ esp -= 4; M32(esp) = 0x1000654au; SAVEALL; F_10005150(c); ABI_CHECK(0x10005150u, 0x10006545u); RETCHK(0x1000654au, 0x10006545u); LOADALL;
  /* 1000654a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000654b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000654c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000654d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1000654f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006550 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10006553:;
  /* 10006553 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006554 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006555 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10006557 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006558 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10006560(CPU *c) {
  NATIVE_HOOK(0x10006560u) REGS; LOADALL;
L_10006560:;
  /* 10006560 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006561 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006562 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006563 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10006565 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006566 lea edi, [esi + 0x20] */ edi = (u32)((u32)(esi + 0x20u));
  /* 10006569 push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 1000656e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10006570 call 0x100069c0 */ esp -= 4; M32(esp) = 0x10006575u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10006570u); RETCHK(0x10006575u, 0x10006570u); LOADALL;
  /* 10006575 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 10006579 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000657b mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 1000657f mov ebp, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebp = (u32)(M32(m_)); }
  /* 10006583 je 0x10006597 */ if (ZF_) goto L_10006597;
  /* 10006585 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006586 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006587 call 0x10004eb0 */ esp -= 4; M32(esp) = 0x1000658cu; SAVEALL; F_10004eb0(c); ABI_CHECK(0x10004eb0u, 0x10006587u); RETCHK(0x1000658cu, 0x10006587u); LOADALL;
  /* 1000658c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 1000658e mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 10006591 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10006594 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
L_10006597:;
  /* 10006597 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006598 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1000659a push 0x10008220 */ { u32 v_ = 0x10008220u; esp -= 4; M32(esp) = v_; }
  /* 1000659f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 100065a1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100065a2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100065a3 call 0x10005b10 */ esp -= 4; M32(esp) = 0x100065a8u; SAVEALL; F_10005b10(c); ABI_CHECK(0x10005b10u, 0x100065a3u); RETCHK(0x100065a8u, 0x100065a3u); LOADALL;
  /* 100065a8 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100065ab test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100065ad pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100065ae pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100065af pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100065b0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100065b1 je 0x100065b7 */ if (ZF_) goto L_100065b7;
  /* 100065b3 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 100065b4 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_100065b7:;
  /* 100065b7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 100065b9 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_100065c0(CPU *c) {
  NATIVE_HOOK(0x100065c0u) REGS; LOADALL;
L_100065c0:;
  /* 100065c0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 100065c2 push 0x1000764b */ { u32 v_ = 0x1000764bu; esp -= 4; M32(esp) = v_; }
  /* 100065c7 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 100065cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100065ce mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 100065d5 sub esp, 0xac */ { u32 a_ = esp, b_ = 0xacu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100065db mov eax, dword ptr [esp + 0xbc] */ { const u32 m_ = (u32)(esp + 0xbcu); eax = (u32)(M32(m_)); }
  /* 100065e2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100065e3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100065e4 mov ebp, dword ptr [esp + 0xcc] */ { const u32 m_ = (u32)(esp + 0xccu); ebp = (u32)(M32(m_)); }
  /* 100065eb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100065ec push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100065ed push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100065ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100065ef mov edi, ecx */ { edi = (u32)(ecx); }
  /* 100065f1 call 0x10004fe0 */ esp -= 4; M32(esp) = 0x100065f6u; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x100065f1u); RETCHK(0x100065f6u, 0x100065f1u); LOADALL;
  /* 100065f6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100065f9 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 100065fb mov esi, eax */ { esi = (u32)(eax); }
  /* 100065fd call 0x10003440 */ esp -= 4; M32(esp) = 0x10006602u; SAVEALL; F_10003440(c); ABI_CHECK(0x10003440u, 0x100065fdu); RETCHK(0x10006602u, 0x100065fdu); LOADALL;
  /* 10006602 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10006604 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006606 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 1000660a je 0x1000690c */ if (ZF_) goto L_1000690c;
  /* 10006610 cmp byte ptr [esi], bl */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006612 je 0x1000690c */ if (ZF_) goto L_1000690c;
  /* 10006618 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006619 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1000661b push 0x1000810c */ { u32 v_ = 0x1000810cu; esp -= 4; M32(esp) = v_; }
  /* 10006620 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006621 call 0x100050a0 */ esp -= 4; M32(esp) = 0x10006626u; SAVEALL; F_100050a0(c); ABI_CHECK(0x100050a0u, 0x10006621u); RETCHK(0x10006626u, 0x10006621u); LOADALL;
  /* 10006626 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006629 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000662b je 0x10006908 */ if (ZF_) goto L_10006908;
  /* 10006631 mov ecx, dword ptr [esp + 0xd0] */ { const u32 m_ = (u32)(esp + 0xd0u); ecx = (u32)(M32(m_)); }
  /* 10006638 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000663a je 0x10006650 */ if (ZF_) goto L_10006650;
  /* 1000663c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000663d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000663e call 0x10004eb0 */ esp -= 4; M32(esp) = 0x10006643u; SAVEALL; F_10004eb0(c); ABI_CHECK(0x10004eb0u, 0x1000663eu); RETCHK(0x10006643u, 0x1000663eu); LOADALL;
  /* 10006643 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10006645 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10006647 mov dword ptr [edi + 4], ecx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 1000664a mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 1000664d mov dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edx); }
L_10006650:;
  /* 10006650 lea ecx, [edi + 0x34] */ ecx = (u32)((u32)(edi + 0x34u));
  /* 10006653 push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 10006658 add esi, 5 */ { u32 a_ = esi, b_ = 0x5u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1000665b mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 1000665f call 0x100069c0 */ esp -= 4; M32(esp) = 0x10006664u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x1000665fu); RETCHK(0x10006664u, 0x1000665fu); LOADALL;
  /* 10006664 lea ecx, [edi + 0x40] */ ecx = (u32)((u32)(edi + 0x40u));
  /* 10006667 push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 1000666c mov dword ptr [esp + 0x20], ecx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ecx); }
  /* 10006670 call 0x100069c0 */ esp -= 4; M32(esp) = 0x10006675u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10006670u); RETCHK(0x10006675u, 0x10006670u); LOADALL;
  /* 10006675 lea ecx, [edi + 0x4c] */ ecx = (u32)((u32)(edi + 0x4cu));
  /* 10006678 push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 1000667d mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 10006681 call 0x100069c0 */ esp -= 4; M32(esp) = 0x10006686u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10006681u); RETCHK(0x10006686u, 0x10006681u); LOADALL;
  /* 10006686 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006688 je 0x1000693c */ if (ZF_) goto L_1000693c;
  /* 1000668e or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_10006691:;
  /* 10006691 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006693 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006695 je 0x1000693c */ if (ZF_) goto L_1000693c;
  /* 1000669b cmp al, 0x3e */ { u32 a_ = (eax & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000669d je 0x10006903 */ if (ZF_) goto L_10006903;
  /* 100066a3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100066a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100066a5 call 0x10004fe0 */ esp -= 4; M32(esp) = 0x100066aau; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x100066a5u); RETCHK(0x100066aau, 0x100066a5u); LOADALL;
  /* 100066aa push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100066ab push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 100066ad mov esi, eax */ { esi = (u32)(eax); }
  /* 100066af push 0x1000878c */ { u32 v_ = 0x1000878cu; esp -= 4; M32(esp) = v_; }
  /* 100066b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100066b5 call 0x100050a0 */ esp -= 4; M32(esp) = 0x100066bau; SAVEALL; F_100050a0(c); ABI_CHECK(0x100050a0u, 0x100066b5u); RETCHK(0x100066bau, 0x100066b5u); LOADALL;
  /* 100066ba add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100066bd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100066bf je 0x1000674f */ if (ZF_) goto L_1000674f;
  /* 100066c5 mov dword ptr [esp + 0x28], edi */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(edi); }
  /* 100066c9 mov dword ptr [esp + 0x24], edi */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(edi); }
  /* 100066cd mov dword ptr [esp + 0x2c], ebx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 100066d1 mov dword ptr [esp + 0x20], 0x10008224 */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(0x10008224u); }
  /* 100066d9 mov dword ptr [esp + 0x38], ebx */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(ebx); }
  /* 100066dd mov dword ptr [esp + 0x34], ebx */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(ebx); }
  /* 100066e1 mov dword ptr [esp + 0x3c], ebx */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(ebx); }
  /* 100066e5 mov dword ptr [esp + 0x44], ebx */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(ebx); }
  /* 100066e9 mov dword ptr [esp + 0x40], ebx */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(ebx); }
  /* 100066ed mov dword ptr [esp + 0x48], ebx */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(ebx); }
  /* 100066f1 mov dword ptr [esp + 0x30], ebx */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(ebx); }
  /* 100066f5 mov dword ptr [esp + 0x50], ebx */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(ebx); }
  /* 100066f9 mov dword ptr [esp + 0x4c], ebx */ { const u32 m_ = (u32)(esp + 0x4cu); M32(m_) = (u32)(ebx); }
  /* 100066fd mov eax, dword ptr [esp + 0xd0] */ { const u32 m_ = (u32)(esp + 0xd0u); eax = (u32)(M32(m_)); }
  /* 10006704 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006705 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006706 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006707 lea ecx, [esp + 0x2c] */ ecx = (u32)((u32)(esp + 0x2cu));
  /* 1000670b mov dword ptr [esp + 0xd0], ebx */ { const u32 m_ = (u32)(esp + 0xd0u); M32(m_) = (u32)(ebx); }
  /* 10006712 call 0x100063f0 */ esp -= 4; M32(esp) = 0x10006717u; SAVEALL; F_100063f0(c); ABI_CHECK(0x100063f0u, 0x10006712u); RETCHK(0x10006717u, 0x10006712u); LOADALL;
  /* 10006717 mov esi, eax */ { esi = (u32)(eax); }
  /* 10006719 cmp dword ptr [esp + 0x44], ebx */ { const u32 m_ = (u32)(esp + 0x44u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000671d mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 10006721 jne 0x10006728 */ if (!ZF_) goto L_10006728;
  /* 10006723 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_10006728:;
  /* 10006728 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 1000672c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000672d call 0x100069c0 */ esp -= 4; M32(esp) = 0x10006732u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x1000672du); RETCHK(0x10006732u, 0x1000672du); LOADALL;
  /* 10006732 mov dword ptr [esp + 0xc4], edi */ { const u32 m_ = (u32)(esp + 0xc4u); M32(m_) = (u32)(edi); }
  /* 10006739 lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
L_1000673d:;
  /* 1000673d call 0x100038b0 */ esp -= 4; M32(esp) = 0x10006742u; SAVEALL; F_100038b0(c); ABI_CHECK(0x100038b0u, 0x1000673du); RETCHK(0x10006742u, 0x1000673du); LOADALL;
L_10006742:;
  /* 10006742 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006744 jne 0x10006691 */ if (!ZF_) goto L_10006691;
  /* 1000674a jmp 0x1000693c */ goto L_1000693c;
L_1000674f:;
  /* 1000674f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006750 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10006752 push 0x10008780 */ { u32 v_ = 0x10008780u; esp -= 4; M32(esp) = v_; }
  /* 10006757 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006758 call 0x100050a0 */ esp -= 4; M32(esp) = 0x1000675du; SAVEALL; F_100050a0(c); ABI_CHECK(0x100050a0u, 0x10006758u); RETCHK(0x1000675du, 0x10006758u); LOADALL;
  /* 1000675d add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006760 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006762 je 0x100067ef */ if (ZF_) goto L_100067ef;
  /* 10006768 mov dword ptr [esp + 0x5c], edi */ { const u32 m_ = (u32)(esp + 0x5cu); M32(m_) = (u32)(edi); }
  /* 1000676c mov dword ptr [esp + 0x58], edi */ { const u32 m_ = (u32)(esp + 0x58u); M32(m_) = (u32)(edi); }
  /* 10006770 mov dword ptr [esp + 0x60], ebx */ { const u32 m_ = (u32)(esp + 0x60u); M32(m_) = (u32)(ebx); }
  /* 10006774 mov dword ptr [esp + 0x54], 0x10008224 */ { const u32 m_ = (u32)(esp + 0x54u); M32(m_) = (u32)(0x10008224u); }
  /* 1000677c mov dword ptr [esp + 0x6c], ebx */ { const u32 m_ = (u32)(esp + 0x6cu); M32(m_) = (u32)(ebx); }
  /* 10006780 mov dword ptr [esp + 0x68], ebx */ { const u32 m_ = (u32)(esp + 0x68u); M32(m_) = (u32)(ebx); }
  /* 10006784 mov dword ptr [esp + 0x70], ebx */ { const u32 m_ = (u32)(esp + 0x70u); M32(m_) = (u32)(ebx); }
  /* 10006788 mov dword ptr [esp + 0x78], ebx */ { const u32 m_ = (u32)(esp + 0x78u); M32(m_) = (u32)(ebx); }
  /* 1000678c mov dword ptr [esp + 0x74], ebx */ { const u32 m_ = (u32)(esp + 0x74u); M32(m_) = (u32)(ebx); }
  /* 10006790 mov dword ptr [esp + 0x7c], ebx */ { const u32 m_ = (u32)(esp + 0x7cu); M32(m_) = (u32)(ebx); }
  /* 10006794 mov dword ptr [esp + 0x64], ebx */ { const u32 m_ = (u32)(esp + 0x64u); M32(m_) = (u32)(ebx); }
  /* 10006798 mov dword ptr [esp + 0x84], ebx */ { const u32 m_ = (u32)(esp + 0x84u); M32(m_) = (u32)(ebx); }
  /* 1000679f mov dword ptr [esp + 0x80], ebx */ { const u32 m_ = (u32)(esp + 0x80u); M32(m_) = (u32)(ebx); }
  /* 100067a6 mov ecx, dword ptr [esp + 0xd0] */ { const u32 m_ = (u32)(esp + 0xd0u); ecx = (u32)(M32(m_)); }
  /* 100067ad push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100067ae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100067af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100067b0 lea ecx, [esp + 0x60] */ ecx = (u32)((u32)(esp + 0x60u));
  /* 100067b4 mov dword ptr [esp + 0xd0], 1 */ { const u32 m_ = (u32)(esp + 0xd0u); M32(m_) = (u32)(0x1u); }
  /* 100067bf call 0x100063f0 */ esp -= 4; M32(esp) = 0x100067c4u; SAVEALL; F_100063f0(c); ABI_CHECK(0x100063f0u, 0x100067bfu); RETCHK(0x100067c4u, 0x100067bfu); LOADALL;
  /* 100067c4 mov esi, eax */ { esi = (u32)(eax); }
  /* 100067c6 cmp dword ptr [esp + 0x78], ebx */ { const u32 m_ = (u32)(esp + 0x78u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100067ca mov eax, dword ptr [esp + 0x74] */ { const u32 m_ = (u32)(esp + 0x74u); eax = (u32)(M32(m_)); }
  /* 100067ce jne 0x100067d5 */ if (!ZF_) goto L_100067d5;
  /* 100067d0 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_100067d5:;
  /* 100067d5 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 100067d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100067da call 0x100069c0 */ esp -= 4; M32(esp) = 0x100067dfu; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x100067dau); RETCHK(0x100067dfu, 0x100067dau); LOADALL;
  /* 100067df mov dword ptr [esp + 0xc4], edi */ { const u32 m_ = (u32)(esp + 0xc4u); M32(m_) = (u32)(edi); }
  /* 100067e6 lea ecx, [esp + 0x54] */ ecx = (u32)((u32)(esp + 0x54u));
  /* 100067ea jmp 0x1000673d */ goto L_1000673d;
L_100067ef:;
  /* 100067ef push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100067f0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 100067f2 push 0x10008774 */ { u32 v_ = 0x10008774u; esp -= 4; M32(esp) = v_; }
  /* 100067f7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100067f8 call 0x100050a0 */ esp -= 4; M32(esp) = 0x100067fdu; SAVEALL; F_100050a0(c); ABI_CHECK(0x100050a0u, 0x100067f8u); RETCHK(0x100067fdu, 0x100067f8u); LOADALL;
  /* 100067fd add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006800 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006802 je 0x100068bc */ if (ZF_) goto L_100068bc;
  /* 10006808 mov dword ptr [esp + 0x90], edi */ { const u32 m_ = (u32)(esp + 0x90u); M32(m_) = (u32)(edi); }
  /* 1000680f mov dword ptr [esp + 0x8c], edi */ { const u32 m_ = (u32)(esp + 0x8cu); M32(m_) = (u32)(edi); }
  /* 10006816 mov dword ptr [esp + 0x94], ebx */ { const u32 m_ = (u32)(esp + 0x94u); M32(m_) = (u32)(ebx); }
  /* 1000681d mov dword ptr [esp + 0x88], 0x10008224 */ { const u32 m_ = (u32)(esp + 0x88u); M32(m_) = (u32)(0x10008224u); }
  /* 10006828 mov dword ptr [esp + 0xa0], ebx */ { const u32 m_ = (u32)(esp + 0xa0u); M32(m_) = (u32)(ebx); }
  /* 1000682f mov dword ptr [esp + 0x9c], ebx */ { const u32 m_ = (u32)(esp + 0x9cu); M32(m_) = (u32)(ebx); }
  /* 10006836 mov dword ptr [esp + 0xa4], ebx */ { const u32 m_ = (u32)(esp + 0xa4u); M32(m_) = (u32)(ebx); }
  /* 1000683d mov dword ptr [esp + 0xac], ebx */ { const u32 m_ = (u32)(esp + 0xacu); M32(m_) = (u32)(ebx); }
  /* 10006844 mov dword ptr [esp + 0xa8], ebx */ { const u32 m_ = (u32)(esp + 0xa8u); M32(m_) = (u32)(ebx); }
  /* 1000684b mov dword ptr [esp + 0xb0], ebx */ { const u32 m_ = (u32)(esp + 0xb0u); M32(m_) = (u32)(ebx); }
  /* 10006852 mov dword ptr [esp + 0x98], ebx */ { const u32 m_ = (u32)(esp + 0x98u); M32(m_) = (u32)(ebx); }
  /* 10006859 mov dword ptr [esp + 0xb8], ebx */ { const u32 m_ = (u32)(esp + 0xb8u); M32(m_) = (u32)(ebx); }
  /* 10006860 mov dword ptr [esp + 0xb4], ebx */ { const u32 m_ = (u32)(esp + 0xb4u); M32(m_) = (u32)(ebx); }
  /* 10006867 mov edx, dword ptr [esp + 0xd0] */ { const u32 m_ = (u32)(esp + 0xd0u); edx = (u32)(M32(m_)); }
  /* 1000686e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000686f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10006870 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006871 lea ecx, [esp + 0x94] */ ecx = (u32)((u32)(esp + 0x94u));
  /* 10006878 mov dword ptr [esp + 0xd0], 2 */ { const u32 m_ = (u32)(esp + 0xd0u); M32(m_) = (u32)(0x2u); }
  /* 10006883 call 0x100063f0 */ esp -= 4; M32(esp) = 0x10006888u; SAVEALL; F_100063f0(c); ABI_CHECK(0x100063f0u, 0x10006883u); RETCHK(0x10006888u, 0x10006883u); LOADALL;
  /* 10006888 mov esi, eax */ { esi = (u32)(eax); }
  /* 1000688a cmp dword ptr [esp + 0xac], ebx */ { const u32 m_ = (u32)(esp + 0xacu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006891 mov eax, dword ptr [esp + 0xa8] */ { const u32 m_ = (u32)(esp + 0xa8u); eax = (u32)(M32(m_)); }
  /* 10006898 jne 0x1000689f */ if (!ZF_) goto L_1000689f;
  /* 1000689a mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_1000689f:;
  /* 1000689f mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 100068a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100068a4 call 0x100069c0 */ esp -= 4; M32(esp) = 0x100068a9u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x100068a4u); RETCHK(0x100068a9u, 0x100068a4u); LOADALL;
  /* 100068a9 mov dword ptr [esp + 0xc4], edi */ { const u32 m_ = (u32)(esp + 0xc4u); M32(m_) = (u32)(edi); }
  /* 100068b0 lea ecx, [esp + 0x88] */ ecx = (u32)((u32)(esp + 0x88u));
  /* 100068b7 jmp 0x1000673d */ goto L_1000673d;
L_100068bc:;
  /* 100068bc cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100068be je 0x1000693c */ if (ZF_) goto L_1000693c;
L_100068c0:;
  /* 100068c0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100068c2 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100068c4 mov byte ptr [esp + 0x13], al */ { const u32 m_ = (u32)(esp + 0x13u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 100068c8 je 0x10006742 */ if (ZF_) goto L_10006742;
  /* 100068ce cmp al, 0x3e */ { u32 a_ = (eax & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100068d0 je 0x10006742 */ if (ZF_) goto L_10006742;
  /* 100068d6 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 100068d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100068da call 0x10007044 */ esp -= 4; M32(esp) = 0x100068dfu; SAVEALL; F_10007044(c); ABI_CHECK(0x10007044u, 0x100068dau); RETCHK(0x100068dfu, 0x100068dau); LOADALL;
  /* 100068df add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100068e2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100068e4 jne 0x10006742 */ if (!ZF_) goto L_10006742;
  /* 100068ea mov al, byte ptr [esp + 0x13] */ { const u32 m_ = (u32)(esp + 0x13u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100068ee cmp al, 0xa */ { u32 a_ = (eax & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100068f0 je 0x10006742 */ if (ZF_) goto L_10006742;
  /* 100068f6 cmp al, 0xd */ { u32 a_ = (eax & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100068f8 je 0x10006742 */ if (ZF_) goto L_10006742;
  /* 100068fe inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100068ff jne 0x100068c0 */ if (!ZF_) goto L_100068c0;
  /* 10006901 jmp 0x1000693c */ goto L_1000693c;
L_10006903:;
  /* 10006903 lea eax, [esi + 1] */ eax = (u32)((u32)(esi + 0x1u));
  /* 10006906 jmp 0x1000693e */ goto L_1000693e;
L_10006908:;
  /* 10006908 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
L_1000690c:;
  /* 1000690c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000690e je 0x1000693c */ if (ZF_) goto L_1000693c;
  /* 10006910 cmp byte ptr [eax + 0x34], bl */ { const u32 m_ = (u32)(eax + 0x34u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006913 jne 0x1000693c */ if (!ZF_) goto L_1000693c;
  /* 10006915 mov byte ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)(0x1u); }
  /* 10006919 mov dword ptr [eax + 0x38], 0xc */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0xcu); }
  /* 10006920 mov ecx, dword ptr [0x1000a104] */ { const u32 m_ = (u32)(0x1000a104u); ecx = (u32)(M32(m_)); }
  /* 10006926 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10006927 lea ecx, [eax + 0x3c] */ ecx = (u32)((u32)(eax + 0x3cu));
  /* 1000692a call 0x100069c0 */ esp -= 4; M32(esp) = 0x1000692fu; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x1000692au); RETCHK(0x1000692fu, 0x1000692au); LOADALL;
  /* 1000692f mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10006933 or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10006936 mov dword ptr [eax + 0x50], edi */ { const u32 m_ = (u32)(eax + 0x50u); M32(m_) = (u32)(edi); }
  /* 10006939 mov dword ptr [eax + 0x4c], edi */ { const u32 m_ = (u32)(eax + 0x4cu); M32(m_) = (u32)(edi); }
L_1000693c:;
  /* 1000693c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_1000693e:;
  /* 1000693e mov ecx, dword ptr [esp + 0xbc] */ { const u32 m_ = (u32)(esp + 0xbcu); ecx = (u32)(M32(m_)); }
  /* 10006945 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006946 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006947 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10006948 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006949 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10006950 add esp, 0xb8 */ { u32 a_ = esp, b_ = 0xb8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006956 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10006960(CPU *c) {
  NATIVE_HOOK(0x10006960u) REGS; LOADALL;
L_10006960:;
  /* 10006960 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006961 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006962 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006963 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10006967 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10006969 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000696b mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 1000696d jne 0x10006980 */ if (!ZF_) goto L_10006980;
  /* 1000696f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006970 mov dword ptr [ebp + 4], ebx */ { const u32 m_ = (u32)(ebp + 0x4u); M32(m_) = (u32)(ebx); }
  /* 10006973 mov dword ptr [ebp], ebx */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(ebx); }
  /* 10006976 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10006979 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 1000697b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000697c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1000697d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10006980:;
  /* 10006980 mov eax, esi */ { eax = (u32)(esi); }
  /* 10006982 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_10006985:;
  /* 10006985 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006987 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006988 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000698a jne 0x10006985 */ if (!ZF_) goto L_10006985;
  /* 1000698c sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1000698e lea ebx, [eax + 1] */ ebx = (u32)((u32)(eax + 0x1u));
  /* 10006991 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006992 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006993 call 0x10006e4c */ esp -= 4; M32(esp) = 0x10006998u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x10006993u); RETCHK(0x10006998u, 0x10006993u); LOADALL;
  /* 10006998 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 1000699a mov edx, ecx */ { edx = (u32)(ecx); }
  /* 1000699c shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1000699f mov edi, eax */ { edi = (u32)(eax); }
  /* 100069a1 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 100069a3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100069a6 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 100069a8 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 100069ab rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 100069ad mov dword ptr [ebp + 4], ebx */ { const u32 m_ = (u32)(ebp + 0x4u); M32(m_) = (u32)(ebx); }
  /* 100069b0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100069b1 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 100069b2 mov dword ptr [ebp], eax */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(eax); }
  /* 100069b5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100069b6 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 100069b9 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 100069bb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100069bc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100069bd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_100069c0(CPU *c) {
  NATIVE_HOOK(0x100069c0u) REGS; LOADALL;
L_100069c0:;
  /* 100069c0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100069c1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100069c2 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 100069c6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100069c7 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 100069c9 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100069cb mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 100069cd jne 0x100069ec */ if (!ZF_) goto L_100069ec;
  /* 100069cf mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 100069d1 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100069d3 je 0x100069de */ if (ZF_) goto L_100069de;
  /* 100069d5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100069d6 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100069dbu; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100069d6u); RETCHK(0x100069dbu, 0x100069d6u); LOADALL;
  /* 100069db add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_100069de:;
  /* 100069de mov dword ptr [ebx], edi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edi); }
  /* 100069e0 mov dword ptr [ebx + 4], edi */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(edi); }
  /* 100069e3 mov dword ptr [ebx + 8], edi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(edi); }
  /* 100069e6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100069e7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100069e8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100069e9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_100069ec:;
  /* 100069ec mov eax, esi */ { eax = (u32)(esi); }
  /* 100069ee lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_100069f1:;
  /* 100069f1 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100069f3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100069f4 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100069f6 jne 0x100069f1 */ if (!ZF_) goto L_100069f1;
  /* 100069f8 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 100069fa push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100069fb lea ebp, [eax + 1] */ ebp = (u32)((u32)(eax + 0x1u));
  /* 100069fe push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100069ff call 0x10006e4c */ esp -= 4; M32(esp) = 0x10006a04u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x100069ffu); RETCHK(0x10006a04u, 0x100069ffu); LOADALL;
  /* 10006a04 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10006a06 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10006a08 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10006a0b mov edi, eax */ { edi = (u32)(eax); }
  /* 10006a0d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006a0f mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10006a11 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006a14 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006a16 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 10006a18 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006a1b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006a1d mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 10006a21 je 0x10006a30 */ if (ZF_) goto L_10006a30;
  /* 10006a23 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10006a24 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10006a29u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10006a24u); RETCHK(0x10006a29u, 0x10006a24u); LOADALL;
  /* 10006a29 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10006a2d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10006a30:;
  /* 10006a30 mov dword ptr [ebx + 4], ebp */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ebp); }
  /* 10006a33 dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10006a34 mov dword ptr [ebx + 8], ebp */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ebp); }
  /* 10006a37 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10006a38 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006a39 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006a3a mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 10006a3c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006a3d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10006a40(CPU *c) {
  NATIVE_HOOK(0x10006a40u) REGS; LOADALL;
L_10006a40:;
  /* 10006a40 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006a41 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006a42 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006a43 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10006a47 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10006a4a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006a4b xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10006a4d cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006a4f mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10006a51 je 0x10006a5a */ if (ZF_) goto L_10006a5a;
  /* 10006a53 mov ebp, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebp = (u32)(M32(m_)); }
  /* 10006a56 cmp ebp, edi */ { u32 a_ = ebp, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006a58 jne 0x10006a78 */ if (!ZF_) goto L_10006a78;
L_10006a5a:;
  /* 10006a5a mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10006a5c cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006a5e je 0x10006a69 */ if (ZF_) goto L_10006a69;
  /* 10006a60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006a61 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10006a66u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10006a61u); RETCHK(0x10006a66u, 0x10006a61u); LOADALL;
  /* 10006a66 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10006a69:;
  /* 10006a69 mov dword ptr [ebx], edi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edi); }
  /* 10006a6b mov dword ptr [ebx + 4], edi */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(edi); }
  /* 10006a6e mov dword ptr [ebx + 8], edi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(edi); }
  /* 10006a71 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006a72 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006a73 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10006a74 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006a75 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10006a78:;
  /* 10006a78 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006a79 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006a7a call 0x10006e4c */ esp -= 4; M32(esp) = 0x10006a7fu; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x10006a7au); RETCHK(0x10006a7fu, 0x10006a7au); LOADALL;
  /* 10006a7f mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10006a82 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006a85 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006a87 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 10006a8b je 0x10006a91 */ if (ZF_) goto L_10006a91;
  /* 10006a8d mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10006a8f jmp 0x10006a96 */ goto L_10006a96;
L_10006a91:;
  /* 10006a91 mov esi, 0x10008158 */ { esi = (u32)(0x10008158u); }
L_10006a96:;
  /* 10006a96 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10006a98 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10006a9a shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10006a9d mov edi, eax */ { edi = (u32)(eax); }
  /* 10006a9f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006aa1 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10006aa3 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006aa6 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006aa8 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 10006aaa test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006aac je 0x10006abb */ if (ZF_) goto L_10006abb;
  /* 10006aae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10006aaf call 0x10006e46 */ esp -= 4; M32(esp) = 0x10006ab4u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10006aafu); RETCHK(0x10006ab4u, 0x10006aafu); LOADALL;
  /* 10006ab4 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10006ab8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10006abb:;
  /* 10006abb mov dword ptr [ebx + 4], ebp */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ebp); }
  /* 10006abe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006abf dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10006ac0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006ac1 mov dword ptr [ebx + 8], ebp */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ebp); }
  /* 10006ac4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10006ac5 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 10006ac7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006ac8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10006ad0(CPU *c) {
  NATIVE_HOOK(0x10006ad0u) REGS; LOADALL;
L_10006ad0:;
  /* 10006ad0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10006ad1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006ad2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006ad3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006ad4 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 10006ad8 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006ada xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 10006adc test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006ade mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10006ae0 je 0x10006bd2 */ if (ZF_) goto L_10006bd2;
  /* 10006ae6 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10006aea lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_10006af0:;
  /* 10006af0 cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006af2 jae 0x10006afd */ if (!CF_) goto L_10006afd;
  /* 10006af4 mov cl, byte ptr [esi + ebp + 1] */ { const u32 m_ = (u32)(esi + ebp + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006af8 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006af9 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006afb jne 0x10006af0 */ if (!ZF_) goto L_10006af0;
L_10006afd:;
  /* 10006afd test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006aff je 0x10006bd2 */ if (ZF_) goto L_10006bd2;
  /* 10006b05 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10006b08 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006b0a je 0x10006b11 */ if (ZF_) goto L_10006b11;
  /* 10006b0c mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10006b0f jmp 0x10006b13 */ goto L_10006b13;
L_10006b11:;
  /* 10006b11 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10006b13:;
  /* 10006b13 lea eax, [eax + ebp + 1] */ eax = (u32)((u32)(eax + ebp + 0x1u));
  /* 10006b17 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006b19 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006b1a mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10006b1e jbe 0x10006ba4 */ if ((CF_|ZF_)) goto L_10006ba4;
  /* 10006b24 add eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10006b26 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006b27 call 0x10006e4c */ esp -= 4; M32(esp) = 0x10006b2cu; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x10006b27u); RETCHK(0x10006b2cu, 0x10006b27u); LOADALL;
  /* 10006b2c mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 10006b2f mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10006b32 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006b35 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006b37 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10006b3b je 0x10006b68 */ if (ZF_) goto L_10006b68;
  /* 10006b3d mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 10006b3f test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006b41 je 0x10006b5c */ if (ZF_) goto L_10006b5c;
  /* 10006b43 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10006b46 mov esi, edx */ { esi = (u32)(edx); }
  /* 10006b48 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10006b4a shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10006b4d mov edi, eax */ { edi = (u32)(eax); }
  /* 10006b4f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006b51 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10006b53 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006b56 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006b58 mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
L_10006b5c:;
  /* 10006b5c mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10006b5f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006b61 je 0x10006b68 */ if (ZF_) goto L_10006b68;
  /* 10006b63 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10006b66 jmp 0x10006b6a */ goto L_10006b6a;
L_10006b68:;
  /* 10006b68 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_10006b6a:;
  /* 10006b6a mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10006b6c lea edi, [edx + eax] */ edi = (u32)((u32)(edx + eax));
  /* 10006b6f mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10006b71 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10006b74 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006b76 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10006b78 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006b7b rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006b7d mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10006b80 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006b82 je 0x10006b97 */ if (ZF_) goto L_10006b97;
  /* 10006b84 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 10006b86 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006b88 je 0x10006b97 */ if (ZF_) goto L_10006b97;
  /* 10006b8a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10006b8b call 0x10006e46 */ esp -= 4; M32(esp) = 0x10006b90u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10006b8bu); RETCHK(0x10006b90u, 0x10006b8bu); LOADALL;
  /* 10006b90 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10006b94 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10006b97:;
  /* 10006b97 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 10006b99 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10006b9d add eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10006b9f mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10006ba2 jmp 0x10006bc3 */ goto L_10006bc3;
L_10006ba4:;
  /* 10006ba4 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006ba6 je 0x10006bad */ if (ZF_) goto L_10006bad;
  /* 10006ba8 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10006bab jmp 0x10006baf */ goto L_10006baf;
L_10006bad:;
  /* 10006bad xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10006baf:;
  /* 10006baf mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 10006bb1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10006bb3 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10006bb5 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10006bb7 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10006bba rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006bbc mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10006bbe and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006bc1 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
L_10006bc3:;
  /* 10006bc3 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10006bc7 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 10006bc9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10006bca mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 10006bcd mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
  /* 10006bd1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_10006bd2:;
  /* 10006bd2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006bd3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10006bd4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006bd5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10006bd6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10006be0(CPU *c) {
  NATIVE_HOOK(0x10006be0u) REGS; LOADALL;
L_10006be0:;
  /* 10006be0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10006be1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006be2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006be3 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10006be7 mov eax, esi */ { eax = (u32)(esi); }
  /* 10006be9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006bea mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10006bec lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 10006bef nop */ ;
L_10006bf0:;
  /* 10006bf0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006bf2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006bf3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006bf5 jne 0x10006bf0 */ if (!ZF_) goto L_10006bf0;
  /* 10006bf7 mov edi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edi = (u32)(M32(m_)); }
  /* 10006bfa sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10006bfc test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006bfe je 0x10006c05 */ if (ZF_) goto L_10006c05;
  /* 10006c00 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10006c03 jmp 0x10006c07 */ goto L_10006c07;
L_10006c05:;
  /* 10006c05 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_10006c07:;
  /* 10006c07 lea eax, [ecx + eax + 1] */ eax = (u32)((u32)(ecx + eax + 0x1u));
  /* 10006c0b cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006c0d mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 10006c11 jbe 0x10006cb1 */ if ((CF_|ZF_)) goto L_10006cb1;
  /* 10006c17 add eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10006c19 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006c1a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006c1b call 0x10006e4c */ esp -= 4; M32(esp) = 0x10006c20u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x10006c1bu); RETCHK(0x10006c20u, 0x10006c1bu); LOADALL;
  /* 10006c20 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 10006c22 mov byte ptr [ebp], 0 */ { const u32 m_ = (u32)(ebp); M8(m_) = (u8)(0x0u); }
  /* 10006c26 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10006c29 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006c2c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006c2e je 0x10006c50 */ if (ZF_) goto L_10006c50;
  /* 10006c30 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10006c32 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006c34 je 0x10006c50 */ if (ZF_) goto L_10006c50;
  /* 10006c36 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10006c39 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006c3a mov esi, eax */ { esi = (u32)(eax); }
  /* 10006c3c mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10006c3e shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10006c41 mov edi, ebp */ { edi = (u32)(ebp); }
  /* 10006c43 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006c45 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10006c47 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006c4a rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006c4c mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
L_10006c50:;
  /* 10006c50 mov eax, esi */ { eax = (u32)(esi); }
  /* 10006c52 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_10006c55:;
  /* 10006c55 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006c57 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006c58 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006c5a jne 0x10006c55 */ if (!ZF_) goto L_10006c55;
  /* 10006c5c mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10006c5f sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10006c61 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006c63 je 0x10006c6a */ if (ZF_) goto L_10006c6a;
  /* 10006c65 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10006c68 jmp 0x10006c6c */ goto L_10006c6c;
L_10006c6a:;
  /* 10006c6a xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_10006c6c:;
  /* 10006c6c lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 10006c6f lea edi, [edx + ebp] */ edi = (u32)((u32)(edx + ebp));
  /* 10006c72 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10006c74 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10006c77 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006c79 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10006c7b and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006c7e rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006c80 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10006c83 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006c85 je 0x10006c96 */ if (ZF_) goto L_10006c96;
  /* 10006c87 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10006c89 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006c8b je 0x10006c96 */ if (ZF_) goto L_10006c96;
  /* 10006c8d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006c8e call 0x10006e46 */ esp -= 4; M32(esp) = 0x10006c93u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10006c8eu); RETCHK(0x10006c93u, 0x10006c8eu); LOADALL;
  /* 10006c93 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10006c96:;
  /* 10006c96 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10006c9a add eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10006c9c mov dword ptr [ebx], ebp */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(ebp); }
  /* 10006c9e mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10006ca1 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10006ca5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10006ca6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006ca7 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10006ca8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006ca9 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 10006cac pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006cad pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10006cae ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10006cb1:;
  /* 10006cb1 mov eax, esi */ { eax = (u32)(esi); }
  /* 10006cb3 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_10006cb6:;
  /* 10006cb6 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006cb8 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006cb9 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006cbb jne 0x10006cb6 */ if (!ZF_) goto L_10006cb6;
  /* 10006cbd sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10006cbf test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006cc1 je 0x10006cc8 */ if (ZF_) goto L_10006cc8;
  /* 10006cc3 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10006cc6 jmp 0x10006cca */ goto L_10006cca;
L_10006cc8:;
  /* 10006cc8 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_10006cca:;
  /* 10006cca mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 10006ccc add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10006cce lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 10006cd1 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10006cd5 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10006cd7 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10006cda rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006cdc mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10006cde and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006ce1 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006ce3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006ce4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10006ce5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006ce6 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 10006ce9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006cea pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10006ceb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10006cf0(CPU *c) {
  NATIVE_HOOK(0x10006cf0u) REGS; LOADALL;
L_10006cf0:;
  /* 10006cf0 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10006cf3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006cf5 je 0x10006d02 */ if (ZF_) goto L_10006d02;
  /* 10006cf7 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10006cfa mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10006cfe cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006d00 jb 0x10006d08 */ if (CF_) goto L_10006d08;
L_10006d02:;
  /* 10006d02 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10006d05 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10006d08:;
  /* 10006d08 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006d09 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 10006d0b mov cl, byte ptr [esi + eax] */ { const u32 m_ = (u32)(esi + eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006d0e test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006d10 je 0x10006d23 */ if (ZF_) goto L_10006d23;
  /* 10006d12 mov dl, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
L_10006d16:;
  /* 10006d16 cmp cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006d18 je 0x10006d26 */ if (ZF_) goto L_10006d26;
  /* 10006d1a mov cl, byte ptr [esi + eax + 1] */ { const u32 m_ = (u32)(esi + eax + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006d1e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006d1f test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006d21 jne 0x10006d16 */ if (!ZF_) goto L_10006d16;
L_10006d23:;
  /* 10006d23 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10006d26:;
  /* 10006d26 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006d27 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10006d30(CPU *c) {
  NATIVE_HOOK(0x10006d30u) REGS; LOADALL;
L_10006d30:;
  /* 10006d30 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10006d33 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006d35 je 0x10006d8f */ if (ZF_) goto L_10006d8f;
  /* 10006d37 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10006d3b mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 10006d3e test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006d40 je 0x10006d8f */ if (ZF_) goto L_10006d8f;
  /* 10006d42 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006d43 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006d44 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 10006d46 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
L_10006d48:;
  /* 10006d48 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006d4a mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006d4c mov cl, dl */ { ecx = (ecx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 10006d4e cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006d50 jne 0x10006d7c */ if (!ZF_) goto L_10006d7c;
  /* 10006d52 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006d54 je 0x10006d6c */ if (ZF_) goto L_10006d6c;
  /* 10006d56 mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006d59 mov bl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006d5c mov cl, dl */ { ecx = (ecx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 10006d5e cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006d60 jne 0x10006d7c */ if (!ZF_) goto L_10006d7c;
  /* 10006d62 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10006d65 add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10006d68 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006d6a jne 0x10006d48 */ if (!ZF_) goto L_10006d48;
L_10006d6c:;
  /* 10006d6c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10006d6e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006d70 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006d72 sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 10006d75 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006d76 mov al, cl */ { eax = (eax & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 10006d78 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006d79 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10006d7c:;
  /* 10006d7c sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10006d7e sbb eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10006d81 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006d83 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006d85 sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 10006d88 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006d89 mov al, cl */ { eax = (eax & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 10006d8b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006d8c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10006d8f:;
  /* 10006d8f xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10006d91 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10006db1(CPU *c) {
  NATIVE_HOOK(0x10006db1u) REGS; LOADALL;
L_10006db1:;
  /* 10006db1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10006db3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006db4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10006db5(CPU *c) {
  NATIVE_HOOK(0x10006db5u) REGS; LOADALL;
L_10006db5:;
  /* 10006db5 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10006db8 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10006dbc push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10006dbe call dword ptr [0x10008030] */ { const u32 m_ = (u32)(0x10008030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10006dc4u; SAVEALL; call_ind(c, t_); RETCHK(0x10006dc4u, 0x10006dbeu); LOADALL; }
}

void F_10006dc5(CPU *c) {
  NATIVE_HOOK(0x10006dc5u) REGS; LOADALL;
  goto L_10006dc5;
L_10006d94:;
  /* 10006d94 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10006d96 push 0x10008910 */ { u32 v_ = 0x10008910u; esp -= 4; M32(esp) = v_; }
  /* 10006d9b call 0x100070dc */ esp -= 4; M32(esp) = 0x10006da0u; SAVEALL; F_100070dc(c); ABI_CHECK(0x100070dcu, 0x10006d9bu); RETCHK(0x10006da0u, 0x10006d9bu); LOADALL;
  /* 10006da0 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10006da4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10006da6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10006da8 call 0x100070d4 */ esp -= 4; M32(esp) = 0x10006dadu; SAVEALL; F_100070d4(c); ABI_CHECK(0x100070d4u, 0x10006da8u); RETCHK(0x10006dadu, 0x10006da8u); LOADALL;
  /* 10006dad pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10006dae pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10006daf jmp 0x10006db8 */ goto L_10006db8;
L_10006db8:;
  /* 10006db8 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10006dbc push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10006dbe call dword ptr [0x10008030] */ { const u32 m_ = (u32)(0x10008030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10006dc4u; SAVEALL; call_ind(c, t_); RETCHK(0x10006dc4u, 0x10006dbeu); LOADALL; }
L_10006dc5:;
  /* 10006dc5 cmp ecx, dword ptr [0x1000a110] */ { const u32 m_ = (u32)(0x1000a110u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006dcb jne 0x10006dce */ if (!ZF_) goto L_10006dce;
  /* 10006dcd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10006dce:;
  /* 10006dce jmp 0x10006d94 */ goto L_10006d94;
}

void F_10006dd4(CPU *c) {
  NATIVE_HOOK(0x10006dd4u) REGS; LOADALL;
L_10006dd4:;
  /* 10006dd4 jmp dword ptr [0x100080d0] */ { const u32 m_ = (u32)(0x100080d0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10006dda(CPU *c) {
  NATIVE_HOOK(0x10006ddau) REGS; LOADALL;
L_10006dda:;
  /* 10006dda jmp dword ptr [0x100080cc] */ { const u32 m_ = (u32)(0x100080ccu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10006de0(CPU *c) {
  NATIVE_HOOK(0x10006de0u) REGS; LOADALL;
L_10006de0:;
  /* 10006de0 jmp dword ptr [0x100080c8] */ { const u32 m_ = (u32)(0x100080c8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10006de6(CPU *c) {
  NATIVE_HOOK(0x10006de6u) REGS; LOADALL;
L_10006de6:;
  /* 10006de6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006de7 mov bl, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006deb test bl, 2 */ { u32 a_ = (ebx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006dee push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006def mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10006df1 je 0x10006e17 */ if (ZF_) goto L_10006e17;
  /* 10006df3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006df4 push 0x100071ec */ { u32 v_ = 0x100071ecu; esp -= 4; M32(esp) = v_; }
  /* 10006df9 lea edi, [esi - 4] */ edi = (u32)((u32)(esi + 0xfffffffcu));
  /* 10006dfc push dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006dfe push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10006e00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006e01 call 0x1000718c */ esp -= 4; M32(esp) = 0x10006e06u; SAVEALL; F_1000718c(c); ABI_CHECK(0x1000718cu, 0x10006e01u); RETCHK(0x10006e06u, 0x10006e01u); LOADALL;
  /* 10006e06 test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006e09 je 0x10006e12 */ if (ZF_) goto L_10006e12;
  /* 10006e0b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006e0c call 0x10006e46 */ esp -= 4; M32(esp) = 0x10006e11u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10006e0cu); RETCHK(0x10006e11u, 0x10006e0cu); LOADALL;
  /* 10006e11 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10006e12:;
  /* 10006e12 mov eax, edi */ { eax = (u32)(edi); }
  /* 10006e14 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006e15 jmp 0x10006e2c */ goto L_10006e2c;
L_10006e17:;
  /* 10006e17 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10006e19 call 0x100071ec */ esp -= 4; M32(esp) = 0x10006e1eu; SAVEALL; F_100071ec(c); ABI_CHECK(0x100071ecu, 0x10006e19u); RETCHK(0x10006e1eu, 0x10006e19u); LOADALL;
  /* 10006e1e test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006e21 je 0x10006e2a */ if (ZF_) goto L_10006e2a;
  /* 10006e23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006e24 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10006e29u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10006e24u); RETCHK(0x10006e29u, 0x10006e24u); LOADALL;
  /* 10006e29 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10006e2a:;
  /* 10006e2a mov eax, esi */ { eax = (u32)(esi); }
L_10006e2c:;
  /* 10006e2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006e2d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006e2e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10006e40(CPU *c) {
  NATIVE_HOOK(0x10006e40u) REGS; LOADALL;
L_10006e40:;
  /* 10006e40 jmp dword ptr [0x100080c4] */ { SAVEALL; rt_throw(c, 0x100080c4u); }
}

void F_10006e46(CPU *c) {
  NATIVE_HOOK(0x10006e46u) REGS; LOADALL;
L_10006e46:;
  /* 10006e46 jmp dword ptr [0x100080b8] */ { const u32 m_ = (u32)(0x100080b8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10006e4c(CPU *c) {
  NATIVE_HOOK(0x10006e4cu) REGS; LOADALL;
L_10006e4c:;
  /* 10006e4c jmp dword ptr [0x100080b4] */ { const u32 m_ = (u32)(0x100080b4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10006e52(CPU *c) {
  NATIVE_HOOK(0x10006e52u) REGS; LOADALL;
L_10006e52:;
  /* 10006e52 cmp dword ptr [0x1000a150], -1 */ { const u32 m_ = (u32)(0x1000a150u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006e59 jne 0x10006e61 */ if (!ZF_) goto L_10006e61;
  /* 10006e5b jmp dword ptr [0x10008070] */ { const u32 m_ = (u32)(0x10008070u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10006e61:;
  /* 10006e61 push 0x1000a14c */ { u32 v_ = 0x1000a14cu; esp -= 4; M32(esp) = v_; }
  /* 10006e66 push 0x1000a150 */ { u32 v_ = 0x1000a150u; esp -= 4; M32(esp) = v_; }
  /* 10006e6b push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006e6f call 0x100071f2 */ esp -= 4; M32(esp) = 0x10006e74u; SAVEALL; F_100071f2(c); ABI_CHECK(0x100071f2u, 0x10006e6fu); RETCHK(0x10006e74u, 0x10006e6fu); LOADALL;
  /* 10006e74 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006e77 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10006e78(CPU *c) {
  NATIVE_HOOK(0x10006e78u) REGS; LOADALL;
L_10006e78:;
  /* 10006e78 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006e7c call 0x10006e52 */ esp -= 4; M32(esp) = 0x10006e81u; SAVEALL; F_10006e52(c); ABI_CHECK(0x10006e52u, 0x10006e7cu); RETCHK(0x10006e81u, 0x10006e7cu); LOADALL;
  /* 10006e81 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10006e83 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10006e85 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10006e87 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10006e88 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10006e89 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10006e8a(CPU *c) {
  NATIVE_HOOK(0x10006e8au) REGS; LOADALL;
L_10006e8a:;
  /* 10006e8a mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10006e8e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006e90 jne 0x10006ea0 */ if (!ZF_) goto L_10006ea0;
  /* 10006e92 cmp dword ptr [0x1000a140], eax */ { const u32 m_ = (u32)(0x1000a140u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006e98 jle 0x10006ec8 */ if ((ZF_|LT_)) goto L_10006ec8;
  /* 10006e9a dec dword ptr [0x1000a140] */ { const u32 m_ = (u32)(0x1000a140u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10006ea0:;
  /* 10006ea0 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006ea3 mov ecx, dword ptr [0x10008060] */ { const u32 m_ = (u32)(0x10008060u); ecx = (u32)(M32(m_)); }
  /* 10006ea9 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 10006eab mov dword ptr [0x1000a144], ecx */ { const u32 m_ = (u32)(0x1000a144u); M32(m_) = (u32)(ecx); }
  /* 10006eb1 jne 0x10006f02 */ if (!ZF_) goto L_10006f02;
  /* 10006eb3 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10006eb8 call dword ptr [0x10008064] */ { const u32 m_ = (u32)(0x10008064u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10006ebeu; SAVEALL; call_ind(c, t_); RETCHK(0x10006ebeu, 0x10006eb8u); LOADALL; }
  /* 10006ebe test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006ec0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10006ec1 mov dword ptr [0x1000a150], eax */ { const u32 m_ = (u32)(0x1000a150u); M32(m_) = (u32)(eax); }
  /* 10006ec6 jne 0x10006ecc */ if (!ZF_) goto L_10006ecc;
L_10006ec8:;
  /* 10006ec8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10006eca jmp 0x10006f45 */ goto L_10006f45;
L_10006ecc:;
  /* 10006ecc and dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10006ecf mov eax, dword ptr [0x1000a150] */ { const u32 m_ = (u32)(0x1000a150u); eax = (u32)(M32(m_)); }
  /* 10006ed4 mov dword ptr [0x1000a14c], eax */ { const u32 m_ = (u32)(0x1000a14cu); M32(m_) = (u32)(eax); }
  /* 10006ed9 call 0x100071fe */ esp -= 4; M32(esp) = 0x10006edeu; SAVEALL; F_100071fe(c); ABI_CHECK(0x100071feu, 0x10006ed9u); RETCHK(0x10006edeu, 0x10006ed9u); LOADALL;
  /* 10006ede push 0x10007242 */ { u32 v_ = 0x10007242u; esp -= 4; M32(esp) = v_; }
  /* 10006ee3 call 0x10006e78 */ esp -= 4; M32(esp) = 0x10006ee8u; SAVEALL; F_10006e78(c); ABI_CHECK(0x10006e78u, 0x10006ee3u); RETCHK(0x10006ee8u, 0x10006ee3u); LOADALL;
  /* 10006ee8 mov dword ptr [esp], 0x1000a00c */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(0x1000a00cu); }
  /* 10006eef push 0x1000a000 */ { u32 v_ = 0x1000a000u; esp -= 4; M32(esp) = v_; }
  /* 10006ef4 call 0x100071f8 */ esp -= 4; M32(esp) = 0x10006ef9u; SAVEALL; F_100071f8(c); ABI_CHECK(0x100071f8u, 0x10006ef4u); RETCHK(0x10006ef9u, 0x10006ef4u); LOADALL;
  /* 10006ef9 inc dword ptr [0x1000a140] */ { const u32 m_ = (u32)(0x1000a140u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006eff pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10006f00 jmp 0x10006f41 */ goto L_10006f41;
L_10006f02:;
  /* 10006f02 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006f04 jne 0x10006f42 */ if (!ZF_) goto L_10006f42;
  /* 10006f06 mov eax, dword ptr [0x1000a150] */ { const u32 m_ = (u32)(0x1000a150u); eax = (u32)(M32(m_)); }
  /* 10006f0b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006f0d je 0x10006f42 */ if (ZF_) goto L_10006f42;
  /* 10006f0f jmp 0x10006f24 */ goto L_10006f24;
L_10006f11:;
  /* 10006f11 mov ecx, dword ptr [0x1000a14c] */ { const u32 m_ = (u32)(0x1000a14cu); ecx = (u32)(M32(m_)); }
  /* 10006f17 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 10006f19 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006f1b je 0x10006f24 */ if (ZF_) goto L_10006f24;
  /* 10006f1d call ecx */ { u32 t_ = ecx; esp -= 4; M32(esp) = 0x10006f1fu; SAVEALL; call_ind(c, t_); RETCHK(0x10006f1fu, 0x10006f1du); LOADALL; }
  /* 10006f1f mov eax, dword ptr [0x1000a150] */ { const u32 m_ = (u32)(0x1000a150u); eax = (u32)(M32(m_)); }
L_10006f24:;
  /* 10006f24 sub dword ptr [0x1000a14c], 4 */ { const u32 m_ = (u32)(0x1000a14cu); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10006f2b cmp dword ptr [0x1000a14c], eax */ { const u32 m_ = (u32)(0x1000a14cu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006f31 jae 0x10006f11 */ if (!CF_) goto L_10006f11;
  /* 10006f33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006f34 call dword ptr [0x1000806c] */ { const u32 m_ = (u32)(0x1000806cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10006f3au; SAVEALL; call_ind(c, t_); RETCHK(0x10006f3au, 0x10006f34u); LOADALL; }
  /* 10006f3a and dword ptr [0x1000a150], 0 */ { const u32 m_ = (u32)(0x1000a150u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10006f41:;
  /* 10006f41 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10006f42:;
  /* 10006f42 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10006f44 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10006f45:;
  /* 10006f45 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10006f48(CPU *c) {
  NATIVE_HOOK(0x10006f48u) REGS; LOADALL;
L_10006f48:;
  /* 10006f48 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10006f4a push 0x10008928 */ { u32 v_ = 0x10008928u; esp -= 4; M32(esp) = v_; }
  /* 10006f4f call 0x100070dc */ esp -= 4; M32(esp) = 0x10006f54u; SAVEALL; F_100070dc(c); ABI_CHECK(0x100070dcu, 0x10006f4fu); RETCHK(0x10006f54u, 0x10006f4fu); LOADALL;
  /* 10006f54 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10006f56 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006f57 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10006f5a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10006f5c mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 10006f5f mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10006f62 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006f64 jne 0x10006f72 */ if (!ZF_) goto L_10006f72;
  /* 10006f66 cmp dword ptr [0x1000a140], edi */ { const u32 m_ = (u32)(0x1000a140u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006f6c je 0x1000701e */ if (ZF_) goto L_1000701e;
L_10006f72:;
  /* 10006f72 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006f74 je 0x10006f7b */ if (ZF_) goto L_10006f7b;
  /* 10006f76 cmp esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006f79 jne 0x10006fac */ if (!ZF_) goto L_10006fac;
L_10006f7b:;
  /* 10006f7b mov eax, dword ptr [0x1000a148] */ { const u32 m_ = (u32)(0x1000a148u); eax = (u32)(M32(m_)); }
  /* 10006f80 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006f82 je 0x10006f90 */ if (ZF_) goto L_10006f90;
  /* 10006f84 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006f87 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006f88 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006f8b call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10006f8du; SAVEALL; call_ind(c, t_); RETCHK(0x10006f8du, 0x10006f8bu); LOADALL; }
  /* 10006f8d mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10006f90:;
  /* 10006f90 cmp dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006f93 je 0x1000701e */ if (ZF_) goto L_1000701e;
  /* 10006f99 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006f9c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006f9d push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006fa0 call 0x10006e8a */ esp -= 4; M32(esp) = 0x10006fa5u; SAVEALL; F_10006e8a(c); ABI_CHECK(0x10006e8au, 0x10006fa0u); RETCHK(0x10006fa5u, 0x10006fa0u); LOADALL;
  /* 10006fa5 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10006fa8 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006faa je 0x1000701e */ if (ZF_) goto L_1000701e;
L_10006fac:;
  /* 10006fac mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 10006faf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006fb0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006fb1 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006fb4 call 0x1000728c */ esp -= 4; M32(esp) = 0x10006fb9u; SAVEALL; F_1000728c(c); ABI_CHECK(0x1000728cu, 0x10006fb4u); RETCHK(0x10006fb9u, 0x10006fb4u); LOADALL;
  /* 10006fb9 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10006fbc cmp esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006fbf jne 0x10006fcf */ if (!ZF_) goto L_10006fcf;
  /* 10006fc1 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006fc3 jne 0x10006fcf */ if (!ZF_) goto L_10006fcf;
  /* 10006fc5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006fc6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006fc7 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006fca call 0x10006e8a */ esp -= 4; M32(esp) = 0x10006fcfu; SAVEALL; F_10006e8a(c); ABI_CHECK(0x10006e8au, 0x10006fcau); RETCHK(0x10006fcfu, 0x10006fcau); LOADALL;
L_10006fcf:;
  /* 10006fcf cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006fd1 je 0x10006fd8 */ if (ZF_) goto L_10006fd8;
  /* 10006fd3 cmp esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006fd6 jne 0x10007001 */ if (!ZF_) goto L_10007001;
L_10006fd8:;
  /* 10006fd8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006fd9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006fda push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006fdd call 0x10006e8a */ esp -= 4; M32(esp) = 0x10006fe2u; SAVEALL; F_10006e8a(c); ABI_CHECK(0x10006e8au, 0x10006fddu); RETCHK(0x10006fe2u, 0x10006fddu); LOADALL;
  /* 10006fe2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006fe4 jne 0x10006fe9 */ if (!ZF_) goto L_10006fe9;
  /* 10006fe6 mov dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edi); }
L_10006fe9:;
  /* 10006fe9 cmp dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006fec je 0x10007001 */ if (ZF_) goto L_10007001;
  /* 10006fee mov eax, dword ptr [0x1000a148] */ { const u32 m_ = (u32)(0x1000a148u); eax = (u32)(M32(m_)); }
  /* 10006ff3 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006ff5 je 0x10007001 */ if (ZF_) goto L_10007001;
  /* 10006ff7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006ff8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006ff9 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006ffc call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10006ffeu; SAVEALL; call_ind(c, t_); RETCHK(0x10006ffeu, 0x10006ffcu); LOADALL; }
  /* 10006ffe mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10007001:;
  /* 10007001 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10007005 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10007008 jmp 0x10007024 */ goto L_10007024;
L_1000701e:;
  /* 1000701e or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10007022 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10007024:;
  /* 10007024 call 0x10007117 */ esp -= 4; M32(esp) = 0x10007029u; SAVEALL; F_10007117(c); ABI_CHECK(0x10007117u, 0x10007024u); RETCHK(0x10007029u, 0x10007024u); LOADALL;
  /* 10007029 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_1000700a(CPU *c) {
  NATIVE_HOOK(0x1000700au) REGS; LOADALL;
L_1000700a:;
  /* 1000700a mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 1000700d mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1000700f mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 10007011 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10007012 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10007013 call 0x10007286 */ esp -= 4; M32(esp) = 0x10007018u; SAVEALL; F_10007286(c); ABI_CHECK(0x10007286u, 0x10007013u); RETCHK(0x10007018u, 0x10007013u); LOADALL;
  /* 10007018 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10007019 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1000701a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1000701b(CPU *c) {
  NATIVE_HOOK(0x1000701bu) REGS; LOADALL;
L_1000701b:;
  /* 1000701b mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 1000701e or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10007022 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10007024 call 0x10007117 */ esp -= 4; M32(esp) = 0x10007029u; SAVEALL; F_10007117(c); ABI_CHECK(0x10007117u, 0x10007024u); RETCHK(0x10007029u, 0x10007024u); LOADALL;
  /* 10007029 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_1000702c(CPU *c) {
  NATIVE_HOOK(0x1000702cu) REGS; LOADALL;
L_1000702c:;
  /* 1000702c jmp dword ptr [0x100080ac] */ { const u32 m_ = (u32)(0x100080acu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007032(CPU *c) {
  NATIVE_HOOK(0x10007032u) REGS; LOADALL;
L_10007032:;
  /* 10007032 jmp dword ptr [0x100080a8] */ { const u32 m_ = (u32)(0x100080a8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007038(CPU *c) {
  NATIVE_HOOK(0x10007038u) REGS; LOADALL;
L_10007038:;
  /* 10007038 jmp dword ptr [0x100080a4] */ { const u32 m_ = (u32)(0x100080a4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_1000703e(CPU *c) {
  NATIVE_HOOK(0x1000703eu) REGS; LOADALL;
L_1000703e:;
  /* 1000703e jmp dword ptr [0x100080a0] */ { const u32 m_ = (u32)(0x100080a0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007044(CPU *c) {
  NATIVE_HOOK(0x10007044u) REGS; LOADALL;
L_10007044:;
  /* 10007044 jmp dword ptr [0x1000809c] */ { const u32 m_ = (u32)(0x1000809cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_1000704a(CPU *c) {
  NATIVE_HOOK(0x1000704au) REGS; LOADALL;
L_1000704a:;
  /* 1000704a jmp dword ptr [0x10008098] */ { const u32 m_ = (u32)(0x10008098u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007050(CPU *c) {
  NATIVE_HOOK(0x10007050u) REGS; LOADALL;
L_10007050:;
  /* 10007050 jmp dword ptr [0x10008094] */ { const u32 m_ = (u32)(0x10008094u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007056(CPU *c) {
  NATIVE_HOOK(0x10007056u) REGS; LOADALL;
L_10007056:;
  /* 10007056 jmp dword ptr [0x10008090] */ { const u32 m_ = (u32)(0x10008090u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_1000705c(CPU *c) {
  NATIVE_HOOK(0x1000705cu) REGS; LOADALL;
L_1000705c:;
  /* 1000705c jmp dword ptr [0x1000808c] */ { const u32 m_ = (u32)(0x1000808cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007062(CPU *c) {
  NATIVE_HOOK(0x10007062u) REGS; LOADALL;
L_10007062:;
  /* 10007062 jmp dword ptr [0x10008088] */ { const u32 m_ = (u32)(0x10008088u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007068(CPU *c) {
  NATIVE_HOOK(0x10007068u) REGS; LOADALL;
L_10007068:;
  /* 10007068 jmp dword ptr [0x10008084] */ { const u32 m_ = (u32)(0x10008084u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_1000706e(CPU *c) {
  NATIVE_HOOK(0x1000706eu) REGS; LOADALL;
L_1000706e:;
  /* 1000706e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000706f mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10007071 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10007074 mov eax, dword ptr [0x1000a110] */ { const u32 m_ = (u32)(0x1000a110u); eax = (u32)(M32(m_)); }
  /* 10007079 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000707b je 0x10007084 */ if (ZF_) goto L_10007084;
  /* 1000707d cmp eax, 0xbb40e64e */ { u32 a_ = eax, b_ = 0xbb40e64eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10007082 jne 0x100070d2 */ if (!ZF_) goto L_100070d2;
L_10007084:;
  /* 10007084 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10007085 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 10007088 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10007089 call dword ptr [0x1000801c] */ { const u32 m_ = (u32)(0x1000801cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1000708fu; SAVEALL; call_ind(c, t_); RETCHK(0x1000708fu, 0x10007089u); LOADALL; }
  /* 1000708f mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 10007092 xor esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10007095 call dword ptr [0x10008020] */ { const u32 m_ = (u32)(0x10008020u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1000709bu; SAVEALL; call_ind(c, t_); RETCHK(0x1000709bu, 0x10007095u); LOADALL; }
  /* 1000709b xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1000709d call dword ptr [0x10008024] */ { const u32 m_ = (u32)(0x10008024u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100070a3u; SAVEALL; call_ind(c, t_); RETCHK(0x100070a3u, 0x1000709du); LOADALL; }
  /* 100070a3 xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 100070a5 call dword ptr [0x10008028] */ { const u32 m_ = (u32)(0x10008028u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100070abu; SAVEALL; call_ind(c, t_); RETCHK(0x100070abu, 0x100070a5u); LOADALL; }
  /* 100070ab xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 100070ad lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 100070b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100070b1 call dword ptr [0x1000802c] */ { const u32 m_ = (u32)(0x1000802cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100070b7u; SAVEALL; call_ind(c, t_); RETCHK(0x100070b7u, 0x100070b1u); LOADALL; }
  /* 100070b7 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 100070ba xor eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 100070bd xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 100070bf mov dword ptr [0x1000a110], esi */ { const u32 m_ = (u32)(0x1000a110u); M32(m_) = (u32)(esi); }
  /* 100070c5 jne 0x100070d1 */ if (!ZF_) goto L_100070d1;
  /* 100070c7 mov dword ptr [0x1000a110], 0xbb40e64e */ { const u32 m_ = (u32)(0x1000a110u); M32(m_) = (u32)(0xbb40e64eu); }
L_100070d1:;
  /* 100070d1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_100070d2:;
  /* 100070d2 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 100070d3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100070d4(CPU *c) {
  NATIVE_HOOK(0x100070d4u) REGS; LOADALL;
L_100070d4:;
  /* 100070d4 jmp dword ptr [0x10008080] */ { const u32 m_ = (u32)(0x10008080u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_100070dc(CPU *c) {
  NATIVE_HOOK(0x100070dcu) REGS; LOADALL;
L_100070dc:;
  /* 100070dc push 0x10007128 */ { u32 v_ = 0x10007128u; esp -= 4; M32(esp) = v_; }
  /* 100070e1 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 100070e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100070e8 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 100070ec mov dword ptr [esp + 0x10], ebp */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebp); }
  /* 100070f0 lea ebp, [esp + 0x10] */ ebp = (u32)((u32)(esp + 0x10u));
  /* 100070f4 sub esp, eax */ { u32 a_ = esp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100070f6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100070f7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100070f8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100070f9 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 100070fc mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 100070ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10007100 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10007103 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 1000710a mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 1000710d lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 10007110 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 10007116 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10007117(CPU *c) {
  NATIVE_HOOK(0x10007117u) REGS; LOADALL;
L_10007117:;
  /* 10007117 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 1000711a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10007121 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10007122 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10007123 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10007124 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10007125 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10007126 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10007127 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10007128(CPU *c) {
  NATIVE_HOOK(0x10007128u) REGS; LOADALL;
L_10007128:;
  /* 10007128 jmp dword ptr [0x1000807c] */ { const u32 m_ = (u32)(0x1000807cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_1000712e(CPU *c) {
  NATIVE_HOOK(0x1000712eu) REGS; LOADALL;
L_1000712e:;
  /* 1000712e push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 10007130 push 0x10008938 */ { u32 v_ = 0x10008938u; esp -= 4; M32(esp) = v_; }
  /* 10007135 call 0x100070dc */ esp -= 4; M32(esp) = 0x1000713au; SAVEALL; F_100070dc(c); ABI_CHECK(0x100070dcu, 0x10007135u); RETCHK(0x1000713au, 0x10007135u); LOADALL;
  /* 1000713a and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1000713e:;
  /* 1000713e dec dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10007141 js 0x10007151 */ if (SF_) goto L_10007151;
  /* 10007143 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10007146 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10007149 mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 1000714c call dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1000714fu; SAVEALL; call_ind(c, t_); RETCHK(0x1000714fu, 0x1000714cu); LOADALL; }
  /* 1000714f jmp 0x1000713e */ goto L_1000713e;
L_10007151:;
  /* 10007151 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10007155 call 0x10007117 */ esp -= 4; M32(esp) = 0x1000715au; SAVEALL; F_10007117(c); ABI_CHECK(0x10007117u, 0x10007155u); RETCHK(0x1000715au, 0x10007155u); LOADALL;
  /* 1000715a ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_1000715d(CPU *c) {
  NATIVE_HOOK(0x1000715du) REGS; LOADALL;
L_1000715d:;
  /* 1000715d mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10007160 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10007163 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10007166 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10007168 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 1000716b mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 1000716e cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10007174 je 0x10007186 */ if (ZF_) goto L_10007186;
  /* 10007176 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 1000717d mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 10007180 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10007186:;
  /* 10007186 call 0x100072ac */ esp -= 4; M32(esp) = 0x1000718bu; SAVEALL; F_100072ac(c); ABI_CHECK(0x100072acu, 0x10007186u); RETCHK(0x1000718bu, 0x10007186u); LOADALL;
  /* 1000718b int3 */ TRAP(0x1000718bu, "int3");
}

void F_10007181(CPU *c) {
  NATIVE_HOOK(0x10007181u) REGS; LOADALL;
  goto L_10007181;
L_10007151:;
  /* 10007151 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10007155 call 0x10007117 */ esp -= 4; M32(esp) = 0x1000715au; SAVEALL; F_10007117(c); ABI_CHECK(0x10007117u, 0x10007155u); RETCHK(0x1000715au, 0x10007155u); LOADALL;
  /* 1000715a ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_10007181:;
  /* 10007181 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10007184 jmp 0x10007151 */ goto L_10007151;
}

void F_1000718c(CPU *c) {
  NATIVE_HOOK(0x1000718cu) REGS; LOADALL;
L_1000718c:;
  /* 1000718c push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 1000718e push 0x10008948 */ { u32 v_ = 0x10008948u; esp -= 4; M32(esp) = v_; }
  /* 10007193 call 0x100070dc */ esp -= 4; M32(esp) = 0x10007198u; SAVEALL; F_100070dc(c); ABI_CHECK(0x100070dcu, 0x10007193u); RETCHK(0x10007198u, 0x10007193u); LOADALL;
  /* 10007198 and dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1000719c mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 1000719f mov eax, esi */ { eax = (u32)(esi); }
  /* 100071a1 imul eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 100071a5 add dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 100071a8 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_100071ac:;
  /* 100071ac dec dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 100071af js 0x100071bc */ if (SF_) goto L_100071bc;
  /* 100071b1 sub dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 100071b4 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 100071b7 call dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100071bau; SAVEALL; call_ind(c, t_); RETCHK(0x100071bau, 0x100071b7u); LOADALL; }
  /* 100071ba jmp 0x100071ac */ goto L_100071ac;
L_100071bc:;
  /* 100071bc mov dword ptr [ebp - 0x1c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x1u); }
  /* 100071c3 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 100071c7 call 0x100071d4 */ esp -= 4; M32(esp) = 0x100071ccu; SAVEALL; F_100071d4(c); ABI_CHECK(0x100071d4u, 0x100071c7u); RETCHK(0x100071ccu, 0x100071c7u); LOADALL;
  /* 100071cc call 0x10007117 */ esp -= 4; M32(esp) = 0x100071d1u; SAVEALL; F_10007117(c); ABI_CHECK(0x10007117u, 0x100071ccu); RETCHK(0x100071d1u, 0x100071ccu); LOADALL;
  /* 100071d1 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_100071d4(CPU *c) {
  NATIVE_HOOK(0x100071d4u) REGS; LOADALL;
L_100071d4:;
  /* 100071d4 cmp dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100071d8 jne 0x100071eb */ if (!ZF_) goto L_100071eb;
  /* 100071da push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 100071dd push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 100071e0 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 100071e3 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 100071e6 call 0x1000712e */ esp -= 4; M32(esp) = 0x100071ebu; SAVEALL; F_1000712e(c); ABI_CHECK(0x1000712eu, 0x100071e6u); RETCHK(0x100071ebu, 0x100071e6u); LOADALL;
L_100071eb:;
  /* 100071eb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100071ec(CPU *c) {
  NATIVE_HOOK(0x100071ecu) REGS; LOADALL;
L_100071ec:;
  /* 100071ec jmp dword ptr [0x10008078] */ { const u32 m_ = (u32)(0x10008078u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_100071f2(CPU *c) {
  NATIVE_HOOK(0x100071f2u) REGS; LOADALL;
L_100071f2:;
  /* 100071f2 jmp dword ptr [0x10008074] */ { const u32 m_ = (u32)(0x10008074u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_100071f8(CPU *c) {
  NATIVE_HOOK(0x100071f8u) REGS; LOADALL;
L_100071f8:;
  /* 100071f8 jmp dword ptr [0x10008068] */ { const u32 m_ = (u32)(0x10008068u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_100071fe(CPU *c) {
  NATIVE_HOOK(0x100071feu) REGS; LOADALL;
L_100071fe:;
  /* 100071fe push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10007200 push 0x10008958 */ { u32 v_ = 0x10008958u; esp -= 4; M32(esp) = v_; }
  /* 10007205 call 0x100070dc */ esp -= 4; M32(esp) = 0x1000720au; SAVEALL; F_100070dc(c); ABI_CHECK(0x100070dcu, 0x10007205u); RETCHK(0x1000720au, 0x10007205u); LOADALL;
  /* 1000720a mov dword ptr [ebp - 0x1c], 0x10008ad4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x10008ad4u); }
L_10007211:;
  /* 10007211 cmp dword ptr [ebp - 0x1c], 0x10008ad4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10008ad4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10007218 jae 0x1000723c */ if (!CF_) goto L_1000723c;
  /* 1000721a and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1000721e mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10007221 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10007223 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10007225 je 0x10007232 */ if (ZF_) goto L_10007232;
  /* 10007227 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10007229u; SAVEALL; call_ind(c, t_); RETCHK(0x10007229u, 0x10007227u); LOADALL; }
  /* 10007229 jmp 0x10007232 */ goto L_10007232;
L_10007232:;
  /* 10007232 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10007236 add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 1000723a jmp 0x10007211 */ goto L_10007211;
L_1000723c:;
  /* 1000723c call 0x10007117 */ esp -= 4; M32(esp) = 0x10007241u; SAVEALL; F_10007117(c); ABI_CHECK(0x10007117u, 0x1000723cu); RETCHK(0x10007241u, 0x1000723cu); LOADALL;
  /* 10007241 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1000722b(CPU *c) {
  NATIVE_HOOK(0x1000722bu) REGS; LOADALL;
L_1000722b:;
  /* 1000722b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1000722d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1000722e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1000722f(CPU *c) {
  NATIVE_HOOK(0x1000722fu) REGS; LOADALL;
  goto L_1000722f;
L_10007211:;
  /* 10007211 cmp dword ptr [ebp - 0x1c], 0x10008ad4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10008ad4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10007218 jae 0x1000723c */ if (!CF_) goto L_1000723c;
  /* 1000721a and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1000721e mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10007221 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10007223 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10007225 je 0x10007232 */ if (ZF_) goto L_10007232;
  /* 10007227 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10007229u; SAVEALL; call_ind(c, t_); RETCHK(0x10007229u, 0x10007227u); LOADALL; }
  /* 10007229 jmp 0x10007232 */ goto L_10007232;
L_1000722f:;
  /* 1000722f mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
L_10007232:;
  /* 10007232 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10007236 add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 1000723a jmp 0x10007211 */ goto L_10007211;
L_1000723c:;
  /* 1000723c call 0x10007117 */ esp -= 4; M32(esp) = 0x10007241u; SAVEALL; F_10007117(c); ABI_CHECK(0x10007117u, 0x1000723cu); RETCHK(0x10007241u, 0x1000723cu); LOADALL;
  /* 10007241 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10007242(CPU *c) {
  NATIVE_HOOK(0x10007242u) REGS; LOADALL;
L_10007242:;
  /* 10007242 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10007244 push 0x10008968 */ { u32 v_ = 0x10008968u; esp -= 4; M32(esp) = v_; }
  /* 10007249 call 0x100070dc */ esp -= 4; M32(esp) = 0x1000724eu; SAVEALL; F_100070dc(c); ABI_CHECK(0x100070dcu, 0x10007249u); RETCHK(0x1000724eu, 0x10007249u); LOADALL;
  /* 1000724e mov dword ptr [ebp - 0x1c], 0x10008adc */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x10008adcu); }
L_10007255:;
  /* 10007255 cmp dword ptr [ebp - 0x1c], 0x10008adc */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10008adcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000725c jae 0x10007280 */ if (!CF_) goto L_10007280;
  /* 1000725e and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10007262 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10007265 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10007267 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10007269 je 0x10007276 */ if (ZF_) goto L_10007276;
  /* 1000726b call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1000726du; SAVEALL; call_ind(c, t_); RETCHK(0x1000726du, 0x1000726bu); LOADALL; }
  /* 1000726d jmp 0x10007276 */ goto L_10007276;
L_10007276:;
  /* 10007276 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1000727a add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 1000727e jmp 0x10007255 */ goto L_10007255;
L_10007280:;
  /* 10007280 call 0x10007117 */ esp -= 4; M32(esp) = 0x10007285u; SAVEALL; F_10007117(c); ABI_CHECK(0x10007117u, 0x10007280u); RETCHK(0x10007285u, 0x10007280u); LOADALL;
  /* 10007285 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1000726f(CPU *c) {
  NATIVE_HOOK(0x1000726fu) REGS; LOADALL;
L_1000726f:;
  /* 1000726f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10007271 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10007272 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10007273(CPU *c) {
  NATIVE_HOOK(0x10007273u) REGS; LOADALL;
  goto L_10007273;
L_10007255:;
  /* 10007255 cmp dword ptr [ebp - 0x1c], 0x10008adc */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10008adcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000725c jae 0x10007280 */ if (!CF_) goto L_10007280;
  /* 1000725e and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10007262 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10007265 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10007267 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10007269 je 0x10007276 */ if (ZF_) goto L_10007276;
  /* 1000726b call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1000726du; SAVEALL; call_ind(c, t_); RETCHK(0x1000726du, 0x1000726bu); LOADALL; }
  /* 1000726d jmp 0x10007276 */ goto L_10007276;
L_10007273:;
  /* 10007273 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
L_10007276:;
  /* 10007276 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1000727a add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 1000727e jmp 0x10007255 */ goto L_10007255;
L_10007280:;
  /* 10007280 call 0x10007117 */ esp -= 4; M32(esp) = 0x10007285u; SAVEALL; F_10007117(c); ABI_CHECK(0x10007117u, 0x10007280u); RETCHK(0x10007285u, 0x10007280u); LOADALL;
  /* 10007285 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10007286(CPU *c) {
  NATIVE_HOOK(0x10007286u) REGS; LOADALL;
L_10007286:;
  /* 10007286 jmp dword ptr [0x1000805c] */ { const u32 m_ = (u32)(0x1000805cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_1000728c(CPU *c) {
  NATIVE_HOOK(0x1000728cu) REGS; LOADALL;
L_1000728c:;
  /* 1000728c cmp dword ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10007291 jne 0x100072a6 */ if (!ZF_) goto L_100072a6;
  /* 10007293 cmp dword ptr [0x1000a148], 0 */ { const u32 m_ = (u32)(0x1000a148u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000729a jne 0x100072a6 */ if (!ZF_) goto L_100072a6;
  /* 1000729c push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 100072a0 call dword ptr [0x10008034] */ { const u32 m_ = (u32)(0x10008034u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100072a6u; SAVEALL; call_ind(c, t_); RETCHK(0x100072a6u, 0x100072a0u); LOADALL; }
L_100072a6:;
  /* 100072a6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 100072a8 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100072a9 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_100072ac(CPU *c) {
  NATIVE_HOOK(0x100072acu) REGS; LOADALL;
L_100072ac:;
  /* 100072ac jmp dword ptr [0x10008058] */ { const u32 m_ = (u32)(0x10008058u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_100072c0(CPU *c) {
  NATIVE_HOOK(0x100072c0u) REGS; LOADALL;
L_100072c0:;
  /* 100072c0 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 100072c3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100072c4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 100072c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100072c8 call 0x10001230 */ esp -= 4; M32(esp) = 0x100072cdu; SAVEALL; F_10001230(c); ABI_CHECK(0x10001230u, 0x100072c8u); RETCHK(0x100072cdu, 0x100072c8u); LOADALL;
  /* 100072cd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100072d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100072d1(CPU *c) {
  NATIVE_HOOK(0x100072d1u) REGS; LOADALL;
  goto L_100072d1;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_100072d1:;
  /* 100072d1 mov eax, 0x10008b5c */ { eax = (u32)(0x10008b5cu); }
  /* 100072d6 jmp 0x10006e32 */ goto L_10006e32;
}

void F_100072e0(CPU *c) {
  NATIVE_HOOK(0x100072e0u) REGS; LOADALL;
L_100072e0:;
  /* 100072e0 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 100072e3 jmp dword ptr [0x100080c0] */ { const u32 m_ = (u32)(0x100080c0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_100072e9(CPU *c) {
  NATIVE_HOOK(0x100072e9u) REGS; LOADALL;
  goto L_100072e9;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_100072e9:;
  /* 100072e9 mov eax, 0x10008b04 */ { eax = (u32)(0x10008b04u); }
  /* 100072ee jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007300(CPU *c) {
  NATIVE_HOOK(0x10007300u) REGS; LOADALL;
L_10007300:;
  /* 10007300 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 10007303 jmp dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007309(CPU *c) {
  NATIVE_HOOK(0x10007309u) REGS; LOADALL;
  goto L_10007309;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007309:;
  /* 10007309 mov eax, 0x10008bd8 */ { eax = (u32)(0x10008bd8u); }
  /* 1000730e jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007320(CPU *c) {
  NATIVE_HOOK(0x10007320u) REGS; LOADALL;
  goto L_10007320;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007320:;
  /* 10007320 mov eax, 0x10008c64 */ { eax = (u32)(0x10008c64u); }
  /* 10007325 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007330(CPU *c) {
  NATIVE_HOOK(0x10007330u) REGS; LOADALL;
L_10007330:;
  /* 10007330 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 10007333 jmp dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007339(CPU *c) {
  NATIVE_HOOK(0x10007339u) REGS; LOADALL;
  goto L_10007339;
L_10001340:;
  /* 10001340 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10001343 jmp dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007339:;
  /* 10007339 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 1000733c jmp 0x10001340 */ goto L_10001340;
}

void F_10007341(CPU *c) {
  NATIVE_HOOK(0x10007341u) REGS; LOADALL;
  goto L_10007341;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007341:;
  /* 10007341 mov eax, 0x10008c90 */ { eax = (u32)(0x10008c90u); }
  /* 10007346 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007350(CPU *c) {
  NATIVE_HOOK(0x10007350u) REGS; LOADALL;
  goto L_10007350;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007350:;
  /* 10007350 mov eax, 0x10008ce0 */ { eax = (u32)(0x10008ce0u); }
  /* 10007355 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007360(CPU *c) {
  NATIVE_HOOK(0x10007360u) REGS; LOADALL;
L_10007360:;
  /* 10007360 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 10007363 jmp dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007369(CPU *c) {
  NATIVE_HOOK(0x10007369u) REGS; LOADALL;
  goto L_10007369;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007369:;
  /* 10007369 mov eax, 0x10008d04 */ { eax = (u32)(0x10008d04u); }
  /* 1000736e jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007380(CPU *c) {
  NATIVE_HOOK(0x10007380u) REGS; LOADALL;
L_10007380:;
  /* 10007380 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10007383 jmp dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007389(CPU *c) {
  NATIVE_HOOK(0x10007389u) REGS; LOADALL;
  goto L_10007389;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007389:;
  /* 10007389 mov eax, 0x10008d28 */ { eax = (u32)(0x10008d28u); }
  /* 1000738e jmp 0x10006e32 */ goto L_10006e32;
}

void F_100073a0(CPU *c) {
  NATIVE_HOOK(0x100073a0u) REGS; LOADALL;
L_100073a0:;
  /* 100073a0 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 100073a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100073a4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 100073a7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100073a8 call 0x10001230 */ esp -= 4; M32(esp) = 0x100073adu; SAVEALL; F_10001230(c); ABI_CHECK(0x10001230u, 0x100073a8u); RETCHK(0x100073adu, 0x100073a8u); LOADALL;
  /* 100073ad add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100073b0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100073b1(CPU *c) {
  NATIVE_HOOK(0x100073b1u) REGS; LOADALL;
  goto L_100073b1;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_100073b1:;
  /* 100073b1 mov eax, 0x10008d80 */ { eax = (u32)(0x10008d80u); }
  /* 100073b6 jmp 0x10006e32 */ goto L_10006e32;
}

void F_100073c0(CPU *c) {
  NATIVE_HOOK(0x100073c0u) REGS; LOADALL;
L_100073c0:;
  /* 100073c0 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 100073c3 jmp dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_100073c9(CPU *c) {
  NATIVE_HOOK(0x100073c9u) REGS; LOADALL;
L_100073c9:;
  /* 100073c9 lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 100073cc jmp dword ptr [0x100080c0] */ { const u32 m_ = (u32)(0x100080c0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_100073d2(CPU *c) {
  NATIVE_HOOK(0x100073d2u) REGS; LOADALL;
  goto L_100073d2;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_100073d2:;
  /* 100073d2 mov eax, 0x10008dac */ { eax = (u32)(0x10008dacu); }
  /* 100073d7 jmp 0x10006e32 */ goto L_10006e32;
}

void F_100073e0(CPU *c) {
  NATIVE_HOOK(0x100073e0u) REGS; LOADALL;
L_100073e0:;
  /* 100073e0 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 100073e3 jmp 0x10002610 */ SAVEALL; F_10002610(c); return;
}

void F_100073e8(CPU *c) {
  NATIVE_HOOK(0x100073e8u) REGS; LOADALL;
L_100073e8:;
  /* 100073e8 lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 100073eb jmp 0x100026d0 */ SAVEALL; F_100026d0(c); return;
}

void F_100073f0(CPU *c) {
  NATIVE_HOOK(0x100073f0u) REGS; LOADALL;
  goto L_100073f0;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_100073f0:;
  /* 100073f0 mov eax, 0x10008dd8 */ { eax = (u32)(0x10008dd8u); }
  /* 100073f5 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007400(CPU *c) {
  NATIVE_HOOK(0x10007400u) REGS; LOADALL;
L_10007400:;
  /* 10007400 lea ecx, [ebp - 0x60] */ ecx = (u32)((u32)(ebp + 0xffffffa0u));
  /* 10007403 jmp 0x10001670 */ SAVEALL; F_10001670(c); return;
}

void F_10007408(CPU *c) {
  NATIVE_HOOK(0x10007408u) REGS; LOADALL;
L_10007408:;
  /* 10007408 lea ecx, [ebp - 0x7c] */ ecx = (u32)((u32)(ebp + 0xffffff84u));
  /* 1000740b jmp dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007411(CPU *c) {
  NATIVE_HOOK(0x10007411u) REGS; LOADALL;
  goto L_10007411;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007411:;
  /* 10007411 mov eax, 0x10008e04 */ { eax = (u32)(0x10008e04u); }
  /* 10007416 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007420(CPU *c) {
  NATIVE_HOOK(0x10007420u) REGS; LOADALL;
  goto L_10007420;
L_100033c0:;
  /* 100033c0 mov dword ptr [ecx], 0x100081a0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x100081a0u); }
  /* 100033c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10007420:;
  /* 10007420 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10007423 jmp 0x100033c0 */ goto L_100033c0;
}

void F_10007428(CPU *c) {
  NATIVE_HOOK(0x10007428u) REGS; LOADALL;
L_10007428:;
  /* 10007428 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 1000742b add ecx, 0x14 */ { u32 a_ = ecx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1000742e jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_10007433(CPU *c) {
  NATIVE_HOOK(0x10007433u) REGS; LOADALL;
L_10007433:;
  /* 10007433 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10007436 add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10007439 jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_1000743e(CPU *c) {
  NATIVE_HOOK(0x1000743eu) REGS; LOADALL;
  goto L_1000743e;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_1000743e:;
  /* 1000743e mov eax, 0x10008e38 */ { eax = (u32)(0x10008e38u); }
  /* 10007443 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007450(CPU *c) {
  NATIVE_HOOK(0x10007450u) REGS; LOADALL;
  goto L_10007450;
L_100033c0:;
  /* 100033c0 mov dword ptr [ecx], 0x100081a0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x100081a0u); }
  /* 100033c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10007450:;
  /* 10007450 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10007453 jmp 0x100033c0 */ goto L_100033c0;
}

void F_10007458(CPU *c) {
  NATIVE_HOOK(0x10007458u) REGS; LOADALL;
L_10007458:;
  /* 10007458 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 1000745b add ecx, 0x14 */ { u32 a_ = ecx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1000745e jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_10007463(CPU *c) {
  NATIVE_HOOK(0x10007463u) REGS; LOADALL;
  goto L_10007463;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007463:;
  /* 10007463 mov eax, 0x10008e64 */ { eax = (u32)(0x10008e64u); }
  /* 10007468 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007470(CPU *c) {
  NATIVE_HOOK(0x10007470u) REGS; LOADALL;
  goto L_10007470;
L_100033c0:;
  /* 100033c0 mov dword ptr [ecx], 0x100081a0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x100081a0u); }
  /* 100033c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10007470:;
  /* 10007470 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10007473 jmp 0x100033c0 */ goto L_100033c0;
}

void F_10007478(CPU *c) {
  NATIVE_HOOK(0x10007478u) REGS; LOADALL;
L_10007478:;
  /* 10007478 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 1000747b add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1000747e jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_10007483(CPU *c) {
  NATIVE_HOOK(0x10007483u) REGS; LOADALL;
  goto L_10007483;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007483:;
  /* 10007483 mov eax, 0x10008e90 */ { eax = (u32)(0x10008e90u); }
  /* 10007488 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007490(CPU *c) {
  NATIVE_HOOK(0x10007490u) REGS; LOADALL;
L_10007490:;
  /* 10007490 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 10007493 jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_10007498(CPU *c) {
  NATIVE_HOOK(0x10007498u) REGS; LOADALL;
  goto L_10007498;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007498:;
  /* 10007498 mov eax, 0x10008f64 */ { eax = (u32)(0x10008f64u); }
  /* 1000749d jmp 0x10006e32 */ goto L_10006e32;
}

void F_100074b0(CPU *c) {
  NATIVE_HOOK(0x100074b0u) REGS; LOADALL;
L_100074b0:;
  /* 100074b0 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 100074b3 jmp 0x10003af0 */ SAVEALL; F_10003af0(c); return;
}

void F_100074b8(CPU *c) {
  NATIVE_HOOK(0x100074b8u) REGS; LOADALL;
L_100074b8:;
  /* 100074b8 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 100074bb add ecx, 0x3c */ { u32 a_ = ecx, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 100074be jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_100074c3(CPU *c) {
  NATIVE_HOOK(0x100074c3u) REGS; LOADALL;
  goto L_100074c3;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_100074c3:;
  /* 100074c3 mov eax, 0x10008ebc */ { eax = (u32)(0x10008ebcu); }
  /* 100074c8 jmp 0x10006e32 */ goto L_10006e32;
}

void F_100074d0(CPU *c) {
  NATIVE_HOOK(0x100074d0u) REGS; LOADALL;
L_100074d0:;
  /* 100074d0 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 100074d3 jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_100074d8(CPU *c) {
  NATIVE_HOOK(0x100074d8u) REGS; LOADALL;
L_100074d8:;
  /* 100074d8 lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 100074db jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_100074e0(CPU *c) {
  NATIVE_HOOK(0x100074e0u) REGS; LOADALL;
  goto L_100074e0;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_100074e0:;
  /* 100074e0 mov eax, 0x10008ee8 */ { eax = (u32)(0x10008ee8u); }
  /* 100074e5 jmp 0x10006e32 */ goto L_10006e32;
}

void F_100074f0(CPU *c) {
  NATIVE_HOOK(0x100074f0u) REGS; LOADALL;
L_100074f0:;
  /* 100074f0 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 100074f3 jmp 0x10003af0 */ SAVEALL; F_10003af0(c); return;
}

void F_100074f8(CPU *c) {
  NATIVE_HOOK(0x100074f8u) REGS; LOADALL;
  goto L_100074f8;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_100074f8:;
  /* 100074f8 mov eax, 0x10008f0c */ { eax = (u32)(0x10008f0cu); }
  /* 100074fd jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007510(CPU *c) {
  NATIVE_HOOK(0x10007510u) REGS; LOADALL;
L_10007510:;
  /* 10007510 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10007513 jmp 0x10003af0 */ SAVEALL; F_10003af0(c); return;
}

void F_10007518(CPU *c) {
  NATIVE_HOOK(0x10007518u) REGS; LOADALL;
L_10007518:;
  /* 10007518 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 1000751b add ecx, 0x34 */ { u32 a_ = ecx, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1000751e jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_10007523(CPU *c) {
  NATIVE_HOOK(0x10007523u) REGS; LOADALL;
L_10007523:;
  /* 10007523 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10007526 add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10007529 jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_1000752e(CPU *c) {
  NATIVE_HOOK(0x1000752eu) REGS; LOADALL;
  goto L_1000752e;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_1000752e:;
  /* 1000752e mov eax, 0x10008f40 */ { eax = (u32)(0x10008f40u); }
  /* 10007533 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007540(CPU *c) {
  NATIVE_HOOK(0x10007540u) REGS; LOADALL;
L_10007540:;
  /* 10007540 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10007543 jmp 0x10003af0 */ SAVEALL; F_10003af0(c); return;
}

void F_10007548(CPU *c) {
  NATIVE_HOOK(0x10007548u) REGS; LOADALL;
  goto L_10007548;
L_100041e0:;
  /* 100041e0 jmp 0x100038b0 */ SAVEALL; F_100038b0(c); return;
L_10007548:;
  /* 10007548 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 1000754b add ecx, 0x34 */ { u32 a_ = ecx, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1000754e jmp 0x100041e0 */ goto L_100041e0;
}

void F_10007553(CPU *c) {
  NATIVE_HOOK(0x10007553u) REGS; LOADALL;
  goto L_10007553;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007553:;
  /* 10007553 mov eax, 0x10008f90 */ { eax = (u32)(0x10008f90u); }
  /* 10007558 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007560(CPU *c) {
  NATIVE_HOOK(0x10007560u) REGS; LOADALL;
L_10007560:;
  /* 10007560 mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10007563 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10007564 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10007569u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10007564u); RETCHK(0x10007569u, 0x10007564u); LOADALL;
  /* 10007569 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1000756a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1000756b(CPU *c) {
  NATIVE_HOOK(0x1000756bu) REGS; LOADALL;
  goto L_1000756b;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_1000756b:;
  /* 1000756b mov eax, 0x10008fb4 */ { eax = (u32)(0x10008fb4u); }
  /* 10007570 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007580(CPU *c) {
  NATIVE_HOOK(0x10007580u) REGS; LOADALL;
L_10007580:;
  /* 10007580 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 10007583 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10007584 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10007589u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10007584u); RETCHK(0x10007589u, 0x10007584u); LOADALL;
  /* 10007589 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1000758a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1000758b(CPU *c) {
  NATIVE_HOOK(0x1000758bu) REGS; LOADALL;
  goto L_1000758b;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_1000758b:;
  /* 1000758b mov eax, 0x10008fd8 */ { eax = (u32)(0x10008fd8u); }
  /* 10007590 jmp 0x10006e32 */ goto L_10006e32;
}

void F_100075a0(CPU *c) {
  NATIVE_HOOK(0x100075a0u) REGS; LOADALL;
L_100075a0:;
  /* 100075a0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 100075a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100075a4 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100075a9u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100075a4u); RETCHK(0x100075a9u, 0x100075a4u); LOADALL;
  /* 100075a9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 100075aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100075ab(CPU *c) {
  NATIVE_HOOK(0x100075abu) REGS; LOADALL;
L_100075ab:;
  /* 100075ab mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 100075ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100075af call 0x10006e46 */ esp -= 4; M32(esp) = 0x100075b4u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100075afu); RETCHK(0x100075b4u, 0x100075afu); LOADALL;
  /* 100075b4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 100075b5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100075b6(CPU *c) {
  NATIVE_HOOK(0x100075b6u) REGS; LOADALL;
L_100075b6:;
  /* 100075b6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 100075b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100075ba call 0x10006e46 */ esp -= 4; M32(esp) = 0x100075bfu; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100075bau); RETCHK(0x100075bfu, 0x100075bau); LOADALL;
  /* 100075bf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 100075c0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100075c1(CPU *c) {
  NATIVE_HOOK(0x100075c1u) REGS; LOADALL;
L_100075c1:;
  /* 100075c1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 100075c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100075c5 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100075cau; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100075c5u); RETCHK(0x100075cau, 0x100075c5u); LOADALL;
  /* 100075ca pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 100075cb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100075cc(CPU *c) {
  NATIVE_HOOK(0x100075ccu) REGS; LOADALL;
L_100075cc:;
  /* 100075cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 100075cf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100075d0 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100075d5u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100075d0u); RETCHK(0x100075d5u, 0x100075d0u); LOADALL;
  /* 100075d5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 100075d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100075d7(CPU *c) {
  NATIVE_HOOK(0x100075d7u) REGS; LOADALL;
  goto L_100075d7;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_100075d7:;
  /* 100075d7 mov eax, 0x10009040 */ { eax = (u32)(0x10009040u); }
  /* 100075dc jmp 0x10006e32 */ goto L_10006e32;
}

void F_100075f0(CPU *c) {
  NATIVE_HOOK(0x100075f0u) REGS; LOADALL;
L_100075f0:;
  /* 100075f0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 100075f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100075f4 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100075f9u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100075f4u); RETCHK(0x100075f9u, 0x100075f4u); LOADALL;
  /* 100075f9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 100075fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100075fb(CPU *c) {
  NATIVE_HOOK(0x100075fbu) REGS; LOADALL;
L_100075fb:;
  /* 100075fb mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 100075fe jmp 0x10003af0 */ SAVEALL; F_10003af0(c); return;
}

void F_10007603(CPU *c) {
  NATIVE_HOOK(0x10007603u) REGS; LOADALL;
  goto L_10007603;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007603:;
  /* 10007603 mov eax, 0x1000906c */ { eax = (u32)(0x1000906cu); }
  /* 10007608 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007610(CPU *c) {
  NATIVE_HOOK(0x10007610u) REGS; LOADALL;
L_10007610:;
  /* 10007610 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 10007613 jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_10007618(CPU *c) {
  NATIVE_HOOK(0x10007618u) REGS; LOADALL;
  goto L_10007618;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007618:;
  /* 10007618 mov eax, 0x10008ffc */ { eax = (u32)(0x10008ffcu); }
  /* 1000761d jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007630(CPU *c) {
  NATIVE_HOOK(0x10007630u) REGS; LOADALL;
L_10007630:;
  /* 10007630 lea ecx, [ebp - 0xa8] */ ecx = (u32)((u32)(ebp + 0xffffff58u));
  /* 10007636 jmp 0x100038b0 */ SAVEALL; F_100038b0(c); return;
}

void F_1000763b(CPU *c) {
  NATIVE_HOOK(0x1000763bu) REGS; LOADALL;
L_1000763b:;
  /* 1000763b lea ecx, [ebp - 0x74] */ ecx = (u32)((u32)(ebp + 0xffffff8cu));
  /* 1000763e jmp 0x100038b0 */ SAVEALL; F_100038b0(c); return;
}

void F_10007643(CPU *c) {
  NATIVE_HOOK(0x10007643u) REGS; LOADALL;
L_10007643:;
  /* 10007643 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 10007646 jmp 0x100038b0 */ SAVEALL; F_100038b0(c); return;
}

void F_1000764b(CPU *c) {
  NATIVE_HOOK(0x1000764bu) REGS; LOADALL;
  goto L_1000764b;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_1000764b:;
  /* 1000764b mov eax, 0x100090a0 */ { eax = (u32)(0x100090a0u); }
  /* 10007650 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007660(CPU *c) {
  NATIVE_HOOK(0x10007660u) REGS; LOADALL;
L_10007660:;
  /* 10007660 mov ecx, 0x1000a130 */ { ecx = (u32)(0x1000a130u); }
  /* 10007665 call 0x10003380 */ esp -= 4; M32(esp) = 0x1000766au; SAVEALL; F_10003380(c); ABI_CHECK(0x10003380u, 0x10007665u); RETCHK(0x1000766au, 0x10007665u); LOADALL;
  /* 1000766a push 0x10007680 */ { u32 v_ = 0x10007680u; esp -= 4; M32(esp) = v_; }
  /* 1000766f call 0x10006e78 */ esp -= 4; M32(esp) = 0x10007674u; SAVEALL; F_10006e78(c); ABI_CHECK(0x10006e78u, 0x1000766fu); RETCHK(0x10007674u, 0x1000766fu); LOADALL;
  /* 10007674 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10007675 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10007680(CPU *c) {
  NATIVE_HOOK(0x10007680u) REGS; LOADALL;
  goto L_10007680;
L_10003350:;
  /* 10003350 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10003351 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10003354 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003355 lea esi, [ecx + 4] */ esi = (u32)((u32)(ecx + 0x4u));
  /* 10003358 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1000335a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000335b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1000335c lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 10003360 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003361 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10003363 call 0x10003130 */ esp -= 4; M32(esp) = 0x10003368u; SAVEALL; F_10003130(c); ABI_CHECK(0x10003130u, 0x10003363u); RETCHK(0x10003368u, 0x10003363u); LOADALL;
  /* 10003368 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1000336b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1000336c call 0x10006e46 */ esp -= 4; M32(esp) = 0x10003371u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x1000336cu); RETCHK(0x10003371u, 0x1000336cu); LOADALL;
  /* 10003371 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003374 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10003376 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 10003379 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 1000337c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000337d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1000337e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10007680:;
  /* 10007680 mov ecx, 0x1000a130 */ { ecx = (u32)(0x1000a130u); }
  /* 10007685 jmp 0x10003350 */ goto L_10003350;
}

void F_10101000(CPU *c) {
  NATIVE_HOOK(0x10101000u) REGS; LOADALL;
L_10101000:;
  /* 10101000 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10101002 push 0x1010c718 */ { u32 v_ = 0x1010c718u; esp -= 4; M32(esp) = v_; }
  /* 10101007 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1010100d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010100e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10101015 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101016 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101017 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10101019 mov dword ptr [esp + 4], esi */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(esi); }
  /* 1010101d call 0x10104a00 */ esp -= 4; M32(esp) = 0x10101022u; SAVEALL; F_10104a00(c); ABI_CHECK(0x10104a00u, 0x1010101du); RETCHK(0x10101022u, 0x1010101du); LOADALL;
  /* 10101022 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10101024 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10101026 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 1010102a mov dword ptr [esi + 0x10010], eax */ { const u32 m_ = (u32)(esi + 0x10010u); M32(m_) = (u32)(eax); }
  /* 10101030 mov dword ptr [esi + 0x10014], eax */ { const u32 m_ = (u32)(esi + 0x10014u); M32(m_) = (u32)(eax); }
  /* 10101036 call 0x101047f0 */ esp -= 4; M32(esp) = 0x1010103bu; SAVEALL; F_101047f0(c); ABI_CHECK(0x101047f0u, 0x10101036u); RETCHK(0x1010103bu, 0x10101036u); LOADALL;
  /* 1010103b mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1010103f mov eax, esi */ { eax = (u32)(esi); }
  /* 10101041 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101042 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10101049 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010104c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10101050(CPU *c) {
  NATIVE_HOOK(0x10101050u) REGS; LOADALL;
L_10101050:;
  /* 10101050 jmp 0x10103a60 */ goto L_10103a60;
L_10103a60:;
  /* 10103a60 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10103a66 jmp 0x10104af0 */ goto L_10104af0;
L_10104af0:;
  /* 10104af0 mov dword ptr [ecx], 0x1010d1d0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x1010d1d0u); }
  /* 10104af6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10101060(CPU *c) {
  NATIVE_HOOK(0x10101060u) REGS; LOADALL;
L_10101060:;
  /* 10101060 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10101064 mov dword ptr [ecx + 0x10014], eax */ { const u32 m_ = (u32)(ecx + 0x10014u); M32(m_) = (u32)(eax); }
  /* 1010106a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10101070(CPU *c) {
  NATIVE_HOOK(0x10101070u) REGS; LOADALL;
L_10101070:;
  /* 10101070 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101076 call 0x10101910 */ esp -= 4; M32(esp) = 0x1010107bu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10101076u); RETCHK(0x1010107bu, 0x10101076u); LOADALL;
  /* 1010107b mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 1010107f mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 10101081 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10101083 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101084 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101085 call dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10101087u; SAVEALL; call_ind(c, t_); RETCHK(0x10101087u, 0x10101085u); LOADALL; }
  /* 10101087 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10101090(CPU *c) {
  NATIVE_HOOK(0x10101090u) REGS; LOADALL;
L_10101090:;
  /* 10101090 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101096 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10101097 call 0x10101910 */ esp -= 4; M32(esp) = 0x1010109cu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10101097u); RETCHK(0x1010109cu, 0x10101097u); LOADALL;
  /* 1010109c mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101010a0 mov bl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101010a2 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 101010a4 cmp bl, 2 */ { u32 a_ = (ebx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 101010a7 sete bl */ { ebx = (ebx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 101010aa inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101010ab push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101010ac push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101010ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101010ae call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101010b1u; SAVEALL; call_ind(c, t_); RETCHK(0x101010b1u, 0x101010aeu); LOADALL; }
  /* 101010b1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101010b2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10101170(CPU *c) {
  NATIVE_HOOK(0x10101170u) REGS; LOADALL;
L_10101170:;
  /* 10101170 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10101171 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101172 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10101173 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10101177 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10101179 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1010117b mov ecx, dword ptr [esi + 0x10014] */ { const u32 m_ = (u32)(esi + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101181 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101182 lea ebx, [edi + 4] */ ebx = (u32)((u32)(edi + 0x4u));
  /* 10101185 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10101186 call 0x101039c0 */ esp -= 4; M32(esp) = 0x1010118bu; SAVEALL; F_101039c0(c); ABI_CHECK(0x101039c0u, 0x10101186u); RETCHK(0x1010118bu, 0x10101186u); LOADALL;
  /* 1010118b mov ecx, dword ptr [esi + 0x10014] */ { const u32 m_ = (u32)(esi + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101191 call 0x10101910 */ esp -= 4; M32(esp) = 0x10101196u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10101191u); RETCHK(0x10101196u, 0x10101191u); LOADALL;
  /* 10101196 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10101198 add edi, 0x84 */ { u32 a_ = edi, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010119e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010119f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101011a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101011a1 call dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101011a4u; SAVEALL; call_ind(c, t_); RETCHK(0x101011a4u, 0x101011a1u); LOADALL; }
  /* 101011a4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101011a5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101011a6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101011a7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101011b0(CPU *c) {
  NATIVE_HOOK(0x101011b0u) REGS; LOADALL;
L_101011b0:;
  /* 101011b0 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 101011b6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101011b7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101011b8 call 0x10101910 */ esp -= 4; M32(esp) = 0x101011bdu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x101011b8u); RETCHK(0x101011bdu, 0x101011b8u); LOADALL;
  /* 101011bd mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 101011c1 mov bl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101011c3 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 101011c5 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
  /* 101011c8 cmp bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 101011cb sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 101011ce push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101011cf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101011d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101011d1 call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101011d4u; SAVEALL; call_ind(c, t_); RETCHK(0x101011d4u, 0x101011d1u); LOADALL; }
  /* 101011d4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101011d5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101011d6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101011e0(CPU *c) {
  NATIVE_HOOK(0x101011e0u) REGS; LOADALL;
L_101011e0:;
  /* 101011e0 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 101011e6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101011e7 call 0x10101910 */ esp -= 4; M32(esp) = 0x101011ecu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x101011e7u); RETCHK(0x101011ecu, 0x101011e7u); LOADALL;
  /* 101011ec mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101011f0 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 101011f2 lea esi, [ecx + 0x80] */ esi = (u32)((u32)(ecx + 0x80u));
  /* 101011f8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101011f9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101011fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101011fb call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101011feu; SAVEALL; call_ind(c, t_); RETCHK(0x101011feu, 0x101011fbu); LOADALL; }
  /* 101011fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101011ff ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10101210(CPU *c) {
  NATIVE_HOOK(0x10101210u) REGS; LOADALL;
L_10101210:;
  /* 10101210 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101216 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101217 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 1010121b cmp byte ptr [esi + 1], 1 */ { const u32 m_ = (u32)(esi + 0x1u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1010121f jne 0x1010123c */ if (!ZF_) goto L_1010123c;
  /* 10101221 call 0x10101910 */ esp -= 4; M32(esp) = 0x10101226u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10101221u); RETCHK(0x10101226u, 0x10101221u); LOADALL;
  /* 10101226 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10101228 lea edx, [esi + 5] */ edx = (u32)((u32)(esi + 0x5u));
  /* 1010122b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1010122c xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1010122e mov dl, byte ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10101231 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101232 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10101234 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101235 call dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10101238u; SAVEALL; call_ind(c, t_); RETCHK(0x10101238u, 0x10101235u); LOADALL; }
  /* 10101238 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101239 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1010123c:;
  /* 1010123c call 0x10101910 */ esp -= 4; M32(esp) = 0x10101241u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x1010123cu); RETCHK(0x10101241u, 0x1010123cu); LOADALL;
  /* 10101241 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10101243 lea edx, [esi + 9] */ edx = (u32)((u32)(esi + 0x9u));
  /* 10101246 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101247 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10101249 mov dl, byte ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010124c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1010124d mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10101250 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101251 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101252 call dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10101255u; SAVEALL; call_ind(c, t_); RETCHK(0x10101255u, 0x10101252u); LOADALL; }
  /* 10101255 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101256 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10101260(CPU *c) {
  NATIVE_HOOK(0x10101260u) REGS; LOADALL;
L_10101260:;
  /* 10101260 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101266 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101267 call 0x10101910 */ esp -= 4; M32(esp) = 0x1010126cu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10101267u); RETCHK(0x1010126cu, 0x10101267u); LOADALL;
  /* 1010126c mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10101270 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10101272 lea esi, [ecx + 4] */ esi = (u32)((u32)(ecx + 0x4u));
  /* 10101275 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 10101277 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101278 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101279 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010127a call dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010127du; SAVEALL; call_ind(c, t_); RETCHK(0x1010127du, 0x1010127au); LOADALL; }
  /* 1010127d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010127e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10101290(CPU *c) {
  NATIVE_HOOK(0x10101290u) REGS; LOADALL;
L_10101290:;
  /* 10101290 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101296 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101297 call 0x10101910 */ esp -= 4; M32(esp) = 0x1010129cu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10101297u); RETCHK(0x1010129cu, 0x10101297u); LOADALL;
  /* 1010129c mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101012a0 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 101012a2 lea esi, [ecx + 4] */ esi = (u32)((u32)(ecx + 0x4u));
  /* 101012a5 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 101012a7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101012a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101012a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101012aa call dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101012adu; SAVEALL; call_ind(c, t_); RETCHK(0x101012adu, 0x101012aau); LOADALL; }
  /* 101012ad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101012ae ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101012c0(CPU *c) {
  NATIVE_HOOK(0x101012c0u) REGS; LOADALL;
L_101012c0:;
  /* 101012c0 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 101012c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101012c7 call 0x10101910 */ esp -= 4; M32(esp) = 0x101012ccu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x101012c7u); RETCHK(0x101012ccu, 0x101012c7u); LOADALL;
  /* 101012cc mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101012d0 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 101012d2 lea esi, [ecx + 4] */ esi = (u32)((u32)(ecx + 0x4u));
  /* 101012d5 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 101012d7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101012d8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101012d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101012da call dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101012ddu; SAVEALL; call_ind(c, t_); RETCHK(0x101012ddu, 0x101012dau); LOADALL; }
  /* 101012dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101012de ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101012f0(CPU *c) {
  NATIVE_HOOK(0x101012f0u) REGS; LOADALL;
L_101012f0:;
  /* 101012f0 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 101012f6 call 0x10101910 */ esp -= 4; M32(esp) = 0x101012fbu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x101012f6u); RETCHK(0x101012fbu, 0x101012f6u); LOADALL;
  /* 101012fb mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 101012fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101012fe call dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10101301u; SAVEALL; call_ind(c, t_); RETCHK(0x10101301u, 0x101012feu); LOADALL; }
  /* 10101301 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10101310(CPU *c) {
  NATIVE_HOOK(0x10101310u) REGS; LOADALL;
L_10101310:;
  /* 10101310 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101316 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101317 call 0x10101910 */ esp -= 4; M32(esp) = 0x1010131cu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10101317u); RETCHK(0x1010131cu, 0x10101317u); LOADALL;
  /* 1010131c mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10101320 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10101322 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
  /* 10101325 movzx ecx, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M8(m_)); }
  /* 10101328 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101329 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010132a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010132b call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010132eu; SAVEALL; call_ind(c, t_); RETCHK(0x1010132eu, 0x1010132bu); LOADALL; }
  /* 1010132e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010132f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10101340(CPU *c) {
  NATIVE_HOOK(0x10101340u) REGS; LOADALL;
  goto L_10101340;
L_101010c0:;
  /* 101010c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101010c1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 101010c5 cmp word ptr [esi + 4], 0x40 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M16(m_), b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 101010ca push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101010cb mov edi, ecx */ { edi = (u32)(ecx); }
  /* 101010cd ja 0x1010111c */ if (!(CF_|ZF_)) goto L_1010111c;
  /* 101010cf cmp byte ptr [esi + 6], 0xa */ { const u32 m_ = (u32)(esi + 0x6u); u32 a_ = M8(m_), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 101010d3 ja 0x1010111c */ if (!(CF_|ZF_)) goto L_1010111c;
  /* 101010d5 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 101010d7 mov ecx, dword ptr [edi + 0x10014] */ { const u32 m_ = (u32)(edi + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 101010dd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101010de call 0x10101920 */ esp -= 4; M32(esp) = 0x101010e3u; SAVEALL; F_10101920(c); ABI_CHECK(0x10101920u, 0x101010deu); RETCHK(0x101010e3u, 0x101010deu); LOADALL;
  /* 101010e3 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 101010e5 mov cx, word ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 101010e9 lea edx, [esi + 7] */ edx = (u32)((u32)(esi + 0x7u));
  /* 101010ec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101010ed mov ecx, dword ptr [edi + 0x10014] */ { const u32 m_ = (u32)(edi + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 101010f3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 101010f4 call 0x10102290 */ esp -= 4; M32(esp) = 0x101010f9u; SAVEALL; F_10102290(c); ABI_CHECK(0x10102290u, 0x101010f4u); RETCHK(0x101010f9u, 0x101010f4u); LOADALL;
  /* 101010f9 mov ecx, dword ptr [edi + 0x10014] */ { const u32 m_ = (u32)(edi + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 101010ff xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10101101 mov al, byte ptr [esi + 6] */ { const u32 m_ = (u32)(esi + 0x6u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10101104 add esi, 0x2087 */ { u32 a_ = esi, b_ = 0x2087u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1010110a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010110b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010110c call 0x10102310 */ esp -= 4; M32(esp) = 0x10101111u; SAVEALL; F_10102310(c); ABI_CHECK(0x10102310u, 0x1010110cu); RETCHK(0x10101111u, 0x1010110cu); LOADALL;
  /* 10101111 mov ecx, dword ptr [edi + 0x10014] */ { const u32 m_ = (u32)(edi + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101117 call 0x10101930 */ esp -= 4; M32(esp) = 0x1010111cu; SAVEALL; F_10101930(c); ABI_CHECK(0x10101930u, 0x10101117u); RETCHK(0x1010111cu, 0x10101117u); LOADALL;
L_1010111c:;
  /* 1010111c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010111d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010111e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10101130:;
  /* 10101130 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101131 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10101133 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10101137 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10101139 mov ax, word ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1010113c cmp ax, 0x40 */ { u32 a_ = (eax & 0xffffu), b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10101140 ja 0x1010115d */ if (!(CF_|ZF_)) goto L_1010115d;
  /* 10101142 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10101145 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101146 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101147 mov ecx, dword ptr [esi + 0x10014] */ { const u32 m_ = (u32)(esi + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 1010114d call 0x101018d0 */ esp -= 4; M32(esp) = 0x10101152u; SAVEALL; F_101018d0(c); ABI_CHECK(0x101018d0u, 0x1010114du); RETCHK(0x10101152u, 0x1010114du); LOADALL;
  /* 10101152 mov ecx, dword ptr [esi + 0x10014] */ { const u32 m_ = (u32)(esi + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101158 call 0x10101930 */ esp -= 4; M32(esp) = 0x1010115du; SAVEALL; F_10101930(c); ABI_CHECK(0x10101930u, 0x10101158u); RETCHK(0x1010115du, 0x10101158u); LOADALL;
L_1010115d:;
  /* 1010115d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010115e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10101340:;
  /* 10101340 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10101344 mov al, byte ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10101346 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10101348 jne 0x10101366 */ if (!ZF_) goto L_10101366;
  /* 1010134a mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101350 call 0x10101910 */ esp -= 4; M32(esp) = 0x10101355u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10101350u); RETCHK(0x10101355u, 0x10101350u); LOADALL;
  /* 10101355 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10101357 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10101359 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1010135b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1010135d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1010135f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101360 call dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10101363u; SAVEALL; call_ind(c, t_); RETCHK(0x10101363u, 0x10101360u); LOADALL; }
L_10101363:;
  /* 10101363 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10101366:;
  /* 10101366 cmp al, 0xb */ { u32 a_ = (eax & 0xffu), b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10101368 jne 0x10101376 */ if (!ZF_) goto L_10101376;
  /* 1010136a add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 1010136d mov dword ptr [esp + 4], edx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(edx); }
  /* 10101371 jmp 0x101010c0 */ goto L_101010c0;
L_10101376:;
  /* 10101376 cmp al, 0xc */ { u32 a_ = (eax & 0xffu), b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10101378 jne 0x10101363 */ if (!ZF_) goto L_10101363;
  /* 1010137a add edx, 0x2598 */ { u32 a_ = edx, b_ = 0x2598u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10101380 mov dword ptr [esp + 4], edx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(edx); }
  /* 10101384 jmp 0x10101130 */ goto L_10101130;
}
