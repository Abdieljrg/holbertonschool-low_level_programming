#include "main.h"
#include <stdio.h>
/**
 *actual_sqrt_recursion - actual recursion of sqrt
 *@n: var in use
 *@i: second var in use
 *Return: sqrt_recursion
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

/**
 *_sqrt_recursion - prints square root
 *@n: var in use for square
 *Return: actual square root + n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
