#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints lowercase alphabets
 */
void print_alphabet(void)
{
int a = 97;
while (a < 123)
putchar(a++);
putchar(10);
}

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}
