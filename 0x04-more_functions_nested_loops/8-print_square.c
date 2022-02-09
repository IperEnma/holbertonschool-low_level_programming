#include "main.h"
/**
 *
 */
void print_square(int size)
{
	int a = 0;
	int b = 0;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b == size)
				{
					_putchar('\n');
				}
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
