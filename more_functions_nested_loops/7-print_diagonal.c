#include "main.h"
#include <stdio.h>
/**
 *print_diagonal - gonna print diagonal chart
 * @n: var fot print
 *Return: always 0
 */
void print_diagonal(int n)
{
	int a;
	int b;
		if (n > 0)
		{
			for (a = 1; a <= n; a++)
			{
				for (b = 0; b < a; b++)
				{
					if (b != 0)
					{
						_putchar(' ');
					}
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
		else
		{
			_putchar('\n');
		}
}
