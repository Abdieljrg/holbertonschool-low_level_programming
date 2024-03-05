#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: pointer to the string to be printed
 * Return: void
 */
void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		index++;
	}
		for (index -= 1; index >= 0; index--)
		{
			_putchar(s[index]);
		}
	_putchar('\n');
}
