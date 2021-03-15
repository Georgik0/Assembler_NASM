global	_ft_strcpy_test
; rdi = dst		rsi = src
_ft_strcpy_test:
			xor	rcx, rcx ; будет указывать на копируемый элемент (счетчик)
			xor	rax, rax
			xor	rbx, rbx
			mov rcx, 1
 			mov	rbx, [rsi + rcx] ; rbx - временное хранилище значения массива
			mov	[rdi + rcx], rbx
			mov	rax, rdi ; скопировали адрес dst в возвращаемое значение

			ret