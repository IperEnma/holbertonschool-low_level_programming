#include <stdio.h>
#include "main.h"
/**
 * int _isupper(int c) - checks for uppercase character
 * @c: receiving character
 * return: 1 success 0 fail
 */
int _isdigit(int c)
{
	if(c >= '0' && c < '9')
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
