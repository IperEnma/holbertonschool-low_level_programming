#include <stdio.h>
/**
 * _strchr - Write a function that locates a character in a string.
 * @s: string original
 * @c: character match
 * Return: p
 */
char *_strchr(char *s, char c)
{
	char *p = NULL;
	int si = 0;
	int y = 0;

	p = s;

	if (s != NULL)
	{
		for (; s[si]; si++)
		{
			if (s[si] ==  c)
			{
				y = 1;
				break;
			}
		}

		if (y || c == 0)
			p = s + si;
		else
		p = NULL;
	}
	return (p);
}
