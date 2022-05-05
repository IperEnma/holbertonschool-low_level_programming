#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h:
 * @idx:
 * @n:
 * Return: address new node or NULL if faild
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *aux;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	aux = *h;
	for (i = 0; i < idx && aux->next; i++)
		aux = aux->next;

	if (i == idx)
	{
		if (aux->prev)
		{
			aux = aux->prev;
			new->next = aux->next;
			aux->next = new;
		}
		else
		{
			aux->prev = new;
			new->next = aux;
			*h = new;
		}
		return (new);
	}
	else
		return (NULL);
}
