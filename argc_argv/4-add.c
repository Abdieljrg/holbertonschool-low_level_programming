#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - adds numbers
 *@argc: counter
 *@argv: vector
 *Return: cero, return one if error
 */
int main(int argc, char *argv[])
{
	int suma = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	int x;
	int y;

		for (int x = 1; x < argc; x++)
		{
		int y = 0;

		while (argv[x][y] != '\0')
		{
			if (!isdigit(argv[x][y]))
			{
			printf("Error\n");
			return (1);
			}
			x++;
		}
		suma += atoi(argv[y]);
		}

	printf("%d\n", suma);
	return (0);
}
