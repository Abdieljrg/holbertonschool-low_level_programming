#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates an array of char
 *@size: memory size
 *@c: var for char
 *Return: null if size is cero. else returns pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
