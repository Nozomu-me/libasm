    global _ft_strdup
    extern _malloc
    extern _ft_strlen
    extern _ft_strcpy
    section .text 
_ft_strdup:
    xor rax, rax
    push rdi
    call _ft_strlen
    mov rax, rdi
    call _malloc
    pop rsi
    ; mov rsi,rdi
    mov rdi,rax
    call _ft_strcpy
    ; mov rax,1
    ; mov rax,rdi
    ret