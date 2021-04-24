BITS 64

global _ft_strcmp

section .text

_ft_strcmp:
	xor rcx, rcx ; set the RCX register (loop counter) to 0
	; Can also do mov rcx, 0
	jmp cmp_str ; go to cmp_str

cmp_str:
	cmp [rdi + rcx], byte 0 ; compare s1[i] with '\0'
	je ret_cmp ; if cmp is true then go to ret_cmp
	cmp [rsi + rcx], byte 0 ; compare s2[i] with '\0'
	je ret_cmp ; if cmp is true then go to ret_cmp
	mov dl, byte [rsi + rcx] ; stock s1[i] in 8-bit register to use it as a temp
	cmp byte [rdi + rcx], dl ; compare s1[i] with s2[i] using the 8-bit register
	jne ret_cmp ; if cmp is false then go to ret_cmp
	inc rcx ; inc RCX register (loop counter)
	jmp cmp_str ; loop

ret_cmp:
	movzx rax, byte [rdi + rcx] ; mov s1[i] (8 bits) to RAX register (64 bits) using movzx
	movzx rdx, byte [rsi + rcx] ; mov s2[i] (8 bits) to RAX register (64 bits) using movzx
	sub rax, rdx ; sub RAX register (s1[i]) and RDI register (s2[i])
	ret ; return value of RAX register (return value) that contains result of sub