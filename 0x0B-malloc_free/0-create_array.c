#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * @size: size array
 * @c: specific char
 * Return: p
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p = NULL;

	if (size > 0)
	{
		p = malloc(size);
		for (i = 0; i <= size; i++)
		{
			p[i] = c;
		}
	}
	return (p);
}
