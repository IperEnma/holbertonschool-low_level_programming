#include <stddef.h>
/**
 * array_iterator - function given as a parameter on each element of an array
 * @array: Array
 * @size: size array
 * @action: functio pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
