BITS 64

global _ft_strlen

section .text

_ft_strlen:
	xor rcx, rcx ; set the RCX register (loop counter) to 0 
	; Can also do mov rcx, 0
	jmp count_len ; go to count_len

count_len:
	cmp [rdi + rcx], byte 0 ; compare str[i] with '\0'
	je ret_len ; if cmp is true then go to ret_len
	inc rcx ; inc RCX register (loop counter)
	jmp count_len ; loop

ret_len:
	mov rax, rcx ; move RCX register (loop counter) to RAX register (return value)
	ret ; return value of RAX register (return value)