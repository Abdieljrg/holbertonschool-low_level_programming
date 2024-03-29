#include "variadic_functions.h"
/**
 *print_numbers - prints numbers
 *
 *@separator: pointer of string to print
 *
 *@n: value of ints
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int shannay;
va_list val;

	va_start(val, n);

	for (i = 0; i < n; i++)
	{
	shannay = va_arg(val, int);

	printf("%i", shannay);

	if (separator != NULL && i < (n - 1))
		{

		printf("%s", separator);
		}
	}
		va_end(val);
		printf("\n");
}

