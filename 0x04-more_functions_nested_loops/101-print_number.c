#include "main.h"
/**
 * print_number - print integer
 * @n: value integer
 * Return
 */
void print_number(int n)
{
	unsigned int aux = n;

	if (n < 0)
	{
		_putchar('-');
		aux *= -1;
	}
	if (aux / 10)
	{
		print_number(aux / 10);
	}
	_putchar (aux % 10 + 48);
}
