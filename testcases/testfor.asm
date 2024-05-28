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
	sub	esp, 4
	sub	esp, 12
	mov	eax, 10
	mov	[ebp-4], eax
	mov	ebx, 10
	mov	[ebp-8], ebx
	mov	ecx, 0
	mov	[ebp-16], ecx
	mov	edi, 0
	mov	[ebp-12], edi
loop_for_start_label_1: 
	mov	eax, [ebp-12]
	cmp	eax, 99
	jg	loop_for_end_label_2
	mov	eax, [ebp-8]
	imul	eax, [ebp-4]
	mov	ebx, [ebp-16]
	add	ebx, eax
	mov	[ebp-16], ebx
	mov	ecx, [ebp-12]
	add	ecx, 1
	mov	[ebp-12], ecx
	mov	[ebp-20], eax
	mov	[ebp-24], ebx
	mov	[ebp-28], ecx
	jmp	loop_for_start_label_1
loop_for_end_label_2: 
	push	[ebp-16]
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
