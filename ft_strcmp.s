global	_ft_strcmp
; rdi = s1		rsi = s2
_ft_strcmp:
	xor	rax, rax ; возвращает значение
	xor	rcx, rcx ; счетчик
	xor	rbx, rbx ; временное хранение
	push	rbx
	.cycle:
		cmp	[rdi + rcx], byte 0
		je .get_reg
		cmp	[rsi + rcx], byte 0
		je .get_reg
		mov	rax, [rdi + rcx]
		mov	rbx, [rsi + rcx]
		cmp	rax, rbx
		jne	.end
		inc	rcx
		.get_reg:
			mov	rax, [rdi + rcx]
			mov	rbx, [rsi + rcx]
			.end
		.end:
			sub	rax, rbx
			pop	rbx
			ret
