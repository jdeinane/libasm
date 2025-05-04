global ft_strcmp

ft_strcmp:
.loop:
	mov al, byte [rdi]
	mov bl, byte [rsi]

	cmp al, 0
	je .check_end

	cmp bl, 0
	je .check_end

	cmp al, bl
	jne .check_end

	inc rdi
	inc rsi
	jmp .loop

.check_end:
	movzx eax, al	; eax = (unsigned char)al
	movzx ebx, bl	; ebx = (unsigned char)bl
	sub eax, ebx	; eax = eax - ebx
	ret