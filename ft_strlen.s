      global _ft_strlen
      section .text 
_ft_strlen:
      xor rcx,rcx
loop:

      cmp [rdi], byte 0
      je finish
      inc rdi
      inc rcx
      jmp loop
finish:
      mov rax,rcx
      ret
