#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters
 * Return: r
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list prueba;
	unsigned int i = 0;
	unsigned int r = 0;

	va_start(prueba, n);

	for (i = 0; i < n; i++)
	{
	r += va_arg(prueba, unsigned int);
	}
	va_end(prueba);
	return (r);
}
