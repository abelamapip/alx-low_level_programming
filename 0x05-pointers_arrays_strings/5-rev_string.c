#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *rev_string - reverse the string
 *@s: string value
 */
void rev_string(char *s)
{
int a = strlen(s) - 1, b = 0, c = strlen(s) / 2;
char tmp;
/* printf("%s", tmp);*/
for (; a >= c; a--)
{
tmp = s[a];
s[a] = s[b];
s[b++] = tmp;
}
}
