#include "variadic_functions.h"
/**
 *print_strings - print strings
 *@separator: string to print
 *@n: number of strings
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list val;
unsigned int i;
char *shannay;

	va_start(val, n);

	for (i = 0; i < n; i++)
	{
		shannay = va_arg(val, char*);
		if (shannay != NULL)
		{
			printf("%s", shannay);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(val);

	printf("\n");
}
