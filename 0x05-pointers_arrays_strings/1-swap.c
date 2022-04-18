#include "main.h"
/**
 *swap_int - swaps int
 *@a: number1
 *@b: number2
 */
void swap_int(int *a, int *b)
{
int tem = *b;
*b = *a;
*a = tem;
}
