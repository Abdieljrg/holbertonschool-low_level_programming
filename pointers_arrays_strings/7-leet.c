#include "main.h"
/**
 *leet - Encodes a string in 1337
 *
 *@a: Pointer to replace
 *
 *Return: a
 */
char *leet(char *a)
{
	char num1[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	char num2[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};
	int i;
	int j;
		for (i = 0; a[i] != '\0'; i++)
		{
			for (j = 0; j < 11; j++)
			{
				if (a[i] == num1[j])
				{
					a[i] = num2[j];
				}
			}
		}
		return (a);
}
