#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks lower case
 *
 * @c: int to be examinated
 *
 * Return: 1 if it is a digit , 0 if else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
		}
	return (0);
	}
