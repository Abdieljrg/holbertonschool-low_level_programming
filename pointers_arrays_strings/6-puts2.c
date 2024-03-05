#include "main.h"
#include <stdio.h>
/**
 *puts2 - jumps char from 2 and 2
 *@str: pointer in use
 *Return: void
 */
void puts2(char *str)
{
int a = 0;
int b = 0;

	while (str[a] != '\0')
	{
	a++;
	}
		while (b < a)
		{
		_putchar(str[a]);
		a += 2;
		}
_putchar('\n');
}
