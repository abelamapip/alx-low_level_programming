#include <string.h>
#include "main.h"
/**
 *_strcpy - copy string
 *@dest: destination
 *@src: source
 *Return: returns string
 */
char *_strcpy(char *dest, char *src)
{
int i, n = strlen(src);
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
