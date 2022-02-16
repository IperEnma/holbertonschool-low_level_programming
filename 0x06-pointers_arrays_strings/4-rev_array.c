/**
 * reverse_array - reverses the content of an array of integers.
 * @n: numbers string
 * @a: strung
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int b;
	int e = 0;

	b = n;

	for (; i < n; i++)
	{
		if (i >= b)
			break;

		b--;
		e = a[i];
		a[i] = a[b];
		a[b] = e;
	}
}
