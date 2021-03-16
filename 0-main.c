#include "holberton.h"
/**
* switchget - finds the operator links it two the function
* @vl: is the variadic list from main
* @format: a string that contains operators
* @x: the index
* Return: -1 or the number of bytes
*/
int switchget(va_list vl, const char *format, int x)
{
	char *s, per;
	int strbit = 0;

	switch (format[x + 1])
	{
	case 'c':
		strbit += caseC(va_arg(vl, int));
		break;
	case 's':
		s = va_arg(vl, char*);
		strbit += caseS(s);
		break;
	case '%':
		per = '%';
		write(STDOUT_FILENO, &per, 1);
		strbit += 1;
		break;
	case 'd':
		strbit += caseD(va_arg(vl, int));
		break;
	case 'i':
		strbit += caseD(va_arg(vl, int));
		break;
	case 'r':
		strbit += rev_string(va_arg(vl, char*));
		break;
	case 'R':
		strbit += rot13(va_arg(vl, char*));
		break;
	case '\0':
		return (-1);
	case 'b':
		strbit += intbin(va_arg(vl, int));
		break;
	default:
		_putchar(format[x + 1]);
		strbit += 2;
	}
	return (strbit);
}

/**
 * _printf - prints any data type to stdout
 * @format: the string with the operators for the types to be printed
 * Return: the number of bytes being printed
 */
int _printf(const char *format, ...)
{
	va_list vl;
	int x = 0, min = 0, total = 0, strbit = 0;

	if (format == NULL)
		return (-1);
	va_start(vl, format);
	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			min++;
			strbit += switchget(vl, format, x);
			if (strbit == -1)
				return (-1);
			min++;
			x++;
		}
		else
			write(STDOUT_FILENO, &format[x], 1);
		x++;
	}
	total = ((x - min) + strbit);
	va_end(vl);
	return (total);
}
