#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free a list
 * @head: header of list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
