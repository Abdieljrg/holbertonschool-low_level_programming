#include "main.h"
#include <stdio.h>
/**
 *_strpbrk - search any set of bytes in a string
 *@s: pointer
 *@accept: pointer two
 *Return: if there is no coincidence NULL, if there is coincidences s
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
		if (*s == accept[x])
		return (s);
		}
		s++;
	}
	return (NULL);
}
