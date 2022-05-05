#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint_end - adds a new node at the end
 * @n: data
 * @head: header of list
 * Return: addres new node or NULL if fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *aux = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		aux = *head;
		while (aux->next != NULL)
			aux = aux->next;
		new->prev = aux;
		aux->next = new;
	}
	return (new);
}
