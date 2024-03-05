#include "main.h"
#include <stdio.h>
/**
 *rev_string - reverse string
 *@s: pointer
 *Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int x = 0;
	char temp;

	while (s[len] != '\0')

	{
		len++;
	}

	for (x = len - 1; x >= len / 2; x--)
	{
		temp = s[x];
		s[x] = s[len - x - 1];
		s[len - x - 1] = temp;
	}
}

