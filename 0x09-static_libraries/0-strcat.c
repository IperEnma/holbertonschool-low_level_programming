#include <stdio.h>
/**
 * _strcat - strcar
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int a = 0;

	for (; dest[i]; i++)

	i = i + 1;
	for (; src[a]; a++)
	{
		dest[i] = src[a];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
