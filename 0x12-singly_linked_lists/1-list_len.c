#include <stddef.h>
#include "lists.h"
/**
 * list_len - number of elements in a linked list_t
 * @h: head
 * Return: ret
 */
size_t list_len(const list_t *h)
{
	size_t ret = 0;

	for (; h;)
	{
		if (h->str)
			ret++;
		h = h->next;
	}
	return (ret);
}
