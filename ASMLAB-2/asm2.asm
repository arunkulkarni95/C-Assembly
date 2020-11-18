;------------------------------------------------------
;Arun Kulkarni 
;COSC310 Assembly Lab 2
;
;asm2.asm
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
global addByValue
global addByReference
;-----------------------------
;add six numbers by value
;-----------------------------

addByValue:
push rbp		;save base register
mov  rbp, rsp

;parameters passed 
;first  rdi
;second rsi
;third  rdx
;fourth rcx
;fifth  r8
;sixth  r9
;return value in rax

mov rax, rdi
add rax, rsi
add rax, rdx
add rax, rcx
add rax, r8
add rax, r9

addByValueDone:
pop rbp			;restore base register 
ret

;-----------------------------
;add four numbers by value,
;2 by reference
;-----------------------------

addByReference:
push rbp		;save base register
mov  rbp, rsp

;parameters passed
;first rdi
;second rsi
;third rdx
;fourth rcx
;fifth r8
;sixth r9
;return value in rax

mov rax, rdi
add rax, rsi
add rax, rdx
add rax, rcx
add rax, [r8]
add rax, [r9]

addByReferenceDone:
pop rbp			;restore base register
ret
