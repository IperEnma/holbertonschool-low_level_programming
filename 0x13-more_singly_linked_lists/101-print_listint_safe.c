#include "lists.h"
/**
 *
 *
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i;

	for (i = 0; head; i++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	return (i);
}
