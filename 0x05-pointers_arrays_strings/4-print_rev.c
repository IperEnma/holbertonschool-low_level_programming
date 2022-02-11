#include "main.h"
#include "string.h"
/**
 * print_rev - I've not got a reverse gear
 * @s: pointer
 * Return: pointer
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
