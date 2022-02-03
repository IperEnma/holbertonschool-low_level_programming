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

	printf("char %lu\n", sizeof(char));
	printf("int %lu\n", sizeof(int));
	printf("long int %lu\n", sizeof(lint));
	printf("long long int %lu\n", sizeof(llint));
	printf("float %lu\n", sizeof(fl));
	return (0);
}
