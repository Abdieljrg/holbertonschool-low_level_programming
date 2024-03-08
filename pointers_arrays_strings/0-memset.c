#include "main.h"
#include <stdio.h>
/**
 *_memset - fills memory with a constant variant
 *@s: char pointer
 *@b: buffer addres of memory
 *@n: unsigned var
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
