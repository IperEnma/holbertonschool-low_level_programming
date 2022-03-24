#include "main.h"
/**
 * get_bit - value of a bit at a given index
 * @index: index
 * Return: 
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (!n)
		return (-1);
	n = n >> index;
	if ((n & 1) == 0)
		return (0);
	else
		return (1);

}
