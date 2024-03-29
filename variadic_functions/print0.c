#include "variadic_functions.h"
/**
 *printc - prints chars
 *@par: par var
 *Return: Void
 */
void printchar(va_list par)
{
	printf("%c", va_arg(par, int));
}
