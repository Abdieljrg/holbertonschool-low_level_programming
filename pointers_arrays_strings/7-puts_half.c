#include "main.h"
#include <stdio.h>
/**
 *puts_half - put half of string
 *@str: pointer
 *Return: void
 */
void puts_half(char *str)
{
	int a;
	int b;

	while (str[a] != '\0')

	{
		a++;
	}
		if ((a % 2) == 0)
		{
			b = a / 2;
		}
		else
		{
			b = (a + 1) / 2;
		}
			while (b < a)
			{
				_putchar(str[b]);
				b++;
			}
			_putchar('\n');
}
