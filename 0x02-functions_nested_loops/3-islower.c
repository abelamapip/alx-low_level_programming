#include <stdio.h>
#include "main.h"
/**
 *_putchar - print char
 */
void _putchar(int d)
{
putchar(d);
}

/**
 *_islower - checks for llowercase
 *Return: 1 for lowercase 0 for otherwise
 */
int _islower(int c)
{
if (c > 96 && c < 123)
return (1);
else
return (0);
}
