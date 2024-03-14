#include <stdio.h>
#include "main.h"
/**
 *whatsmyname - prints the name of the program
 *
 *Return: cero
 */
int whatsmyname(void)
{
	char filename[] = __FILE__;
	int i = 0;

	while (filename[i] != '\0')
	{
		_putchar(filename[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
