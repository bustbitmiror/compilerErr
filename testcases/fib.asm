.386
.model	flat, c
option	casemap: none

includelib	\masm32\lib\kernel32.lib
includelib	\masm32\lib\msvcrt.lib
include	\masm32\include\msvcrt.inc
include	\masm32\include\kernel32.inc

.data
format_printf_char	db "%c", 0
format_printf_int	db "%d", 0
format_printf_string	db "%s", 0
format_scanf_char	db " %c", 0
format_scanf_int	db " %d", 0

.code

f_fib_00A6AD68	proc
	push	ebp
	mov	ebp, esp
	sub	esp, 4
	sub	esp, 4
	sub	esp, 4
	sub	esp, 20
	mov	eax, [ebp+8]
	cmp	eax, 4
	jge	condition_else_label_1
	mov	eax, [ebp+8]
	cmp	eax, 1
	jne	condition_else_label_3
	mov	eax, 0
	mov	[ebp-4], eax
	jmp	fib_end
	jmp	condition_end_label_4
condition_else_label_3: 
condition_end_label_4: 
	mov	eax, 1
	mov	[ebp-4], eax
	jmp	fib_end
	jmp	condition_end_label_2
condition_else_label_1: 
condition_end_label_2: 
	mov	eax, [ebp+8]
	sub	eax, 1
	push	[ebp+12]
	push	eax
	mov	[ebp-16], eax
	call	f_fib_00A6AD68
	add	esp, 8
	mov	[ebp-20], eax
	mov	ebx, [ebp-20]
	mov	[ebp-8], ebx
	mov	eax, [ebp+8]
	sub	eax, 2
	push	[ebp+12]
	push	eax
	mov	[ebp-24], eax
	mov	[ebp-20], ebx
	call	f_fib_00A6AD68
	add	esp, 8
	mov	[ebp-28], eax
	mov	ebx, [ebp-28]
	mov	[ebp-12], ebx
	mov	eax, [ebp-8]
	add	eax, [ebp-12]
	mov	[ebp-4], eax
	mov	[ebp-32], eax
	mov	[ebp-28], ebx
	jmp	fib_end
fib_end: 
	mov	eax, [ebp-4]
	leave
	ret
f_fib_00A6AD68	endp

_main: 
	push	ebp
	mov	ebp, esp
	sub	esp, 4
	sub	esp, 4
	push	ebp
	push	40
	call	f_fib_00A6AD68
	add	esp, 8
	mov	[ebp-8], eax
	mov	ebx, [ebp-8]
	mov	[ebp-4], ebx
	push	[ebp-4]
	push	offset format_printf_int
	mov	[ebp-8], ebx
	call	crt_printf
	add	esp, 8
	push	10
	push	offset format_printf_char
	call	crt_printf
	add	esp, 8
main_end: 
	push	0
	call	ExitProcess
	leave
	ret
end	_main
end
