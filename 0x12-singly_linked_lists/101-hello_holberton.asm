section .text
	global _start

_start:
	mov edx, len
	mov ecx, msg
	mov ebx, 1
	mov eax, 4	;system call (sys_write)
	int 0x80	;to call kernel

	mov eax, 1	;system call (sys-exit)
	int 0x080	;to call kernel

section .data
	msg db "Hello, Holberton",0xa	;equal to 10 or \n
	len equ $ -msg
