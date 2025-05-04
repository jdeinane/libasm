global ft_strcpy

ft_strcpy:
	push rdi

.loop:
	mov al, byte [rsi]
	mov byte [rdi], al
	cmp al, 0
	je .end
	inc rdi
	inc rsi
	jmp .loop

.end:
	pop rax
	ret