#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: node head
 * @index: index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *aux = *head;
	listint_t *tofree, *connect;

	if ((*head) ==  NULL)
		return (-1);
	if (index == 0)
	{
		aux = (*head)->next;
		free((*head));
		*head = aux;
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (!aux || (*aux)->next == NULL)
			return (-1);
		aux = aux->next;
	}
	tofree = aux->next;
	if (tofree->next != NULL)
	{
		connect = tofree->next;
		aux->next = connect;
		free(tofree);
	}
	else
	{
		free(*head);
	}

	return (1);
}
