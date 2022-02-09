#include "main.h"
/**
 * print_line - straight line in the terminal
 * @
 * Return: 0
 */
void print_line(int n)
{
	int c = 0;

	for (; c <= n; c++)
	{
		_putchar('_');
		if (c == n)
		{
			_putchar('\n');
		}
		if (c <= 0)
		{
			_putchar('\n');
		}
	}
}
