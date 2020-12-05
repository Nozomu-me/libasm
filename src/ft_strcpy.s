         global _ft_strcpy
        section .text 
_ft_strcpy:
    xor rcx,rcx
    xor rbx,rbx
loop:
    cmp [rsi + rcx], byte 0
    je finish
    mov byte al,[rsi + rcx]
    mov byte [rdi + rcx],al
    inc rcx
    jmp loop
finish:
    mov rax,rdi
    ret