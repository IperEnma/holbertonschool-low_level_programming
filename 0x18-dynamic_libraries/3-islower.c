#include "main.h"
/**
 * _islower - check if c is lowercase
 * @c: character check if is lowercase
 * Return: 1 sucess or 0 in fail
 */
int _islower(int c)
{
	if (c > 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
