#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps values
 *@a: first value
 *@b: second value
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
