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

		if (i < (n -1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
