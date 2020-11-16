    global _ft_read
<<<<<<< HEAD
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
=======
    section .text
_ft_read:
    mov rax, 0x02000003
    syscall
    ret
    mov rax, 0x02000001
    syscall
>>>>>>> 1ca60ef0b059aefe3cca2b5263cb66bc71bf757e
