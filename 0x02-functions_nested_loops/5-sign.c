#include "main.h"
/**
 *print_sign - checks for sign
 *Return: 1 for positive 0 for zero -1 for negative
 *@n: the character to check
 */
int print_sign(int n)
{
if (n > 0)
{
putchar(43);
return (1);
}
else if (n == 0)
{
putchar(48);
return (0);
}
else
{
putchar(45);
return (-1);
}
}
