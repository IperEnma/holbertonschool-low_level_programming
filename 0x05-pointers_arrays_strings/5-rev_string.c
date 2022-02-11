#include <stdio.h>
#include <string.h>
/**
 *
 *
 *
 */
void rev_string(char *s)
{
	int last = strlen(s) - 1;
	char tmp;
	int i = 0;

	for (; s[i]; i++)
	{
		if (i >= last)
			break;
		tmp = s[last];
		s[last] = s[i];
		s[i] = tmp;
		last--;
	}
}
