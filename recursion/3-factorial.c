#include "main.h"
#include <stdio.h>
/**
 *factorial - retun factorial
 *@n: var in use
 *Return: 1 and factorial if true
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
