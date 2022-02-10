#include <stdio.h>
#include <stdlib.h>
/**
 * main - prime factor
 * void function
 * Return: 0
 */
int main(void)
{
	long long int i, resultado;
	long long int MAX = 612852475143;
	int num;

	for (i = 2; i < MAX; i++)
	{
		if (MAX % i == 0)
		{
		MAX /= i;
		i = 2;
		}
	}
	return (0);
}
