#include "main.h"
/**
 * _isalpha - check if c is character
 * @c: character check
 * Return: 1 sucess or 0 in fail
 */
int _isalpha(int c)
{
	if (c == 65 && c <= 90)
	{
		return (1);
	}
	if (c == 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
