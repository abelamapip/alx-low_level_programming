#include "main.h"
/**
 *_isalpha - checks for latter
 *Return: 1 for latter 0 for otherwise
 *@c: the character to print
 */
int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && c < 91))
return (1);
else
return (0);
}
