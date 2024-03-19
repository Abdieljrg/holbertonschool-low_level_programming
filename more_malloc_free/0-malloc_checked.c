#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - checks malloc memory num
 *@b: var in use to allocate malloc
 *Return: error if null, malloc in use if succes
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		printf("allocation un memory Failed.\n");
	}
	return (ptr);
}
