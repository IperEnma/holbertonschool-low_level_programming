#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: size array
 * @av: array
 * Return: p
 */
char *argstostr(int ac, char **av)
{
	char *p = NULL;
	int i, j, t, pi = 0;


	if (ac == 0 || av == NULL)
		return (p);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[j]; j++)
		{
			t++;
		}
		t++;
	}

	p = malloc(t * sizeof(av));

	if (p != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				p[pi] = av[i][j];
				pi++;
			}
			p[pi] = '\n';
			pi++;
		}
	}
		return (p);
}
