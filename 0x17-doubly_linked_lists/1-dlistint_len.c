#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - number of elements in a linked
 * @h: header of list
 * Return: number of elements in a linked
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
