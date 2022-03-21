#include "lists.h"
/**
 * listint_len - number of elements in a linked listint_t list
 * @h: header
 * Return: n
 */
size_t listint_len(const listint_t *h)
{

	size_t n = 0;

	for (n = 0; h; n++)
	{
		h = h->next;
	}
	return (n);
}
