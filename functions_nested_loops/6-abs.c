#include "main.h"
/**
 * _abs - compute absolute value of int
 *
 *@z: interger
 *
 * Return: absolute value of z
 */
int _abs(int z);
{
	if (z < 0)
	{
		int abs_val;

		abs_val = z * -1;
		return (abs_val);
	}
	return (z);
}
