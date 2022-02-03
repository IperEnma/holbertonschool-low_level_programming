#include <stdio.h>
/**
 * main - main
 * Return: 0
 *
 * description:
 *
 */
int main(void)
{
	char tipochar;
	int ent;
	long int lint;
	long long int llint;
	float fl;

	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(lint));
	printf("size of a long long int: %lu byte(s)\n", sizeof(llint));
	printf("size of a float: %lu byte(s)\n", sizeof(fl));
	return (0);
}
