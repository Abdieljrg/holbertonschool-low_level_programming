#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints sums diagonally
 *@a: pointer of a
 *@size: size variable
 *
 *Return: void
 *
 */
void print_diagsums(int *a, int size)
{
int calle;
int pilar;
int suma = 0;
int suma2 = 0;

	for (calle = 0; calle < size; calle++)
	{
	suma += *(a + calle * size + calle);
	}
		for (pilar = 0; pilar < size; pilar++)
		{
		suma2 += *(a + pilar * size + (size - 1 - pilar));
		}

		printf("%d, %d\n", suma, suma2);
}
