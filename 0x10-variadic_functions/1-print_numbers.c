#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separator
 * @n: numbers of parameters
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i = 0;

	if (separator != NULL)
	{

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i == n - 1)
			break;
		if (separator != NULL)
			printf("%s", separator);
		else
			printf("(nil)");
	}
	printf("\n");
	va_end(p);
	}
}
