global ft_write

ft_write:
	mov	rax, 1	; syscall #1 = write
	syscall		; le noyau lit: rdi(ou?), rsi (quoi ecrire?), rdx(combien?), 
	ret
