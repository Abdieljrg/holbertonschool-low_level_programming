#include "main.h"
/**
 *cap_string - Capitalizes all words of a string
 *
 *@a: pointer for variable a
 *
 *Return: a
 */
char *cap_string(char *a)
{
	int i, j;
	int k = 32;
	char boom[] = {' ', '\t', '\n', ',', ';', '.', '!'
		, '?', '"', '(', ')', '{', '}', '\0'};

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - k;
		}
		k = 0;
		for (j = 0; boom[j] != '\0'; j++)
		{
			if (boom[j] == a[i])
			{
				k = 32;
			}
		}
	}
	return (a);
}

