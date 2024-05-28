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

f_print_008BD670	proc
	push	ebp
	mov	ebp, esp
	sub	esp, 4
	sub	esp, 0
	push	[ebp+8]
	push	offset format_printf_int
	call	crt_printf
	add	esp, 8
	push	10
	push	offset format_printf_char
	call	crt_printf
	add	esp, 8
	mov	eax, [ebp+8]
	mov	[ebp-4], eax
	mov	[ebp+8], eax
	jmp	print_end
print_end: 
	mov	eax, [ebp-4]
	leave
	ret
f_print_008BD670	endp

_main: 
	push	ebp
	mov	ebp, esp
	sub	esp, 4
	push	ebp
	push	5
	call	f_print_008BD670
	add	esp, 8
	mov	[ebp-4], eax
main_end: 
	push	0
	call	ExitProcess
	leave
	ret
end	_main
end
