#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int xx;
for (xx = 0; xx < 10; xx++)
{
char abc;
for (abc = "a"; abc <= "z"; abc++)
{
_putchar(abc);
}
if (xx != 10)
_putchar('\n');
}
}
