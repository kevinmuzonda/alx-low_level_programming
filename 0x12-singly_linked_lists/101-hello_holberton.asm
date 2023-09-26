section .data
    hello db 'Hello, Holberton',0 ;
    null-terminated string;

section .text
    global _start

_start:
    ; write syscall
    mov rax, 1 ; syscall number for write
    mov rdi, 1 ; file descriptor 1 is stdout
    mov rsi, hello ; pointer to the message
    mov rdx, 16 ; length of the message string
    syscall ; call the kernel

    ; exit syscall
    mov eax, 60 ; syscall number for exit
    xor edi, edi ; exit code 0
    syscall ; call the kernel
