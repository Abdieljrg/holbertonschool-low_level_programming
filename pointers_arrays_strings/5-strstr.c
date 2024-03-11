#include "main.h"
#include <stdio.h>
/**
 *_strstr - locates substring
 *@haystack: pointer one
 *@needle: pointer two
 *Return: may vary
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{

		while (*needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
			if (*needle == '\0')
			{
				return (haystack);
			}

			haystack = haystack + 1;
	}
	return (NULL);
}
