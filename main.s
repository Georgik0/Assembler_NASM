global	_start

section	.data
msg		db "Hello world"
msg_len	equ $-msg

section .text
_start:
		mov		rdi, dword msg_len
		mov		rdi, dword msg
		mov		rdi, dword 1
		mov		eax, 4
		mov		rdi, eax
		int		80h
		add		esp, 16

		mov		rdi, dword 0
		mov		eax, 1
		mov		rdi, eax
		int		80h