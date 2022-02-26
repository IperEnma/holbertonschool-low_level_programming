#include <ctype.h>
#include "main.h"
/**
 * _isdigit - checks for uppercase character
 * @c: function that checks for a digit
 * Return: 1 success 0 fail
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
