#include "main.h"
#include <stdio.h>
/**
 *more_numbers - print from 0 to 14
 *
 *Return: void
 */
void more_numbers(void)
{
int num;
int x;

	for (x = '0'; x <= '9'; x++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (x >= 10)
			{
				_putchar(0 + (x / 10));
			}
			_putchar(0 + (x % 10));
	}
	_putchar ('\n');
	}
}
