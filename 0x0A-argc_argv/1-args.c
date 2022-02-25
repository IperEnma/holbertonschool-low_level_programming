#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: size of the argv array
 * @argv: array of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
