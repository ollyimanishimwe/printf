#include "holberton.h"

/**
 * print_string - prints a string to stdout
 * @str: string to be printed
 * Return: nnumber of characters printed on success
 */

int print_string(char *str)
{
	int print = 0;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str && str[print])
	{
		_putchar(str[print]);
		print++;
	}
	return (print);
}
