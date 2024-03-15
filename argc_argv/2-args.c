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

	if (argc >= 0 && **argv)
	{
		printf("%c\n", **argv);
	}
	return (0);
}
