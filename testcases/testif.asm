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

_main: 
	push	ebp
	mov	ebp, esp
	sub	esp, 4
	sub	esp, 4
	sub	esp, 4
	mov	eax, 0
	mov	[ebp-4], eax
	mov	ebx, 0
	mov	[ebp-8], ebx
	mov	eax, [ebp-4]
	cmp	eax, [ebp-8]
	jne	condition_else_label_1
	mov	eax, [ebp-8]
	add	eax, 2
	mov	[ebp-4], eax
	mov	[ebp-12], eax
	jmp	condition_end_label_2
condition_else_label_1: 
	mov	ebx, 2
	mov	[ebp-4], ebx
condition_end_label_2: 
	push	[ebp-4]
	push	offset format_printf_int
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
