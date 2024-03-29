#include "variadic_functions.h"
/**
 *printstring - prints string
 *@par: parameter
 *Return: Void
 */
void printstring(va_list par)
{
char *s;
s = va_arg(par, char*);

	if (s == NULL)
	{
		printf("(nil)");
	return;
	}
	printf("%s", s);
}
