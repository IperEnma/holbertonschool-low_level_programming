#include "lists.h"
/**
 *
 *
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *aux = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	
	if (n && head)
	{
		for (; aux->next;)
		{
			aux = aux->next;
		}
		aux->next = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}

	return (new);
}
