/**
 * _memcpy - Write a function that copies memory area.
 * @dest: copy return
 * @src: original string
 * @n: number to which it will change
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
