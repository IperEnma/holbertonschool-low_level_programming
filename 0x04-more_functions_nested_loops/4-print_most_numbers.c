#include "main.h"
/**
 * print_most_numbers - Do not print 2 and 4
 * void function
 * Return: 0
 */
void print_most_numbers(void)
{
	int c = 48;

	for (; c >= 48 && c < 58; c++)
	{
		if (c != 50 && c != 52)
		_putchar(c);
	}
	_putchar('\n');
}
