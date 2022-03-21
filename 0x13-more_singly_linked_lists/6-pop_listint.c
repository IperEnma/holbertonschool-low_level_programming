#include "lists.h"
/**
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	int ret = 0;
	listint_t *aux = *head;
	*head = (*head)->next;

	if (!*head)
		return (0);

	ret = aux->n;
	free(aux);

	return(ret);
}
