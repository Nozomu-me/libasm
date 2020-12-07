    global _ft_strcmp
    section .text 
_ft_strcmp:
    xor rcx, rcx 
    xor rax, rax
    xor rdx, rdx
loop:
    cmp [rdi + rcx] ,byte 0
    je finish
    cmp [rsi + rcx],byte 0
    je finish
    mov dl, [rdi + rcx]
    cmp dl , [rsi + rcx]
    jne finish
    inc rcx
    jmp loop

finish:
    mov al,[rdi + rcx]
    mov dl,[rsi + rcx]
    sub rax, rdx
    ret
