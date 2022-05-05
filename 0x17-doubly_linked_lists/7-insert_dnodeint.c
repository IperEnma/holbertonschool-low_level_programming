#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * lenlist - len of list
 * @h: header of list
 * Return: i
 */
unsigned int lenlist(dlistint_t **h)
{
	unsigned int i = 0;
	dlistint_t *aux = *h;

	for (i  = 0; aux; i++)
	{
		aux = aux->next;
	}
	return (i);
}
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: header of list
 * @idx: index insert node
 * @n: data
 * Return: address new node or NULL if faild
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *aux;
	unsigned int len = 0;

	len = lenlist(h);
	if ((idx != 0 && *h == NULL) || idx > len)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == len)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	aux = *h;
	for (; idx != 0; idx--)
		aux = aux->next;
	aux->prev->next = new;
	new->prev = aux->prev;
	new->next = aux;
	aux->prev = new;
	return (new);
}
