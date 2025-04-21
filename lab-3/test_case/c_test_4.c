#include <stdio.h>
#define hello(x) goodbye(x)
#define WOKKA "stuff"

main() {
 printf("hello\n");
}

int bad(char *a, char *b) {
 strcpy(b, a);
}


int demo(char *a, char *b) {
 strcpy(a, "\n"); 
 strcpy(a, gettext("Hello there")); 
 strcpy(b, a);
 sprintf(s, "\n");
 sprintf(s, "hello");
 sprintf(s, "hello %s", bug);
 sprintf(s, gettext("hello %s"), bug);
 sprintf(s, unknown, bug);
 printf(bf, x);
 scanf("%d", &x);
 scanf("%s", s);
 scanf("%10s", s);
 scanf("%s", s);
 gets(f); 
 printf("\\");
 gets(f);
 gets(f);
 syslog(LOG_ERR,"cannot open config file (%s): %s",filename,strerror(errno))
 syslog(LOG_CRIT,"malloc() failed");
 syslog(LOG_ERR, attacker_string);
}



demo2() {
  char d[20];
  char s[20];
  int n;

  _mbscpy(d,s); 
  memcpy(d,s);
  CopyMemory(d,s);
  lstrcat(d,s);
  strncpy(d,s);
  _tcsncpy(d,s);
  strncat(d,s,10);
  strncat(d,s,sizeof(d)); 
  _tcsncat(d,s,sizeof(d)); 
  n = strlen(d);
  MultiByteToWideChar(CP_ACP,0,szName,-1,wszUserName,sizeof(wszUserName));
  MultiByteToWideChar(CP_ACP,0,szName,-1,wszUserName,sizeof wszUserName);
  MultiByteToWideChar(CP_ACP,0,szName,-1,wszUserName,sizeof(wszUserName)/sizeof(wszUserName[0]));
  MultiByteToWideChar(CP_ACP,0,szName,-1,wszUserName,sizeof wszUserName /sizeof(wszUserName[0]));
  SetSecurityDescriptorDacl(&sd,TRUE,NULL,FALSE);
  CreateProcess(NULL, "C:\\Program Files\\GoodGuy\\GoodGuy.exe -x", "");
  printf("%c\n", 'x');
  printf("%c\n", '"');
  printf("%c\n", '\"');
  printf("%c\n", '\'');
  printf("%c\n", '\177');
  printf("%c\n", '\xfe');
  printf("%c\n", '\xd');
  printf("%c\n", '\n');
  printf("%c\n", '\\');
  printf("%c\n", "'");
}


int getopt_example(int argc,char *argv[]) {
    while ((optc = getopt_long (argc, argv, "a",longopts, NULL )) != EOF) {
    }
}

int testfile() {
  FILE *f;
  f = fopen("/etc/passwd", "r"); 
  fclose(f);
}

/* Regression test*/

#define assert(x) {\
 if (!(x)) {\
 fprintf(stderr,"Assertion failed.\n"\
 "File: %s\nLine: %d\n"\
 "Assertion: %s\n\n"\
 ,__FILE__,__LINE__,#x);\
 exit(1);\
 };\
 }

int accesstest() {
  int access = 0; 
}