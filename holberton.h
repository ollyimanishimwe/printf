#ifndef PRINTFHEAD_H_
#define PRINTFHEAD_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _strlen(char *s);
int caseC(unsigned char c);
int caseS(char *z);
int rot13(char *z);
int intbin(unsigned int a);
int caseD(int n);
int _putchar(char c);
int rev_string(char *s);
int switchget(va_list vl, const char *format, int x);


#endif
