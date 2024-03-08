#include <stdio.h>
#include "main.h"
/**
 *_strspn - legnth of the prefix substring
 *
 *@s: pointer
 *@accept: pointer two
 *Return: len
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	int len;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				len++;
				break;
			}
		}
		if (s[x] != accept[y])
		{
		return (len);
		}
	}
	return (len);
}
