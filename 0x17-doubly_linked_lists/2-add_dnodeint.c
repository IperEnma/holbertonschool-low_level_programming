#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint - adds a new node at the beginning
 * @n: data
 * @head: header of list
 * Return: addres new node or NUll if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		(*head)->prev = NULL;
		new->next = *head;
		*head = new;
	}
	return (new);
}
