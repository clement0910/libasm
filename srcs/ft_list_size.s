BITS 64

global _ft_list_size

section .text

_ft_list_size:
	xor rcx, rcx
	jmp count_list

count_list:
	cmp rdi, 0
	je ret_count
	mov rdi, [rdi + 8]
	inc rcx
	jmp count_list

ret_count:
	mov rax, rcx
	ret