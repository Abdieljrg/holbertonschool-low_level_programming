#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_name - prints pointer name
 *
 *@name: pointer of name
 *@f: function
 *
 *Return: if null, does not return anything, if not, name pointer
 */
void print_name(char *name, void (*f)(char *))
{
	{
	if (name == NULL || f == NULL)
		return;
	}
	f(name);
}
