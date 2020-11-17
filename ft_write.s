   global _ft_write
   call extern ___error
   section .text
_ft_write:
    mov rax, 0x02000004
    syscall
    jc error
    ret
error:
    push rbp
    mov dl, al
    call ___error
    mov [rax], dl
    mov rax, -1
    pop rbp
    ret
