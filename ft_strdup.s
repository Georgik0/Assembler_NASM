extern	___error
extern	_malloc
extern	_ft_strlen
extern	_ft_strcpy

global	_ft_strdup
; rdi = const char *s1
_ft_strdup:
	xor	rax, rax
	xor	rsi, rsi

	call	_ft_strlen

	push	rdi
	inc		rax
	mov		rdi, rax

	call	_malloc
	jc	.errno

	pop		rdi

	mov	rsi, rdi
	mov	rdi, rax
	call	_ft_strcpy

	ret
	.errno:
		call	___error
		mov	word [rax], 12
		mov	rax, 0
		pop rdi
		ret