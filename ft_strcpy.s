global	_ft_strcpy
; rdi = dst		rsi = src
_ft_strcpy:
			xor	rcx, rcx ; будет указывать на копируемый элемент (счетчик)
			xor	rax, rax
			xor	rbx, rbx
			.cycle:
				cmp	[rsi + rcx], byte 0
				je	.end
				mov	bl, [rsi + rcx] ; bl - временное хранилище значения массива
				mov	[rdi + rcx], bl
				inc	rcx
				jne .cycle
				.end:
					mov	[rdi + rcx], byte 0
					mov	rax, rdi ; скопировали адрес dst в возвращаемое значение
					ret