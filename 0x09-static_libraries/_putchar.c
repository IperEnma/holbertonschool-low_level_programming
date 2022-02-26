#include "unistd.h"
/**
 * main - main
 * Return: 0
 *
 * description: numbers
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
