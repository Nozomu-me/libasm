    global _ft_strcpy
    section .text 
_ft_strcpy:
    push rcx
    xor rcx,rcx
loop:
    cmp [rdi], byte 0
    je finish
    mov rsi,[rdi]
    inc rdi
    inc rcx
    jmp loop
finish:
    mov rax,rsi 
    pop rcx
    ret