#include <stdio.h>
#include <string.h>
/**
 *
 *
 *
 */
void rev_string(char *s)
{
	char *aux = s;
	int i, j = 0;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		s[j] = aux[i];
		j++;
	}
}
