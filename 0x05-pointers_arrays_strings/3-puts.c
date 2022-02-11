#include <stdio.h>
/**
 * _puts - function that prints a string
 * @str: string
 * Return: puts
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
	{
		putchar(str[i]);
	}
	putchar(10);
}
