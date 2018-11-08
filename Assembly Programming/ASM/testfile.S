bits 32

section .text

global _movememory

; This task is similar to memcopy but with one important exception: it must 
; be able to handle overlapped memory copies (just like memmove). That is to say, it has to be able
; to perform a copy where the source and destination overlap. This means that the copy either needs
; to happen in reverse, or a buffer must be used.
;
; void __cdecl movememory(void* dest, void* src, size_t length)
_movememory:
	push ebp
	mov ebp, esp

	push edi
	push esi
	push ebx

	mov edi, [ebp+0x8]	;dest
	mov esi, [ebp+0xc]	;src
	mov ecx, [ebp+0x10]	;length

	;// code begin //
	;int3
	;welp, now that i have to make the new one, 
	;we are going to use a buffer to interpret the location of the source and destination, and fix the issue of memmove

	cld

	cmp	esi, edi
	jg	.GO

	.F_END	add	esi, ecx
	add	edi, ecx
	dec	esi
	dec	edi
	std

	.GO	rep	movsb
	cld ;i messed up on this part for 2 straight hours. Im an idiot.

	;//  code end  //

	pop edi
	pop esi
	pop ebx

	mov esp, ebp
	pop ebp

	ret