BITS 64

global _ft_strcpy

section .text

_ft_strcpy:
	xor rcx, rcx ; set the RCX register (loop counter) to 0 
	; Can also do mov rcx, 0
	jmp copy_str ; go to copy_str

copy_str:
	cmp [rsi + rcx], byte 0 ; compare src[i] with '\0'
	je ret_str ; if cmp is true then go to ret_str
	mov dl, byte [rsi + rcx] ; stock src[i] in 8-bit register to use it as a temp
	mov byte [rdi + rcx], dl ; mov the 8-bit register to dst[i]
	inc rcx ; inc RCX register (loop counter)
	jmp copy_str ; loop

ret_str:
	mov byte [rdi + rcx], 0 ; mov dst[i] to '\0' for end dst string
	mov rax, rdi ; move RDI register (contains dst) to RAX register (return value)
	ret ; return value of RAX register (return value) that contains dst
