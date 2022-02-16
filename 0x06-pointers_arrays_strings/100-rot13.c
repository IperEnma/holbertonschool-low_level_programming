/**
 * rot13 - encodes a string using rot13
 * @c: string received
 * Return: c
 */
char *rot13(char *c)
{
	int i = 0;
	int a = 0;
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char ori[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (; c[i]; i++)
	{
		for (a = 0; a < 52; a++)
		{
			if (c[i] == ori[a])
			{
				c[i] = rot13[a];
				break;
			}
		}

	}
	return (c);
}
