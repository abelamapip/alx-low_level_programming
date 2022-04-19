#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - prints the last digit
 *@a: int inpute
 *Return: returns the last digit
 */
int print_last_digit(int a)
{
int b;
b = a % 10;
if (b < 0)
b = b * -1;
_putchar('0' + b);
return (b);
}
