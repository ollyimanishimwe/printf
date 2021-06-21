#include "holberton.h"
/**
 * rev_string - reverses string
 * string_length - finds length of the string
 * @s: s str
 * Return: the number of bytes
 */
int rev_string(char *s)
{
	int i = 0, n = 0;

	if (s == NULL)
	{
		write(STDOUT_FILENO, "(null)", 6);
		return (6);
	}


	i = _strlen(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
		n++;
	}

	return (n);
}
