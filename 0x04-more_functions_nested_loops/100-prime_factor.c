#include <stdio.h>
#include <stdlib.h>
/**
 * main - prime factor
 * void function
 * Return: 0
 */
int main(void)
{
	int a = 2;

	for (a = 2; a < n; a++)
	{
		if (n % a == 0)
		{
			n = n / a;
		}
	}
	printf("%d", n);
}
