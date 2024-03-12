#include "main.h"
/**
 *_strlen_recursion - prints a length of a string
 *@s: pointer for the recursion
 *Return: cont
 */
int _strlen_recursion(char *s)
{
int cont = 0;

	if (*s)
	{
		cont++;
		cont += _strlen_recursion(s + 1);
	}
	return (cont);
}
