#include "holberton.h"
#include "unistd.h"
/**
 * print_string - prints a string to stdout
 * @str: string to be printed
 * Return: no. of characters printed on success, or 0 on failure
 */
int print_string(char *str)
{
	int chars_printed = 0;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	while (str && str[chars_printed])
	{
		_putchar(str[chars_printed]);
		chars_printed++;
	}
	return (chars_printed);
}
