#include <stdio.h>
/**
 *main - main function
 *Return: exit code
 */
int main(void)
{
char a[8] = "_putchar";
int b = 0;
while (b < 8)
putchar(a[b++]);
putchar(10);
return (0);
}
