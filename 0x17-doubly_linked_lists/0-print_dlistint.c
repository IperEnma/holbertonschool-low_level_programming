#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of a dlistint
 * @h: header of list
 * Return: numbers elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
