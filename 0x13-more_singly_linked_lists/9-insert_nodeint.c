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
	listint_t *auxp = *head, *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{	new->next = *head;
		*head = new;
		return (new);
	}
	while (auxp)
	{
		if (i == idx - 1)
		{
			new->next = auxp->next;
			auxp->next = new;
		}
		auxp = auxp->next;
		i++;
	}

	if (i > idx)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
