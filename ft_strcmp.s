global	_ft_strcmp
; rdi = s1		rsi = s2
_ft_strcmp:
			xor	rax, rax
			xor	rcx, rcx
			.cycle:
				cmp	[rdi + rcx], byte 0
				je
				.compare:
					rax	
				.end
					ret
