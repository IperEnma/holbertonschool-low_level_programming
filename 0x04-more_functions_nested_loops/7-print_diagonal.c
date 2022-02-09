#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: repetitions
 * Return: 0
 */
void print_diagonal(int n)
{
	int a = 0, b = 0, c = 0;

	if (n > 0)
	{
		for (; a < n; a++)
		{
			for (b = 0; b <= c; b++)
			{
				_putchar(' ');
			}
			c += 1;
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
