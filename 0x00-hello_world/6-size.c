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

	printf("char %lu", sizeof(char));
	printf("int", sizeof(int));
	printf("long int", sizeof(lint));
	printf("long long int", sizeof(llint));
	printf("float", sizeof(fl));
	return (0);
}
