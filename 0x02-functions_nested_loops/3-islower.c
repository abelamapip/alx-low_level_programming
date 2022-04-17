#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 *_putchar - print char
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
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
