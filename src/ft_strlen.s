      global _ft_strlen
      section .text 
_ft_strlen:
      xor rcx,rcx
loop:
      cmp [rdi + rcx], byte 0
      je finish
      inc rcx
      jmp loop
finish:
      mov rax,rcx
      ret
