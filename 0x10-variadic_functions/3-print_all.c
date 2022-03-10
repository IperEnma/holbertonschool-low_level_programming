#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_string - print string
 * @s: parameter
 * Return: void
 */
void print_string(va_list s)
{
	printf("%s\n", va_arg(s, char *));
}
/**
 * print_integer - print integer
 * @i: parameter
 * Return: void
 */
void print_integer(va_list i)
{
	printf("%d\n", va_arg(i, int));
}
/**
 * print_char - print char
 * @c: parameter
 * Return: void
 */
void print_char(va_list c)
{
	printf("%c\n", va_arg(c, int));
}
/**
 * print_float - print float
 * @f: parameter
 * Return: void
 */
void print_float(va_list f)
{

	printf("%f\n", va_arg(f, double));
}

/**
 * print_all - print all
 * @format: va_list
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list p;

	opp selector[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(p, format);

	while (format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (selector[j].c[0] == format[i])
				selector[j].f(p);
			j++;
		}
		i++;
	}
	va_end(p);
}
