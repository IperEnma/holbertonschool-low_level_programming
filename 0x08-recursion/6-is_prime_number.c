/**
 * help - helper function
 * @n: number origin
 * @h: reference number
 * Return: 0 or 1
 */
int help(int n, int h)
{
	if (h == 1)
	{
		return (1);
	}
	else if ((n % h) == 0)
	{
		return (0);
	}
	else
	return (help(n, h - 1));

}
/**
 * is_prime_number - return prime factor
 * @n: number origin
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (help(n, n - 1));
	else
		return (0);
}
