#include "main.h"
/**
 *_islower - checks for llowercase
 *Return: 1 for lowercase 0 for otherwise
 *@c: the character to print
 */
int _islower(int c)
{
if (c > 96 && c < 123)
return (1);
else
return (0);
}
