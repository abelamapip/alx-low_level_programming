#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *print_rev - reverse the string
 *@s: string value
 */
void print_rev(char *s)
{
int a = strlen(s) - 1;
for (; a >= 0; a--)
printf("%c", s[a]);
printf("\n");
}
