#include "main.h"
/**
 *_strcmp - compares two str
 *@s1: first string
 *@s2: second string
 *Return: void
 */
int _strcmp(char *s1, char *s2)
{
int x;

	for (x = 0; (s1[x] != '\0' && s2[x] != '\0') && (s1[x] == s2[x]); x++)
	{
		;
	}

		if (s1[x] == s2[x])
		{
			return (0);
		}
	return (s1[x] - s2[x]);
}
