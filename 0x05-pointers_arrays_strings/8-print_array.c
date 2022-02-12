#include <stdio.h>
/**
 * print_array - function that prints n element
 * @a:
 * @n:
 * Return: pointer
 */
void print_array(int *a, int n)
{
	int i = 0;
	
	for (; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
