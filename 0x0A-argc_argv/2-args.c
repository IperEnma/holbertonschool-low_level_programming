#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: The size of the argv array
 * @argv:An array of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void)argv;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
