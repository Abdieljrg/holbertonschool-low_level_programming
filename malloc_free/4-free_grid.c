#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - frees two dimentional previously saved
 *
 *@grid: pointer grid
 *@height: var for height
 *
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
