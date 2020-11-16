   global _ft_write
;    call extern ___error
    section .text
_ft_write:
    mov rax, 0x02000004
    syscall
    ret
    mov rax, 0x02000001
    syscall