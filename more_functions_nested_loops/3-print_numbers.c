#include "main.h"
#include <stdio.h>
/**
 *print_numbers - print a set of numbers
 *
 * Return: always void
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar (num);
	}
	_putchar ('\n');
}
