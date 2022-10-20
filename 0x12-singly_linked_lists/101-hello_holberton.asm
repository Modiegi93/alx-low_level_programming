section .data
msg: DB 'Hello Holberton', 14
msgSize EQU $ - msg

global start

section .text

start:
mov rax, 4		; function 4
mov rbx, 1		; stdout
mov rcx, msg		; msg
mov rdx, msgSize	; size
mov rax, 1		; function 1
mov rbx, 0		; code
ret

