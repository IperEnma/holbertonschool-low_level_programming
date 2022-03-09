#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add -sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: a + b
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of a and b
 * @a: first integer
 * @b: second integer
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product a and b
 * @a: first integer
 * @b: second integer
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division a by b
 * @a: first integer
 * @b: second integer
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - remainder of the division a by b
 * @a: first integer
 * @b: second integer
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}
	return (a % b);
}
