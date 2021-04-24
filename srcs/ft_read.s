BITS 64

global _ft_read
extern ___error

section .text

_ft_read:
    mov rax, 0x2000003 ; set the RAX Register to the read syscall value
    syscall ; syscall read
    jc error ; error sets flag, RAX register = error
    ret ; return value of RAX register (return value) that contains value of read

error:
    push rax        ; push errno to the stack for save it
    call ___error   ; call extern ___error
    pop rcx			; pop to RCX register for get real errno
	mov [rax], rcx 	; move RCX register to RAX Value Register because RAX became an int* because of ____error
    mov rax, -1 ; set the RAX Register (return value) to -1 because read syscall failed
    ret ; return value of RAX register (return value) that contains -1