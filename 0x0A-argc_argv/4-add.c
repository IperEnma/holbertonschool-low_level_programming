#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int suma = 0;
	int i = 1;

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

	return(0);
}
