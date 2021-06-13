global	_ft_strcpy
; rdi = dst		rsi = src
_ft_strcpy:
	xor	rcx, rcx
	xor	rax, rax
	xor	rbx, rbx
	push	rbx
	.cycle:
		cmp	[rsi + rcx], byte 0
		je	.end
		mov	bl, [rsi + rcx]
		mov	[rdi + rcx], bl
		inc	rcx
		jne	.cycle
	.end:
		mov	[rdi + rcx], byte 0
		mov	rax, rdi
		pop	rbx
		ret