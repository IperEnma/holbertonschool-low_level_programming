#include <stdio.h>
/**
 * _strstr - unction that locates a substring.
 * @haystack: string origin
 * @needle: string coincidende
 * Return: haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	for (; needle[s] ;)
		s++;

	for (; haystack != NULL;)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s && needle[i] == 0)
			haystack++;
		else
			return (haystack);
	}

	return (haystack);
}

