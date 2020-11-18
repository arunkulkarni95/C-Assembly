;------------------------------------------------------
;Arun Kulkarni 
;COSC310 Assembly Lab 1
;
;asm1.asm
;------------------------------------------------------
section .data
;------------------------------------------------------
;-----add all variables here 
; Define standard constants.
LF    equ 10	;line feed
NULL  equ 0		;end of string
TRUE  equ 1
FALSE equ 0
;******************************************************
section .text
;******************************************************
global addnumbers
global subtractnumbers
;-----------------------------
;add call
;-----------------------------

addnumbers:
push rbp		;save base register
mov  rbp, rsp

;parameters passed 
;first  rdi
;second rsi
;return value in rax

mov rax, rdi
add rax, rsi

addDone:
pop rbp			;restore base register 
ret

;-----------------------------
;subtract call 
;-----------------------------

subtractnumbers:
push rbp		;save base register
mov  rbp, rsp

;parameters passed
;first rdi
;second rsi
;return value in rax

mov rax, rdi
sub rax, rsi

subtractDone:
pop rbp			;restore base register
ret
