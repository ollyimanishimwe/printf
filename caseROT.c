#include "holberton.h"
/**
 * rot13 - rotate 13 char
 * @z: string
 *
 *
 * Return: z
 */
int rot13(char *z)
{
	int x = 0;
	int y = 0;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (z == NULL)
	{
		write(STDOUT_FILENO, "(null)", 6);
		return (6);
	}

	while (z[x] != '\0')
	{
		for (y = 0; a[y] != '\0'; y++)
		{
			if (z[x] == a[y])
			{
				_putchar(b[y]);
				break;
			}
		}
		if (a[y] == '\0')
			_putchar(z[x]);
		x++;
	}
	return (_strlen(z));
}
