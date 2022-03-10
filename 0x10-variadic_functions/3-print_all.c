#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * print_string - print string
 * @s: parameter
 * Return: void
 */
void print_string(va_list s)
{
	char *aux;

	aux = va_arg(s, char *);

	switch (aux[0])
	{
		case '\0':
			printf("(nil)");
			break;
		default:
			printf("%s", aux);
	}
}
/**
 * print_integer - print integer
 * @i: parameter
 * Return: void
 */
void print_integer(va_list i)
{
	printf("%c", (char) va_arg(i, int));
}
/**
 * print_char - print char
 * @c: parameter
 * Return: void
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * print_float - print float
 * @f: parameter
 * Return: void
 */
void print_float(va_list f)
{
	printf("%f", (float) va_arg(f, double));
}

/**
 * print_all - print all
 * @format: va_list
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, str = 0;
	int j = 0;
	va_list p;

	opp selector[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	str = strlen(format) - 1;

	va_start(p, format);

	while (format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (selector[j].c[0] == format[i])
			{
				selector[j].f(p);
				if (i != str)
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(p);
}
