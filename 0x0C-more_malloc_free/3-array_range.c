#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: value min
 * @max: value max
 * Return: p
 */
int *array_range(int min, int max)
{
	int *p;
	int j = 0, i = 0;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p != NULL)
	{
		for (i = min; i <= max; i++)
		{
			p[j++] = i;
		}
	}
	else
		return (NULL);
	return (p);

}
