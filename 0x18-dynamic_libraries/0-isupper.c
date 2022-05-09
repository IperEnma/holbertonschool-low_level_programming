#include <ctype.h>
#include "main.h"
/**
 *_isupper - checks for uppercase character
 * @c: receiving character
 * Return: 1 success 0 fail
 */
int _isupper(int c)
{

	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
