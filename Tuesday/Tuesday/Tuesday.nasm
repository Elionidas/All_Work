bits 32

global _copy_string, _get_cpu_string@4, _set_flags

section .text

_copy_string:
;;;;;;;;;;;;;;;;;;;;;;;;;;
;
;	This method takes 2 params:
;
;	Param 1: An empty buffer
;
;	Param 2: A NULL-terminated string
;
;	Given these two inputs, 
;	1.) Find the length of the string provided in
;	param 2
;	2.) Copy the string from param 2, to the empty buffer
;	provided in param 1.
;
;	void __cdecl copy_string(char* dest, char* src);
;
; BEGIN STUDENT CODE
;;;;;;;;;;;;;;;;;;;;;;;;;;

;set up a zero flag
 xor eax, eax

;add in our buffers
    mov edi, [esp + 4]				
    mov ecx, [esp + 8]		
	
;create a loop to copy each character and move it into the buffer
   checkloop:						
        xor edx, edx				
        mov dl, byte [ecx+eax]		
        inc eax						
        cmp dl, 0					
        jne checkloop				
        mov ecx, eax				
        add ecx, 1				
 
;loop through the buffer, copying the string to the register
    stringCopy:						
        mov esi, [esp + 8]			
        rep movsb					
        mov eax, edi			
        
    ret

;;;;;;;;;;;;;;;;;;;;;;;;;;
; END STUDENT CODE
;;;;;;;;;;;;;;;;;;;;;;;;;;


_get_cpu_string@4:
;;;;;;;;;;;;;;;;;;;;;;;;;;
;
;	This function takes 1 param:
;
;	Param 1: A zero'd character buffer, containing
;	13 elements.
;
;	The following steps must be performed:
;	1.) Call CPUID and get the vendor string
;	2.) Copy from ASCII bytes returned into the buffer
;	provided.
;	
;	void __stdcall get_cpu_string(char* buf);
;
;
; BEGIN STUDENT CODE
;;;;;;;;;;;;;;;;;;;;;;;;;;

;as always, lets set up a zero flag
 xor eax, eax
	;create our buffer
    mov edi, [esp + 4]
	;call our cpuid
    CPUID 
	;move address of ebx to eax       
    mov eax, ebx
	;copy eax into edi
    stosd             
	;move address of edx to eax
    mov eax, edx    
	;copy eax into edi
    stosd        
	;move address of ecx to eax
    mov eax, ecx      
	;final copy of eax into edi
    stosd
	ret

;;;;;;;;;;;;;;;;;;;;;;;;;;
; END STUDENT CODE
;;;;;;;;;;;;;;;;;;;;;;;;;;