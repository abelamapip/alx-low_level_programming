#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabets
 */
void print_alphabet_x10(void)
{
int a, b;
for (b = 0; b < 10; b++)
{
a = 97;
while (a < 123)
putchar(a++);
putchar(10);
}
}
