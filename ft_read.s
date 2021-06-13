extern	___error
global	_ft_read
; int fildes, void *buf, size_t nbyte
; rdi = fildes, rsi = *buf, rdx = nbyte
_ft_read:
	xor	rax, rax
	mov	rax, 0x2000003 ; номер системного вызова (sys_read)
	syscall
	jc	.errno
	ret
	.errno:
		xor	rbx, rbx
		push	rbx
		mov	rbx, rax
		call	___error
		mov	[rax], rbx
		mov	rax, -1
		pop	rbx
		ret