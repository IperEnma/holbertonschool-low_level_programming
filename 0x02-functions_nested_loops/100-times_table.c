#include "main.h"
/**
 * print_times_table - prints the 9 times table
 * @n: table
 * Return: 1 sucess or 0 in fail
 */
void print_times_table(int n)
{
	int a, b, m;

	if (n > 15 || n < 0)
	return;
	for (a = 0; a <= n ; a++)
	{
		for (b = 0; b <= n; b++)
		{
			m = (a * b);
				if (b == 0)
				{
					_putchar (m + '0');
				}
				else if (m > 99)
				{
					_putchar (',');
					_putchar (' ');
					_putchar ((m / 100) + '0');
					_putchar (((m / 10) % 10) + '0');
					_putchar ((m % 10) + '0');
				}
				else if (m > 9 && m < 100)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
					_putchar ((m / 10) + '0');
					_putchar ((m % 10) + '0');
				}
				else if (m <= 9 && b != 0)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
					_putchar (' ');
					_putchar (m + '0');
				}
		}
	_putchar ('\n');
	}
}
