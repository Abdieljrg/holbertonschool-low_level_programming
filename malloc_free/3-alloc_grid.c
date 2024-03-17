#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer
 *
 *@width: int var width
 *@heigth: int var heigth
 *
 *Return: NULL on fail, ptp on success
 */
int **alloc_grid(int width, int height)
{
	int x = 0;
	int y = 0;
	int **ptp = NULL;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	ptp = (int **) malloc(height * sizeof(int *));
	if (ptp == NULL)
	{
		return (NULL);
	}
		for (x = 0; x < height; x++)
		{
			ptp[x] = (int *) malloc(width * sizeof(int));

			if (ptp[x] == NULL)
			{
				for (y = 0; y < x; y++)
				{
					free(ptp[y]);
				}
				free(ptp);
				return (NULL);
			}
		}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			ptp[x][y] = 0;
		}
	}
	return (ptp);
}
