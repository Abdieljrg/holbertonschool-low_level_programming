#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_array - prints the array
 *@a: pointer in use
 *@n:variable in use
 *Return: void
 */
void print_array(int *a, int n)
{
int goku;

	for (goku = 0; goku < n; goku++)
	{
		printf("%d%s", a[goku], (goku == n - 1) ? "" : ", ");
	}
	putchar('\n');
}
