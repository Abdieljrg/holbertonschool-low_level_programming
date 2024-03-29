#include "variadic_functions.h"
#include "print0.c"
#include "print1.c"
#include "print2.c"
#include "print3.c"
/**
 *print_all - prints all the comands included to it
 *
 *@format: inputs
 *
 *Return: Void
 */
void print_all(const char * const format, ...)
{
int x, y;
char *space = "";
va_list par;

	type style[] = {
		{'c', printchar},
		{'i', printint},
		{'f', printfloat},
		{'s', printstring}
	};

	va_start(par, format);

	x = 0;
		while (format && format[x])
		{
			y = 0;
			while (style[y].t)
			{
				if (style[y].t == format[x])
				{
					printf("%s", space);
					style[y].f(par);
					space = ", ";
				}
				y++;
			}
			x++;
		}

	va_end(par);
	printf("\n");
}
