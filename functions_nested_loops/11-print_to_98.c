#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints al natural numbers to 98
 *
 * @n: the var
 *
 * Return: always void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
		else if (n > 98)
	{
		while (n >= 98)
		{
			if (n > 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n--;
		else if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
	}
	}
}
