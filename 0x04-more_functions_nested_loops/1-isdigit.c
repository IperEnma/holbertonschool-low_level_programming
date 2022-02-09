#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for uppercase character
 * @c: function that checks for a digit
 * Return: 1 success 0 fail
 */
int _isdigit(int c)
{
	if (c >= '0' && c < '9')
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
