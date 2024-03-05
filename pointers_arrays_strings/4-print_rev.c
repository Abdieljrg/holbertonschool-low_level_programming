#include "main.h"
#include <stdio.h>
/**
 *print_rev - prints in reverse
 *@s: pointer
 *Return: void
 */
void print_rev(char *s)
{
	int x = 0;
	int u;

	while (*s != '\0')

	{
		s++;
		x++;
	}
	s--;
	for (u = x; u > 0; u--)
	{
		_putchar(*s);
		s--;
	}
		_putchar('\n');
}
