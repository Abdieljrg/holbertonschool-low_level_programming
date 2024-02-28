#include "main.h"
#include <stdio.h>
/**
 *print_most_numbers - prints nmber except 2 and 4
 *
 */
void print_most_numbers(void)
{
	int x = 2;
	int y = 4;
	int num;

	for (num = '0'; num <= '9'; num++)
		if (num != x && num != y)
		{
		_putchar(num);
		}
			_putchar('\n');
}
