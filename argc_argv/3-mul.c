#include <stdio.h>
#include <stdlib.h>
/**
 *main - argc and argv
 *@argc: ar counter
 *@argv: ar vector
 *Return: cero
 */
int main(int argc, char *argv[])
{
	int x;
	int r = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
}
		for (x = 1; x < argc; x++)
		{
			r *= atoi(argv[x]);
		}
		printf("%d\n", r);

		return (0);
}
