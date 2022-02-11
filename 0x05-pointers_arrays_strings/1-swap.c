/**
 * swap_int - swaps the values of two integers.
 * @a: receive first value
 * @b: receive second value
 * Return: pointers
 */
void swap_int(int *a, int *b)
{

	int c = 0;
	int d = 0;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
