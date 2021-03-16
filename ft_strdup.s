extern	___error
extern	_malloc
extern	_ft_strlen
extern	_ft_strcpy
;			_ft_strcpy
;	rdi = dst		rsi = src

global	_ft_strdup
; rdi = const char *s1
_ft_strdup:
	xor	rax, rax
	xor	rbx, rbx
	xor	rsi, rsi
	xor	rdi, rdi

	push	rbx
	call	_ft_strlen ; длина строки сохранилась в rax

	mov		rdi, rax ; сохранили длину строки в rdi

	call	_malloc ; должен использовать rdi в качестве size
	jc	.errno

	mov	rsi, rdi
	mov	rdi, rax

	call	_ft_strcpy
	pop		rbx
	ret
	.errno:
		mov	rbx, rax
		call	___error
		mov	[rax], rbx
		mov	rax, 0
		pop	rbx
		ret