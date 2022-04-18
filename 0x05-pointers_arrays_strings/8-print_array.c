#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *print_array - puts the second half of the string
 *@a: array input
 *@n: number of arrays to be printed
 */
void print_array(int *a, int n)
{
int b;
for (b = 0; b < n; b++)
{
printf("%d", a[b]);
if (b != n - 1)
printf(", ");
}
printf("\n");
}
