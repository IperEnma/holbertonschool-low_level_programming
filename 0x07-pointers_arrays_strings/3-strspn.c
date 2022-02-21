/**
 * _strspn - Write a function that gets the length of a prefix substring
 * @s: string original
 * @accept: coincindence
 * Return: r
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int si = 0;
	unsigned int r = 0;

	for (a = 0; accept[a]; a++)
	{
		for (si = 0; s[si]; si++)
		{
			if (s[si] == accept[a])
			r++;

			if (s[si] == ',')
				break;
		}
	}
	return (r);
}
