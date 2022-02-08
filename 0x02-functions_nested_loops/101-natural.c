#include <stdio.h>
#include "main.h"
/**
 * main - main
 * nothing void
 * Return: 0
 */
int main(void)
{
	unsigned long int a, sum;
	unsigned long int n = 0, m = 0;

	for (a = 1; a < 1024; a++)
		if (a % 3 == 0)
			m = m + a;
		else if (a % 5 == 0)
			n = n + a;
	sum = n + m;
	printf("%lu\n", sum);
	return (0);
}
