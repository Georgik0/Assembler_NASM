default rel

%macro printString 2
    mov     rax, 0x2000004 ; write
    mov     rdi, 1 ; stdout
    lea     rsi, [%1]
    mov     rdx, %2
    syscall
%endmacro

global start

section .text

start:
    printString str1,str1.len

    printString str2,str2.len

    mov     rax, 0x2000001 ; exit
    mov     rdi, 0
    syscall


section .data

str1:   db      "Hello,",10
.len:  equ       $ - str1

str2:   db      "world",10
.len:  equ       $ - str2