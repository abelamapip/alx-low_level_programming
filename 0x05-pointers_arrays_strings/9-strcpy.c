#include "main.h"
/**
 *_strcpy - copy string
 *@dest: destination
 *@src: source
 */
char *_strcpy(char *dest, char *src)
{
while (*src)
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (dest);
}
