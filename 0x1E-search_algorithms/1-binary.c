#include <stdio.h>
/**
 *
 *
 */
void print_arr(int *array, size_t init, size_t end)
{

	printf("Searching in array: ");
	while (1)
	{
		if (init == end)
			break;
		printf("%i, ", array[init]);
		init = init + 1;
	}
	printf("%i\n", array[init]);
}
/**
 *
 *
 */
size_t aux(int *array, size_t init, size_t end, int value)
{
	size_t ret = 0;
	size_t middle = 0;
	size_t diference = 0;
	
	diference = end - init;
	diference = diference / 2;
	middle = init +  diference;
	
	if (array == NULL)
		return (-1);
	print_arr(array, init, end);
	if (end == init)
		return (-1);
	if (value == array[init])
		return (init);
	if (value > array[(middle)])
		return (aux(array, middle + 1, end, value));
	else
		return (aux(array, init, middle - 1, value));
}
/**
 * bianry_search - binary search
 * @array: array
 * @size: size of array
 * @value: value search
 * Return: 1 if fail or index
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (aux(array, 0, size - 1, value));
}
