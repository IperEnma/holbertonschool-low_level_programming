#include <string.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: pointer
 * Return: pointer value
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] ; i++)
	{
		if(str[i] % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
