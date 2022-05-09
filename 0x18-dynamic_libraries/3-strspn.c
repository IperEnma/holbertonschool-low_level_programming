/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string origin
 * @accept: string coincidence
 * Return: r
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int si = 0;
	unsigned int r = 0;

	for (; accept[a]; a++)
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
