#include "main.h"
/**
 *print_last_digit - prints last digit
 *
 * @z : interger in use
 *
 * Return: z
 *
 */
int print_last_digit(int z)
{
	z = z % 10;
	if (z < 0)
	{
		z = -z;
	}
	_putchar(z +  '0');

	return (z);
}
