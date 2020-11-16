    global _ft_read
    extern  ___error
    section .text 
_ft_read:
    mov rax, 0x02000003
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