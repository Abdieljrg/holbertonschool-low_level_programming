#include "variadic_functions.h"
/**
 *printfloat - print float
 *@par: paramter
 *Return: Void
 */
void printfloat(va_list par)
{
	printf("%f", va_arg(par, double));
}
