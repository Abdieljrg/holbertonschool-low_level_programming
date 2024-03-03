#include "main.h"
#include <stdio.h>
/**
 *print_square - prints a square in #
 *@size: variable for print
 *Return: Always 0
 */
void print_square(int size)
{
int a;
int b;
	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
