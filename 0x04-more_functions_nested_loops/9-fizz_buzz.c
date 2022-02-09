#include <stdio.h>
/**
 * main - program that prints the numbers
 * void nothing
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a < 101; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (a % 3 == 0 && a % 5 != 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (a % 5 == 0 && a % 3 != 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", a);
			printf(" ");
		}
		if (a == 100)
		{
			continue;
		}
	}
	printf("\n");
	return (0);
}
