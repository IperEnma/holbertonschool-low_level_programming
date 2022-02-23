#include "main.h"
/**
 * help - function used to calculate the root
 * @n: number sent from the main
 * @h: used to find the root
 * Return: root or fail
 */
int help(int n, int h)
{
	if (h * h == n)
		return (h);
	if (h * h > n)
		return (-1);
	return (help(n, h + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number sent from the main
 * Return: root or fail
 */
int _sqrt_recursion(int n)
{
	return (help(n, 1));
}
