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
	int h = 0;

	if (needle != NULL)
	{
	for (; needle[s] ;)
		s++;

	for (; haystack != NULL;)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	}

	else
	{
		for (; haystack[h];)
			haystack++;
	}
	return (haystack);

	
}










