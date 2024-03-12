#include "main.h"
/**
 *_strlen_recursion - Function that returns the length of a string
 *@s:Pointer s
 *Return: counter
 */
int _strlen_recursion(char *s)
{
	int cont = 0;
		if (*s)
		{
		cont++;
		cont += _strlen_recursion(++s);
		}
		return(cont);
}
