#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *puts2 - puts one character and jump one
 *@str: string input
 */
void puts2(char *str)
{
int a = strlen(str), b = 0;
for (; b < a; b++)
if(b % 2 == 0)
printf("%c", str[b]);
printf("\n");
}
