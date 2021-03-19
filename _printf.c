#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
* _printf - print character to the stdout
* @format: format specifier
* Return: number of bytes
*/

int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0, print = 0;

	va_start(args, format);

	while (format && format[counter])
	{
		if (format[counter] != '%')
		{
			print += _putchar(format[counter]);
		}
		else
		{
		counter++;
			if (format[counter] == 'c')
				print += _putchar(va_arg(args, int));
			else if (format[counter] == 's')
				print += print_string(va_arg(args, char *));
			else if (format[counter] == 'd' || format[counter] == 'i')
				print += print_num(va_arg(args, int));
			else
			{
				_putchar('%');
				_putchar(format[counter]);
				print += 2;
			}
		}
		counter++;
	}
	va_end(args);
	return (print);
}
