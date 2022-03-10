#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints numbers, followed by a new line
 * @separator: separator
 * @n: numbers of parameters
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i = 0;
	char *tmp;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(p, char *);
		if (tmp != NULL)
			printf("%s", tmp);
		else
			printf("(nil)");

		if (i == n - 1)
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
