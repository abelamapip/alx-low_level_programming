#include <stdio.h>
/**
 *main - entry function
 *Return: 0
 */
int main(void)
{
int a, b, c;
for (a = 48; a < 56 ; a++)
for (b = a + 1; b < 57 ; b++)
for (c = a + 2; c < 58 ; c++)
{
putchar(a);
putchar(b);
putchar(c);
if (a != 55 || b != 56 || c != 57)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
