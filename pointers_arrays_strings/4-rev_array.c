#include "main.h"
/**
 *reverse_array - main function
 *
 *@a:Array pointer to reverse
 *@n:n value
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;
	int c;
	int b;
		for (x = 0, y = (n - 1); x < (n / 2); x++, y--)
		{
			c = a[x];
			b = a[y];
			a[x] = b;
			a[y] = c;
		}
}
