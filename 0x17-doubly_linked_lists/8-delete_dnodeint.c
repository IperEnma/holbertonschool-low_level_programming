#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: lsit
 * @index: index
 * Return: 1 success or -1 error
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *aux;
	if (*head)
	{
		aux = *head;
		for (i = 0; i < index && (*head)->next; i++)
			aux = aux->next;
		if (i == index)
		{
			if (i == 0)
				*head = (*head)->next;
			if (aux->prev != NULL)
				aux->prev->next = aux->next;
			if (aux->next != NULL)
				aux->next->prev = aux->prev;
			aux->next = NULL;
			aux->prev = NULL;
			free(aux);
			return (1);
		}
		
	}
	return (-1);
}
