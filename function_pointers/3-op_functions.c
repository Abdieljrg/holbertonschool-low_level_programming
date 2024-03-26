#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *op_add - sums a + b
 *@a: first var of the sum
 *@b: second var of the sum
 *
 *Return: if var null return null, if else return x (sum)
 */
int op_add(int a, int b)
{
	int x = (a + b);
		return (x);
}

/**
 *op_sub - subtracts
 *
 *@a: first var
 *@b: second var
 *
 *Return: if null , null, if else subtraction
 */
int op_sub(int a, int b)
{
	int x = (a - b);
		return (x);
}

/**
 *op_mul - multiplicates
 *
 *@a: first var
 *@b: second var
 *
 *Return: if null, null, if else multiplication
 */
int op_mul(int a, int b)
{
	int x = (a * b);
		return (x);
}

/**
 *op_div - divides numbers
 *
 *@a: first var
 *@b: second var
 *
 *Return: divition
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	int x = (a / b);
		return (x);
}

/**
 *op_mod - remainde of div
 *@a: var one
 *@b: var two
 *
 *Return: null if null, if else remainder of div
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	int x = (a % b);
		return (x);
}
