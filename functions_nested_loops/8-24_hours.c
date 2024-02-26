#include "main.h"
/**
 * jack_bauer - print every minute of 24
 *
 *Return always void
 *
 */
void jack_bauer(void)
{
	int a;
	int z;
		for (a = 0; a <= 23; a++)
		{
			for (z = 0; z <= 59; z++)
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
				_putchar((':');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
				_putchar('\n');
}
}
}
