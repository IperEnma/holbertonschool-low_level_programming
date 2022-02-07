#include "main.h"
/**
 * print_last_digit - print last digit
 * @c: character check
 * Return: 1 sucess or 0 in fail
 */
int print_last_digit(int l)
{
	if (l < 0)
	{
		l = l * -1;
	}
	_putchar((l % 10) + 48);
	return (l % 10);
	
}
