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
	sub	esp, 8
	mov	eax, 1
	mov	[ebp-4], eax
	mov	ebx, 10
	mov	[ebp-8], ebx
loop_while_label_1: 
	mov	eax, [ebp-8]
	imul	eax, [ebp-4]
	mov	[ebp-16], eax
	mov	eax, [ebp-16]
	cmp	eax, [ebp-4]
	je	loop_while_end_label_2
	mov	eax, [ebp-8]
	sub	eax, 1
	mov	[ebp-8], eax
	push	[ebp-8]
	push	offset format_printf_int
	mov	[ebp-20], eax
	call	crt_printf
	add	esp, 8
	push	10
	push	offset format_printf_char
	call	crt_printf
	add	esp, 8
	jmp	loop_while_label_1
loop_while_end_label_2: 
main_end: 
	push	0
	call	ExitProcess
	leave
	ret
end	_main
end
