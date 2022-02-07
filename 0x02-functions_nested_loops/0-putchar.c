#include <unistd.h>
/**
 * main - main
 * Return: 0
 *
 * description: printf putchar
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));


}
