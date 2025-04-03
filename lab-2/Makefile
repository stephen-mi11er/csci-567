# Makefile for compiling shellcode programs

CC = gcc

all: call-shellcode exploit

call-shellcode: call-shellcode.c
	$(CC) -z execstack -o call-shellcode call-shellcode.c

stack: stack.c
	$(CC) -o stack -z execstack -fno-stack-protector stack.c

exploit: exploit.c
	$(CC) -o exploit exploit.c

clean:
	rm -f call-shellcode badfile stack exploit