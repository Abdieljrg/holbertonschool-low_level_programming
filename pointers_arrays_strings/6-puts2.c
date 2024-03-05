#include "main.h"
#include <stdio.h>
/**
 *puts2 - jumps char from 2 and 2
 *@str: pointer in use
 *Return: void
 */
void puts2(char *str)
{
int len = 0;
int i = 0;

	while (str[len] != '\0')
	{
	len++;
	}
		while (i < len)
		{
		_putchar(str[i]);
		i += 2;
		}
_putchar('\n');
}
