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

	printf("size of a char: %lu", sizeof(char)); printf("byte(s)\n");
	printf("size of an int: %lu", sizeof(int)); printf("byte(s)\n");
	printf("size of a long int: %lu", sizeof(lint)); printf("byte(s)\n");
	printf("size of a long long int: %lu", sizeof(llint)); printf("byte(s)\n");
	printf("size of a float: %lu", sizeof(fl)); printf("byte(s)\n");
	return (0);
}
