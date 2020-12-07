         global _ft_strcpy
        section .text 
_ft_strcpy:
    xor rcx,rcx
    xor rbx,rbx
loop:
    cmp [rsi + rcx], byte 0
    je finish
    mov al,[rsi + rcx]
    mov [rdi + rcx],al
    inc rcx
    jmp loop
finish:
    mov rax,rdi
    ret