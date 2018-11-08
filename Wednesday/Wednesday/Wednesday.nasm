bits 32

global _sum_array@8, _find_largest

section .text

_sum_array@8:
;;;;;;;;;;;;;;;;;;;;;;;;;;
;
;	This method takes two parameters:
;
;	Param 1: A pointer to a buffer of integers (4 bytes/each).
;
;	Param 2: A number indicating the number of elements in the buffer.
;
;	You must:
;	1.) Walk through the buffer, and sum together all of the elements
;	2.) Return the result
;
;	int __stdcall sum_array(int* buffer, int size);
;
; BEGIN STUDENT CODE
;;;;;;;;;;;;;;;;;;;;;;;;;;

;step one, we set our zero flag
xor eax, eax

;now we shall create our buffer
mov edi, [esp + 4]	;here is the array on numbers themselves
mov edx, [esp + 8]	;here is the counter
xor ecx, ecx

;now we have to create a loop to iterate though the actual buffer of integers
.sumitup:
	cmp edx, ecx ;compare the array to the integer, check to see if it hit the end
	jz .end ;end the loop if true
	inc ecx  ;increment the counter
	add eax, [edi + edx*4] ;add the value of that buffer into eax
	jmp .sumitup

.end:
	;literally do nothing because we done here

ret 8 ;_sum_array is 8, thus our return is 8

;;;;;;;;;;;;;;;;;;;;;;;;;;
; END STUDENT CODE
;;;;;;;;;;;;;;;;;;;;;;;;;;

_find_largest:
;;;;;;;;;;;;;;;;;;;;;;;;;;
;
;	This function takes two
;	parameters:
;
;	Param 1: A pointer to a buffer of integers (4 bytes/each)
;
;	Param 2: A number indicating the number of elements in the
;	buffer.
;
;	Your task is to:
;	1.) Walk through the buffer, locating the largest element
;	2.) Return it as the result.	
;
;	int __cdecl find_largest(unsigned long* buffer, int size)
;
; BEGIN STUDENT CODE
;;;;;;;;;;;;;;;;;;;;;;;;;;

;step one, we set our zero flag
xor eax, eax
xor ecx, ecx

;now we shall create our buffer
mov edi, [esp + 4]	;here is the array on numbers themselves
mov ecx, [edx + 8]	;here is the counter

;now we have to create a loop to iterate though the actual buffer of integers
.sumitup:
	cmp ecx, edi ;compare the array to the integer, check to see if it hit the end
	jne .end ;end the loop if true
	je .true
	inc ecx  ;increment the counter
	jmp .sumitup

.true:
	mov eax, [edi + edx*4] ;copy the value over

.end:
	;literally do nothing because we done here

ret 8;

;;;;;;;;;;;;;;;;;;;;;;;;;;
; END STUDENT CODE
;;;;;;;;;;;;;;;;;;;;;;;;;;