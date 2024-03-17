#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - concatenetes two str
 *
 *@s1: str one pointer
 *@s2: str two pointer
 *
 *Return: concat
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int len1 = 0;
	int len2 = 0;
	int lentotal = 0;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s2[i]; i++)
	{
		len1++;
	}
	for (i = 0; s1[i]; i++)
	{
		len2++;
	}
	lentotal + len1 + len2 + 1;

	concat = malloc(sizeof(char) * lentotal);

	if (concat == 0)
	{
		return (NULL);
	}
	for (i = 0; i < len2; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; i < len1; i++)
	{
		concat[i + len2] = s2[i];
	}
	return (concat);
}
