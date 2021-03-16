#include "holberton.h"
#include <unistd.h>
/**
 * caseC - function to write for case c
 * @v: char
 * Return: 1 on success
 */
int caseC(unsigned char v)
{
	write(STDOUT_FILENO, &v, 1);
	return (1);
}
