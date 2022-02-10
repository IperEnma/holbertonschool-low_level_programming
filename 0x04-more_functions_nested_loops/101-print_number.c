#include "main.h"
/**
 * print_number - print integer
 * @n: value integer
 * Return
 */
void print_number(long int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar (n % 10 + 48);
}
