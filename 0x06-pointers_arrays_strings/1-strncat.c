#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: the first string
 *@src: the second string
 *@n: int value
 *Return: the concatenaded string
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0, b;
while (dest[a] != '\0')
a++;
for (b = 0; b < n; b++)
{
if (src[b] == '\0')
{
dest[a] = src[b];
break;
}
dest[a++] = src[b];
}
return (dest);
}
