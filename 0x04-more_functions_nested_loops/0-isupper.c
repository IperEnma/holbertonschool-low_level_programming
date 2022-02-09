#include <stdio.h>
#include "main.h"
/**
 * int _isupper(int c) - checks for uppercase character
 * @c: receiving character
 * return: 1 success 0 fail
 */
int _isupper(int c)
{
	if(c >= 65 && c <= 90)
	{
		c = 1;
	}
	else if(c >= 97 && c <= 122)
	{
		c = 0;
	}
	return (c);
}
