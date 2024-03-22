#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - iterates in array
 *@array: array
 *@size: size of array
 *@action: pointer to te function
 *Return: action, if null just return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	{
		if (array == NULL || action == NULL)
			return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
