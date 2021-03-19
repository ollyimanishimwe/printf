#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>


int _printf(const char *format, ...);
int _putchar(char c);
int print_num(long int n);
int print_string(char *str);
int print_rev(char *s);
int _strlen(char *s);
int print_binary(unsigned int num);
int rot13(char *str);
#endif
