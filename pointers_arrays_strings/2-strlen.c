#include "main.h"
#include <stdio.h>
/**
 *_strlen - returns the lenght of a string
 *@s: length
 *Return: len
 */
int _strlen(char *s)
{
	int len = 0;
		while (s[len] != '\0')
		{
			len++;
		}
		return (len);
	}
