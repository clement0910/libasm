BITS 64

global _ft_strdup
extern ___error
extern _ft_strlen
extern _ft_strcpy
extern _malloc

_ft_strdup:
	call _ft_strlen ; call strlen with s1 in RDI Register
	push rdi ; push rdi to the stack to save s1
	mov rdi, rax ; move RAX Register (return value of strlen) to get len in RDI Register for call malloc
	call _malloc ; call malloc with RDI Register (len of s1)
	cmp rax, 0 ; cmp RAX Register (return value of malloc) with '\0' to check malloc
	je ret_str ; if cmp is false then ret_str
	mov rdi, rax ; mov RAX Register (return value of malloc) to RDI Register for call strcpy
	pop rsi ; pop rsi from the stack for call strcpy
	call _ft_strcpy ; call strcpy with RDI Register (dst) and RSI Register (src)
	ret ; return value of RAX register (return value of strcpy) that contains dst

ret_str:
	call ___error ; call extern ___error
	mov rcx, 12 ; set Register RCX (use it as temp) to 12 because strdup set errno if fails
	mov [rax], rcx ; move RCX register to RAX Value Register because RAX became an int* because of ____error
	mov rax, 0 ; set the RAX Register (return value) to 0 because strdup failed and return null
	ret ; return value of RAX register (return value) that contains 0
