section         .text
        extern  printf
        global  main

main:
        mov             edi, hh
        mov             eax, 0
        call    printf

section         .data
        hh db 'Hello, Holberton', 0xa, 0
