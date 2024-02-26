#include "main.h"
/**
 *  print_sign - checks char
 *
 *  @n:char to be check
 *
 *  Return 1 for more than 0, 0 if it is 0 and -1 if its a negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
	_put char(45);
	return (-1);
}
else
{
	_putchar(48);
	return (0);
}
}
