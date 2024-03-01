#include "main.h"
#include <stdio.h>
/**
 *more_numbers - print from 0 to 14
 *
 *Return: void
 */
void more_numbers(void)
{
	int i = 0;

	char j;

	do {
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10));
			}
			_putchar((j % 10) + '0');
		}
		i++;
		_putchar('\n');
	} while (i <= 9);
}
