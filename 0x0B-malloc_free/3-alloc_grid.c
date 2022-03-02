#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensiona
 * @width: width
 * @height: height
 * Return: p
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j = 0;

	p = (int **)malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
		p[i] = (int *)malloc(height * sizeof(int));

	for (i = 0; p[i]; i++)
	{
		for (j = 0; p[i][j]; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);


}