#include "funcs.h"

void F_005f27c0(CPU *c) {
  NATIVE_HOOK(0x5f27c0u) REGS; LOADALL;
L_005f27c0:;
  /* 005f27c0 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f27c3 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f27c7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f27c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f27ca xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f27cc mov al, byte ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f27cf mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f27d3 shr eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f27d6 mov esi, eax */ { esi = (u32)(eax); }
  /* 005f27d8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f27da mov al, byte ptr [ecx + 0xd] */ { const u32 m_ = (u32)(ecx + 0xdu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f27dd mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005f27df mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 005f27e3 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f27e7 fild dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)(s32)M32(m_)); }
  /* 005f27eb mov dl, byte ptr [eax + 0xd] */ { const u32 m_ = (u32)(eax + 0xdu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f27ee mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005f27f2 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 005f27f6 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f27f8 fidiv dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 005f27fc mov dl, byte ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f27ff xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f2801 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 005f2805 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005f2807 mov dword ptr [esp + 0xc], ecx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005f280b mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f280e fild dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); FPUSH((double)(s32)M32(m_)); }
  /* 005f2812 fidiv dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 005f2816 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 005f2818 fild qword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)(s64)M64(m_)); }
  /* 005f281c mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f2820 mov dword ptr [esp + 0xc], ecx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005f2824 fidiv dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 005f2828 mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005f282c mov dword ptr [esp + 0xc], ecx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005f2830 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 005f2832 fimul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)(s32)M32(m_)); }
  /* 005f2836 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f283a fnstcw word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); M16(m_) = (u16)c->fcw; }
  /* 005f283e fld dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005f2842 mov ax, word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2847 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f284a mov word ptr [esp + 0x18], ax */ { const u32 m_ = (u32)(esp + 0x18u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f284f fldcw word ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2853 fistp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f2857 fldcw word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f285b mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f285f mov dword ptr [esp + 0xc], ecx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005f2863 lea eax, [edx + esi - 1] */ eax = (u32)((u32)(edx + esi + 0xffffffffu));
  /* 005f2867 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f2868 not esi */ { esi = (u32)(~esi & 0xffffffffu); }
  /* 005f286a and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f286c mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005f2870 fild qword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)(s64)M64(m_)); }
  /* 005f2874 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f2878 fnstcw word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); M16(m_) = (u16)c->fcw; }
  /* 005f287c fld dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005f2880 mov ax, word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2885 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f2888 mov word ptr [esp + 0x18], ax */ { const u32 m_ = (u32)(esp + 0x18u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f288d fldcw word ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2891 fistp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f2895 fldcw word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2899 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f289d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f289e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f28a1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f28b0(CPU *c) {
  NATIVE_HOOK(0x5f28b0u) REGS; LOADALL;
L_005f28b0:;
  /* 005f28b0 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f28b3 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f28b7 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f28b9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f28ba push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f28bb mov cl, byte ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f28be mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 005f28c2 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005f28c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f28c5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f28c6 shr esi, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 005f28c9 call 0x5f27c0 */ esp -= 4; M32(esp) = 0x5f28ceu; SAVEALL; F_005f27c0(c); ABI_CHECK(0x5f27c0u, 0x5f28c9u); RETCHK(0x5f28ceu, 0x5f28c9u); LOADALL;
  /* 005f28ce mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f28d1 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f28d5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f28d7 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005f28db mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f28df add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f28e2 fild qword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)(s64)M64(m_)); }
  /* 005f28e6 mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f28ea mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 005f28ee fidiv dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 005f28f2 mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005f28f6 mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 005f28fa fimul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)(s32)M32(m_)); }
  /* 005f28fe fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f2902 fnstcw word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); M16(m_) = (u16)c->fcw; }
  /* 005f2906 fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 005f290a mov ax, word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f290f or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f2912 mov word ptr [esp + 0x1c], ax */ { const u32 m_ = (u32)(esp + 0x1cu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f2917 fldcw word ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f291b fistp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f291f fldcw word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2923 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f2927 lea edx, [esi - 1] */ edx = (u32)((u32)(esi + 0xffffffffu));
  /* 005f292a test eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f292c je 0x5f293b */ if (ZF_) goto L_005f293b;
  /* 005f292e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005f2930 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f2932 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f2934 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f2936 div esi */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, esi, &q_, &r_, 0x5f2936u); eax = q_; edx = r_; }
  /* 005f2938 imul eax, esi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)esi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
L_005f293b:;
  /* 005f293b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f293c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f293d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f2940 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f2950(CPU *c) {
  NATIVE_HOOK(0x5f2950u) REGS; LOADALL;
L_005f2950:;
  /* 005f2950 sub esp, 0x94 */ { u32 a_ = esp, b_ = 0x94u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f2956 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f2957 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f2958 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f2959 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f295a mov edi, dword ptr [esp + 0xbc] */ { const u32 m_ = (u32)(esp + 0xbcu); edi = (u32)(M32(m_)); }
  /* 005f2961 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f2963 jne 0x5f2972 */ if (!ZF_) goto L_005f2972;
  /* 005f2965 lea eax, [esp + 0x54] */ eax = (u32)((u32)(esp + 0x54u));
  /* 005f2969 mov dword ptr [esp + 0xbc], eax */ { const u32 m_ = (u32)(esp + 0xbcu); M32(m_) = (u32)(eax); }
  /* 005f2970 mov edi, eax */ { edi = (u32)(eax); }
L_005f2972:;
  /* 005f2972 mov ebp, dword ptr [esp + 0xb4] */ { const u32 m_ = (u32)(esp + 0xb4u); ebp = (u32)(M32(m_)); }
  /* 005f2979 mov ebx, dword ptr [esp + 0xb0] */ { const u32 m_ = (u32)(esp + 0xb0u); ebx = (u32)(M32(m_)); }
  /* 005f2980 mov esi, dword ptr [esp + 0xa8] */ { const u32 m_ = (u32)(esp + 0xa8u); esi = (u32)(M32(m_)); }
  /* 005f2987 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f2988 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f2989 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f298a call 0x5f28b0 */ esp -= 4; M32(esp) = 0x5f298fu; SAVEALL; F_005f28b0(c); ABI_CHECK(0x5f28b0u, 0x5f298au); RETCHK(0x5f298fu, 0x5f298au); LOADALL;
  /* 005f298f mov edx, dword ptr [esp + 0xb8] */ { const u32 m_ = (u32)(esp + 0xb8u); edx = (u32)(M32(m_)); }
  /* 005f2996 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f2997 add edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f2999 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f299a mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 005f299c mov dword ptr [esp + 0xc0], edx */ { const u32 m_ = (u32)(esp + 0xc0u); M32(m_) = (u32)(edx); }
  /* 005f29a3 call 0x5f27c0 */ esp -= 4; M32(esp) = 0x5f29a8u; SAVEALL; F_005f27c0(c); ABI_CHECK(0x5f27c0u, 0x5f29a3u); RETCHK(0x5f29a8u, 0x5f29a3u); LOADALL;
  /* 005f29a8 mov ecx, dword ptr [esp + 0xcc] */ { const u32 m_ = (u32)(esp + 0xccu); ecx = (u32)(M32(m_)); }
  /* 005f29af add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f29b2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f29b4 mov dword ptr [esp + 0x40], eax */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(eax); }
  /* 005f29b8 je 0x5f29c3 */ if (ZF_) goto L_005f29c3;
  /* 005f29ba add ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f29bc mov dword ptr [esp + 0xb8], ecx */ { const u32 m_ = (u32)(esp + 0xb8u); M32(m_) = (u32)(ecx); }
L_005f29c3:;
  /* 005f29c3 mov dl, byte ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f29c6 mov cl, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f29c9 and dl, 1 */ { u32 a_ = (edx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f29cc cmp cl, 8 */ { u32 a_ = (ecx & 0xffu), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f29cf jne 0x5f29da */ if (!ZF_) goto L_005f29da;
  /* 005f29d1 neg dl */ { u32 a_ = (edx & 0xffu); u32 r_ = (0u - a_) & 0xffu; edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 005f29d3 sbb edx, edx */ { u32 a_ = edx, b_ = edx; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); edx = (u32)(r_); }
  /* 005f29d5 add edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f29d8 jmp 0x5f29e1 */ goto L_005f29e1;
L_005f29da:;
  /* 005f29da neg dl */ { u32 a_ = (edx & 0xffu); u32 r_ = (0u - a_) & 0xffu; edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 005f29dc sbb edx, edx */ { u32 a_ = edx, b_ = edx; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); edx = (u32)(r_); }
  /* 005f29de add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
L_005f29e1:;
  /* 005f29e1 mov dword ptr [esp + 0x38], edx */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(edx); }
  /* 005f29e5 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 005f29e7 and ecx, 0xff */ { u32 a_ = ecx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f29ed sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f29ef shr ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f29f2 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f29f4 mov bl, byte ptr [ebp + 0xd] */ { const u32 m_ = (u32)(ebp + 0xdu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f29f7 div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x5f29f7u); eax = q_; edx = r_; }
  /* 005f29f9 mov ebp, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); ebp = (u32)(M32(m_)); }
  /* 005f29fc mov byte ptr [esp + 0x14], bl */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005f2a00 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 005f2a04 mov dword ptr [esp + 0x18], 0 */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(0x0u); }
  /* 005f2a0c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f2a0e mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005f2a10 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005f2a12 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 005f2a16 mov dword ptr [esp + 0x2c], esi */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(esi); }
  /* 005f2a1a cmp bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f2a1d fild qword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)(s64)M64(m_)); }
  /* 005f2a21 mov dword ptr [esp + 0x28], ebp */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ebp); }
  /* 005f2a25 mov dword ptr [esp + 0x2c], esi */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(esi); }
  /* 005f2a29 mov dword ptr [esp + 0x50], ecx */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(ecx); }
  /* 005f2a2d fidiv dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 005f2a31 fstp dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f2a35 jbe 0x5f2a48 */ if ((CF_|ZF_)) goto L_005f2a48;
  /* 005f2a37 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 005f2a39 and ebx, 0xff */ { u32 a_ = ebx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005f2a3f dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f2a40 not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 005f2a42 and ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f2a44 mov dword ptr [esp + 0x50], ecx */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(ecx); }
L_005f2a48:;
  /* 005f2a48 mov ebx, dword ptr [esp + 0xb8] */ { const u32 m_ = (u32)(esp + 0xb8u); ebx = (u32)(M32(m_)); }
  /* 005f2a4f cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f2a51 je 0x5f2d38 */ if (ZF_) goto L_005f2d38;
  /* 005f2a57 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f2a59 je 0x5f2d16 */ if (ZF_) goto L_005f2d16;
  /* 005f2a5f mov ebp, edx */ { ebp = (u32)(edx); }
  /* 005f2a61 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f2a63 and ebp, 0xff */ { u32 a_ = ebp, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005f2a69 mov dword ptr [esp + 0x20], ebp */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ebp); }
  /* 005f2a6d jbe 0x5f2af5 */ if ((CF_|ZF_)) goto L_005f2af5;
  /* 005f2a73 mov edx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); edx = (u32)(M32(m_)); }
  /* 005f2a77 lea edi, [edx - 1] */ edi = (u32)((u32)(edx + 0xffffffffu));
L_005f2a7a:;
  /* 005f2a7a cmp edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f2a7d ja 0x5f2b7f */ if (!(CF_|ZF_)) goto L_005f2b7f;
  /* 005f2a83 jmp dword ptr [edi*4 + 0x5f2d4c] */ { const u32 m_ = (u32)(edi * 4u + 0x5f2d4cu); u32 t_ = M32(m_); switch (t_) { case 0x5f2a8au: goto L_005f2a8a; case 0x5f2aa4u: goto L_005f2aa4; case 0x5f2ab9u: goto L_005f2ab9; case 0x5f2ad5u: goto L_005f2ad5; default: SAVEALL; call_ind(c, t_); return; } }
L_005f2a8a:;
  /* 005f2a8a mov ebp, dword ptr [esp + 0xac] */ { const u32 m_ = (u32)(esp + 0xacu); ebp = (u32)(M32(m_)); }
  /* 005f2a91 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f2a93 mov dl, byte ptr [eax + ebp] */ { const u32 m_ = (u32)(eax + ebp); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f2a96 mov ebp, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebp = (u32)(M32(m_)); }
  /* 005f2a9a mov dword ptr [esp + 0x14], edx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edx); }
  /* 005f2a9e fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 005f2aa2 jmp 0x5f2ae8 */ goto L_005f2ae8;
L_005f2aa4:;
  /* 005f2aa4 mov edx, dword ptr [esp + 0xac] */ { const u32 m_ = (u32)(esp + 0xacu); edx = (u32)(M32(m_)); }
  /* 005f2aab movsx edx, byte ptr [eax + edx] */ { const u32 m_ = (u32)(eax + edx); edx = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f2aaf mov dword ptr [esp + 0x14], edx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edx); }
  /* 005f2ab3 fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 005f2ab7 jmp 0x5f2ae8 */ goto L_005f2ae8;
L_005f2ab9:;
  /* 005f2ab9 mov ebp, dword ptr [esp + 0xac] */ { const u32 m_ = (u32)(esp + 0xacu); ebp = (u32)(M32(m_)); }
  /* 005f2ac0 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f2ac2 mov dx, word ptr [ebp + eax*2] */ { const u32 m_ = (u32)(ebp + eax * 2u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2ac7 mov ebp, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebp = (u32)(M32(m_)); }
  /* 005f2acb mov dword ptr [esp + 0x14], edx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edx); }
  /* 005f2acf fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 005f2ad3 jmp 0x5f2ae8 */ goto L_005f2ae8;
L_005f2ad5:;
  /* 005f2ad5 mov edx, dword ptr [esp + 0xac] */ { const u32 m_ = (u32)(esp + 0xacu); edx = (u32)(M32(m_)); }
  /* 005f2adc movsx edx, word ptr [edx + eax*2] */ { const u32 m_ = (u32)(edx + eax * 2u); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f2ae0 mov dword ptr [esp + 0x14], edx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edx); }
  /* 005f2ae4 fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
L_005f2ae8:;
  /* 005f2ae8 fst dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); }
  /* 005f2aec fstp dword ptr [esp + eax*4 + 0x74] */ { const u32 m_ = (u32)(esp + eax * 4u + 0x74u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f2af0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f2af1 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f2af3 jb 0x5f2a7a */ if (CF_) goto L_005f2a7a;
L_005f2af5:;
  /* 005f2af5 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f2af7 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f2af9 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f2afb mov dword ptr [esp + 0x14], edi */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edi); }
  /* 005f2aff mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 005f2b03 jbe 0x5f2d07 */ if ((CF_|ZF_)) goto L_005f2d07;
L_005f2b09:;
  /* 005f2b09 fnstcw word ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); M16(m_) = (u16)c->fcw; }
  /* 005f2b0d fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005f2b11 mov ax, word ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2b16 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f2b19 mov word ptr [esp + 0x34], ax */ { const u32 m_ = (u32)(esp + 0x34u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f2b1e fldcw word ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2b22 fistp dword ptr [esp + 0x64] */ { const u32 m_ = (u32)(esp + 0x64u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f2b26 fldcw word ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2b2a mov eax, dword ptr [esp + 0x64] */ { const u32 m_ = (u32)(esp + 0x64u); eax = (u32)(M32(m_)); }
  /* 005f2b2e mov dword ptr [esp + 0x70], esi */ { const u32 m_ = (u32)(esp + 0x70u); M32(m_) = (u32)(esi); }
  /* 005f2b32 mov dword ptr [esp + 0x6c], eax */ { const u32 m_ = (u32)(esp + 0x6cu); M32(m_) = (u32)(eax); }
  /* 005f2b36 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f2b38 fild qword ptr [esp + 0x6c] */ { const u32 m_ = (u32)(esp + 0x6cu); FPUSH((double)(s64)M64(m_)); }
  /* 005f2b3c cmp ebp, esi */ { u32 a_ = ebp, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f2b3e fsubr dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 005f2b42 fstp dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f2b46 jbe 0x5f2cc0 */ if ((CF_|ZF_)) goto L_005f2cc0;
  /* 005f2b4c mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 005f2b50 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 005f2b56 lea esi, [eax - 1] */ esi = (u32)((u32)(eax + 0xffffffffu));
  /* 005f2b59 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 005f2b5b fsub dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005f2b5f imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f2b62 fstp dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f2b66 mov edi, dword ptr [esp + 0xac] */ { const u32 m_ = (u32)(esp + 0xacu); edi = (u32)(M32(m_)); }
  /* 005f2b6d lea ebp, [eax + edi] */ ebp = (u32)((u32)(eax + edi));
  /* 005f2b70 lea edi, [edi + eax*2] */ edi = (u32)((u32)(edi + eax * 2u));
L_005f2b73:;
  /* 005f2b73 cmp esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f2b76 ja 0x5f2bc7 */ if (!(CF_|ZF_)) goto L_005f2bc7;
  /* 005f2b78 jmp dword ptr [esi*4 + 0x5f2d5c] */ { const u32 m_ = (u32)(esi * 4u + 0x5f2d5cu); u32 t_ = M32(m_); switch (t_) { case 0x5f2b8cu: goto L_005f2b8c; case 0x5f2b9bu: goto L_005f2b9b; case 0x5f2ba9u: goto L_005f2ba9; case 0x5f2bb8u: goto L_005f2bb8; default: SAVEALL; call_ind(c, t_); return; } }
L_005f2b7f:;
  /* 005f2b7f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f2b80 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f2b81 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f2b82 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f2b84 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f2b85 add esp, 0x94 */ { u32 a_ = esp, b_ = 0x94u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f2b8b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f2b8c:;
  /* 005f2b8c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f2b8e mov al, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f2b91 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f2b95 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 005f2b99 jmp 0x5f2bc3 */ goto L_005f2bc3;
L_005f2b9b:;
  /* 005f2b9b movsx eax, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f2b9f mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f2ba3 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 005f2ba7 jmp 0x5f2bc3 */ goto L_005f2bc3;
L_005f2ba9:;
  /* 005f2ba9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f2bab mov ax, word ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2bae mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f2bb2 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 005f2bb6 jmp 0x5f2bc3 */ goto L_005f2bc3;
L_005f2bb8:;
  /* 005f2bb8 movsx eax, word ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f2bbb mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f2bbf fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
L_005f2bc3:;
  /* 005f2bc3 fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
L_005f2bc7:;
  /* 005f2bc7 fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 005f2bcb cmp esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f2bce fstp dword ptr [esp + ecx*4 + 0x8c] */ { const u32 m_ = (u32)(esp + ecx * 4u + 0x8cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f2bd5 fld dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); FPUSH((double)MF32(m_)); }
  /* 005f2bd9 fmul dword ptr [esp + ecx*4 + 0x74] */ { const u32 m_ = (u32)(esp + ecx * 4u + 0x74u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f2bdd fld dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 005f2be1 fmul dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f2be5 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005f2be7 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f2beb ja 0x5f2c9e */ if (!(CF_|ZF_)) goto L_005f2c9e;
  /* 005f2bf1 jmp dword ptr [esi*4 + 0x5f2d6c] */ { const u32 m_ = (u32)(esi * 4u + 0x5f2d6cu); u32 t_ = M32(m_); switch (t_) { case 0x5f2bf8u: goto L_005f2bf8; case 0x5f2c22u: goto L_005f2c22; case 0x5f2c4cu: goto L_005f2c4c; case 0x5f2c74u: goto L_005f2c74; default: SAVEALL; call_ind(c, t_); return; } }
L_005f2bf8:;
  /* 005f2bf8 fnstcw word ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); M16(m_) = (u16)c->fcw; }
  /* 005f2bfc fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005f2c00 mov ax, word ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2c05 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f2c08 mov word ptr [esp + 0x26], ax */ { const u32 m_ = (u32)(esp + 0x26u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f2c0d fldcw word ptr [esp + 0x26] */ { const u32 m_ = (u32)(esp + 0x26u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2c11 fistp dword ptr [esp + 0x60] */ { const u32 m_ = (u32)(esp + 0x60u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f2c15 fldcw word ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2c19 mov al, byte ptr [esp + 0x60] */ { const u32 m_ = (u32)(esp + 0x60u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f2c1d mov byte ptr [edx + ebx], al */ { const u32 m_ = (u32)(edx + ebx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005f2c20 jmp 0x5f2c9e */ goto L_005f2c9e;
L_005f2c22:;
  /* 005f2c22 fnstcw word ptr [esp + 0x46] */ { const u32 m_ = (u32)(esp + 0x46u); M16(m_) = (u16)c->fcw; }
  /* 005f2c26 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005f2c2a mov ax, word ptr [esp + 0x46] */ { const u32 m_ = (u32)(esp + 0x46u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2c2f or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f2c32 mov word ptr [esp + 0x4a], ax */ { const u32 m_ = (u32)(esp + 0x4au); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f2c37 fldcw word ptr [esp + 0x4a] */ { const u32 m_ = (u32)(esp + 0x4au); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2c3b fistp dword ptr [esp + 0x68] */ { const u32 m_ = (u32)(esp + 0x68u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f2c3f fldcw word ptr [esp + 0x46] */ { const u32 m_ = (u32)(esp + 0x46u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2c43 mov al, byte ptr [esp + 0x68] */ { const u32 m_ = (u32)(esp + 0x68u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f2c47 mov byte ptr [edx + ebx], al */ { const u32 m_ = (u32)(edx + ebx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005f2c4a jmp 0x5f2c9e */ goto L_005f2c9e;
L_005f2c4c:;
  /* 005f2c4c fnstcw word ptr [esp + 0x32] */ { const u32 m_ = (u32)(esp + 0x32u); M16(m_) = (u16)c->fcw; }
  /* 005f2c50 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005f2c54 mov ax, word ptr [esp + 0x32] */ { const u32 m_ = (u32)(esp + 0x32u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2c59 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f2c5c mov word ptr [esp + 0x3e], ax */ { const u32 m_ = (u32)(esp + 0x3eu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f2c61 fldcw word ptr [esp + 0x3e] */ { const u32 m_ = (u32)(esp + 0x3eu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2c65 fistp dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f2c69 fldcw word ptr [esp + 0x32] */ { const u32 m_ = (u32)(esp + 0x32u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2c6d mov ax, word ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2c72 jmp 0x5f2c9a */ goto L_005f2c9a;
L_005f2c74:;
  /* 005f2c74 fnstcw word ptr [esp + 0x36] */ { const u32 m_ = (u32)(esp + 0x36u); M16(m_) = (u16)c->fcw; }
  /* 005f2c78 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005f2c7c mov ax, word ptr [esp + 0x36] */ { const u32 m_ = (u32)(esp + 0x36u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2c81 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f2c84 mov word ptr [esp + 0x48], ax */ { const u32 m_ = (u32)(esp + 0x48u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f2c89 fldcw word ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2c8d fistp dword ptr [esp + 0x54] */ { const u32 m_ = (u32)(esp + 0x54u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f2c91 fldcw word ptr [esp + 0x36] */ { const u32 m_ = (u32)(esp + 0x36u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2c95 mov ax, word ptr [esp + 0x54] */ { const u32 m_ = (u32)(esp + 0x54u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
L_005f2c9a:;
  /* 005f2c9a mov word ptr [ebx + edx*2], ax */ { const u32 m_ = (u32)(ebx + edx * 2u); M16(m_) = (u16)((eax & 0xffffu)); }
L_005f2c9e:;
  /* 005f2c9e mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f2ca2 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f2ca3 mov dword ptr [esp + ecx*4 + 0x74], eax */ { const u32 m_ = (u32)(esp + ecx * 4u + 0x74u); M32(m_) = (u32)(eax); }
  /* 005f2ca7 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005f2cab inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f2cac add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f2caf inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f2cb0 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f2cb2 jb 0x5f2b73 */ if (CF_) goto L_005f2b73;
  /* 005f2cb8 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 005f2cbc xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005f2cbe mov ebp, eax */ { ebp = (u32)(eax); }
L_005f2cc0:;
  /* 005f2cc0 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005f2cc4 fadd dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005f2cc8 fcom dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005f2cce fst dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); }
  /* 005f2cd2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005f2cd4 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f2cd9 jne 0x5f2cfb */ if (!ZF_) goto L_005f2cfb;
L_005f2cdb:;
  /* 005f2cdb fsub dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005f2ce1 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f2ce2 fcom dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005f2ce8 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005f2cea and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f2cef je 0x5f2cdb */ if (ZF_) goto L_005f2cdb;
  /* 005f2cf1 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f2cf5 mov dword ptr [esp + 0x14], edi */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edi); }
  /* 005f2cf9 jmp 0x5f2cfd */ goto L_005f2cfd;
L_005f2cfb:;
  /* 005f2cfb fstp st(0) */ ST(0) = ST(0); FPOP();
L_005f2cfd:;
  /* 005f2cfd cmp edx, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f2d01 jb 0x5f2b09 */ if (CF_) goto L_005f2b09;
L_005f2d07:;
  /* 005f2d07 mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 005f2d0b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f2d0c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f2d0d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f2d0e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f2d0f add esp, 0x94 */ { u32 a_ = esp, b_ = 0x94u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f2d15 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f2d16:;
  /* 005f2d16 mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 005f2d1a mov esi, dword ptr [esp + 0xac] */ { const u32 m_ = (u32)(esp + 0xacu); esi = (u32)(M32(m_)); }
  /* 005f2d21 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f2d23 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 005f2d25 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f2d28 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f2d2a mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005f2d2c and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f2d2f rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f2d31 mov edi, dword ptr [esp + 0xbc] */ { const u32 m_ = (u32)(esp + 0xbcu); edi = (u32)(M32(m_)); }
L_005f2d38:;
  /* 005f2d38 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 005f2d3a mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 005f2d3e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f2d3f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f2d40 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f2d41 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f2d43 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f2d44 add esp, 0x94 */ { u32 a_ = esp, b_ = 0x94u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f2d4a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f2d01(CPU *c) {
  NATIVE_HOOK(0x5f2d01u) REGS; LOADALL;
  goto L_005f2d01;
L_005f2b09:;
  /* 005f2b09 fnstcw word ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); M16(m_) = (u16)c->fcw; }
  /* 005f2b0d fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005f2b11 mov ax, word ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2b16 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f2b19 mov word ptr [esp + 0x34], ax */ { const u32 m_ = (u32)(esp + 0x34u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f2b1e fldcw word ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2b22 fistp dword ptr [esp + 0x64] */ { const u32 m_ = (u32)(esp + 0x64u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f2b26 fldcw word ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2b2a mov eax, dword ptr [esp + 0x64] */ { const u32 m_ = (u32)(esp + 0x64u); eax = (u32)(M32(m_)); }
  /* 005f2b2e mov dword ptr [esp + 0x70], esi */ { const u32 m_ = (u32)(esp + 0x70u); M32(m_) = (u32)(esi); }
  /* 005f2b32 mov dword ptr [esp + 0x6c], eax */ { const u32 m_ = (u32)(esp + 0x6cu); M32(m_) = (u32)(eax); }
  /* 005f2b36 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f2b38 fild qword ptr [esp + 0x6c] */ { const u32 m_ = (u32)(esp + 0x6cu); FPUSH((double)(s64)M64(m_)); }
  /* 005f2b3c cmp ebp, esi */ { u32 a_ = ebp, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f2b3e fsubr dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 005f2b42 fstp dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f2b46 jbe 0x5f2cc0 */ if ((CF_|ZF_)) goto L_005f2cc0;
  /* 005f2b4c mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 005f2b50 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 005f2b56 lea esi, [eax - 1] */ esi = (u32)((u32)(eax + 0xffffffffu));
  /* 005f2b59 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 005f2b5b fsub dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005f2b5f imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f2b62 fstp dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f2b66 mov edi, dword ptr [esp + 0xac] */ { const u32 m_ = (u32)(esp + 0xacu); edi = (u32)(M32(m_)); }
  /* 005f2b6d lea ebp, [eax + edi] */ ebp = (u32)((u32)(eax + edi));
  /* 005f2b70 lea edi, [edi + eax*2] */ edi = (u32)((u32)(edi + eax * 2u));
L_005f2b73:;
  /* 005f2b73 cmp esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f2b76 ja 0x5f2bc7 */ if (!(CF_|ZF_)) goto L_005f2bc7;
  /* 005f2b78 jmp dword ptr [esi*4 + 0x5f2d5c] */ { const u32 m_ = (u32)(esi * 4u + 0x5f2d5cu); u32 t_ = M32(m_); switch (t_) { case 0x5f2b8cu: goto L_005f2b8c; case 0x5f2b9bu: goto L_005f2b9b; case 0x5f2ba9u: goto L_005f2ba9; case 0x5f2bb8u: goto L_005f2bb8; default: SAVEALL; call_ind(c, t_); return; } }
L_005f2b8c:;
  /* 005f2b8c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f2b8e mov al, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f2b91 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f2b95 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 005f2b99 jmp 0x5f2bc3 */ goto L_005f2bc3;
L_005f2b9b:;
  /* 005f2b9b movsx eax, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f2b9f mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f2ba3 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 005f2ba7 jmp 0x5f2bc3 */ goto L_005f2bc3;
L_005f2ba9:;
  /* 005f2ba9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f2bab mov ax, word ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2bae mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f2bb2 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 005f2bb6 jmp 0x5f2bc3 */ goto L_005f2bc3;
L_005f2bb8:;
  /* 005f2bb8 movsx eax, word ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f2bbb mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f2bbf fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
L_005f2bc3:;
  /* 005f2bc3 fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
L_005f2bc7:;
  /* 005f2bc7 fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 005f2bcb cmp esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f2bce fstp dword ptr [esp + ecx*4 + 0x8c] */ { const u32 m_ = (u32)(esp + ecx * 4u + 0x8cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f2bd5 fld dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); FPUSH((double)MF32(m_)); }
  /* 005f2bd9 fmul dword ptr [esp + ecx*4 + 0x74] */ { const u32 m_ = (u32)(esp + ecx * 4u + 0x74u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f2bdd fld dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 005f2be1 fmul dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f2be5 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005f2be7 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f2beb ja 0x5f2c9e */ if (!(CF_|ZF_)) goto L_005f2c9e;
  /* 005f2bf1 jmp dword ptr [esi*4 + 0x5f2d6c] */ { const u32 m_ = (u32)(esi * 4u + 0x5f2d6cu); u32 t_ = M32(m_); switch (t_) { case 0x5f2bf8u: goto L_005f2bf8; case 0x5f2c22u: goto L_005f2c22; case 0x5f2c4cu: goto L_005f2c4c; case 0x5f2c74u: goto L_005f2c74; default: SAVEALL; call_ind(c, t_); return; } }
L_005f2bf8:;
  /* 005f2bf8 fnstcw word ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); M16(m_) = (u16)c->fcw; }
  /* 005f2bfc fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005f2c00 mov ax, word ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2c05 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f2c08 mov word ptr [esp + 0x26], ax */ { const u32 m_ = (u32)(esp + 0x26u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f2c0d fldcw word ptr [esp + 0x26] */ { const u32 m_ = (u32)(esp + 0x26u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2c11 fistp dword ptr [esp + 0x60] */ { const u32 m_ = (u32)(esp + 0x60u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f2c15 fldcw word ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2c19 mov al, byte ptr [esp + 0x60] */ { const u32 m_ = (u32)(esp + 0x60u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f2c1d mov byte ptr [edx + ebx], al */ { const u32 m_ = (u32)(edx + ebx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005f2c20 jmp 0x5f2c9e */ goto L_005f2c9e;
L_005f2c22:;
  /* 005f2c22 fnstcw word ptr [esp + 0x46] */ { const u32 m_ = (u32)(esp + 0x46u); M16(m_) = (u16)c->fcw; }
  /* 005f2c26 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005f2c2a mov ax, word ptr [esp + 0x46] */ { const u32 m_ = (u32)(esp + 0x46u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2c2f or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f2c32 mov word ptr [esp + 0x4a], ax */ { const u32 m_ = (u32)(esp + 0x4au); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f2c37 fldcw word ptr [esp + 0x4a] */ { const u32 m_ = (u32)(esp + 0x4au); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2c3b fistp dword ptr [esp + 0x68] */ { const u32 m_ = (u32)(esp + 0x68u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f2c3f fldcw word ptr [esp + 0x46] */ { const u32 m_ = (u32)(esp + 0x46u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2c43 mov al, byte ptr [esp + 0x68] */ { const u32 m_ = (u32)(esp + 0x68u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f2c47 mov byte ptr [edx + ebx], al */ { const u32 m_ = (u32)(edx + ebx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005f2c4a jmp 0x5f2c9e */ goto L_005f2c9e;
L_005f2c4c:;
  /* 005f2c4c fnstcw word ptr [esp + 0x32] */ { const u32 m_ = (u32)(esp + 0x32u); M16(m_) = (u16)c->fcw; }
  /* 005f2c50 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005f2c54 mov ax, word ptr [esp + 0x32] */ { const u32 m_ = (u32)(esp + 0x32u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2c59 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f2c5c mov word ptr [esp + 0x3e], ax */ { const u32 m_ = (u32)(esp + 0x3eu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f2c61 fldcw word ptr [esp + 0x3e] */ { const u32 m_ = (u32)(esp + 0x3eu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2c65 fistp dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f2c69 fldcw word ptr [esp + 0x32] */ { const u32 m_ = (u32)(esp + 0x32u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2c6d mov ax, word ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2c72 jmp 0x5f2c9a */ goto L_005f2c9a;
L_005f2c74:;
  /* 005f2c74 fnstcw word ptr [esp + 0x36] */ { const u32 m_ = (u32)(esp + 0x36u); M16(m_) = (u16)c->fcw; }
  /* 005f2c78 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005f2c7c mov ax, word ptr [esp + 0x36] */ { const u32 m_ = (u32)(esp + 0x36u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2c81 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f2c84 mov word ptr [esp + 0x48], ax */ { const u32 m_ = (u32)(esp + 0x48u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f2c89 fldcw word ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2c8d fistp dword ptr [esp + 0x54] */ { const u32 m_ = (u32)(esp + 0x54u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f2c91 fldcw word ptr [esp + 0x36] */ { const u32 m_ = (u32)(esp + 0x36u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2c95 mov ax, word ptr [esp + 0x54] */ { const u32 m_ = (u32)(esp + 0x54u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
L_005f2c9a:;
  /* 005f2c9a mov word ptr [ebx + edx*2], ax */ { const u32 m_ = (u32)(ebx + edx * 2u); M16(m_) = (u16)((eax & 0xffffu)); }
L_005f2c9e:;
  /* 005f2c9e mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f2ca2 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f2ca3 mov dword ptr [esp + ecx*4 + 0x74], eax */ { const u32 m_ = (u32)(esp + ecx * 4u + 0x74u); M32(m_) = (u32)(eax); }
  /* 005f2ca7 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005f2cab inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f2cac add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f2caf inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f2cb0 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f2cb2 jb 0x5f2b73 */ if (CF_) goto L_005f2b73;
  /* 005f2cb8 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 005f2cbc xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005f2cbe mov ebp, eax */ { ebp = (u32)(eax); }
L_005f2cc0:;
  /* 005f2cc0 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005f2cc4 fadd dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005f2cc8 fcom dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005f2cce fst dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); }
  /* 005f2cd2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005f2cd4 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f2cd9 jne 0x5f2cfb */ if (!ZF_) goto L_005f2cfb;
L_005f2cdb:;
  /* 005f2cdb fsub dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005f2ce1 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f2ce2 fcom dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005f2ce8 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005f2cea and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f2cef je 0x5f2cdb */ if (ZF_) goto L_005f2cdb;
  /* 005f2cf1 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f2cf5 mov dword ptr [esp + 0x14], edi */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edi); }
  /* 005f2cf9 jmp 0x5f2cfd */ goto L_005f2cfd;
L_005f2cfb:;
  /* 005f2cfb fstp st(0) */ ST(0) = ST(0); FPOP();
L_005f2cfd:;
  /* 005f2cfd cmp edx, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
L_005f2d01:;
  /* 005f2d01 jb 0x5f2b09 */ if (CF_) goto L_005f2b09;
  /* 005f2d07 mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 005f2d0b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f2d0c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f2d0d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f2d0e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f2d0f add esp, 0x94 */ { u32 a_ = esp, b_ = 0x94u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f2d15 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f2d80(CPU *c) {
  NATIVE_HOOK(0x5f2d80u) REGS; LOADALL;
L_005f2d80:;
  /* 005f2d80 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f2d81 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f2d82 mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 005f2d86 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f2d87 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f2d89 jne 0x5f2d8f */ if (!ZF_) goto L_005f2d8f;
  /* 005f2d8b lea esi, [esp + 0x18] */ esi = (u32)((u32)(esp + 0x18u));
L_005f2d8f:;
  /* 005f2d8f mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005f2d93 push 0x63c330 */ { u32 v_ = 0x63c330u; esp -= 4; M32(esp) = v_; }
  /* 005f2d98 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f2d9b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f2d9c call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f2da1u; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f2d9cu); RETCHK(0x5f2da1u, 0x5f2d9cu); LOADALL;
  /* 005f2da1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f2da4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f2da6 jne 0x5f2dfb */ if (!ZF_) goto L_005f2dfb;
  /* 005f2da8 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f2dab mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 005f2daf add eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f2db1 lea edx, [edi + edi] */ edx = (u32)((u32)(edi + edi));
  /* 005f2db4 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f2db6 mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 005f2db8 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 005f2dbc sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f2dbe add edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f2dc0 mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 005f2dc4 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f2dc7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f2dc9 lea ebx, [edx + esi] */ ebx = (u32)((u32)(edx + esi));
  /* 005f2dcc je 0x5f2e65 */ if (ZF_) goto L_005f2e65;
  /* 005f2dd2 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f2dd4 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f2dd6 jbe 0x5f2e65 */ if ((CF_|ZF_)) goto L_005f2e65;
L_005f2ddc:;
  /* 005f2ddc movsx esi, word ptr [edi + edx*2] */ { const u32 m_ = (u32)(edi + edx * 2u); esi = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f2de0 mov dword ptr [esp + 0x18], esi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(esi); }
  /* 005f2de4 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f2de5 fild dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)(s32)M32(m_)); }
  /* 005f2de9 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f2deb fmul dword ptr [0x63c308] */ { const u32 m_ = (u32)(0x63c308u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f2df1 fstp dword ptr [ebx + edx*4 - 4] */ { const u32 m_ = (u32)(ebx + edx * 4u + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f2df5 jb 0x5f2ddc */ if (CF_) goto L_005f2ddc;
  /* 005f2df7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f2df8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f2df9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f2dfa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f2dfb:;
  /* 005f2dfb mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f2dfe mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 005f2e02 mov eax, edi */ { eax = (u32)(edi); }
  /* 005f2e04 shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f2e06 shr edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f2e08 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005f2e0a mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 005f2e0e mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005f2e10 add edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f2e12 mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 005f2e16 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f2e18 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f2e1a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f2e1c lea ebx, [eax + esi] */ ebx = (u32)((u32)(eax + esi));
  /* 005f2e1f je 0x5f2e63 */ if (ZF_) goto L_005f2e63;
  /* 005f2e21 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005f2e23 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f2e25 jbe 0x5f2e63 */ if ((CF_|ZF_)) goto L_005f2e63;
L_005f2e27:;
  /* 005f2e27 fld dword ptr [edi + esi*4] */ { const u32 m_ = (u32)(edi + esi * 4u); FPUSH((double)MF32(m_)); }
  /* 005f2e2a fmul dword ptr [0x63c304] */ { const u32 m_ = (u32)(0x63c304u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f2e30 fstp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f2e34 fnstcw word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); M16(m_) = (u16)c->fcw; }
  /* 005f2e38 fld dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); FPUSH((double)MF32(m_)); }
  /* 005f2e3c mov ax, word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2e41 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f2e44 mov word ptr [esp + 0x18], ax */ { const u32 m_ = (u32)(esp + 0x18u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f2e49 fldcw word ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2e4d fistp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f2e51 fldcw word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f2e55 mov ax, word ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f2e5a mov word ptr [ebx + esi*2], ax */ { const u32 m_ = (u32)(ebx + esi * 2u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f2e5e inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f2e5f cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f2e61 jb 0x5f2e27 */ if (CF_) goto L_005f2e27;
L_005f2e63:;
  /* 005f2e63 mov eax, edx */ { eax = (u32)(edx); }
L_005f2e65:;
  /* 005f2e65 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f2e66 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f2e67 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f2e68 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f2e70(CPU *c) {
  NATIVE_HOOK(0x5f2e70u) REGS; LOADALL;
L_005f2e70:;
  /* 005f2e70 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f2e73 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f2e74 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f2e75 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f2e76 mov esi, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); esi = (u32)(M32(m_)); }
  /* 005f2e7a mov ebp, dword ptr [esp + 0x60] */ { const u32 m_ = (u32)(esp + 0x60u); ebp = (u32)(M32(m_)); }
  /* 005f2e7e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f2e7f mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f2e82 mov ecx, 7 */ { ecx = (u32)(0x7u); }
  /* 005f2e87 lea edi, [esp + 0x18] */ edi = (u32)((u32)(esp + 0x18u));
  /* 005f2e8b mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f2e8f mov eax, dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); eax = (u32)(M32(m_)); }
  /* 005f2e93 mov dword ptr [esp + 0x54], 0 */ { const u32 m_ = (u32)(esp + 0x54u); M32(m_) = (u32)(0x0u); }
  /* 005f2e9b rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f2e9d mov esi, dword ptr [esp + 0x68] */ { const u32 m_ = (u32)(esp + 0x68u); esi = (u32)(M32(m_)); }
  /* 005f2ea1 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f2ea5 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f2ea7 mov dword ptr [esp + 0x64], ebp */ { const u32 m_ = (u32)(esp + 0x64u); M32(m_) = (u32)(ebp); }
  /* 005f2eab jne 0x5f2eb9 */ if (!ZF_) goto L_005f2eb9;
  /* 005f2ead lea ecx, [esp + 0x14] */ ecx = (u32)((u32)(esp + 0x14u));
  /* 005f2eb1 mov dword ptr [esp + 0x68], ecx */ { const u32 m_ = (u32)(esp + 0x68u); M32(m_) = (u32)(ecx); }
  /* 005f2eb5 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005f2eb7 jmp 0x5f2ebb */ goto L_005f2ebb;
L_005f2eb9:;
  /* 005f2eb9 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
L_005f2ebb:;
  /* 005f2ebb mov ebx, dword ptr [esp + 0x60] */ { const u32 m_ = (u32)(esp + 0x60u); ebx = (u32)(M32(m_)); }
  /* 005f2ebf mov dl, byte ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f2ec3 cmp dl, byte ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); u32 a_ = (edx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f2ec6 je 0x5f2f1e */ if (ZF_) goto L_005f2f1e;
  /* 005f2ec8 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 005f2eca mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005f2ece cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f2ed0 je 0x5f2f1e */ if (ZF_) goto L_005f2f1e;
  /* 005f2ed2 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f2ed4 je 0x5f2f1e */ if (ZF_) goto L_005f2f1e;
  /* 005f2ed6 mov ecx, 7 */ { ecx = (u32)(0x7u); }
  /* 005f2edb lea esi, [esp + 0x18] */ esi = (u32)((u32)(esp + 0x18u));
  /* 005f2edf lea edi, [esp + 0x34] */ edi = (u32)((u32)(esp + 0x34u));
  /* 005f2ee3 lea eax, [esp + 0x34] */ eax = (u32)((u32)(esp + 0x34u));
  /* 005f2ee7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f2ee8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f2ee9 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f2eeb mov dword ptr [esp + 0x3c], edx */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(edx); }
  /* 005f2eef call 0x5f27c0 */ esp -= 4; M32(esp) = 0x5f2ef4u; SAVEALL; F_005f27c0(c); ABI_CHECK(0x5f27c0u, 0x5f2eefu); RETCHK(0x5f2ef4u, 0x5f2eefu); LOADALL;
  /* 005f2ef4 push 0x10806 */ { u32 v_ = 0x10806u; esp -= 4; M32(esp) = v_; }
  /* 005f2ef9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f2efb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f2efc call 0x5f2450 */ esp -= 4; M32(esp) = 0x5f2f01u; SAVEALL; F_005f2450(c); ABI_CHECK(0x5f2450u, 0x5f2efcu); RETCHK(0x5f2f01u, 0x5f2efcu); LOADALL;
  /* 005f2f01 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f2f04 mov dword ptr [esp + 0x54], eax */ { const u32 m_ = (u32)(esp + 0x54u); M32(m_) = (u32)(eax); }
  /* 005f2f08 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f2f0a jne 0x5f2f14 */ if (!ZF_) goto L_005f2f14;
  /* 005f2f0c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f2f0d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f2f0e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f2f0f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f2f10 add esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f2f13 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f2f14:;
  /* 005f2f14 mov esi, dword ptr [esp + 0x68] */ { const u32 m_ = (u32)(esp + 0x68u); esi = (u32)(M32(m_)); }
  /* 005f2f18 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 005f2f1a mov eax, dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); eax = (u32)(M32(m_)); }
L_005f2f1e:;
  /* 005f2f1e mov cl, byte ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f2f22 mov dl, byte ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f2f25 mov edi, dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); edi = (u32)(M32(m_)); }
  /* 005f2f29 cmp cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f2f2b jne 0x5f2f3b */ if (!ZF_) goto L_005f2f3b;
  /* 005f2f2d mov dl, byte ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f2f30 mov cl, byte ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f2f34 xor dl, cl */ { u32 a_ = (edx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f2f36 test dl, 1 */ { u32 a_ = (edx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f2f39 je 0x5f2f64 */ if (ZF_) goto L_005f2f64;
L_005f2f3b:;
  /* 005f2f3b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f2f3c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f2f3d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f2f3e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f2f3f lea eax, [esp + 0x28] */ eax = (u32)((u32)(esp + 0x28u));
  /* 005f2f43 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f2f44 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f2f45 call 0x5f2fb0 */ esp -= 4; M32(esp) = 0x5f2f4au; SAVEALL; F_005f2fb0(c); ABI_CHECK(0x5f2fb0u, 0x5f2f45u); RETCHK(0x5f2f4au, 0x5f2f45u); LOADALL;
  /* 005f2f4a mov cl, byte ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f2f4d mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005f2f4f mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 005f2f53 mov dword ptr [esp + 0x38], eax */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(eax); }
  /* 005f2f57 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f2f5a mov byte ptr [esp + 0x24], cl */ { const u32 m_ = (u32)(esp + 0x24u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005f2f5e mov dword ptr [esp + 0x5c], edx */ { const u32 m_ = (u32)(esp + 0x5cu); M32(m_) = (u32)(edx); }
  /* 005f2f62 mov eax, edx */ { eax = (u32)(edx); }
L_005f2f64:;
  /* 005f2f64 mov ecx, dword ptr [esp + 0x54] */ { const u32 m_ = (u32)(esp + 0x54u); ecx = (u32)(M32(m_)); }
  /* 005f2f68 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f2f6a je 0x5f2f72 */ if (ZF_) goto L_005f2f72;
  /* 005f2f6c mov ebp, dword ptr [esp + 0x64] */ { const u32 m_ = (u32)(esp + 0x64u); ebp = (u32)(M32(m_)); }
  /* 005f2f70 mov edi, ecx */ { edi = (u32)(ecx); }
L_005f2f72:;
  /* 005f2f72 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005f2f76 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 005f2f78 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f2f7a je 0x5f2f92 */ if (ZF_) goto L_005f2f92;
  /* 005f2f7c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f2f7d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f2f7e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f2f7f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f2f80 lea edx, [esp + 0x28] */ edx = (u32)((u32)(esp + 0x28u));
  /* 005f2f84 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f2f85 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f2f86 call 0x5f2950 */ esp -= 4; M32(esp) = 0x5f2f8bu; SAVEALL; F_005f2950(c); ABI_CHECK(0x5f2950u, 0x5f2f86u); RETCHK(0x5f2f8bu, 0x5f2f86u); LOADALL;
  /* 005f2f8b add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f2f8e mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
L_005f2f92:;
  /* 005f2f92 mov eax, dword ptr [esp + 0x54] */ { const u32 m_ = (u32)(esp + 0x54u); eax = (u32)(M32(m_)); }
  /* 005f2f96 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f2f98 je 0x5f2fa3 */ if (ZF_) goto L_005f2fa3;
  /* 005f2f9a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f2f9b call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f2fa0u; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f2f9bu); RETCHK(0x5f2fa0u, 0x5f2f9bu); LOADALL;
  /* 005f2fa0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f2fa3:;
  /* 005f2fa3 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f2fa7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f2fa8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f2fa9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f2faa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f2fab add esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f2fae ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f2fb0(CPU *c) {
  NATIVE_HOOK(0x5f2fb0u) REGS; LOADALL;
L_005f2fb0:;
  /* 005f2fb0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f2fb1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f2fb2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f2fb3 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 005f2fb7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f2fb9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f2fba jne 0x5f2fc0 */ if (!ZF_) goto L_005f2fc0;
  /* 005f2fbc lea esi, [esp + 0x28] */ esi = (u32)((u32)(esp + 0x28u));
L_005f2fc0:;
  /* 005f2fc0 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005f2fc4 mov ebp, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebp = (u32)(M32(m_)); }
  /* 005f2fc8 mov ebx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebx = (u32)(M32(m_)); }
  /* 005f2fcc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f2fcd push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f2fce push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f2fcf call 0x5f28b0 */ esp -= 4; M32(esp) = 0x5f2fd4u; SAVEALL; F_005f28b0(c); ABI_CHECK(0x5f28b0u, 0x5f2fcfu); RETCHK(0x5f2fd4u, 0x5f2fcfu); LOADALL;
  /* 005f2fd4 mov edi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edi = (u32)(M32(m_)); }
  /* 005f2fd8 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005f2fda mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 005f2fde add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f2fe1 add esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f2fe3 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f2fe5 je 0x5f2fe9 */ if (ZF_) goto L_005f2fe9;
  /* 005f2fe7 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_005f2fe9:;
  /* 005f2fe9 mov cl, byte ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f2fec mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 005f2ff0 cmp cl, 8 */ { u32 a_ = (ecx & 0xffu), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f2ff3 jne 0x5f3193 */ if (!ZF_) goto L_005f3193;
  /* 005f2ff9 cmp byte ptr [edx + 0xc], 0x10 */ { const u32 m_ = (u32)(edx + 0xcu); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f2ffd jne 0x5f3193 */ if (!ZF_) goto L_005f3193;
  /* 005f3003 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f3006 lea eax, [ecx + ecx] */ eax = (u32)((u32)(ecx + ecx));
  /* 005f3009 sub ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f300b mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005f300f mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005f3011 test byte ptr [ebx + 0x18], al */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f3014 mov bl, byte ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f3017 je 0x5f30d9 */ if (ZF_) goto L_005f30d9;
  /* 005f301d test al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f301f je 0x5f307a */ if (ZF_) goto L_005f307a;
  /* 005f3021 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3023 je 0x5f3071 */ if (ZF_) goto L_005f3071;
  /* 005f3025 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3027 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3029 jbe 0x5f3071 */ if ((CF_|ZF_)) goto L_005f3071;
L_005f302b:;
  /* 005f302b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f302d mov al, byte ptr [edx + esi] */ { const u32 m_ = (u32)(edx + esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f3030 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f3034 fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 005f3038 fmul dword ptr [0x63c318] */ { const u32 m_ = (u32)(0x63c318u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f303e fstp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3042 fnstcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); M16(m_) = (u16)c->fcw; }
  /* 005f3046 fld dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 005f304a mov ax, word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f304f or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f3052 mov word ptr [esp + 0x20], ax */ { const u32 m_ = (u32)(esp + 0x20u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f3057 fldcw word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f305b fistp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f305f fldcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3063 mov ax, word ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f3068 mov word ptr [edi + edx*2], ax */ { const u32 m_ = (u32)(edi + edx * 2u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f306c inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f306d cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f306f jb 0x5f302b */ if (CF_) goto L_005f302b;
L_005f3071:;
  /* 005f3071 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f3075 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f3076 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f3077 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f3078 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f3079 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f307a:;
  /* 005f307a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f307c je 0x5f30d0 */ if (ZF_) goto L_005f30d0;
  /* 005f307e xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3080 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3082 jbe 0x5f30d0 */ if ((CF_|ZF_)) goto L_005f30d0;
L_005f3084:;
  /* 005f3084 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f3086 mov al, byte ptr [edx + esi] */ { const u32 m_ = (u32)(edx + esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f3089 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f308d fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 005f3091 fsub dword ptr [0x65700c] */ { const u32 m_ = (u32)(0x65700cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005f3097 fmul dword ptr [0x63c314] */ { const u32 m_ = (u32)(0x63c314u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f309d fstp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f30a1 fnstcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); M16(m_) = (u16)c->fcw; }
  /* 005f30a5 fld dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 005f30a9 mov ax, word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f30ae or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f30b1 mov word ptr [esp + 0x20], ax */ { const u32 m_ = (u32)(esp + 0x20u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f30b6 fldcw word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f30ba fistp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f30be fldcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f30c2 mov ax, word ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f30c7 mov word ptr [edi + edx*2], ax */ { const u32 m_ = (u32)(edi + edx * 2u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f30cb inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f30cc cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f30ce jb 0x5f3084 */ if (CF_) goto L_005f3084;
L_005f30d0:;
  /* 005f30d0 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f30d4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f30d5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f30d6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f30d7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f30d8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f30d9:;
  /* 005f30d9 test al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f30db je 0x5f313b */ if (ZF_) goto L_005f313b;
  /* 005f30dd test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f30df je 0x5f3132 */ if (ZF_) goto L_005f3132;
  /* 005f30e1 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f30e3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f30e5 jbe 0x5f3132 */ if ((CF_|ZF_)) goto L_005f3132;
L_005f30e7:;
  /* 005f30e7 movsx eax, byte ptr [edx + esi] */ { const u32 m_ = (u32)(edx + esi); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f30eb mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f30ef fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 005f30f3 fadd dword ptr [0x65700c] */ { const u32 m_ = (u32)(0x65700cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005f30f9 fmul dword ptr [0x63c318] */ { const u32 m_ = (u32)(0x63c318u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f30ff fstp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3103 fnstcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); M16(m_) = (u16)c->fcw; }
  /* 005f3107 fld dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 005f310b mov ax, word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f3110 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f3113 mov word ptr [esp + 0x20], ax */ { const u32 m_ = (u32)(esp + 0x20u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f3118 fldcw word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f311c fistp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f3120 fldcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3124 mov ax, word ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f3129 mov word ptr [edi + edx*2], ax */ { const u32 m_ = (u32)(edi + edx * 2u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f312d inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f312e cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3130 jb 0x5f30e7 */ if (CF_) goto L_005f30e7;
L_005f3132:;
  /* 005f3132 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f3136 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f3137 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f3138 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f3139 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f313a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f313b:;
  /* 005f313b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f313d je 0x5f318a */ if (ZF_) goto L_005f318a;
  /* 005f313f xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3141 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3143 jbe 0x5f318a */ if ((CF_|ZF_)) goto L_005f318a;
L_005f3145:;
  /* 005f3145 movsx eax, byte ptr [edx + esi] */ { const u32 m_ = (u32)(edx + esi); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f3149 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f314d fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 005f3151 fmul dword ptr [0x63c314] */ { const u32 m_ = (u32)(0x63c314u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f3157 fstp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f315b fnstcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); M16(m_) = (u16)c->fcw; }
  /* 005f315f fld dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 005f3163 mov ax, word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f3168 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f316b mov word ptr [esp + 0x20], ax */ { const u32 m_ = (u32)(esp + 0x20u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f3170 fldcw word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3174 fistp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f3178 fldcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f317c mov ax, word ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f3181 mov word ptr [edi + edx*2], ax */ { const u32 m_ = (u32)(edi + edx * 2u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f3185 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f3186 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3188 jb 0x5f3145 */ if (CF_) goto L_005f3145;
L_005f318a:;
  /* 005f318a mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f318e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f318f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f3190 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f3191 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f3192 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f3193:;
  /* 005f3193 cmp cl, 0x10 */ { u32 a_ = (ecx & 0xffu), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f3196 jne 0x5f3325 */ if (!ZF_) goto L_005f3325;
  /* 005f319c cmp byte ptr [edx + 0xc], 8 */ { const u32 m_ = (u32)(edx + 0xcu); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f31a0 jne 0x5f3325 */ if (!ZF_) goto L_005f3325;
  /* 005f31a6 mov ebp, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ebp = (u32)(M32(m_)); }
  /* 005f31a9 shr ebp, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 005f31ab mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 005f31ad sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f31af mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005f31b1 test byte ptr [ebx + 0x18], al */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f31b4 mov bl, byte ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f31b7 je 0x5f3273 */ if (ZF_) goto L_005f3273;
  /* 005f31bd test al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f31bf je 0x5f3217 */ if (ZF_) goto L_005f3217;
  /* 005f31c1 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f31c3 je 0x5f3210 */ if (ZF_) goto L_005f3210;
  /* 005f31c5 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f31c7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f31c9 jbe 0x5f3210 */ if ((CF_|ZF_)) goto L_005f3210;
L_005f31cb:;
  /* 005f31cb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f31cd mov ax, word ptr [esi + edx*2] */ { const u32 m_ = (u32)(esi + edx * 2u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f31d1 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005f31d5 fild dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)(s32)M32(m_)); }
  /* 005f31d9 fmul dword ptr [0x63c310] */ { const u32 m_ = (u32)(0x63c310u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f31df fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f31e3 fnstcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); M16(m_) = (u16)c->fcw; }
  /* 005f31e7 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005f31eb mov ax, word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f31f0 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f31f3 mov word ptr [esp + 0x20], ax */ { const u32 m_ = (u32)(esp + 0x20u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f31f8 fldcw word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f31fc fistp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f3200 fldcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3204 mov al, byte ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f3208 mov byte ptr [edx + edi], al */ { const u32 m_ = (u32)(edx + edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005f320b inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f320c cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f320e jb 0x5f31cb */ if (CF_) goto L_005f31cb;
L_005f3210:;
  /* 005f3210 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f3211 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 005f3213 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f3214 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f3215 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f3216 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f3217:;
  /* 005f3217 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3219 je 0x5f326c */ if (ZF_) goto L_005f326c;
  /* 005f321b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f321d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f321f jbe 0x5f326c */ if ((CF_|ZF_)) goto L_005f326c;
L_005f3221:;
  /* 005f3221 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f3223 mov ax, word ptr [esi + edx*2] */ { const u32 m_ = (u32)(esi + edx * 2u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f3227 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005f322b fild dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)(s32)M32(m_)); }
  /* 005f322f fsub dword ptr [0x63c304] */ { const u32 m_ = (u32)(0x63c304u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005f3235 fmul dword ptr [0x63c30c] */ { const u32 m_ = (u32)(0x63c30cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f323b fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f323f fnstcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); M16(m_) = (u16)c->fcw; }
  /* 005f3243 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005f3247 mov ax, word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f324c or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f324f mov word ptr [esp + 0x20], ax */ { const u32 m_ = (u32)(esp + 0x20u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f3254 fldcw word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3258 fistp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f325c fldcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3260 mov al, byte ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f3264 mov byte ptr [edx + edi], al */ { const u32 m_ = (u32)(edx + edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005f3267 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f3268 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f326a jb 0x5f3221 */ if (CF_) goto L_005f3221;
L_005f326c:;
  /* 005f326c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f326d mov eax, ebp */ { eax = (u32)(ebp); }
  /* 005f326f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f3270 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f3271 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f3272 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f3273:;
  /* 005f3273 test al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f3275 je 0x5f32d1 */ if (ZF_) goto L_005f32d1;
  /* 005f3277 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3279 je 0x5f32ca */ if (ZF_) goto L_005f32ca;
  /* 005f327b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f327d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f327f jbe 0x5f32ca */ if ((CF_|ZF_)) goto L_005f32ca;
L_005f3281:;
  /* 005f3281 movsx eax, word ptr [esi + edx*2] */ { const u32 m_ = (u32)(esi + edx * 2u); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f3285 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005f3289 fild dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)(s32)M32(m_)); }
  /* 005f328d fadd dword ptr [0x63c304] */ { const u32 m_ = (u32)(0x63c304u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005f3293 fmul dword ptr [0x63c30c] */ { const u32 m_ = (u32)(0x63c30cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f3299 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f329d fnstcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); M16(m_) = (u16)c->fcw; }
  /* 005f32a1 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005f32a5 mov ax, word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f32aa or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f32ad mov word ptr [esp + 0x20], ax */ { const u32 m_ = (u32)(esp + 0x20u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f32b2 fldcw word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f32b6 fistp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f32ba fldcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f32be mov al, byte ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f32c2 mov byte ptr [edx + edi], al */ { const u32 m_ = (u32)(edx + edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005f32c5 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f32c6 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f32c8 jb 0x5f3281 */ if (CF_) goto L_005f3281;
L_005f32ca:;
  /* 005f32ca pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f32cb mov eax, ebp */ { eax = (u32)(ebp); }
  /* 005f32cd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f32ce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f32cf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f32d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f32d1:;
  /* 005f32d1 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f32d3 je 0x5f331e */ if (ZF_) goto L_005f331e;
  /* 005f32d5 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f32d7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f32d9 jbe 0x5f331e */ if ((CF_|ZF_)) goto L_005f331e;
L_005f32db:;
  /* 005f32db movsx eax, word ptr [esi + edx*2] */ { const u32 m_ = (u32)(esi + edx * 2u); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f32df mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005f32e3 fild dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)(s32)M32(m_)); }
  /* 005f32e7 fmul dword ptr [0x63c30c] */ { const u32 m_ = (u32)(0x63c30cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f32ed fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f32f1 fnstcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); M16(m_) = (u16)c->fcw; }
  /* 005f32f5 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005f32f9 mov ax, word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f32fe or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f3301 mov word ptr [esp + 0x20], ax */ { const u32 m_ = (u32)(esp + 0x20u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f3306 fldcw word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f330a fistp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f330e fldcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3312 mov al, byte ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f3316 mov byte ptr [edx + edi], al */ { const u32 m_ = (u32)(edx + edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005f3319 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f331a cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f331c jb 0x5f32db */ if (CF_) goto L_005f32db;
L_005f331e:;
  /* 005f331e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f331f mov eax, ebp */ { eax = (u32)(ebp); }
  /* 005f3321 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f3322 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f3323 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f3324 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f3325:;
  /* 005f3325 mov dl, byte ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f3328 and dl, 1 */ { u32 a_ = (edx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f332b jne 0x5f3415 */ if (!ZF_) goto L_005f3415;
  /* 005f3331 mov ebp, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebp = (u32)(M32(m_)); }
  /* 005f3335 test byte ptr [ebp + 0x18], 1 */ { const u32 m_ = (u32)(ebp + 0x18u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f3339 je 0x5f3415 */ if (ZF_) goto L_005f3415;
  /* 005f333f mov ebx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005f3342 cmp cl, 8 */ { u32 a_ = (ecx & 0xffu), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f3345 jne 0x5f33a4 */ if (!ZF_) goto L_005f33a4;
  /* 005f3347 cmp byte ptr [ebp + 0xc], cl */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f334a jne 0x5f33a4 */ if (!ZF_) goto L_005f33a4;
  /* 005f334c mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005f334e sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f3350 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3352 je 0x5f339d */ if (ZF_) goto L_005f339d;
  /* 005f3354 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3356 jbe 0x5f339d */ if ((CF_|ZF_)) goto L_005f339d;
  /* 005f3358 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005f335a sub esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
L_005f335c:;
  /* 005f335c movsx eax, byte ptr [esi + ecx] */ { const u32 m_ = (u32)(esi + ecx); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f3360 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005f3364 fild dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)(s32)M32(m_)); }
  /* 005f3368 fadd dword ptr [0x65700c] */ { const u32 m_ = (u32)(0x65700cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005f336e fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3372 fnstcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); M16(m_) = (u16)c->fcw; }
  /* 005f3376 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005f337a mov ax, word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f337f or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f3382 mov word ptr [esp + 0x20], ax */ { const u32 m_ = (u32)(esp + 0x20u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f3387 fldcw word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f338b fistp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f338f fldcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3393 mov al, byte ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f3397 mov byte ptr [ecx], al */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005f3399 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f339a dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f339b jne 0x5f335c */ if (!ZF_) goto L_005f335c;
L_005f339d:;
  /* 005f339d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f339e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f339f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005f33a1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f33a2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f33a3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f33a4:;
  /* 005f33a4 cmp cl, 0x10 */ { u32 a_ = (ecx & 0xffu), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f33a7 jne 0x5f3526 */ if (!ZF_) goto L_005f3526;
  /* 005f33ad cmp byte ptr [ebp + 0xc], 0x10 */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f33b1 jne 0x5f3526 */ if (!ZF_) goto L_005f3526;
  /* 005f33b7 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005f33b9 shr edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f33bb sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f33bd test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f33bf je 0x5f340e */ if (ZF_) goto L_005f340e;
  /* 005f33c1 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f33c3 jbe 0x5f340e */ if ((CF_|ZF_)) goto L_005f340e;
  /* 005f33c5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005f33c7 sub esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
L_005f33c9:;
  /* 005f33c9 movsx eax, word ptr [ecx + esi] */ { const u32 m_ = (u32)(ecx + esi); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f33cd mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005f33d1 fild dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)(s32)M32(m_)); }
  /* 005f33d5 fadd dword ptr [0x63c304] */ { const u32 m_ = (u32)(0x63c304u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005f33db fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f33df fnstcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); M16(m_) = (u16)c->fcw; }
  /* 005f33e3 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005f33e7 mov ax, word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f33ec or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f33ef mov word ptr [esp + 0x20], ax */ { const u32 m_ = (u32)(esp + 0x20u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f33f4 fldcw word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f33f8 fistp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f33fc fldcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3400 mov ax, word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f3405 mov word ptr [ecx], ax */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f3408 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f340b dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f340c jne 0x5f33c9 */ if (!ZF_) goto L_005f33c9;
L_005f340e:;
  /* 005f340e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f340f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f3410 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005f3412 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f3413 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f3414 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f3415:;
  /* 005f3415 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f3417 mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 005f341b je 0x5f3504 */ if (ZF_) goto L_005f3504;
  /* 005f3421 test byte ptr [edx + 0x18], 1 */ { const u32 m_ = (u32)(edx + 0x18u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f3425 jne 0x5f3504 */ if (!ZF_) goto L_005f3504;
  /* 005f342b mov ebp, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ebp = (u32)(M32(m_)); }
  /* 005f342e cmp cl, 8 */ { u32 a_ = (ecx & 0xffu), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f3431 jne 0x5f3491 */ if (!ZF_) goto L_005f3491;
  /* 005f3433 cmp byte ptr [edx + 0xc], cl */ { const u32 m_ = (u32)(edx + 0xcu); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f3436 jne 0x5f3491 */ if (!ZF_) goto L_005f3491;
  /* 005f3438 mov edx, ebp */ { edx = (u32)(ebp); }
  /* 005f343a sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f343c test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f343e je 0x5f348a */ if (ZF_) goto L_005f348a;
  /* 005f3440 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3442 jbe 0x5f348a */ if ((CF_|ZF_)) goto L_005f348a;
  /* 005f3444 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005f3446 sub esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
L_005f3448:;
  /* 005f3448 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f344a mov al, byte ptr [ecx + esi] */ { const u32 m_ = (u32)(ecx + esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f344d mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005f3451 fild dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)(s32)M32(m_)); }
  /* 005f3455 fsub dword ptr [0x65700c] */ { const u32 m_ = (u32)(0x65700cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005f345b fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f345f fnstcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); M16(m_) = (u16)c->fcw; }
  /* 005f3463 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005f3467 mov ax, word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f346c or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f346f mov word ptr [esp + 0x20], ax */ { const u32 m_ = (u32)(esp + 0x20u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f3474 fldcw word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3478 fistp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f347c fldcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3480 mov al, byte ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f3484 mov byte ptr [ecx], al */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005f3486 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f3487 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f3488 jne 0x5f3448 */ if (!ZF_) goto L_005f3448;
L_005f348a:;
  /* 005f348a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f348b mov eax, ebp */ { eax = (u32)(ebp); }
  /* 005f348d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f348e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f348f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f3490 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f3491:;
  /* 005f3491 cmp cl, 0x10 */ { u32 a_ = (ecx & 0xffu), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f3494 jne 0x5f3526 */ if (!ZF_) goto L_005f3526;
  /* 005f349a cmp byte ptr [edx + 0xc], 0x10 */ { const u32 m_ = (u32)(edx + 0xcu); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f349e jne 0x5f3526 */ if (!ZF_) goto L_005f3526;
  /* 005f34a4 mov edx, ebp */ { edx = (u32)(ebp); }
  /* 005f34a6 shr edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f34a8 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f34aa test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f34ac je 0x5f34fd */ if (ZF_) goto L_005f34fd;
  /* 005f34ae test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f34b0 jbe 0x5f34fd */ if ((CF_|ZF_)) goto L_005f34fd;
  /* 005f34b2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005f34b4 sub esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
L_005f34b6:;
  /* 005f34b6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f34b8 mov ax, word ptr [ecx + esi] */ { const u32 m_ = (u32)(ecx + esi); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f34bc mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005f34c0 fild dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)(s32)M32(m_)); }
  /* 005f34c4 fsub dword ptr [0x63c304] */ { const u32 m_ = (u32)(0x63c304u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005f34ca fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f34ce fnstcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); M16(m_) = (u16)c->fcw; }
  /* 005f34d2 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005f34d6 mov ax, word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f34db or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f34de mov word ptr [esp + 0x20], ax */ { const u32 m_ = (u32)(esp + 0x20u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f34e3 fldcw word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f34e7 fistp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f34eb fldcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f34ef mov ax, word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f34f4 mov word ptr [ecx], ax */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f34f7 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f34fa dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f34fb jne 0x5f34b6 */ if (!ZF_) goto L_005f34b6;
L_005f34fd:;
  /* 005f34fd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f34fe mov eax, ebp */ { eax = (u32)(ebp); }
  /* 005f3500 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f3501 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f3502 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f3503 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f3504:;
  /* 005f3504 cmp cl, byte ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 a_ = (ecx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f3507 jne 0x5f3526 */ if (!ZF_) goto L_005f3526;
  /* 005f3509 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f350b je 0x5f351e */ if (ZF_) goto L_005f351e;
  /* 005f350d mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f3510 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f3512 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f3515 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f3517 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005f3519 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f351c rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
L_005f351e:;
  /* 005f351e mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f3521 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f3522 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f3523 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f3524 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f3525 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f3526:;
  /* 005f3526 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f3527 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f3528 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f3529 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f352b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f352c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f3530(CPU *c) {
  NATIVE_HOOK(0x5f3530u) REGS; LOADALL;
L_005f3530:;
  /* 005f3530 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f3534 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f3538 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f3539 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f353a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f353b mov esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f353e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f353f xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f3541 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3543 jne 0x5f3549 */ if (!ZF_) goto L_005f3549;
  /* 005f3545 lea eax, [esp + 0x28] */ eax = (u32)((u32)(esp + 0x28u));
L_005f3549:;
  /* 005f3549 mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 005f354d mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
  /* 005f354f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f3551 mov al, byte ptr [ecx + 0xd] */ { const u32 m_ = (u32)(ecx + 0xdu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f3554 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 005f3558 imul eax, esi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)esi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f355b cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f355d mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005f3561 je 0x5f35bc */ if (ZF_) goto L_005f35bc;
  /* 005f3563 lea ebp, [ebx + ecx] */ ebp = (u32)((u32)(ebx + ecx));
  /* 005f3566 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005f3568 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f356a mov word ptr [esp + 0x28], di */ { const u32 m_ = (u32)(esp + 0x28u); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 005f356f mov word ptr [esp + 0x2a], di */ { const u32 m_ = (u32)(esp + 0x2au); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 005f3574 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f3576 mov edi, ebp */ { edi = (u32)(ebp); }
  /* 005f3578 sub esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f357a shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f357d rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005f357f mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005f3581 lea edx, [esp + 0x28] */ edx = (u32)((u32)(esp + 0x28u));
  /* 005f3585 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f3588 rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 005f358a mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005f358e mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f3592 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f3593 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f3594 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f3595 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f3596 call 0x5f3930 */ esp -= 4; M32(esp) = 0x5f359bu; SAVEALL; F_005f3930(c); ABI_CHECK(0x5f3930u, 0x5f3596u); RETCHK(0x5f359bu, 0x5f3596u); LOADALL;
  /* 005f359b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f359e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f35a0 jne 0x5f35a7 */ if (!ZF_) goto L_005f35a7;
  /* 005f35a2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f35a3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f35a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f35a5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f35a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f35a7:;
  /* 005f35a7 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f35ab push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f35ac add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f35ae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f35af push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f35b0 call 0x5f41a0 */ esp -= 4; M32(esp) = 0x5f35b5u; SAVEALL; F_005f41a0(c); ABI_CHECK(0x5f41a0u, 0x5f35b0u); RETCHK(0x5f35b5u, 0x5f35b0u); LOADALL;
  /* 005f35b5 mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 005f35b9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f35bc:;
  /* 005f35bc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f35bd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f35be pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f35bf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f35c0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f35d0(CPU *c) {
  NATIVE_HOOK(0x5f35d0u) REGS; LOADALL;
L_005f35d0:;
  /* 005f35d0 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f35d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f35d4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f35d5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f35d6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f35d7 mov edi, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); edi = (u32)(M32(m_)); }
  /* 005f35db test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f35dd jne 0x5f35e9 */ if (!ZF_) goto L_005f35e9;
  /* 005f35df lea eax, [esp + 0x1c] */ eax = (u32)((u32)(esp + 0x1cu));
  /* 005f35e3 mov dword ptr [esp + 0x38], eax */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(eax); }
  /* 005f35e7 mov edi, eax */ { edi = (u32)(eax); }
L_005f35e9:;
  /* 005f35e9 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 005f35ed push 0x63c330 */ { u32 v_ = 0x63c330u; esp -= 4; M32(esp) = v_; }
  /* 005f35f2 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f35f5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f35f6 call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f35fbu; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f35f6u); RETCHK(0x5f35fbu, 0x5f35f6u); LOADALL;
  /* 005f35fb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f35fe test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3600 jne 0x5f386f */ if (!ZF_) goto L_005f386f;
  /* 005f3606 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 005f360a push 0x63c350 */ { u32 v_ = 0x63c350u; esp -= 4; M32(esp) = v_; }
  /* 005f360f mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f3612 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f3613 call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f3618u; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f3613u); RETCHK(0x5f3618u, 0x5f3613u); LOADALL;
  /* 005f3618 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f361b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f361d jne 0x5f386f */ if (!ZF_) goto L_005f386f;
  /* 005f3623 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f3626 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f3628 mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f362b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f362d div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x5f362du); eax = q_; edx = r_; }
  /* 005f362f mov ebp, eax */ { ebp = (u32)(eax); }
  /* 005f3631 mov eax, 0x24924925 */ { eax = (u32)(0x24924925u); }
  /* 005f3636 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 005f3638 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f363a add ecx, 0xd */ { u32 a_ = ecx, b_ = 0xdu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f363d mul ecx */ { u64 p_ = (u64)eax * ecx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f363f sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f3641 mov eax, 0x24924925 */ { eax = (u32)(0x24924925u); }
  /* 005f3646 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f3648 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f364a shr ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f364d shl ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f3650 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005f3652 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 005f3656 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f3658 add ecx, 0xd */ { u32 a_ = ecx, b_ = 0xdu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f365b mul ecx */ { u64 p_ = (u64)eax * ecx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f365d sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f365f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f3661 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f3663 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f3665 shr ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f3668 shl ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f366b mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 005f366d mov al, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f3670 imul eax, ebx */ { s64 p_ = (s64)(s32)eax * (s64)(s32)ebx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f3673 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f3677 mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 005f367b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f367d je 0x5f3919 */ if (ZF_) goto L_005f3919;
  /* 005f3683 mov edi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edi = (u32)(M32(m_)); }
  /* 005f3687 cmp byte ptr [edi + 0xd], 1 */ { const u32 m_ = (u32)(edi + 0xdu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f368b jbe 0x5f371f */ if ((CF_|ZF_)) goto L_005f371f;
  /* 005f3691 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f3694 push 0x10806 */ { u32 v_ = 0x10806u; esp -= 4; M32(esp) = v_; }
  /* 005f3699 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f369a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f369c call 0x5f2450 */ esp -= 4; M32(esp) = 0x5f36a1u; SAVEALL; F_005f2450(c); ABI_CHECK(0x5f2450u, 0x5f369cu); RETCHK(0x5f36a1u, 0x5f369cu); LOADALL;
  /* 005f36a1 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f36a4 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f36a8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f36aa jne 0x5f36b6 */ if (!ZF_) goto L_005f36b6;
L_005f36ac:;
  /* 005f36ac pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f36ad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f36ae pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f36af xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f36b1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f36b2 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f36b5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f36b6:;
  /* 005f36b6 mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f36b9 and ebp, 0xfffffffe */ { u32 a_ = ebp, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005f36bc test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f36be mov dword ptr [esp + 0x24], 0 */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0x0u); }
  /* 005f36c6 jbe 0x5f3727 */ if ((CF_|ZF_)) goto L_005f3727;
  /* 005f36c8 mov edi, eax */ { edi = (u32)(eax); }
  /* 005f36ca mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 005f36ce mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
  /* 005f36d2 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
L_005f36d6:;
  /* 005f36d6 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f36d8 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 005f36da je 0x5f36f2 */ if (ZF_) goto L_005f36f2;
L_005f36dc:;
  /* 005f36dc mov dx, word ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f36df mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 005f36e2 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f36e4 mov dl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f36e7 add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f36ea sub ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f36ed lea eax, [eax + edx*2] */ eax = (u32)((u32)(eax + edx * 2u));
  /* 005f36f0 jne 0x5f36dc */ if (!ZF_) goto L_005f36dc;
L_005f36f2:;
  /* 005f36f2 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 005f36f6 mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 005f36fa mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 005f36fe xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3700 mov dl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f3703 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f3704 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f3707 add edi, ebp */ { u32 a_ = edi, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f3709 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f370b mov dword ptr [esp + 0x24], ecx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ecx); }
  /* 005f370f mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 005f3713 mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
  /* 005f3717 jb 0x5f36d6 */ if (CF_) goto L_005f36d6;
  /* 005f3719 mov edi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edi = (u32)(M32(m_)); }
  /* 005f371d jmp 0x5f3727 */ goto L_005f3727;
L_005f371f:;
  /* 005f371f mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 005f3723 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
L_005f3727:;
  /* 005f3727 mov al, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f372a mov dword ptr [esp + 0x24], 0 */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0x0u); }
  /* 005f3732 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f3734 jbe 0x5f37d6 */ if ((CF_|ZF_)) goto L_005f37d6;
  /* 005f373a mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 005f373e mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 005f3742 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 005f3744 mov dword ptr [esp + 0x2c], edx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(edx); }
  /* 005f3748 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f374a mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 005f374e mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f3752 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f3754 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
L_005f3758:;
  /* 005f3758 mov edi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edi = (u32)(M32(m_)); }
  /* 005f375c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005f375e mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f3760 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f3762 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f3765 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005f3767 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005f3769 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f376c rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 005f376e mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f3772 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005f3776 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 005f377a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f377b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f377c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f377d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f377e call 0x5f3930 */ esp -= 4; M32(esp) = 0x5f3783u; SAVEALL; F_005f3930(c); ABI_CHECK(0x5f3930u, 0x5f377eu); RETCHK(0x5f3783u, 0x5f377eu); LOADALL;
  /* 005f3783 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f3786 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3788 je 0x5f36ac */ if (ZF_) goto L_005f36ac;
  /* 005f378e mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 005f3792 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005f3794 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f3796 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f3798 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 005f379c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f379d mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 005f37a1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f37a3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f37a5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f37a6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f37a7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f37a8 call 0x5f3b10 */ esp -= 4; M32(esp) = 0x5f37adu; SAVEALL; F_005f3b10(c); ABI_CHECK(0x5f3b10u, 0x5f37a8u); RETCHK(0x5f37adu, 0x5f37a8u); LOADALL;
  /* 005f37ad mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 005f37b1 mov edx, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); edx = (u32)(M32(m_)); }
  /* 005f37b5 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f37b7 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f37ba mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f37bd inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f37be add edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f37c0 add edi, ebp */ { u32 a_ = edi, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f37c2 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f37c4 mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 005f37c8 mov dword ptr [esp + 0x2c], edx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(edx); }
  /* 005f37cc mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
  /* 005f37d0 jb 0x5f3758 */ if (CF_) goto L_005f3758;
  /* 005f37d2 mov edi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edi = (u32)(M32(m_)); }
L_005f37d6:;
  /* 005f37d6 mov al, byte ptr [edi + 0xd] */ { const u32 m_ = (u32)(edi + 0xdu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f37d9 cmp al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f37db jbe 0x5f3919 */ if ((CF_|ZF_)) goto L_005f3919;
  /* 005f37e1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f37e3 mov dword ptr [esp + 0x24], 0 */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0x0u); }
  /* 005f37eb jbe 0x5f383a */ if ((CF_|ZF_)) goto L_005f383a;
  /* 005f37ed mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f37f1 mov ecx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 005f37f5 mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
L_005f37f9:;
  /* 005f37f9 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f37fb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005f37fd mov ebp, ebx */ { ebp = (u32)(ebx); }
  /* 005f37ff je 0x5f381b */ if (ZF_) goto L_005f381b;
L_005f3801:;
  /* 005f3801 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005f3803 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f3806 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 005f3808 mov edx, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 005f380b mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f380e xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3810 mov dl, byte ptr [edi + 0xd] */ { const u32 m_ = (u32)(edi + 0xdu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f3813 sub ebp, 8 */ { u32 a_ = ebp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005f3816 lea eax, [eax + edx*8] */ eax = (u32)((u32)(eax + edx * 8u));
  /* 005f3819 jne 0x5f3801 */ if (!ZF_) goto L_005f3801;
L_005f381b:;
  /* 005f381b mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 005f381f mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f3823 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3825 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f3826 mov dl, byte ptr [edi + 0xd] */ { const u32 m_ = (u32)(edi + 0xdu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f3829 add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f382b add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f382e cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3830 mov dword ptr [esp + 0x24], esi */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(esi); }
  /* 005f3834 mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 005f3838 jb 0x5f37f9 */ if (CF_) goto L_005f37f9;
L_005f383a:;
  /* 005f383a xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f383c mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f3840 mov cl, byte ptr [edi + 0xd] */ { const u32 m_ = (u32)(edi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f3843 mov edi, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edi = (u32)(M32(m_)); }
  /* 005f3847 imul ecx, ebx */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)ebx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f384a mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f384c mov esi, eax */ { esi = (u32)(eax); }
  /* 005f384e shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f3851 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f3853 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005f3855 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f3856 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f3859 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f385b call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f3860u; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f385bu); RETCHK(0x5f3860u, 0x5f385bu); LOADALL;
  /* 005f3860 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f3864 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f3867 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f3868 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f3869 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f386a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f386b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f386e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f386f:;
  /* 005f386f mov ebx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 005f3873 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005f3875 shr eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f3878 lea ecx, [eax*8] */ ecx = (u32)((u32)(eax * 8u));
  /* 005f387f sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f3881 shl ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f3884 mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 005f3886 mov edi, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edi = (u32)(M32(m_)); }
  /* 005f3889 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f388b je 0x5f38ba */ if (ZF_) goto L_005f38ba;
  /* 005f388d cmp dword ptr [esi + 0x14], 0x60 */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = 0x60u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3891 jne 0x5f38ba */ if (!ZF_) goto L_005f38ba;
  /* 005f3893 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 005f3895 mov eax, edx */ { eax = (u32)(edx); }
  /* 005f3897 mov ebp, edx */ { ebp = (u32)(edx); }
  /* 005f3899 and eax, 0xff0000 */ { u32 a_ = eax, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f389e shr ebp, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 005f38a1 or eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f38a3 mov ebp, edx */ { ebp = (u32)(edx); }
  /* 005f38a5 shl ebp, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 005f38a8 and edx, 0xff00 */ { u32 a_ = edx, b_ = 0xff00u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f38ae or ebp, edx */ { u32 a_ = ebp, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005f38b0 shr eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f38b3 shl ebp, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 005f38b6 or eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f38b8 jmp 0x5f38d0 */ goto L_005f38d0;
L_005f38ba:;
  /* 005f38ba mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f38bd shr eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f38c0 lea edx, [eax*8] */ edx = (u32)((u32)(eax * 8u));
  /* 005f38c7 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f38c9 shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f38cc mov eax, edx */ { eax = (u32)(edx); }
  /* 005f38ce shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_005f38d0:;
  /* 005f38d0 mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 005f38d4 add eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f38d6 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f38d8 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f38dc je 0x5f3919 */ if (ZF_) goto L_005f3919;
  /* 005f38de test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f38e0 je 0x5f36ac */ if (ZF_) goto L_005f36ac;
  /* 005f38e6 cmp dword ptr [esi + 0x14], 0x60 */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = 0x60u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f38ea jne 0x5f36ac */ if (!ZF_) goto L_005f36ac;
  /* 005f38f0 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f38f2 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f38f6 mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 005f38f8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f38fa mov edi, edx */ { edi = (u32)(edx); }
  /* 005f38fc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f38fd shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f3900 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005f3902 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 005f3904 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f3907 rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 005f3909 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 005f390d add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f390f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f3910 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f3911 call 0x5f3fc0 */ esp -= 4; M32(esp) = 0x5f3916u; SAVEALL; F_005f3fc0(c); ABI_CHECK(0x5f3fc0u, 0x5f3911u); RETCHK(0x5f3916u, 0x5f3911u); LOADALL;
  /* 005f3916 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f3919:;
  /* 005f3919 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f391d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f391e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f391f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f3920 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f3921 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f3924 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f3930(CPU *c) {
  NATIVE_HOOK(0x5f3930u) REGS; LOADALL;
L_005f3930:;
  /* 005f3930 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f3933 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f3934 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 005f3938 cmp dword ptr [esi + 0x14], 0x60 */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = 0x60u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f393c jae 0x5f3947 */ if (!CF_) goto L_005f3947;
  /* 005f393e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f393f call 0x5f5470 */ esp -= 4; M32(esp) = 0x5f3944u; SAVEALL; F_005f5470(c); ABI_CHECK(0x5f5470u, 0x5f393fu); RETCHK(0x5f3944u, 0x5f393fu); LOADALL;
  /* 005f3944 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f3947:;
  /* 005f3947 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f394a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f394c jne 0x5f3970 */ if (!ZF_) goto L_005f3970;
  /* 005f394e push 0x30806 */ { u32 v_ = 0x30806u; esp -= 4; M32(esp) = v_; }
  /* 005f3953 push 0x60 */ { u32 v_ = 0x60u; esp -= 4; M32(esp) = v_; }
  /* 005f3955 call 0x5f2440 */ esp -= 4; M32(esp) = 0x5f395au; SAVEALL; F_005f2440(c); ABI_CHECK(0x5f2440u, 0x5f3955u); RETCHK(0x5f395au, 0x5f3955u); LOADALL;
  /* 005f395a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f395d mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f3960 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3962 jne 0x5f3969 */ if (!ZF_) goto L_005f3969;
  /* 005f3964 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f3965 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f3968 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f3969:;
  /* 005f3969 mov dword ptr [esi + 0x14], 0x60 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x60u); }
L_005f3970:;
  /* 005f3970 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f3971 mov ebp, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ebp = (u32)(M32(m_)); }
  /* 005f3974 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f3975 mov ecx, 0x18 */ { ecx = (u32)(0x18u); }
  /* 005f397a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f397c mov edi, ebp */ { edi = (u32)(ebp); }
  /* 005f397e rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005f3980 mov edi, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edi = (u32)(M32(m_)); }
  /* 005f3984 push 0x63c320 */ { u32 v_ = 0x63c320u; esp -= 4; M32(esp) = v_; }
  /* 005f3989 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005f398b mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f398e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f398f call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f3994u; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f398fu); RETCHK(0x5f3994u, 0x5f398fu); LOADALL;
  /* 005f3994 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f3997 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3999 jne 0x5f39ad */ if (!ZF_) goto L_005f39ad;
  /* 005f399b mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 005f399f lea esi, [eax*8] */ esi = (u32)((u32)(eax * 8u));
  /* 005f39a6 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f39a8 shr esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 005f39ab jmp 0x5f39d9 */ goto L_005f39d9;
L_005f39ad:;
  /* 005f39ad mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f39b0 push 0x63c330 */ { u32 v_ = 0x63c330u; esp -= 4; M32(esp) = v_; }
  /* 005f39b5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f39b6 call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f39bbu; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f39b6u); RETCHK(0x5f39bbu, 0x5f39b6u); LOADALL;
  /* 005f39bb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f39be test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f39c0 jne 0x5f39d9 */ if (!ZF_) goto L_005f39d9;
  /* 005f39c2 mov al, byte ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f39c5 cmp al, 0x10 */ { u32 a_ = (eax & 0xffu), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f39c7 jne 0x5f39d1 */ if (!ZF_) goto L_005f39d1;
  /* 005f39c9 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 005f39cd shr esi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 005f39cf jmp 0x5f39d9 */ goto L_005f39d9;
L_005f39d1:;
  /* 005f39d1 cmp al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f39d3 jne 0x5f39d9 */ if (!ZF_) goto L_005f39d9;
  /* 005f39d5 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
L_005f39d9:;
  /* 005f39d9 mov edx, esi */ { edx = (u32)(esi); }
  /* 005f39db mov eax, esi */ { eax = (u32)(esi); }
  /* 005f39dd and edx, 0xff0000 */ { u32 a_ = edx, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f39e3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005f39e5 shr eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f39e8 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f39ea mov eax, esi */ { eax = (u32)(esi); }
  /* 005f39ec and ecx, 0xff00 */ { u32 a_ = ecx, b_ = 0xff00u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f39f2 shl eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f39f5 or ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f39f7 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f39f9 shr edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f39fc shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f39ff or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3a01 mov ecx, 0xe */ { ecx = (u32)(0xeu); }
  /* 005f3a06 mov dword ptr [ebp], edx */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(edx); }
  /* 005f3a09 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3a0b div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x5f3a0bu); eax = q_; edx = r_; }
  /* 005f3a0d lea esi, [ebp + 0x1c] */ esi = (u32)((u32)(ebp + 0x1cu));
  /* 005f3a10 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f3a13 lea eax, [eax + edx + 1] */ eax = (u32)((u32)(eax + edx + 0x1u));
  /* 005f3a17 and al, 0xfe */ { u32 a_ = (eax & 0xffu), b_ = 0xfeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f3a19 mov edx, eax */ { edx = (u32)(eax); }
  /* 005f3a1b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f3a1d and edx, 0xff0000 */ { u32 a_ = edx, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3a23 shr ecx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f3a26 or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3a28 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f3a2a and ecx, 0xff00 */ { u32 a_ = ecx, b_ = 0xff00u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f3a30 shl eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f3a33 or ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f3a35 shr edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f3a38 shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f3a3b or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3a3d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f3a3f mov dword ptr [ebp + 4], edx */ { const u32 m_ = (u32)(ebp + 0x4u); M32(m_) = (u32)(edx); }
L_005f3a42:;
  /* 005f3a42 fld dword ptr [edi + 0x67dae0] */ { const u32 m_ = (u32)(edi + 0x67dae0u); FPUSH((double)MF32(m_)); }
  /* 005f3a48 fmul dword ptr [0x63c31c] */ { const u32 m_ = (u32)(0x63c31cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f3a4e fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3a52 fnstcw word ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); M16(m_) = (u16)c->fcw; }
  /* 005f3a56 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005f3a5a mov ax, word ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f3a5f or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f3a62 mov word ptr [esp + 0x24], ax */ { const u32 m_ = (u32)(esp + 0x24u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f3a67 fldcw word ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3a6b fistp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f3a6f fldcw word ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3a73 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f3a77 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3a79 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f3a7b mov dl, ah */ { edx = (edx & 0xffffff00u) | ((u32)(((eax >> 8) & 0xffu)) & 0xffu); }
  /* 005f3a7d mov ch, al */ { ecx = (ecx & 0xffff00ffu) | (((u32)((eax & 0xffu)) & 0xffu) << 8); }
  /* 005f3a7f add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f3a82 xor edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3a84 mov word ptr [esi - 2], dx */ { const u32 m_ = (u32)(esi + 0xfffffffeu); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 005f3a88 fld dword ptr [edi + 0x67dae4] */ { const u32 m_ = (u32)(edi + 0x67dae4u); FPUSH((double)MF32(m_)); }
  /* 005f3a8e fmul dword ptr [0x63c31c] */ { const u32 m_ = (u32)(0x63c31cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f3a94 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3a98 fnstcw word ptr [esp + 0xe] */ { const u32 m_ = (u32)(esp + 0xeu); M16(m_) = (u16)c->fcw; }
  /* 005f3a9c fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005f3aa0 mov ax, word ptr [esp + 0xe] */ { const u32 m_ = (u32)(esp + 0xeu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f3aa5 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f3aa8 mov word ptr [esp + 0x28], ax */ { const u32 m_ = (u32)(esp + 0x28u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f3aad fldcw word ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3ab1 fistp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f3ab5 fldcw word ptr [esp + 0xe] */ { const u32 m_ = (u32)(esp + 0xeu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3ab9 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f3abd xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3abf xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f3ac1 mov dl, ah */ { edx = (edx & 0xffffff00u) | ((u32)(((eax >> 8) & 0xffu)) & 0xffu); }
  /* 005f3ac3 mov ch, al */ { ecx = (ecx & 0xffff00ffu) | (((u32)((eax & 0xffu)) & 0xffu) << 8); }
  /* 005f3ac5 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f3ac8 xor edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3aca mov word ptr [esi], dx */ { const u32 m_ = (u32)(esi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 005f3acd add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f3ad0 cmp edi, 0x40 */ { u32 a_ = edi, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3ad3 jb 0x5f3a42 */ if (CF_) goto L_005f3a42;
  /* 005f3ad9 mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 005f3add xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3adf xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f3ae1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f3ae2 mov ax, word ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f3ae5 mov dl, ah */ { edx = (edx & 0xffffff00u) | ((u32)(((eax >> 8) & 0xffu)) & 0xffu); }
  /* 005f3ae7 mov ch, al */ { ecx = (ecx & 0xffff00ffu) | (((u32)((eax & 0xffu)) & 0xffu) << 8); }
  /* 005f3ae9 xor edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3aeb xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f3aed mov word ptr [ebp + 0x40], dx */ { const u32 m_ = (u32)(ebp + 0x40u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 005f3af1 mov ax, word ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f3af5 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3af7 mov ch, al */ { ecx = (ecx & 0xffff00ffu) | (((u32)((eax & 0xffu)) & 0xffu) << 8); }
  /* 005f3af9 mov dl, ah */ { edx = (edx & 0xffffff00u) | ((u32)(((eax >> 8) & 0xffu)) & 0xffu); }
  /* 005f3afb mov eax, 0x60 */ { eax = (u32)(0x60u); }
  /* 005f3b00 xor edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3b02 mov word ptr [ebp + 0x42], dx */ { const u32 m_ = (u32)(ebp + 0x42u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 005f3b06 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f3b07 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f3b08 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f3b0b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f3b10(CPU *c) {
  NATIVE_HOOK(0x5f3b10u) REGS; LOADALL;
L_005f3b10:;
  /* 005f3b10 sub esp, 0xc8 */ { u32 a_ = esp, b_ = 0xc8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f3b16 mov eax, dword ptr [esp + 0xd0] */ { const u32 m_ = (u32)(esp + 0xd0u); eax = (u32)(M32(m_)); }
  /* 005f3b1d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f3b1e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f3b1f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f3b20 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f3b21 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3b23 movsx edi, byte ptr [esp + 0xe8] */ { const u32 m_ = (u32)(esp + 0xe8u); edi = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f3b2b shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f3b2d div edi */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, edi, &q_, &r_, 0x5f3b2du); eax = q_; edx = r_; }
  /* 005f3b2f push 0x10806 */ { u32 v_ = 0x10806u; esp -= 4; M32(esp) = v_; }
  /* 005f3b34 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005f3b36 mov eax, 0x24924925 */ { eax = (u32)(0x24924925u); }
  /* 005f3b3b lea ecx, [ebx + 0xd] */ ecx = (u32)((u32)(ebx + 0xdu));
  /* 005f3b3e mul ecx */ { u64 p_ = (u64)eax * ecx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f3b40 mov eax, dword ptr [esp + 0xe8] */ { const u32 m_ = (u32)(esp + 0xe8u); eax = (u32)(M32(m_)); }
  /* 005f3b47 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f3b49 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f3b4b add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f3b4d mov dword ptr [esp + 0x4c], eax */ { const u32 m_ = (u32)(esp + 0x4cu); M32(m_) = (u32)(eax); }
  /* 005f3b51 movsx edx, byte ptr [esp + 0xf0] */ { const u32 m_ = (u32)(esp + 0xf0u); edx = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f3b59 mov eax, dword ptr [esp + 0xe0] */ { const u32 m_ = (u32)(esp + 0xe0u); eax = (u32)(M32(m_)); }
  /* 005f3b60 shr ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f3b63 lea esi, [eax + edx*2] */ esi = (u32)((u32)(eax + edx * 2u));
  /* 005f3b66 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f3b67 mov dword ptr [esp + 0x38], ecx */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(ecx); }
  /* 005f3b6b mov dword ptr [esp + 0x44], esi */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(esi); }
  /* 005f3b6f call 0x5f2440 */ esp -= 4; M32(esp) = 0x5f3b74u; SAVEALL; F_005f2440(c); ABI_CHECK(0x5f2440u, 0x5f3b6fu); RETCHK(0x5f3b74u, 0x5f3b6fu); LOADALL;
  /* 005f3b74 movsx ecx, word ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f3b77 mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 005f3b7b lea ebp, [edi + edi] */ ebp = (u32)((u32)(edi + edi));
  /* 005f3b7e fild dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)(s32)M32(m_)); }
  /* 005f3b82 movsx edx, word ptr [esi + ebp] */ { const u32 m_ = (u32)(esi + ebp); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f3b86 fmul dword ptr [0x63c308] */ { const u32 m_ = (u32)(0x63c308u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f3b8c add esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f3b8e mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 005f3b92 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 005f3b96 mov dword ptr [esp + 0x40], eax */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(eax); }
  /* 005f3b9a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f3b9d add esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f3b9f fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3ba3 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 005f3ba7 lea eax, [ebx - 2] */ eax = (u32)((u32)(ebx + 0xfffffffeu));
  /* 005f3baa mov dword ptr [esp + 0x64], ebp */ { const u32 m_ = (u32)(esp + 0x64u); M32(m_) = (u32)(ebp); }
  /* 005f3bae test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3bb0 fmul dword ptr [0x63c308] */ { const u32 m_ = (u32)(0x63c308u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f3bb6 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 005f3bba mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 005f3bc2 fstp dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3bc6 jbe 0x5f3cc8 */ if ((CF_|ZF_)) goto L_005f3cc8;
  /* 005f3bcc jmp 0x5f3bd2 */ goto L_005f3bd2;
L_005f3bce:;
  /* 005f3bce mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
L_005f3bd2:;
  /* 005f3bd2 mov edx, 0xe */ { edx = (u32)(0xeu); }
  /* 005f3bd7 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3bd9 jae 0x5f3bdd */ if (!CF_) goto L_005f3bdd;
  /* 005f3bdb mov edx, eax */ { edx = (u32)(eax); }
L_005f3bdd:;
  /* 005f3bdd sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f3bdf mov ecx, 0xe */ { ecx = (u32)(0xeu); }
  /* 005f3be4 mov dword ptr [esp + 0x44], eax */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(eax); }
  /* 005f3be8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f3bea lea edi, [esp + 0x68] */ edi = (u32)((u32)(esp + 0x68u));
  /* 005f3bee test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3bf0 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005f3bf2 jbe 0x5f3c10 */ if ((CF_|ZF_)) goto L_005f3c10;
L_005f3bf4:;
  /* 005f3bf4 movsx ecx, word ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f3bf7 mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 005f3bfb add esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f3bfd fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 005f3c01 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f3c02 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3c04 fmul dword ptr [0x63c308] */ { const u32 m_ = (u32)(0x63c308u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f3c0a fstp dword ptr [esp + eax*4 + 0x64] */ { const u32 m_ = (u32)(esp + eax * 4u + 0x64u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3c0e jb 0x5f3bf4 */ if (CF_) goto L_005f3bf4;
L_005f3c10:;
  /* 005f3c10 or ebx, 0xffffffff */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005f3c13 mov dword ptr [esp + 0x24], 0x7f7fffff */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 005f3c1b xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f3c1d mov edx, 0x67dae4 */ { edx = (u32)(0x67dae4u); }
  /* 005f3c22 jmp 0x5f3c26 */ goto L_005f3c26;
L_005f3c24:;
  /* 005f3c24 fstp st(0) */ ST(0) = ST(0); FPOP();
L_005f3c26:;
  /* 005f3c26 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f3c2a mov dword ptr [esp + 0x20], 0 */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(0x0u); }
  /* 005f3c32 fld dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); FPUSH((double)MF32(m_)); }
  /* 005f3c36 mov dword ptr [esp + 0x2c], eax */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(eax); }
  /* 005f3c3a xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_005f3c3c:;
  /* 005f3c3c fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 005f3c3e fmul dword ptr [edx - 4] */ { const u32 m_ = (u32)(edx + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f3c41 fld dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 005f3c45 fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f3c47 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005f3c49 fsubr dword ptr [esp + ecx*4 + 0x68] */ { const u32 m_ = (u32)(esp + ecx * 4u + 0x68u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 005f3c4d fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3c51 fstp dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3c55 fld dword ptr [esp + ecx*4 + 0x68] */ { const u32 m_ = (u32)(esp + ecx * 4u + 0x68u); FPUSH((double)MF32(m_)); }
  /* 005f3c59 fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 005f3c5d fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 005f3c5f fcom dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005f3c63 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005f3c65 and eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f3c6a jne 0x5f3c72 */ if (!ZF_) goto L_005f3c72;
  /* 005f3c6c fstp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3c70 jmp 0x5f3c74 */ goto L_005f3c74;
L_005f3c72:;
  /* 005f3c72 fstp st(0) */ ST(0) = ST(0); FPOP();
L_005f3c74:;
  /* 005f3c74 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f3c75 cmp ecx, 0xe */ { u32 a_ = ecx, b_ = 0xeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3c78 jb 0x5f3c3c */ if (CF_) goto L_005f3c3c;
  /* 005f3c7a fld dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); FPUSH((double)MF32(m_)); }
  /* 005f3c7e fcomp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005f3c82 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005f3c84 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f3c87 jp 0x5f3c93 */ if (PF_) goto L_005f3c93;
  /* 005f3c89 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005f3c8d mov ebx, edi */ { ebx = (u32)(edi); }
  /* 005f3c8f mov dword ptr [esp + 0x24], ecx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ecx); }
L_005f3c93:;
  /* 005f3c93 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f3c94 add edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f3c97 cmp edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3c9a jb 0x5f3c24 */ if (CF_) goto L_005f3c24;
  /* 005f3c9c mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 005f3ca0 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f3ca4 mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 005f3ca8 fstp dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3cac mov byte ptr [eax + ecx], bl */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005f3caf mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 005f3cb3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f3cb4 mov dword ptr [esp + 0x1c], edx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edx); }
  /* 005f3cb8 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3cba mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f3cbe jb 0x5f3bce */ if (CF_) goto L_005f3bce;
  /* 005f3cc4 mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
L_005f3cc8:;
  /* 005f3cc8 mov edx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); edx = (u32)(M32(m_)); }
  /* 005f3ccc mov dword ptr [esp + 0x1c], 0 */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0x0u); }
  /* 005f3cd4 mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 005f3cdc movsx ecx, word ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f3cdf mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 005f3ce3 add edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f3ce5 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 005f3ce9 movsx ecx, word ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f3cec fmul dword ptr [0x63c308] */ { const u32 m_ = (u32)(0x63c308u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f3cf2 mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 005f3cf6 mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 005f3cfa add edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f3cfc test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3cfe fstp dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3d02 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 005f3d06 mov dword ptr [esp + 0x28], edx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(edx); }
  /* 005f3d0a mov dword ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0x0u); }
  /* 005f3d12 fmul dword ptr [0x63c308] */ { const u32 m_ = (u32)(0x63c308u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f3d18 ja 0x5f3d4f */ if (!(CF_|ZF_)) goto L_005f3d4f;
  /* 005f3d1a fstp st(0) */ ST(0) = ST(0); FPOP();
L_005f3d1c:;
  /* 005f3d1c mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 005f3d20 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f3d21 call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f3d26u; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f3d21u); RETCHK(0x5f3d26u, 0x5f3d21u); LOADALL;
  /* 005f3d26 mov ecx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 005f3d2a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f3d2d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f3d2e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f3d2f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f3d30 lea eax, [ecx*8] */ eax = (u32)((u32)(ecx * 8u));
  /* 005f3d37 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f3d38 add esp, 0xc8 */ { u32 a_ = esp, b_ = 0xc8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f3d3e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f3d3f:;
  /* 005f3d3f fld dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); FPUSH((double)MF32(m_)); }
  /* 005f3d43 mov ebp, dword ptr [esp + 0x64] */ { const u32 m_ = (u32)(esp + 0x64u); ebp = (u32)(M32(m_)); }
  /* 005f3d47 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 005f3d4b mov edx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edx = (u32)(M32(m_)); }
L_005f3d4f:;
  /* 005f3d4f mov ebx, 0xe */ { ebx = (u32)(0xeu); }
  /* 005f3d54 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3d56 jae 0x5f3d5a */ if (!CF_) goto L_005f3d5a;
  /* 005f3d58 mov ebx, eax */ { ebx = (u32)(eax); }
L_005f3d5a:;
  /* 005f3d5a sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f3d5c mov ecx, 0xe */ { ecx = (u32)(0xeu); }
  /* 005f3d61 mov dword ptr [esp + 0x44], eax */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(eax); }
  /* 005f3d65 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f3d67 lea edi, [esp + 0x68] */ edi = (u32)((u32)(esp + 0x68u));
  /* 005f3d6b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3d6d rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005f3d6f jbe 0x5f3d91 */ if ((CF_|ZF_)) goto L_005f3d91;
L_005f3d71:;
  /* 005f3d71 movsx ecx, word ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f3d74 mov dword ptr [esp + 0x28], ecx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005f3d78 add edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f3d7a fild dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)(s32)M32(m_)); }
  /* 005f3d7e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f3d7f cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3d81 fmul dword ptr [0x63c308] */ { const u32 m_ = (u32)(0x63c308u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f3d87 fstp dword ptr [esp + eax*4 + 0x64] */ { const u32 m_ = (u32)(esp + eax * 4u + 0x64u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3d8b jb 0x5f3d71 */ if (CF_) goto L_005f3d71;
  /* 005f3d8d mov dword ptr [esp + 0x28], edx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(edx); }
L_005f3d91:;
  /* 005f3d91 mov edi, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); edi = (u32)(M32(m_)); }
  /* 005f3d95 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f3d99 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3d9b mov dword ptr [esp + 0x24], 0 */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0x0u); }
  /* 005f3da3 mov dl, byte ptr [eax + edi] */ { const u32 m_ = (u32)(eax + edi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f3da6 shl edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f3da9 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_005f3dab:;
  /* 005f3dab fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 005f3dad fmul dword ptr [edx + 0x67dae0] */ { const u32 m_ = (u32)(edx + 0x67dae0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f3db3 fld dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 005f3db7 fmul dword ptr [edx + 0x67dae4] */ { const u32 m_ = (u32)(edx + 0x67dae4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f3dbd faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005f3dbf fsubr dword ptr [esp + ecx + 0x68] */ { const u32 m_ = (u32)(esp + ecx + 0x68u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 005f3dc3 fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3dc7 fstp dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3dcb fld dword ptr [esp + ecx + 0x68] */ { const u32 m_ = (u32)(esp + ecx + 0x68u); FPUSH((double)MF32(m_)); }
  /* 005f3dcf fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 005f3dd3 fmul dword ptr [0x62ef34] */ { const u32 m_ = (u32)(0x62ef34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f3dd9 fst dword ptr [esp + ecx + 0xa0] */ { const u32 m_ = (u32)(esp + ecx + 0xa0u); MF32(m_) = (float)ST(0); }
  /* 005f3de0 fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 005f3de2 fcom dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005f3de6 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005f3de8 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f3ded jne 0x5f3df5 */ if (!ZF_) goto L_005f3df5;
  /* 005f3def fstp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3df3 jmp 0x5f3df7 */ goto L_005f3df7;
L_005f3df5:;
  /* 005f3df5 fstp st(0) */ ST(0) = ST(0); FPOP();
L_005f3df7:;
  /* 005f3df7 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f3dfa cmp ecx, 0x38 */ { u32 a_ = ecx, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3dfd jb 0x5f3dab */ if (CF_) goto L_005f3dab;
  /* 005f3dff fstp dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3e03 fnstcw word ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); M16(m_) = (u16)c->fcw; }
  /* 005f3e07 fld dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); FPUSH((double)MF32(m_)); }
  /* 005f3e0b mov ax, word ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f3e10 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f3e13 mov word ptr [esp + 0x42], ax */ { const u32 m_ = (u32)(esp + 0x42u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f3e18 fldcw word ptr [esp + 0x42] */ { const u32 m_ = (u32)(esp + 0x42u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3e1c fistp dword ptr [esp + 0x54] */ { const u32 m_ = (u32)(esp + 0x54u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f3e20 fldcw word ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3e24 mov eax, dword ptr [esp + 0x54] */ { const u32 m_ = (u32)(esp + 0x54u); eax = (u32)(M32(m_)); }
  /* 005f3e28 cmp eax, 0x7fff */ { u32 a_ = eax, b_ = 0x7fffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3e2d mov edx, eax */ { edx = (u32)(eax); }
  /* 005f3e2f jle 0x5f3e38 */ if ((ZF_|LT_)) goto L_005f3e38;
  /* 005f3e31 mov edx, 0x7fff */ { edx = (u32)(0x7fffu); }
  /* 005f3e36 jmp 0x5f3e44 */ goto L_005f3e44;
L_005f3e38:;
  /* 005f3e38 cmp eax, 0xffff8000 */ { u32 a_ = eax, b_ = 0xffff8000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3e3d jge 0x5f3e44 */ if (!LT_) goto L_005f3e44;
  /* 005f3e3f mov edx, 0xffff8000 */ { edx = (u32)(0xffff8000u); }
L_005f3e44:;
  /* 005f3e44 mov ecx, 0x4000 */ { ecx = (u32)(0x4000u); }
  /* 005f3e49 mov eax, 0xc */ { eax = (u32)(0xcu); }
L_005f3e4e:;
  /* 005f3e4e mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005f3e50 shr esi, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 005f3e53 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f3e55 test ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3e57 jne 0x5f3e64 */ if (!ZF_) goto L_005f3e64;
  /* 005f3e59 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f3e5a shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f3e5c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3e5e jge 0x5f3e4e */ if (!LT_) goto L_005f3e4e;
  /* 005f3e60 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f3e62 jmp 0x5f3e76 */ goto L_005f3e76;
L_005f3e64:;
  /* 005f3e64 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3e66 jge 0x5f3e6c */ if (!LT_) goto L_005f3e6c;
  /* 005f3e68 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f3e6a jmp 0x5f3e76 */ goto L_005f3e76;
L_005f3e6c:;
  /* 005f3e6c cmp eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3e6f jle 0x5f3e76 */ if ((ZF_|LT_)) goto L_005f3e76;
  /* 005f3e71 mov eax, 0xc */ { eax = (u32)(0xcu); }
L_005f3e76:;
  /* 005f3e76 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f3e7a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005f3e7c mov dword ptr [esp + 0x4c], esi */ { const u32 m_ = (u32)(esp + 0x4cu); M32(m_) = (u32)(esi); }
  /* 005f3e80 mov dword ptr [esp + 0x50], esi */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(esi); }
  /* 005f3e84 mov dl, byte ptr [ecx + edi] */ { const u32 m_ = (u32)(ecx + edi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f3e87 mov edi, 0xc */ { edi = (u32)(0xcu); }
  /* 005f3e8c shl dl, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = (edx & 0xffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffu; u32 cf_ = n_ <= 8u ? (a_ >> (8u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 7) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 005f3e8f or dl, al */ { u32 a_ = (edx & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f3e91 sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f3e93 mov byte ptr [esp + 0x4c], dl */ { const u32 m_ = (u32)(esp + 0x4cu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 005f3e97 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3e99 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f3e9b lea ebp, [esp + 0x4d] */ ebp = (u32)((u32)(esp + 0x4du));
  /* 005f3e9f jbe 0x5f3f87 */ if ((CF_|ZF_)) goto L_005f3f87;
  /* 005f3ea5 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f3eaa mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005f3eac shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f3eae mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 005f3eb2 fild dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)(s32)M32(m_)); }
  /* 005f3eb6 fstp dword ptr [esp + 0x60] */ { const u32 m_ = (u32)(esp + 0x60u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3eba fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
L_005f3ebe:;
  /* 005f3ebe mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 005f3ec2 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 005f3ec6 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005f3eca xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f3ecc mov al, byte ptr [esi + ecx] */ { const u32 m_ = (u32)(esi + ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f3ecf shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f3ed2 fmul dword ptr [eax + 0x67dae0] */ { const u32 m_ = (u32)(eax + 0x67dae0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f3ed8 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005f3eda fmul dword ptr [eax + 0x67dae4] */ { const u32 m_ = (u32)(eax + 0x67dae4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f3ee0 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005f3ee2 fsubr dword ptr [esp + edx*4 + 0xa0] */ { const u32 m_ = (u32)(esp + edx * 4u + 0xa0u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 005f3ee9 fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3eed fld dword ptr [esp + 0x60] */ { const u32 m_ = (u32)(esp + 0x60u); FPUSH((double)MF32(m_)); }
  /* 005f3ef1 fmul dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f3ef5 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3ef9 fnstcw word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); M16(m_) = (u16)c->fcw; }
  /* 005f3efd fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005f3f01 mov ax, word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f3f06 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f3f09 mov word ptr [esp + 0x34], ax */ { const u32 m_ = (u32)(esp + 0x34u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f3f0e fldcw word ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3f12 fistp dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f3f16 fldcw word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f3f1a mov eax, dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); eax = (u32)(M32(m_)); }
  /* 005f3f1e add eax, 0x800 */ { u32 a_ = eax, b_ = 0x800u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f3f23 and eax, 0xfffff000 */ { u32 a_ = eax, b_ = 0xfffff000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f3f28 cmp eax, 0x7fff */ { u32 a_ = eax, b_ = 0x7fffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3f2d jle 0x5f3f36 */ if ((ZF_|LT_)) goto L_005f3f36;
  /* 005f3f2f mov eax, 0x7fff */ { eax = (u32)(0x7fffu); }
  /* 005f3f34 jmp 0x5f3f42 */ goto L_005f3f42;
L_005f3f36:;
  /* 005f3f36 cmp eax, 0xffff8000 */ { u32 a_ = eax, b_ = 0xffff8000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3f3b jge 0x5f3f42 */ if (!LT_) goto L_005f3f42;
  /* 005f3f3d mov eax, 0xffff8000 */ { eax = (u32)(0xffff8000u); }
L_005f3f42:;
  /* 005f3f42 test dl, 1 */ { u32 a_ = (edx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f3f45 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f3f47 je 0x5f3f55 */ if (ZF_) goto L_005f3f55;
  /* 005f3f49 sar ecx, 0xc */ { u32 n_ = (12u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f3f4c and cl, 0xf */ { u32 a_ = (ecx & 0xffu), b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f3f4f or byte ptr [ebp], cl */ { const u32 m_ = (u32)(ebp); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 005f3f52 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f3f53 jmp 0x5f3f5e */ goto L_005f3f5e;
L_005f3f55:;
  /* 005f3f55 sar ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f3f58 and cl, 0xf0 */ { u32 a_ = (ecx & 0xffu), b_ = 0xf0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f3f5b mov byte ptr [ebp], cl */ { const u32 m_ = (u32)(ebp); M8(m_) = (u8)((ecx & 0xffu)); }
L_005f3f5e:;
  /* 005f3f5e fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005f3f62 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005f3f64 sar eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f3f66 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f3f67 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3f69 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f3f6d fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 005f3f71 fsub dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005f3f75 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3f79 jb 0x5f3ebe */ if (CF_) goto L_005f3ebe;
  /* 005f3f7f fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f3f83 mov esi, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); esi = (u32)(M32(m_)); }
L_005f3f87:;
  /* 005f3f87 mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 005f3f8b mov edx, dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); edx = (u32)(M32(m_)); }
  /* 005f3f8f mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 005f3f93 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 005f3f95 mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 005f3f98 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f3f9b mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 005f3f9f mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f3fa3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f3fa4 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f3fa6 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f3faa jb 0x5f3d3f */ if (CF_) goto L_005f3d3f;
  /* 005f3fb0 jmp 0x5f3d1c */ goto L_005f3d1c;
}

void F_005f3fc0(CPU *c) {
  NATIVE_HOOK(0x5f3fc0u) REGS; LOADALL;
L_005f3fc0:;
  /* 005f3fc0 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f3fc3 mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f3fc7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f3fc8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f3fc9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f3fca mov esi, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); esi = (u32)(M32(m_)); }
  /* 005f3fcd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f3fce mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005f3fd0 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 005f3fd2 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f3fd4 mov edx, eax */ { edx = (u32)(eax); }
  /* 005f3fd6 and ebp, 0xff0000 */ { u32 a_ = ebp, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005f3fdc shr ecx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f3fdf and edx, 0xff00 */ { u32 a_ = edx, b_ = 0xff00u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3fe5 or ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005f3fe7 shl eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f3fea or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f3fec lea ecx, [esi + 0x1c] */ ecx = (u32)((u32)(esi + 0x1cu));
  /* 005f3fef shr ebp, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 005f3ff2 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f3ff5 or ebp, edx */ { u32 a_ = ebp, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005f3ff7 sub ebp, 2 */ { u32 a_ = ebp, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005f3ffa xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f3ffc mov dword ptr [esp + 0x10], ebp */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebp); }
L_005f4000:;
  /* 005f4000 mov ax, word ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f4003 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f4005 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005f4007 mov dl, ah */ { edx = (edx & 0xffffff00u) | ((u32)(((eax >> 8) & 0xffu)) & 0xffu); }
  /* 005f4009 mov bh, al */ { ebx = (ebx & 0xffff00ffu) | (((u32)((eax & 0xffu)) & 0xffu) << 8); }
  /* 005f400b add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f400e xor edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f4010 mov word ptr [esp + edi*2 + 0x1c], dx */ { const u32 m_ = (u32)(esp + edi * 2u + 0x1cu); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 005f4015 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f4016 cmp edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4019 jb 0x5f4000 */ if (CF_) goto L_005f4000;
  /* 005f401b mov ax, word ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f401f xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f4021 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4023 mov dh, al */ { edx = (edx & 0xffff00ffu) | (((u32)((eax & 0xffu)) & 0xffu) << 8); }
  /* 005f4025 mov cl, ah */ { ecx = (ecx & 0xffffff00u) | ((u32)(((eax >> 8) & 0xffu)) & 0xffu); }
  /* 005f4027 mov ebx, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); ebx = (u32)(M32(m_)); }
  /* 005f402b movsx eax, dx */ { eax = (u32)((u32)sxt((edx & 0xffffu), 2) & 0xffffffffu); }
  /* 005f402e xor ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4030 mov ax, word ptr [esi + 0x42] */ { const u32 m_ = (u32)(esi + 0x42u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f4034 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005f4036 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f4038 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f403a mov dh, al */ { edx = (edx & 0xffff00ffu) | (((u32)((eax & 0xffu)) & 0xffu) << 8); }
  /* 005f403c mov cl, ah */ { ecx = (ecx & 0xffffff00u) | ((u32)(((eax >> 8) & 0xffu)) & 0xffu); }
  /* 005f403e movsx eax, dx */ { eax = (u32)((u32)sxt((edx & 0xffffu), 2) & 0xffffffffu); }
  /* 005f4041 xor ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4043 mov eax, 0x24924925 */ { eax = (u32)(0x24924925u); }
  /* 005f4048 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005f404a lea ecx, [ebp + 0xd] */ ecx = (u32)((u32)(ebp + 0xdu));
  /* 005f404d mul ecx */ { u64 p_ = (u64)eax * ecx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f404f mov ebp, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); ebp = (u32)(M32(m_)); }
  /* 005f4053 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f4055 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f4057 mov word ptr [ebp], di */ { const u32 m_ = (u32)(ebp); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 005f405b add ebp, 2 */ { u32 a_ = ebp, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005f405e add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f4060 shr ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f4063 mov word ptr [ebp], si */ { const u32 m_ = (u32)(ebp); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 005f4067 add ebp, 2 */ { u32 a_ = ebp, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005f406a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f406c jbe 0x5f418f */ if ((CF_|ZF_)) goto L_005f418f;
  /* 005f4072 mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
L_005f4076:;
  /* 005f4076 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f4078 mov al, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f407a mov edx, eax */ { edx = (u32)(eax); }
  /* 005f407c and eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f407f shr edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f4082 mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 005f4086 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f408a mov cx, word ptr [esp + edx*4 + 0x1c] */ { const u32 m_ = (u32)(esp + edx * 4u + 0x1cu); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f408f mov dx, word ptr [esp + edx*4 + 0x1e] */ { const u32 m_ = (u32)(esp + edx * 4u + 0x1eu); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f4094 mov word ptr [esp + 0x14], dx */ { const u32 m_ = (u32)(esp + 0x14u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 005f4099 mov edx, 0xe */ { edx = (u32)(0xeu); }
  /* 005f409e inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f409f cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f40a1 mov dword ptr [esp + 0x44], edx */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(edx); }
  /* 005f40a5 jae 0x5f40ad */ if (!CF_) goto L_005f40ad;
  /* 005f40a7 mov dword ptr [esp + 0x44], eax */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(eax); }
  /* 005f40ab mov edx, eax */ { edx = (u32)(eax); }
L_005f40ad:;
  /* 005f40ad sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f40af mov dword ptr [esp + 0x40], 0 */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(0x0u); }
  /* 005f40b7 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f40b9 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f40bd jbe 0x5f4180 */ if ((CF_|ZF_)) goto L_005f4180;
  /* 005f40c3 movsx edx, cx */ { edx = (u32)((u32)sxt((ecx & 0xffffu), 2) & 0xffffffffu); }
L_005f40c6:;
  /* 005f40c6 mov al, byte ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f40ca mov ecx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); ecx = (u32)(M32(m_)); }
  /* 005f40ce test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f40d0 jne 0x5f411f */ if (!ZF_) goto L_005f411f;
  /* 005f40d2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f40d4 mov ah, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 005f40d6 movsx eax, ax */ { eax = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 005f40d9 sar eax, 0xc */ { u32 n_ = (12u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f40dc shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f40de movsx ecx, word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f40e3 imul ecx, edi */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f40e6 sar ecx, 0xb */ { u32 n_ = (11u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f40e9 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f40eb mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005f40ed imul ecx, esi */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)esi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f40f0 sar ecx, 0xb */ { u32 n_ = (11u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f40f3 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f40f5 cmp eax, 0x7fff */ { u32 a_ = eax, b_ = 0x7fffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f40fa jle 0x5f410a */ if ((ZF_|LT_)) goto L_005f410a;
  /* 005f40fc mov eax, 0x7fff */ { eax = (u32)(0x7fffu); }
  /* 005f4101 mov word ptr [ebp], ax */ { const u32 m_ = (u32)(ebp); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f4105 add ebp, 2 */ { u32 a_ = ebp, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005f4108 jmp 0x5f4167 */ goto L_005f4167;
L_005f410a:;
  /* 005f410a cmp eax, 0xffff8000 */ { u32 a_ = eax, b_ = 0xffff8000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f410f jge 0x5f4116 */ if (!LT_) goto L_005f4116;
  /* 005f4111 mov eax, 0xffff8000 */ { eax = (u32)(0xffff8000u); }
L_005f4116:;
  /* 005f4116 mov word ptr [ebp], ax */ { const u32 m_ = (u32)(ebp); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f411a add ebp, 2 */ { u32 a_ = ebp, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005f411d jmp 0x5f4167 */ goto L_005f4167;
L_005f411f:;
  /* 005f411f movzx ax, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 005f4123 shl eax, 0xc */ { u32 n_ = (12u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f4126 movsx eax, ax */ { eax = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 005f4129 sar eax, 0xc */ { u32 n_ = (12u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f412c shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f412e movsx ecx, word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f4133 imul ecx, edi */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f4136 sar ecx, 0xb */ { u32 n_ = (11u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f4139 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f413b mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005f413d imul ecx, esi */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)esi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f4140 sar ecx, 0xb */ { u32 n_ = (11u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f4143 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f4145 cmp eax, 0x7fff */ { u32 a_ = eax, b_ = 0x7fffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f414a jle 0x5f4153 */ if ((ZF_|LT_)) goto L_005f4153;
  /* 005f414c mov eax, 0x7fff */ { eax = (u32)(0x7fffu); }
  /* 005f4151 jmp 0x5f415f */ goto L_005f415f;
L_005f4153:;
  /* 005f4153 cmp eax, 0xffff8000 */ { u32 a_ = eax, b_ = 0xffff8000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4158 jge 0x5f415f */ if (!LT_) goto L_005f415f;
  /* 005f415a mov eax, 0xffff8000 */ { eax = (u32)(0xffff8000u); }
L_005f415f:;
  /* 005f415f mov word ptr [ebp], ax */ { const u32 m_ = (u32)(ebp); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f4163 add ebp, 2 */ { u32 a_ = ebp, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005f4166 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_005f4167:;
  /* 005f4167 mov ecx, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); ecx = (u32)(M32(m_)); }
  /* 005f416b mov edi, esi */ { edi = (u32)(esi); }
  /* 005f416d mov esi, eax */ { esi = (u32)(eax); }
  /* 005f416f mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 005f4173 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f4174 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4176 mov dword ptr [esp + 0x40], eax */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(eax); }
  /* 005f417a jb 0x5f40c6 */ if (CF_) goto L_005f40c6;
L_005f4180:;
  /* 005f4180 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f4184 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f4185 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 005f4189 jne 0x5f4076 */ if (!ZF_) goto L_005f4076;
L_005f418f:;
  /* 005f418f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f4190 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f4191 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f4192 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f4193 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4196 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f41a0(CPU *c) {
  NATIVE_HOOK(0x5f41a0u) REGS; LOADALL;
L_005f41a0:;
  /* 005f41a0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f41a1 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f41a5 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f41a9 add eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f41ac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f41ad cdq */ edx = (u32)((s32)eax >> 31);
  /* 005f41ae and edx, 0xf */ { u32 a_ = edx, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f41b1 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 005f41b5 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f41b7 sar eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f41ba test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f41bc lea edx, [eax + eax] */ edx = (u32)((u32)(eax + eax));
  /* 005f41bf mov dword ptr [esp + 4], edx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f41c3 jle 0x5f421d */ if ((ZF_|LT_)) goto L_005f421d;
  /* 005f41c5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f41c6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f41c7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f41c8 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
L_005f41cc:;
  /* 005f41cc mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f41ce mov dl, 0xc */ { edx = (edx & 0xffffff00u) | ((u32)(0xcu) & 0xffu); }
  /* 005f41d0 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 005f41d2 and al, 0xf0 */ { u32 a_ = (eax & 0xffu), b_ = 0xf0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f41d4 and bl, 0xf */ { u32 a_ = (ebx & 0xffu), b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f41d7 mov ebp, 2 */ { ebp = (u32)(0x2u); }
  /* 005f41dc sub dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f41de or dl, al */ { u32 a_ = (edx & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f41e0 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_005f41e3:;
  /* 005f41e3 mov byte ptr [esi], dl */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 005f41e5 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f41e6 mov edi, 7 */ { edi = (u32)(0x7u); }
L_005f41eb:;
  /* 005f41eb mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f41ed inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f41ee mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 005f41f0 shr bl, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = (ebx & 0xffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 7) & 1u; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 005f41f3 shl al, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = (eax & 0xffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffu; u32 cf_ = n_ <= 8u ? (a_ >> (8u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 7) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 005f41f6 xor bl, al */ { u32 a_ = (ebx & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f41f8 mov byte ptr [esi], bl */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005f41fa inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f41fb dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f41fc jne 0x5f41eb */ if (!ZF_) goto L_005f41eb;
  /* 005f41fe dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f41ff jne 0x5f41e3 */ if (!ZF_) goto L_005f41e3;
  /* 005f4201 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f4205 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f4206 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005f420a jne 0x5f41cc */ if (!ZF_) goto L_005f41cc;
  /* 005f420c mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f4210 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f4211 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f4212 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f4213 lea eax, [ecx*8] */ eax = (u32)((u32)(ecx * 8u));
  /* 005f421a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f421b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005f421c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f421d:;
  /* 005f421d lea eax, [edx*8] */ eax = (u32)((u32)(edx * 8u));
  /* 005f4224 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f4225 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005f4226 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f4230(CPU *c) {
  NATIVE_HOOK(0x5f4230u) REGS; LOADALL;
L_005f4230:;
  /* 005f4230 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4233 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f4234 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f4235 mov ebp, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ebp = (u32)(M32(m_)); }
  /* 005f4239 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f423a test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f423c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f423d jne 0x5f4249 */ if (!ZF_) goto L_005f4249;
  /* 005f423f lea eax, [esp + 0x20] */ eax = (u32)((u32)(esp + 0x20u));
  /* 005f4243 mov dword ptr [esp + 0x3c], eax */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(eax); }
  /* 005f4247 mov ebp, eax */ { ebp = (u32)(eax); }
L_005f4249:;
  /* 005f4249 mov esi, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); esi = (u32)(M32(m_)); }
  /* 005f424d push 0x63c330 */ { u32 v_ = 0x63c330u; esp -= 4; M32(esp) = v_; }
  /* 005f4252 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f4255 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f4256 call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f425bu; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f4256u); RETCHK(0x5f425bu, 0x5f4256u); LOADALL;
  /* 005f425b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f425e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f4260 jne 0x5f44f7 */ if (!ZF_) goto L_005f44f7;
  /* 005f4266 mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 005f426a push 0x63c320 */ { u32 v_ = 0x63c320u; esp -= 4; M32(esp) = v_; }
  /* 005f426f mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f4272 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4273 call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f4278u; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f4273u); RETCHK(0x5f4278u, 0x5f4273u); LOADALL;
  /* 005f4278 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f427b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f427d jne 0x5f44f7 */ if (!ZF_) goto L_005f44f7;
  /* 005f4283 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f4286 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4288 mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f428b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f428d div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x5f428du); eax = q_; edx = r_; }
  /* 005f428f mov edi, eax */ { edi = (u32)(eax); }
  /* 005f4291 mov eax, 0x24924925 */ { eax = (u32)(0x24924925u); }
  /* 005f4296 mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 005f429a lea ecx, [edi + edi] */ ecx = (u32)((u32)(edi + edi));
  /* 005f429d mul ecx */ { u64 p_ = (u64)eax * ecx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f429f sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f42a1 mov eax, 0x24924925 */ { eax = (u32)(0x24924925u); }
  /* 005f42a6 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f42a8 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f42aa mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 005f42ae shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f42b1 add ecx, 0xf */ { u32 a_ = ecx, b_ = 0xfu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f42b4 and ecx, 0xfffffff0 */ { u32 a_ = ecx, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f42b7 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005f42b9 lea ecx, [edx + edx] */ ecx = (u32)((u32)(edx + edx));
  /* 005f42bc mul ecx */ { u64 p_ = (u64)eax * ecx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f42be sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f42c0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f42c2 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f42c4 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f42c6 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f42c9 add ecx, 0xf */ { u32 a_ = ecx, b_ = 0xfu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f42cc and ecx, 0xfffffff0 */ { u32 a_ = ecx, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f42cf mov dword ptr [ebp], ecx */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(ecx); }
  /* 005f42d2 mov al, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f42d5 imul eax, ebx */ { s64 p_ = (s64)(s32)eax * (s64)(s32)ebx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f42d8 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 005f42dc mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 005f42e0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f42e2 je 0x5f4552 */ if (ZF_) goto L_005f4552;
  /* 005f42e8 mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 005f42ec cmp byte ptr [edx + 0xd], 1 */ { const u32 m_ = (u32)(edx + 0xdu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f42f0 jbe 0x5f44ea */ if ((CF_|ZF_)) goto L_005f44ea;
  /* 005f42f6 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f42f9 push 0x10806 */ { u32 v_ = 0x10806u; esp -= 4; M32(esp) = v_; }
  /* 005f42fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f42ff push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f4301 call 0x5f2450 */ esp -= 4; M32(esp) = 0x5f4306u; SAVEALL; F_005f2450(c); ABI_CHECK(0x5f2450u, 0x5f4301u); RETCHK(0x5f4306u, 0x5f4301u); LOADALL;
  /* 005f4306 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4309 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f430d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f430f jne 0x5f4319 */ if (!ZF_) goto L_005f4319;
  /* 005f4311 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f4312 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f4313 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f4314 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f4315 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4318 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f4319:;
  /* 005f4319 mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f431c and edi, 0xfffffffe */ { u32 a_ = edi, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f431f test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f4321 mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 005f4325 mov dword ptr [esp + 0x28], 0 */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0x0u); }
  /* 005f432d jbe 0x5f438b */ if ((CF_|ZF_)) goto L_005f438b;
  /* 005f432f mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 005f4333 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f4337 mov dword ptr [esp + 0x2c], ecx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ecx); }
L_005f433b:;
  /* 005f433b mov ebp, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebp = (u32)(M32(m_)); }
  /* 005f433f mov edx, edi */ { edx = (u32)(edi); }
  /* 005f4341 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f4343 je 0x5f4360 */ if (ZF_) goto L_005f4360;
L_005f4345:;
  /* 005f4345 mov ax, word ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f4348 mov word ptr [ebp], ax */ { const u32 m_ = (u32)(ebp); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f434c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f434e mov al, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4351 add ebp, 2 */ { u32 a_ = ebp, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005f4354 sub edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f4357 lea ecx, [ecx + eax*2] */ ecx = (u32)((u32)(ecx + eax * 2u));
  /* 005f435a jne 0x5f4345 */ if (!ZF_) goto L_005f4345;
  /* 005f435c mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
L_005f4360:;
  /* 005f4360 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 005f4364 mov ebp, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebp = (u32)(M32(m_)); }
  /* 005f4368 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 005f436c add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f436e mov dword ptr [esp + 0x14], edx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edx); }
  /* 005f4372 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f4374 mov dl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4377 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f4378 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f437b cmp ebp, edx */ { u32 a_ = ebp, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f437d mov dword ptr [esp + 0x28], ebp */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ebp); }
  /* 005f4381 mov dword ptr [esp + 0x2c], ecx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 005f4385 jb 0x5f433b */ if (CF_) goto L_005f433b;
  /* 005f4387 mov ebp, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ebp = (u32)(M32(m_)); }
L_005f438b:;
  /* 005f438b mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
L_005f438f:;
  /* 005f438f mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4392 mov dword ptr [esp + 0x28], 0 */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0x0u); }
  /* 005f439a test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f439c jbe 0x5f442e */ if ((CF_|ZF_)) goto L_005f442e;
  /* 005f43a2 mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 005f43a6 mov dword ptr [esp + 0x30], 0 */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(0x0u); }
  /* 005f43ae sub edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f43b0 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f43b2 mov dword ptr [esp + 0x14], edi */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edi); }
  /* 005f43b6 mov dword ptr [esp + 0x2c], eax */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(eax); }
L_005f43ba:;
  /* 005f43ba mov edx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); edx = (u32)(M32(m_)); }
  /* 005f43bd mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 005f43c1 mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 005f43c5 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f43c7 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005f43c9 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f43cb mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 005f43cd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f43cf mov edi, edx */ { edi = (u32)(edx); }
  /* 005f43d1 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f43d4 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005f43d6 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 005f43d8 mov ebp, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ebp = (u32)(M32(m_)); }
  /* 005f43dc and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f43df rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 005f43e1 mov ecx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M32(m_)); }
  /* 005f43e4 mov edi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edi = (u32)(M32(m_)); }
  /* 005f43e8 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005f43ea sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f43ec mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f43f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f43f1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f43f3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f43f5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f43f6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f43f7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f43f8 call 0x5f4560 */ esp -= 4; M32(esp) = 0x5f43fdu; SAVEALL; F_005f4560(c); ABI_CHECK(0x5f4560u, 0x5f43f8u); RETCHK(0x5f43fdu, 0x5f43f8u); LOADALL;
  /* 005f43fd mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 005f4401 mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 005f4405 mov ecx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); ecx = (u32)(M32(m_)); }
  /* 005f4409 add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f440b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f440d add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4410 mov dl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4413 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f4414 add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f4416 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4418 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 005f441c mov dword ptr [esp + 0x30], ecx */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(ecx); }
  /* 005f4420 mov dword ptr [esp + 0x2c], edi */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(edi); }
  /* 005f4424 jb 0x5f43ba */ if (CF_) goto L_005f43ba;
  /* 005f4426 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f442a mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
L_005f442e:;
  /* 005f442e mov cl, byte ptr [edx + 0xd] */ { const u32 m_ = (u32)(edx + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4431 cmp cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f4434 jbe 0x5f4552 */ if ((CF_|ZF_)) goto L_005f4552;
  /* 005f443a test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f443c mov dword ptr [esp + 0x28], 0 */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0x0u); }
  /* 005f4444 jbe 0x5f44b9 */ if ((CF_|ZF_)) goto L_005f44b9;
  /* 005f4446 mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 005f444a mov esi, eax */ { esi = (u32)(eax); }
  /* 005f444c mov dword ptr [esp + 0x30], esi */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(esi); }
  /* 005f4450 mov dword ptr [esp + 0x3c], ecx */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(ecx); }
L_005f4454:;
  /* 005f4454 mov ecx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 005f4458 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 005f445a test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f445c je 0x5f4492 */ if (ZF_) goto L_005f4492;
L_005f445e:;
  /* 005f445e mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f4460 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f4462 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f4465 mov ebp, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ebp = (u32)(M32(m_)); }
  /* 005f4467 mov dword ptr [eax], ebp */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebp); }
  /* 005f4469 mov ebp, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ebp = (u32)(M32(m_)); }
  /* 005f446c mov dword ptr [eax + 4], ebp */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebp); }
  /* 005f446f mov ebp, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ebp = (u32)(M32(m_)); }
  /* 005f4472 mov dword ptr [eax + 8], ebp */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ebp); }
  /* 005f4475 mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f4478 mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
  /* 005f447b mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 005f447f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f4481 mov al, byte ptr [edx + 0xd] */ { const u32 m_ = (u32)(edx + 0xdu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4484 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f4487 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f4489 sub edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f448c jne 0x5f445e */ if (!ZF_) goto L_005f445e;
  /* 005f448e mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
L_005f4492:;
  /* 005f4492 mov esi, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); esi = (u32)(M32(m_)); }
  /* 005f4496 mov edi, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edi = (u32)(M32(m_)); }
  /* 005f449a add esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f449c xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f449e mov cl, byte ptr [edx + 0xd] */ { const u32 m_ = (u32)(edx + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f44a1 mov dword ptr [esp + 0x3c], esi */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(esi); }
  /* 005f44a5 mov esi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); esi = (u32)(M32(m_)); }
  /* 005f44a9 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f44aa add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f44ad cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f44af mov dword ptr [esp + 0x28], edi */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(edi); }
  /* 005f44b3 mov dword ptr [esp + 0x30], esi */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(esi); }
  /* 005f44b7 jb 0x5f4454 */ if (CF_) goto L_005f4454;
L_005f44b9:;
  /* 005f44b9 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f44bb mov edi, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); edi = (u32)(M32(m_)); }
  /* 005f44bf mov cl, byte ptr [edx + 0xd] */ { const u32 m_ = (u32)(edx + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f44c2 mov esi, eax */ { esi = (u32)(eax); }
  /* 005f44c4 imul ecx, ebx */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)ebx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f44c7 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f44c9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f44ca shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f44cd rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f44cf mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005f44d1 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f44d4 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f44d6 call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f44dbu; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f44d6u); RETCHK(0x5f44dbu, 0x5f44d6u); LOADALL;
  /* 005f44db mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f44df add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f44e2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f44e3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f44e4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f44e5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f44e6 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f44e9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f44ea:;
  /* 005f44ea mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005f44ee mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f44f2 jmp 0x5f438f */ goto L_005f438f;
L_005f44f7:;
  /* 005f44f7 mov ebx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebx = (u32)(M32(m_)); }
  /* 005f44fb lea eax, [ebx*8] */ eax = (u32)((u32)(ebx * 8u));
  /* 005f4502 sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f4504 shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f4506 mov dword ptr [ebp], eax */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(eax); }
  /* 005f4509 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f450c lea edx, [ecx*8] */ edx = (u32)((u32)(ecx * 8u));
  /* 005f4513 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f4515 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005f4517 mov edx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); edx = (u32)(M32(m_)); }
  /* 005f451b shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f451d test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f451f mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 005f4523 je 0x5f4552 */ if (ZF_) goto L_005f4552;
  /* 005f4525 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f4527 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f4529 mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 005f452b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f452d mov edi, edx */ { edi = (u32)(edx); }
  /* 005f452f shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f4532 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005f4534 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 005f4536 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4539 rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 005f453b mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f453e mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 005f4542 shr eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f4545 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4546 add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f4548 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f4549 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f454a call 0x5f49c0 */ esp -= 4; M32(esp) = 0x5f454fu; SAVEALL; F_005f49c0(c); ABI_CHECK(0x5f49c0u, 0x5f454au); RETCHK(0x5f454fu, 0x5f454au); LOADALL;
  /* 005f454f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f4552:;
  /* 005f4552 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f4556 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f4557 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f4558 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f4559 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f455a add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f455d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f4560(CPU *c) {
  NATIVE_HOOK(0x5f4560u) REGS; LOADALL;
L_005f4560:;
  /* 005f4560 sub esp, 0x64 */ { u32 a_ = esp, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4563 mov eax, dword ptr [esp + 0x6c] */ { const u32 m_ = (u32)(esp + 0x6cu); eax = (u32)(M32(m_)); }
  /* 005f4567 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f4568 mov esi, dword ptr [esp + 0x80] */ { const u32 m_ = (u32)(esp + 0x80u); esi = (u32)(M32(m_)); }
  /* 005f456f mov edx, 0x10 */ { edx = (u32)(0x10u); }
  /* 005f4574 shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f4576 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4578 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f457a mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 005f457e mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 005f4582 mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005f4586 mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 005f458a mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 005f458e mov dword ptr [esp + 0x70], ecx */ { const u32 m_ = (u32)(esp + 0x70u); M32(m_) = (u32)(ecx); }
  /* 005f4592 jl 0x5f46c0 */ if (LT_) goto L_005f46c0;
  /* 005f4598 movsx ecx, byte ptr [esp + 0x78] */ { const u32 m_ = (u32)(esp + 0x78u); ecx = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f459d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f459e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f459f lea ebp, [ecx*8] */ ebp = (u32)((u32)(ecx * 8u));
  /* 005f45a6 lea ebx, [ecx*8] */ ebx = (u32)((u32)(ecx * 8u));
  /* 005f45ad sub ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005f45af sub ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005f45b1 neg ebp */ { u32 a_ = ebp; u32 r_ = (0u - a_) & 0xffffffffu; ebp = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005f45b3 shl ebx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 005f45b6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f45b7 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 005f45bb shl ebp, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 005f45be mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f45c2 jmp 0x5f45c8 */ goto L_005f45c8;
L_005f45c4:;
  /* 005f45c4 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
L_005f45c8:;
  /* 005f45c8 cmp eax, 0x1c */ { u32 a_ = eax, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f45cb mov esi, eax */ { esi = (u32)(eax); }
  /* 005f45cd jle 0x5f45d4 */ if ((ZF_|LT_)) goto L_005f45d4;
  /* 005f45cf mov esi, 0x1c */ { esi = (u32)(0x1cu); }
L_005f45d4:;
  /* 005f45d4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f45d6 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f45d8 jle 0x5f460e */ if ((ZF_|LT_)) goto L_005f460e;
  /* 005f45da movsx ecx, byte ptr [esp + 0x84] */ { const u32 m_ = (u32)(esp + 0x84u); ecx = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f45e2 mov edi, dword ptr [esp + 0x7c] */ { const u32 m_ = (u32)(esp + 0x7cu); edi = (u32)(M32(m_)); }
  /* 005f45e6 lea edx, [ecx + ecx] */ edx = (u32)((u32)(ecx + ecx));
  /* 005f45e9 movsx ecx, byte ptr [esp + 0x88] */ { const u32 m_ = (u32)(esp + 0x88u); ecx = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f45f1 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f45f3 mov edi, dword ptr [esp + 0x78] */ { const u32 m_ = (u32)(esp + 0x78u); edi = (u32)(M32(m_)); }
  /* 005f45f7 lea ecx, [edi + ecx*2] */ ecx = (u32)((u32)(edi + ecx * 2u));
L_005f45fa:;
  /* 005f45fa mov di, word ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f45fd add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f45ff mov word ptr [esp + eax*2 + 0x3c], di */ { const u32 m_ = (u32)(esp + eax * 2u + 0x3cu); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 005f4604 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f4605 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4607 jl 0x5f45fa */ if (LT_) goto L_005f45fa;
  /* 005f4609 cmp eax, 0x1c */ { u32 a_ = eax, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f460c jge 0x5f4624 */ if (!LT_) goto L_005f4624;
L_005f460e:;
  /* 005f460e mov ecx, 0x1c */ { ecx = (u32)(0x1cu); }
  /* 005f4613 lea edi, [esp + eax*2 + 0x3c] */ edi = (u32)((u32)(esp + eax * 2u + 0x3cu));
  /* 005f4617 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f4619 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f461b shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f461d rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005f461f adc ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffffffffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); ecx = (u32)(r_); }
  /* 005f4621 rep stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; while (ecx) { M16(edi) = (u16)(eax & 0xffffu); edi += st_; ecx--; } }
L_005f4624:;
  /* 005f4624 lea edx, [esp + 0x1c] */ edx = (u32)((u32)(esp + 0x1cu));
  /* 005f4628 lea eax, [esp + 0x20] */ eax = (u32)((u32)(esp + 0x20u));
  /* 005f462c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f462d lea ecx, [esp + 0x28] */ ecx = (u32)((u32)(esp + 0x28u));
  /* 005f4631 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4632 lea edx, [esp + 0x30] */ edx = (u32)((u32)(esp + 0x30u));
  /* 005f4636 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f4637 lea eax, [esp + 0x38] */ eax = (u32)((u32)(esp + 0x38u));
  /* 005f463b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f463c lea ecx, [esp + 0x4c] */ ecx = (u32)((u32)(esp + 0x4cu));
  /* 005f4640 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4641 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f4642 call 0x5f46d0 */ esp -= 4; M32(esp) = 0x5f4647u; SAVEALL; F_005f46d0(c); ABI_CHECK(0x5f46d0u, 0x5f4642u); RETCHK(0x5f4647u, 0x5f4642u); LOADALL;
  /* 005f4647 mov eax, dword ptr [esp + 0x98] */ { const u32 m_ = (u32)(esp + 0x98u); eax = (u32)(M32(m_)); }
  /* 005f464e mov byte ptr [esp + 0x45], 2 */ { const u32 m_ = (u32)(esp + 0x45u); M8(m_) = (u8)(0x2u); }
  /* 005f4653 mov ecx, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); ecx = (u32)(M32(m_)); }
  /* 005f4657 mov edx, eax */ { edx = (u32)(eax); }
  /* 005f4659 mov esi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 005f465d add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f4660 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005f4662 mov ecx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); ecx = (u32)(M32(m_)); }
  /* 005f4666 mov dword ptr [esp + 0x98], eax */ { const u32 m_ = (u32)(esp + 0x98u); M32(m_) = (u32)(eax); }
  /* 005f466d mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f4671 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005f4674 mov ecx, dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 005f4678 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f467b add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f467e mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005f4681 mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 005f4685 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f4688 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 005f468c mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005f468f mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f4693 mov edx, dword ptr [esp + 0x7c] */ { const u32 m_ = (u32)(esp + 0x7cu); edx = (u32)(M32(m_)); }
  /* 005f4697 add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f4699 mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 005f469d mov ecx, dword ptr [esp + 0x8c] */ { const u32 m_ = (u32)(esp + 0x8cu); ecx = (u32)(M32(m_)); }
  /* 005f46a4 add edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f46a6 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f46a8 mov dword ptr [esp + 0x7c], edx */ { const u32 m_ = (u32)(esp + 0x7cu); M32(m_) = (u32)(edx); }
  /* 005f46ac mov dword ptr [esp + 0x14], esi */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(esi); }
  /* 005f46b0 jle 0x5f45c4 */ if ((ZF_|LT_)) goto L_005f45c4;
  /* 005f46b6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f46b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f46b8 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f46ba pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f46bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f46bc add esp, 0x64 */ { u32 a_ = esp, b_ = 0x64u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f46bf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f46c0:;
  /* 005f46c0 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005f46c2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f46c3 add esp, 0x64 */ { u32 a_ = esp, b_ = 0x64u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f46c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f46d0(CPU *c) {
  NATIVE_HOOK(0x5f46d0u) REGS; LOADALL;
L_005f46d0:;
  /* 005f46d0 sub esp, 0x2a0 */ { u32 a_ = esp, b_ = 0x2a0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f46d6 mov edx, dword ptr [esp + 0x2a4] */ { const u32 m_ = (u32)(esp + 0x2a4u); edx = (u32)(M32(m_)); }
  /* 005f46dd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f46de push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f46df push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f46e0 lea ecx, [esp + 0x44] */ ecx = (u32)((u32)(esp + 0x44u));
  /* 005f46e4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f46e5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f46e7 mov dword ptr [esp + 0x24], 0x501502f9 */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0x501502f9u); }
  /* 005f46ef mov dword ptr [esp + 0x20], 0 */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(0x0u); }
  /* 005f46f7 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f46f9 mov esi, 0x77ff */ { esi = (u32)(0x77ffu); }
  /* 005f46fe mov edi, 0xffff8800 */ { edi = (u32)(0xffff8800u); }
L_005f4703:;
  /* 005f4703 lea ecx, [edx + eax*2] */ ecx = (u32)((u32)(edx + eax * 2u));
  /* 005f4706 mov cx, word ptr [esp + ecx + 0x48] */ { const u32 m_ = (u32)(esp + ecx + 0x48u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f470b cmp cx, si */ { u32 a_ = (ecx & 0xffffu), b_ = (esi & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 005f470e jle 0x5f4717 */ if ((ZF_|LT_)) goto L_005f4717;
  /* 005f4710 mov word ptr [esp + eax*2 + 0x48], si */ { const u32 m_ = (u32)(esp + eax * 2u + 0x48u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 005f4715 jmp 0x5f4728 */ goto L_005f4728;
L_005f4717:;
  /* 005f4717 cmp cx, di */ { u32 a_ = (ecx & 0xffffu), b_ = (edi & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 005f471a jge 0x5f4723 */ if (!LT_) goto L_005f4723;
  /* 005f471c mov word ptr [esp + eax*2 + 0x48], di */ { const u32 m_ = (u32)(esp + eax * 2u + 0x48u); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 005f4721 jmp 0x5f4728 */ goto L_005f4728;
L_005f4723:;
  /* 005f4723 mov word ptr [esp + eax*2 + 0x48], cx */ { const u32 m_ = (u32)(esp + eax * 2u + 0x48u); M16(m_) = (u16)((ecx & 0xffffu)); }
L_005f4728:;
  /* 005f4728 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f4729 cmp eax, 0x1c */ { u32 a_ = eax, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f472c jl 0x5f4703 */ if (LT_) goto L_005f4703;
  /* 005f472e mov edx, dword ptr [esp + 0x2bc] */ { const u32 m_ = (u32)(esp + 0x2bcu); edx = (u32)(M32(m_)); }
  /* 005f4735 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4737 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 005f4739 mov edx, dword ptr [esp + 0x2c0] */ { const u32 m_ = (u32)(esp + 0x2c0u); edx = (u32)(M32(m_)); }
  /* 005f4740 mov dword ptr [esp + 0x2c], eax */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(eax); }
  /* 005f4744 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 005f4746 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
L_005f474a:;
  /* 005f474a mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005f474e mov edi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edi = (u32)(M32(m_)); }
  /* 005f4752 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 005f4758 lea eax, [ecx*8] */ eax = (u32)((u32)(ecx * 8u));
  /* 005f475f mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 005f4763 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f4765 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f4767 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f476a mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
  /* 005f476e mov dword ptr [esp + ecx*4 + 0x34], edx */ { const u32 m_ = (u32)(esp + ecx * 4u + 0x34u); M32(m_) = (u32)(edx); }
  /* 005f4772 lea esi, [esp + eax + 0x80] */ esi = (u32)((u32)(esp + eax + 0x80u));
L_005f4779:;
  /* 005f4779 fild dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)(s32)M32(m_)); }
  /* 005f477d movsx ebp, word ptr [esp + edx*2 + 0x48] */ { const u32 m_ = (u32)(esp + edx * 2u + 0x48u); ebp = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f4782 fmul dword ptr [ecx*8 + 0x67da90] */ { const u32 m_ = (u32)(ecx * 8u + 0x67da90u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f4789 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 005f478d mov dword ptr [esp + 0x14], ebp */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ebp); }
  /* 005f4791 fmul dword ptr [ecx*8 + 0x67da94] */ { const u32 m_ = (u32)(ecx * 8u + 0x67da94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f4798 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005f479a fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 005f479e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005f47a0 fst dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); }
  /* 005f47a2 fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 005f47a4 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f47a8 fcom dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005f47ac fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005f47ae test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f47b1 jp 0x5f47b9 */ if (PF_) goto L_005f47b9;
  /* 005f47b3 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005f47b5 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
L_005f47b9:;
  /* 005f47b9 mov ebx, edi */ { ebx = (u32)(edi); }
  /* 005f47bb inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f47bc mov edi, ebp */ { edi = (u32)(ebp); }
  /* 005f47be add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f47c1 cmp edx, 0x1c */ { u32 a_ = edx, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f47c4 mov dword ptr [esp + 0x10], ebx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 005f47c8 mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
  /* 005f47cc jl 0x5f4779 */ if (LT_) goto L_005f4779;
  /* 005f47ce fst dword ptr [esp + ecx*4 + 0x34] */ { const u32 m_ = (u32)(esp + ecx * 4u + 0x34u); MF32(m_) = (float)ST(0); }
  /* 005f47d2 fld dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); FPUSH((double)MF32(m_)); }
  /* 005f47d6 fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 005f47d8 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005f47da and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f47df jne 0x5f47eb */ if (!ZF_) goto L_005f47eb;
  /* 005f47e1 fstp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f47e5 mov dword ptr [esp + 0x20], ecx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ecx); }
  /* 005f47e9 jmp 0x5f47ed */ goto L_005f47ed;
L_005f47eb:;
  /* 005f47eb fstp st(0) */ ST(0) = ST(0); FPOP();
L_005f47ed:;
  /* 005f47ed test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f47ef jne 0x5f4802 */ if (!ZF_) goto L_005f4802;
  /* 005f47f1 fld dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); FPUSH((double)MF32(m_)); }
  /* 005f47f5 fcomp dword ptr [0x65711c] */ { const u32 m_ = (u32)(0x65711cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005f47fb fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005f47fd test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f4800 jnp 0x5f4812 */ if (!PF_) goto L_005f4812;
L_005f4802:;
  /* 005f4802 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f4803 cmp ecx, 5 */ { u32 a_ = ecx, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4806 jl 0x5f474a */ if (LT_) goto L_005f474a;
  /* 005f480c mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 005f4810 jmp 0x5f4814 */ goto L_005f4814;
L_005f4812:;
  /* 005f4812 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_005f4814:;
  /* 005f4814 mov ecx, dword ptr [esp + 0x2bc] */ { const u32 m_ = (u32)(esp + 0x2bcu); ecx = (u32)(M32(m_)); }
  /* 005f481b mov eax, dword ptr [esp + 0x2c0] */ { const u32 m_ = (u32)(esp + 0x2c0u); eax = (u32)(M32(m_)); }
  /* 005f4822 fld dword ptr [esp + edx*4 + 0x34] */ { const u32 m_ = (u32)(esp + edx * 4u + 0x34u); FPUSH((double)MF32(m_)); }
  /* 005f4826 mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 005f4828 mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
  /* 005f482a fstp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f482e fnstcw word ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); M16(m_) = (u16)c->fcw; }
  /* 005f4832 fld dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 005f4836 mov ax, word ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f483b or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f483e mov word ptr [esp + 0x18], ax */ { const u32 m_ = (u32)(esp + 0x18u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f4843 fldcw word ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f4847 fistp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f484b fldcw word ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f484f mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f4853 cmp eax, 0x7fff */ { u32 a_ = eax, b_ = 0x7fffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4858 mov esi, eax */ { esi = (u32)(eax); }
  /* 005f485a jle 0x5f4863 */ if ((ZF_|LT_)) goto L_005f4863;
  /* 005f485c mov esi, 0x7fff */ { esi = (u32)(0x7fffu); }
  /* 005f4861 jmp 0x5f486f */ goto L_005f486f;
L_005f4863:;
  /* 005f4863 cmp eax, 0xffff8000 */ { u32 a_ = eax, b_ = 0xffff8000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4868 jge 0x5f486f */ if (!LT_) goto L_005f486f;
  /* 005f486a mov esi, 0xffff8000 */ { esi = (u32)(0xffff8000u); }
L_005f486f:;
  /* 005f486f mov eax, 0x4000 */ { eax = (u32)(0x4000u); }
  /* 005f4874 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_005f4876:;
  /* 005f4876 mov edi, eax */ { edi = (u32)(eax); }
  /* 005f4878 sar edi, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 005f487b add edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f487d test eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f487f jne 0x5f4889 */ if (!ZF_) goto L_005f4889;
  /* 005f4881 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f4882 sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f4884 cmp ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4887 jl 0x5f4876 */ if (LT_) goto L_005f4876;
L_005f4889:;
  /* 005f4889 mov al, dl */ { eax = (eax & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 005f488b mov esi, dword ptr [esp + 0x2b8] */ { const u32 m_ = (u32)(esp + 0x2b8u); esi = (u32)(M32(m_)); }
  /* 005f4892 shl al, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = (eax & 0xffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffu; u32 cf_ = n_ <= 8u ? (a_ >> (8u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 7) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 005f4895 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 005f4897 mov ebp, dword ptr [esp + 0x2c8] */ { const u32 m_ = (u32)(esp + 0x2c8u); ebp = (u32)(M32(m_)); }
  /* 005f489e xor bl, cl */ { u32 a_ = (ebx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f48a0 mov byte ptr [esi + 1], 0 */ { const u32 m_ = (u32)(esi + 0x1u); M8(m_) = (u8)(0x0u); }
  /* 005f48a4 and bl, 0xf */ { u32 a_ = (ebx & 0xffu), b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f48a7 add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f48aa xor bl, al */ { u32 a_ = (ebx & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f48ac lea eax, [edx*8 + 0x67da90] */ eax = (u32)((u32)(edx * 8u + 0x67da90u));
  /* 005f48b3 mov dword ptr [esp + 0x2c], eax */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(eax); }
  /* 005f48b7 lea eax, [edx*8 + 0x67da94] */ eax = (u32)((u32)(edx * 8u + 0x67da94u));
  /* 005f48be mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005f48c2 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f48c7 shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f48c9 mov byte ptr [esi - 2], bl */ { const u32 m_ = (u32)(esi + 0xfffffffeu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005f48cc xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005f48ce mov dword ptr [esp + 0x24], ebx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ebx); }
  /* 005f48d2 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f48d6 lea eax, [edx*8] */ eax = (u32)((u32)(edx * 8u));
  /* 005f48dd fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 005f48e1 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f48e3 mov edx, dword ptr [esp + 0x2c4] */ { const u32 m_ = (u32)(esp + 0x2c4u); edx = (u32)(M32(m_)); }
  /* 005f48ea shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f48ed fstp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f48f1 lea edi, [esp + eax + 0x80] */ edi = (u32)((u32)(esp + eax + 0x80u));
L_005f48f8:;
  /* 005f48f8 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f48fc fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 005f48fe fmul dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f4901 mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005f4905 fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 005f4907 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f4909 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005f490b fadd dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005f490d fstp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f4911 fld dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 005f4915 fmul dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f4919 fstp dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f491d fnstcw word ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); M16(m_) = (u16)c->fcw; }
  /* 005f4921 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 005f4925 mov ax, word ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f492a or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f492d mov word ptr [esp + 0x10], ax */ { const u32 m_ = (u32)(esp + 0x10u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f4932 fldcw word ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f4936 fistp dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005f493a fldcw word ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005f493e mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f4942 add eax, 0x800 */ { u32 a_ = eax, b_ = 0x800u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f4947 and eax, 0xfffff000 */ { u32 a_ = eax, b_ = 0xfffff000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f494c cmp eax, 0x7fff */ { u32 a_ = eax, b_ = 0x7fffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4951 jle 0x5f495a */ if ((ZF_|LT_)) goto L_005f495a;
  /* 005f4953 mov eax, 0x7fff */ { eax = (u32)(0x7fffu); }
  /* 005f4958 jmp 0x5f4966 */ goto L_005f4966;
L_005f495a:;
  /* 005f495a cmp eax, 0xffff8000 */ { u32 a_ = eax, b_ = 0xffff8000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f495f jge 0x5f4966 */ if (!LT_) goto L_005f4966;
  /* 005f4961 mov eax, 0xffff8000 */ { eax = (u32)(0xffff8000u); }
L_005f4966:;
  /* 005f4966 test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f4969 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005f496b je 0x5f4978 */ if (ZF_) goto L_005f4978;
  /* 005f496d sar ebx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ebx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 005f4970 and bl, 0xf0 */ { u32 a_ = (ebx & 0xffu), b_ = 0xf0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f4973 or byte ptr [esi], bl */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 005f4975 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f4976 jmp 0x5f4980 */ goto L_005f4980;
L_005f4978:;
  /* 005f4978 sar ebx, 0xc */ { u32 n_ = (12u) & 31u; if (n_) { u32 a_ = ebx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 005f497b and bl, 0xf */ { u32 a_ = (ebx & 0xffu), b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f497e mov byte ptr [esi], bl */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)((ebx & 0xffu)); }
L_005f4980:;
  /* 005f4980 mov ebx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ebx = (u32)(M32(m_)); }
  /* 005f4982 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f4985 sar eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f4987 mov dword ptr [ebp], ebx */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(ebx); }
  /* 005f498a mov ebx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebx = (u32)(M32(m_)); }
  /* 005f498e inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f498f cmp ebx, 0x1c */ { u32 a_ = ebx, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4992 mov dword ptr [esp + 0x24], ebx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ebx); }
  /* 005f4996 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 005f499a fild dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)(s32)M32(m_)); }
  /* 005f499e fsub dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005f49a2 fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f49a4 jl 0x5f48f8 */ if (LT_) goto L_005f48f8;
  /* 005f49aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f49ab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f49ac pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f49ad pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f49ae add esp, 0x2a0 */ { u32 a_ = esp, b_ = 0x2a0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f49b4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f49c0(CPU *c) {
  NATIVE_HOOK(0x5f49c0u) REGS; LOADALL;
L_005f49c0:;
  /* 005f49c0 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f49c3 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f49c7 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f49c9 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f49cb mov dword ptr [esp], edx */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(edx); }
  /* 005f49cf je 0x5f4a8f */ if (ZF_) goto L_005f4a8f;
  /* 005f49d5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f49d6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f49d7 mov ebp, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebp = (u32)(M32(m_)); }
  /* 005f49db push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f49dc mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
  /* 005f49e0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f49e1 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
L_005f49e5:;
  /* 005f49e5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f49e7 mov ecx, 0x1c */ { ecx = (u32)(0x1cu); }
  /* 005f49ec mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f49ee mov dword ptr [esp + 0x20], 0xe */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(0xeu); }
  /* 005f49f6 mov edi, eax */ { edi = (u32)(eax); }
  /* 005f49f8 and eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f49fb shr edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 005f49fe sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f4a00 add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f4a03 mov eax, dword ptr [edi*8 + 0x67dab8] */ { const u32 m_ = (u32)(edi * 8u + 0x67dab8u); eax = (u32)(M32(m_)); }
  /* 005f4a0a mov ebx, dword ptr [edi*8 + 0x67dabc] */ { const u32 m_ = (u32)(edi * 8u + 0x67dabcu); ebx = (u32)(M32(m_)); }
  /* 005f4a11 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005f4a15 mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
L_005f4a19:;
  /* 005f4a19 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f4a1b imul edi, ebx */ { s64 p_ = (s64)(s32)edi * (s64)(s32)ebx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f4a1e mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4a20 add ebp, 2 */ { u32 a_ = ebp, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005f4a23 shl eax, 0x1c */ { u32 n_ = (28u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f4a26 sar eax, 0x1c */ { u32 n_ = (28u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f4a29 shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f4a2b add ebp, 2 */ { u32 a_ = ebp, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005f4a2e add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f4a30 mov edi, edx */ { edi = (u32)(edx); }
  /* 005f4a32 imul edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); s64 p_ = (s64)(s32)edi * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f4a37 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f4a39 mov edi, edx */ { edi = (u32)(edx); }
  /* 005f4a3b sar eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f4a3e imul edi, ebx */ { s64 p_ = (s64)(s32)edi * (s64)(s32)ebx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f4a41 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f4a43 mov word ptr [ebp - 4], ax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f4a47 mov dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4a49 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005f4a4d imul eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f4a52 shr edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f4a55 shl edx, 0x1c */ { u32 n_ = (28u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f4a58 sar edx, 0x1c */ { u32 n_ = (28u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f4a5b shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f4a5d add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f4a5f mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005f4a63 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f4a65 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 005f4a69 sar edx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f4a6c mov word ptr [ebp - 2], dx */ { const u32 m_ = (u32)(ebp + 0xfffffffeu); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 005f4a70 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f4a71 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f4a72 mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 005f4a76 jne 0x5f4a19 */ if (!ZF_) goto L_005f4a19;
  /* 005f4a78 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f4a7c mov dword ptr [esp + 0x10], edi */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edi); }
  /* 005f4a80 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f4a81 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f4a85 jne 0x5f49e5 */ if (!ZF_) goto L_005f49e5;
  /* 005f4a8b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f4a8c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f4a8d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f4a8e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_005f4a8f:;
  /* 005f4a8f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4a92 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f4aa0(CPU *c) {
  NATIVE_HOOK(0x5f4aa0u) REGS; LOADALL;
L_005f4aa0:;
  /* 005f4aa0 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4aa3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f4aa4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f4aa5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f4aa6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f4aa7 mov edi, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); edi = (u32)(M32(m_)); }
  /* 005f4aab xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005f4aad test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f4aaf jne 0x5f4abb */ if (!ZF_) goto L_005f4abb;
  /* 005f4ab1 lea eax, [esp + 0x24] */ eax = (u32)((u32)(esp + 0x24u));
  /* 005f4ab5 mov dword ptr [esp + 0x40], eax */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(eax); }
  /* 005f4ab9 mov edi, eax */ { edi = (u32)(eax); }
L_005f4abb:;
  /* 005f4abb mov esi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 005f4abf push 0x63c330 */ { u32 v_ = 0x63c330u; esp -= 4; M32(esp) = v_; }
  /* 005f4ac4 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f4ac7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f4ac8 call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f4acdu; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f4ac8u); RETCHK(0x5f4acdu, 0x5f4ac8u); LOADALL;
  /* 005f4acd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4ad0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f4ad2 jne 0x5f4d8b */ if (!ZF_) goto L_005f4d8b;
  /* 005f4ad8 mov ebp, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ebp = (u32)(M32(m_)); }
  /* 005f4adc push 0x63c360 */ { u32 v_ = 0x63c360u; esp -= 4; M32(esp) = v_; }
  /* 005f4ae1 mov edx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f4ae4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f4ae5 call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f4aeau; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f4ae5u); RETCHK(0x5f4aeau, 0x5f4ae5u); LOADALL;
  /* 005f4aea add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4aed test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f4aef je 0x5f4b0a */ if (ZF_) goto L_005f4b0a;
  /* 005f4af1 mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f4af4 push 0x63c3c0 */ { u32 v_ = 0x63c3c0u; esp -= 4; M32(esp) = v_; }
  /* 005f4af9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4afa call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f4affu; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f4afau); RETCHK(0x5f4affu, 0x5f4afau); LOADALL;
  /* 005f4aff add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4b02 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f4b04 jne 0x5f4d8b */ if (!ZF_) goto L_005f4d8b;
L_005f4b0a:;
  /* 005f4b0a mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f4b0d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4b0f mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4b12 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f4b14 div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x5f4b14u); eax = q_; edx = r_; }
  /* 005f4b16 mov edx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); edx = (u32)(M32(m_)); }
  /* 005f4b1a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005f4b1c mov edi, eax */ { edi = (u32)(eax); }
  /* 005f4b1e mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 005f4b22 shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f4b24 mov ebp, edi */ { ebp = (u32)(edi); }
  /* 005f4b26 add eax, 0x3f */ { u32 a_ = eax, b_ = 0x3fu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f4b29 shr ebp, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 005f4b2b shr eax, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f4b2e add ebp, 0x3f */ { u32 a_ = ebp, b_ = 0x3fu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005f4b31 mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 005f4b35 shr ebp, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 005f4b38 lea eax, [eax + eax*8] */ eax = (u32)((u32)(eax + eax * 8u));
  /* 005f4b3b shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f4b3e lea ebp, [ebp + ebp*8] */ ebp = (u32)((u32)(ebp + ebp * 8u));
  /* 005f4b42 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 005f4b44 mov bl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4b47 shl ebp, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 005f4b4a imul ebx, ebp */ { s64 p_ = (s64)(s32)ebx * (s64)(s32)ebp; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f4b4d sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005f4b4f mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 005f4b53 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f4b55 mov dword ptr [esp + 0x20], ebx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ebx); }
  /* 005f4b59 je 0x5f4e11 */ if (ZF_) goto L_005f4e11;
  /* 005f4b5f mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 005f4b63 cmp byte ptr [eax + 0xd], 1 */ { const u32 m_ = (u32)(eax + 0xdu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f4b67 jbe 0x5f4c05 */ if ((CF_|ZF_)) goto L_005f4c05;
  /* 005f4b6d mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f4b70 push 0x10806 */ { u32 v_ = 0x10806u; esp -= 4; M32(esp) = v_; }
  /* 005f4b75 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f4b76 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f4b78 call 0x5f2450 */ esp -= 4; M32(esp) = 0x5f4b7du; SAVEALL; F_005f2450(c); ABI_CHECK(0x5f2450u, 0x5f4b78u); RETCHK(0x5f4b7du, 0x5f4b78u); LOADALL;
  /* 005f4b7d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4b80 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f4b84 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f4b86 jne 0x5f4b90 */ if (!ZF_) goto L_005f4b90;
  /* 005f4b88 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f4b89 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f4b8a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f4b8b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f4b8c add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4b8f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f4b90:;
  /* 005f4b90 mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4b93 and edi, 0xfffffffe */ { u32 a_ = edi, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f4b96 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f4b98 mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 005f4b9c mov dword ptr [esp + 0x2c], 0 */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(0x0u); }
  /* 005f4ba4 jbe 0x5f4c11 */ if ((CF_|ZF_)) goto L_005f4c11;
  /* 005f4ba6 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f4baa mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f4bae mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
L_005f4bb2:;
  /* 005f4bb2 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f4bb6 mov dword ptr [esp + 0x30], edi */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(edi); }
  /* 005f4bba test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f4bbc je 0x5f4bdc */ if (ZF_) goto L_005f4bdc;
L_005f4bbe:;
  /* 005f4bbe mov dx, word ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f4bc1 mov word ptr [ecx], dx */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 005f4bc4 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f4bc6 mov dl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4bc9 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f4bcc lea eax, [eax + edx*2] */ eax = (u32)((u32)(eax + edx * 2u));
  /* 005f4bcf mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 005f4bd3 sub edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f4bd6 mov dword ptr [esp + 0x30], edx */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(edx); }
  /* 005f4bda jne 0x5f4bbe */ if (!ZF_) goto L_005f4bbe;
L_005f4bdc:;
  /* 005f4bdc mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 005f4be0 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 005f4be4 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f4be8 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f4bea mov dword ptr [esp + 0x14], edx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edx); }
  /* 005f4bee xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f4bf0 mov dl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4bf3 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f4bf4 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f4bf7 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4bf9 mov dword ptr [esp + 0x2c], ecx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 005f4bfd mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 005f4c01 jb 0x5f4bb2 */ if (CF_) goto L_005f4bb2;
  /* 005f4c03 jmp 0x5f4c0d */ goto L_005f4c0d;
L_005f4c05:;
  /* 005f4c05 mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f4c09 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
L_005f4c0d:;
  /* 005f4c0d mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
L_005f4c11:;
  /* 005f4c11 mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4c14 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f4c16 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f4c18 mov dword ptr [esp + 0x2c], edx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(edx); }
  /* 005f4c1c jbe 0x5f4ca8 */ if ((CF_|ZF_)) goto L_005f4ca8;
  /* 005f4c22 mov ecx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 005f4c26 mov dword ptr [esp + 0x34], edx */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(edx); }
  /* 005f4c2a sub edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f4c2c add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f4c2e mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
  /* 005f4c32 mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
L_005f4c36:;
  /* 005f4c36 mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 005f4c3a mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 005f4c3e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005f4c40 mov ecx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 005f4c44 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f4c46 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 005f4c48 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f4c4a mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005f4c4c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f4c4e mov edi, edx */ { edi = (u32)(edx); }
  /* 005f4c50 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f4c53 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005f4c55 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005f4c57 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4c5a rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 005f4c5c mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 005f4c60 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 005f4c62 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 005f4c64 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f4c66 mov edi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edi = (u32)(M32(m_)); }
  /* 005f4c6a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4c6b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f4c6d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f4c6f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f4c70 mov edx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edx = (u32)(M32(m_)); }
  /* 005f4c74 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f4c75 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f4c76 call 0x5f4e20 */ esp -= 4; M32(esp) = 0x5f4c7bu; SAVEALL; F_005f4e20(c); ABI_CHECK(0x5f4e20u, 0x5f4c76u); RETCHK(0x5f4c7bu, 0x5f4c76u); LOADALL;
  /* 005f4c7b mov ecx, dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 005f4c7f mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 005f4c83 mov ebx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ebx = (u32)(M32(m_)); }
  /* 005f4c87 add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f4c89 mov dword ptr [esp + 0x4c], ecx */ { const u32 m_ = (u32)(esp + 0x4cu); M32(m_) = (u32)(ecx); }
  /* 005f4c8d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4c8f mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4c92 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4c95 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f4c96 add edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f4c98 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4c9a mov dword ptr [esp + 0x2c], eax */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(eax); }
  /* 005f4c9e mov dword ptr [esp + 0x30], edi */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(edi); }
  /* 005f4ca2 jb 0x5f4c36 */ if (CF_) goto L_005f4c36;
  /* 005f4ca4 mov ebx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebx = (u32)(M32(m_)); }
L_005f4ca8:;
  /* 005f4ca8 mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 005f4cac cmp byte ptr [eax + 0xd], 1 */ { const u32 m_ = (u32)(eax + 0xdu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f4cb0 jbe 0x5f4e11 */ if ((CF_|ZF_)) goto L_005f4e11;
  /* 005f4cb6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4cb7 call 0x5f5380 */ esp -= 4; M32(esp) = 0x5f4cbcu; SAVEALL; F_005f5380(c); ABI_CHECK(0x5f5380u, 0x5f4cb7u); RETCHK(0x5f4cbcu, 0x5f4cb7u); LOADALL;
  /* 005f4cbc mov esi, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); esi = (u32)(M32(m_)); }
  /* 005f4cc0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4cc3 mov dword ptr [esp + 0x2c], 0 */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(0x0u); }
  /* 005f4ccb mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4cce test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f4cd0 jbe 0x5f4d56 */ if ((CF_|ZF_)) goto L_005f4d56;
  /* 005f4cd6 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005f4cda mov dword ptr [esp + 0x40], edx */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(edx); }
  /* 005f4cde mov edx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); edx = (u32)(M32(m_)); }
  /* 005f4ce2 mov dword ptr [esp + 0x1c], edx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edx); }
L_005f4ce6:;
  /* 005f4ce6 mov edi, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); edi = (u32)(M32(m_)); }
  /* 005f4cea mov dword ptr [esp + 0x30], ebp */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(ebp); }
  /* 005f4cee test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f4cf0 mov dword ptr [esp + 0x34], edi */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(edi); }
  /* 005f4cf4 je 0x5f4d30 */ if (ZF_) goto L_005f4d30;
L_005f4cf6:;
  /* 005f4cf6 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f4cf8 mov esi, edx */ { esi = (u32)(edx); }
  /* 005f4cfa mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005f4cfc add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f4cfe shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f4d01 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f4d03 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005f4d05 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4d08 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f4d0a mov esi, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); esi = (u32)(M32(m_)); }
  /* 005f4d0e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4d10 mov edi, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edi = (u32)(M32(m_)); }
  /* 005f4d14 mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4d17 imul ecx, eax */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f4d1a add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f4d1c mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 005f4d20 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f4d22 mov dword ptr [esp + 0x34], edi */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(edi); }
  /* 005f4d26 mov dword ptr [esp + 0x30], ecx */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(ecx); }
  /* 005f4d2a jne 0x5f4cf6 */ if (!ZF_) goto L_005f4cf6;
  /* 005f4d2c mov ebx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebx = (u32)(M32(m_)); }
L_005f4d30:;
  /* 005f4d30 mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 005f4d34 mov edi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edi = (u32)(M32(m_)); }
  /* 005f4d38 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005f4d3c add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f4d3e mov dword ptr [esp + 0x40], ecx */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(ecx); }
  /* 005f4d42 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4d44 mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4d47 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f4d48 add edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f4d4a cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4d4c mov dword ptr [esp + 0x2c], edi */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(edi); }
  /* 005f4d50 mov dword ptr [esp + 0x1c], edx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edx); }
  /* 005f4d54 jb 0x5f4ce6 */ if (CF_) goto L_005f4ce6;
L_005f4d56:;
  /* 005f4d56 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4d58 mov edi, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); edi = (u32)(M32(m_)); }
  /* 005f4d5c mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4d5f mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005f4d63 imul ecx, ebp */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)ebp; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f4d66 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f4d68 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f4d6c shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f4d6f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f4d71 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005f4d73 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4d74 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4d77 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f4d79 call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f4d7eu; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f4d79u); RETCHK(0x5f4d7eu, 0x5f4d79u); LOADALL;
  /* 005f4d7e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4d81 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005f4d83 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f4d84 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f4d85 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f4d86 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f4d87 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4d8a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f4d8b:;
  /* 005f4d8b mov al, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4d8e mov ecx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 005f4d92 cmp al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f4d94 jne 0x5f4db7 */ if (!ZF_) goto L_005f4db7;
  /* 005f4d96 mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 005f4d9b mul ecx */ { u64 p_ = (u64)eax * ecx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f4d9d shr edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f4da0 shl edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f4da3 mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 005f4da8 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 005f4daa mul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u64 p_ = (u64)eax * M32(m_); eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f4dad shr edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f4db0 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 005f4db2 shl ebx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 005f4db5 jmp 0x5f4dda */ goto L_005f4dda;
L_005f4db7:;
  /* 005f4db7 cmp al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f4db9 jne 0x5f4dda */ if (!ZF_) goto L_005f4dda;
  /* 005f4dbb mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 005f4dc0 mul ecx */ { u64 p_ = (u64)eax * ecx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f4dc2 shr edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f4dc5 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f4dc8 mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 005f4dcd mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 005f4dcf mul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u64 p_ = (u64)eax * M32(m_); eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f4dd2 shr edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f4dd5 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 005f4dd7 shl ebx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
L_005f4dda:;
  /* 005f4dda mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005f4ddc mov edx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); edx = (u32)(M32(m_)); }
  /* 005f4de0 sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005f4de2 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f4de4 je 0x5f4e11 */ if (ZF_) goto L_005f4e11;
  /* 005f4de6 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005f4de8 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f4dea mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 005f4dec xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f4dee mov edi, edx */ { edi = (u32)(edx); }
  /* 005f4df0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f4df1 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f4df4 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005f4df6 mov edx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); edx = (u32)(M32(m_)); }
  /* 005f4dfa mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 005f4dfc and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4dff rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 005f4e01 mov ecx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 005f4e05 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f4e07 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f4e08 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f4e09 call 0x5f4e70 */ esp -= 4; M32(esp) = 0x5f4e0eu; SAVEALL; F_005f4e70(c); ABI_CHECK(0x5f4e70u, 0x5f4e09u); RETCHK(0x5f4e0eu, 0x5f4e09u); LOADALL;
  /* 005f4e0e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f4e11:;
  /* 005f4e11 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f4e12 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f4e13 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005f4e15 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f4e16 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f4e17 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4e1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f4c40(CPU *c) {
  NATIVE_HOOK(0x5f4c40u) REGS; LOADALL;
  goto L_005f4c40;
L_005f4c36:;
  /* 005f4c36 mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 005f4c3a mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 005f4c3e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
L_005f4c40:;
  /* 005f4c40 mov ecx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 005f4c44 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f4c46 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 005f4c48 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f4c4a mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005f4c4c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f4c4e mov edi, edx */ { edi = (u32)(edx); }
  /* 005f4c50 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f4c53 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005f4c55 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005f4c57 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4c5a rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 005f4c5c mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 005f4c60 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 005f4c62 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 005f4c64 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f4c66 mov edi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edi = (u32)(M32(m_)); }
  /* 005f4c6a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4c6b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f4c6d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f4c6f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f4c70 mov edx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edx = (u32)(M32(m_)); }
  /* 005f4c74 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f4c75 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f4c76 call 0x5f4e20 */ esp -= 4; M32(esp) = 0x5f4c7bu; SAVEALL; F_005f4e20(c); ABI_CHECK(0x5f4e20u, 0x5f4c76u); RETCHK(0x5f4c7bu, 0x5f4c76u); LOADALL;
  /* 005f4c7b mov ecx, dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 005f4c7f mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 005f4c83 mov ebx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ebx = (u32)(M32(m_)); }
  /* 005f4c87 add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f4c89 mov dword ptr [esp + 0x4c], ecx */ { const u32 m_ = (u32)(esp + 0x4cu); M32(m_) = (u32)(ecx); }
  /* 005f4c8d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4c8f mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4c92 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4c95 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f4c96 add edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f4c98 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4c9a mov dword ptr [esp + 0x2c], eax */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(eax); }
  /* 005f4c9e mov dword ptr [esp + 0x30], edi */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(edi); }
  /* 005f4ca2 jb 0x5f4c36 */ if (CF_) goto L_005f4c36;
  /* 005f4ca4 mov ebx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebx = (u32)(M32(m_)); }
  /* 005f4ca8 mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 005f4cac cmp byte ptr [eax + 0xd], 1 */ { const u32 m_ = (u32)(eax + 0xdu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f4cb0 jbe 0x5f4e11 */ if ((CF_|ZF_)) goto L_005f4e11;
  /* 005f4cb6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4cb7 call 0x5f5380 */ esp -= 4; M32(esp) = 0x5f4cbcu; SAVEALL; F_005f5380(c); ABI_CHECK(0x5f5380u, 0x5f4cb7u); RETCHK(0x5f4cbcu, 0x5f4cb7u); LOADALL;
  /* 005f4cbc mov esi, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); esi = (u32)(M32(m_)); }
  /* 005f4cc0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4cc3 mov dword ptr [esp + 0x2c], 0 */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(0x0u); }
  /* 005f4ccb mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4cce test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f4cd0 jbe 0x5f4d56 */ if ((CF_|ZF_)) goto L_005f4d56;
  /* 005f4cd6 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005f4cda mov dword ptr [esp + 0x40], edx */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(edx); }
  /* 005f4cde mov edx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); edx = (u32)(M32(m_)); }
  /* 005f4ce2 mov dword ptr [esp + 0x1c], edx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edx); }
L_005f4ce6:;
  /* 005f4ce6 mov edi, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); edi = (u32)(M32(m_)); }
  /* 005f4cea mov dword ptr [esp + 0x30], ebp */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(ebp); }
  /* 005f4cee test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f4cf0 mov dword ptr [esp + 0x34], edi */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(edi); }
  /* 005f4cf4 je 0x5f4d30 */ if (ZF_) goto L_005f4d30;
L_005f4cf6:;
  /* 005f4cf6 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f4cf8 mov esi, edx */ { esi = (u32)(edx); }
  /* 005f4cfa mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005f4cfc add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f4cfe shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f4d01 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f4d03 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005f4d05 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4d08 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f4d0a mov esi, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); esi = (u32)(M32(m_)); }
  /* 005f4d0e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4d10 mov edi, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edi = (u32)(M32(m_)); }
  /* 005f4d14 mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4d17 imul ecx, eax */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f4d1a add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f4d1c mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 005f4d20 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f4d22 mov dword ptr [esp + 0x34], edi */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(edi); }
  /* 005f4d26 mov dword ptr [esp + 0x30], ecx */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(ecx); }
  /* 005f4d2a jne 0x5f4cf6 */ if (!ZF_) goto L_005f4cf6;
  /* 005f4d2c mov ebx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebx = (u32)(M32(m_)); }
L_005f4d30:;
  /* 005f4d30 mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 005f4d34 mov edi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edi = (u32)(M32(m_)); }
  /* 005f4d38 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005f4d3c add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f4d3e mov dword ptr [esp + 0x40], ecx */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(ecx); }
  /* 005f4d42 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4d44 mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4d47 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f4d48 add edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f4d4a cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4d4c mov dword ptr [esp + 0x2c], edi */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(edi); }
  /* 005f4d50 mov dword ptr [esp + 0x1c], edx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edx); }
  /* 005f4d54 jb 0x5f4ce6 */ if (CF_) goto L_005f4ce6;
L_005f4d56:;
  /* 005f4d56 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4d58 mov edi, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); edi = (u32)(M32(m_)); }
  /* 005f4d5c mov cl, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4d5f mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005f4d63 imul ecx, ebp */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)ebp; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f4d66 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f4d68 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f4d6c shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f4d6f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f4d71 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005f4d73 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4d74 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4d77 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f4d79 call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f4d7eu; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f4d79u); RETCHK(0x5f4d7eu, 0x5f4d79u); LOADALL;
  /* 005f4d7e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4d81 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005f4d83 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f4d84 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f4d85 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f4d86 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f4d87 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4d8a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f4e11:;
  /* 005f4e11 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f4e12 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f4e13 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005f4e15 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f4e16 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f4e17 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4e1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f4e20(CPU *c) {
  NATIVE_HOOK(0x5f4e20u) REGS; LOADALL;
L_005f4e20:;
  /* 005f4e20 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f4e24 mov cl, byte ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4e28 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f4e29 sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f4e2b movsx esi, cl */ { esi = (u32)((u32)sxt((ecx & 0xffu), 1) & 0xffffffffu); }
  /* 005f4e2e cdq */ edx = (u32)((s32)eax >> 31);
  /* 005f4e2f idiv esi */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, esi, &q_, &r_, 0x5f4e2fu); eax = q_; edx = r_; }
  /* 005f4e31 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f4e33 cmp cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f4e36 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f4e37 jne 0x5f4e4d */ if (!ZF_) goto L_005f4e4d;
  /* 005f4e39 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f4e3d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4e3e mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f4e42 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4e43 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f4e44 call 0x5f4f80 */ esp -= 4; M32(esp) = 0x5f4e49u; SAVEALL; F_005f4f80(c); ABI_CHECK(0x5f4f80u, 0x5f4e44u); RETCHK(0x5f4e49u, 0x5f4e44u); LOADALL;
  /* 005f4e49 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4e4c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f4e4d:;
  /* 005f4e4d cmp cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f4e50 jne 0x5f4e66 */ if (!ZF_) goto L_005f4e66;
  /* 005f4e52 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f4e56 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4e57 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f4e5b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f4e5c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4e5d call 0x5eb7c0 */ esp -= 4; M32(esp) = 0x5f4e62u; SAVEALL; F_005eb7c0(c); ABI_CHECK(0x5eb7c0u, 0x5f4e5du); RETCHK(0x5f4e62u, 0x5f4e5du); LOADALL;
  /* 005f4e62 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4e65 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f4e66:;
  /* 005f4e66 mov eax, edx */ { eax = (u32)(edx); }
  /* 005f4e68 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f4e70(CPU *c) {
  NATIVE_HOOK(0x5f4e70u) REGS; LOADALL;
L_005f4e70:;
  /* 005f4e70 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f4e74 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f4e75 mov cl, byte ptr [edx + 0xd] */ { const u32 m_ = (u32)(edx + 0xdu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f4e78 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005f4e7a and eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f4e7f lea esi, [eax + eax*8] */ esi = (u32)((u32)(eax + eax * 8u));
  /* 005f4e82 mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f4e85 shl esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 005f4e88 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f4e8a div esi */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, esi, &q_, &r_, 0x5f4e8au); eax = q_; edx = r_; }
  /* 005f4e8c cmp cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f4e8f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f4e90 jne 0x5f4ea6 */ if (!ZF_) goto L_005f4ea6;
  /* 005f4e92 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f4e96 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4e97 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f4e9b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4e9c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f4e9d call 0x5f4ec0 */ esp -= 4; M32(esp) = 0x5f4ea2u; SAVEALL; F_005f4ec0(c); ABI_CHECK(0x5f4ec0u, 0x5f4e9du); RETCHK(0x5f4ea2u, 0x5f4e9du); LOADALL;
  /* 005f4ea2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4ea5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f4ea6:;
  /* 005f4ea6 cmp cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f4ea9 jne 0x5f4ebe */ if (!ZF_) goto L_005f4ebe;
  /* 005f4eab mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f4eaf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4eb0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f4eb4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f4eb5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4eb6 call 0x5f5070 */ esp -= 4; M32(esp) = 0x5f4ebbu; SAVEALL; F_005f5070(c); ABI_CHECK(0x5f5070u, 0x5f4eb6u); RETCHK(0x5f4ebbu, 0x5f4eb6u); LOADALL;
  /* 005f4ebb add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f4ebe:;
  /* 005f4ebe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f4ec0(CPU *c) {
  NATIVE_HOOK(0x5f4ec0u) REGS; LOADALL;
L_005f4ec0:;
  /* 005f4ec0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f4ec1 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f4ec5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f4ec6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f4ec7 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 005f4ecb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f4ecc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f4ecd mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 005f4ed1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f4ed3 je 0x5f4f66 */ if (ZF_) goto L_005f4f66;
L_005f4ed9:;
  /* 005f4ed9 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005f4edd add ebp, 4 */ { u32 a_ = ebp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005f4ee0 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f4ee1 mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 005f4ee5 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005f4ee8 movsx ecx, ax */ { ecx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 005f4eeb shr eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f4eee and eax, 0x7f */ { u32 a_ = eax, b_ = 0x7fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f4ef1 mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 005f4ef5 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f4ef9 jl 0x5f4f71 */ if (LT_) goto L_005f4f71;
  /* 005f4efb cmp eax, 0x58 */ { u32 a_ = eax, b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4efe jg 0x5f4f71 */ if (!(ZF_|LT_)) goto L_005f4f71;
  /* 005f4f00 mov word ptr [edi], cx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 005f4f03 add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f4f06 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4f08 mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
L_005f4f0c:;
  /* 005f4f0c mov esi, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); esi = (u32)(M32(m_)); }
  /* 005f4f0f add ebp, 4 */ { u32 a_ = ebp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005f4f12 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f4f14 cmp ecx, 7 */ { u32 a_ = ecx, b_ = 0x7u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4f17 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005f4f1a add eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f4f1d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f4f1f jle 0x5f4f50 */ if ((ZF_|LT_)) goto L_005f4f50;
  /* 005f4f21 mov ebx, eax */ { ebx = (u32)(eax); }
L_005f4f23:;
  /* 005f4f23 lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 005f4f27 mov edx, esi */ { edx = (u32)(esi); }
  /* 005f4f29 lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 005f4f2d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f4f2e and edx, 0xf */ { u32 a_ = edx, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f4f31 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f4f32 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f4f33 call 0x5f5260 */ esp -= 4; M32(esp) = 0x5f4f38u; SAVEALL; F_005f5260(c); ABI_CHECK(0x5f5260u, 0x5f4f33u); RETCHK(0x5f4f38u, 0x5f4f33u); LOADALL;
  /* 005f4f38 mov ax, word ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f4f3d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4f40 mov word ptr [edi], ax */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f4f43 add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f4f46 shr esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 005f4f49 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f4f4a jne 0x5f4f23 */ if (!ZF_) goto L_005f4f23;
  /* 005f4f4c mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
L_005f4f50:;
  /* 005f4f50 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f4f51 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4f54 mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 005f4f58 jl 0x5f4f0c */ if (LT_) goto L_005f4f0c;
  /* 005f4f5a mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005f4f5e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f4f60 jne 0x5f4ed9 */ if (!ZF_) goto L_005f4ed9;
L_005f4f66:;
  /* 005f4f66 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f4f67 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f4f68 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f4f69 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f4f6e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f4f6f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005f4f70 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f4f71:;
  /* 005f4f71 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f4f72 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f4f73 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f4f74 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f4f76 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f4f77 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005f4f78 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f4f80(CPU *c) {
  NATIVE_HOOK(0x5f4f80u) REGS; LOADALL;
L_005f4f80:;
  /* 005f4f80 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f4f83 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f4f87 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f4f88 mov ebx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebx = (u32)(M32(m_)); }
  /* 005f4f8c mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005f4f90 lea ecx, [eax + 0x3f] */ ecx = (u32)((u32)(eax + 0x3fu));
  /* 005f4f93 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f4f95 shr ecx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f4f98 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f4f99 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 005f4f9d lea edx, [ecx + ecx*8] */ edx = (u32)((u32)(ecx + ecx * 8u));
  /* 005f4fa0 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 005f4fa4 shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f4fa7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f4fa9 mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 005f4fad je 0x5f505e */ if (ZF_) goto L_005f505e;
  /* 005f4fb3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f4fb4 mov dword ptr [esp + 0xc], ecx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005f4fb8 jmp 0x5f4fbe */ goto L_005f4fbe;
L_005f4fba:;
  /* 005f4fba mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
L_005f4fbe:;
  /* 005f4fbe movsx ecx, word ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f4fc1 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 005f4fc5 mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 005f4fc9 shl eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f4fcc and ecx, 0xffff */ { u32 a_ = ecx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f4fd2 add ebx, 2 */ { u32 a_ = ebx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005f4fd5 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f4fd6 or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f4fd8 mov dword ptr [esp + 0x24], esi */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(esi); }
  /* 005f4fdc mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 005f4fde add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f4fe1 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005f4fe3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f4fe5 mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
L_005f4fe9:;
  /* 005f4fe9 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 005f4fed shr esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 005f4ff0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f4ff2 jle 0x5f5006 */ if ((ZF_|LT_)) goto L_005f5006;
  /* 005f4ff4 cmp eax, 0x3f */ { u32 a_ = eax, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f4ff7 jge 0x5f5006 */ if (!LT_) goto L_005f5006;
  /* 005f4ff9 movsx eax, word ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f4ffc add ebx, 2 */ { u32 a_ = ebx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005f4fff dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f5000 mov dword ptr [esp + 0x24], ecx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ecx); }
  /* 005f5004 jmp 0x5f5008 */ goto L_005f5008;
L_005f5006:;
  /* 005f5006 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005f5008:;
  /* 005f5008 lea ecx, [esp + 0x1c] */ ecx = (u32)((u32)(esp + 0x1cu));
  /* 005f500c lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 005f5010 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f5011 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f5012 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f5013 call 0x5f51a0 */ esp -= 4; M32(esp) = 0x5f5018u; SAVEALL; F_005f51a0(c); ABI_CHECK(0x5f51a0u, 0x5f5013u); RETCHK(0x5f5018u, 0x5f5013u); LOADALL;
  /* 005f5018 and eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f501d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5020 shl eax, 0x1c */ { u32 n_ = (28u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f5023 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005f5025 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005f5029 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f502b and ecx, 7 */ { u32 a_ = ecx, b_ = 0x7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f502e cmp cl, 7 */ { u32 a_ = (ecx & 0xffu), b_ = 0x7u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005f5031 jne 0x5f503a */ if (!ZF_) goto L_005f503a;
  /* 005f5033 mov dword ptr [edi], esi */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(esi); }
  /* 005f5035 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f5038 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_005f503a:;
  /* 005f503a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f503b cmp eax, 0x40 */ { u32 a_ = eax, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f503e mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 005f5042 jl 0x5f4fe9 */ if (LT_) goto L_005f4fe9;
  /* 005f5044 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f5048 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f5049 mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 005f504d jne 0x5f4fba */ if (!ZF_) goto L_005f4fba;
  /* 005f5053 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f5057 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5058 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f5059 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f505a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f505d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f505e:;
  /* 005f505e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f505f mov eax, edx */ { eax = (u32)(edx); }
  /* 005f5061 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f5062 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5065 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5070(CPU *c) {
  NATIVE_HOOK(0x5f5070u) REGS; LOADALL;
L_005f5070:;
  /* 005f5070 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f5074 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5077 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5079 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f507a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f507b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f507c mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 005f5080 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f5081 mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 005f5085 je 0x5f5181 */ if (ZF_) goto L_005f5181;
L_005f508b:;
  /* 005f508b mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005f508d mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f5090 mov ebp, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebp = (u32)(M32(m_)); }
  /* 005f5094 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f5097 movsx edx, ax */ { edx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 005f509a movsx ebx, cx */ { ebx = (u32)((u32)sxt((ecx & 0xffffu), 2) & 0xffffffffu); }
  /* 005f509d shr eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f50a0 shr ecx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f50a3 and eax, 0x7f */ { u32 a_ = eax, b_ = 0x7fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f50a6 dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f50a7 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f50aa and ecx, 0x7f */ { u32 a_ = ecx, b_ = 0x7fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f50ad test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f50af mov dword ptr [esp + 0x2c], ebp */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ebp); }
  /* 005f50b3 mov dword ptr [esp + 0x24], edx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(edx); }
  /* 005f50b7 mov dword ptr [esp + 0x28], ebx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ebx); }
  /* 005f50bb mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 005f50bf mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 005f50c3 jl 0x5f518e */ if (LT_) goto L_005f518e;
  /* 005f50c9 cmp eax, 0x58 */ { u32 a_ = eax, b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f50cc jg 0x5f518e */ if (!(ZF_|LT_)) goto L_005f518e;
  /* 005f50d2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f50d4 jl 0x5f518e */ if (LT_) goto L_005f518e;
  /* 005f50da cmp ecx, 0x58 */ { u32 a_ = ecx, b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f50dd jg 0x5f518e */ if (!(ZF_|LT_)) goto L_005f518e;
  /* 005f50e3 mov word ptr [esi], dx */ { const u32 m_ = (u32)(esi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 005f50e6 add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f50e9 mov word ptr [esi], bx */ { const u32 m_ = (u32)(esi); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 005f50ec add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f50ef xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f50f1 mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
L_005f50f5:;
  /* 005f50f5 mov ebx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (u32)(M32(m_)); }
  /* 005f50f7 mov ebp, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebp = (u32)(M32(m_)); }
  /* 005f50fa add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f50fd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f50ff add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f5102 cmp ecx, 7 */ { u32 a_ = ecx, b_ = 0x7u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5105 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005f5108 add eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f510b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f510d jle 0x5f516b */ if ((ZF_|LT_)) goto L_005f516b;
  /* 005f510f mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
L_005f5113:;
  /* 005f5113 lea eax, [esp + 0x18] */ eax = (u32)((u32)(esp + 0x18u));
  /* 005f5117 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005f5119 lea ecx, [esp + 0x24] */ ecx = (u32)((u32)(esp + 0x24u));
  /* 005f511d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f511e and edx, 0xf */ { u32 a_ = edx, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f5121 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f5122 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f5123 call 0x5f5260 */ esp -= 4; M32(esp) = 0x5f5128u; SAVEALL; F_005f5260(c); ABI_CHECK(0x5f5260u, 0x5f5123u); RETCHK(0x5f5128u, 0x5f5123u); LOADALL;
  /* 005f5128 lea eax, [esp + 0x28] */ eax = (u32)((u32)(esp + 0x28u));
  /* 005f512c mov edx, ebp */ { edx = (u32)(ebp); }
  /* 005f512e lea ecx, [esp + 0x34] */ ecx = (u32)((u32)(esp + 0x34u));
  /* 005f5132 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f5133 and edx, 0xf */ { u32 a_ = edx, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f5136 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f5137 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f5138 call 0x5f5260 */ esp -= 4; M32(esp) = 0x5f513du; SAVEALL; F_005f5260(c); ABI_CHECK(0x5f5260u, 0x5f5138u); RETCHK(0x5f513du, 0x5f5138u); LOADALL;
  /* 005f513d mov ax, word ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f5142 mov cx, word ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f5147 mov word ptr [esi], ax */ { const u32 m_ = (u32)(esi); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f514a mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 005f514e add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f5151 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5154 shr ebx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 005f5157 mov word ptr [esi], cx */ { const u32 m_ = (u32)(esi); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 005f515a add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f515d shr ebp, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 005f5160 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f5161 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f5165 jne 0x5f5113 */ if (!ZF_) goto L_005f5113;
  /* 005f5167 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
L_005f516b:;
  /* 005f516b inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f516c cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f516f mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 005f5173 jl 0x5f50f5 */ if (LT_) goto L_005f50f5;
  /* 005f5175 mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005f5179 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f517b jne 0x5f508b */ if (!ZF_) goto L_005f508b;
L_005f5181:;
  /* 005f5181 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f5182 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5183 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f5184 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f5189 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f518a add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f518d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f518e:;
  /* 005f518e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f518f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5190 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f5191 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f5193 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f5194 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5197 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f51a0(CPU *c) {
  NATIVE_HOOK(0x5f51a0u) REGS; LOADALL;
L_005f51a0:;
  /* 005f51a0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f51a1 mov ebx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 005f51a5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f51a6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f51a7 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 005f51a9 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 005f51ad movsx esi, word ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f51b2 movsx ecx, word ptr [eax*2 + 0x67db40] */ { const u32 m_ = (u32)(eax * 2u + 0x67db40u); ecx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f51ba mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005f51bc mov edx, esi */ { edx = (u32)(esi); }
  /* 005f51be sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f51c0 mov al, 0 */ { eax = (eax & 0xffffff00u) | ((u32)(0x0u) & 0xffu); }
  /* 005f51c2 mov byte ptr [esp + 0x10], al */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005f51c6 jns 0x5f51d0 */ if (!SF_) goto L_005f51d0;
  /* 005f51c8 mov al, 8 */ { eax = (eax & 0xffffff00u) | ((u32)(0x8u) & 0xffu); }
  /* 005f51ca mov byte ptr [esp + 0x10], al */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005f51ce neg edx */ { u32 a_ = edx; u32 r_ = (0u - a_) & 0xffffffffu; edx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
L_005f51d0:;
  /* 005f51d0 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f51d2 jl 0x5f51dc */ if (LT_) goto L_005f51dc;
  /* 005f51d4 or al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f51d6 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f51d8 mov byte ptr [esp + 0x10], al */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)((eax & 0xffu)); }
L_005f51dc:;
  /* 005f51dc sar ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f51de cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f51e0 jl 0x5f51ea */ if (LT_) goto L_005f51ea;
  /* 005f51e2 or al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f51e4 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f51e6 mov byte ptr [esp + 0x10], al */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)((eax & 0xffu)); }
L_005f51ea:;
  /* 005f51ea sar ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f51ec cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f51ee jl 0x5f51f8 */ if (LT_) goto L_005f51f8;
  /* 005f51f0 or al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f51f2 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f51f4 mov byte ptr [esp + 0x10], al */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)((eax & 0xffu)); }
L_005f51f8:;
  /* 005f51f8 sar ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f51fa test al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f51fc je 0x5f5206 */ if (ZF_) goto L_005f5206;
  /* 005f51fe sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f5200 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f5202 mov dword ptr [edi], esi */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(esi); }
  /* 005f5204 jmp 0x5f520c */ goto L_005f520c;
L_005f5206:;
  /* 005f5206 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f5208 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f520a mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
L_005f520c:;
  /* 005f520c mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 005f520e cmp ecx, 0x7fff */ { u32 a_ = ecx, b_ = 0x7fffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5214 jle 0x5f521e */ if ((ZF_|LT_)) goto L_005f521e;
  /* 005f5216 mov dword ptr [edi], 0x7fff */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x7fffu); }
  /* 005f521c jmp 0x5f522c */ goto L_005f522c;
L_005f521e:;
  /* 005f521e cmp ecx, 0xffff8000 */ { u32 a_ = ecx, b_ = 0xffff8000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5224 jge 0x5f522c */ if (!LT_) goto L_005f522c;
  /* 005f5226 mov dword ptr [edi], 0xffff8000 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0xffff8000u); }
L_005f522c:;
  /* 005f522c mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f5230 and ecx, 0xff */ { u32 a_ = ecx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f5236 movsx edx, word ptr [ecx*2 + 0x67db20] */ { const u32 m_ = (u32)(ecx * 2u + 0x67db20u); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f523e mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 005f5240 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f5242 mov dword ptr [ebx], ecx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(ecx); }
  /* 005f5244 jns 0x5f5250 */ if (!SF_) goto L_005f5250;
  /* 005f5246 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f5247 mov dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x0u); }
  /* 005f524d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f524e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f524f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f5250:;
  /* 005f5250 cmp ecx, 0x58 */ { u32 a_ = ecx, b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5253 jle 0x5f525b */ if ((ZF_|LT_)) goto L_005f525b;
  /* 005f5255 mov dword ptr [ebx], 0x58 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x58u); }
L_005f525b:;
  /* 005f525b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f525c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f525d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f525e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5260(CPU *c) {
  NATIVE_HOOK(0x5f5260u) REGS; LOADALL;
L_005f5260:;
  /* 005f5260 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f5264 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f5265 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005f5269 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f526a mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 005f526c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005f526e and ecx, 7 */ { u32 a_ = ecx, b_ = 0x7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f5271 movsx eax, word ptr [eax*2 + 0x67db40] */ { const u32 m_ = (u32)(eax * 2u + 0x67db40u); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f5279 lea ecx, [ecx + ecx + 1] */ ecx = (u32)((u32)(ecx + ecx + 0x1u));
  /* 005f527d imul eax, ecx */ { s64 p_ = (s64)(s32)eax * (s64)(s32)ecx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f5280 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f5284 shr eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f5287 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 005f5289 test bl, 8 */ { u32 a_ = (ebx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f528c je 0x5f5292 */ if (ZF_) goto L_005f5292;
  /* 005f528e sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f5290 jmp 0x5f5294 */ goto L_005f5294;
L_005f5292:;
  /* 005f5292 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_005f5294:;
  /* 005f5294 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f5296 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 005f5298 cmp eax, 0xffff8000 */ { u32 a_ = eax, b_ = 0xffff8000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f529d jge 0x5f52a7 */ if (!LT_) goto L_005f52a7;
  /* 005f529f mov dword ptr [ecx], 0xffff8000 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0xffff8000u); }
  /* 005f52a5 jmp 0x5f52b4 */ goto L_005f52b4;
L_005f52a7:;
  /* 005f52a7 cmp eax, 0x7fff */ { u32 a_ = eax, b_ = 0x7fffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f52ac jle 0x5f52b4 */ if ((ZF_|LT_)) goto L_005f52b4;
  /* 005f52ae mov dword ptr [ecx], 0x7fff */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x7fffu); }
L_005f52b4:;
  /* 005f52b4 movsx eax, word ptr [ebx*2 + 0x67db20] */ { const u32 m_ = (u32)(ebx * 2u + 0x67db20u); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f52bc mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 005f52be pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f52bf add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f52c1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f52c2 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005f52c4 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005f52c6 jns 0x5f52cf */ if (!SF_) goto L_005f52cf;
  /* 005f52c8 mov dword ptr [edx], 0 */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0x0u); }
  /* 005f52ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f52cf:;
  /* 005f52cf cmp eax, 0x58 */ { u32 a_ = eax, b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f52d2 jle 0x5f52da */ if ((ZF_|LT_)) goto L_005f52da;
  /* 005f52d4 mov dword ptr [edx], 0x58 */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0x58u); }
L_005f52da:;
  /* 005f52da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f52e0(CPU *c) {
  NATIVE_HOOK(0x5f52e0u) REGS; LOADALL;
L_005f52e0:;
  /* 005f52e0 push 0x40805 */ { u32 v_ = 0x40805u; esp -= 4; M32(esp) = v_; }
  /* 005f52e5 push 0x693be8 */ { u32 v_ = 0x693be8u; esp -= 4; M32(esp) = v_; }
  /* 005f52ea push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f52ec push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005f52ee push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005f52f0 push 0x5c */ { u32 v_ = 0x5cu; esp -= 4; M32(esp) = v_; }
  /* 005f52f2 mov dword ptr [0x693c0c], 1 */ { const u32 m_ = (u32)(0x693c0cu); M32(m_) = (u32)(0x1u); }
  /* 005f52fc call 0x5f1780 */ esp -= 4; M32(esp) = 0x5f5301u; SAVEALL; F_005f1780(c); ABI_CHECK(0x5f1780u, 0x5f52fcu); RETCHK(0x5f5301u, 0x5f52fcu); LOADALL;
  /* 005f5301 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5304 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5306 je 0x5f530e */ if (ZF_) goto L_005f530e;
  /* 005f5308 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f530d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f530e:;
  /* 005f530e mov dword ptr [0x693c0c], 0 */ { const u32 m_ = (u32)(0x693c0cu); M32(m_) = (u32)(0x0u); }
  /* 005f5318 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f531a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5320(CPU *c) {
  NATIVE_HOOK(0x5f5320u) REGS; LOADALL;
L_005f5320:;
  /* 005f5320 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f5322 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f5324 push 0x5f5350 */ { u32 v_ = 0x5f5350u; esp -= 4; M32(esp) = v_; }
  /* 005f5329 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f532b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f532d call 0x5f6490 */ esp -= 4; M32(esp) = 0x5f5332u; SAVEALL; F_005f6490(c); ABI_CHECK(0x5f6490u, 0x5f532du); RETCHK(0x5f5332u, 0x5f532du); LOADALL;
  /* 005f5332 push 0x693be8 */ { u32 v_ = 0x693be8u; esp -= 4; M32(esp) = v_; }
  /* 005f5337 call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f533cu; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f5337u); RETCHK(0x5f533cu, 0x5f5337u); LOADALL;
  /* 005f533c add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f533f mov dword ptr [0x693c0c], 0 */ { const u32 m_ = (u32)(0x693c0cu); M32(m_) = (u32)(0x0u); }
  /* 005f5349 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5350(CPU *c) {
  NATIVE_HOOK(0x5f5350u) REGS; LOADALL;
L_005f5350:;
  /* 005f5350 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f5354 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f5355 lea edi, [eax + 0x20] */ edi = (u32)((u32)(eax + 0x20u));
  /* 005f5358 mov eax, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); eax = (u32)(M32(m_)); }
  /* 005f535b cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f535d je 0x5f5375 */ if (ZF_) goto L_005f5375;
  /* 005f535f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_005f5360:;
  /* 005f5360 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 005f5362 add eax, -0x40 */ { u32 a_ = eax, b_ = 0xffffffc0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f5365 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f5366 call 0x5f5570 */ esp -= 4; M32(esp) = 0x5f536bu; SAVEALL; F_005f5570(c); ABI_CHECK(0x5f5570u, 0x5f5366u); RETCHK(0x5f536bu, 0x5f5366u); LOADALL;
  /* 005f536b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f536e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5370 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f5372 jne 0x5f5360 */ if (!ZF_) goto L_005f5360;
  /* 005f5374 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_005f5375:;
  /* 005f5375 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f5377 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f5378 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5380(CPU *c) {
  NATIVE_HOOK(0x5f5380u) REGS; LOADALL;
L_005f5380:;
  /* 005f5380 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5381 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f5385 push 0x63c330 */ { u32 v_ = 0x63c330u; esp -= 4; M32(esp) = v_; }
  /* 005f538a mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f538d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f538e call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f5393u; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f538eu); RETCHK(0x5f5393u, 0x5f538eu); LOADALL;
  /* 005f5393 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5396 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5398 jne 0x5f53a2 */ if (!ZF_) goto L_005f53a2;
  /* 005f539a mov al, byte ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f539d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f539e shr eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f53a1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f53a2:;
  /* 005f53a2 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f53a5 push 0x63c320 */ { u32 v_ = 0x63c320u; esp -= 4; M32(esp) = v_; }
  /* 005f53aa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f53ab call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f53b0u; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f53abu); RETCHK(0x5f53b0u, 0x5f53abu); LOADALL;
  /* 005f53b0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f53b3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f53b5 jne 0x5f53be */ if (!ZF_) goto L_005f53be;
  /* 005f53b7 mov eax, 0x10 */ { eax = (u32)(0x10u); }
  /* 005f53bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f53bd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f53be:;
  /* 005f53be mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f53c1 push 0x63c340 */ { u32 v_ = 0x63c340u; esp -= 4; M32(esp) = v_; }
  /* 005f53c6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f53c7 call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f53ccu; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f53c7u); RETCHK(0x5f53ccu, 0x5f53c7u); LOADALL;
  /* 005f53cc add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f53cf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f53d1 jne 0x5f53da */ if (!ZF_) goto L_005f53da;
  /* 005f53d3 mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 005f53d8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f53d9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f53da:;
  /* 005f53da mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f53dd push 0x63c350 */ { u32 v_ = 0x63c350u; esp -= 4; M32(esp) = v_; }
  /* 005f53e2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f53e3 call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f53e8u; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f53e3u); RETCHK(0x5f53e8u, 0x5f53e3u); LOADALL;
  /* 005f53e8 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f53eb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f53ed jne 0x5f53f6 */ if (!ZF_) goto L_005f53f6;
  /* 005f53ef mov eax, 8 */ { eax = (u32)(0x8u); }
  /* 005f53f4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f53f5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f53f6:;
  /* 005f53f6 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f53f9 push 0x63c360 */ { u32 v_ = 0x63c360u; esp -= 4; M32(esp) = v_; }
  /* 005f53fe push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f53ff call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f5404u; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f53ffu); RETCHK(0x5f5404u, 0x5f53ffu); LOADALL;
  /* 005f5404 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5407 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5409 je 0x5f5460 */ if (ZF_) goto L_005f5460;
  /* 005f540b mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f540e push 0x63c3c0 */ { u32 v_ = 0x63c3c0u; esp -= 4; M32(esp) = v_; }
  /* 005f5413 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f5414 call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f5419u; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f5414u); RETCHK(0x5f5419u, 0x5f5414u); LOADALL;
  /* 005f5419 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f541c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f541e je 0x5f5460 */ if (ZF_) goto L_005f5460;
  /* 005f5420 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f5423 push 0x63c380 */ { u32 v_ = 0x63c380u; esp -= 4; M32(esp) = v_; }
  /* 005f5428 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f5429 call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f542eu; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f5429u); RETCHK(0x5f542eu, 0x5f5429u); LOADALL;
  /* 005f542e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5431 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5433 jne 0x5f545c */ if (!ZF_) goto L_005f545c;
  /* 005f5435 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f5438 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f543a je 0x5f5440 */ if (ZF_) goto L_005f5440;
  /* 005f543c mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005f543e jmp 0x5f5445 */ goto L_005f5445;
L_005f5440:;
  /* 005f5440 mov eax, 0x1f400 */ { eax = (u32)(0x1f400u); }
L_005f5445:;
  /* 005f5445 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 005f5447 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5449 jne 0x5f5450 */ if (!ZF_) goto L_005f5450;
  /* 005f544b mov esi, 0xbb80 */ { esi = (u32)(0xbb80u); }
L_005f5450:;
  /* 005f5450 lea eax, [eax + eax*8] */ eax = (u32)((u32)(eax + eax * 8u));
  /* 005f5453 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f5455 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f5458 div esi */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, esi, &q_, &r_, 0x5f5458u); eax = q_; edx = r_; }
  /* 005f545a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f545b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f545c:;
  /* 005f545c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f545e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f545f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f5460:;
  /* 005f5460 mov al, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f5463 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5464 dec al */ { u32 a_ = (eax & 0xffu); u32 r_ = (a_ - 1u) & 0xffu; eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 005f5466 neg al */ { u32 a_ = (eax & 0xffu); u32 r_ = (0u - a_) & 0xffu; eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 005f5468 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005f546a and al, 0xe0 */ { u32 a_ = (eax & 0xffu), b_ = 0xe0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f546c add eax, 0x24 */ { u32 a_ = eax, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f546f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5470(CPU *c) {
  NATIVE_HOOK(0x5f5470u) REGS; LOADALL;
L_005f5470:;
  /* 005f5470 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5471 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f5475 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f5476 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f5478 test byte ptr [esi + 0x18], 2 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f547c jne 0x5f548e */ if (!ZF_) goto L_005f548e;
  /* 005f547e mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f5481 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5483 je 0x5f548e */ if (ZF_) goto L_005f548e;
  /* 005f5485 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f5486 call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f548bu; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f5486u); RETCHK(0x5f548bu, 0x5f5486u); LOADALL;
  /* 005f548b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f548e:;
  /* 005f548e mov dword ptr [esi + 0x10], edi */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edi); }
  /* 005f5491 mov dword ptr [esi + 0x14], edi */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edi); }
  /* 005f5494 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f5495 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5496 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f54a0(CPU *c) {
  NATIVE_HOOK(0x5f54a0u) REGS; LOADALL;
L_005f54a0:;
  /* 005f54a0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f54a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f54a5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f54a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f54aa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f54ab call 0x5f1be0 */ esp -= 4; M32(esp) = 0x5f54b0u; SAVEALL; F_005f1be0(c); ABI_CHECK(0x5f1be0u, 0x5f54abu); RETCHK(0x5f54b0u, 0x5f54abu); LOADALL;
  /* 005f54b0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f54b3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f54b5 jne 0x5f54b9 */ if (!ZF_) goto L_005f54b9;
  /* 005f54b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f54b8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f54b9:;
  /* 005f54b9 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f54bd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f54be push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f54bf call 0x5f1bb0 */ esp -= 4; M32(esp) = 0x5f54c4u; SAVEALL; F_005f1bb0(c); ABI_CHECK(0x5f1bb0u, 0x5f54bfu); RETCHK(0x5f54c4u, 0x5f54bfu); LOADALL;
  /* 005f54c4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f54c7 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005f54c9 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005f54cb and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f54cd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f54ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f54d0(CPU *c) {
  NATIVE_HOOK(0x5f54d0u) REGS; LOADALL;
L_005f54d0:;
  /* 005f54d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f54d1 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 005f54d5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f54d6 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f54d8 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f54da jne 0x5f5502 */ if (!ZF_) goto L_005f5502;
  /* 005f54dc push 0x30805 */ { u32 v_ = 0x30805u; esp -= 4; M32(esp) = v_; }
  /* 005f54e1 push 0x693be8 */ { u32 v_ = 0x693be8u; esp -= 4; M32(esp) = v_; }
  /* 005f54e6 call 0x5f1930 */ esp -= 4; M32(esp) = 0x5f54ebu; SAVEALL; F_005f1930(c); ABI_CHECK(0x5f1930u, 0x5f54e6u); RETCHK(0x5f54ebu, 0x5f54e6u); LOADALL;
  /* 005f54eb mov esi, eax */ { esi = (u32)(eax); }
  /* 005f54ed add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f54f0 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f54f2 jne 0x5f54f9 */ if (!ZF_) goto L_005f54f9;
  /* 005f54f4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f54f5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f54f7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f54f8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f54f9:;
  /* 005f54f9 mov dword ptr [esi + 0x48], 2 */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(0x2u); }
  /* 005f5500 jmp 0x5f5505 */ goto L_005f5505;
L_005f5502:;
  /* 005f5502 mov dword ptr [esi + 0x48], edi */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(edi); }
L_005f5505:;
  /* 005f5505 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5506 call 0x5f1c80 */ esp -= 4; M32(esp) = 0x5f550bu; SAVEALL; F_005f1c80(c); ABI_CHECK(0x5f1c80u, 0x5f5506u); RETCHK(0x5f550bu, 0x5f5506u); LOADALL;
  /* 005f550b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f550c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f550d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f550e mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
  /* 005f5511 mov dword ptr [esi + 0x10], edi */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edi); }
  /* 005f5514 mov dword ptr [esi + 0x14], edi */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edi); }
  /* 005f5517 mov dword ptr [esi + 0x1c], edi */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(edi); }
  /* 005f551a mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
  /* 005f551d mov dword ptr [esi + 0x20], edi */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edi); }
  /* 005f5520 mov dword ptr [esi + 0x34], edi */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(edi); }
  /* 005f5523 mov dword ptr [esi + 0x38], 4 */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(0x4u); }
  /* 005f552a mov dword ptr [esi + 0x3c], edi */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(edi); }
  /* 005f552d call 0x5f55f0 */ esp -= 4; M32(esp) = 0x5f5532u; SAVEALL; F_005f55f0(c); ABI_CHECK(0x5f55f0u, 0x5f552du); RETCHK(0x5f5532u, 0x5f552du); LOADALL;
  /* 005f5532 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f5536 lea ecx, [esi + 0x40] */ ecx = (u32)((u32)(esi + 0x40u));
  /* 005f5539 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f553c cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f553e mov dword ptr [esi + 0x44], edi */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(edi); }
  /* 005f5541 mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 005f5543 jne 0x5f554a */ if (!ZF_) goto L_005f554a;
  /* 005f5545 mov eax, dword ptr [0x9c003c] */ { const u32 m_ = (u32)(0x9c003cu); eax = (u32)(M32(m_)); }
L_005f554a:;
  /* 005f554a mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 005f554d mov edx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); edx = (u32)(M32(m_)); }
  /* 005f5550 add eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f5553 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005f5555 mov dword ptr [esi + 0x44], eax */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(eax); }
  /* 005f5558 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f5559 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005f555b mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005f555e mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f5560 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f5562 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5563 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5570(CPU *c) {
  NATIVE_HOOK(0x5f5570u) REGS; LOADALL;
L_005f5570:;
  /* 005f5570 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5571 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f5575 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f5577 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5578 call 0x5f1630 */ esp -= 4; M32(esp) = 0x5f557du; SAVEALL; F_005f1630(c); ABI_CHECK(0x5f1630u, 0x5f5578u); RETCHK(0x5f557du, 0x5f5578u); LOADALL;
  /* 005f557d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5580 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5582 je 0x5f5588 */ if (ZF_) goto L_005f5588;
  /* 005f5584 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f5586 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5587 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f5588:;
  /* 005f5588 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 005f558b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f558d je 0x5f5595 */ if (ZF_) goto L_005f5595;
  /* 005f558f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5590 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x5f5592u; SAVEALL; call_ind(c, t_); RETCHK(0x5f5592u, 0x5f5590u); LOADALL; }
  /* 005f5592 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f5595:;
  /* 005f5595 mov eax, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 005f5598 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f559a je 0x5f55a5 */ if (ZF_) goto L_005f55a5;
  /* 005f559c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f559d call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f55a2u; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f559du); RETCHK(0x5f55a2u, 0x5f559du); LOADALL;
  /* 005f55a2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f55a5:;
  /* 005f55a5 test byte ptr [esi + 0x48], 1 */ { const u32 m_ = (u32)(esi + 0x48u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f55a9 je 0x5f55b7 */ if (ZF_) goto L_005f55b7;
  /* 005f55ab mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 005f55ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f55af call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f55b4u; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f55afu); RETCHK(0x5f55b4u, 0x5f55afu); LOADALL;
  /* 005f55b4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f55b7:;
  /* 005f55b7 mov ecx, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ecx = (u32)(M32(m_)); }
  /* 005f55ba mov edx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); edx = (u32)(M32(m_)); }
  /* 005f55bd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f55be mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005f55c0 mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 005f55c3 mov ecx, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ecx = (u32)(M32(m_)); }
  /* 005f55c6 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005f55c9 call 0x5f1c00 */ esp -= 4; M32(esp) = 0x5f55ceu; SAVEALL; F_005f1c00(c); ABI_CHECK(0x5f1c00u, 0x5f55c9u); RETCHK(0x5f55ceu, 0x5f55c9u); LOADALL;
  /* 005f55ce mov al, byte ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f55d1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f55d4 test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f55d6 je 0x5f55e6 */ if (ZF_) goto L_005f55e6;
  /* 005f55d8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f55d9 push 0x693be8 */ { u32 v_ = 0x693be8u; esp -= 4; M32(esp) = v_; }
  /* 005f55de call 0x5f1a50 */ esp -= 4; M32(esp) = 0x5f55e3u; SAVEALL; F_005f1a50(c); ABI_CHECK(0x5f1a50u, 0x5f55deu); RETCHK(0x5f55e3u, 0x5f55deu); LOADALL;
  /* 005f55e3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f55e6:;
  /* 005f55e6 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f55eb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f55ec ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f55f0(CPU *c) {
  NATIVE_HOOK(0x5f55f0u) REGS; LOADALL;
L_005f55f0:;
  /* 005f55f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f55f1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f55f5 test byte ptr [esi + 0x48], 1 */ { const u32 m_ = (u32)(esi + 0x48u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f55f9 je 0x5f5613 */ if (ZF_) goto L_005f5613;
  /* 005f55fb mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 005f55fe test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5600 je 0x5f560b */ if (ZF_) goto L_005f560b;
  /* 005f5602 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f5603 call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f5608u; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f5603u); RETCHK(0x5f5608u, 0x5f5603u); LOADALL;
  /* 005f5608 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f560b:;
  /* 005f560b mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 005f560e and al, 0xfe */ { u32 a_ = (eax & 0xffu), b_ = 0xfeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f5610 mov dword ptr [esi + 0x48], eax */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(eax); }
L_005f5613:;
  /* 005f5613 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f5617 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f561b mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
  /* 005f561e mov dword ptr [esi + 0x24], ecx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ecx); }
  /* 005f5621 mov dword ptr [esi + 0x2c], 0 */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(0x0u); }
  /* 005f5628 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5629 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5630(CPU *c) {
  NATIVE_HOOK(0x5f5630u) REGS; LOADALL;
L_005f5630:;
  /* 005f5630 push 0x4080b */ { u32 v_ = 0x4080bu; esp -= 4; M32(esp) = v_; }
  /* 005f5635 push 0x693c14 */ { u32 v_ = 0x693c14u; esp -= 4; M32(esp) = v_; }
  /* 005f563a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f563c push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005f563e mov eax, 0x693c38 */ { eax = (u32)(0x693c38u); }
  /* 005f5643 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005f5645 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 005f5647 mov dword ptr [0x693c38], eax */ { const u32 m_ = (u32)(0x693c38u); M32(m_) = (u32)(eax); }
  /* 005f564c mov dword ptr [0x693c3c], eax */ { const u32 m_ = (u32)(0x693c3cu); M32(m_) = (u32)(eax); }
  /* 005f5651 mov dword ptr [0x693c10], 0 */ { const u32 m_ = (u32)(0x693c10u); M32(m_) = (u32)(0x0u); }
  /* 005f565b call 0x5f1780 */ esp -= 4; M32(esp) = 0x5f5660u; SAVEALL; F_005f1780(c); ABI_CHECK(0x5f1780u, 0x5f565bu); RETCHK(0x5f5660u, 0x5f565bu); LOADALL;
  /* 005f5660 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5663 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5665 je 0x5f56a8 */ if (ZF_) goto L_005f56a8;
  /* 005f5667 mov eax, dword ptr [0x9c003c] */ { const u32 m_ = (u32)(0x9c003cu); eax = (u32)(M32(m_)); }
  /* 005f566c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f566e push 0x5f56c0 */ { u32 v_ = 0x5f56c0u; esp -= 4; M32(esp) = v_; }
  /* 005f5673 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f5675 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f5677 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f5679 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f567a mov dword ptr [0x693c6c], 1 */ { const u32 m_ = (u32)(0x693c6cu); M32(m_) = (u32)(0x1u); }
  /* 005f5684 call 0x5f5710 */ esp -= 4; M32(esp) = 0x5f5689u; SAVEALL; F_005f5710(c); ABI_CHECK(0x5f5710u, 0x5f5684u); RETCHK(0x5f5689u, 0x5f5684u); LOADALL;
  /* 005f5689 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f568c mov dword ptr [0x693c68], eax */ { const u32 m_ = (u32)(0x693c68u); M32(m_) = (u32)(eax); }
  /* 005f5691 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5693 je 0x5f569b */ if (ZF_) goto L_005f569b;
  /* 005f5695 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f569a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f569b:;
  /* 005f569b push 0x693c14 */ { u32 v_ = 0x693c14u; esp -= 4; M32(esp) = v_; }
  /* 005f56a0 call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f56a5u; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f56a0u); RETCHK(0x5f56a5u, 0x5f56a0u); LOADALL;
  /* 005f56a5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f56a8:;
  /* 005f56a8 mov dword ptr [0x693c6c], 0 */ { const u32 m_ = (u32)(0x693c6cu); M32(m_) = (u32)(0x0u); }
  /* 005f56b2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f56b4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f56c0(CPU *c) {
  NATIVE_HOOK(0x5f56c0u) REGS; LOADALL;
L_005f56c0:;
  /* 005f56c0 mov eax, 0x693c40 */ { eax = (u32)(0x693c40u); }
  /* 005f56c5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f56d0(CPU *c) {
  NATIVE_HOOK(0x5f56d0u) REGS; LOADALL;
L_005f56d0:;
  /* 005f56d0 mov eax, dword ptr [0x693c68] */ { const u32 m_ = (u32)(0x693c68u); eax = (u32)(M32(m_)); }
  /* 005f56d5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f56d7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f56d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f56da mov dword ptr [0x693c10], 1 */ { const u32 m_ = (u32)(0x693c10u); M32(m_) = (u32)(0x1u); }
  /* 005f56e4 call 0x5f5b50 */ esp -= 4; M32(esp) = 0x5f56e9u; SAVEALL; F_005f5b50(c); ABI_CHECK(0x5f5b50u, 0x5f56e4u); RETCHK(0x5f56e9u, 0x5f56e4u); LOADALL;
  /* 005f56e9 push 0x693c14 */ { u32 v_ = 0x693c14u; esp -= 4; M32(esp) = v_; }
  /* 005f56ee mov dword ptr [0x693c68], 0 */ { const u32 m_ = (u32)(0x693c68u); M32(m_) = (u32)(0x0u); }
  /* 005f56f8 call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f56fdu; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f56f8u); RETCHK(0x5f56fdu, 0x5f56f8u); LOADALL;
  /* 005f56fd add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5700 mov dword ptr [0x693c6c], 0 */ { const u32 m_ = (u32)(0x693c6cu); M32(m_) = (u32)(0x0u); }
  /* 005f570a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5710(CPU *c) {
  NATIVE_HOOK(0x5f5710u) REGS; LOADALL;
L_005f5710:;
  /* 005f5710 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f5714 mov eax, dword ptr [0x693c68] */ { const u32 m_ = (u32)(0x693c68u); eax = (u32)(M32(m_)); }
  /* 005f5719 sub esp, 0x208 */ { u32 a_ = esp, b_ = 0x208u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f571f and ecx, 7 */ { u32 a_ = ecx, b_ = 0x7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f5722 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5724 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f5725 mov ebx, dword ptr [esp + 0x210] */ { const u32 m_ = (u32)(esp + 0x210u); ebx = (u32)(M32(m_)); }
  /* 005f572c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f572d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f572e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f572f mov dword ptr [esp + 0x224], ecx */ { const u32 m_ = (u32)(esp + 0x224u); M32(m_) = (u32)(ecx); }
  /* 005f5736 je 0x5f5771 */ if (ZF_) goto L_005f5771;
  /* 005f5738 mov eax, dword ptr [esp + 0x220] */ { const u32 m_ = (u32)(esp + 0x220u); eax = (u32)(M32(m_)); }
  /* 005f573f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5741 jne 0x5f574f */ if (!ZF_) goto L_005f574f;
  /* 005f5743 call 0x5f5d90 */ esp -= 4; M32(esp) = 0x5f5748u; SAVEALL; F_005f5d90(c); ABI_CHECK(0x5f5d90u, 0x5f5743u); RETCHK(0x5f5748u, 0x5f5743u); LOADALL;
  /* 005f5748 mov dword ptr [esp + 0x220], eax */ { const u32 m_ = (u32)(esp + 0x220u); M32(m_) = (u32)(eax); }
L_005f574f:;
  /* 005f574f mov eax, dword ptr [esp + 0x220] */ { const u32 m_ = (u32)(esp + 0x220u); eax = (u32)(M32(m_)); }
  /* 005f5756 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f5757 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f5759 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f575a call 0x5f6400 */ esp -= 4; M32(esp) = 0x5f575fu; SAVEALL; F_005f6400(c); ABI_CHECK(0x5f6400u, 0x5f575au); RETCHK(0x5f575fu, 0x5f575au); LOADALL;
  /* 005f575f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5762 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5764 jne 0x5f5771 */ if (!ZF_) goto L_005f5771;
  /* 005f5766 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f5767 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5768 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f5769 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f576a add esp, 0x208 */ { u32 a_ = esp, b_ = 0x208u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5770 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f5771:;
  /* 005f5771 mov edi, dword ptr [esp + 0x228] */ { const u32 m_ = (u32)(esp + 0x228u); edi = (u32)(M32(m_)); }
  /* 005f5778 mov dword ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0x0u); }
  /* 005f5780 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5782 jne 0x5f57cd */ if (!ZF_) goto L_005f57cd;
  /* 005f5784 mov ax, word ptr [ebx + 0x44] */ { const u32 m_ = (u32)(ebx + 0x44u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f5788 lea edi, [esp + 0x18] */ edi = (u32)((u32)(esp + 0x18u));
  /* 005f578c cmp ax, 0x200 */ { u32 a_ = (eax & 0xffffu), b_ = 0x200u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 005f5790 jbe 0x5f57ba */ if ((CF_|ZF_)) goto L_005f57ba;
  /* 005f5792 and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f5797 push 0x1080b */ { u32 v_ = 0x1080bu; esp -= 4; M32(esp) = v_; }
  /* 005f579c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f579d call 0x5f2440 */ esp -= 4; M32(esp) = 0x5f57a2u; SAVEALL; F_005f2440(c); ABI_CHECK(0x5f2440u, 0x5f579du); RETCHK(0x5f57a2u, 0x5f579du); LOADALL;
  /* 005f57a2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f57a5 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f57a9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f57ab jne 0x5f57b8 */ if (!ZF_) goto L_005f57b8;
  /* 005f57ad pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f57ae pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f57af pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f57b0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f57b1 add esp, 0x208 */ { u32 a_ = esp, b_ = 0x208u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f57b7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f57b8:;
  /* 005f57b8 mov edi, eax */ { edi = (u32)(eax); }
L_005f57ba:;
  /* 005f57ba mov eax, dword ptr [ebx + 0x3c] */ { const u32 m_ = (u32)(ebx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 005f57bd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f57bf je 0x5f57cb */ if (ZF_) goto L_005f57cb;
  /* 005f57c1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f57c2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f57c4 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x5f57c6u; SAVEALL; call_ind(c, t_); RETCHK(0x5f57c6u, 0x5f57c4u); LOADALL; }
  /* 005f57c6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f57c9 jmp 0x5f57cd */ goto L_005f57cd;
L_005f57cb:;
  /* 005f57cb xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_005f57cd:;
  /* 005f57cd mov eax, dword ptr [esp + 0x224] */ { const u32 m_ = (u32)(esp + 0x224u); eax = (u32)(M32(m_)); }
  /* 005f57d4 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 005f57d8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f57d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f57da push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f57db call 0x5f5990 */ esp -= 4; M32(esp) = 0x5f57e0u; SAVEALL; F_005f5990(c); ABI_CHECK(0x5f5990u, 0x5f57dbu); RETCHK(0x5f57e0u, 0x5f57dbu); LOADALL;
  /* 005f57e0 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 005f57e2 mov eax, dword ptr [esp + 0x238] */ { const u32 m_ = (u32)(esp + 0x238u); eax = (u32)(M32(m_)); }
  /* 005f57e9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f57ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f57ee je 0x5f58cf */ if (ZF_) goto L_005f58cf;
  /* 005f57f4 mov ecx, dword ptr [esp + 0x230] */ { const u32 m_ = (u32)(esp + 0x230u); ecx = (u32)(M32(m_)); }
  /* 005f57fb push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f57fc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f57fd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f57fe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f57ff call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x5f5801u; SAVEALL; call_ind(c, t_); RETCHK(0x5f5801u, 0x5f57ffu); LOADALL; }
  /* 005f5801 mov esi, eax */ { esi = (u32)(eax); }
  /* 005f5803 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5806 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5808 je 0x5f58cf */ if (ZF_) goto L_005f58cf;
  /* 005f580e mov eax, dword ptr [esp + 0x224] */ { const u32 m_ = (u32)(esp + 0x224u); eax = (u32)(M32(m_)); }
  /* 005f5815 or al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f5817 mov dword ptr [esp + 0x224], eax */ { const u32 m_ = (u32)(esp + 0x224u); M32(m_) = (u32)(eax); }
L_005f581e:;
  /* 005f581e mov ebp, dword ptr [esp + 0x220] */ { const u32 m_ = (u32)(esp + 0x220u); ebp = (u32)(M32(m_)); }
  /* 005f5825 mov dword ptr [esi + 0x24], ebp */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ebp); }
  /* 005f5828 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f582c mov ecx, dword ptr [esp + 0x224] */ { const u32 m_ = (u32)(esp + 0x224u); ecx = (u32)(M32(m_)); }
  /* 005f5833 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f5834 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f5835 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f5836 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5837 call 0x5f5a50 */ esp -= 4; M32(esp) = 0x5f583cu; SAVEALL; F_005f5a50(c); ABI_CHECK(0x5f5a50u, 0x5f5837u); RETCHK(0x5f583cu, 0x5f5837u); LOADALL;
  /* 005f583c mov eax, dword ptr [0x693c68] */ { const u32 m_ = (u32)(0x693c68u); eax = (u32)(M32(m_)); }
  /* 005f5841 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5844 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5846 je 0x5f585d */ if (ZF_) goto L_005f585d;
  /* 005f5848 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f584b lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 005f584e lea ecx, [esi + 0x14] */ ecx = (u32)((u32)(esi + 0x14u));
  /* 005f5851 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 005f5854 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005f5856 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005f5858 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005f585b mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
L_005f585d:;
  /* 005f585d mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005f585f mov eax, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); eax = (u32)(M32(m_)); }
  /* 005f5862 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5864 je 0x5f590a */ if (ZF_) goto L_005f590a;
  /* 005f586a mov ecx, dword ptr [esp + 0x230] */ { const u32 m_ = (u32)(esp + 0x230u); ecx = (u32)(M32(m_)); }
  /* 005f5871 mov edx, dword ptr [esp + 0x22c] */ { const u32 m_ = (u32)(esp + 0x22cu); edx = (u32)(M32(m_)); }
  /* 005f5878 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f5879 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f587a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f587b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f587c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f587d call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x5f587fu; SAVEALL; call_ind(c, t_); RETCHK(0x5f587fu, 0x5f587du); LOADALL; }
  /* 005f587f add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5882 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5884 jne 0x5f590a */ if (!ZF_) goto L_005f590a;
  /* 005f588a mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f588e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5890 je 0x5f589b */ if (ZF_) goto L_005f589b;
  /* 005f5892 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f5893 call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f5898u; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f5893u); RETCHK(0x5f5898u, 0x5f5893u); LOADALL;
  /* 005f5898 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f589b:;
  /* 005f589b mov eax, dword ptr [0x693c68] */ { const u32 m_ = (u32)(0x693c68u); eax = (u32)(M32(m_)); }
  /* 005f58a0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f58a2 je 0x5f58b5 */ if (ZF_) goto L_005f58b5;
  /* 005f58a4 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f58a7 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f58aa mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f58ac mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 005f58af mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f58b2 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
L_005f58b5:;
  /* 005f58b5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f58b7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f58b9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f58ba call 0x5f6370 */ esp -= 4; M32(esp) = 0x5f58bfu; SAVEALL; F_005f6370(c); ABI_CHECK(0x5f6370u, 0x5f58bau); RETCHK(0x5f58bfu, 0x5f58bau); LOADALL;
  /* 005f58bf add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f58c2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f58c4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f58c5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f58c6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f58c7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f58c8 add esp, 0x208 */ { u32 a_ = esp, b_ = 0x208u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f58ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f58cf:;
  /* 005f58cf push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f58d0 lea edx, [esp + 0x228] */ edx = (u32)((u32)(esp + 0x228u));
  /* 005f58d7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f58d8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f58d9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f58da call 0x5f5950 */ esp -= 4; M32(esp) = 0x5f58dfu; SAVEALL; F_005f5950(c); ABI_CHECK(0x5f5950u, 0x5f58dau); RETCHK(0x5f58dfu, 0x5f58dau); LOADALL;
  /* 005f58df mov esi, eax */ { esi = (u32)(eax); }
  /* 005f58e1 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f58e4 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f58e6 jne 0x5f581e */ if (!ZF_) goto L_005f581e;
  /* 005f58ec mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f58f0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f58f2 je 0x5f58fd */ if (ZF_) goto L_005f58fd;
  /* 005f58f4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f58f5 call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f58fau; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f58f5u); RETCHK(0x5f58fau, 0x5f58f5u); LOADALL;
  /* 005f58fa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f58fd:;
  /* 005f58fd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f58fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f58ff pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f5900 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f5902 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f5903 add esp, 0x208 */ { u32 a_ = esp, b_ = 0x208u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5909 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f590a:;
  /* 005f590a mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f590e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5910 je 0x5f591b */ if (ZF_) goto L_005f591b;
  /* 005f5912 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f5913 call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f5918u; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f5913u); RETCHK(0x5f5918u, 0x5f5913u); LOADALL;
  /* 005f5918 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f591b:;
  /* 005f591b mov ecx, dword ptr [0x693c38] */ { const u32 m_ = (u32)(0x693c38u); ecx = (u32)(M32(m_)); }
  /* 005f5921 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 005f5924 mov dword ptr [esi + 8], 0x693c38 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x693c38u); }
  /* 005f592b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f592c mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f592e mov edx, dword ptr [0x693c38] */ { const u32 m_ = (u32)(0x693c38u); edx = (u32)(M32(m_)); }
  /* 005f5934 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f5937 mov dword ptr [0x693c38], eax */ { const u32 m_ = (u32)(0x693c38u); M32(m_) = (u32)(eax); }
  /* 005f593c mov eax, esi */ { eax = (u32)(esi); }
  /* 005f593e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f593f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f5940 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f5941 add esp, 0x208 */ { u32 a_ = esp, b_ = 0x208u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5947 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5950(CPU *c) {
  NATIVE_HOOK(0x5f5950u) REGS; LOADALL;
L_005f5950:;
  /* 005f5950 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f5954 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5955 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f5959 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f595a mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005f595c mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 005f5960 mov ecx, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ecx = (u32)(M32(m_)); }
  /* 005f5963 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5965 jne 0x5f597f */ if (!ZF_) goto L_005f597f;
  /* 005f5967 shr eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f596a and eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f596d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f596e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f596f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5970 call 0x5f6270 */ esp -= 4; M32(esp) = 0x5f5975u; SAVEALL; F_005f6270(c); ABI_CHECK(0x5f6270u, 0x5f5970u); RETCHK(0x5f5975u, 0x5f5970u); LOADALL;
  /* 005f5975 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5978 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f597a jne 0x5f597f */ if (!ZF_) goto L_005f597f;
  /* 005f597c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f597d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f597e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f597f:;
  /* 005f597f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f5980 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5981 call 0x5f6320 */ esp -= 4; M32(esp) = 0x5f5986u; SAVEALL; F_005f6320(c); ABI_CHECK(0x5f6320u, 0x5f5981u); RETCHK(0x5f5986u, 0x5f5981u); LOADALL;
  /* 005f5986 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5989 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f598a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f598b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5990(CPU *c) {
  NATIVE_HOOK(0x5f5990u) REGS; LOADALL;
L_005f5990:;
  /* 005f5990 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5991 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f5992 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 005f5996 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5998 jne 0x5f599e */ if (!ZF_) goto L_005f599e;
  /* 005f599a lea edi, [esp + 0x14] */ edi = (u32)((u32)(esp + 0x14u));
L_005f599e:;
  /* 005f599e mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 005f59a2 mov eax, 0x28 */ { eax = (u32)(0x28u); }
  /* 005f59a7 test dword ptr [esi + 0x40], 0xfffffff */ { const u32 m_ = (u32)(esi + 0x40u); u32 a_ = M32(m_), b_ = 0xfffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f59ae jbe 0x5f5a0e */ if ((CF_|ZF_)) goto L_005f5a0e;
  /* 005f59b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f59b1 call 0x5f5c30 */ esp -= 4; M32(esp) = 0x5f59b6u; SAVEALL; F_005f5c30(c); ABI_CHECK(0x5f5c30u, 0x5f59b1u); RETCHK(0x5f59b6u, 0x5f59b1u); LOADALL;
  /* 005f59b6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f59b9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f59bb jne 0x5f59e9 */ if (!ZF_) goto L_005f59e9;
  /* 005f59bd mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 005f59c0 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f59c5 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f59c7 shr ecx, 0x1c */ { u32 n_ = (28u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f59ca shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f59cc cmp edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f59cf jne 0x5f59e9 */ if (!ZF_) goto L_005f59e9;
  /* 005f59d1 and eax, 0xfffffff */ { u32 a_ = eax, b_ = 0xfffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f59d6 mov dword ptr [esi + 0x40], eax */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(eax); }
  /* 005f59d9 movsx ecx, byte ptr [0x67cd24] */ { const u32 m_ = (u32)(0x67cd24u); ecx = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f59e0 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f59e1 shl ecx, 0x1c */ { u32 n_ = (28u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f59e4 or ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f59e6 mov dword ptr [esi + 0x40], ecx */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(ecx); }
L_005f59e9:;
  /* 005f59e9 mov ecx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); ecx = (u32)(M32(m_)); }
  /* 005f59ec mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f59f1 shr ecx, 0x1c */ { u32 n_ = (28u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f59f4 shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f59f6 lea ecx, [eax - 1] */ ecx = (u32)((u32)(eax + 0xffffffffu));
  /* 005f59f9 add eax, 0x27 */ { u32 a_ = eax, b_ = 0x27u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f59fc not ecx */ { ecx = (u32)(~ecx & 0xffffffffu); }
  /* 005f59fe and ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f5a00 mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 005f5a02 mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 005f5a05 and eax, 0xfffffff */ { u32 a_ = eax, b_ = 0xfffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f5a0a add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f5a0c jmp 0x5f5a14 */ goto L_005f5a14;
L_005f5a0e:;
  /* 005f5a0e mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
L_005f5a14:;
  /* 005f5a14 mov cl, byte ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f5a18 test cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f5a1b je 0x5f5a20 */ if (ZF_) goto L_005f5a20;
  /* 005f5a1d add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_005f5a20:;
  /* 005f5a20 test cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f5a23 je 0x5f5a3e */ if (ZF_) goto L_005f5a3e;
  /* 005f5a25 mov esi, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); esi = (u32)(M32(m_)); }
  /* 005f5a28 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f5a2a xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f5a2c mov dx, word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f5a30 mov cx, word ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f5a34 lea ecx, [ecx + ecx*2] */ ecx = (u32)((u32)(ecx + ecx * 2u));
  /* 005f5a37 lea edx, [eax + edx*8 + 8] */ edx = (u32)((u32)(eax + edx * 8u + 0x8u));
  /* 005f5a3b lea eax, [edx + ecx*4] */ eax = (u32)((u32)(edx + ecx * 4u));
L_005f5a3e:;
  /* 005f5a3e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f5a3f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5a40 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5a50(CPU *c) {
  NATIVE_HOOK(0x5f5a50u) REGS; LOADALL;
L_005f5a50:;
  /* 005f5a50 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f5a54 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f5a58 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5a59 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f5a5d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f5a5e mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005f5a62 lea edx, [esi + ecx] */ edx = (u32)((u32)(esi + ecx));
  /* 005f5a65 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005f5a67 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f5a69 mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005f5a6c mov dword ptr [esi + 0x20], edx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edx); }
  /* 005f5a6f je 0x5f5ad3 */ if (ZF_) goto L_005f5ad3;
  /* 005f5a71 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f5a72 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5a73 call 0x5f5b10 */ esp -= 4; M32(esp) = 0x5f5a78u; SAVEALL; F_005f5b10(c); ABI_CHECK(0x5f5b10u, 0x5f5a73u); RETCHK(0x5f5a78u, 0x5f5a73u); LOADALL;
  /* 005f5a78 lea ecx, [eax + 8] */ ecx = (u32)((u32)(eax + 0x8u));
  /* 005f5a7b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f5a7d mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f5a7f mov ebp, dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ebp = (u32)(M32(m_)); }
  /* 005f5a82 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5a85 mov dx, word ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f5a89 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f5a8a lea edx, [edx + edx*2] */ edx = (u32)((u32)(edx + edx * 2u));
  /* 005f5a8d lea edx, [ecx + edx*4] */ edx = (u32)((u32)(ecx + edx * 4u));
  /* 005f5a90 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f5a93 mov edx, dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); edx = (u32)(M32(m_)); }
  /* 005f5a96 mov dx, word ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f5a9a test dx, dx */ { u32 a_ = (edx & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f5a9d jbe 0x5f5ab3 */ if ((CF_|ZF_)) goto L_005f5ab3;
  /* 005f5a9f and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_005f5aa5:;
  /* 005f5aa5 mov dword ptr [ecx], ecx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ecx); }
  /* 005f5aa7 mov dword ptr [ecx + 4], ecx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005f5aaa mov dword ptr [ecx + 8], ecx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005f5aad add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f5ab0 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f5ab1 jne 0x5f5aa5 */ if (!ZF_) goto L_005f5aa5;
L_005f5ab3:;
  /* 005f5ab3 mov ecx, dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 005f5ab6 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f5ab9 mov cx, word ptr [ecx + 0xe] */ { const u32 m_ = (u32)(ecx + 0xeu); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f5abd test cx, cx */ { u32 a_ = (ecx & 0xffffu), b_ = (ecx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f5ac0 jbe 0x5f5ad3 */ if ((CF_|ZF_)) goto L_005f5ad3;
  /* 005f5ac2 and ecx, 0xffff */ { u32 a_ = ecx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_005f5ac8:;
  /* 005f5ac8 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 005f5aca mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f5acd add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f5ad0 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f5ad1 jne 0x5f5ac8 */ if (!ZF_) goto L_005f5ac8;
L_005f5ad3:;
  /* 005f5ad3 test byte ptr [esi + 0x1c], 2 */ { const u32 m_ = (u32)(esi + 0x1cu); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f5ad7 je 0x5f5af7 */ if (ZF_) goto L_005f5af7;
  /* 005f5ad9 mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005f5adc test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5ade je 0x5f5aee */ if (ZF_) goto L_005f5aee;
  /* 005f5ae0 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005f5ae2 mov eax, dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); eax = (u32)(M32(m_)); }
  /* 005f5ae5 and eax, 0xfffffff */ { u32 a_ = eax, b_ = 0xfffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f5aea add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f5aec jmp 0x5f5af1 */ goto L_005f5af1;
L_005f5aee:;
  /* 005f5aee lea eax, [esi + 0x28] */ eax = (u32)((u32)(esi + 0x28u));
L_005f5af1:;
  /* 005f5af1 mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
L_005f5af7:;
  /* 005f5af7 lea eax, [esi + 0xc] */ eax = (u32)((u32)(esi + 0xcu));
  /* 005f5afa mov dword ptr [esi + 0x18], 0 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x0u); }
  /* 005f5b01 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f5b04 mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 005f5b0b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f5b0c mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 005f5b0e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5b0f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5b10(CPU *c) {
  NATIVE_HOOK(0x5f5b10u) REGS; LOADALL;
L_005f5b10:;
  /* 005f5b10 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f5b14 mov ecx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005f5b17 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5b19 je 0x5f5b3e */ if (ZF_) goto L_005f5b3e;
  /* 005f5b1b mov dl, byte ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f5b1e mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005f5b20 test dl, 2 */ { u32 a_ = (edx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f5b23 je 0x5f5b33 */ if (ZF_) goto L_005f5b33;
  /* 005f5b25 mov edx, dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); edx = (u32)(M32(m_)); }
  /* 005f5b28 and edx, 0xfffffff */ { u32 a_ = edx, b_ = 0xfffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f5b2e lea eax, [edx + ecx + 4] */ eax = (u32)((u32)(edx + ecx + 0x4u));
  /* 005f5b32 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f5b33:;
  /* 005f5b33 mov eax, dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); eax = (u32)(M32(m_)); }
  /* 005f5b36 and eax, 0xfffffff */ { u32 a_ = eax, b_ = 0xfffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f5b3b add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f5b3d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f5b3e:;
  /* 005f5b3e test byte ptr [eax + 0x1c], 2 */ { const u32 m_ = (u32)(eax + 0x1cu); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f5b42 je 0x5f5b48 */ if (ZF_) goto L_005f5b48;
  /* 005f5b44 add eax, 0x2c */ { u32 a_ = eax, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f5b47 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f5b48:;
  /* 005f5b48 add eax, 0x28 */ { u32 a_ = eax, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f5b4b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5b50(CPU *c) {
  NATIVE_HOOK(0x5f5b50u) REGS; LOADALL;
L_005f5b50:;
  /* 005f5b50 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f5b51 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f5b52 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5b53 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005f5b57 mov ebx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebx = (u32)(M32(m_)); }
  /* 005f5b5b mov ebp, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebp = (u32)(M32(m_)); }
  /* 005f5b5f mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005f5b61 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f5b62 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f5b64 mov eax, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); eax = (u32)(M32(m_)); }
  /* 005f5b67 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5b69 je 0x5f5b73 */ if (ZF_) goto L_005f5b73;
  /* 005f5b6b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f5b6c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f5b6d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5b6e call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x5f5b70u; SAVEALL; call_ind(c, t_); RETCHK(0x5f5b70u, 0x5f5b6eu); LOADALL; }
  /* 005f5b70 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f5b73:;
  /* 005f5b73 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f5b76 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5b78 je 0x5f5b8e */ if (ZF_) goto L_005f5b8e;
  /* 005f5b7a mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005f5b7d mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005f5b7f mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 005f5b82 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f5b85 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f5b88 mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
  /* 005f5b8b mov dword ptr [esi + 0x14], edi */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edi); }
L_005f5b8e:;
  /* 005f5b8e mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f5b91 lea edx, [esi + 0xc] */ edx = (u32)((u32)(esi + 0xcu));
  /* 005f5b94 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5b96 je 0x5f5bad */ if (ZF_) goto L_005f5bad;
L_005f5b98:;
  /* 005f5b98 mov edi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edi = (u32)(M32(m_)); }
  /* 005f5b9b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f5b9d cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5b9f mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 005f5ba1 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 005f5ba3 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f5ba6 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f5ba9 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005f5bab jne 0x5f5b98 */ if (!ZF_) goto L_005f5b98;
L_005f5bad:;
  /* 005f5bad test byte ptr [esi + 0x1c], 1 */ { const u32 m_ = (u32)(esi + 0x1cu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f5bb1 je 0x5f5bc6 */ if (ZF_) goto L_005f5bc6;
  /* 005f5bb3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f5bb5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5bb6 call 0x5f5d40 */ esp -= 4; M32(esp) = 0x5f5bbbu; SAVEALL; F_005f5d40(c); ABI_CHECK(0x5f5d40u, 0x5f5bb6u); RETCHK(0x5f5bbbu, 0x5f5bb6u); LOADALL;
  /* 005f5bbb push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005f5bbd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5bbe call 0x5f5d40 */ esp -= 4; M32(esp) = 0x5f5bc3u; SAVEALL; F_005f5d40(c); ABI_CHECK(0x5f5d40u, 0x5f5bbeu); RETCHK(0x5f5bc3u, 0x5f5bbeu); LOADALL;
  /* 005f5bc3 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f5bc6:;
  /* 005f5bc6 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f5bc9 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f5bcc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f5bcd push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f5bce mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005f5bd0 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f5bd3 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f5bd6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5bd7 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005f5bda call 0x5f6370 */ esp -= 4; M32(esp) = 0x5f5bdfu; SAVEALL; F_005f6370(c); ABI_CHECK(0x5f6370u, 0x5f5bdau); RETCHK(0x5f5bdfu, 0x5f5bdau); LOADALL;
  /* 005f5bdf add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5be2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f5be3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5be4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f5be5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f5be6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5bf0(CPU *c) {
  NATIVE_HOOK(0x5f5bf0u) REGS; LOADALL;
L_005f5bf0:;
  /* 005f5bf0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f5bf1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5bf2 mov esi, dword ptr [0x693c38] */ { const u32 m_ = (u32)(0x693c38u); esi = (u32)(M32(m_)); }
  /* 005f5bf8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f5bf9 cmp esi, 0x693c38 */ { u32 a_ = esi, b_ = 0x693c38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5bff je 0x5f5c21 */ if (ZF_) goto L_005f5c21;
  /* 005f5c01 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 005f5c05 mov ebx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebx = (u32)(M32(m_)); }
L_005f5c09:;
  /* 005f5c09 lea eax, [esi - 4] */ eax = (u32)((u32)(esi + 0xfffffffcu));
  /* 005f5c0c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f5c0d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f5c0e call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x5f5c10u; SAVEALL; call_ind(c, t_); RETCHK(0x5f5c10u, 0x5f5c0eu); LOADALL; }
  /* 005f5c10 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5c13 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5c15 je 0x5f5c21 */ if (ZF_) goto L_005f5c21;
  /* 005f5c17 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 005f5c19 cmp esi, 0x693c38 */ { u32 a_ = esi, b_ = 0x693c38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5c1f jne 0x5f5c09 */ if (!ZF_) goto L_005f5c09;
L_005f5c21:;
  /* 005f5c21 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f5c22 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5c23 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f5c24 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5c30(CPU *c) {
  NATIVE_HOOK(0x5f5c30u) REGS; LOADALL;
L_005f5c30:;
  /* 005f5c30 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f5c34 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f5c35 push 0x5f5c50 */ { u32 v_ = 0x5f5c50u; esp -= 4; M32(esp) = v_; }
  /* 005f5c3a push 0x693c38 */ { u32 v_ = 0x693c38u; esp -= 4; M32(esp) = v_; }
  /* 005f5c3f call 0x5f1da0 */ esp -= 4; M32(esp) = 0x5f5c44u; SAVEALL; F_005f1da0(c); ABI_CHECK(0x5f1da0u, 0x5f5c3fu); RETCHK(0x5f5c44u, 0x5f5c3fu); LOADALL;
  /* 005f5c44 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5c47 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5c50(CPU *c) {
  NATIVE_HOOK(0x5f5c50u) REGS; LOADALL;
L_005f5c50:;
  /* 005f5c50 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f5c54 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5c55 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 005f5c59 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f5c5b mov edx, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 005f5c5e cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5c60 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5c61 setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005f5c64 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f5c65 and eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f5c67 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5c70(CPU *c) {
  NATIVE_HOOK(0x5f5c70u) REGS; LOADALL;
L_005f5c70:;
  /* 005f5c70 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f5c71 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005f5c75 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5c76 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f5c77 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f5c78 call 0x5f5b10 */ esp -= 4; M32(esp) = 0x5f5c7du; SAVEALL; F_005f5b10(c); ABI_CHECK(0x5f5b10u, 0x5f5c78u); RETCHK(0x5f5c7du, 0x5f5c78u); LOADALL;
  /* 005f5c7d mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005f5c81 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5c84 cmp ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5c87 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f5c8b jne 0x5f5ce3 */ if (!ZF_) goto L_005f5ce3;
  /* 005f5c8d mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005f5c8f lea ecx, [ecx + ecx*2] */ ecx = (u32)((u32)(ecx + ecx * 2u));
  /* 005f5c92 mov esi, dword ptr [edx + ecx*4] */ { const u32 m_ = (u32)(edx + ecx * 4u); esi = (u32)(M32(m_)); }
  /* 005f5c95 mov edi, dword ptr [edx + ecx*4 + 4] */ { const u32 m_ = (u32)(edx + ecx * 4u + 0x4u); edi = (u32)(M32(m_)); }
  /* 005f5c99 lea eax, [edx + ecx*4] */ eax = (u32)((u32)(edx + ecx * 4u));
  /* 005f5c9c cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5c9e je 0x5f5d2c */ if (ZF_) goto L_005f5d2c;
L_005f5ca4:;
  /* 005f5ca4 mov ecx, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005f5ca7 mov edx, dword ptr [esi - 8] */ { const u32 m_ = (u32)(esi + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 005f5caa lea eax, [esi - 0x14] */ eax = (u32)((u32)(esi + 0xffffffecu));
  /* 005f5cad mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 005f5caf mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005f5cb1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f5cb2 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f5cb5 mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 005f5cb8 push 0x693c14 */ { u32 v_ = 0x693c14u; esp -= 4; M32(esp) = v_; }
  /* 005f5cbd mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f5cc0 mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005f5cc3 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 005f5cc6 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005f5cc8 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f5ccb mov edx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edx = (u32)(M32(m_)); }
  /* 005f5cce mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f5cd1 call 0x5f1a50 */ esp -= 4; M32(esp) = 0x5f5cd6u; SAVEALL; F_005f1a50(c); ABI_CHECK(0x5f1a50u, 0x5f5cd1u); RETCHK(0x5f5cd6u, 0x5f5cd1u); LOADALL;
  /* 005f5cd6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5cd9 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5cdb jne 0x5f5ca4 */ if (!ZF_) goto L_005f5ca4;
  /* 005f5cdd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f5cde mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005f5ce0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5ce1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f5ce2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f5ce3:;
  /* 005f5ce3 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f5ce6 mov esi, dword ptr [eax + ecx*8] */ { const u32 m_ = (u32)(eax + ecx * 8u); esi = (u32)(M32(m_)); }
  /* 005f5ce9 mov edi, dword ptr [eax + ecx*8 + 4] */ { const u32 m_ = (u32)(eax + ecx * 8u + 0x4u); edi = (u32)(M32(m_)); }
  /* 005f5ced lea eax, [eax + ecx*8] */ eax = (u32)((u32)(eax + ecx * 8u));
  /* 005f5cf0 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5cf2 je 0x5f5d2c */ if (ZF_) goto L_005f5d2c;
L_005f5cf4:;
  /* 005f5cf4 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f5cf7 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005f5cf9 lea eax, [esi - 0xc] */ eax = (u32)((u32)(esi + 0xfffffff4u));
  /* 005f5cfc mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 005f5cfe mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005f5d00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f5d01 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f5d04 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f5d07 push 0x693c14 */ { u32 v_ = 0x693c14u; esp -= 4; M32(esp) = v_; }
  /* 005f5d0c mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005f5d0f mov edx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edx = (u32)(M32(m_)); }
  /* 005f5d12 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f5d15 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005f5d17 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 005f5d1a mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005f5d1d mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005f5d20 call 0x5f1a50 */ esp -= 4; M32(esp) = 0x5f5d25u; SAVEALL; F_005f1a50(c); ABI_CHECK(0x5f1a50u, 0x5f5d20u); RETCHK(0x5f5d25u, 0x5f5d20u); LOADALL;
  /* 005f5d25 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5d28 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5d2a jne 0x5f5cf4 */ if (!ZF_) goto L_005f5cf4;
L_005f5d2c:;
  /* 005f5d2c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f5d2d mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005f5d2f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5d30 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f5d31 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5d40(CPU *c) {
  NATIVE_HOOK(0x5f5d40u) REGS; LOADALL;
L_005f5d40:;
  /* 005f5d40 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f5d41 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005f5d45 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f5d46 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 005f5d4a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5d4b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f5d4c xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f5d4e cmp ebp, 1 */ { u32 a_ = ebp, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5d51 jne 0x5f5d5e */ if (!ZF_) goto L_005f5d5e;
  /* 005f5d53 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 005f5d55 mov ecx, dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 005f5d58 mov di, word ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f5d5c jmp 0x5f5d67 */ goto L_005f5d67;
L_005f5d5e:;
  /* 005f5d5e mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 005f5d60 mov eax, dword ptr [edx + 0x4c] */ { const u32 m_ = (u32)(edx + 0x4cu); eax = (u32)(M32(m_)); }
  /* 005f5d63 mov di, word ptr [eax + 0xe] */ { const u32 m_ = (u32)(eax + 0xeu); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
L_005f5d67:;
  /* 005f5d67 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005f5d69 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5d6b jbe 0x5f5d7d */ if ((CF_|ZF_)) goto L_005f5d7d;
L_005f5d6d:;
  /* 005f5d6d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f5d6e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5d6f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f5d70 call 0x5f5c70 */ esp -= 4; M32(esp) = 0x5f5d75u; SAVEALL; F_005f5c70(c); ABI_CHECK(0x5f5c70u, 0x5f5d70u); RETCHK(0x5f5d75u, 0x5f5d70u); LOADALL;
  /* 005f5d75 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5d78 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f5d79 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5d7b jb 0x5f5d6d */ if (CF_) goto L_005f5d6d;
L_005f5d7d:;
  /* 005f5d7d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f5d7e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5d7f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f5d80 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f5d81 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5d90(CPU *c) {
  NATIVE_HOOK(0x5f5d90u) REGS; LOADALL;
L_005f5d90:;
  /* 005f5d90 mov eax, dword ptr [0x693c68] */ { const u32 m_ = (u32)(0x693c68u); eax = (u32)(M32(m_)); }
  /* 005f5d95 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5da0(CPU *c) {
  NATIVE_HOOK(0x5f5da0u) REGS; LOADALL;
L_005f5da0:;
  /* 005f5da0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5da1 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005f5da3 push 0x40809 */ { u32 v_ = 0x40809u; esp -= 4; M32(esp) = v_; }
  /* 005f5da8 push 0x693d1c */ { u32 v_ = 0x693d1cu; esp -= 4; M32(esp) = v_; }
  /* 005f5dad push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5dae push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005f5db0 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005f5db2 push 0x5c */ { u32 v_ = 0x5cu; esp -= 4; M32(esp) = v_; }
  /* 005f5db4 mov dword ptr [0x693c70], esi */ { const u32 m_ = (u32)(0x693c70u); M32(m_) = (u32)(esi); }
  /* 005f5dba mov dword ptr [0x693d44], 1 */ { const u32 m_ = (u32)(0x693d44u); M32(m_) = (u32)(0x1u); }
  /* 005f5dc4 call 0x5f1780 */ esp -= 4; M32(esp) = 0x5f5dc9u; SAVEALL; F_005f1780(c); ABI_CHECK(0x5f1780u, 0x5f5dc4u); RETCHK(0x5f5dc9u, 0x5f5dc4u); LOADALL;
  /* 005f5dc9 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5dcc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5dce je 0x5f5e89 */ if (ZF_) goto L_005f5e89;
  /* 005f5dd4 push 0x40809 */ { u32 v_ = 0x40809u; esp -= 4; M32(esp) = v_; }
  /* 005f5dd9 push 0x693c74 */ { u32 v_ = 0x693c74u; esp -= 4; M32(esp) = v_; }
  /* 005f5dde push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5ddf push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005f5de1 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005f5de3 push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 005f5de5 call 0x5f1780 */ esp -= 4; M32(esp) = 0x5f5deau; SAVEALL; F_005f1780(c); ABI_CHECK(0x5f1780u, 0x5f5de5u); RETCHK(0x5f5deau, 0x5f5de5u); LOADALL;
  /* 005f5dea add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5ded test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5def je 0x5f5e7c */ if (ZF_) goto L_005f5e7c;
  /* 005f5df5 push 0x40809 */ { u32 v_ = 0x40809u; esp -= 4; M32(esp) = v_; }
  /* 005f5dfa push 0x693c98 */ { u32 v_ = 0x693c98u; esp -= 4; M32(esp) = v_; }
  /* 005f5dff push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5e00 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005f5e02 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005f5e04 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005f5e06 call 0x5f1780 */ esp -= 4; M32(esp) = 0x5f5e0bu; SAVEALL; F_005f1780(c); ABI_CHECK(0x5f1780u, 0x5f5e06u); RETCHK(0x5f5e0bu, 0x5f5e06u); LOADALL;
  /* 005f5e0b add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5e0e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5e10 je 0x5f5e6f */ if (ZF_) goto L_005f5e6f;
  /* 005f5e12 push 0x40809 */ { u32 v_ = 0x40809u; esp -= 4; M32(esp) = v_; }
  /* 005f5e17 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5e18 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5e19 push 0x693cc0 */ { u32 v_ = 0x693cc0u; esp -= 4; M32(esp) = v_; }
  /* 005f5e1e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5e1f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5e20 mov dword ptr [0x693d40], 1 */ { const u32 m_ = (u32)(0x693d40u); M32(m_) = (u32)(0x1u); }
  /* 005f5e2a call 0x5f5ee0 */ esp -= 4; M32(esp) = 0x5f5e2fu; SAVEALL; F_005f5ee0(c); ABI_CHECK(0x5f5ee0u, 0x5f5e2au); RETCHK(0x5f5e2fu, 0x5f5e2au); LOADALL;
  /* 005f5e2f add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5e32 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f5e34 mov dword ptr [0x9c003c], eax */ { const u32 m_ = (u32)(0x9c003cu); M32(m_) = (u32)(eax); }
  /* 005f5e39 je 0x5f5e62 */ if (ZF_) goto L_005f5e62;
  /* 005f5e3b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5e3c push 0x67dde0 */ { u32 v_ = 0x67dde0u; esp -= 4; M32(esp) = v_; }
  /* 005f5e41 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f5e42 call 0x5f6240 */ esp -= 4; M32(esp) = 0x5f5e47u; SAVEALL; F_005f6240(c); ABI_CHECK(0x5f6240u, 0x5f5e42u); RETCHK(0x5f5e47u, 0x5f5e42u); LOADALL;
  /* 005f5e47 mov eax, dword ptr [0x9c003c] */ { const u32 m_ = (u32)(0x9c003cu); eax = (u32)(M32(m_)); }
  /* 005f5e4c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5e4f mov word ptr [eax + 0x46], 1 */ { const u32 m_ = (u32)(eax + 0x46u); M16(m_) = (u16)(0x1u); }
  /* 005f5e55 mov dword ptr [0x693d44], esi */ { const u32 m_ = (u32)(0x693d44u); M32(m_) = (u32)(esi); }
  /* 005f5e5b mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f5e60 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5e61 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f5e62:;
  /* 005f5e62 push 0x693c98 */ { u32 v_ = 0x693c98u; esp -= 4; M32(esp) = v_; }
  /* 005f5e67 call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f5e6cu; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f5e67u); RETCHK(0x5f5e6cu, 0x5f5e67u); LOADALL;
  /* 005f5e6c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f5e6f:;
  /* 005f5e6f push 0x693c74 */ { u32 v_ = 0x693c74u; esp -= 4; M32(esp) = v_; }
  /* 005f5e74 call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f5e79u; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f5e74u); RETCHK(0x5f5e79u, 0x5f5e74u); LOADALL;
  /* 005f5e79 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f5e7c:;
  /* 005f5e7c push 0x693d1c */ { u32 v_ = 0x693d1cu; esp -= 4; M32(esp) = v_; }
  /* 005f5e81 call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f5e86u; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f5e81u); RETCHK(0x5f5e86u, 0x5f5e81u); LOADALL;
  /* 005f5e86 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f5e89:;
  /* 005f5e89 mov dword ptr [0x693d40], esi */ { const u32 m_ = (u32)(0x693d40u); M32(m_) = (u32)(esi); }
  /* 005f5e8f mov dword ptr [0x693d44], esi */ { const u32 m_ = (u32)(0x693d44u); M32(m_) = (u32)(esi); }
  /* 005f5e95 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f5e97 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5e98 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5ea0(CPU *c) {
  NATIVE_HOOK(0x5f5ea0u) REGS; LOADALL;
L_005f5ea0:;
  /* 005f5ea0 push 0x693cc0 */ { u32 v_ = 0x693cc0u; esp -= 4; M32(esp) = v_; }
  /* 005f5ea5 mov dword ptr [0x693c70], 1 */ { const u32 m_ = (u32)(0x693c70u); M32(m_) = (u32)(0x1u); }
  /* 005f5eaf call 0x5f6130 */ esp -= 4; M32(esp) = 0x5f5eb4u; SAVEALL; F_005f6130(c); ABI_CHECK(0x5f6130u, 0x5f5eafu); RETCHK(0x5f5eb4u, 0x5f5eafu); LOADALL;
  /* 005f5eb4 push 0x693c98 */ { u32 v_ = 0x693c98u; esp -= 4; M32(esp) = v_; }
  /* 005f5eb9 call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f5ebeu; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f5eb9u); RETCHK(0x5f5ebeu, 0x5f5eb9u); LOADALL;
  /* 005f5ebe push 0x693c74 */ { u32 v_ = 0x693c74u; esp -= 4; M32(esp) = v_; }
  /* 005f5ec3 call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f5ec8u; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f5ec3u); RETCHK(0x5f5ec8u, 0x5f5ec3u); LOADALL;
  /* 005f5ec8 push 0x693d1c */ { u32 v_ = 0x693d1cu; esp -= 4; M32(esp) = v_; }
  /* 005f5ecd call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f5ed2u; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f5ecdu); RETCHK(0x5f5ed2u, 0x5f5ecdu); LOADALL;
  /* 005f5ed2 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5ed5 mov dword ptr [0x693d40], 0 */ { const u32 m_ = (u32)(0x693d40u); M32(m_) = (u32)(0x0u); }
  /* 005f5edf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f5ee0(CPU *c) {
  NATIVE_HOOK(0x5f5ee0u) REGS; LOADALL;
L_005f5ee0:;
  /* 005f5ee0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f5ee1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f5ee2 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 005f5ee6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5ee7 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5ee9 jne 0x5f5efa */ if (!ZF_) goto L_005f5efa;
  /* 005f5eeb mov eax, dword ptr [0x693d44] */ { const u32 m_ = (u32)(0x693d44u); eax = (u32)(M32(m_)); }
  /* 005f5ef0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5ef2 jne 0x5f5efa */ if (!ZF_) goto L_005f5efa;
  /* 005f5ef4 mov ebp, dword ptr [0x9c003c] */ { const u32 m_ = (u32)(0x9c003cu); ebp = (u32)(M32(m_)); }
L_005f5efa:;
  /* 005f5efa mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
  /* 005f5efe test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5f00 jne 0x5f5f27 */ if (!ZF_) goto L_005f5f27;
  /* 005f5f02 push 0x30809 */ { u32 v_ = 0x30809u; esp -= 4; M32(esp) = v_; }
  /* 005f5f07 push 0x693d1c */ { u32 v_ = 0x693d1cu; esp -= 4; M32(esp) = v_; }
  /* 005f5f0c call 0x5f1930 */ esp -= 4; M32(esp) = 0x5f5f11u; SAVEALL; F_005f1930(c); ABI_CHECK(0x5f1930u, 0x5f5f0cu); RETCHK(0x5f5f11u, 0x5f5f0cu); LOADALL;
  /* 005f5f11 mov esi, eax */ { esi = (u32)(eax); }
  /* 005f5f13 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5f16 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5f18 jne 0x5f5f1e */ if (!ZF_) goto L_005f5f1e;
  /* 005f5f1a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5f1b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f5f1c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f5f1d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f5f1e:;
  /* 005f5f1e mov dword ptr [esi + 0xc], 2 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x2u); }
  /* 005f5f25 jmp 0x5f5f2e */ goto L_005f5f2e;
L_005f5f27:;
  /* 005f5f27 mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
L_005f5f2e:;
  /* 005f5f2e mov bl, byte ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f5f32 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 005f5f36 test bl, 4 */ { u32 a_ = (ebx & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f5f39 mov dword ptr [esi + 0x58], eax */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(eax); }
  /* 005f5f3c je 0x5f5f8f */ if (ZF_) goto L_005f5f8f;
  /* 005f5f3e mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f5f42 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5f44 jne 0x5f5f6e */ if (!ZF_) goto L_005f5f6e;
  /* 005f5f46 push 0x30809 */ { u32 v_ = 0x30809u; esp -= 4; M32(esp) = v_; }
  /* 005f5f4b push 0x693c74 */ { u32 v_ = 0x693c74u; esp -= 4; M32(esp) = v_; }
  /* 005f5f50 call 0x5f1930 */ esp -= 4; M32(esp) = 0x5f5f55u; SAVEALL; F_005f1930(c); ABI_CHECK(0x5f1930u, 0x5f5f50u); RETCHK(0x5f5f55u, 0x5f5f50u); LOADALL;
  /* 005f5f55 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5f58 mov dword ptr [esi + 0x4c], eax */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(eax); }
  /* 005f5f5b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5f5d jne 0x5f5f79 */ if (!ZF_) goto L_005f5f79;
  /* 005f5f5f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5f60 call 0x5f6010 */ esp -= 4; M32(esp) = 0x5f5f65u; SAVEALL; F_005f6010(c); ABI_CHECK(0x5f6010u, 0x5f5f60u); RETCHK(0x5f5f65u, 0x5f5f60u); LOADALL;
  /* 005f5f65 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5f68 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f5f6a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5f6b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f5f6c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f5f6d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f5f6e:;
  /* 005f5f6e mov dword ptr [esi + 0x4c], eax */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(eax); }
  /* 005f5f71 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f5f74 or al, 0x10 */ { u32 a_ = (eax & 0xffu), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f5f76 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
L_005f5f79:;
  /* 005f5f79 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f5f7a mov edi, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); edi = (u32)(M32(m_)); }
  /* 005f5f7d mov ecx, 6 */ { ecx = (u32)(0x6u); }
  /* 005f5f82 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f5f84 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005f5f86 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f5f89 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f5f8a or al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f5f8c mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
L_005f5f8f:;
  /* 005f5f8f test bl, 8 */ { u32 a_ = (ebx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f5f92 je 0x5f5fe1 */ if (ZF_) goto L_005f5fe1;
  /* 005f5f94 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005f5f98 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5f9a jne 0x5f5fc4 */ if (!ZF_) goto L_005f5fc4;
  /* 005f5f9c push 0x30809 */ { u32 v_ = 0x30809u; esp -= 4; M32(esp) = v_; }
  /* 005f5fa1 push 0x693c98 */ { u32 v_ = 0x693c98u; esp -= 4; M32(esp) = v_; }
  /* 005f5fa6 call 0x5f1930 */ esp -= 4; M32(esp) = 0x5f5fabu; SAVEALL; F_005f1930(c); ABI_CHECK(0x5f1930u, 0x5f5fa6u); RETCHK(0x5f5fabu, 0x5f5fa6u); LOADALL;
  /* 005f5fab add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5fae mov dword ptr [esi + 0x50], eax */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(eax); }
  /* 005f5fb1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5fb3 jne 0x5f5fcf */ if (!ZF_) goto L_005f5fcf;
  /* 005f5fb5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5fb6 call 0x5f6010 */ esp -= 4; M32(esp) = 0x5f5fbbu; SAVEALL; F_005f6010(c); ABI_CHECK(0x5f6010u, 0x5f5fb6u); RETCHK(0x5f5fbbu, 0x5f5fb6u); LOADALL;
  /* 005f5fbb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5fbe xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f5fc0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f5fc1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f5fc2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f5fc3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f5fc4:;
  /* 005f5fc4 mov dword ptr [esi + 0x50], eax */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(eax); }
  /* 005f5fc7 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f5fca or al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f5fcc mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
L_005f5fcf:;
  /* 005f5fcf mov edx, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); edx = (u32)(M32(m_)); }
  /* 005f5fd2 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f5fd4 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005f5fd6 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005f5fd9 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f5fdc or al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f5fde mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
L_005f5fe1:;
  /* 005f5fe1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f5fe2 call 0x5f6080 */ esp -= 4; M32(esp) = 0x5f5fe7u; SAVEALL; F_005f6080(c); ABI_CHECK(0x5f6080u, 0x5f5fe2u); RETCHK(0x5f5fe7u, 0x5f5fe2u); LOADALL;
  /* 005f5fe7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f5fea test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f5fec je 0x5f6003 */ if (ZF_) goto L_005f6003;
  /* 005f5fee mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005f5ff1 lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 005f5ff4 lea ecx, [esi + 0x18] */ ecx = (u32)((u32)(esi + 0x18u));
  /* 005f5ff7 mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005f5ffa mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005f5ffc mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005f5ffe mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005f6001 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
L_005f6003:;
  /* 005f6003 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f6005 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6006 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f6007 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f6008 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6010(CPU *c) {
  NATIVE_HOOK(0x5f6010u) REGS; LOADALL;
L_005f6010:;
  /* 005f6010 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6011 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f6015 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6016 call 0x5f66a0 */ esp -= 4; M32(esp) = 0x5f601bu; SAVEALL; F_005f66a0(c); ABI_CHECK(0x5f66a0u, 0x5f6016u); RETCHK(0x5f601bu, 0x5f6016u); LOADALL;
  /* 005f601b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f601c call 0x5f1c00 */ esp -= 4; M32(esp) = 0x5f6021u; SAVEALL; F_005f1c00(c); ABI_CHECK(0x5f1c00u, 0x5f601cu); RETCHK(0x5f6021u, 0x5f601cu); LOADALL;
  /* 005f6021 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f6024 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6027 test al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f6029 je 0x5f6040 */ if (ZF_) goto L_005f6040;
  /* 005f602b test al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f602d jne 0x5f6040 */ if (!ZF_) goto L_005f6040;
  /* 005f602f mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 005f6032 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f6033 push 0x693c98 */ { u32 v_ = 0x693c98u; esp -= 4; M32(esp) = v_; }
  /* 005f6038 call 0x5f1a50 */ esp -= 4; M32(esp) = 0x5f603du; SAVEALL; F_005f1a50(c); ABI_CHECK(0x5f1a50u, 0x5f6038u); RETCHK(0x5f603du, 0x5f6038u); LOADALL;
  /* 005f603d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f6040:;
  /* 005f6040 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f6043 test al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f6045 je 0x5f605c */ if (ZF_) goto L_005f605c;
  /* 005f6047 test al, 0x10 */ { u32 a_ = (eax & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f6049 jne 0x5f605c */ if (!ZF_) goto L_005f605c;
  /* 005f604b mov ecx, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 005f604e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f604f push 0x693c74 */ { u32 v_ = 0x693c74u; esp -= 4; M32(esp) = v_; }
  /* 005f6054 call 0x5f1a50 */ esp -= 4; M32(esp) = 0x5f6059u; SAVEALL; F_005f1a50(c); ABI_CHECK(0x5f1a50u, 0x5f6054u); RETCHK(0x5f6059u, 0x5f6054u); LOADALL;
  /* 005f6059 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f605c:;
  /* 005f605c test byte ptr [esi + 0xc], 2 */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f6060 je 0x5f6070 */ if (ZF_) goto L_005f6070;
  /* 005f6062 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6063 push 0x693d1c */ { u32 v_ = 0x693d1cu; esp -= 4; M32(esp) = v_; }
  /* 005f6068 call 0x5f1a50 */ esp -= 4; M32(esp) = 0x5f606du; SAVEALL; F_005f1a50(c); ABI_CHECK(0x5f1a50u, 0x5f6068u); RETCHK(0x5f606du, 0x5f6068u); LOADALL;
  /* 005f606d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f6070:;
  /* 005f6070 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6071 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6080(CPU *c) {
  NATIVE_HOOK(0x5f6080u) REGS; LOADALL;
L_005f6080:;
  /* 005f6080 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6081 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f6085 test byte ptr [esi + 0xc], 4 */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f6089 je 0x5f609e */ if (ZF_) goto L_005f609e;
  /* 005f608b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f608d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f608e call 0x5f6740 */ esp -= 4; M32(esp) = 0x5f6093u; SAVEALL; F_005f6740(c); ABI_CHECK(0x5f6740u, 0x5f608eu); RETCHK(0x5f6093u, 0x5f608eu); LOADALL;
  /* 005f6093 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005f6095 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6096 call 0x5f6740 */ esp -= 4; M32(esp) = 0x5f609bu; SAVEALL; F_005f6740(c); ABI_CHECK(0x5f6740u, 0x5f6096u); RETCHK(0x5f609bu, 0x5f6096u); LOADALL;
  /* 005f609b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f609e:;
  /* 005f609e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f609f call 0x5f1c80 */ esp -= 4; M32(esp) = 0x5f60a4u; SAVEALL; F_005f1c80(c); ABI_CHECK(0x5f1c80u, 0x5f609fu); RETCHK(0x5f60a4u, 0x5f609fu); LOADALL;
  /* 005f60a4 mov cl, byte ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f60a7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f60aa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f60ac test cl, 4 */ { u32 a_ = (ecx & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f60af je 0x5f60cc */ if (ZF_) goto L_005f60cc;
  /* 005f60b1 mov ecx, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 005f60b4 lea edx, [ecx + 4] */ edx = (u32)((u32)(ecx + 0x4u));
  /* 005f60b7 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005f60b9 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f60bc mov dword ptr [ecx + 0x10], eax */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f60bf mov dword ptr [edx], edx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(edx); }
  /* 005f60c1 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f60c4 mov word ptr [ecx + 0xc], ax */ { const u32 m_ = (u32)(ecx + 0xcu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f60c8 mov word ptr [ecx + 0xe], ax */ { const u32 m_ = (u32)(ecx + 0xeu); M16(m_) = (u16)((eax & 0xffffu)); }
L_005f60cc:;
  /* 005f60cc mov cl, byte ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f60cf mov edx, 8 */ { edx = (u32)(0x8u); }
  /* 005f60d4 test dl, cl */ { u32 a_ = (edx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f60d6 je 0x5f60e0 */ if (ZF_) goto L_005f60e0;
  /* 005f60d8 mov ecx, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); ecx = (u32)(M32(m_)); }
  /* 005f60db mov dword ptr [ecx], ecx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ecx); }
  /* 005f60dd mov dword ptr [ecx + 4], ecx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ecx); }
L_005f60e0:;
  /* 005f60e0 mov dword ptr [esi + 0x48], eax */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(eax); }
  /* 005f60e3 mov dword ptr [esi + 0x40], eax */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(eax); }
  /* 005f60e6 movsx ecx, byte ptr [0x67cd21] */ { const u32 m_ = (u32)(0x67cd21u); ecx = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f60ed dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f60ee mov word ptr [esi + 0x46], dx */ { const u32 m_ = (u32)(esi + 0x46u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 005f60f2 shl ecx, 0x1c */ { u32 n_ = (28u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f60f5 or ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f60f7 mov word ptr [esi + 0x44], ax */ { const u32 m_ = (u32)(esi + 0x44u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f60fb mov dword ptr [esi + 0x40], ecx */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(ecx); }
  /* 005f60fe lea ecx, [esi + 0x10] */ ecx = (u32)((u32)(esi + 0x10u));
  /* 005f6101 mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 005f6104 mov dword ptr [esi + 0x54], eax */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(eax); }
  /* 005f6107 mov dword ptr [ecx], ecx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ecx); }
  /* 005f6109 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 005f610c mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005f610f mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 005f6112 mov dword ptr [esi + 0x24], ecx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ecx); }
  /* 005f6115 mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
  /* 005f6118 mov dword ptr [esi + 0x2c], eax */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 005f611b mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 005f611e mov dword ptr [esi + 0x34], eax */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(eax); }
  /* 005f6121 mov dword ptr [esi + 0x38], eax */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(eax); }
  /* 005f6124 mov dword ptr [esi + 0x3c], eax */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 005f6127 mov dword ptr [ecx], ecx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ecx); }
  /* 005f6129 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f612a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6130(CPU *c) {
  NATIVE_HOOK(0x5f6130u) REGS; LOADALL;
L_005f6130:;
  /* 005f6130 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6131 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f6135 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f6136 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f6139 lea edi, [esi + 0x10] */ edi = (u32)((u32)(esi + 0x10u));
  /* 005f613c cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f613e je 0x5f6156 */ if (ZF_) goto L_005f6156;
L_005f6140:;
  /* 005f6140 add eax, -0x18 */ { u32 a_ = eax, b_ = 0xffffffe8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f6143 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f6144 call 0x5f6130 */ esp -= 4; M32(esp) = 0x5f6149u; SAVEALL; F_005f6130(c); ABI_CHECK(0x5f6130u, 0x5f6144u); RETCHK(0x5f6149u, 0x5f6144u); LOADALL;
  /* 005f6149 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f614c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f614e je 0x5f61c0 */ if (ZF_) goto L_005f61c0;
  /* 005f6150 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005f6152 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f6154 jne 0x5f6140 */ if (!ZF_) goto L_005f6140;
L_005f6156:;
  /* 005f6156 mov eax, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); eax = (u32)(M32(m_)); }
  /* 005f6159 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f615b je 0x5f6163 */ if (ZF_) goto L_005f6163;
  /* 005f615d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f615e call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x5f6160u; SAVEALL; call_ind(c, t_); RETCHK(0x5f6160u, 0x5f615eu); LOADALL; }
  /* 005f6160 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f6163:;
  /* 005f6163 test byte ptr [esi + 0xc], 4 */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f6167 je 0x5f6188 */ if (ZF_) goto L_005f6188;
  /* 005f6169 mov eax, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); eax = (u32)(M32(m_)); }
  /* 005f616c lea edi, [eax + 4] */ edi = (u32)((u32)(eax + 0x4u));
  /* 005f616f mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f6172 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f6174 je 0x5f6188 */ if (ZF_) goto L_005f6188;
L_005f6176:;
  /* 005f6176 add eax, -0x14 */ { u32 a_ = eax, b_ = 0xffffffecu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f6179 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f617a call 0x5f79c0 */ esp -= 4; M32(esp) = 0x5f617fu; SAVEALL; F_005f79c0(c); ABI_CHECK(0x5f79c0u, 0x5f617au); RETCHK(0x5f617fu, 0x5f617au); LOADALL;
  /* 005f617f mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005f6181 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6184 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f6186 jne 0x5f6176 */ if (!ZF_) goto L_005f6176;
L_005f6188:;
  /* 005f6188 test byte ptr [esi + 0xc], 8 */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f618c je 0x5f61a9 */ if (ZF_) goto L_005f61a9;
  /* 005f618e mov edi, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); edi = (u32)(M32(m_)); }
  /* 005f6191 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005f6193 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f6195 je 0x5f61a9 */ if (ZF_) goto L_005f61a9;
L_005f6197:;
  /* 005f6197 add eax, -0x20 */ { u32 a_ = eax, b_ = 0xffffffe0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f619a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f619b call 0x5f87f0 */ esp -= 4; M32(esp) = 0x5f61a0u; SAVEALL; F_005f87f0(c); ABI_CHECK(0x5f87f0u, 0x5f619bu); RETCHK(0x5f61a0u, 0x5f619bu); LOADALL;
  /* 005f61a0 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005f61a2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f61a5 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f61a7 jne 0x5f6197 */ if (!ZF_) goto L_005f6197;
L_005f61a9:;
  /* 005f61a9 mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 005f61ac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f61ae je 0x5f61d9 */ if (ZF_) goto L_005f61d9;
  /* 005f61b0 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f61b3 test cl, 0x40 */ { u32 a_ = (ecx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f61b6 je 0x5f61c5 */ if (ZF_) goto L_005f61c5;
  /* 005f61b8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f61b9 call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f61beu; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f61b9u); RETCHK(0x5f61beu, 0x5f61b9u); LOADALL;
  /* 005f61be jmp 0x5f61cf */ goto L_005f61cf;
L_005f61c0:;
  /* 005f61c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f61c1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f61c3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f61c4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f61c5:;
  /* 005f61c5 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f61c7 jns 0x5f61d2 */ if (!SF_) goto L_005f61d2;
  /* 005f61c9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f61ca call 0x5f8570 */ esp -= 4; M32(esp) = 0x5f61cfu; SAVEALL; F_005f8570(c); ABI_CHECK(0x5f8570u, 0x5f61cau); RETCHK(0x5f61cfu, 0x5f61cau); LOADALL;
L_005f61cf:;
  /* 005f61cf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f61d2:;
  /* 005f61d2 mov dword ptr [esi + 0x48], 0 */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(0x0u); }
L_005f61d9:;
  /* 005f61d9 cmp esi, 0x693cc0 */ { u32 a_ = esi, b_ = 0x693cc0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f61df je 0x5f61f2 */ if (ZF_) goto L_005f61f2;
  /* 005f61e1 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f61e4 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005f61e7 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f61e9 mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 005f61ec mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f61ef mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
L_005f61f2:;
  /* 005f61f2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f61f3 call 0x5f6010 */ esp -= 4; M32(esp) = 0x5f61f8u; SAVEALL; F_005f6010(c); ABI_CHECK(0x5f6010u, 0x5f61f3u); RETCHK(0x5f61f8u, 0x5f61f3u); LOADALL;
  /* 005f61f8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f61fb mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f6200 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f6201 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6202 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6210(CPU *c) {
  NATIVE_HOOK(0x5f6210u) REGS; LOADALL;
L_005f6210:;
  /* 005f6210 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6211 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f6215 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f6216 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005f621a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f621c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f621d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f621e call 0x5f7a00 */ esp -= 4; M32(esp) = 0x5f6223u; SAVEALL; F_005f7a00(c); ABI_CHECK(0x5f7a00u, 0x5f621eu); RETCHK(0x5f6223u, 0x5f621eu); LOADALL;
  /* 005f6223 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6226 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6228 jne 0x5f622d */ if (!ZF_) goto L_005f622d;
  /* 005f622a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f622b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f622c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f622d:;
  /* 005f622d mov eax, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); eax = (u32)(M32(m_)); }
  /* 005f6230 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 005f6232 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f6234 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f6235 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6236 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6240(CPU *c) {
  NATIVE_HOOK(0x5f6240u) REGS; LOADALL;
L_005f6240:;
  /* 005f6240 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f6244 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6245 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f6249 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f624a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f624b call 0x5f1bb0 */ esp -= 4; M32(esp) = 0x5f6250u; SAVEALL; F_005f1bb0(c); ABI_CHECK(0x5f1bb0u, 0x5f624bu); RETCHK(0x5f6250u, 0x5f624bu); LOADALL;
  /* 005f6250 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f6254 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f6255 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6256 call 0x5f1be0 */ esp -= 4; M32(esp) = 0x5f625bu; SAVEALL; F_005f1be0(c); ABI_CHECK(0x5f1be0u, 0x5f6256u); RETCHK(0x5f625bu, 0x5f6256u); LOADALL;
  /* 005f625b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f625e mov eax, esi */ { eax = (u32)(esi); }
  /* 005f6260 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6261 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6270(CPU *c) {
  NATIVE_HOOK(0x5f6270u) REGS; LOADALL;
L_005f6270:;
  /* 005f6270 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6271 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f6275 mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 005f6278 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f627a je 0x5f6280 */ if (ZF_) goto L_005f6280;
  /* 005f627c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f627e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f627f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f6280:;
  /* 005f6280 mov ax, word ptr [esi + 0x46] */ { const u32 m_ = (u32)(esi + 0x46u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f6284 cmp ax, 1 */ { u32 a_ = (eax & 0xffffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 005f6288 jbe 0x5f62ff */ if ((CF_|ZF_)) goto L_005f62ff;
  /* 005f628a mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f628e and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f6293 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6295 mov ecx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); ecx = (u32)(M32(m_)); }
  /* 005f6298 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f629d je 0x5f62d1 */ if (ZF_) goto L_005f62d1;
  /* 005f629f push 0x30809 */ { u32 v_ = 0x30809u; esp -= 4; M32(esp) = v_; }
  /* 005f62a4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f62a6 shr ecx, 0x1c */ { u32 n_ = (28u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f62a9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f62aa shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f62ac push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f62ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f62ae mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005f62b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f62b3 call 0x5f1780 */ esp -= 4; M32(esp) = 0x5f62b8u; SAVEALL; F_005f1780(c); ABI_CHECK(0x5f1780u, 0x5f62b3u); RETCHK(0x5f62b8u, 0x5f62b3u); LOADALL;
  /* 005f62b8 mov dword ptr [esi + 0x48], eax */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(eax); }
  /* 005f62bb mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f62be or al, 0x40 */ { u32 a_ = (eax & 0xffu), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f62c0 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f62c3 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 005f62c6 mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 005f62c9 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005f62cb sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005f62cd and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f62cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f62d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f62d1:;
  /* 005f62d1 shr ecx, 0x1c */ { u32 n_ = (28u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f62d4 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f62d6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f62d8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f62da push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f62db push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f62dc mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f62e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f62e1 call 0x5f8490 */ esp -= 4; M32(esp) = 0x5f62e6u; SAVEALL; F_005f8490(c); ABI_CHECK(0x5f8490u, 0x5f62e1u); RETCHK(0x5f62e6u, 0x5f62e1u); LOADALL;
  /* 005f62e6 mov dword ptr [esi + 0x48], eax */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(eax); }
  /* 005f62e9 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f62ec or al, 0x80 */ { u32 a_ = (eax & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f62ee add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f62f1 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 005f62f4 mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 005f62f7 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005f62f9 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005f62fb and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f62fd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f62fe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f62ff:;
  /* 005f62ff mov dword ptr [esi + 0x48], 1 */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(0x1u); }
  /* 005f6306 mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 005f6309 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005f630b sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005f630d and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f630f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6310 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6320(CPU *c) {
  NATIVE_HOOK(0x5f6320u) REGS; LOADALL;
L_005f6320:;
  /* 005f6320 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f6324 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f6327 test cl, 0x40 */ { u32 a_ = (ecx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f632a je 0x5f633f */ if (ZF_) goto L_005f633f;
  /* 005f632c mov ecx, dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); ecx = (u32)(M32(m_)); }
  /* 005f632f mov edx, dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); edx = (u32)(M32(m_)); }
  /* 005f6332 mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005f6336 mov dword ptr [esp + 4], edx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f633a jmp 0x5f1930 */ SAVEALL; F_005f1930(c); return;
L_005f633f:;
  /* 005f633f test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f6341 jns 0x5f634f */ if (!SF_) goto L_005f634f;
  /* 005f6343 mov edx, dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); edx = (u32)(M32(m_)); }
  /* 005f6346 mov dword ptr [esp + 4], edx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f634a jmp 0x5f85e0 */ goto L_005f85e0;
L_005f634f:;
  /* 005f634f mov eax, dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); eax = (u32)(M32(m_)); }
  /* 005f6352 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f6356 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f6357 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f6358 call 0x5f2440 */ esp -= 4; M32(esp) = 0x5f635du; SAVEALL; F_005f2440(c); ABI_CHECK(0x5f2440u, 0x5f6358u); RETCHK(0x5f635du, 0x5f6358u); LOADALL;
  /* 005f635d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6360 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f85e0:;
  /* 005f85e0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f85e1 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005f85e5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f85e6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f85e7 mov esi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); esi = (u32)(M32(m_)); }
  /* 005f85ea lea ebp, [ebx + 0xc] */ ebp = (u32)((u32)(ebx + 0xcu));
  /* 005f85ed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f85ee xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f85f0 cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f85f2 je 0x5f8612 */ if (ZF_) goto L_005f8612;
L_005f85f4:;
  /* 005f85f4 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f85f7 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005f85fb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f85fc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f85fd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f85fe call 0x5f8700 */ esp -= 4; M32(esp) = 0x5f8603u; SAVEALL; F_005f8700(c); ABI_CHECK(0x5f8700u, 0x5f85feu); RETCHK(0x5f8603u, 0x5f85feu); LOADALL;
  /* 005f8603 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 005f8605 mov edi, eax */ { edi = (u32)(eax); }
  /* 005f8607 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f860a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f860c jne 0x5f8636 */ if (!ZF_) goto L_005f8636;
  /* 005f860e cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8610 jne 0x5f85f4 */ if (!ZF_) goto L_005f85f4;
L_005f8612:;
  /* 005f8612 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f8613 call 0x5f8540 */ esp -= 4; M32(esp) = 0x5f8618u; SAVEALL; F_005f8540(c); ABI_CHECK(0x5f8540u, 0x5f8613u); RETCHK(0x5f8618u, 0x5f8613u); LOADALL;
  /* 005f8618 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f861b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f861d je 0x5f8636 */ if (ZF_) goto L_005f8636;
  /* 005f861f mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f8622 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005f8626 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f8627 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f8628 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8629 call 0x5f8700 */ esp -= 4; M32(esp) = 0x5f862eu; SAVEALL; F_005f8700(c); ABI_CHECK(0x5f8700u, 0x5f8629u); RETCHK(0x5f862eu, 0x5f8629u); LOADALL;
  /* 005f862e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8631 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8632 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8633 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f8634 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f8635 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f8636:;
  /* 005f8636 mov eax, edi */ { eax = (u32)(edi); }
  /* 005f8638 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8639 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f863a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f863b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f863c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6370(CPU *c) {
  NATIVE_HOOK(0x5f6370u) REGS; LOADALL;
L_005f6370:;
  /* 005f6370 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6371 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f6375 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f6376 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005f6378 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f637b mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 005f637d test al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f637f je 0x5f6386 */ if (ZF_) goto L_005f6386;
  /* 005f6381 mov ecx, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005f6384 jmp 0x5f639f */ goto L_005f639f;
L_005f6386:;
  /* 005f6386 test al, 0x10 */ { u32 a_ = (eax & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f6388 je 0x5f639f */ if (ZF_) goto L_005f639f;
  /* 005f638a lea ecx, [esp + 0xc] */ ecx = (u32)((u32)(esp + 0xcu));
  /* 005f638e and eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f6391 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f6392 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f6393 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f6394 call 0x5f5990 */ esp -= 4; M32(esp) = 0x5f6399u; SAVEALL; F_005f5990(c); ABI_CHECK(0x5f5990u, 0x5f6394u); RETCHK(0x5f6399u, 0x5f6394u); LOADALL;
  /* 005f6399 mov ecx, dword ptr [eax + esi] */ { const u32 m_ = (u32)(eax + esi); ecx = (u32)(M32(m_)); }
  /* 005f639c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f639f:;
  /* 005f639f mov eax, dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); eax = (u32)(M32(m_)); }
  /* 005f63a2 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005f63a6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f63a8 je 0x5f63e8 */ if (ZF_) goto L_005f63e8;
  /* 005f63aa test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f63ac je 0x5f63b8 */ if (ZF_) goto L_005f63b8;
  /* 005f63ae push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f63af mov bl, byte ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f63b2 test bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f63b5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f63b6 jne 0x5f63e8 */ if (!ZF_) goto L_005f63e8;
L_005f63b8:;
  /* 005f63b8 mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f63bb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f63bc test dl, 0x40 */ { u32 a_ = (edx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f63bf je 0x5f63cd */ if (ZF_) goto L_005f63cd;
  /* 005f63c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f63c2 call 0x5f1a50 */ esp -= 4; M32(esp) = 0x5f63c7u; SAVEALL; F_005f1a50(c); ABI_CHECK(0x5f1a50u, 0x5f63c2u); RETCHK(0x5f63c7u, 0x5f63c2u); LOADALL;
  /* 005f63c7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f63ca pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f63cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f63cc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f63cd:;
  /* 005f63cd test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f63cf jns 0x5f63dd */ if (!SF_) goto L_005f63dd;
  /* 005f63d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f63d2 call 0x5f8640 */ esp -= 4; M32(esp) = 0x5f63d7u; SAVEALL; F_005f8640(c); ABI_CHECK(0x5f8640u, 0x5f63d2u); RETCHK(0x5f63d7u, 0x5f63d2u); LOADALL;
  /* 005f63d7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f63da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f63db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f63dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f63dd:;
  /* 005f63dd call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f63e2u; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f63ddu); RETCHK(0x5f63e2u, 0x5f63ddu); LOADALL;
  /* 005f63e2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f63e5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f63e6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f63e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f63e8:;
  /* 005f63e8 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f63ea je 0x5f63f7 */ if (ZF_) goto L_005f63f7;
  /* 005f63ec mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f63f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f63f1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f63f2 call edx */ { u32 t_ = edx; esp -= 4; M32(esp) = 0x5f63f4u; SAVEALL; call_ind(c, t_); RETCHK(0x5f63f4u, 0x5f63f2u); LOADALL; }
  /* 005f63f4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f63f7:;
  /* 005f63f7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f63f8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f63f9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6400(CPU *c) {
  NATIVE_HOOK(0x5f6400u) REGS; LOADALL;
L_005f6400:;
  /* 005f6400 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f6404 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6405 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f6406 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f6409 lea esi, [eax + 0x10] */ esi = (u32)((u32)(eax + 0x10u));
  /* 005f640c cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f640e je 0x5f6421 */ if (ZF_) goto L_005f6421;
  /* 005f6410 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
L_005f6414:;
  /* 005f6414 lea edx, [ecx - 0x18] */ edx = (u32)((u32)(ecx + 0xffffffe8u));
  /* 005f6417 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005f6419 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f641b je 0x5f6423 */ if (ZF_) goto L_005f6423;
  /* 005f641d cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f641f jne 0x5f6414 */ if (!ZF_) goto L_005f6414;
L_005f6421:;
  /* 005f6421 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005f6423:;
  /* 005f6423 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f6424 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6425 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6430(CPU *c) {
  NATIVE_HOOK(0x5f6430u) REGS; LOADALL;
L_005f6430:;
  /* 005f6430 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6433 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f6437 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f6439 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f643b mov dword ptr [esp + 4], ecx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005f643f mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f6442 mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f6446 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f6449 mov dword ptr [esp + 0xc], ecx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005f644d lea ecx, [esp + 0x1c] */ ecx = (u32)((u32)(esp + 0x1cu));
  /* 005f6451 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f6454 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 005f6458 mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 005f645c mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 005f6460 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f6461 push 0x5f6550 */ { u32 v_ = 0x5f6550u; esp -= 4; M32(esp) = v_; }
  /* 005f6466 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f6467 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f6468 call 0x5f6490 */ esp -= 4; M32(esp) = 0x5f646du; SAVEALL; F_005f6490(c); ABI_CHECK(0x5f6490u, 0x5f6468u); RETCHK(0x5f646du, 0x5f6468u); LOADALL;
  /* 005f646d mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 005f6471 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6474 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6476 je 0x5f647e */ if (ZF_) goto L_005f647e;
  /* 005f6478 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 005f647c mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
L_005f647e:;
  /* 005f647e add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6481 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6490(CPU *c) {
  NATIVE_HOOK(0x5f6490u) REGS; LOADALL;
L_005f6490:;
  /* 005f6490 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f6491 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f6492 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6493 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005f6497 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6499 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f649a jne 0x5f64a2 */ if (!ZF_) goto L_005f64a2;
  /* 005f649c mov esi, dword ptr [0x9c003c] */ { const u32 m_ = (u32)(0x9c003cu); esi = (u32)(M32(m_)); }
L_005f64a2:;
  /* 005f64a2 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 005f64a6 mov ebx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebx = (u32)(M32(m_)); }
  /* 005f64aa mov ebp, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebp = (u32)(M32(m_)); }
  /* 005f64ae cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f64b1 mov dword ptr [esp + 0x14], esi */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(esi); }
  /* 005f64b5 jne 0x5f64d5 */ if (!ZF_) goto L_005f64d5;
  /* 005f64b7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f64b8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f64b9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f64ba call ebp */ { u32 t_ = ebp; esp -= 4; M32(esp) = 0x5f64bcu; SAVEALL; call_ind(c, t_); RETCHK(0x5f64bcu, 0x5f64bau); LOADALL; }
  /* 005f64bc add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f64bf cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f64c2 jne 0x5f64d5 */ if (!ZF_) goto L_005f64d5;
  /* 005f64c4 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f64c8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f64ca je 0x5f64ce */ if (ZF_) goto L_005f64ce;
  /* 005f64cc mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
L_005f64ce:;
  /* 005f64ce mov eax, esi */ { eax = (u32)(esi); }
  /* 005f64d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f64d1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f64d2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f64d3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f64d4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f64d5:;
  /* 005f64d5 mov edi, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edi = (u32)(M32(m_)); }
  /* 005f64d8 lea eax, [esi + 0x10] */ eax = (u32)((u32)(esi + 0x10u));
  /* 005f64db cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f64dd mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 005f64e1 je 0x5f6517 */ if (ZF_) goto L_005f6517;
L_005f64e3:;
  /* 005f64e3 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f64e7 lea esi, [edi - 0x18] */ esi = (u32)((u32)(edi + 0xffffffe8u));
  /* 005f64ea push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f64eb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f64ec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f64ed call ebp */ { u32 t_ = ebp; esp -= 4; M32(esp) = 0x5f64efu; SAVEALL; call_ind(c, t_); RETCHK(0x5f64efu, 0x5f64edu); LOADALL; }
  /* 005f64ef add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f64f2 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f64f5 je 0x5f652c */ if (ZF_) goto L_005f652c;
  /* 005f64f7 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005f64fb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f64fd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f64fe push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f64ff push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f6500 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6501 call 0x5f6490 */ esp -= 4; M32(esp) = 0x5f6506u; SAVEALL; F_005f6490(c); ABI_CHECK(0x5f6490u, 0x5f6501u); RETCHK(0x5f6506u, 0x5f6501u); LOADALL;
  /* 005f6506 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6509 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f650b jne 0x5f6527 */ if (!ZF_) goto L_005f6527;
  /* 005f650d mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 005f650f mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 005f6513 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f6515 jne 0x5f64e3 */ if (!ZF_) goto L_005f64e3;
L_005f6517:;
  /* 005f6517 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f651b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f651d je 0x5f6525 */ if (ZF_) goto L_005f6525;
  /* 005f651f mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
L_005f6525:;
  /* 005f6525 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005f6527:;
  /* 005f6527 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f6528 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6529 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f652a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f652b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f652c:;
  /* 005f652c mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f6530 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6532 je 0x5f653a */ if (ZF_) goto L_005f653a;
  /* 005f6534 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 005f6538 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
L_005f653a:;
  /* 005f653a mov eax, esi */ { eax = (u32)(esi); }
  /* 005f653c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f653d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f653e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f653f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f6540 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6550(CPU *c) {
  NATIVE_HOOK(0x5f6550u) REGS; LOADALL;
L_005f6550:;
  /* 005f6550 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f6554 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f6558 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f6559 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005f655b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f655c call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f6561u; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f655cu); RETCHK(0x5f6561u, 0x5f655cu); LOADALL;
  /* 005f6561 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6564 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005f6566 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005f6568 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f6569 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6570(CPU *c) {
  NATIVE_HOOK(0x5f6570u) REGS; LOADALL;
L_005f6570:;
  /* 005f6570 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f6571 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 005f6575 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f6576 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6577 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6579 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f657a jne 0x5f65e1 */ if (!ZF_) goto L_005f65e1;
  /* 005f657c mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005f6580 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6582 jne 0x5f65e1 */ if (!ZF_) goto L_005f65e1;
  /* 005f6584 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 005f6588 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 005f658c mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 005f6590 and edi, 0xffff */ { u32 a_ = edi, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f6596 and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f659b push 0x30809 */ { u32 v_ = 0x30809u; esp -= 4; M32(esp) = v_; }
  /* 005f65a0 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f65a3 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f65a5 and ecx, 0xfffffffe */ { u32 a_ = ecx, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f65a8 lea eax, [eax + eax*2] */ eax = (u32)((u32)(eax + eax * 2u));
  /* 005f65ab mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005f65ae shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f65b1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f65b2 call 0x5f2440 */ esp -= 4; M32(esp) = 0x5f65b7u; SAVEALL; F_005f2440(c); ABI_CHECK(0x5f2440u, 0x5f65b2u); RETCHK(0x5f65b7u, 0x5f65b2u); LOADALL;
  /* 005f65b7 mov ecx, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 005f65ba add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f65bd mov dword ptr [ecx + 0x10], eax */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f65c0 mov eax, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); eax = (u32)(M32(m_)); }
  /* 005f65c3 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f65c6 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f65c8 jne 0x5f65d1 */ if (!ZF_) goto L_005f65d1;
L_005f65ca:;
  /* 005f65ca pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f65cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f65cc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f65cd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f65cf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f65d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f65d1:;
  /* 005f65d1 lea edx, [edi + edi*2] */ edx = (u32)((u32)(edi + edi * 2u));
  /* 005f65d4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f65d5 lea ecx, [ecx + edx*8] */ ecx = (u32)((u32)(ecx + edx * 8u));
  /* 005f65d8 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 005f65db mov eax, esi */ { eax = (u32)(esi); }
  /* 005f65dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f65de pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f65df pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f65e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f65e1:;
  /* 005f65e1 mov ebp, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebp = (u32)(M32(m_)); }
  /* 005f65e5 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f65e7 test bp, bp */ { u32 a_ = (ebp & 0xffffu), b_ = (ebp & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f65ea jbe 0x5f661d */ if ((CF_|ZF_)) goto L_005f661d;
L_005f65ec:;
  /* 005f65ec mov eax, edi */ { eax = (u32)(edi); }
  /* 005f65ee and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f65f3 lea edx, [eax + eax*2] */ edx = (u32)((u32)(eax + eax * 2u));
  /* 005f65f6 lea esi, [ebx + edx*8] */ esi = (u32)((u32)(ebx + edx * 8u));
  /* 005f65f9 lea eax, [esi + 0xc] */ eax = (u32)((u32)(esi + 0xcu));
  /* 005f65fc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f65fd call 0x5f8270 */ esp -= 4; M32(esp) = 0x5f6602u; SAVEALL; F_005f8270(c); ABI_CHECK(0x5f8270u, 0x5f65fdu); RETCHK(0x5f6602u, 0x5f65fdu); LOADALL;
  /* 005f6602 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6605 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6607 je 0x5f65ca */ if (ZF_) goto L_005f65ca;
  /* 005f6609 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f660c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f660e jne 0x5f6617 */ if (!ZF_) goto L_005f6617;
  /* 005f6610 mov dword ptr [esi + 0x14], 0x619d80 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x619d80u); }
L_005f6617:;
  /* 005f6617 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f6618 cmp di, bp */ { u32 a_ = (edi & 0xffffu), b_ = (ebp & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 005f661b jb 0x5f65ec */ if (CF_) goto L_005f65ec;
L_005f661d:;
  /* 005f661d mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 005f6621 mov ecx, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 005f6624 mov dword ptr [ecx + 0x10], ebx */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(ebx); }
  /* 005f6627 mov edx, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); edx = (u32)(M32(m_)); }
  /* 005f662a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005f662c mov word ptr [edx + 0xc], bp */ { const u32 m_ = (u32)(edx + 0xcu); M16(m_) = (u16)((ebp & 0xffffu)); }
  /* 005f6630 mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 005f6634 test bp, bp */ { u32 a_ = (ebp & 0xffffu), b_ = (ebp & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f6637 jbe 0x5f6672 */ if ((CF_|ZF_)) goto L_005f6672;
L_005f6639:;
  /* 005f6639 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005f663d mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005f663f and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f6644 lea eax, [eax + eax*2] */ eax = (u32)((u32)(eax + eax * 2u));
  /* 005f6647 lea edi, [ecx + eax*8] */ edi = (u32)((u32)(ecx + eax * 8u));
  /* 005f664a lea edx, [edi + 0xc] */ edx = (u32)((u32)(edi + 0xcu));
  /* 005f664d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f664e call 0x5f8270 */ esp -= 4; M32(esp) = 0x5f6653u; SAVEALL; F_005f8270(c); ABI_CHECK(0x5f8270u, 0x5f664eu); RETCHK(0x5f6653u, 0x5f664eu); LOADALL;
  /* 005f6653 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6656 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6658 je 0x5f65ca */ if (ZF_) goto L_005f65ca;
  /* 005f665e mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f6661 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6663 jne 0x5f666c */ if (!ZF_) goto L_005f666c;
  /* 005f6665 mov dword ptr [edi + 0x14], 0x619d80 */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(0x619d80u); }
L_005f666c:;
  /* 005f666c inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f666d cmp bx, bp */ { u32 a_ = (ebx & 0xffffu), b_ = (ebp & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 005f6670 jb 0x5f6639 */ if (CF_) goto L_005f6639;
L_005f6672:;
  /* 005f6672 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f6675 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005f6679 or al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f667b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f667c mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 005f667f mov eax, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); eax = (u32)(M32(m_)); }
  /* 005f6682 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 005f6685 mov edx, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); edx = (u32)(M32(m_)); }
  /* 005f6688 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f668a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f668b mov word ptr [edx + 0xe], bp */ { const u32 m_ = (u32)(edx + 0xeu); M16(m_) = (u16)((ebp & 0xffffu)); }
  /* 005f668f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f6690 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f6691 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f66a0(CPU *c) {
  NATIVE_HOOK(0x5f66a0u) REGS; LOADALL;
L_005f66a0:;
  /* 005f66a0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f66a1 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005f66a5 test byte ptr [ebx + 0xc], 4 */ { const u32 m_ = (u32)(ebx + 0xcu); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f66a9 je 0x5f6733 */ if (ZF_) goto L_005f6733;
  /* 005f66af mov eax, dword ptr [ebx + 0x4c] */ { const u32 m_ = (u32)(ebx + 0x4cu); eax = (u32)(M32(m_)); }
  /* 005f66b2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f66b3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f66b4 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f66b7 mov ax, word ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f66bb test ax, ax */ { u32 a_ = (eax & 0xffffu), b_ = (eax & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f66be jbe 0x5f66dc */ if ((CF_|ZF_)) goto L_005f66dc;
  /* 005f66c0 and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f66c5 mov edi, eax */ { edi = (u32)(eax); }
  /* 005f66c7 lea edx, [eax + eax*2] */ edx = (u32)((u32)(eax + eax * 2u));
  /* 005f66ca lea esi, [ecx + edx*8] */ esi = (u32)((u32)(ecx + edx * 8u));
L_005f66cd:;
  /* 005f66cd sub esi, 0x18 */ { u32 a_ = esi, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f66d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f66d1 call 0x5f1c00 */ esp -= 4; M32(esp) = 0x5f66d6u; SAVEALL; F_005f1c00(c); ABI_CHECK(0x5f1c00u, 0x5f66d1u); RETCHK(0x5f66d6u, 0x5f66d1u); LOADALL;
  /* 005f66d6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f66d9 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f66da jne 0x5f66cd */ if (!ZF_) goto L_005f66cd;
L_005f66dc:;
  /* 005f66dc mov eax, dword ptr [ebx + 0x4c] */ { const u32 m_ = (u32)(ebx + 0x4cu); eax = (u32)(M32(m_)); }
  /* 005f66df mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f66e2 mov ax, word ptr [eax + 0xe] */ { const u32 m_ = (u32)(eax + 0xeu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f66e6 test ax, ax */ { u32 a_ = (eax & 0xffffu), b_ = (eax & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f66e9 jbe 0x5f6707 */ if ((CF_|ZF_)) goto L_005f6707;
  /* 005f66eb and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f66f0 mov edi, eax */ { edi = (u32)(eax); }
  /* 005f66f2 lea edx, [eax + eax*2] */ edx = (u32)((u32)(eax + eax * 2u));
  /* 005f66f5 lea esi, [ecx + edx*8] */ esi = (u32)((u32)(ecx + edx * 8u));
L_005f66f8:;
  /* 005f66f8 sub esi, 0x18 */ { u32 a_ = esi, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f66fb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f66fc call 0x5f1c00 */ esp -= 4; M32(esp) = 0x5f6701u; SAVEALL; F_005f1c00(c); ABI_CHECK(0x5f1c00u, 0x5f66fcu); RETCHK(0x5f6701u, 0x5f66fcu); LOADALL;
  /* 005f6701 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6704 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f6705 jne 0x5f66f8 */ if (!ZF_) goto L_005f66f8;
L_005f6707:;
  /* 005f6707 mov al, byte ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f670a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f670b test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f670d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f670e jne 0x5f671f */ if (!ZF_) goto L_005f671f;
  /* 005f6710 mov eax, dword ptr [ebx + 0x4c] */ { const u32 m_ = (u32)(ebx + 0x4cu); eax = (u32)(M32(m_)); }
  /* 005f6713 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f6716 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f6717 call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f671cu; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f6717u); RETCHK(0x5f671cu, 0x5f6717u); LOADALL;
  /* 005f671c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f671f:;
  /* 005f671f mov edx, dword ptr [ebx + 0x4c] */ { const u32 m_ = (u32)(ebx + 0x4cu); edx = (u32)(M32(m_)); }
  /* 005f6722 mov dword ptr [edx + 0x10], 0 */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(0x0u); }
  /* 005f6729 mov eax, dword ptr [ebx + 0x4c] */ { const u32 m_ = (u32)(ebx + 0x4cu); eax = (u32)(M32(m_)); }
  /* 005f672c mov dword ptr [eax + 0x14], 0 */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(0x0u); }
L_005f6733:;
  /* 005f6733 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005f6735 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f6736 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6740(CPU *c) {
  NATIVE_HOOK(0x5f6740u) REGS; LOADALL;
L_005f6740:;
  /* 005f6740 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f6741 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6742 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f6743 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f6745 push 0x9c0030 */ { u32 v_ = 0x9c0030u; esp -= 4; M32(esp) = v_; }
  /* 005f674a call 0x5f8950 */ esp -= 4; M32(esp) = 0x5f674fu; SAVEALL; F_005f8950(c); ABI_CHECK(0x5f8950u, 0x5f674au); RETCHK(0x5f674fu, 0x5f674au); LOADALL;
  /* 005f674f mov edi, eax */ { edi = (u32)(eax); }
  /* 005f6751 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f6755 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6758 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f675b jne 0x5f67a0 */ if (!ZF_) goto L_005f67a0;
  /* 005f675d mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f6761 mov eax, dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); eax = (u32)(M32(m_)); }
  /* 005f6764 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f6767 mov ax, word ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f676b test ax, ax */ { u32 a_ = (eax & 0xffffu), b_ = (eax & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f676e jbe 0x5f67df */ if ((CF_|ZF_)) goto L_005f67df;
  /* 005f6770 and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f6775 lea esi, [ecx + 0x10] */ esi = (u32)((u32)(ecx + 0x10u));
  /* 005f6778 mov ebx, eax */ { ebx = (u32)(eax); }
L_005f677a:;
  /* 005f677a lea ecx, [esi - 0x10] */ ecx = (u32)((u32)(esi + 0xfffffff0u));
  /* 005f677d mov dword ptr [esi - 4], edi */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 005f6780 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f6781 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 005f6787 mov dword ptr [esi + 4], 0x619d80 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x619d80u); }
  /* 005f678e call 0x5f1c80 */ esp -= 4; M32(esp) = 0x5f6793u; SAVEALL; F_005f1c80(c); ABI_CHECK(0x5f1c80u, 0x5f678eu); RETCHK(0x5f6793u, 0x5f678eu); LOADALL;
  /* 005f6793 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6796 add esi, 0x18 */ { u32 a_ = esi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f6799 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f679a jne 0x5f677a */ if (!ZF_) goto L_005f677a;
  /* 005f679c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f679d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f679e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f679f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f67a0:;
  /* 005f67a0 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005f67a4 mov eax, dword ptr [edx + 0x4c] */ { const u32 m_ = (u32)(edx + 0x4cu); eax = (u32)(M32(m_)); }
  /* 005f67a7 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f67aa mov ax, word ptr [eax + 0xe] */ { const u32 m_ = (u32)(eax + 0xeu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f67ae test ax, ax */ { u32 a_ = (eax & 0xffffu), b_ = (eax & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f67b1 jbe 0x5f67df */ if ((CF_|ZF_)) goto L_005f67df;
  /* 005f67b3 and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f67b8 lea esi, [ecx + 0x10] */ esi = (u32)((u32)(ecx + 0x10u));
  /* 005f67bb mov ebx, eax */ { ebx = (u32)(eax); }
L_005f67bd:;
  /* 005f67bd lea eax, [esi - 0x10] */ eax = (u32)((u32)(esi + 0xfffffff0u));
  /* 005f67c0 mov dword ptr [esi - 4], edi */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 005f67c3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f67c4 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 005f67ca mov dword ptr [esi + 4], 0x619d80 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x619d80u); }
  /* 005f67d1 call 0x5f1c80 */ esp -= 4; M32(esp) = 0x5f67d6u; SAVEALL; F_005f1c80(c); ABI_CHECK(0x5f1c80u, 0x5f67d1u); RETCHK(0x5f67d6u, 0x5f67d1u); LOADALL;
  /* 005f67d6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f67d9 add esi, 0x18 */ { u32 a_ = esi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f67dc dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f67dd jne 0x5f67bd */ if (!ZF_) goto L_005f67bd;
L_005f67df:;
  /* 005f67df pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f67e0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f67e1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f67e2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f67f0(CPU *c) {
  NATIVE_HOOK(0x5f67f0u) REGS; LOADALL;
L_005f67f0:;
  /* 005f67f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f67f1 push 0x693d48 */ { u32 v_ = 0x693d48u; esp -= 4; M32(esp) = v_; }
  /* 005f67f6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f67f8 call 0x5f54d0 */ esp -= 4; M32(esp) = 0x5f67fdu; SAVEALL; F_005f54d0(c); ABI_CHECK(0x5f54d0u, 0x5f67f8u); RETCHK(0x5f67fdu, 0x5f67f8u); LOADALL;
  /* 005f67fd mov esi, eax */ { esi = (u32)(eax); }
  /* 005f67ff add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6802 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6804 jne 0x5f6808 */ if (!ZF_) goto L_005f6808;
  /* 005f6806 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6807 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f6808:;
  /* 005f6808 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f680a push 0x63c3d0 */ { u32 v_ = 0x63c3d0u; esp -= 4; M32(esp) = v_; }
  /* 005f680f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6810 call 0x5f54a0 */ esp -= 4; M32(esp) = 0x5f6815u; SAVEALL; F_005f54a0(c); ABI_CHECK(0x5f54a0u, 0x5f6810u); RETCHK(0x5f6815u, 0x5f6810u); LOADALL;
  /* 005f6815 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6818 mov dword ptr [esi + 0xc], 0x5f6860 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x5f6860u); }
  /* 005f681f mov dword ptr [esi + 0x10], 0x5f68b0 */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(0x5f68b0u); }
  /* 005f6826 mov dword ptr [esi + 0x14], 0x5f68d0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x5f68d0u); }
  /* 005f682d mov dword ptr [esi + 0x18], 0x5f6900 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x5f6900u); }
  /* 005f6834 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f6836 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6837 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6840(CPU *c) {
  NATIVE_HOOK(0x5f6840u) REGS; LOADALL;
L_005f6840:;
  /* 005f6840 push 0x693d48 */ { u32 v_ = 0x693d48u; esp -= 4; M32(esp) = v_; }
  /* 005f6845 call 0x5f5570 */ esp -= 4; M32(esp) = 0x5f684au; SAVEALL; F_005f5570(c); ABI_CHECK(0x5f5570u, 0x5f6845u); RETCHK(0x5f684au, 0x5f6845u); LOADALL;
  /* 005f684a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f684d neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005f684f sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005f6851 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005f6853 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6860(CPU *c) {
  NATIVE_HOOK(0x5f6860u) REGS; LOADALL;
L_005f6860:;
  /* 005f6860 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f6861 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005f6865 push 0x30806 */ { u32 v_ = 0x30806u; esp -= 4; M32(esp) = v_; }
  /* 005f686a mov eax, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); eax = (u32)(M32(m_)); }
  /* 005f686d mov dword ptr [ebx + 0x50], 0 */ { const u32 m_ = (u32)(ebx + 0x50u); M32(m_) = (u32)(0x0u); }
  /* 005f6874 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f6875 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f6877 call 0x5f2450 */ esp -= 4; M32(esp) = 0x5f687cu; SAVEALL; F_005f2450(c); ABI_CHECK(0x5f2450u, 0x5f6877u); RETCHK(0x5f687cu, 0x5f6877u); LOADALL;
  /* 005f687c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f687f mov dword ptr [ebx + 0x4c], eax */ { const u32 m_ = (u32)(ebx + 0x4cu); M32(m_) = (u32)(eax); }
  /* 005f6882 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6884 jne 0x5f6888 */ if (!ZF_) goto L_005f6888;
  /* 005f6886 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f6887 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f6888:;
  /* 005f6888 mov eax, dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f688b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f688d jne 0x5f68a0 */ if (!ZF_) goto L_005f68a0;
  /* 005f688f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6890 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f6891 lea esi, [ebx + 0x10] */ esi = (u32)((u32)(ebx + 0x10u));
  /* 005f6894 lea edi, [ebx + 0x2c] */ edi = (u32)((u32)(ebx + 0x2cu));
  /* 005f6897 mov ecx, 7 */ { ecx = (u32)(0x7u); }
  /* 005f689c rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f689e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f689f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_005f68a0:;
  /* 005f68a0 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005f68a2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f68a3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f68b0(CPU *c) {
  NATIVE_HOOK(0x5f68b0u) REGS; LOADALL;
L_005f68b0:;
  /* 005f68b0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f68b4 mov eax, dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); eax = (u32)(M32(m_)); }
  /* 005f68b7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f68b9 je 0x5f68c4 */ if (ZF_) goto L_005f68c4;
  /* 005f68bb mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f68bf jmp 0x5e02a0 */ SAVEALL; F_005e02a0(c); return;
L_005f68c4:;
  /* 005f68c4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f68d0(CPU *c) {
  NATIVE_HOOK(0x5f68d0u) REGS; LOADALL;
L_005f68d0:;
  /* 005f68d0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f68d4 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f68d8 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f68dc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f68dd mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005f68e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f68e2 mov edi, dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); edi = (u32)(M32(m_)); }
  /* 005f68e5 add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f68e7 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f68e9 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f68ec rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f68ee mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005f68f0 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f68f3 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f68f5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f68f6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f68f7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6900(CPU *c) {
  NATIVE_HOOK(0x5f6900u) REGS; LOADALL;
L_005f6900:;
  /* 005f6900 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f6904 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f6908 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6909 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f690a mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f690d mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f6911 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 005f6915 mov esi, dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); esi = (u32)(M32(m_)); }
  /* 005f6918 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f691a mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f691c shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f691f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f6921 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005f6923 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f6926 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f6928 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f6929 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f692a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6930(CPU *c) {
  NATIVE_HOOK(0x5f6930u) REGS; LOADALL;
L_005f6930:;
  /* 005f6930 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f6934 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f6938 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f693a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f693b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f693c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f693e call dword ptr [0x62e1fc] */ { const u32 m_ = (u32)(0x62e1fcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f6944u; SAVEALL; call_ind(c, t_); RETCHK(0x5f6944u, 0x5f693eu); LOADALL; }
  /* 005f6944 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f6948 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005f694a neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005f694c sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005f694e and eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f6950 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6960(CPU *c) {
  NATIVE_HOOK(0x5f6960u) REGS; LOADALL;
L_005f6960:;
  /* 005f6960 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f6964 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6965 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005f6967 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f6969 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f696a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f696b call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f6971u; SAVEALL; call_ind(c, t_); RETCHK(0x5f6971u, 0x5f696bu); LOADALL; }
  /* 005f6971 cmp eax, 0x102 */ { u32 a_ = eax, b_ = 0x102u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f6976 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f697b jne 0x5f697f */ if (!ZF_) goto L_005f697f;
  /* 005f697d mov eax, esi */ { eax = (u32)(esi); }
L_005f697f:;
  /* 005f697f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6980 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6990(CPU *c) {
  NATIVE_HOOK(0x5f6990u) REGS; LOADALL;
L_005f6990:;
  /* 005f6990 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f6994 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f6998 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f699c mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005f699f mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f69a3 mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 005f69a9 mov dword ptr [eax + 8], 0 */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 005f69b0 mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
  /* 005f69b3 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 005f69b6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f69c0(CPU *c) {
  NATIVE_HOOK(0x5f69c0u) REGS; LOADALL;
L_005f69c0:;
  /* 005f69c0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f69c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f69c5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f69c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f69ca mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f69cd mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 005f69d0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f69d1 push 0x5f6a00 */ { u32 v_ = 0x5f6a00u; esp -= 4; M32(esp) = v_; }
  /* 005f69d6 call 0x5fee80 */ esp -= 4; M32(esp) = 0x5f69dbu; SAVEALL; F_005fee80(c); ABI_CHECK(0x5fee80u, 0x5f69d6u); RETCHK(0x5f69dbu, 0x5f69d6u); LOADALL;
  /* 005f69db add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f69de cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f69e1 jne 0x5f69e7 */ if (!ZF_) goto L_005f69e7;
  /* 005f69e3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f69e5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f69e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f69e7:;
  /* 005f69e7 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f69ea mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005f69ec push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f69ed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f69ee call dword ptr [0x62e0f0] */ { const u32 m_ = (u32)(0x62e0f0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f69f4u; SAVEALL; call_ind(c, t_); RETCHK(0x5f69f4u, 0x5f69eeu); LOADALL; }
  /* 005f69f4 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f69f6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f69f7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6a00(CPU *c) {
  NATIVE_HOOK(0x5f6a00u) REGS; LOADALL;
L_005f6a00:;
  /* 005f6a00 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f6a04 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f6a07 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f6a08 call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f6a0bu; SAVEALL; call_ind(c, t_); RETCHK(0x5f6a0bu, 0x5f6a08u); LOADALL; }
  /* 005f6a0b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6a0e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6a10 je 0x5f6a27 */ if (ZF_) goto L_005f6a27;
  /* 005f6a12 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005f6a14 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f6a16 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f6a18 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f6a19 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f6a1fu; SAVEALL; call_ind(c, t_); RETCHK(0x5f6a1fu, 0x5f6a19u); LOADALL; }
  /* 005f6a1f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005f6a21 call dword ptr [0x62e1b0] */ { const u32 m_ = (u32)(0x62e1b0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f6a27u; SAVEALL; call_ind(c, t_); RETCHK(0x5f6a27u, 0x5f6a21u); LOADALL; }
L_005f6a27:;
  /* 005f6a27 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6a30(CPU *c) {
  NATIVE_HOOK(0x5f6a30u) REGS; LOADALL;
L_005f6a30:;
  /* 005f6a30 push 0x693d94 */ { u32 v_ = 0x693d94u; esp -= 4; M32(esp) = v_; }
  /* 005f6a35 call 0x5f7c50 */ esp -= 4; M32(esp) = 0x5f6a3au; SAVEALL; F_005f7c50(c); ABI_CHECK(0x5f7c50u, 0x5f6a35u); RETCHK(0x5f6a3au, 0x5f6a35u); LOADALL;
  /* 005f6a3a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6a3d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6a3f jne 0x5f6a42 */ if (!ZF_) goto L_005f6a42;
  /* 005f6a41 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f6a42:;
  /* 005f6a42 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f6a44 push 0x63c3e0 */ { u32 v_ = 0x63c3e0u; esp -= 4; M32(esp) = v_; }
  /* 005f6a49 push 0x693d94 */ { u32 v_ = 0x693d94u; esp -= 4; M32(esp) = v_; }
  /* 005f6a4e call 0x5f7c20 */ esp -= 4; M32(esp) = 0x5f6a53u; SAVEALL; F_005f7c20(c); ABI_CHECK(0x5f7c20u, 0x5f6a4eu); RETCHK(0x5f6a53u, 0x5f6a4eu); LOADALL;
  /* 005f6a53 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 005f6a55 push 0x67dee0 */ { u32 v_ = 0x67dee0u; esp -= 4; M32(esp) = v_; }
  /* 005f6a5a push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 005f6a5c push 0x67ddf0 */ { u32 v_ = 0x67ddf0u; esp -= 4; M32(esp) = v_; }
  /* 005f6a61 push 0x693d94 */ { u32 v_ = 0x693d94u; esp -= 4; M32(esp) = v_; }
  /* 005f6a66 call 0x5f7b00 */ esp -= 4; M32(esp) = 0x5f6a6bu; SAVEALL; F_005f7b00(c); ABI_CHECK(0x5f7b00u, 0x5f6a66u); RETCHK(0x5f6a6bu, 0x5f6a66u); LOADALL;
  /* 005f6a6b add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6a6e mov eax, 0x693d94 */ { eax = (u32)(0x693d94u); }
  /* 005f6a73 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6a80(CPU *c) {
  NATIVE_HOOK(0x5f6a80u) REGS; LOADALL;
L_005f6a80:;
  /* 005f6a80 push 0x693d94 */ { u32 v_ = 0x693d94u; esp -= 4; M32(esp) = v_; }
  /* 005f6a85 call 0x5f7cd0 */ esp -= 4; M32(esp) = 0x5f6a8au; SAVEALL; F_005f7cd0(c); ABI_CHECK(0x5f7cd0u, 0x5f6a85u); RETCHK(0x5f6a8au, 0x5f6a85u); LOADALL;
  /* 005f6a8a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6a8d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6a90(CPU *c) {
  NATIVE_HOOK(0x5f6a90u) REGS; LOADALL;
L_005f6a90:;
  /* 005f6a90 push 0x693dbc */ { u32 v_ = 0x693dbcu; esp -= 4; M32(esp) = v_; }
  /* 005f6a95 call 0x5f7c50 */ esp -= 4; M32(esp) = 0x5f6a9au; SAVEALL; F_005f7c50(c); ABI_CHECK(0x5f7c50u, 0x5f6a95u); RETCHK(0x5f6a9au, 0x5f6a95u); LOADALL;
  /* 005f6a9a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6a9d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6a9f jne 0x5f6aa2 */ if (!ZF_) goto L_005f6aa2;
  /* 005f6aa1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f6aa2:;
  /* 005f6aa2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f6aa4 push 0x63c470 */ { u32 v_ = 0x63c470u; esp -= 4; M32(esp) = v_; }
  /* 005f6aa9 push 0x693dbc */ { u32 v_ = 0x693dbcu; esp -= 4; M32(esp) = v_; }
  /* 005f6aae call 0x5f7c20 */ esp -= 4; M32(esp) = 0x5f6ab3u; SAVEALL; F_005f7c20(c); ABI_CHECK(0x5f7c20u, 0x5f6aaeu); RETCHK(0x5f6ab3u, 0x5f6aaeu); LOADALL;
  /* 005f6ab3 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 005f6ab5 push 0x67e088 */ { u32 v_ = 0x67e088u; esp -= 4; M32(esp) = v_; }
  /* 005f6aba push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005f6abc push 0x67dfe8 */ { u32 v_ = 0x67dfe8u; esp -= 4; M32(esp) = v_; }
  /* 005f6ac1 push 0x693dbc */ { u32 v_ = 0x693dbcu; esp -= 4; M32(esp) = v_; }
  /* 005f6ac6 call 0x5f7b00 */ esp -= 4; M32(esp) = 0x5f6acbu; SAVEALL; F_005f7b00(c); ABI_CHECK(0x5f7b00u, 0x5f6ac6u); RETCHK(0x5f6acbu, 0x5f6ac6u); LOADALL;
  /* 005f6acb add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6ace mov eax, 0x693dbc */ { eax = (u32)(0x693dbcu); }
  /* 005f6ad3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6ae0(CPU *c) {
  NATIVE_HOOK(0x5f6ae0u) REGS; LOADALL;
L_005f6ae0:;
  /* 005f6ae0 push 0x693dbc */ { u32 v_ = 0x693dbcu; esp -= 4; M32(esp) = v_; }
  /* 005f6ae5 call 0x5f7cd0 */ esp -= 4; M32(esp) = 0x5f6aeau; SAVEALL; F_005f7cd0(c); ABI_CHECK(0x5f7cd0u, 0x5f6ae5u); RETCHK(0x5f6aeau, 0x5f6ae5u); LOADALL;
  /* 005f6aea add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6aed ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6af0(CPU *c) {
  NATIVE_HOOK(0x5f6af0u) REGS; LOADALL;
L_005f6af0:;
  /* 005f6af0 push 0x693de4 */ { u32 v_ = 0x693de4u; esp -= 4; M32(esp) = v_; }
  /* 005f6af5 call 0x5f7c50 */ esp -= 4; M32(esp) = 0x5f6afau; SAVEALL; F_005f7c50(c); ABI_CHECK(0x5f7c50u, 0x5f6af5u); RETCHK(0x5f6afau, 0x5f6af5u); LOADALL;
  /* 005f6afa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6afd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6aff jne 0x5f6b02 */ if (!ZF_) goto L_005f6b02;
  /* 005f6b01 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f6b02:;
  /* 005f6b02 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f6b04 push 0x63c590 */ { u32 v_ = 0x63c590u; esp -= 4; M32(esp) = v_; }
  /* 005f6b09 push 0x693de4 */ { u32 v_ = 0x693de4u; esp -= 4; M32(esp) = v_; }
  /* 005f6b0e call 0x5f7c20 */ esp -= 4; M32(esp) = 0x5f6b13u; SAVEALL; F_005f7c20(c); ABI_CHECK(0x5f7c20u, 0x5f6b0eu); RETCHK(0x5f6b13u, 0x5f6b0eu); LOADALL;
  /* 005f6b13 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 005f6b15 push 0x67e1b8 */ { u32 v_ = 0x67e1b8u; esp -= 4; M32(esp) = v_; }
  /* 005f6b1a push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 005f6b1c push 0x67e140 */ { u32 v_ = 0x67e140u; esp -= 4; M32(esp) = v_; }
  /* 005f6b21 push 0x693de4 */ { u32 v_ = 0x693de4u; esp -= 4; M32(esp) = v_; }
  /* 005f6b26 call 0x5f7b00 */ esp -= 4; M32(esp) = 0x5f6b2bu; SAVEALL; F_005f7b00(c); ABI_CHECK(0x5f7b00u, 0x5f6b26u); RETCHK(0x5f6b2bu, 0x5f6b26u); LOADALL;
  /* 005f6b2b add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6b2e mov eax, 0x693de4 */ { eax = (u32)(0x693de4u); }
  /* 005f6b33 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6b40(CPU *c) {
  NATIVE_HOOK(0x5f6b40u) REGS; LOADALL;
L_005f6b40:;
  /* 005f6b40 push 0x693de4 */ { u32 v_ = 0x693de4u; esp -= 4; M32(esp) = v_; }
  /* 005f6b45 call 0x5f7cd0 */ esp -= 4; M32(esp) = 0x5f6b4au; SAVEALL; F_005f7cd0(c); ABI_CHECK(0x5f7cd0u, 0x5f6b45u); RETCHK(0x5f6b4au, 0x5f6b45u); LOADALL;
  /* 005f6b4a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6b4d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6b50(CPU *c) {
  NATIVE_HOOK(0x5f6b50u) REGS; LOADALL;
L_005f6b50:;
  /* 005f6b50 mov eax, dword ptr [0x9c003c] */ { const u32 m_ = (u32)(0x9c003cu); eax = (u32)(M32(m_)); }
  /* 005f6b55 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6b56 push 0x3080b */ { u32 v_ = 0x3080bu; esp -= 4; M32(esp) = v_; }
  /* 005f6b5b push 0x693e10 */ { u32 v_ = 0x693e10u; esp -= 4; M32(esp) = v_; }
  /* 005f6b60 push 0x693e74 */ { u32 v_ = 0x693e74u; esp -= 4; M32(esp) = v_; }
  /* 005f6b65 push 0x693e18 */ { u32 v_ = 0x693e18u; esp -= 4; M32(esp) = v_; }
  /* 005f6b6a push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 005f6b6c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f6b6d call 0x5f5ee0 */ esp -= 4; M32(esp) = 0x5f6b72u; SAVEALL; F_005f5ee0(c); ABI_CHECK(0x5f5ee0u, 0x5f6b6du); RETCHK(0x5f6b72u, 0x5f6b6du); LOADALL;
  /* 005f6b72 mov esi, eax */ { esi = (u32)(eax); }
  /* 005f6b74 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6b77 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6b79 jne 0x5f6b7d */ if (!ZF_) goto L_005f6b7d;
  /* 005f6b7b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6b7c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f6b7d:;
  /* 005f6b7d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6b7e call 0x5f6be0 */ esp -= 4; M32(esp) = 0x5f6b83u; SAVEALL; F_005f6be0(c); ABI_CHECK(0x5f6be0u, 0x5f6b7eu); RETCHK(0x5f6b83u, 0x5f6b7eu); LOADALL;
  /* 005f6b83 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 005f6b85 push 0x67e2e0 */ { u32 v_ = 0x67e2e0u; esp -= 4; M32(esp) = v_; }
  /* 005f6b8a push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005f6b8c push 0x67e220 */ { u32 v_ = 0x67e220u; esp -= 4; M32(esp) = v_; }
  /* 005f6b91 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6b92 call 0x5f6570 */ esp -= 4; M32(esp) = 0x5f6b97u; SAVEALL; F_005f6570(c); ABI_CHECK(0x5f6570u, 0x5f6b92u); RETCHK(0x5f6b97u, 0x5f6b92u); LOADALL;
  /* 005f6b97 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6b9a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6b9c jne 0x5f6bab */ if (!ZF_) goto L_005f6bab;
  /* 005f6b9e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6b9f call 0x5f6130 */ esp -= 4; M32(esp) = 0x5f6ba4u; SAVEALL; F_005f6130(c); ABI_CHECK(0x5f6130u, 0x5f6b9fu); RETCHK(0x5f6ba4u, 0x5f6b9fu); LOADALL;
  /* 005f6ba4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6ba7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f6ba9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6baa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f6bab:;
  /* 005f6bab call 0x5f8990 */ esp -= 4; M32(esp) = 0x5f6bb0u; SAVEALL; F_005f8990(c); ABI_CHECK(0x5f8990u, 0x5f6babu); RETCHK(0x5f6bb0u, 0x5f6babu); LOADALL;
  /* 005f6bb0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6bb2 jne 0x5f6bc1 */ if (!ZF_) goto L_005f6bc1;
  /* 005f6bb4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6bb5 call 0x5f6130 */ esp -= 4; M32(esp) = 0x5f6bbau; SAVEALL; F_005f6130(c); ABI_CHECK(0x5f6130u, 0x5f6bb5u); RETCHK(0x5f6bbau, 0x5f6bb5u); LOADALL;
  /* 005f6bba add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6bbd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f6bbf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6bc0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f6bc1:;
  /* 005f6bc1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f6bc2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6bc3 call 0x5f6210 */ esp -= 4; M32(esp) = 0x5f6bc8u; SAVEALL; F_005f6210(c); ABI_CHECK(0x5f6210u, 0x5f6bc3u); RETCHK(0x5f6bc8u, 0x5f6bc3u); LOADALL;
  /* 005f6bc8 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6bcb mov eax, esi */ { eax = (u32)(esi); }
  /* 005f6bcd mov dword ptr [0x693e8c], 1 */ { const u32 m_ = (u32)(0x693e8cu); M32(m_) = (u32)(0x1u); }
  /* 005f6bd7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6bd8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6be0(CPU *c) {
  NATIVE_HOOK(0x5f6be0u) REGS; LOADALL;
L_005f6be0:;
  /* 005f6be0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6be1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f6be5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f6be7 push 0x63c650 */ { u32 v_ = 0x63c650u; esp -= 4; M32(esp) = v_; }
  /* 005f6bec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6bed call 0x5f6240 */ esp -= 4; M32(esp) = 0x5f6bf2u; SAVEALL; F_005f6240(c); ABI_CHECK(0x5f6240u, 0x5f6bedu); RETCHK(0x5f6bf2u, 0x5f6bedu); LOADALL;
  /* 005f6bf2 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f6bf4 mov dword ptr [esi + 0x40], 0x4c */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x4cu); }
  /* 005f6bfb call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f6c00u; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f6bfbu); RETCHK(0x5f6c00u, 0x5f6bfbu); LOADALL;
  /* 005f6c00 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f6c05 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f6c07 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6c09 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6c0c test dx, dx */ { u32 a_ = (edx & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f6c0f je 0x5f6c2c */ if (ZF_) goto L_005f6c2c;
  /* 005f6c11 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f6c13 call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f6c18u; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f6c13u); RETCHK(0x5f6c18u, 0x5f6c13u); LOADALL;
  /* 005f6c18 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f6c1d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f6c1f shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6c21 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6c24 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f6c2a jmp 0x5f6c31 */ goto L_005f6c31;
L_005f6c2c:;
  /* 005f6c2c mov edx, 1 */ { edx = (u32)(0x1u); }
L_005f6c31:;
  /* 005f6c31 test edx, 0xffff0000 */ { u32 a_ = edx, b_ = 0xffff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6c37 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f6c39 je 0x5f6d40 */ if (ZF_) goto L_005f6d40;
  /* 005f6c3f call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f6c44u; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f6c3fu); RETCHK(0x5f6c44u, 0x5f6c3fu); LOADALL;
  /* 005f6c44 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f6c49 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f6c4b shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6c4d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6c50 test dx, dx */ { u32 a_ = (edx & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f6c53 je 0x5f6c74 */ if (ZF_) goto L_005f6c74;
  /* 005f6c55 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f6c57 call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f6c5cu; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f6c57u); RETCHK(0x5f6c5cu, 0x5f6c57u); LOADALL;
  /* 005f6c5c mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f6c61 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f6c63 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6c65 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6c68 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f6c6e mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f6c72 jmp 0x5f6c7c */ goto L_005f6c7c;
L_005f6c74:;
  /* 005f6c74 mov dword ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x1u); }
L_005f6c7c:;
  /* 005f6c7c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f6c7e push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f6c80 mov ah, byte ptr [esp + 0xf] */ { const u32 m_ = (u32)(esp + 0xfu); eax = (eax & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 005f6c84 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6c86 je 0x5f6ce6 */ if (ZF_) goto L_005f6ce6;
  /* 005f6c88 call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f6c8du; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f6c88u); RETCHK(0x5f6c8du, 0x5f6c88u); LOADALL;
  /* 005f6c8d mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f6c92 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f6c94 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6c96 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6c99 test dx, dx */ { u32 a_ = (edx & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f6c9c je 0x5f6ccc */ if (ZF_) goto L_005f6ccc;
  /* 005f6c9e push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f6ca0 call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f6ca5u; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f6ca0u); RETCHK(0x5f6ca5u, 0x5f6ca0u); LOADALL;
  /* 005f6ca5 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f6caa mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f6cac shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6cae add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6cb1 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f6cb7 sar edx, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6cba movsx eax, byte ptr [edx + 0x67cd20] */ { const u32 m_ = (u32)(edx + 0x67cd20u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f6cc1 add eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f6cc4 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f6cc7 jmp 0x5f6e0d */ goto L_005f6e0d;
L_005f6ccc:;
  /* 005f6ccc mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f6cd1 sar edx, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6cd4 movsx eax, byte ptr [edx + 0x67cd20] */ { const u32 m_ = (u32)(edx + 0x67cd20u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f6cdb add eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f6cde add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f6ce1 jmp 0x5f6e0d */ goto L_005f6e0d;
L_005f6ce6:;
  /* 005f6ce6 call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f6cebu; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f6ce6u); RETCHK(0x5f6cebu, 0x5f6ce6u); LOADALL;
  /* 005f6ceb mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f6cf0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f6cf2 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6cf4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6cf7 test dx, dx */ { u32 a_ = (edx & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f6cfa je 0x5f6d28 */ if (ZF_) goto L_005f6d28;
  /* 005f6cfc push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f6cfe call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f6d03u; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f6cfeu); RETCHK(0x5f6d03u, 0x5f6cfeu); LOADALL;
  /* 005f6d03 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f6d08 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f6d0a shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6d0c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6d0f and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f6d15 sar edx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6d18 movsx eax, byte ptr [edx + 0x67cd20] */ { const u32 m_ = (u32)(edx + 0x67cd20u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f6d1f dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f6d20 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f6d23 jmp 0x5f6e0d */ goto L_005f6e0d;
L_005f6d28:;
  /* 005f6d28 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f6d2d sar edx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6d30 movsx eax, byte ptr [edx + 0x67cd20] */ { const u32 m_ = (u32)(edx + 0x67cd20u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f6d37 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f6d38 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f6d3b jmp 0x5f6e0d */ goto L_005f6e0d;
L_005f6d40:;
  /* 005f6d40 call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f6d45u; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f6d40u); RETCHK(0x5f6d45u, 0x5f6d40u); LOADALL;
  /* 005f6d45 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f6d4a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f6d4c shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6d4e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6d51 test dx, dx */ { u32 a_ = (edx & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f6d54 je 0x5f6d71 */ if (ZF_) goto L_005f6d71;
  /* 005f6d56 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f6d58 call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f6d5du; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f6d58u); RETCHK(0x5f6d5du, 0x5f6d58u); LOADALL;
  /* 005f6d5d mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f6d62 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f6d64 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6d66 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6d69 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f6d6f jmp 0x5f6d76 */ goto L_005f6d76;
L_005f6d71:;
  /* 005f6d71 mov edx, 1 */ { edx = (u32)(0x1u); }
L_005f6d76:;
  /* 005f6d76 test dh, 0xff */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f6d79 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f6d7b je 0x5f6dcf */ if (ZF_) goto L_005f6dcf;
  /* 005f6d7d call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f6d82u; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f6d7du); RETCHK(0x5f6d82u, 0x5f6d7du); LOADALL;
  /* 005f6d82 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f6d87 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f6d89 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6d8b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6d8e test dx, dx */ { u32 a_ = (edx & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f6d91 je 0x5f6dbb */ if (ZF_) goto L_005f6dbb;
  /* 005f6d93 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f6d95 call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f6d9au; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f6d95u); RETCHK(0x5f6d9au, 0x5f6d95u); LOADALL;
  /* 005f6d9a mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f6d9f mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f6da1 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6da3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6da6 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f6dac sar edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6daf movsx eax, byte ptr [edx + 0x67cd20] */ { const u32 m_ = (u32)(edx + 0x67cd20u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f6db6 add eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f6db9 jmp 0x5f6e0d */ goto L_005f6e0d;
L_005f6dbb:;
  /* 005f6dbb mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f6dc0 sar edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6dc3 movsx eax, byte ptr [edx + 0x67cd20] */ { const u32 m_ = (u32)(edx + 0x67cd20u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f6dca add eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f6dcd jmp 0x5f6e0d */ goto L_005f6e0d;
L_005f6dcf:;
  /* 005f6dcf call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f6dd4u; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f6dcfu); RETCHK(0x5f6dd4u, 0x5f6dcfu); LOADALL;
  /* 005f6dd4 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f6dd9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f6ddb shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6ddd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6de0 test dx, dx */ { u32 a_ = (edx & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f6de3 je 0x5f6e00 */ if (ZF_) goto L_005f6e00;
  /* 005f6de5 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f6de7 call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f6decu; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f6de7u); RETCHK(0x5f6decu, 0x5f6de7u); LOADALL;
  /* 005f6dec mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f6df1 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f6df3 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f6df5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6df8 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f6dfe jmp 0x5f6e05 */ goto L_005f6e05;
L_005f6e00:;
  /* 005f6e00 mov edx, 1 */ { edx = (u32)(0x1u); }
L_005f6e05:;
  /* 005f6e05 movsx eax, byte ptr [edx + 0x67cd20] */ { const u32 m_ = (u32)(edx + 0x67cd20u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f6e0c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_005f6e0d:;
  /* 005f6e0d mov ecx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); ecx = (u32)(M32(m_)); }
  /* 005f6e10 mov dword ptr [esi + 0x28], 0x5f6e60 */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0x5f6e60u); }
  /* 005f6e17 shl eax, 0x1c */ { u32 n_ = (28u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f6e1a or ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f6e1c mov word ptr [esi + 0x44], 0 */ { const u32 m_ = (u32)(esi + 0x44u); M16(m_) = (u16)(0x0u); }
  /* 005f6e22 mov dword ptr [esi + 0x40], ecx */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(ecx); }
  /* 005f6e25 mov word ptr [esi + 0x46], 1 */ { const u32 m_ = (u32)(esi + 0x46u); M16(m_) = (u16)(0x1u); }
  /* 005f6e2b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6e2c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6e30(CPU *c) {
  NATIVE_HOOK(0x5f6e30u) REGS; LOADALL;
L_005f6e30:;
  /* 005f6e30 mov eax, dword ptr [0x693e8c] */ { const u32 m_ = (u32)(0x693e8cu); eax = (u32)(M32(m_)); }
  /* 005f6e35 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6e37 je 0x5f6e4d */ if (ZF_) goto L_005f6e4d;
  /* 005f6e39 call 0x5f89e0 */ esp -= 4; M32(esp) = 0x5f6e3eu; SAVEALL; F_005f89e0(c); ABI_CHECK(0x5f89e0u, 0x5f6e39u); RETCHK(0x5f6e3eu, 0x5f6e39u); LOADALL;
  /* 005f6e3e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f6e40 jne 0x5f6e43 */ if (!ZF_) goto L_005f6e43;
  /* 005f6e42 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f6e43:;
  /* 005f6e43 mov dword ptr [0x693e8c], 0 */ { const u32 m_ = (u32)(0x693e8cu); M32(m_) = (u32)(0x0u); }
L_005f6e4d:;
  /* 005f6e4d push 0x693e18 */ { u32 v_ = 0x693e18u; esp -= 4; M32(esp) = v_; }
  /* 005f6e52 call 0x5f6130 */ esp -= 4; M32(esp) = 0x5f6e57u; SAVEALL; F_005f6130(c); ABI_CHECK(0x5f6130u, 0x5f6e52u); RETCHK(0x5f6e57u, 0x5f6e52u); LOADALL;
  /* 005f6e57 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6e5a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6e60(CPU *c) {
  NATIVE_HOOK(0x5f6e60u) REGS; LOADALL;
L_005f6e60:;
  /* 005f6e60 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6e63 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f6e67 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6e68 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f6e69 mov dword ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 005f6e71 lea ecx, [eax + 0x28] */ ecx = (u32)((u32)(eax + 0x28u));
  /* 005f6e74 mov dword ptr [esp + 0xc], 0 */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 005f6e7c mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f6e80 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005f6e82 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f6e86 mov dword ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0x0u); }
  /* 005f6e8e mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005f6e92 mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 005f6e94 mov dword ptr [eax + 0x64], 0x41200000 */ { const u32 m_ = (u32)(eax + 0x64u); M32(m_) = (u32)(0x41200000u); }
  /* 005f6e9b mov dword ptr [eax + 0x70], 0x7b */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(0x7bu); }
  /* 005f6ea2 mov dword ptr [edi + 4], edx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f6ea5 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 005f6ea8 lea edi, [eax + 0x34] */ edi = (u32)((u32)(eax + 0x34u));
  /* 005f6eab mov dword ptr [eax + 0x34], ecx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(ecx); }
  /* 005f6eae xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f6eb0 mov dword ptr [eax + 0x4c], ecx */ { const u32 m_ = (u32)(eax + 0x4cu); M32(m_) = (u32)(ecx); }
  /* 005f6eb3 mov dword ptr [eax + 0x50], ecx */ { const u32 m_ = (u32)(eax + 0x50u); M32(m_) = (u32)(ecx); }
  /* 005f6eb6 mov dword ptr [edi + 4], edx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f6eb9 mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005f6ebd mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 005f6ec1 lea ecx, [eax + 0x40] */ ecx = (u32)((u32)(eax + 0x40u));
  /* 005f6ec4 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 005f6ec7 mov edi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005f6ecb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005f6ecd mov edx, 0x3f800000 */ { edx = (u32)(0x3f800000u); }
  /* 005f6ed2 mov dword ptr [eax + 0x54], edx */ { const u32 m_ = (u32)(eax + 0x54u); M32(m_) = (u32)(edx); }
  /* 005f6ed5 mov dword ptr [esp + 0xc], edx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(edx); }
  /* 005f6ed9 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005f6edb mov edi, edx */ { edi = (u32)(edx); }
  /* 005f6edd mov dword ptr [eax + 0x68], edx */ { const u32 m_ = (u32)(eax + 0x68u); M32(m_) = (u32)(edx); }
  /* 005f6ee0 mov dword ptr [eax + 0x6c], edx */ { const u32 m_ = (u32)(eax + 0x6cu); M32(m_) = (u32)(edx); }
  /* 005f6ee3 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 005f6ee6 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005f6eea mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 005f6eed pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f6eee fld dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); FPUSH((double)MF32(m_)); }
  /* 005f6ef1 fmul dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f6ef7 fld dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); FPUSH((double)MF32(m_)); }
  /* 005f6efa fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 005f6efc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6efd fstp dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f6f00 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005f6f02 fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 005f6f04 fstp dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f6f07 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005f6f09 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005f6f0b fmul dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f6f11 fld dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); FPUSH((double)MF32(m_)); }
  /* 005f6f14 fmul dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f6f1a fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 005f6f1c fstp dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f6f1f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f6f22 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6f30(CPU *c) {
  NATIVE_HOOK(0x5f6f30u) REGS; LOADALL;
L_005f6f30:;
  /* 005f6f30 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f6f34 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f6f38 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6f39 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 005f6f3b lea ecx, [eax + 0x28] */ ecx = (u32)((u32)(eax + 0x28u));
  /* 005f6f3e mov dword ptr [eax + 0x28], esi */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(esi); }
  /* 005f6f41 mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 005f6f44 mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 005f6f47 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f6f4a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6f4b mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f6f4e mov ecx, dword ptr [eax + 0x70] */ { const u32 m_ = (u32)(eax + 0x70u); ecx = (u32)(M32(m_)); }
  /* 005f6f51 or ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f6f54 mov dword ptr [eax + 0x70], ecx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(ecx); }
  /* 005f6f57 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6f60(CPU *c) {
  NATIVE_HOOK(0x5f6f60u) REGS; LOADALL;
L_005f6f60:;
  /* 005f6f60 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f6f64 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f6f68 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6f69 lea ecx, [eax + 0x28] */ ecx = (u32)((u32)(eax + 0x28u));
  /* 005f6f6c mov esi, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); esi = (u32)(M32(m_)); }
  /* 005f6f6f mov dword ptr [edx], esi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(esi); }
  /* 005f6f71 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 005f6f74 mov dword ptr [edx + 4], esi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(esi); }
  /* 005f6f77 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6f78 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f6f7b mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005f6f7e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6f80(CPU *c) {
  NATIVE_HOOK(0x5f6f80u) REGS; LOADALL;
L_005f6f80:;
  /* 005f6f80 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f6f84 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f6f88 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6f89 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 005f6f8b lea ecx, [eax + 0x34] */ ecx = (u32)((u32)(eax + 0x34u));
  /* 005f6f8e mov dword ptr [eax + 0x34], esi */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(esi); }
  /* 005f6f91 mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 005f6f94 mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 005f6f97 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f6f9a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6f9b mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f6f9e mov ecx, dword ptr [eax + 0x70] */ { const u32 m_ = (u32)(eax + 0x70u); ecx = (u32)(M32(m_)); }
  /* 005f6fa1 or ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f6fa4 mov dword ptr [eax + 0x70], ecx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(ecx); }
  /* 005f6fa7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6fb0(CPU *c) {
  NATIVE_HOOK(0x5f6fb0u) REGS; LOADALL;
L_005f6fb0:;
  /* 005f6fb0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f6fb4 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f6fb8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6fb9 lea ecx, [eax + 0x34] */ ecx = (u32)((u32)(eax + 0x34u));
  /* 005f6fbc mov esi, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); esi = (u32)(M32(m_)); }
  /* 005f6fbf mov dword ptr [edx], esi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(esi); }
  /* 005f6fc1 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 005f6fc4 mov dword ptr [edx + 4], esi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(esi); }
  /* 005f6fc7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f6fc8 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f6fcb mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005f6fce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f6fd0(CPU *c) {
  NATIVE_HOOK(0x5f6fd0u) REGS; LOADALL;
L_005f6fd0:;
  /* 005f6fd0 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f6fd4 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f6fd8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f6fd9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f6fda lea edx, [ecx + 0x10] */ edx = (u32)((u32)(ecx + 0x10u));
  /* 005f6fdd lea esi, [eax + 0x40] */ esi = (u32)((u32)(eax + 0x40u));
  /* 005f6fe0 mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 005f6fe2 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005f6fe4 mov edi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005f6fe7 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 005f6fea mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f6fed mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f6ff0 lea edx, [ecx + 0x20] */ edx = (u32)((u32)(ecx + 0x20u));
  /* 005f6ff3 lea esi, [eax + 0x4c] */ esi = (u32)((u32)(eax + 0x4cu));
  /* 005f6ff6 mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 005f6ff8 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005f6ffa mov edi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005f6ffd mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 005f7000 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f7001 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f7004 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f7007 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 005f7009 lea edx, [eax + 0x58] */ edx = (u32)((u32)(eax + 0x58u));
  /* 005f700c mov dword ptr [eax + 0x58], esi */ { const u32 m_ = (u32)(eax + 0x58u); M32(m_) = (u32)(esi); }
  /* 005f700f mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 005f7012 mov dword ptr [edx + 4], esi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(esi); }
  /* 005f7015 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f7018 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f7019 mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005f701c mov ecx, dword ptr [eax + 0x70] */ { const u32 m_ = (u32)(eax + 0x70u); ecx = (u32)(M32(m_)); }
  /* 005f701f or ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f7022 mov dword ptr [eax + 0x70], ecx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(ecx); }
  /* 005f7025 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7030(CPU *c) {
  NATIVE_HOOK(0x5f7030u) REGS; LOADALL;
L_005f7030:;
  /* 005f7030 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f7034 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f7038 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7039 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f703a lea edx, [eax + 0x40] */ edx = (u32)((u32)(eax + 0x40u));
  /* 005f703d lea esi, [ecx + 0x10] */ esi = (u32)((u32)(ecx + 0x10u));
  /* 005f7040 mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 005f7042 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005f7044 mov edi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005f7047 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 005f704a mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f704d mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f7050 lea edx, [eax + 0x4c] */ edx = (u32)((u32)(eax + 0x4cu));
  /* 005f7053 lea esi, [ecx + 0x20] */ esi = (u32)((u32)(ecx + 0x20u));
  /* 005f7056 mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 005f7058 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005f705a mov edi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005f705d mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 005f7060 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f7061 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f7064 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f7067 lea edx, [eax + 0x58] */ edx = (u32)((u32)(eax + 0x58u));
  /* 005f706a mov esi, dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); esi = (u32)(M32(m_)); }
  /* 005f706d mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 005f706f mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 005f7072 mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 005f7075 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f7076 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f7079 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f707c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7080(CPU *c) {
  NATIVE_HOOK(0x5f7080u) REGS; LOADALL;
L_005f7080:;
  /* 005f7080 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f7084 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f7088 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7089 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f708a mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 005f708c lea ecx, [eax + 0x40] */ ecx = (u32)((u32)(eax + 0x40u));
  /* 005f708f fld dword ptr [eax + 0x54] */ { const u32 m_ = (u32)(eax + 0x54u); FPUSH((double)MF32(m_)); }
  /* 005f7092 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005f7094 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005f7096 mov edi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005f7099 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 005f709c mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f709f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f70a0 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f70a3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f70a4 fmul dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f70a7 fld dword ptr [eax + 0x50] */ { const u32 m_ = (u32)(eax + 0x50u); FPUSH((double)MF32(m_)); }
  /* 005f70aa fmul dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f70ad fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 005f70af fstp dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f70b2 fld dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); FPUSH((double)MF32(m_)); }
  /* 005f70b5 fmul dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f70b8 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005f70ba fmul dword ptr [eax + 0x54] */ { const u32 m_ = (u32)(eax + 0x54u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f70bd fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 005f70bf fstp dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f70c2 fld dword ptr [eax + 0x50] */ { const u32 m_ = (u32)(eax + 0x50u); FPUSH((double)MF32(m_)); }
  /* 005f70c5 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f70c7 mov ecx, dword ptr [eax + 0x70] */ { const u32 m_ = (u32)(eax + 0x70u); ecx = (u32)(M32(m_)); }
  /* 005f70ca or ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f70cd fld dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 005f70d0 fmul dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f70d3 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 005f70d5 mov dword ptr [eax + 0x70], ecx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(ecx); }
  /* 005f70d8 fstp dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f70db ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f70e0(CPU *c) {
  NATIVE_HOOK(0x5f70e0u) REGS; LOADALL;
L_005f70e0:;
  /* 005f70e0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f70e4 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f70e8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f70e9 lea ecx, [eax + 0x40] */ ecx = (u32)((u32)(eax + 0x40u));
  /* 005f70ec mov esi, dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); esi = (u32)(M32(m_)); }
  /* 005f70ef mov dword ptr [edx], esi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(esi); }
  /* 005f70f1 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 005f70f4 mov dword ptr [edx + 4], esi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(esi); }
  /* 005f70f7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f70f8 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f70fb mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005f70fe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7100(CPU *c) {
  NATIVE_HOOK(0x5f7100u) REGS; LOADALL;
L_005f7100:;
  /* 005f7100 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f7104 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f7108 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7109 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f710a mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 005f710c lea ecx, [eax + 0x4c] */ ecx = (u32)((u32)(eax + 0x4cu));
  /* 005f710f mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005f7111 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005f7113 mov edi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005f7116 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 005f7119 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f711c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f711d mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f7120 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f7121 fld dword ptr [eax + 0x54] */ { const u32 m_ = (u32)(eax + 0x54u); FPUSH((double)MF32(m_)); }
  /* 005f7124 fmul dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f7127 fld dword ptr [eax + 0x50] */ { const u32 m_ = (u32)(eax + 0x50u); FPUSH((double)MF32(m_)); }
  /* 005f712a fmul dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f712d fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 005f712f fstp dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f7132 fld dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); FPUSH((double)MF32(m_)); }
  /* 005f7135 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f7137 fld dword ptr [eax + 0x54] */ { const u32 m_ = (u32)(eax + 0x54u); FPUSH((double)MF32(m_)); }
  /* 005f713a fmul dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f713d fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 005f713f fstp dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f7142 fld dword ptr [eax + 0x50] */ { const u32 m_ = (u32)(eax + 0x50u); FPUSH((double)MF32(m_)); }
  /* 005f7145 fmul dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f7148 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005f714a fmul dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f714d mov ecx, dword ptr [eax + 0x70] */ { const u32 m_ = (u32)(eax + 0x70u); ecx = (u32)(M32(m_)); }
  /* 005f7150 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 005f7152 or ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f7155 fstp dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f7158 mov dword ptr [eax + 0x70], ecx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(ecx); }
  /* 005f715b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7160(CPU *c) {
  NATIVE_HOOK(0x5f7160u) REGS; LOADALL;
L_005f7160:;
  /* 005f7160 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f7164 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f7168 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7169 lea ecx, [eax + 0x4c] */ ecx = (u32)((u32)(eax + 0x4cu));
  /* 005f716c mov esi, dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); esi = (u32)(M32(m_)); }
  /* 005f716f mov dword ptr [edx], esi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(esi); }
  /* 005f7171 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 005f7174 mov dword ptr [edx + 4], esi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(esi); }
  /* 005f7177 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f7178 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f717b mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005f717e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7180(CPU *c) {
  NATIVE_HOOK(0x5f7180u) REGS; LOADALL;
L_005f7180:;
  /* 005f7180 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f7184 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f7186 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f718a mov dword ptr [eax + 0x68], ecx */ { const u32 m_ = (u32)(eax + 0x68u); M32(m_) = (u32)(ecx); }
  /* 005f718d mov ecx, dword ptr [eax + 0x70] */ { const u32 m_ = (u32)(eax + 0x70u); ecx = (u32)(M32(m_)); }
  /* 005f7190 or ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f7193 mov dword ptr [eax + 0x70], ecx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(ecx); }
  /* 005f7196 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f71a0(CPU *c) {
  NATIVE_HOOK(0x5f71a0u) REGS; LOADALL;
L_005f71a0:;
  /* 005f71a0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f71a4 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f71a6 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f71aa mov dword ptr [eax + 0x6c], ecx */ { const u32 m_ = (u32)(eax + 0x6cu); M32(m_) = (u32)(ecx); }
  /* 005f71ad mov ecx, dword ptr [eax + 0x70] */ { const u32 m_ = (u32)(eax + 0x70u); ecx = (u32)(M32(m_)); }
  /* 005f71b0 or ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f71b3 mov dword ptr [eax + 0x70], ecx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(ecx); }
  /* 005f71b6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f71c0(CPU *c) {
  NATIVE_HOOK(0x5f71c0u) REGS; LOADALL;
L_005f71c0:;
  /* 005f71c0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f71c4 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f71c8 mov ecx, dword ptr [eax + 0x6c] */ { const u32 m_ = (u32)(eax + 0x6cu); ecx = (u32)(M32(m_)); }
  /* 005f71cb mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005f71cd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f71d0(CPU *c) {
  NATIVE_HOOK(0x5f71d0u) REGS; LOADALL;
L_005f71d0:;
  /* 005f71d0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f71d4 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f71d6 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f71da mov dword ptr [eax + 0x64], ecx */ { const u32 m_ = (u32)(eax + 0x64u); M32(m_) = (u32)(ecx); }
  /* 005f71dd mov ecx, dword ptr [eax + 0x70] */ { const u32 m_ = (u32)(eax + 0x70u); ecx = (u32)(M32(m_)); }
  /* 005f71e0 or ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f71e3 mov dword ptr [eax + 0x70], ecx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(ecx); }
  /* 005f71e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f71f0(CPU *c) {
  NATIVE_HOOK(0x5f71f0u) REGS; LOADALL;
L_005f71f0:;
  /* 005f71f0 push 0x693e90 */ { u32 v_ = 0x693e90u; esp -= 4; M32(esp) = v_; }
  /* 005f71f5 call dword ptr [0x62e204] */ { const u32 m_ = (u32)(0x62e204u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f71fbu; SAVEALL; call_ind(c, t_); RETCHK(0x5f71fbu, 0x5f71f5u); LOADALL; }
  /* 005f71fb cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f71fe mov dword ptr [0x693ea0], eax */ { const u32 m_ = (u32)(0x693ea0u); M32(m_) = (u32)(eax); }
  /* 005f7203 jne 0x5f7210 */ if (!ZF_) goto L_005f7210;
  /* 005f7205 push 0x693e98 */ { u32 v_ = 0x693e98u; esp -= 4; M32(esp) = v_; }
  /* 005f720a call dword ptr [0x62e200] */ { const u32 m_ = (u32)(0x62e200u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f7210u; SAVEALL; call_ind(c, t_); RETCHK(0x5f7210u, 0x5f720au); LOADALL; }
L_005f7210:;
  /* 005f7210 call 0x5f7230 */ esp -= 4; M32(esp) = 0x5f7215u; SAVEALL; F_005f7230(c); ABI_CHECK(0x5f7230u, 0x5f7210u); RETCHK(0x5f7215u, 0x5f7210u); LOADALL;
  /* 005f7215 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f721a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7220(CPU *c) {
  NATIVE_HOOK(0x5f7220u) REGS; LOADALL;
L_005f7220:;
  /* 005f7220 jmp 0x5f7250 */ goto L_005f7250;
L_005f7250:;
  /* 005f7250 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7251 call 0x5f7280 */ esp -= 4; M32(esp) = 0x5f7256u; SAVEALL; F_005f7280(c); ABI_CHECK(0x5f7280u, 0x5f7251u); RETCHK(0x5f7256u, 0x5f7251u); LOADALL;
  /* 005f7256 mov esi, dword ptr [0x693e90] */ { const u32 m_ = (u32)(0x693e90u); esi = (u32)(M32(m_)); }
  /* 005f725c xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f725e xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f7260 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7262 ja 0x5f7273 */ if (!(CF_|ZF_)) goto L_005f7273;
  /* 005f7264 jb 0x5f726a */ if (CF_) goto L_005f726a;
  /* 005f7266 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7268 jae 0x5f7273 */ if (!CF_) goto L_005f7273;
L_005f726a:;
  /* 005f726a or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f726d sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f726f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f7270 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f7272 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f7273:;
  /* 005f7273 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f7275 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f7276 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7230(CPU *c) {
  NATIVE_HOOK(0x5f7230u) REGS; LOADALL;
L_005f7230:;
  /* 005f7230 call 0x5f7280 */ esp -= 4; M32(esp) = 0x5f7235u; SAVEALL; F_005f7280(c); ABI_CHECK(0x5f7280u, 0x5f7230u); RETCHK(0x5f7235u, 0x5f7230u); LOADALL;
  /* 005f7235 mov dword ptr [0x693e90], eax */ { const u32 m_ = (u32)(0x693e90u); M32(m_) = (u32)(eax); }
  /* 005f723a mov dword ptr [0x693e94], 0 */ { const u32 m_ = (u32)(0x693e94u); M32(m_) = (u32)(0x0u); }
  /* 005f7244 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7280(CPU *c) {
  NATIVE_HOOK(0x5f7280u) REGS; LOADALL;
L_005f7280:;
  /* 005f7280 mov eax, dword ptr [0x693ea0] */ { const u32 m_ = (u32)(0x693ea0u); eax = (u32)(M32(m_)); }
  /* 005f7285 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7288 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f728b jne 0x5f72a0 */ if (!ZF_) goto L_005f72a0;
  /* 005f728d lea eax, [esp] */ eax = (u32)((u32)(esp));
  /* 005f7291 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f7292 call dword ptr [0x62e204] */ { const u32 m_ = (u32)(0x62e204u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f7298u; SAVEALL; call_ind(c, t_); RETCHK(0x5f7298u, 0x5f7292u); LOADALL; }
  /* 005f7298 mov eax, dword ptr [esp] */ { const u32 m_ = (u32)(esp); eax = (u32)(M32(m_)); }
  /* 005f729c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f729f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f72a0:;
  /* 005f72a0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f72a3 jmp dword ptr [0x62e5e8] */ { const u32 m_ = (u32)(0x62e5e8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005f72b0(CPU *c) {
  NATIVE_HOOK(0x5f72b0u) REGS; LOADALL;
L_005f72b0:;
  /* 005f72b0 push 0x4080b */ { u32 v_ = 0x4080bu; esp -= 4; M32(esp) = v_; }
  /* 005f72b5 push 0x693ea4 */ { u32 v_ = 0x693ea4u; esp -= 4; M32(esp) = v_; }
  /* 005f72ba push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f72bc push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005f72be mov eax, 0x693ec8 */ { eax = (u32)(0x693ec8u); }
  /* 005f72c3 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 005f72c5 push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 005f72c7 mov dword ptr [0x693ec8], eax */ { const u32 m_ = (u32)(0x693ec8u); M32(m_) = (u32)(eax); }
  /* 005f72cc mov dword ptr [0x693ecc], eax */ { const u32 m_ = (u32)(0x693eccu); M32(m_) = (u32)(eax); }
  /* 005f72d1 call 0x5f1780 */ esp -= 4; M32(esp) = 0x5f72d6u; SAVEALL; F_005f1780(c); ABI_CHECK(0x5f1780u, 0x5f72d1u); RETCHK(0x5f72d6u, 0x5f72d1u); LOADALL;
  /* 005f72d6 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f72d9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f72db jne 0x5f72de */ if (!ZF_) goto L_005f72de;
  /* 005f72dd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f72de:;
  /* 005f72de mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f72e3 mov dword ptr [0x693ed0], eax */ { const u32 m_ = (u32)(0x693ed0u); M32(m_) = (u32)(eax); }
  /* 005f72e8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f72f0(CPU *c) {
  NATIVE_HOOK(0x5f72f0u) REGS; LOADALL;
L_005f72f0:;
  /* 005f72f0 mov eax, dword ptr [0x693ec8] */ { const u32 m_ = (u32)(0x693ec8u); eax = (u32)(M32(m_)); }
  /* 005f72f5 cmp eax, 0x693ec8 */ { u32 a_ = eax, b_ = 0x693ec8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f72fa je 0x5f7316 */ if (ZF_) goto L_005f7316;
L_005f72fc:;
  /* 005f72fc add eax, -8 */ { u32 a_ = eax, b_ = 0xfffffff8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f72ff push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f7301 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f7302 call 0x5f7350 */ esp -= 4; M32(esp) = 0x5f7307u; SAVEALL; F_005f7350(c); ABI_CHECK(0x5f7350u, 0x5f7302u); RETCHK(0x5f7307u, 0x5f7302u); LOADALL;
  /* 005f7307 mov eax, dword ptr [0x693ec8] */ { const u32 m_ = (u32)(0x693ec8u); eax = (u32)(M32(m_)); }
  /* 005f730c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f730f cmp eax, 0x693ec8 */ { u32 a_ = eax, b_ = 0x693ec8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7314 jne 0x5f72fc */ if (!ZF_) goto L_005f72fc;
L_005f7316:;
  /* 005f7316 push 0x693ea4 */ { u32 v_ = 0x693ea4u; esp -= 4; M32(esp) = v_; }
  /* 005f731b call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f7320u; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f731bu); RETCHK(0x5f7320u, 0x5f731bu); LOADALL;
  /* 005f7320 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7323 mov dword ptr [0x693ed0], 0 */ { const u32 m_ = (u32)(0x693ed0u); M32(m_) = (u32)(0x0u); }
  /* 005f732d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7330(CPU *c) {
  NATIVE_HOOK(0x5f7330u) REGS; LOADALL;
L_005f7330:;
  /* 005f7330 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f7334 test byte ptr [eax + 0x10], 1 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f7338 jne 0x5f7348 */ if (!ZF_) goto L_005f7348;
  /* 005f733a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f733b push 0x693ea4 */ { u32 v_ = 0x693ea4u; esp -= 4; M32(esp) = v_; }
  /* 005f7340 call 0x5f1a50 */ esp -= 4; M32(esp) = 0x5f7345u; SAVEALL; F_005f1a50(c); ABI_CHECK(0x5f1a50u, 0x5f7340u); RETCHK(0x5f7345u, 0x5f7340u); LOADALL;
  /* 005f7345 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f7348:;
  /* 005f7348 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7350(CPU *c) {
  NATIVE_HOOK(0x5f7350u) REGS; LOADALL;
L_005f7350:;
  /* 005f7350 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7353 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f7354 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7355 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f7356 mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 005f735a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005f735c cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f735e mov dword ptr [esp + 0xc], ebx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 005f7362 mov dword ptr [esp + 0x10], ebx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 005f7366 mov dword ptr [esp + 0x14], ebx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ebx); }
  /* 005f736a mov dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ebx); }
  /* 005f736e jne 0x5f7374 */ if (!ZF_) goto L_005f7374;
  /* 005f7370 lea edi, [esp + 0xc] */ edi = (u32)((u32)(esp + 0xcu));
L_005f7374:;
  /* 005f7374 mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 005f7378 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f737b cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f737d jbe 0x5f738a */ if ((CF_|ZF_)) goto L_005f738a;
  /* 005f737f dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f7380 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f7381 mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f7384 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f7385 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f7386 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7389 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f738a:;
  /* 005f738a mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f738d cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f738f je 0x5f73a5 */ if (ZF_) goto L_005f73a5;
  /* 005f7391 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f7392 call 0x5f79c0 */ esp -= 4; M32(esp) = 0x5f7397u; SAVEALL; F_005f79c0(c); ABI_CHECK(0x5f79c0u, 0x5f7392u); RETCHK(0x5f7397u, 0x5f7392u); LOADALL;
  /* 005f7397 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f739a cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f739d jne 0x5f73a5 */ if (!ZF_) goto L_005f73a5;
  /* 005f739f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f73a2 mov dword ptr [edi + 0xc], eax */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(eax); }
L_005f73a5:;
  /* 005f73a5 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005f73a7 mov edx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 005f73aa cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f73ac je 0x5f73bc */ if (ZF_) goto L_005f73bc;
  /* 005f73ae mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005f73b0 mov eax, dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); eax = (u32)(M32(m_)); }
  /* 005f73b3 and eax, 0xfffffff */ { u32 a_ = eax, b_ = 0xfffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f73b8 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f73ba jmp 0x5f73bf */ goto L_005f73bf;
L_005f73bc:;
  /* 005f73bc lea eax, [ecx + 0x28] */ eax = (u32)((u32)(ecx + 0x28u));
L_005f73bf:;
  /* 005f73bf mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005f73c1 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f73c2 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 005f73c4 jne 0x5f73dc */ if (!ZF_) goto L_005f73dc;
  /* 005f73c6 test byte ptr [esi + 0x10], 2 */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f73ca jne 0x5f73dc */ if (!ZF_) goto L_005f73dc;
  /* 005f73cc mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f73cf mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005f73d1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f73d2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f73d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f73d4 call 0x5f5b50 */ esp -= 4; M32(esp) = 0x5f73d9u; SAVEALL; F_005f5b50(c); ABI_CHECK(0x5f5b50u, 0x5f73d4u); RETCHK(0x5f73d9u, 0x5f73d4u); LOADALL;
  /* 005f73d9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f73dc:;
  /* 005f73dc mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f73df mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f73e2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f73e3 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005f73e5 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f73e8 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f73eb mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005f73ee call 0x5f7330 */ esp -= 4; M32(esp) = 0x5f73f3u; SAVEALL; F_005f7330(c); ABI_CHECK(0x5f7330u, 0x5f73eeu); RETCHK(0x5f73f3u, 0x5f73eeu); LOADALL;
  /* 005f73f3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f73f6 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 005f73f9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f73fa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f73fb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f73fc add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f73ff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7400(CPU *c) {
  NATIVE_HOOK(0x5f7400u) REGS; LOADALL;
L_005f7400:;
  /* 005f7400 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7401 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f7405 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f7406 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 005f740a mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f740d mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005f740f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f7410 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f7413 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f7417 lea ecx, [ecx + eax*8] */ ecx = (u32)((u32)(ecx + eax * 8u));
  /* 005f741a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f741c mov ax, word ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f7420 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f7421 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f7422 call dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f7424u; SAVEALL; call_ind(c, t_); RETCHK(0x5f7424u, 0x5f7422u); LOADALL; }
  /* 005f7424 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7427 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005f7429 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005f742b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f742c and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f742e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f742f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7430(CPU *c) {
  NATIVE_HOOK(0x5f7430u) REGS; LOADALL;
L_005f7430:;
  /* 005f7430 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f7434 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7435 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f7439 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f743c mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f743f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f7441 mov ax, word ptr [ecx + edx*8 + 4] */ { const u32 m_ = (u32)(ecx + edx * 8u + 0x4u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f7446 lea ecx, [ecx + edx*8] */ ecx = (u32)((u32)(ecx + edx * 8u));
  /* 005f7449 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 005f744d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f744e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f744f mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005f7451 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f7452 call dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f7454u; SAVEALL; call_ind(c, t_); RETCHK(0x5f7454u, 0x5f7452u); LOADALL; }
  /* 005f7454 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7457 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005f7459 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005f745b and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f745d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f745e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7460(CPU *c) {
  NATIVE_HOOK(0x5f7460u) REGS; LOADALL;
L_005f7460:;
  /* 005f7460 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f7464 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7466 jne 0x5f7469 */ if (!ZF_) goto L_005f7469;
  /* 005f7468 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f7469:;
  /* 005f7469 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f746d lea ecx, [esp + 0x10] */ ecx = (u32)((u32)(esp + 0x10u));
  /* 005f7471 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f7472 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f7476 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f7477 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f7478 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f7479 call 0x5f7400 */ esp -= 4; M32(esp) = 0x5f747eu; SAVEALL; F_005f7400(c); ABI_CHECK(0x5f7400u, 0x5f7479u); RETCHK(0x5f747eu, 0x5f7479u); LOADALL;
  /* 005f747e add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7481 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7490(CPU *c) {
  NATIVE_HOOK(0x5f7490u) REGS; LOADALL;
L_005f7490:;
  /* 005f7490 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f7494 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7496 jne 0x5f7499 */ if (!ZF_) goto L_005f7499;
  /* 005f7498 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f7499:;
  /* 005f7499 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f749d jmp 0x5f7400 */ SAVEALL; F_005f7400(c); return;
}

void F_005f74b0(CPU *c) {
  NATIVE_HOOK(0x5f74b0u) REGS; LOADALL;
L_005f74b0:;
  /* 005f74b0 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f74b4 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f74b8 lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 005f74bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f74bd mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f74c1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f74c2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f74c3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f74c4 call 0x5f7430 */ esp -= 4; M32(esp) = 0x5f74c9u; SAVEALL; F_005f7430(c); ABI_CHECK(0x5f7430u, 0x5f74c4u); RETCHK(0x5f74c9u, 0x5f74c4u); LOADALL;
  /* 005f74c9 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005f74cd add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f74d0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f74d2 je 0x5f74dd */ if (ZF_) goto L_005f74dd;
  /* 005f74d4 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f74d6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f74d8 setne dl */ { edx = (edx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005f74db mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
L_005f74dd:;
  /* 005f74dd mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f74e1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f74f0(CPU *c) {
  NATIVE_HOOK(0x5f74f0u) REGS; LOADALL;
L_005f74f0:;
  /* 005f74f0 mov eax, 0x693ee0 */ { eax = (u32)(0x693ee0u); }
  /* 005f74f5 mov dword ptr [0x693ee8], 1 */ { const u32 m_ = (u32)(0x693ee8u); M32(m_) = (u32)(0x1u); }
  /* 005f74ff mov dword ptr [0x693ee0], eax */ { const u32 m_ = (u32)(0x693ee0u); M32(m_) = (u32)(eax); }
  /* 005f7504 mov dword ptr [0x693ee4], eax */ { const u32 m_ = (u32)(0x693ee4u); M32(m_) = (u32)(eax); }
  /* 005f7509 mov eax, 0x693ed4 */ { eax = (u32)(0x693ed4u); }
  /* 005f750e mov dword ptr [0x693ed4], eax */ { const u32 m_ = (u32)(0x693ed4u); M32(m_) = (u32)(eax); }
  /* 005f7513 mov dword ptr [0x693ed8], eax */ { const u32 m_ = (u32)(0x693ed8u); M32(m_) = (u32)(eax); }
  /* 005f7518 call 0x5f89f0 */ esp -= 4; M32(esp) = 0x5f751du; SAVEALL; F_005f89f0(c); ABI_CHECK(0x5f89f0u, 0x5f7518u); RETCHK(0x5f751du, 0x5f7518u); LOADALL;
  /* 005f751d mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f7522 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7530(CPU *c) {
  NATIVE_HOOK(0x5f7530u) REGS; LOADALL;
L_005f7530:;
  /* 005f7530 call 0x5f8ce0 */ esp -= 4; M32(esp) = 0x5f7535u; SAVEALL; F_005f8ce0(c); ABI_CHECK(0x5f8ce0u, 0x5f7530u); RETCHK(0x5f7535u, 0x5f7530u); LOADALL;
  /* 005f7535 mov dword ptr [0x693ee8], 0 */ { const u32 m_ = (u32)(0x693ee8u); M32(m_) = (u32)(0x0u); }
  /* 005f753f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7540(CPU *c) {
  NATIVE_HOOK(0x5f7540u) REGS; LOADALL;
L_005f7540:;
  /* 005f7540 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f7544 add eax, 0x28 */ { u32 a_ = eax, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f7547 mov dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005f754e mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 005f7554 mov ecx, dword ptr [0x693ee0] */ { const u32 m_ = (u32)(0x693ee0u); ecx = (u32)(M32(m_)); }
  /* 005f755a mov dword ptr [eax + 4], 0x693ee0 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x693ee0u); }
  /* 005f7561 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f7563 mov edx, dword ptr [0x693ee0] */ { const u32 m_ = (u32)(0x693ee0u); edx = (u32)(M32(m_)); }
  /* 005f7569 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f756c mov dword ptr [0x693ee0], eax */ { const u32 m_ = (u32)(0x693ee0u); M32(m_) = (u32)(eax); }
  /* 005f7571 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f7574 and ecx, 0xfffffffe */ { u32 a_ = ecx, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f7577 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005f757a mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f757f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7580(CPU *c) {
  NATIVE_HOOK(0x5f7580u) REGS; LOADALL;
L_005f7580:;
  /* 005f7580 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7581 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f7585 test byte ptr [esi + 0xc], 1 */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f7589 je 0x5f7637 */ if (ZF_) goto L_005f7637;
  /* 005f758f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f7592 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005f7594 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f7595 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f7597 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005f7599 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f759c mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f759f mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 005f75a2 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f75a4 je 0x5f75de */ if (ZF_) goto L_005f75de;
  /* 005f75a6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f75a8 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005f75aa push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 005f75ac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f75ad call 0x5f74b0 */ esp -= 4; M32(esp) = 0x5f75b2u; SAVEALL; F_005f74b0(c); ABI_CHECK(0x5f74b0u, 0x5f75adu); RETCHK(0x5f75b2u, 0x5f75adu); LOADALL;
  /* 005f75b2 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f75b5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f75b7 je 0x5f75c8 */ if (ZF_) goto L_005f75c8;
  /* 005f75b9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f75bb push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f75bd push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 005f75bf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f75c0 call 0x5f7460 */ esp -= 4; M32(esp) = 0x5f75c5u; SAVEALL; F_005f7460(c); ABI_CHECK(0x5f7460u, 0x5f75c0u); RETCHK(0x5f75c5u, 0x5f75c0u); LOADALL;
  /* 005f75c5 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f75c8:;
  /* 005f75c8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f75ca push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f75cc push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 005f75ce push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f75cf call 0x5f7490 */ esp -= 4; M32(esp) = 0x5f75d4u; SAVEALL; F_005f7490(c); ABI_CHECK(0x5f7490u, 0x5f75cfu); RETCHK(0x5f75d4u, 0x5f75cfu); LOADALL;
  /* 005f75d4 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f75d7 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
L_005f75de:;
  /* 005f75de mov ecx, dword ptr [0x693ee0] */ { const u32 m_ = (u32)(0x693ee0u); ecx = (u32)(M32(m_)); }
  /* 005f75e4 mov dword ptr [esi + 4], 0x693ee0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x693ee0u); }
  /* 005f75eb mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 005f75ed mov edx, dword ptr [0x693ee0] */ { const u32 m_ = (u32)(0x693ee0u); edx = (u32)(M32(m_)); }
  /* 005f75f3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f75f4 mov dword ptr [edx + 4], esi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(esi); }
  /* 005f75f7 mov edx, dword ptr [0x693ef8] */ { const u32 m_ = (u32)(0x693ef8u); edx = (u32)(M32(m_)); }
  /* 005f75fd mov ecx, dword ptr [0x693efc] */ { const u32 m_ = (u32)(0x693efcu); ecx = (u32)(M32(m_)); }
  /* 005f7603 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f7604 mov dword ptr [0x693ee0], esi */ { const u32 m_ = (u32)(0x693ee0u); M32(m_) = (u32)(esi); }
  /* 005f760a mov dword ptr [0x693ef8], edx */ { const u32 m_ = (u32)(0x693ef8u); M32(m_) = (u32)(edx); }
  /* 005f7610 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f7613 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f7615 mov dword ptr [0x693efc], ecx */ { const u32 m_ = (u32)(0x693efcu); M32(m_) = (u32)(ecx); }
  /* 005f761b mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f761e mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 005f7621 and al, 0xfc */ { u32 a_ = (eax & 0xffu), b_ = 0xfcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f7623 mov dword ptr [esi + 0x20], ecx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 005f7626 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 005f7629 mov dword ptr [esi + 0x58], 0 */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(0x0u); }
  /* 005f7630 mov dword ptr [esi + 0x10], 0 */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(0x0u); }
L_005f7637:;
  /* 005f7637 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f7638 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7640(CPU *c) {
  NATIVE_HOOK(0x5f7640u) REGS; LOADALL;
L_005f7640:;
  /* 005f7640 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f7644 sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f7647 je 0x5f7671 */ if (ZF_) goto L_005f7671;
  /* 005f7649 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f764a je 0x5f7663 */ if (ZF_) goto L_005f7663;
  /* 005f764c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f764d jne 0x5f767c */ if (!ZF_) goto L_005f767c;
  /* 005f764f mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f7653 test byte ptr [eax + 0xc], 1 */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f7657 je 0x5f767c */ if (ZF_) goto L_005f767c;
  /* 005f7659 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f765a call 0x5f76d0 */ esp -= 4; M32(esp) = 0x5f765fu; SAVEALL; F_005f76d0(c); ABI_CHECK(0x5f76d0u, 0x5f765au); RETCHK(0x5f765fu, 0x5f765au); LOADALL;
  /* 005f765f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7662 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f7663:;
  /* 005f7663 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f7667 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f7668 call 0x5f7580 */ esp -= 4; M32(esp) = 0x5f766du; SAVEALL; F_005f7580(c); ABI_CHECK(0x5f7580u, 0x5f7668u); RETCHK(0x5f766du, 0x5f7668u); LOADALL;
  /* 005f766d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7670 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f7671:;
  /* 005f7671 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f7675 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f7676 call 0x5f7680 */ esp -= 4; M32(esp) = 0x5f767bu; SAVEALL; F_005f7680(c); ABI_CHECK(0x5f7680u, 0x5f7676u); RETCHK(0x5f767bu, 0x5f7676u); LOADALL;
  /* 005f767b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_005f767c:;
  /* 005f767c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7680(CPU *c) {
  NATIVE_HOOK(0x5f7680u) REGS; LOADALL;
L_005f7680:;
  /* 005f7680 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7681 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f7685 test byte ptr [esi + 0xc], 1 */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f7689 je 0x5f7694 */ if (ZF_) goto L_005f7694;
  /* 005f768b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f768c call 0x5f7580 */ esp -= 4; M32(esp) = 0x5f7691u; SAVEALL; F_005f7580(c); ABI_CHECK(0x5f7580u, 0x5f768cu); RETCHK(0x5f7691u, 0x5f768cu); LOADALL;
  /* 005f7691 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f7694:;
  /* 005f7694 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7695 call 0x5f76d0 */ esp -= 4; M32(esp) = 0x5f769au; SAVEALL; F_005f76d0(c); ABI_CHECK(0x5f76d0u, 0x5f7695u); RETCHK(0x5f769au, 0x5f7695u); LOADALL;
  /* 005f769a mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f769d mov dword ptr [esi + 0x10], 1 */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(0x1u); }
  /* 005f76a4 or edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f76a7 mov dword ptr [esi + 0x24], 0 */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(0x0u); }
  /* 005f76ae mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
  /* 005f76b1 mov ecx, dword ptr [0x693efc] */ { const u32 m_ = (u32)(0x693efcu); ecx = (u32)(M32(m_)); }
  /* 005f76b7 mov eax, dword ptr [0x693ef8] */ { const u32 m_ = (u32)(0x693ef8u); eax = (u32)(M32(m_)); }
  /* 005f76bc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f76bf inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f76c0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f76c1 mov dword ptr [0x693efc], ecx */ { const u32 m_ = (u32)(0x693efcu); M32(m_) = (u32)(ecx); }
  /* 005f76c7 mov dword ptr [0x693ef8], eax */ { const u32 m_ = (u32)(0x693ef8u); M32(m_) = (u32)(eax); }
  /* 005f76cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f76cd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f76d0(CPU *c) {
  NATIVE_HOOK(0x5f76d0u) REGS; LOADALL;
L_005f76d0:;
  /* 005f76d0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f76d4 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f76d7 fld dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 005f76da fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005f76e0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f76e1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f76e2 mov dword ptr [ecx + 0x58], 0 */ { const u32 m_ = (u32)(ecx + 0x58u); M32(m_) = (u32)(0x0u); }
  /* 005f76e9 mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 005f76ee fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005f76f0 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f76f5 jne 0x5f7825 */ if (!ZF_) goto L_005f7825;
  /* 005f76fb mov eax, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); eax = (u32)(M32(m_)); }
  /* 005f76fe test byte ptr [eax + 0x54], 2 */ { const u32 m_ = (u32)(eax + 0x54u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f7702 je 0x5f77cf */ if (ZF_) goto L_005f77cf;
  /* 005f7708 fld dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); FPUSH((double)MF32(m_)); }
  /* 005f770b fsubr dword ptr [0x693f00] */ { const u32 m_ = (u32)(0x693f00u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 005f7711 fld dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); FPUSH((double)MF32(m_)); }
  /* 005f7714 fsubr dword ptr [0x693f04] */ { const u32 m_ = (u32)(0x693f04u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 005f771a fld dword ptr [ecx + 0x38] */ { const u32 m_ = (u32)(ecx + 0x38u); FPUSH((double)MF32(m_)); }
  /* 005f771d fsubr dword ptr [0x693f08] */ { const u32 m_ = (u32)(0x693f08u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 005f7723 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 005f7725 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 005f7727 mov eax, dword ptr [ecx + 0x4c] */ { const u32 m_ = (u32)(ecx + 0x4cu); eax = (u32)(M32(m_)); }
  /* 005f772a mov edx, dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); edx = (u32)(M32(m_)); }
  /* 005f772d mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 005f7731 mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f7735 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 005f7737 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 005f7739 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005f773b fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 005f773d fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 005f773f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005f7741 fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f7745 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005f7747 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005f7749 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005f774b fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 005f774f fmul dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f7753 fcomp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005f7757 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005f7759 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f775e jne 0x5f7825 */ if (!ZF_) goto L_005f7825;
  /* 005f7764 fld dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005f7768 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005f776e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005f7770 test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f7773 jnp 0x5f77c0 */ if (!PF_) goto L_005f77c0;
  /* 005f7775 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f7779 mov eax, edx */ { eax = (u32)(edx); }
  /* 005f777b and edx, 0x7fffff */ { u32 a_ = edx, b_ = 0x7fffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f7781 shr eax, 0x17 */ { u32 n_ = (23u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f7784 sub eax, 0x7f */ { u32 a_ = eax, b_ = 0x7fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f7787 mov dword ptr [esp + 0xc], edx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(edx); }
  /* 005f778b test bl, al */ { u32 a_ = (ebx & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f778d je 0x5f7799 */ if (ZF_) goto L_005f7799;
  /* 005f778f or edx, 0x800000 */ { u32 a_ = edx, b_ = 0x800000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f7795 mov dword ptr [esp + 0xc], edx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(edx); }
L_005f7799:;
  /* 005f7799 mov edx, dword ptr [esp + 0xe] */ { const u32 m_ = (u32)(esp + 0xeu); edx = (u32)(M32(m_)); }
  /* 005f779d sar ax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = (eax & 0xffffu); s32 s_ = sxt(a_, 2); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); eax = (eax & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 005f77a0 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f77a6 movsx eax, ax */ { eax = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 005f77a9 movsx edx, word ptr [edx*2 + 0x67d3e0] */ { const u32 m_ = (u32)(edx * 2u + 0x67d3e0u); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f77b1 add eax, 0x7f */ { u32 a_ = eax, b_ = 0x7fu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f77b4 shl edx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f77b7 shl eax, 0x17 */ { u32 n_ = (23u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f77ba or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f77bc mov dword ptr [esp + 0xc], edx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(edx); }
L_005f77c0:;
  /* 005f77c0 fld dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005f77c4 fcomp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005f77c8 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005f77ca test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f77cd jp 0x5f77d7 */ if (PF_) goto L_005f77d7;
L_005f77cf:;
  /* 005f77cf fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 005f77d5 jmp 0x5f780d */ goto L_005f780d;
L_005f77d7:;
  /* 005f77d7 fld dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005f77db fsub dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005f77df fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 005f77e3 fsub dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005f77e7 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 005f77e9 fsub st(2) */ ST(0) = FR(ST(0) - ST(2));
  /* 005f77eb fld dword ptr [0x67e3b8] */ { const u32 m_ = (u32)(0x67e3b8u); FPUSH((double)MF32(m_)); }
  /* 005f77f1 fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 005f77f3 fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 005f77f5 fdivp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) / s0_); FPOP(); }
  /* 005f77f7 fmul dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f77fa fstp st(2) */ ST(2) = ST(0); FPOP();
  /* 005f77fc fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005f77fe fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005f7804 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005f7806 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f780b jne 0x5f7823 */ if (!ZF_) goto L_005f7823;
L_005f780d:;
  /* 005f780d fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 005f7813 fsub dword ptr [ecx + 0x54] */ { const u32 m_ = (u32)(ecx + 0x54u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005f7816 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 005f7818 fld dword ptr [ecx + 0x50] */ { const u32 m_ = (u32)(ecx + 0x50u); FPUSH((double)MF32(m_)); }
  /* 005f781b fmul dword ptr [ecx + 0x54] */ { const u32 m_ = (u32)(ecx + 0x54u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005f781e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005f7820 fstp dword ptr [ecx + 0x58] */ { const u32 m_ = (u32)(ecx + 0x58u); MF32(m_) = (float)ST(0); FPOP(); }
L_005f7823:;
  /* 005f7823 fstp st(0) */ ST(0) = ST(0); FPOP();
L_005f7825:;
  /* 005f7825 test byte ptr [ecx + 0xc], bl */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f7828 je 0x5f78b9 */ if (ZF_) goto L_005f78b9;
  /* 005f782e fld dword ptr [ecx + 0x58] */ { const u32 m_ = (u32)(ecx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 005f7831 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f7833 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_005f7834:;
  /* 005f7834 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 005f7836 mov edi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005f7839 cmp esi, 0x693ed4 */ { u32 a_ = esi, b_ = 0x693ed4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f783f jne 0x5f7849 */ if (!ZF_) goto L_005f7849;
  /* 005f7841 fld dword ptr [0x656db4] */ { const u32 m_ = (u32)(0x656db4u); FPUSH((double)MF32(m_)); }
  /* 005f7847 jmp 0x5f784c */ goto L_005f784c;
L_005f7849:;
  /* 005f7849 fld dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); FPUSH((double)MF32(m_)); }
L_005f784c:;
  /* 005f784c cmp edi, 0x693ed4 */ { u32 a_ = edi, b_ = 0x693ed4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7852 jne 0x5f785e */ if (!ZF_) goto L_005f785e;
  /* 005f7854 mov dword ptr [esp + 0x1c], 0xbf800000 */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0xbf800000u); }
  /* 005f785c jmp 0x5f7865 */ goto L_005f7865;
L_005f785e:;
  /* 005f785e mov eax, dword ptr [edi + 0x58] */ { const u32 m_ = (u32)(edi + 0x58u); eax = (u32)(M32(m_)); }
  /* 005f7861 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
L_005f7865:;
  /* 005f7865 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 005f7867 fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 005f7869 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005f786b and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f7870 jne 0x5f7876 */ if (!ZF_) goto L_005f7876;
  /* 005f7872 mov edx, esi */ { edx = (u32)(esi); }
  /* 005f7874 jmp 0x5f7834 */ goto L_005f7834;
L_005f7876:;
  /* 005f7876 fcom dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005f787a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005f787c test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f787f jp 0x5f7885 */ if (PF_) goto L_005f7885;
  /* 005f7881 mov edx, edi */ { edx = (u32)(edi); }
  /* 005f7883 jmp 0x5f7834 */ goto L_005f7834;
L_005f7885:;
  /* 005f7885 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7887 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f7888 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005f788a je 0x5f78ab */ if (ZF_) goto L_005f78ab;
  /* 005f788c mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f788f mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 005f7891 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 005f7893 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005f7895 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 005f7898 mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
L_005f789b:;
  /* 005f789b mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f789e mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005f78a0 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f78a3 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f78a6 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f78a8 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
L_005f78ab:;
  /* 005f78ab mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f78ae pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f78af or eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f78b1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f78b2 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 005f78b5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f78b8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f78b9:;
  /* 005f78b9 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f78bc mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005f78be mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 005f78c0 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005f78c2 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f78c5 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f78c8 mov edx, dword ptr [0x693ed4] */ { const u32 m_ = (u32)(0x693ed4u); edx = (u32)(M32(m_)); }
  /* 005f78ce cmp edx, 0x693ed4 */ { u32 a_ = edx, b_ = 0x693ed4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f78d4 je 0x5f78f7 */ if (ZF_) goto L_005f78f7;
L_005f78d6:;
  /* 005f78d6 fld dword ptr [ecx + 0x58] */ { const u32 m_ = (u32)(ecx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 005f78d9 fcomp dword ptr [edx + 0x58] */ { const u32 m_ = (u32)(edx + 0x58u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005f78dc fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005f78de test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f78e1 jnp 0x5f78ef */ if (!PF_) goto L_005f78ef;
  /* 005f78e3 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 005f78e5 cmp edx, 0x693ed4 */ { u32 a_ = edx, b_ = 0x693ed4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f78eb jne 0x5f78d6 */ if (!ZF_) goto L_005f78d6;
  /* 005f78ed jmp 0x5f78f7 */ goto L_005f78f7;
L_005f78ef:;
  /* 005f78ef cmp edx, 0x693ed4 */ { u32 a_ = edx, b_ = 0x693ed4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f78f5 jne 0x5f789b */ if (!ZF_) goto L_005f789b;
L_005f78f7:;
  /* 005f78f7 mov edx, dword ptr [0x693ed8] */ { const u32 m_ = (u32)(0x693ed8u); edx = (u32)(M32(m_)); }
  /* 005f78fd mov dword ptr [ecx], 0x693ed4 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x693ed4u); }
  /* 005f7903 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f7906 mov eax, dword ptr [0x693ed8] */ { const u32 m_ = (u32)(0x693ed8u); eax = (u32)(M32(m_)); }
  /* 005f790b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f790c mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f790e mov dword ptr [0x693ed8], ecx */ { const u32 m_ = (u32)(0x693ed8u); M32(m_) = (u32)(ecx); }
  /* 005f7914 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f7917 or eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f7919 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f791a mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 005f791d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7920 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7930(CPU *c) {
  NATIVE_HOOK(0x5f7930u) REGS; LOADALL;
L_005f7930:;
  /* 005f7930 push 0x4080a */ { u32 v_ = 0x4080au; esp -= 4; M32(esp) = v_; }
  /* 005f7935 push 0x693f14 */ { u32 v_ = 0x693f14u; esp -= 4; M32(esp) = v_; }
  /* 005f793a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f793c push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005f793e mov eax, 0x693f38 */ { eax = (u32)(0x693f38u); }
  /* 005f7943 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005f7945 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f7947 mov dword ptr [0x693f38], eax */ { const u32 m_ = (u32)(0x693f38u); M32(m_) = (u32)(eax); }
  /* 005f794c mov dword ptr [0x693f3c], eax */ { const u32 m_ = (u32)(0x693f3cu); M32(m_) = (u32)(eax); }
  /* 005f7951 call 0x5f1780 */ esp -= 4; M32(esp) = 0x5f7956u; SAVEALL; F_005f1780(c); ABI_CHECK(0x5f1780u, 0x5f7951u); RETCHK(0x5f7956u, 0x5f7951u); LOADALL;
  /* 005f7956 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7959 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f795b je 0x5f7968 */ if (ZF_) goto L_005f7968;
  /* 005f795d mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f7962 mov dword ptr [0x693f40], eax */ { const u32 m_ = (u32)(0x693f40u); M32(m_) = (u32)(eax); }
  /* 005f7967 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f7968:;
  /* 005f7968 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f796a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7970(CPU *c) {
  NATIVE_HOOK(0x5f7970u) REGS; LOADALL;
L_005f7970:;
  /* 005f7970 mov eax, dword ptr [0x693f38] */ { const u32 m_ = (u32)(0x693f38u); eax = (u32)(M32(m_)); }
  /* 005f7975 cmp eax, 0x693f38 */ { u32 a_ = eax, b_ = 0x693f38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f797a je 0x5f7994 */ if (ZF_) goto L_005f7994;
L_005f797c:;
  /* 005f797c add eax, -0x20 */ { u32 a_ = eax, b_ = 0xffffffe0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f797f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f7980 call 0x5f7cd0 */ esp -= 4; M32(esp) = 0x5f7985u; SAVEALL; F_005f7cd0(c); ABI_CHECK(0x5f7cd0u, 0x5f7980u); RETCHK(0x5f7985u, 0x5f7980u); LOADALL;
  /* 005f7985 mov eax, dword ptr [0x693f38] */ { const u32 m_ = (u32)(0x693f38u); eax = (u32)(M32(m_)); }
  /* 005f798a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f798d cmp eax, 0x693f38 */ { u32 a_ = eax, b_ = 0x693f38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7992 jne 0x5f797c */ if (!ZF_) goto L_005f797c;
L_005f7994:;
  /* 005f7994 push 0x693f14 */ { u32 v_ = 0x693f14u; esp -= 4; M32(esp) = v_; }
  /* 005f7999 mov dword ptr [0x693f38], 0x693f38 */ { const u32 m_ = (u32)(0x693f38u); M32(m_) = (u32)(0x693f38u); }
  /* 005f79a3 mov dword ptr [0x693f3c], 0x693f38 */ { const u32 m_ = (u32)(0x693f3cu); M32(m_) = (u32)(0x693f38u); }
  /* 005f79ad call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f79b2u; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f79adu); RETCHK(0x5f79b2u, 0x5f79adu); LOADALL;
  /* 005f79b2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f79b5 mov dword ptr [0x693f40], 0 */ { const u32 m_ = (u32)(0x693f40u); M32(m_) = (u32)(0x0u); }
  /* 005f79bf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f79c0(CPU *c) {
  NATIVE_HOOK(0x5f79c0u) REGS; LOADALL;
L_005f79c0:;
  /* 005f79c0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f79c4 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f79c7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f79c9 jbe 0x5f79d2 */ if ((CF_|ZF_)) goto L_005f79d2;
  /* 005f79cb dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f79cc mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005f79cf xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f79d1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f79d2:;
  /* 005f79d2 mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005f79d5 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 005f79d8 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005f79da mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f79dd mov edx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edx = (u32)(M32(m_)); }
  /* 005f79e0 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f79e3 mov cl, byte ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f79e6 test cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f79e9 jne 0x5f79f4 */ if (!ZF_) goto L_005f79f4;
  /* 005f79eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f79ec call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f79f1u; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f79ecu); RETCHK(0x5f79f1u, 0x5f79ecu); LOADALL;
  /* 005f79f1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f79f4:;
  /* 005f79f4 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f79f9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7a00(CPU *c) {
  NATIVE_HOOK(0x5f7a00u) REGS; LOADALL;
L_005f7a00:;
  /* 005f7a00 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7a03 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f7a07 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005f7a0b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f7a0c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f7a0d mov ecx, dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 005f7a10 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f7a12 mov ax, word ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f7a16 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7a17 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f7a18 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f7a1a mov di, word ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f7a1e mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 005f7a22 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7a24 mov dword ptr [esp + 0x10], 1 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0x1u); }
  /* 005f7a2c jbe 0x5f7a7c */ if ((CF_|ZF_)) goto L_005f7a7c;
  /* 005f7a2e xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005f7a30 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
L_005f7a34:;
  /* 005f7a34 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005f7a36 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7a38 jbe 0x5f7a66 */ if ((CF_|ZF_)) goto L_005f7a66;
  /* 005f7a3a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_005f7a3c:;
  /* 005f7a3c mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005f7a40 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f7a43 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f7a47 mov edx, dword ptr [ecx + ebp] */ { const u32 m_ = (u32)(ecx + ebp); edx = (u32)(M32(m_)); }
  /* 005f7a4a mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f7a4d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f7a4e mov edx, dword ptr [esi + ecx] */ { const u32 m_ = (u32)(esi + ecx); edx = (u32)(M32(m_)); }
  /* 005f7a51 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f7a52 call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f7a57u; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f7a52u); RETCHK(0x5f7a57u, 0x5f7a52u); LOADALL;
  /* 005f7a57 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7a5a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7a5c je 0x5f7a6e */ if (ZF_) goto L_005f7a6e;
  /* 005f7a5e inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f7a5f add esi, 0x18 */ { u32 a_ = esi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f7a62 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7a64 jb 0x5f7a3c */ if (CF_) goto L_005f7a3c;
L_005f7a66:;
  /* 005f7a66 mov dword ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0x0u); }
L_005f7a6e:;
  /* 005f7a6e mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f7a72 add ebp, 0x14 */ { u32 a_ = ebp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005f7a75 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f7a76 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f7a7a jne 0x5f7a34 */ if (!ZF_) goto L_005f7a34;
L_005f7a7c:;
  /* 005f7a7c mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005f7a80 mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 005f7a84 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f7a86 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005f7a88 mov ax, word ptr [ecx + 0x16] */ { const u32 m_ = (u32)(ecx + 0x16u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f7a8c mov ecx, dword ptr [edx + 0x4c] */ { const u32 m_ = (u32)(edx + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 005f7a8f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7a91 mov bx, word ptr [ecx + 0xe] */ { const u32 m_ = (u32)(ecx + 0xeu); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f7a95 jbe 0x5f7ae5 */ if ((CF_|ZF_)) goto L_005f7ae5;
  /* 005f7a97 xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005f7a99 mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
L_005f7a9d:;
  /* 005f7a9d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f7a9f test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7aa1 jbe 0x5f7acf */ if ((CF_|ZF_)) goto L_005f7acf;
  /* 005f7aa3 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_005f7aa5:;
  /* 005f7aa5 mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 005f7aa9 mov eax, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f7aac mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 005f7ab0 mov ecx, dword ptr [eax + ebp] */ { const u32 m_ = (u32)(eax + ebp); ecx = (u32)(M32(m_)); }
  /* 005f7ab3 mov eax, dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f7ab6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f7ab7 mov ecx, dword ptr [eax + esi] */ { const u32 m_ = (u32)(eax + esi); ecx = (u32)(M32(m_)); }
  /* 005f7aba push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f7abb call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f7ac0u; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f7abbu); RETCHK(0x5f7ac0u, 0x5f7abbu); LOADALL;
  /* 005f7ac0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7ac3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7ac5 je 0x5f7ad7 */ if (ZF_) goto L_005f7ad7;
  /* 005f7ac7 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f7ac8 add esi, 0x18 */ { u32 a_ = esi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f7acb cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7acd jb 0x5f7aa5 */ if (CF_) goto L_005f7aa5;
L_005f7acf:;
  /* 005f7acf mov dword ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0x0u); }
L_005f7ad7:;
  /* 005f7ad7 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 005f7adb add ebp, 0x14 */ { u32 a_ = ebp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005f7ade dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f7adf mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 005f7ae3 jne 0x5f7a9d */ if (!ZF_) goto L_005f7a9d;
L_005f7ae5:;
  /* 005f7ae5 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f7ae9 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005f7aed neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005f7aef pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f7af0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f7af1 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005f7af3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f7af4 and eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f7af6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f7af7 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7afa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7b00(CPU *c) {
  NATIVE_HOOK(0x5f7b00u) REGS; LOADALL;
L_005f7b00:;
  /* 005f7b00 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f7b01 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f7b02 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7b03 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005f7b07 xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005f7b09 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f7b0a mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f7b0d cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7b0f je 0x5f7b2b */ if (ZF_) goto L_005f7b2b;
  /* 005f7b11 cmp dword ptr [esi + 0xc], ebp */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7b14 je 0x5f7b2b */ if (ZF_) goto L_005f7b2b;
  /* 005f7b16 test byte ptr [esi + 0x18], 1 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f7b1a jne 0x5f7b25 */ if (!ZF_) goto L_005f7b25;
  /* 005f7b1c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f7b1d call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f7b22u; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f7b1du); RETCHK(0x5f7b22u, 0x5f7b1du); LOADALL;
  /* 005f7b22 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f7b25:;
  /* 005f7b25 mov dword ptr [esi + 0x10], ebp */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ebp); }
  /* 005f7b28 mov dword ptr [esi + 0xc], ebp */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebp); }
L_005f7b2b:;
  /* 005f7b2b mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 005f7b2f cmp edi, ebp */ { u32 a_ = edi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7b31 je 0x5f7bc5 */ if (ZF_) goto L_005f7bc5;
  /* 005f7b37 cmp dword ptr [esp + 0x20], ebp */ { const u32 m_ = (u32)(esp + 0x20u); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7b3b je 0x5f7bc5 */ if (ZF_) goto L_005f7bc5;
  /* 005f7b41 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f7b45 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005f7b47 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7b49 jbe 0x5f7b6e */ if ((CF_|ZF_)) goto L_005f7b6e;
  /* 005f7b4b add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_005f7b4e:;
  /* 005f7b4e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f7b4f mov dword ptr [edi - 4], ebp */ { const u32 m_ = (u32)(edi + 0xfffffffcu); M32(m_) = (u32)(ebp); }
  /* 005f7b52 call 0x5f8270 */ esp -= 4; M32(esp) = 0x5f7b57u; SAVEALL; F_005f8270(c); ABI_CHECK(0x5f8270u, 0x5f7b52u); RETCHK(0x5f7b57u, 0x5f7b52u); LOADALL;
  /* 005f7b57 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7b5a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7b5c je 0x5f7bed */ if (ZF_) goto L_005f7bed;
  /* 005f7b62 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f7b66 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f7b67 add edi, 0x14 */ { u32 a_ = edi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f7b6a cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7b6c jb 0x5f7b4e */ if (CF_) goto L_005f7b4e;
L_005f7b6e:;
  /* 005f7b6e mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 005f7b72 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005f7b74 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7b76 jbe 0x5f7b9b */ if ((CF_|ZF_)) goto L_005f7b9b;
  /* 005f7b78 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005f7b7c lea edi, [eax + 0xc] */ edi = (u32)((u32)(eax + 0xcu));
L_005f7b7f:;
  /* 005f7b7f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f7b80 mov dword ptr [edi - 4], 0 */ { const u32 m_ = (u32)(edi + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005f7b87 call 0x5f8270 */ esp -= 4; M32(esp) = 0x5f7b8cu; SAVEALL; F_005f8270(c); ABI_CHECK(0x5f8270u, 0x5f7b87u); RETCHK(0x5f7b8cu, 0x5f7b87u); LOADALL;
  /* 005f7b8c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7b8f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7b91 je 0x5f7bed */ if (ZF_) goto L_005f7bed;
  /* 005f7b93 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f7b94 add edi, 0x14 */ { u32 a_ = edi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f7b97 cmp ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7b99 jb 0x5f7b7f */ if (CF_) goto L_005f7b7f;
L_005f7b9b:;
  /* 005f7b9b mov ax, word ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f7ba0 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005f7ba4 mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 005f7ba8 mov word ptr [esi + 0x14], ax */ { const u32 m_ = (u32)(esi + 0x14u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f7bac mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f7baf mov dword ptr [esi + 0x10], ecx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 005f7bb2 or al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f7bb4 mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
  /* 005f7bb7 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 005f7bba mov word ptr [esi + 0x16], bp */ { const u32 m_ = (u32)(esi + 0x16u); M16(m_) = (u16)((ebp & 0xffffu)); }
  /* 005f7bbe mov eax, esi */ { eax = (u32)(esi); }
  /* 005f7bc0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f7bc1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f7bc2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f7bc3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f7bc4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f7bc5:;
  /* 005f7bc5 mov ebp, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebp = (u32)(M32(m_)); }
  /* 005f7bc9 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 005f7bcd push 0x3080a */ { u32 v_ = 0x3080au; esp -= 4; M32(esp) = v_; }
  /* 005f7bd2 lea eax, [ecx + ebp] */ eax = (u32)((u32)(ecx + ebp));
  /* 005f7bd5 lea ebx, [eax + eax*4] */ ebx = (u32)((u32)(eax + eax * 4u));
  /* 005f7bd8 shl ebx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 005f7bdb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f7bdc call 0x5f2440 */ esp -= 4; M32(esp) = 0x5f7be1u; SAVEALL; F_005f2440(c); ABI_CHECK(0x5f2440u, 0x5f7bdcu); RETCHK(0x5f7be1u, 0x5f7bdcu); LOADALL;
  /* 005f7be1 mov edi, eax */ { edi = (u32)(eax); }
  /* 005f7be3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7be6 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7be8 mov dword ptr [esi + 0x10], edi */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edi); }
  /* 005f7beb jne 0x5f7bf4 */ if (!ZF_) goto L_005f7bf4;
L_005f7bed:;
  /* 005f7bed pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f7bee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f7bef pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f7bf0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f7bf2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f7bf3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f7bf4:;
  /* 005f7bf4 lea edx, [ebp + ebp*4] */ edx = (u32)((u32)(ebp + ebp * 4u));
  /* 005f7bf8 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005f7bfa lea eax, [edi + edx*4] */ eax = (u32)((u32)(edi + edx * 4u));
  /* 005f7bfd mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f7bff mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 005f7c02 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f7c04 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f7c07 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005f7c09 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005f7c0b and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f7c0e rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 005f7c10 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f7c13 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f7c14 and al, 0xfe */ { u32 a_ = (eax & 0xffu), b_ = 0xfeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f7c16 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 005f7c19 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f7c1b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f7c1c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f7c1d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f7c1e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7c20(CPU *c) {
  NATIVE_HOOK(0x5f7c20u) REGS; LOADALL;
L_005f7c20:;
  /* 005f7c20 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f7c24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7c25 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f7c29 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f7c2a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7c2b call 0x5f1be0 */ esp -= 4; M32(esp) = 0x5f7c30u; SAVEALL; F_005f1be0(c); ABI_CHECK(0x5f1be0u, 0x5f7c2bu); RETCHK(0x5f7c30u, 0x5f7c2bu); LOADALL;
  /* 005f7c30 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005f7c34 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f7c35 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7c36 call 0x5f1bb0 */ esp -= 4; M32(esp) = 0x5f7c3bu; SAVEALL; F_005f1bb0(c); ABI_CHECK(0x5f1bb0u, 0x5f7c36u); RETCHK(0x5f7c3bu, 0x5f7c36u); LOADALL;
  /* 005f7c3b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7c3e mov eax, esi */ { eax = (u32)(esi); }
  /* 005f7c40 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f7c41 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7c50(CPU *c) {
  NATIVE_HOOK(0x5f7c50u) REGS; LOADALL;
L_005f7c50:;
  /* 005f7c50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7c51 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f7c55 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f7c56 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f7c58 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7c5a jne 0x5f7cbb */ if (!ZF_) goto L_005f7cbb;
  /* 005f7c5c push 0x3080a */ { u32 v_ = 0x3080au; esp -= 4; M32(esp) = v_; }
  /* 005f7c61 push 0x693f14 */ { u32 v_ = 0x693f14u; esp -= 4; M32(esp) = v_; }
  /* 005f7c66 call 0x5f1930 */ esp -= 4; M32(esp) = 0x5f7c6bu; SAVEALL; F_005f1930(c); ABI_CHECK(0x5f1930u, 0x5f7c66u); RETCHK(0x5f7c6bu, 0x5f7c66u); LOADALL;
  /* 005f7c6b mov esi, eax */ { esi = (u32)(eax); }
  /* 005f7c6d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7c70 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7c72 je 0x5f7cc4 */ if (ZF_) goto L_005f7cc4;
  /* 005f7c74 mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
L_005f7c77:;
  /* 005f7c77 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7c78 mov word ptr [esi + 0x14], di */ { const u32 m_ = (u32)(esi + 0x14u); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 005f7c7c mov word ptr [esi + 0x16], di */ { const u32 m_ = (u32)(esi + 0x16u); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 005f7c80 mov dword ptr [esi + 0x10], edi */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edi); }
  /* 005f7c83 mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
  /* 005f7c86 mov dword ptr [esi + 0x1c], edi */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(edi); }
  /* 005f7c89 call 0x5f1c80 */ esp -= 4; M32(esp) = 0x5f7c8eu; SAVEALL; F_005f1c80(c); ABI_CHECK(0x5f1c80u, 0x5f7c89u); RETCHK(0x5f7c8eu, 0x5f7c89u); LOADALL;
  /* 005f7c8e lea eax, [esi + 0x20] */ eax = (u32)((u32)(esi + 0x20u));
  /* 005f7c91 mov dword ptr [esi + 0x24], edi */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(edi); }
  /* 005f7c94 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7c97 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 005f7c99 mov ecx, dword ptr [0x693f38] */ { const u32 m_ = (u32)(0x693f38u); ecx = (u32)(M32(m_)); }
  /* 005f7c9f mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f7ca1 mov dword ptr [esi + 0x24], 0x693f38 */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(0x693f38u); }
  /* 005f7ca8 mov edx, dword ptr [0x693f38] */ { const u32 m_ = (u32)(0x693f38u); edx = (u32)(M32(m_)); }
  /* 005f7cae pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f7caf mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f7cb2 mov dword ptr [0x693f38], eax */ { const u32 m_ = (u32)(0x693f38u); M32(m_) = (u32)(eax); }
  /* 005f7cb7 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f7cb9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f7cba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f7cbb:;
  /* 005f7cbb mov dword ptr [esi + 0x18], 2 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x2u); }
  /* 005f7cc2 jmp 0x5f7c77 */ goto L_005f7c77;
L_005f7cc4:;
  /* 005f7cc4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f7cc5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f7cc7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f7cc8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7cd0(CPU *c) {
  NATIVE_HOOK(0x5f7cd0u) REGS; LOADALL;
L_005f7cd0:;
  /* 005f7cd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7cd1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f7cd5 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f7cd8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7cda je 0x5f7ce2 */ if (ZF_) goto L_005f7ce2;
  /* 005f7cdc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7cdd call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x5f7cdfu; SAVEALL; call_ind(c, t_); RETCHK(0x5f7cdfu, 0x5f7cddu); LOADALL; }
  /* 005f7cdf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f7ce2:;
  /* 005f7ce2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f7ce3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f7ce4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7ce5 call 0x5f1c00 */ esp -= 4; M32(esp) = 0x5f7ceau; SAVEALL; F_005f1c00(c); ABI_CHECK(0x5f1c00u, 0x5f7ce5u); RETCHK(0x5f7ceau, 0x5f7ce5u); LOADALL;
  /* 005f7cea xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f7cec add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7cef mov ax, word ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f7cf3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7cf5 jbe 0x5f7d0f */ if ((CF_|ZF_)) goto L_005f7d0f;
  /* 005f7cf7 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f7cf9 mov ebx, eax */ { ebx = (u32)(eax); }
L_005f7cfb:;
  /* 005f7cfb mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f7cfe add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f7d00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f7d01 call 0x5f1c00 */ esp -= 4; M32(esp) = 0x5f7d06u; SAVEALL; F_005f1c00(c); ABI_CHECK(0x5f1c00u, 0x5f7d01u); RETCHK(0x5f7d06u, 0x5f7d01u); LOADALL;
  /* 005f7d06 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7d09 add edi, 0x14 */ { u32 a_ = edi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f7d0c dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f7d0d jne 0x5f7cfb */ if (!ZF_) goto L_005f7cfb;
L_005f7d0f:;
  /* 005f7d0f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f7d11 mov ax, word ptr [esi + 0x16] */ { const u32 m_ = (u32)(esi + 0x16u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f7d15 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7d17 jbe 0x5f7d31 */ if ((CF_|ZF_)) goto L_005f7d31;
  /* 005f7d19 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f7d1b mov ebx, eax */ { ebx = (u32)(eax); }
L_005f7d1d:;
  /* 005f7d1d mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f7d20 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f7d22 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f7d23 call 0x5f1c00 */ esp -= 4; M32(esp) = 0x5f7d28u; SAVEALL; F_005f1c00(c); ABI_CHECK(0x5f1c00u, 0x5f7d23u); RETCHK(0x5f7d28u, 0x5f7d23u); LOADALL;
  /* 005f7d28 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7d2b add edi, 0x14 */ { u32 a_ = edi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f7d2e dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f7d2f jne 0x5f7d1d */ if (!ZF_) goto L_005f7d1d;
L_005f7d31:;
  /* 005f7d31 mov al, byte ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f7d34 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f7d35 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f7d37 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f7d38 jne 0x5f7d46 */ if (!ZF_) goto L_005f7d46;
  /* 005f7d3a mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 005f7d3d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f7d3e call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f7d43u; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f7d3eu); RETCHK(0x5f7d43u, 0x5f7d3eu); LOADALL;
  /* 005f7d43 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f7d46:;
  /* 005f7d46 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 005f7d49 mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005f7d4c mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f7d4e mov edx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M32(m_)); }
  /* 005f7d51 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 005f7d54 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f7d57 mov al, byte ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f7d5a test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f7d5c jne 0x5f7d6c */ if (!ZF_) goto L_005f7d6c;
  /* 005f7d5e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7d5f push 0x693f14 */ { u32 v_ = 0x693f14u; esp -= 4; M32(esp) = v_; }
  /* 005f7d64 call 0x5f1a50 */ esp -= 4; M32(esp) = 0x5f7d69u; SAVEALL; F_005f1a50(c); ABI_CHECK(0x5f1a50u, 0x5f7d64u); RETCHK(0x5f7d69u, 0x5f7d64u); LOADALL;
  /* 005f7d69 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f7d6c:;
  /* 005f7d6c mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f7d71 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f7d72 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7d80(CPU *c) {
  NATIVE_HOOK(0x5f7d80u) REGS; LOADALL;
L_005f7d80:;
  /* 005f7d80 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f7d84 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f7d85 call 0x5f24f0 */ esp -= 4; M32(esp) = 0x5f7d8au; SAVEALL; F_005f24f0(c); ABI_CHECK(0x5f24f0u, 0x5f7d85u); RETCHK(0x5f7d8au, 0x5f7d85u); LOADALL;
  /* 005f7d8a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7d8d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_005f7d8f:;
  /* 005f7d8f cmp dword ptr [ecx*8 + 0x67e414], eax */ { const u32 m_ = (u32)(ecx * 8u + 0x67e414u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7d96 je 0x5f7da1 */ if (ZF_) goto L_005f7da1;
  /* 005f7d98 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f7d99 cmp ecx, 5 */ { u32 a_ = ecx, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7d9c jb 0x5f7d8f */ if (CF_) goto L_005f7d8f;
  /* 005f7d9e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f7da0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f7da1:;
  /* 005f7da1 mov ecx, dword ptr [ecx*8 + 0x67e410] */ { const u32 m_ = (u32)(ecx * 8u + 0x67e410u); ecx = (u32)(M32(m_)); }
  /* 005f7da8 push 0x30803 */ { u32 v_ = 0x30803u; esp -= 4; M32(esp) = v_; }
  /* 005f7dad push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f7dae call 0x5f1930 */ esp -= 4; M32(esp) = 0x5f7db3u; SAVEALL; F_005f1930(c); ABI_CHECK(0x5f1930u, 0x5f7daeu); RETCHK(0x5f7db3u, 0x5f7daeu); LOADALL;
  /* 005f7db3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7db6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7dc0(CPU *c) {
  NATIVE_HOOK(0x5f7dc0u) REGS; LOADALL;
L_005f7dc0:;
  /* 005f7dc0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f7dc4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f7dc5 call 0x5f24f0 */ esp -= 4; M32(esp) = 0x5f7dcau; SAVEALL; F_005f24f0(c); ABI_CHECK(0x5f24f0u, 0x5f7dc5u); RETCHK(0x5f7dcau, 0x5f7dc5u); LOADALL;
  /* 005f7dca add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7dcd xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_005f7dcf:;
  /* 005f7dcf cmp dword ptr [ecx*8 + 0x67e414], eax */ { const u32 m_ = (u32)(ecx * 8u + 0x67e414u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7dd6 je 0x5f7ddf */ if (ZF_) goto L_005f7ddf;
  /* 005f7dd8 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f7dd9 cmp ecx, 5 */ { u32 a_ = ecx, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7ddc jb 0x5f7dcf */ if (CF_) goto L_005f7dcf;
  /* 005f7dde ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f7ddf:;
  /* 005f7ddf mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f7de3 mov eax, dword ptr [ecx*8 + 0x67e410] */ { const u32 m_ = (u32)(ecx * 8u + 0x67e410u); eax = (u32)(M32(m_)); }
  /* 005f7dea mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f7dee mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f7df2 jmp 0x5f1a50 */ SAVEALL; F_005f1a50(c); return;
}

void F_005f7e00(CPU *c) {
  NATIVE_HOOK(0x5f7e00u) REGS; LOADALL;
L_005f7e00:;
  /* 005f7e00 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f7e01 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f7e02 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f7e03 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7e04 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 005f7e08 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f7e09 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7e0a call 0x5f24f0 */ esp -= 4; M32(esp) = 0x5f7e0fu; SAVEALL; F_005f24f0(c); ABI_CHECK(0x5f24f0u, 0x5f7e0au); RETCHK(0x5f7e0fu, 0x5f7e0au); LOADALL;
  /* 005f7e0f mov ebx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebx = (u32)(M32(m_)); }
  /* 005f7e13 xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005f7e15 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7e18 cmp ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7e1a mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f7e1e jne 0x5f7e39 */ if (!ZF_) goto L_005f7e39;
  /* 005f7e20 push 0x30803 */ { u32 v_ = 0x30803u; esp -= 4; M32(esp) = v_; }
  /* 005f7e25 push 0x693f54 */ { u32 v_ = 0x693f54u; esp -= 4; M32(esp) = v_; }
  /* 005f7e2a call 0x5f1930 */ esp -= 4; M32(esp) = 0x5f7e2fu; SAVEALL; F_005f1930(c); ABI_CHECK(0x5f1930u, 0x5f7e2au); RETCHK(0x5f7e2fu, 0x5f7e2au); LOADALL;
  /* 005f7e2f mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005f7e31 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7e34 mov dword ptr [ebx + 0x1c], ebp */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 005f7e37 jmp 0x5f7e40 */ goto L_005f7e40;
L_005f7e39:;
  /* 005f7e39 mov dword ptr [ebx + 0x1c], 1 */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(0x1u); }
L_005f7e40:;
  /* 005f7e40 mov edi, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edi = (u32)(M32(m_)); }
  /* 005f7e44 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f7e48 cmp edi, ebp */ { u32 a_ = edi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7e4a mov dword ptr [ebx + 0xc], ebp */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ebp); }
  /* 005f7e4d mov dword ptr [ebx + 0x10], ebp */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(ebp); }
  /* 005f7e50 je 0x5f7e87 */ if (ZF_) goto L_005f7e87;
  /* 005f7e52 mov ecx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005f7e55 or ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f7e58 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7e5a mov ebp, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebp = (u32)(M32(m_)); }
  /* 005f7e5e mov dword ptr [ebx + 0x1c], ecx */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 005f7e61 je 0x5f7e7a */ if (ZF_) goto L_005f7e7a;
  /* 005f7e63 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7e65 mov dword ptr [ebx + 0xc], edi */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(edi); }
  /* 005f7e68 je 0x5f7ecb */ if (ZF_) goto L_005f7ecb;
  /* 005f7e6a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7e6b call 0x5f24f0 */ esp -= 4; M32(esp) = 0x5f7e70u; SAVEALL; F_005f24f0(c); ABI_CHECK(0x5f24f0u, 0x5f7e6bu); RETCHK(0x5f7e70u, 0x5f7e6bu); LOADALL;
  /* 005f7e70 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7e73 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f7e75 mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f7e78 jmp 0x5f7ecb */ goto L_005f7ecb;
L_005f7e7a:;
  /* 005f7e7a test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7e7c je 0x5f7f0d */ if (ZF_) goto L_005f7f0d;
  /* 005f7e82 mov dword ptr [ebx + 0x10], edi */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(edi); }
  /* 005f7e85 jmp 0x5f7eee */ goto L_005f7eee;
L_005f7e87:;
  /* 005f7e87 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7e89 je 0x5f7ea4 */ if (ZF_) goto L_005f7ea4;
  /* 005f7e8b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7e8c call 0x5f7d80 */ esp -= 4; M32(esp) = 0x5f7e91u; SAVEALL; F_005f7d80(c); ABI_CHECK(0x5f7d80u, 0x5f7e8cu); RETCHK(0x5f7e91u, 0x5f7e8cu); LOADALL;
  /* 005f7e91 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7e94 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f7e96 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 005f7e99 jne 0x5f7ea4 */ if (!ZF_) goto L_005f7ea4;
  /* 005f7e9b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f7e9c call 0x5f7f60 */ esp -= 4; M32(esp) = 0x5f7ea1u; SAVEALL; F_005f7f60(c); ABI_CHECK(0x5f7f60u, 0x5f7e9cu); RETCHK(0x5f7ea1u, 0x5f7e9cu); LOADALL;
  /* 005f7ea1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f7ea4:;
  /* 005f7ea4 mov ebp, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebp = (u32)(M32(m_)); }
  /* 005f7ea8 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7eaa je 0x5f7ecb */ if (ZF_) goto L_005f7ecb;
  /* 005f7eac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7ead call 0x5f7d80 */ esp -= 4; M32(esp) = 0x5f7eb2u; SAVEALL; F_005f7d80(c); ABI_CHECK(0x5f7d80u, 0x5f7eadu); RETCHK(0x5f7eb2u, 0x5f7eadu); LOADALL;
  /* 005f7eb2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7eb5 mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f7eb8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7eba jne 0x5f7ecb */ if (!ZF_) goto L_005f7ecb;
  /* 005f7ebc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f7ebd call 0x5f7f40 */ esp -= 4; M32(esp) = 0x5f7ec2u; SAVEALL; F_005f7f40(c); ABI_CHECK(0x5f7f40u, 0x5f7ebdu); RETCHK(0x5f7ec2u, 0x5f7ebdu); LOADALL;
  /* 005f7ec2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f7ec3 call 0x5f7f60 */ esp -= 4; M32(esp) = 0x5f7ec8u; SAVEALL; F_005f7f60(c); ABI_CHECK(0x5f7f60u, 0x5f7ec3u); RETCHK(0x5f7ec8u, 0x5f7ec3u); LOADALL;
  /* 005f7ec8 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f7ecb:;
  /* 005f7ecb mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f7ecf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7ed1 je 0x5f7eee */ if (ZF_) goto L_005f7eee;
  /* 005f7ed3 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f7ed7 mov edi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edi = (u32)(M32(m_)); }
  /* 005f7eda mov esi, eax */ { esi = (u32)(eax); }
  /* 005f7edc mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005f7ede shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f7ee1 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f7ee3 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f7ee5 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f7ee8 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f7eea mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
L_005f7eee:;
  /* 005f7eee test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7ef0 je 0x5f7f0d */ if (ZF_) goto L_005f7f0d;
  /* 005f7ef2 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f7ef6 mov edi, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); edi = (u32)(M32(m_)); }
  /* 005f7ef9 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f7efb mov esi, ebp */ { esi = (u32)(ebp); }
  /* 005f7efd shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f7f00 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f7f02 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005f7f04 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f7f07 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f7f09 mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
L_005f7f0d:;
  /* 005f7f0d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f7f0e call 0x5f1c80 */ esp -= 4; M32(esp) = 0x5f7f13u; SAVEALL; F_005f1c80(c); ABI_CHECK(0x5f1c80u, 0x5f7f0eu); RETCHK(0x5f7f13u, 0x5f7f0eu); LOADALL;
  /* 005f7f13 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f7f14 push 0x9c0030 */ { u32 v_ = 0x9c0030u; esp -= 4; M32(esp) = v_; }
  /* 005f7f19 mov dword ptr [ebx + 0x14], esi */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(esi); }
  /* 005f7f1c mov dword ptr [ebx + 0x18], 0 */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(0x0u); }
  /* 005f7f23 call 0x5f8840 */ esp -= 4; M32(esp) = 0x5f7f28u; SAVEALL; F_005f8840(c); ABI_CHECK(0x5f8840u, 0x5f7f23u); RETCHK(0x5f7f28u, 0x5f7f23u); LOADALL;
  /* 005f7f28 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7f2b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005f7f2d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f7f2e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f7f2f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f7f30 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f7f31 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005f7f32 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7f40(CPU *c) {
  NATIVE_HOOK(0x5f7f40u) REGS; LOADALL;
L_005f7f40:;
  /* 005f7f40 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f7f44 test byte ptr [eax + 0x1c], 1 */ { const u32 m_ = (u32)(eax + 0x1cu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f7f48 jne 0x5f7f58 */ if (!ZF_) goto L_005f7f58;
  /* 005f7f4a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f7f4b push 0x693f54 */ { u32 v_ = 0x693f54u; esp -= 4; M32(esp) = v_; }
  /* 005f7f50 call 0x5f1a50 */ esp -= 4; M32(esp) = 0x5f7f55u; SAVEALL; F_005f1a50(c); ABI_CHECK(0x5f1a50u, 0x5f7f50u); RETCHK(0x5f7f55u, 0x5f7f50u); LOADALL;
  /* 005f7f55 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f7f58:;
  /* 005f7f58 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7f60(CPU *c) {
  NATIVE_HOOK(0x5f7f60u) REGS; LOADALL;
L_005f7f60:;
  /* 005f7f60 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f7f61 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f7f65 test byte ptr [esi + 0x1c], 2 */ { const u32 m_ = (u32)(esi + 0x1cu); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f7f69 jne 0x5f7f93 */ if (!ZF_) goto L_005f7f93;
  /* 005f7f6b mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f7f6e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7f70 je 0x5f7f7f */ if (ZF_) goto L_005f7f7f;
  /* 005f7f72 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f7f75 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f7f76 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f7f77 call 0x5f7dc0 */ esp -= 4; M32(esp) = 0x5f7f7cu; SAVEALL; F_005f7dc0(c); ABI_CHECK(0x5f7dc0u, 0x5f7f77u); RETCHK(0x5f7f7cu, 0x5f7f77u); LOADALL;
  /* 005f7f7c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f7f7f:;
  /* 005f7f7f mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f7f82 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7f84 je 0x5f7f93 */ if (ZF_) goto L_005f7f93;
  /* 005f7f86 mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 005f7f89 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f7f8a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f7f8b call 0x5f7dc0 */ esp -= 4; M32(esp) = 0x5f7f90u; SAVEALL; F_005f7dc0(c); ABI_CHECK(0x5f7dc0u, 0x5f7f8bu); RETCHK(0x5f7f90u, 0x5f7f8bu); LOADALL;
  /* 005f7f90 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f7f93:;
  /* 005f7f93 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f7f94 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f7fa0(CPU *c) {
  NATIVE_HOOK(0x5f7fa0u) REGS; LOADALL;
L_005f7fa0:;
  /* 005f7fa0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f7fa1 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f7fa5 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005f7fa9 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 005f7fad mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f7fb1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f7fb2 lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 005f7fb6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f7fb7 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 005f7fbb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f7fbc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f7fbd push 0x2000 */ { u32 v_ = 0x2000u; esp -= 4; M32(esp) = v_; }
  /* 005f7fc2 mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 005f7fca call 0x5f7e00 */ esp -= 4; M32(esp) = 0x5f7fcfu; SAVEALL; F_005f7e00(c); ABI_CHECK(0x5f7e00u, 0x5f7fcau); RETCHK(0x5f7fcfu, 0x5f7fcau); LOADALL;
  /* 005f7fcf add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f7fd2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7fd4 jne 0x5f7fd8 */ if (!ZF_) goto L_005f7fd8;
  /* 005f7fd6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005f7fd7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f7fd8:;
  /* 005f7fd8 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f7fdc test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f7fde je 0x5f7ff3 */ if (ZF_) goto L_005f7ff3;
  /* 005f7fe0 mov ecx, dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f7fe3 mov dword ptr [eax + 0x18], edx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(edx); }
  /* 005f7fe6 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 005f7fe9 or ch, 0x40 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f7fec or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f7fee mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 005f7ff1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005f7ff2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f7ff3:;
  /* 005f7ff3 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f7ff7 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 005f7ffa or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f7ffc mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 005f7fff pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005f8000 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8010(CPU *c) {
  NATIVE_HOOK(0x5f8010u) REGS; LOADALL;
L_005f8010:;
  /* 005f8010 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8011 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f8015 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8017 je 0x5f8043 */ if (ZF_) goto L_005f8043;
  /* 005f8019 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f801d mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f8021 mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 005f8024 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8025 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f8028 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f8029 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f802a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f802b push 0x1000 */ { u32 v_ = 0x1000u; esp -= 4; M32(esp) = v_; }
  /* 005f8030 call 0x5f7e00 */ esp -= 4; M32(esp) = 0x5f8035u; SAVEALL; F_005f7e00(c); ABI_CHECK(0x5f7e00u, 0x5f8030u); RETCHK(0x5f8035u, 0x5f8030u); LOADALL;
  /* 005f8035 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8038 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f803a jne 0x5f803e */ if (!ZF_) goto L_005f803e;
  /* 005f803c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f803d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f803e:;
  /* 005f803e mov dword ptr [eax + 0x18], esi */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(esi); }
  /* 005f8041 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8042 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f8043:;
  /* 005f8043 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f8047 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f804b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f804c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f804d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f804f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f8051 push 0x1000 */ { u32 v_ = 0x1000u; esp -= 4; M32(esp) = v_; }
  /* 005f8056 call 0x5f7e00 */ esp -= 4; M32(esp) = 0x5f805bu; SAVEALL; F_005f7e00(c); ABI_CHECK(0x5f7e00u, 0x5f8056u); RETCHK(0x5f805bu, 0x5f8056u); LOADALL;
  /* 005f805b add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f805e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f805f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8060(CPU *c) {
  NATIVE_HOOK(0x5f8060u) REGS; LOADALL;
L_005f8060:;
  /* 005f8060 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f8064 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f8068 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8069 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005f806d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f806e mov edi, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edi = (u32)(M32(m_)); }
  /* 005f8071 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8073 jne 0x5f8083 */ if (!ZF_) goto L_005f8083;
L_005f8075:;
  /* 005f8075 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8077 je 0x5f8083 */ if (ZF_) goto L_005f8083;
  /* 005f8079 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f807c mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f807f test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8081 je 0x5f8075 */ if (ZF_) goto L_005f8075;
L_005f8083:;
  /* 005f8083 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f8087 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8089 jne 0x5f8099 */ if (!ZF_) goto L_005f8099;
L_005f808b:;
  /* 005f808b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f808d je 0x5f8099 */ if (ZF_) goto L_005f8099;
  /* 005f808f mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f8092 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f8095 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8097 je 0x5f808b */ if (ZF_) goto L_005f808b;
L_005f8099:;
  /* 005f8099 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f809a mov ebx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebx = (u32)(M32(m_)); }
  /* 005f809e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f809f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f80a0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f80a1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f80a2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f80a3 call 0x5f7e00 */ esp -= 4; M32(esp) = 0x5f80a8u; SAVEALL; F_005f7e00(c); ABI_CHECK(0x5f7e00u, 0x5f80a3u); RETCHK(0x5f80a8u, 0x5f80a3u); LOADALL;
  /* 005f80a8 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f80ab test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f80ad pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f80ae jne 0x5f80b3 */ if (!ZF_) goto L_005f80b3;
  /* 005f80b0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f80b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f80b2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f80b3:;
  /* 005f80b3 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f80b6 mov dword ptr [eax + 0x18], esi */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(esi); }
  /* 005f80b9 or ch, 0x40 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f80bc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f80bd mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 005f80c0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f80c1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f80d0(CPU *c) {
  NATIVE_HOOK(0x5f80d0u) REGS; LOADALL;
L_005f80d0:;
  /* 005f80d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f80d1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f80d5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f80d6 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
L_005f80da:;
  /* 005f80da push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f80db push 0x9c0030 */ { u32 v_ = 0x9c0030u; esp -= 4; M32(esp) = v_; }
  /* 005f80e0 call 0x5f8910 */ esp -= 4; M32(esp) = 0x5f80e5u; SAVEALL; F_005f8910(c); ABI_CHECK(0x5f8910u, 0x5f80e0u); RETCHK(0x5f80e5u, 0x5f80e0u); LOADALL;
  /* 005f80e5 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f80e8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f80ea je 0x5f80fd */ if (ZF_) goto L_005f80fd;
  /* 005f80ec cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f80ef jne 0x5f80da */ if (!ZF_) goto L_005f80da;
  /* 005f80f1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f80f2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f80f3 call 0x5f80d0 */ esp -= 4; M32(esp) = 0x5f80f8u; SAVEALL; F_005f80d0(c); ABI_CHECK(0x5f80d0u, 0x5f80f3u); RETCHK(0x5f80f8u, 0x5f80f3u); LOADALL;
  /* 005f80f8 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f80fb jmp 0x5f80da */ goto L_005f80da;
L_005f80fd:;
  /* 005f80fd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f80fe call 0x5f7f40 */ esp -= 4; M32(esp) = 0x5f8103u; SAVEALL; F_005f7f40(c); ABI_CHECK(0x5f7f40u, 0x5f80feu); RETCHK(0x5f8103u, 0x5f80feu); LOADALL;
  /* 005f8103 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8104 push 0x9c0030 */ { u32 v_ = 0x9c0030u; esp -= 4; M32(esp) = v_; }
  /* 005f8109 call 0x5f8880 */ esp -= 4; M32(esp) = 0x5f810eu; SAVEALL; F_005f8880(c); ABI_CHECK(0x5f8880u, 0x5f8109u); RETCHK(0x5f810eu, 0x5f8109u); LOADALL;
  /* 005f810e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f810f call 0x5f1c00 */ esp -= 4; M32(esp) = 0x5f8114u; SAVEALL; F_005f1c00(c); ABI_CHECK(0x5f1c00u, 0x5f810fu); RETCHK(0x5f8114u, 0x5f810fu); LOADALL;
  /* 005f8114 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8115 call 0x5f7f60 */ esp -= 4; M32(esp) = 0x5f811au; SAVEALL; F_005f7f60(c); ABI_CHECK(0x5f7f60u, 0x5f8115u); RETCHK(0x5f811au, 0x5f8115u); LOADALL;
  /* 005f811a add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f811d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f811e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f811f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8120(CPU *c) {
  NATIVE_HOOK(0x5f8120u) REGS; LOADALL;
L_005f8120:;
  /* 005f8120 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8121 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f8122 push 0x9c0030 */ { u32 v_ = 0x9c0030u; esp -= 4; M32(esp) = v_; }
  /* 005f8127 call 0x5f8820 */ esp -= 4; M32(esp) = 0x5f812cu; SAVEALL; F_005f8820(c); ABI_CHECK(0x5f8820u, 0x5f8127u); RETCHK(0x5f812cu, 0x5f8127u); LOADALL;
  /* 005f812c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f812f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005f8131 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
L_005f8132:;
  /* 005f8132 mov eax, dword ptr [esi*8 + 0x67e410] */ { const u32 m_ = (u32)(esi * 8u + 0x67e410u); eax = (u32)(M32(m_)); }
  /* 005f8139 mov ecx, dword ptr [esi*8 + 0x67e414] */ { const u32 m_ = (u32)(esi * 8u + 0x67e414u); ecx = (u32)(M32(m_)); }
  /* 005f8140 push 0x40803 */ { u32 v_ = 0x40803u; esp -= 4; M32(esp) = v_; }
  /* 005f8145 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8146 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f8148 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005f814a push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005f814c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f814d call 0x5f1780 */ esp -= 4; M32(esp) = 0x5f8152u; SAVEALL; F_005f1780(c); ABI_CHECK(0x5f1780u, 0x5f814du); RETCHK(0x5f8152u, 0x5f814du); LOADALL;
  /* 005f8152 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8155 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8157 jne 0x5f8178 */ if (!ZF_) goto L_005f8178;
  /* 005f8159 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f815b jbe 0x5f8178 */ if ((CF_|ZF_)) goto L_005f8178;
  /* 005f815d lea edi, [esi*8 + 0x67e408] */ edi = (u32)((u32)(esi * 8u + 0x67e408u));
  /* 005f8164 mov ebx, esi */ { ebx = (u32)(esi); }
L_005f8166:;
  /* 005f8166 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 005f8168 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f8169 call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f816eu; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f8169u); RETCHK(0x5f816eu, 0x5f8169u); LOADALL;
  /* 005f816e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8171 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f8172 sub edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f8175 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f8176 jne 0x5f8166 */ if (!ZF_) goto L_005f8166;
L_005f8178:;
  /* 005f8178 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f8179 cmp esi, 5 */ { u32 a_ = esi, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f817c jb 0x5f8132 */ if (CF_) goto L_005f8132;
  /* 005f817e push 0x40803 */ { u32 v_ = 0x40803u; esp -= 4; M32(esp) = v_; }
  /* 005f8183 push 0x693f54 */ { u32 v_ = 0x693f54u; esp -= 4; M32(esp) = v_; }
  /* 005f8188 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f818a push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005f818c push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005f818e push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f8190 mov dword ptr [0x693f48], 0 */ { const u32 m_ = (u32)(0x693f48u); M32(m_) = (u32)(0x0u); }
  /* 005f819a mov dword ptr [0x6942b0], 1 */ { const u32 m_ = (u32)(0x6942b0u); M32(m_) = (u32)(0x1u); }
  /* 005f81a4 call 0x5f1780 */ esp -= 4; M32(esp) = 0x5f81a9u; SAVEALL; F_005f1780(c); ABI_CHECK(0x5f1780u, 0x5f81a4u); RETCHK(0x5f81a9u, 0x5f81a4u); LOADALL;
  /* 005f81a9 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f81ac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f81ae pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f81af je 0x5f81cb */ if (ZF_) goto L_005f81cb;
  /* 005f81b1 call 0x5f83f0 */ esp -= 4; M32(esp) = 0x5f81b6u; SAVEALL; F_005f83f0(c); ABI_CHECK(0x5f83f0u, 0x5f81b1u); RETCHK(0x5f81b6u, 0x5f81b1u); LOADALL;
  /* 005f81b6 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f81b9 jne 0x5f81be */ if (!ZF_) goto L_005f81be;
  /* 005f81bb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f81bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f81bd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f81be:;
  /* 005f81be push 0x693f54 */ { u32 v_ = 0x693f54u; esp -= 4; M32(esp) = v_; }
  /* 005f81c3 call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f81c8u; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f81c3u); RETCHK(0x5f81c8u, 0x5f81c3u); LOADALL;
  /* 005f81c8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f81cb:;
  /* 005f81cb test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f81cd jbe 0x5f81e7 */ if ((CF_|ZF_)) goto L_005f81e7;
  /* 005f81cf lea edi, [esi*8 + 0x67e408] */ edi = (u32)((u32)(esi * 8u + 0x67e408u));
L_005f81d6:;
  /* 005f81d6 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005f81d8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f81d9 call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f81deu; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f81d9u); RETCHK(0x5f81deu, 0x5f81d9u); LOADALL;
  /* 005f81de add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f81e1 sub edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f81e4 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f81e5 jne 0x5f81d6 */ if (!ZF_) goto L_005f81d6;
L_005f81e7:;
  /* 005f81e7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f81e8 mov dword ptr [0x6942b0], 0 */ { const u32 m_ = (u32)(0x6942b0u); M32(m_) = (u32)(0x0u); }
  /* 005f81f2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f81f4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f81f5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8200(CPU *c) {
  NATIVE_HOOK(0x5f8200u) REGS; LOADALL;
L_005f8200:;
  /* 005f8200 mov dword ptr [0x693f48], 1 */ { const u32 m_ = (u32)(0x693f48u); M32(m_) = (u32)(0x1u); }
L_005f820a:;
  /* 005f820a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f820c push 0x9c0030 */ { u32 v_ = 0x9c0030u; esp -= 4; M32(esp) = v_; }
  /* 005f8211 call 0x5f8950 */ esp -= 4; M32(esp) = 0x5f8216u; SAVEALL; F_005f8950(c); ABI_CHECK(0x5f8950u, 0x5f8211u); RETCHK(0x5f8216u, 0x5f8211u); LOADALL;
  /* 005f8216 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8219 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f821b je 0x5f822a */ if (ZF_) goto L_005f822a;
  /* 005f821d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f821f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8220 call 0x5f80d0 */ esp -= 4; M32(esp) = 0x5f8225u; SAVEALL; F_005f80d0(c); ABI_CHECK(0x5f80d0u, 0x5f8220u); RETCHK(0x5f8225u, 0x5f8220u); LOADALL;
  /* 005f8225 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8228 jmp 0x5f820a */ goto L_005f820a;
L_005f822a:;
  /* 005f822a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f822b push 0x9c0030 */ { u32 v_ = 0x9c0030u; esp -= 4; M32(esp) = v_; }
  /* 005f8230 call 0x5f8820 */ esp -= 4; M32(esp) = 0x5f8235u; SAVEALL; F_005f8820(c); ABI_CHECK(0x5f8820u, 0x5f8230u); RETCHK(0x5f8235u, 0x5f8230u); LOADALL;
  /* 005f8235 push 0x693f54 */ { u32 v_ = 0x693f54u; esp -= 4; M32(esp) = v_; }
  /* 005f823a call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f823fu; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f823au); RETCHK(0x5f823fu, 0x5f823au); LOADALL;
  /* 005f823f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8242 mov esi, 0x67e438 */ { esi = (u32)(0x67e438u); }
L_005f8247:;
  /* 005f8247 mov eax, dword ptr [esi - 8] */ { const u32 m_ = (u32)(esi + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 005f824a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f824b call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f8250u; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f824bu); RETCHK(0x5f8250u, 0x5f824bu); LOADALL;
  /* 005f8250 sub esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f8253 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8256 cmp esi, 0x67e410 */ { u32 a_ = esi, b_ = 0x67e410u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f825c ja 0x5f8247 */ if (!(CF_|ZF_)) goto L_005f8247;
  /* 005f825e mov dword ptr [0x6942b0], 0 */ { const u32 m_ = (u32)(0x6942b0u); M32(m_) = (u32)(0x0u); }
  /* 005f8268 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8269 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8270(CPU *c) {
  NATIVE_HOOK(0x5f8270u) REGS; LOADALL;
L_005f8270:;
  /* 005f8270 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8271 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f8275 cmp dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8279 jne 0x5f829a */ if (!ZF_) goto L_005f829a;
  /* 005f827b mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005f827d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f827e push 0x9c0030 */ { u32 v_ = 0x9c0030u; esp -= 4; M32(esp) = v_; }
  /* 005f8283 call 0x5f88c0 */ esp -= 4; M32(esp) = 0x5f8288u; SAVEALL; F_005f88c0(c); ABI_CHECK(0x5f88c0u, 0x5f8283u); RETCHK(0x5f8288u, 0x5f8283u); LOADALL;
  /* 005f8288 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f828b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f828d jne 0x5f8291 */ if (!ZF_) goto L_005f8291;
  /* 005f828f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8290 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f8291:;
  /* 005f8291 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005f8293 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
L_005f829a:;
  /* 005f829a mov eax, esi */ { eax = (u32)(esi); }
  /* 005f829c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f829d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f82a0(CPU *c) {
  NATIVE_HOOK(0x5f82a0u) REGS; LOADALL;
L_005f82a0:;
  /* 005f82a0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f82a1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f82a2 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 005f82a6 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005f82a8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f82a9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f82aa test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f82ac jbe 0x5f839d */ if ((CF_|ZF_)) goto L_005f839d;
  /* 005f82b2 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f82b6 lea esi, [eax + 0x1c] */ esi = (u32)((u32)(eax + 0x1cu));
L_005f82b9:;
  /* 005f82b9 mov eax, dword ptr [esi - 0x18] */ { const u32 m_ = (u32)(esi + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 005f82bc cmp eax, 0x2000 */ { u32 a_ = eax, b_ = 0x2000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f82c1 jne 0x5f82ef */ if (!ZF_) goto L_005f82ef;
  /* 005f82c3 mov ecx, dword ptr [esi - 8] */ { const u32 m_ = (u32)(esi + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 005f82c6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f82c7 push 0x9c0030 */ { u32 v_ = 0x9c0030u; esp -= 4; M32(esp) = v_; }
  /* 005f82cc call 0x5f88c0 */ esp -= 4; M32(esp) = 0x5f82d1u; SAVEALL; F_005f88c0(c); ABI_CHECK(0x5f88c0u, 0x5f82ccu); RETCHK(0x5f82d1u, 0x5f82ccu); LOADALL;
  /* 005f82d1 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005f82d3 mov ecx, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005f82d6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f82d7 mov edx, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 005f82da push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f82db push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f82dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f82dd push 0x2000 */ { u32 v_ = 0x2000u; esp -= 4; M32(esp) = v_; }
  /* 005f82e2 call 0x5f7fa0 */ esp -= 4; M32(esp) = 0x5f82e7u; SAVEALL; F_005f7fa0(c); ABI_CHECK(0x5f7fa0u, 0x5f82e2u); RETCHK(0x5f82e7u, 0x5f82e2u); LOADALL;
  /* 005f82e7 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f82ea jmp 0x5f8374 */ goto L_005f8374;
L_005f82ef:;
  /* 005f82ef cmp eax, 0x4000 */ { u32 a_ = eax, b_ = 0x4000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f82f4 jne 0x5f8328 */ if (!ZF_) goto L_005f8328;
  /* 005f82f6 mov eax, dword ptr [esi - 8] */ { const u32 m_ = (u32)(esi + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 005f82f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f82fa push 0x9c0030 */ { u32 v_ = 0x9c0030u; esp -= 4; M32(esp) = v_; }
  /* 005f82ff call 0x5f88c0 */ esp -= 4; M32(esp) = 0x5f8304u; SAVEALL; F_005f88c0(c); ABI_CHECK(0x5f88c0u, 0x5f82ffu); RETCHK(0x5f8304u, 0x5f82ffu); LOADALL;
  /* 005f8304 mov edi, eax */ { edi = (u32)(eax); }
  /* 005f8306 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f8309 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f830a call 0x5f24f0 */ esp -= 4; M32(esp) = 0x5f830fu; SAVEALL; F_005f24f0(c); ABI_CHECK(0x5f24f0u, 0x5f830au); RETCHK(0x5f830fu, 0x5f830au); LOADALL;
  /* 005f830f mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005f8311 mov ecx, dword ptr [esi - 0x10] */ { const u32 m_ = (u32)(esi + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005f8314 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f8315 mov edx, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 005f8318 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f8319 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f831b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f831c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f831d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f831e call 0x5f8060 */ esp -= 4; M32(esp) = 0x5f8323u; SAVEALL; F_005f8060(c); ABI_CHECK(0x5f8060u, 0x5f831eu); RETCHK(0x5f8323u, 0x5f831eu); LOADALL;
  /* 005f8323 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8326 jmp 0x5f8374 */ goto L_005f8374;
L_005f8328:;
  /* 005f8328 cmp eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f832d jne 0x5f835a */ if (!ZF_) goto L_005f835a;
  /* 005f832f mov eax, dword ptr [esi - 8] */ { const u32 m_ = (u32)(esi + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 005f8332 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8334 je 0x5f8346 */ if (ZF_) goto L_005f8346;
  /* 005f8336 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8337 push 0x9c0030 */ { u32 v_ = 0x9c0030u; esp -= 4; M32(esp) = v_; }
  /* 005f833c call 0x5f88c0 */ esp -= 4; M32(esp) = 0x5f8341u; SAVEALL; F_005f88c0(c); ABI_CHECK(0x5f88c0u, 0x5f833cu); RETCHK(0x5f8341u, 0x5f833cu); LOADALL;
  /* 005f8341 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8344 jmp 0x5f8348 */ goto L_005f8348;
L_005f8346:;
  /* 005f8346 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005f8348:;
  /* 005f8348 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005f834a mov edx, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 005f834d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f834e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f834f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8350 call 0x5f8010 */ esp -= 4; M32(esp) = 0x5f8355u; SAVEALL; F_005f8010(c); ABI_CHECK(0x5f8010u, 0x5f8350u); RETCHK(0x5f8355u, 0x5f8350u); LOADALL;
  /* 005f8355 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8358 jmp 0x5f8374 */ goto L_005f8374;
L_005f835a:;
  /* 005f835a mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005f835c mov ecx, dword ptr [esi - 0x10] */ { const u32 m_ = (u32)(esi + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005f835f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f8360 mov edx, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 005f8363 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f8364 mov edx, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 005f8367 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f8369 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f836a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f836b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f836c call 0x5f7e00 */ esp -= 4; M32(esp) = 0x5f8371u; SAVEALL; F_005f7e00(c); ABI_CHECK(0x5f7e00u, 0x5f836cu); RETCHK(0x5f8371u, 0x5f836cu); LOADALL;
  /* 005f8371 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f8374:;
  /* 005f8374 mov edi, eax */ { edi = (u32)(eax); }
  /* 005f8376 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8378 je 0x5f83a6 */ if (ZF_) goto L_005f83a6;
  /* 005f837a mov eax, dword ptr [esi - 0xc] */ { const u32 m_ = (u32)(esi + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 005f837d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f837e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f837f call 0x5f1be0 */ esp -= 4; M32(esp) = 0x5f8384u; SAVEALL; F_005f1be0(c); ABI_CHECK(0x5f1be0u, 0x5f837fu); RETCHK(0x5f8384u, 0x5f837fu); LOADALL;
  /* 005f8384 mov ecx, dword ptr [esi - 0x1c] */ { const u32 m_ = (u32)(esi + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 005f8387 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f8388 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f8389 call 0x5f1bb0 */ esp -= 4; M32(esp) = 0x5f838eu; SAVEALL; F_005f1bb0(c); ABI_CHECK(0x5f1bb0u, 0x5f8389u); RETCHK(0x5f838eu, 0x5f8389u); LOADALL;
  /* 005f838e add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8391 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f8392 add esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f8395 cmp ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8397 jb 0x5f82b9 */ if (CF_) goto L_005f82b9;
L_005f839d:;
  /* 005f839d mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f83a1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f83a2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f83a3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f83a4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f83a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f83a6:;
  /* 005f83a6 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f83a8 jbe 0x5f83da */ if ((CF_|ZF_)) goto L_005f83da;
  /* 005f83aa mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f83ae mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005f83b0 shl edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f83b3 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 005f83b5 lea esi, [edx + eax - 0x10] */ esi = (u32)((u32)(edx + eax + 0xfffffff0u));
L_005f83b9:;
  /* 005f83b9 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005f83bb push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f83bd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f83be push 0x9c0030 */ { u32 v_ = 0x9c0030u; esp -= 4; M32(esp) = v_; }
  /* 005f83c3 call 0x5f88c0 */ esp -= 4; M32(esp) = 0x5f83c8u; SAVEALL; F_005f88c0(c); ABI_CHECK(0x5f88c0u, 0x5f83c3u); RETCHK(0x5f83c8u, 0x5f83c3u); LOADALL;
  /* 005f83c8 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f83cb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f83cc call 0x5f80d0 */ esp -= 4; M32(esp) = 0x5f83d1u; SAVEALL; F_005f80d0(c); ABI_CHECK(0x5f80d0u, 0x5f83ccu); RETCHK(0x5f83d1u, 0x5f83ccu); LOADALL;
  /* 005f83d1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f83d4 sub esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f83d7 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f83d8 jne 0x5f83b9 */ if (!ZF_) goto L_005f83b9;
L_005f83da:;
  /* 005f83da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f83db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f83dc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f83dd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f83df pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f83e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f83f0(CPU *c) {
  NATIVE_HOOK(0x5f83f0u) REGS; LOADALL;
L_005f83f0:;
  /* 005f83f0 push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 005f83f2 push 0x67e438 */ { u32 v_ = 0x67e438u; esp -= 4; M32(esp) = v_; }
  /* 005f83f7 call 0x5f82a0 */ esp -= 4; M32(esp) = 0x5f83fcu; SAVEALL; F_005f82a0(c); ABI_CHECK(0x5f82a0u, 0x5f83f7u); RETCHK(0x5f83fcu, 0x5f83f7u); LOADALL;
  /* 005f83fc add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f83ff neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005f8401 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005f8403 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005f8405 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8410(CPU *c) {
  NATIVE_HOOK(0x5f8410u) REGS; LOADALL;
L_005f8410:;
  /* 005f8410 push 0x40800 */ { u32 v_ = 0x40800u; esp -= 4; M32(esp) = v_; }
  /* 005f8415 push 0x6942b4 */ { u32 v_ = 0x6942b4u; esp -= 4; M32(esp) = v_; }
  /* 005f841a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f841c push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005f841e mov eax, 0x6942d8 */ { eax = (u32)(0x6942d8u); }
  /* 005f8423 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005f8425 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 005f8427 mov dword ptr [0x6942d8], eax */ { const u32 m_ = (u32)(0x6942d8u); M32(m_) = (u32)(eax); }
  /* 005f842c mov dword ptr [0x6942dc], eax */ { const u32 m_ = (u32)(0x6942dcu); M32(m_) = (u32)(eax); }
  /* 005f8431 call 0x5f1780 */ esp -= 4; M32(esp) = 0x5f8436u; SAVEALL; F_005f1780(c); ABI_CHECK(0x5f1780u, 0x5f8431u); RETCHK(0x5f8436u, 0x5f8431u); LOADALL;
  /* 005f8436 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8439 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f843b je 0x5f8448 */ if (ZF_) goto L_005f8448;
  /* 005f843d mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f8442 mov dword ptr [0x6942e0], eax */ { const u32 m_ = (u32)(0x6942e0u); M32(m_) = (u32)(eax); }
  /* 005f8447 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f8448:;
  /* 005f8448 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f844a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8450(CPU *c) {
  NATIVE_HOOK(0x5f8450u) REGS; LOADALL;
L_005f8450:;
  /* 005f8450 mov eax, dword ptr [0x6942d8] */ { const u32 m_ = (u32)(0x6942d8u); eax = (u32)(M32(m_)); }
  /* 005f8455 cmp eax, 0x6942d8 */ { u32 a_ = eax, b_ = 0x6942d8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f845a je 0x5f8474 */ if (ZF_) goto L_005f8474;
L_005f845c:;
  /* 005f845c add eax, -0x14 */ { u32 a_ = eax, b_ = 0xffffffecu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f845f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8460 call 0x5f8570 */ esp -= 4; M32(esp) = 0x5f8465u; SAVEALL; F_005f8570(c); ABI_CHECK(0x5f8570u, 0x5f8460u); RETCHK(0x5f8465u, 0x5f8460u); LOADALL;
  /* 005f8465 mov eax, dword ptr [0x6942d8] */ { const u32 m_ = (u32)(0x6942d8u); eax = (u32)(M32(m_)); }
  /* 005f846a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f846d cmp eax, 0x6942d8 */ { u32 a_ = eax, b_ = 0x6942d8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8472 jne 0x5f845c */ if (!ZF_) goto L_005f845c;
L_005f8474:;
  /* 005f8474 push 0x6942b4 */ { u32 v_ = 0x6942b4u; esp -= 4; M32(esp) = v_; }
  /* 005f8479 call 0x5f1910 */ esp -= 4; M32(esp) = 0x5f847eu; SAVEALL; F_005f1910(c); ABI_CHECK(0x5f1910u, 0x5f8479u); RETCHK(0x5f847eu, 0x5f8479u); LOADALL;
  /* 005f847e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8481 mov dword ptr [0x6942e0], 0 */ { const u32 m_ = (u32)(0x6942e0u); M32(m_) = (u32)(0x0u); }
  /* 005f848b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8490(CPU *c) {
  NATIVE_HOOK(0x5f8490u) REGS; LOADALL;
L_005f8490:;
  /* 005f8490 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8491 mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
  /* 005f8495 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8497 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f8498 jne 0x5f84bd */ if (!ZF_) goto L_005f84bd;
  /* 005f849a push 0x30800 */ { u32 v_ = 0x30800u; esp -= 4; M32(esp) = v_; }
  /* 005f849f push 0x6942b4 */ { u32 v_ = 0x6942b4u; esp -= 4; M32(esp) = v_; }
  /* 005f84a4 call 0x5f1930 */ esp -= 4; M32(esp) = 0x5f84a9u; SAVEALL; F_005f1930(c); ABI_CHECK(0x5f1930u, 0x5f84a4u); RETCHK(0x5f84a9u, 0x5f84a4u); LOADALL;
  /* 005f84a9 mov esi, eax */ { esi = (u32)(eax); }
  /* 005f84ab add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f84ae test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f84b0 jne 0x5f84b5 */ if (!ZF_) goto L_005f84b5;
  /* 005f84b2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f84b3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f84b4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f84b5:;
  /* 005f84b5 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 005f84bb jmp 0x5f84c3 */ goto L_005f84c3;
L_005f84bd:;
  /* 005f84bd mov dword ptr [esi], 1 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1u); }
L_005f84c3:;
  /* 005f84c3 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f84c7 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f84cb add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f84ce mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 005f84d1 imul ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f84d6 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 005f84da lea edx, [ecx + eax + 0x1c] */ edx = (u32)((u32)(ecx + eax + 0x1cu));
  /* 005f84de lea eax, [esi + 0xc] */ eax = (u32)((u32)(esi + 0xcu));
  /* 005f84e1 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f84e4 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f84e7 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 005f84e9 mov ecx, dword ptr [0x6942d8] */ { const u32 m_ = (u32)(0x6942d8u); ecx = (u32)(M32(m_)); }
  /* 005f84ef lea eax, [esi + 0x14] */ eax = (u32)((u32)(esi + 0x14u));
  /* 005f84f2 mov dword ptr [esi + 0x18], 0x6942d8 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x6942d8u); }
  /* 005f84f9 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f84fb mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f84fd mov edx, dword ptr [0x6942d8] */ { const u32 m_ = (u32)(0x6942d8u); edx = (u32)(M32(m_)); }
  /* 005f8503 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f8506 mov dword ptr [0x6942d8], eax */ { const u32 m_ = (u32)(0x6942d8u); M32(m_) = (u32)(eax); }
  /* 005f850b jbe 0x5f851f */ if ((CF_|ZF_)) goto L_005f851f;
L_005f850d:;
  /* 005f850d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f850e dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f850f call 0x5f8540 */ esp -= 4; M32(esp) = 0x5f8514u; SAVEALL; F_005f8540(c); ABI_CHECK(0x5f8540u, 0x5f850fu); RETCHK(0x5f8514u, 0x5f850fu); LOADALL;
  /* 005f8514 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8517 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8519 je 0x5f8524 */ if (ZF_) goto L_005f8524;
  /* 005f851b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f851d ja 0x5f850d */ if (!(CF_|ZF_)) goto L_005f850d;
L_005f851f:;
  /* 005f851f mov eax, esi */ { eax = (u32)(esi); }
  /* 005f8521 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8522 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8523 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f8524:;
  /* 005f8524 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8525 call 0x5f8570 */ esp -= 4; M32(esp) = 0x5f852au; SAVEALL; F_005f8570(c); ABI_CHECK(0x5f8570u, 0x5f8525u); RETCHK(0x5f852au, 0x5f8525u); LOADALL;
  /* 005f852a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f852d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f852f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8530 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8531 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8540(CPU *c) {
  NATIVE_HOOK(0x5f8540u) REGS; LOADALL;
L_005f8540:;
  /* 005f8540 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8541 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f8545 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f8548 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8549 call 0x5f86b0 */ esp -= 4; M32(esp) = 0x5f854eu; SAVEALL; F_005f86b0(c); ABI_CHECK(0x5f86b0u, 0x5f8549u); RETCHK(0x5f854eu, 0x5f8549u); LOADALL;
  /* 005f854e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8551 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8553 jne 0x5f8557 */ if (!ZF_) goto L_005f8557;
  /* 005f8555 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8556 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f8557:;
  /* 005f8557 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f855a lea ecx, [esi + 0xc] */ ecx = (u32)((u32)(esi + 0xcu));
  /* 005f855d mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 005f855f mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005f8562 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005f8564 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8565 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f8568 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005f856a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8570(CPU *c) {
  NATIVE_HOOK(0x5f8570u) REGS; LOADALL;
L_005f8570:;
  /* 005f8570 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8571 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f8572 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 005f8576 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f8579 lea esi, [edi + 0xc] */ esi = (u32)((u32)(edi + 0xcu));
  /* 005f857c cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f857e je 0x5f859e */ if (ZF_) goto L_005f859e;
L_005f8580:;
  /* 005f8580 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f8583 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005f8585 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8586 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005f8588 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f858a mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f858d mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f8590 call 0x5f86f0 */ esp -= 4; M32(esp) = 0x5f8595u; SAVEALL; F_005f86f0(c); ABI_CHECK(0x5f86f0u, 0x5f8590u); RETCHK(0x5f8595u, 0x5f8590u); LOADALL;
  /* 005f8595 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005f8597 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f859a cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f859c jne 0x5f8580 */ if (!ZF_) goto L_005f8580;
L_005f859e:;
  /* 005f859e mov eax, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f85a1 mov ecx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f85a4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f85a5 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f85a7 mov edx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); edx = (u32)(M32(m_)); }
  /* 005f85aa mov eax, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f85ad mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f85b0 call 0x5f85c0 */ esp -= 4; M32(esp) = 0x5f85b5u; SAVEALL; F_005f85c0(c); ABI_CHECK(0x5f85c0u, 0x5f85b0u); RETCHK(0x5f85b5u, 0x5f85b0u); LOADALL;
  /* 005f85b5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f85b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f85b9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f85ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
