#include "main.h"
/**
 * jack_bauer - every minute of the day of Jack Bauer
 * nothign void function
 * Return: 1 sucess or 0 in fail
 */
void jack_bauer(void)
{
	int mint, hrs;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mint = 0; mint < 60; mint++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mint / 10) + '0');
			_putchar((mint % 10) + '0');
			_putchar('\n');
		}

	}
}
