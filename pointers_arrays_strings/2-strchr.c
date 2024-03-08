#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in string
 *
 *@s: pointer
 *@c: c var
 *
 *Return: the ocurrence in c, if not is null
 */
char *_strchr(char *s, char c)
{
	while (s != '\0')
	{
		if (s == c)
		{
			return(s);
		}
		s++;
	}
	if (s == c)
	{
		return (s);
	}
	reutn (NULL);
}
