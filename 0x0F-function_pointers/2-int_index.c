/**
 * int_index - searches for an integer
 * @array: array integers
 * @size: size array
 * @cmp: function pointer
 * Return: i or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
			if (!array[i + 1])
				return (-1);
		}
	}
	return (i);
}
