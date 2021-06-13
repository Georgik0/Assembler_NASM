global	_ft_strcmp
; rdi = s1		rsi = s2
_ft_strcmp:
	xor	rax, rax
	xor	rcx, rcx
	xor	rbx, rbx
	push	rbx
	.cycle:
		cmp	[rdi + rcx], byte 0
		je .get_reg
		cmp	[rsi + rcx], byte 0
		je .get_reg
		mov	al, byte [rdi + rcx]
		mov	bl, byte [rsi + rcx]
		cmp	eax, ebx
		jne	.end
		inc	cl
		jmp	.cycle
		.get_reg:
			mov	al, byte [rdi + rcx]
			mov	bl, byte [rsi + rcx]
			jmp	.end
		.end:
			sub	eax, ebx
			pop	rbx
			ret
