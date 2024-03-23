#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *int_index - search interger
 *@array: array of input
 *@size: size of arrtay of input
 *@cmp: function called by array
 *Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
