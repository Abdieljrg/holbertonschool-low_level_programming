#include <stdio.h>
#include "main.h"
/**
 *main - prints argc
 *@argc: argument counter
 *@argv: argument vector
 *Return: cero
 */
int main(int argc, char *argv[])
{
	if (argc >= 0 && *argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
