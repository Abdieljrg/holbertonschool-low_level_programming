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
		putchar(str[index]);
		index++;
	}
	putchar('\n');
}
