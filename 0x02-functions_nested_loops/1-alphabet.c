#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * Return: Always 0.
 */
void print_alphabet(void);
int main(void)
{
print_alphabet();
return (0);
}
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
