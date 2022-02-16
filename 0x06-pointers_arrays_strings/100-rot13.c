/**
 *
 *
 *
 */
char *rot13(char *c)
{
	int i = 0;

	for (; c[i]; i++)
	{
		if ( c[i] > 64 && c[i] < 91)
		{
			if (c[i] > 77 && c[i] < 91)
				c[i] = c[i] + 13;
			if (c[i] > 64 && c[i] < 78)
				c[i] = c[i] - 13;
		}

		if ( c[i] > 96 && c[i] < 123)
		{
			if (c[i] > 109 && c[i] < 123)
				c[i] = c[i] + 13;
			if (c[i] > 96 && c[i] < 110)
				c[i] = c[i] - 13;
		}

	}
	return (c);
}
