#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensiona
 * @width: width
 * @height: height
 * Return: p
 */
int **alloc_grid(int width, int height)
{
	int **p = NULL;
	int i, j = 0;

	if (width <= 0)
	{	free(p);
		return (p);
	}
	if (height <= 0)
	{	free(p);
		return (p);
	}

	p = malloc(height);
	if (p != NULL)
	{
		for (i = 0; i < height; i++)
			p[i] = malloc(width);

		for (i = 0; p[i]; i++)
		{
			for (j = 0; p[i][j]; j++)
			{
				p[i][j] = 0;
			}
		}
		return (p);
	}
	free(p);
	return (p);
}
