#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - concatenate two strings
 *
 *@s1: fisrt string
 *@s2: second string
 *@n: variable
 *Return: if null "", else the concatonate
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t len1 = 0;
	size_t len2 = 0;
	size_t i;
	size_t j;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
		result = (char *) malloc(len1 + n + 1);
		if (result == NULL)
		{
		exit(98);
		}
			for (i = 0; i < len1; i++)
			{
				result[i] = s1[i];
			}
			for (j = 0; j < n; j++)
			{
			result[i++] = s2[j];
			}
		result[i] = '\0';
		return (result);
}
