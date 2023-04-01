section .text
global main

main:
	MOV rax, 0x1
	MOV rdi, 0x1
	MOV rsi, msg
	MOV rdx, msglength
	SYSCALL

	MOV rax, 0x3C
	MOV rdi, 0x0
	SYSCALL

section .data
	msg: db "Hello, Holberton", 0xA
	msglength: equ $ - msg
