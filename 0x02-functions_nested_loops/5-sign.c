#include "main.h"
/**
 * print_sign - print if greater than or less than 0
 * @n: greater less than 0
 * Return: 1 sucess or 0 in fail
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar ('-');
	return (-1);
	}
}
