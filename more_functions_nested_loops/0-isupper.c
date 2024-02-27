#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks lower case
 *
 * @c: char to be examinated
 *
 * Return: 1 if it is lower case, 0 if else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
		}
	return (0);
	}
