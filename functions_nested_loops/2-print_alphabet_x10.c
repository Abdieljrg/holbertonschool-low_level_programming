#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int i = 0;
char abc;

	while (i =<=9)
{
for (abc = "a"; abc <= "z"; abc++)
{
_putchar(abc);
}
_putchar('\n');
i++;
}
}
