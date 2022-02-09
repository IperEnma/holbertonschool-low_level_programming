#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * @
 * Return: 0
 */
void more_numbers(void)
{
	int c = 0;
	int c1 = 0;
	
	for (; c < 10; c++)
	{
		for (; c1 < 15; c1++)
		{
			if (c1 > 9)
			{
				_putchar((c1 / 10) + 48);
			}
				_putchar((c1 % 10) + 48);
		}
	}
}
