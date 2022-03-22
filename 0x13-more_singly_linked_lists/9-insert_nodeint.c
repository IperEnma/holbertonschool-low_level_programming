#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @idx: index
 * @n: position
 * @head: head node
 * Return: new
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *aux = *head;
	listint_t *new, *aux2;

	if (!head || !(*head))
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new && n)
		new->n = n;
	for (i = 0; aux->next; i++)
	{
		aux = aux->next;
		if (i > idx)
			return (NULL);
	}

	aux = *head;

	for (i = 0; i < idx - 1; i++)
	{
		aux = aux->next;
	}
	aux2 = aux;
	aux2 = aux2->next;
	new->next = aux2;
	aux->next = new;

	return (new);
}
