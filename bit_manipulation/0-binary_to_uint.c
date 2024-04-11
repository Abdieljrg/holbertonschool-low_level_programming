#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *binary_to_uint - from binary number to an int
 *@b: var in use
 *
 *
 *Return: result
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;
int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		res = res * 2 + (b[i] - '0');
		i++;
	}
	return (res);
}
