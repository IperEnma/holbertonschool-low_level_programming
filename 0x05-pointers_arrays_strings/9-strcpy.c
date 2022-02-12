/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination string
 * @src: string to copy
 * Return 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
