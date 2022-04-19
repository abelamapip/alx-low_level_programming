#include "main.h"
/**
 *print_last_digit - prints the last digit
 *@a: int inpute
 *Return: returns the last digit
 */
int print_last_digit(int a)
{
int b;
if (a < 0)
a = a * -1;
b = a % 10;
_putchar('0' + b);
return (b);
}
