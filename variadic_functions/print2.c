#include "variadic_functions.h"
/**
 *printint - prints int
 *@par: parameter
 *Return: Void
 */
  void printint(va_list par)
{
	printf("%d", va_arg(par, int));
}
