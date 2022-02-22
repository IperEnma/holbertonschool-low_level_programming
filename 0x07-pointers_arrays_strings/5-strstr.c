#include <stdio.h>
/**
 * _strstr - unction that locates a substring.
 * @haystack: string origin
 * @needle: string coincidende
 * Return: haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;

	while (haystac[a] != '\0')
	{
		while (need[b] != '\0')
		{
			if (haystack[ a+ b] != needle[b])
				break;
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}












