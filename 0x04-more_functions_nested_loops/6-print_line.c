#include "main.h"
/**
 * print_line - straight line in the terminal
 * @n: repetition
 * Return: 0
 */
void print_line(int n)
{
	int c = 0;

	if (n > 0)
	{
		for (; c <= n; c++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');

}
