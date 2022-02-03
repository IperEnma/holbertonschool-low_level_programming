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
	printf("int %lu", sizeof(int));
	printf("long int %lu", sizeof(lint));
	printf("long long int %lu", sizeof(llint));
	printf("float %lu", sizeof(fl));
	return (0);
}
