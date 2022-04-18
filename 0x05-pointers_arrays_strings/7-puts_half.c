#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *puts_half - puts the second half of the string
 *@str: string input
 */
void puts_half(char *str)
{
int a = strlen(str), b;
if (a % 2 == 0)
b = a / 2;
else
b = (a + 1) / 2;
for (; b < a; b++)
printf("%c", str[b]);
printf("\n");
}
