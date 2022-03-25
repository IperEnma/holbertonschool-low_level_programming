/**
 * get_endianness - checks the endianness
 *
 * Return: 1 little indian or 0 big indian
 */
int get_endianness(void)
{
	int n = 4;
	int x = 1;

	x = x >> 2;

	if ((n & x) == 0)
		return (1);
	else
		return (0);
}
