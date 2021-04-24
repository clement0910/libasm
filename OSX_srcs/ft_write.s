BITS 64

global _ft_write
extern ___error

section .text

_ft_write:
    mov rax, 0x2000004 ; set the RAX Register to the write syscall value
    syscall ; syscall write
    jc error ; error sets flag, RAX register = error
    ret ; return value of RAX register (return value) that contains value of write

error:
    push rax        ; push errno to the stack for save it
    call ___error   ; call extern ___error
    pop rcx			; pop to RCX register for get real errno
	mov [rax], rcx 	; move RCX register to RAX Value Register because RAX became an int* because of ____error
    mov rax, -1 ; set the RAX Register (return value) to -1 because write syscall failed
    ret ; return value of RAX register (return value) that contains -1