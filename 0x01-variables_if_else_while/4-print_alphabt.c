#include <stdio.h>
/**
 *main - entry function
 *Return: 0
 */
int main(void)
{
int a;
for (a = 97; a < 123 ; a++)
{
if (a != 101 && a != 113)
putchar(a);
}
putchar(10);
return (0);
}
