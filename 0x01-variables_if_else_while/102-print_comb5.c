#include <stdio.h>
/**
 *main - entry function
 *Return: 0
 */
int main(void)
{
int a, b, c, d, e;
for (a = 48; a < 58 ; a++)
for (b = 48; b < 57 ; b++)
for (c = a; c < 58 ; c++)
{
if (a > 51 && b > 48)
e = b + 1;
else
e = b;
for (d = e; d < 58 ; d++)
{
putchar(a);
putchar(b);
putchar(32);
putchar(c);
putchar(d);
if (a != 57 || b != 56 || c != 57 || d != 57)
{
putchar(44);
putchar(32);
}
}
}
putchar(10);
return (0);
}
