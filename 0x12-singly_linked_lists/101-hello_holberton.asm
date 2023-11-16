section .data
    hello db "Hello, Holberton", 0

section .text
    global main

    extern printf

main:
    sub rsp, 8          ; Align the stack

    ; Call printf with the format string
    mov rdi, hello      ; Format string address
    call printf

    add rsp, 8          ; Restore the stack

    ; Exit the program
    mov eax, 0          ; Return 0 status
    ret

