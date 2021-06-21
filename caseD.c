#include "holberton.h"
/**
 * caseD - as name states
 * @n: variable
 * Return: Always 0.
 */
int caseD(int n)
{
	int b, i = 0;

	if (n > 0)
	{
		n *= -1;
		for (b = 1000000000; b > 0; b /= 10)
		{
			if (n / b != 0)
			{
				_putchar(((-n / b) % 10) + '0');
				i++;
			}
		}
		return (i);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		i++;
		for (b = 1000000000; b > 0; b /= 10)
		{
			if (n / b != 0)
			{
				if (n < -2147483647)
					_putchar((((-n / b) % 10) * -1) + '0');
				else
					_putchar(((-n / b) % 10) + '0');
				i++;
			}
		}
	}
	return (i);
}
