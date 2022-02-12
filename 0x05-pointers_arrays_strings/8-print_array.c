#include <stdio.h>
/**
 * print_array - function that prints n element
 * @a: pointer
 * @n:repetition
 * Return: pointer
 */
void print_array(int *a, int n)
{
	int i = 0;
	
	for (; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n -1)
		{
			printf("%d, ", n);
		}
	}
	printf("\n");
}
