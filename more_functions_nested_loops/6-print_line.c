#include "main.h"
/**
 *print_line - prints a line
 *
 * @n: line
 *
 *Return void
 */
void print_line(int n)
{
	int num;

	if (n > 0)
	{
		for (num = 1; num <= n; num++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
