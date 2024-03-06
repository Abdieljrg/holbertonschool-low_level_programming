#include <stdio.h>
#include "main.h"
/**
 *_strncat - beggining of program
 *@dest: pointer
 *@src: pointer two
 *@n: variable in use
 *Return: Dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	return (dest);
}
