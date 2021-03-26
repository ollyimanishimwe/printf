#include "holberton.h"
#include <stdarg.h>
/**
 * printBinary - Print number binary
 * Return: contador
 */
int print_binary(unsigned int num)
{
    int the_chars = 0, idx = 0;
    char bin[sizeof(unsigned int) * 8];

    if (num == 0)
    {
        the_chars += _putchar('0');
        return(the_chars);
    }

    if (num == 1){
        the_chars += _putchar('1');
        return (the_chars);
    }

    while (num > 0)
    {
        bin[idx] = '0' + (num % 2);
        num = num / 2;
        idx++;
    }

    idx--;

    while (idx >= 0)
    {
        the_chars += _putchar(bin[idx]);
        idx--;
    }
    
    return (the_chars);
    
}
