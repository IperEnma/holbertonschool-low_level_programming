#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: size of the argv array
 * @argv: An array of size argc
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int suma = 0;
	int i = 1;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		suma += atoi(argv[i]);
	}
	printf("%d\n", suma);

	return (0);
}
