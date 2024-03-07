#include "main.h"
/**
 *string_toupper - changes all lowercase of string to uppercase
 *
 *@c:pointer to char c
 *
 *Return: c
 */
char *string_toupper(char *c)
{
	int i;
	int j = 32;

		for (i = 0; c[i] != '\0'; i++)
		{
			if (c[i] >= 97 && c[i] <= 122)
			{
				c[i] = c[i] - j;
			}
		}
		return (c);
}
