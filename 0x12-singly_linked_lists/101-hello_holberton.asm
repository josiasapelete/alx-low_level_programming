global 	main
	extern 	printf

	section .rodata
	msg: db "Hello, Holberton", 10, 0

	section .text
main:
	mov	rdi, msg
	xor	eax, eax
	call	printf
	xor	eax, eax
	ret

