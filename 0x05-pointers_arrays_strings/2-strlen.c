#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s: input string
 *Return: the length of the string
 */
int _strlen(char *s)
{
int a = 0;
while (1)
{
if (*(s + a) != 0)
a++;    
else
   break;
}
return (a);
}
