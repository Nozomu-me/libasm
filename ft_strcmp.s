    global _ft_strcmp
    section .text 
_ft_strcmp:
    xor rcx, rcx 
    xor rax, rax
    xor rdx, rdx
loop:
    cmp [rdi] ,byte 0
    je finish
    cmp [rsi ],byte 0
    je finish
    mov dl, [rdi]
    cmp dl , [rsi]
    jne finish
    inc rdi
    inc rsi
    jmp loop

finish:
    mov al,[rdi]
    mov dl,[rsi]
    sub rax, rdx
    ret


; global _ft_strcmp
;     section .text
; _ft_strcmp:
;     xor rcx, rcx
;     xor rax, rax
; loop:
;     cmp [rdi] ,byte 0
;     je finish
;     cmp [rsi ],byte 0
;     je finish
;     mov dl, [rdi ]
;     cmp dl , [rsi ]
;     jne finish
;     inc rdi
;     inc rsi
;     jmp loop
; check:
;     mov al,[rsi] 
;     sub al,[rdi] 
;     neg rax
;     ret
; finish:
;     mov al,[rdi]
;     sub al,[rsi]
;     js check
;     ret
