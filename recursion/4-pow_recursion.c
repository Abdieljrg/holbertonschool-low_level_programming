#include "main.h"
#include <stdio.h>
/**
 *_pow_recursion - raised power
 *@x: first var
 *@y: second var power for
 *Return: power recursion and one
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
