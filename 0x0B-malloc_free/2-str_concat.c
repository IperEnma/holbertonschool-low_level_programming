#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: p
 */
char *str_concat(char *s1, char *s2)
{
	char *p = NULL;
	int i, j = 0;

	if (s1 != NULL && s2 != NULL)
	{
		if (s1 == NULL)
			p = malloc(strlen(s2) + 1);
		else if (s2 == NULL)
			p = malloc(strlen(s1) + 1);
		else
			p = malloc(strlen(s1) + strlen(s2) + 1);
		if (p != NULL)
		{
			for (i = 0; s1[i]; i++)
			{
				p[i] = s1[i];
			}
			for (j = 0; s2[j]; j++)
			{
				p[i] = s2[j];
				i++;
			}
		}
	}

	return (p);
}
