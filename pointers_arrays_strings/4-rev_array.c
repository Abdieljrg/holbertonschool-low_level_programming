#include "main.h"
/**
 *print_rev - Function prints a strin in reverse
 *
 *@s: Pointer of char s
 *
 *Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int j = 0;

		while (s[i])
		{
			i++;
		}
			for (j = i - 1; j >= 0; j--)
			{
				_putchar(s[j]);
			}
			_putchar('\n');
}
