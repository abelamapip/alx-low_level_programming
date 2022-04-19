#include "main.h"
/**
 *times_table - time table
 */
void times_table(void)
{
int a, b, c, d;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
c = a * b;
if (c < 10)
{
_putchar('0' + c);
if (b != 9)
{
_putchar(',');
_putchar(' ');
if (a * (b + 1) < 10)
_putchar(' ');
}
}
else
{
d = c / 10;
_putchar('0' + d);
d = c % 10;
_putchar('0' + d);
if (b != 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar(10);
}
}
