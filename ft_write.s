<<<<<<< HEAD
   global _ft_write
;    call extern ___error
=======
    global _ft_write
>>>>>>> 1ca60ef0b059aefe3cca2b5263cb66bc71bf757e
    section .text
_ft_write:
    mov rax, 0x02000004
    syscall
    ret
    mov rax, 0x02000001
    syscall