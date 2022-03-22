#include "lists.h"
/**
 *
 *
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *aux = head;

	printf("[%p] %d\n", (void *)head, head->n);
	if (head->next)
		return(1 + print_listint_safe(head->next));
	else
	{
		return (1);
	}

	return (0);
}
