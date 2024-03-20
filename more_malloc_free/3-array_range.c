#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - creates an array of intergers fron min to max
 *@min: int var from the lowest number of array
 *@max: int var from the max number of array
 *
 *Return: pointer
 */
int *array_range(int min, int max)
{
int len;
int *ptr;
int i = 0;

	if (min > max)
	{
		return (NULL);
	}

	len = (max - min) + 1;
	ptr = (int *) malloc(sizeof(int) * len);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
