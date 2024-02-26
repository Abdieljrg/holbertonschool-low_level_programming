#include "main.h"
/**
 * times_table - prints table of nine
 *
 *
 * Return always (0)
 */
void times_table(void)
{
	int num, x, j, i;

	int result;

	for (num = 0; num <= 9; num++)
	{
		for (x = 0; x <= 9; x++)
		{
			result = i * j;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
				}
			}

			if (result >= 10)
			{
				_putchar(result / 10 + '0');
			}
			_putchar(result % 10 + '0');
		}
		_putchar('\n');
	}
}
