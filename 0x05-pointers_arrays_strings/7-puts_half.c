#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer
 * Return: pointer
 */
void puts_half(char *str)
{
	int i;
	int n;

	i = strlen(str);
	if ((i % 2) == 0)
	{
		n = i - 1;
		i = n / 2;

		for (; str[i]; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{	
		i = i + 1;	
		i = i / 2;
		for (; str[i]; i++)
		{
				_putchar(str[i]);
		}		
	}
}

