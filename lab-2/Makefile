# Makefile for compiling shellcode programs

CC = gcc
CFLAGS = -z execstack -fno-stack-protector

all: call-shellcode shellcode

call-shellcode: call-shellcode.c
	$(CC) $(CFLAGS) -o call-shellcode call-shellcode.c

shellcode: shellcode.c
	$(CC) $(CFLAGS) -o shellcode shellcode.c

stack: stack.c
	$(CC) $(CFLAGS) -o stack stack.c

clean:
	rm -f call-shellcode shellcode