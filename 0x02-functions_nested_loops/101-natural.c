#include <stdio.h>
#include <main.h>
/**
 * print_times_table - prints the 9 times table
 * @n: table
 * Return: 1 sucess or 0 in fail
 */
int main()
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
