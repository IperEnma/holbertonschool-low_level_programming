#include <stdio.h>
/**
 * linear_search - search value in array
 * @array: array
 * @size: size of array
 * @value: value search
 * Return: index or -1 if fail
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
