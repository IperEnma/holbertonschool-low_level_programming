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

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{	auxp->next = *head;
		*head = auxp;
		return (*head);
	}
	while (auxp)
	{
		if (i < idx - 1)
		{
			auxp = auxp->next;
			i++;
		}
		else
			break;
	}
	if (i + 1 == idx)
	{	new->next = auxp->next;
		auxp->next = new;
		return (new);
	}
	else
	{	free(new);
		return (NULL);
	}
	while (auxp->next != NULL)
	{	auxp = auxp->next;
		i++;
	}
	return (new);
}
