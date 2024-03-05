#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strcpy - copy stringline
 *@dest: destination
 *@src: source
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int gg;

	for (gg = 0; src[gg]; gg++)
	{
	dest[gg] = src[gg];
	}
	dest[gg] = '\0';
return (dest);
}
