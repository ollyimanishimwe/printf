#include "holberton.h"
#include <unistd.h>
/**
 * caseS - function to write
 * @z: pointer string
 * Return: 1
 */
int caseS(char *z)
{
	int i = 0;

	if (z == NULL)
	{
		write(STDOUT_FILENO, "(null)", 6);
		return (6);
	}

	i = _strlen(z);
	write(STDOUT_FILENO, z, i);
	return (i);
}
