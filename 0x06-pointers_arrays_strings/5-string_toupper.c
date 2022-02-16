#include <stdio.h>
/**
 *
 *
 *
 */
char *string_toupper(char *c)
{
	int i = 0;

	for(; c[i]; i++)
	{
		if (c[i] > 96 && c[i] < 123)
			c[i] = c[i] - 32;
	}
	return (c);
}
