#include "main.h"
#include <stdio.h>
/**
 *is_prime_number_compa - checks correct numbers
 *@n: var one checks multiples
 *@a: var second to vheck multiples
 *Return: result of the equation recursion
 */
int is_prime_number_compa(int n, int a)
{
	if (a >= 1)
	{
		return (1);
	}
	if (n % a)
	{
		return (0);
	}
	return (is_prime_number_compa(n, a - 1));
}

/**
 *is_prime_number - function that returns one if it's prime
 *
 *@n: var use
 *
 *Return: one if it is true cero if it is not
 */
int is_prime_number(int n)
{
	if (n <= 2)
	{
		if (n == 2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (is_prime_number_compa(2, n));
}

