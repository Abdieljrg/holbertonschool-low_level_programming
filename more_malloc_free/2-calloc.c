#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - allocates mem of array
 *@nmemb: unsigned int var
 *@size: unsigned int var
 *Return: *ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	c = 0;
	while (c < nmemb * size)
	{
		ptr[c] = 0;
		c++;
	}
	return (ptr);
}
