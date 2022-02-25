#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: The size of the argv array
 * @argv: An array of size argc
 * Return: 0 fail or 1 success
 */
int main(int argc, char *argv[])
{
	int s = 0;
	int a = 0;
	int b = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		s = a * b;
		printf("%d\n", s);
		return (1);
	}
	return (0);
}
