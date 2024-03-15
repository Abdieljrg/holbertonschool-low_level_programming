#include <stdio.h>
#include "main.h"
/**
 *main - prints ector
 *@argc: count
 *@argv: vector
 *
 *Return: cero
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 0 && **argv)
	{
		for (i = 0; i < argc; i++)
		{
		printf("%s\n", argv[i]);
		}
	}
	return (0);
}
