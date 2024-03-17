#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a new malloc
 *
 *@str: char pointer string
 *
 *Return: pointer if else null
 */
char *_strdup(char *str)
{
	int x;
	int y;
	char *strcop;

	if (str == 0)
	{
		return (NULL);
	}
		for (x = 0; str[x]; x++)
		{
			y++;
		}
			strcop = malloc(sizeof(char) * y + 1);
		if (strcop == 0)
		{
			return (NULL);
		}
			for (x = 0; str[x]; x++)
			{
				strcop[x] = str[x];
			}
		return (strcop);
}
