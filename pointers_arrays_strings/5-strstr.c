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
	char *first = haystack;
	char *second = needle;

		while (*second != '\0' && *haystack == *second)
		{
			haystack++;
			second++;
		}
			if (*second == '\0')
			{
				return (first);
			}

			haystack = first + 1;
	}
	return (NULL);
}
