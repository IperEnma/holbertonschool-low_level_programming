#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - returned pointer shall point to a newly allocated
 * @s1: string 1
 * @s2: string 2
 * @n: size
 * Return: p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s11 = 0, s12 = 0, j = 0;
	int i = 0;
	char *p = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s11 = strlen(s1);
	s12 = strlen(s2);
	if (n >= s12)
		p = malloc(s11 + s12 + 1);
	if (n < s12)
		p =malloc(s11 + n + 1);
	if (p != NULL)
	{
		for (i = 0; s1[i]; i++)
			p[i] = s1[i];
		if (n >= s12)
		{
			for (j = 0; j < s12; j++)
				p[i++] = s2[j];

		}
		if (n < s12)
		{
			for (j = 0; j < n; j++)
			p[i++] = s2[j];
		}
	}
	return (p);
}
