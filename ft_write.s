extern	___error
global	_ft_write
; int fildes, const void *buf, size_t nbyte
; rdi = fildes, rsi = *buf, rdx = nbyte
_ft_write:
	xor	rax, rax ; возвращает значение
	mov	rax, 0x2000004 ; номер системного вызова (sys_write)
	syscall
	jc	.errno
	ret
	.errno:
		xor	rbx, rbx ; временное хранение
		push	rbx
		mov	rbx, rax
		call	___error
		mov	[rax], rbx
		mov	rax, -1
		pop	rbx
		ret
