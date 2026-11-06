# Stack switching between recompiled code (host stack) and real DLLs (guest stack = real thread stack).
# CPU offsets: eax 0 ecx 4 edx 8 ebx 12 esp 16 ebp 20 esi 24 edi 28 host_sp 80 fcw 84 fretf 88 ret_to 92 fret 96 freto 104
        .text

# void native_call_asm(CPU *c, u32 target)  -- [c->esp] holds the guest return address
        .globl _native_call_asm
_native_call_asm:
        pushl %ebp
        pushl %ebx
        pushl %esi
        pushl %edi
        movl 20(%esp), %esi
        movl 24(%esp), %edi
        movl %esp, 80(%esi)
        movl 0(%esi), %eax
        movl 4(%esi), %ecx
        movl 8(%esi), %edx
        movl 16(%esi), %esp
        addl $4, %esp              # our call re-pushes a return address into the same slot
        call *%edi
        movl %eax, 0(%esi)
        movl %ecx, 4(%esi)
        movl %edx, 8(%esi)
        movl %esp, 16(%esi)
        fnstcw 84(%esi)
        fnstsw %ax
        andl $0x3800, %eax
        jz 1f
        fstpl 96(%esi)             # callee returned a float/double in ST0
        movl $1, 88(%esi)
1:      movl 80(%esi), %esp
        popl %edi
        popl %esi
        popl %ebx
        popl %ebp
        ret

# Entered from the vectored exception handler when native code jumps to a guest code address.
# eax = CPU*, real esp = guest stack (return address on top), guest regs already copied into CPU.
        .globl _guest_enter_tramp
_guest_enter_tramp:
        movl 80(%eax), %esp
        andl $-16, %esp
        subl $12, %esp
        pushl %eax
        call _guest_enter_c
        movl %eax, %ebp
        movl 16(%ebp), %esp
        pushl 92(%ebp)
        cmpl $0, 104(%ebp)
        je 2f
        fldl 96(%ebp)
2:      movl 0(%ebp), %eax
        movl 4(%ebp), %ecx
        movl 8(%ebp), %edx
        movl 12(%ebp), %ebx
        movl 24(%ebp), %esi
        movl 28(%ebp), %edi
        movl 20(%ebp), %ebp
        ret

# void switch_and_run(u32 host_sp, CPU *c, GuestFn f)
        .globl _switch_and_run
_switch_and_run:
        pushl %ebp
        movl %esp, %ebp
        pushl %ebx
        pushl %esi
        pushl %edi
        movl 8(%ebp), %eax
        movl 12(%ebp), %ecx
        movl 16(%ebp), %edx
        movl %esp, %ebx
        movl %eax, %esp
        andl $-16, %esp
        subl $12, %esp
        pushl %ecx
        call *%edx
        movl %ebx, %esp
        popl %edi
        popl %esi
        popl %ebx
        popl %ebp
        ret
