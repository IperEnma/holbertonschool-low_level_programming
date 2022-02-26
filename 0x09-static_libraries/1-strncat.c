#include <stdio.h>
/**
 * _strncat - concatenates two strings.
 * @dest: destin
 * @src: source
 * @n: repetition
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int a = 0;

	for (; dest[i]; i++)
		;
	for (; a < n && src[a]; a++)
	{
		dest[i] = src[a];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
