
global	_ft_strlen

_ft_strlen:
		xor	rax, rax
		.cycle:
			cmp	[rdi + rax], byte 0
			je	.end
			inc	rax
			jne	.cycle
		.end:
			ret