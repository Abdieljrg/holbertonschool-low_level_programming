#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *sum_them_all - sums parameters
 *@n: number of extra parameters
 *
 *Return: sum of parameters (shannay)
 *
 */
int sum_them_all(const unsigned int n, ...)
{
int shannay = 0;
unsigned int i;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{

		return (0);

	}

	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		shannay += value;
	}
	va_end(args);

	return (shannay);
}
