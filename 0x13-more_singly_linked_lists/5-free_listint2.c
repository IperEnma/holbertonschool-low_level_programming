#include "lists.h"
/**
 * free_listint2 -  that frees a listint_t list
 * @head: header
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *aux = *head;
	listint_t *freeaux;

	for (; aux;)
	{
		freeaux = aux;
		aux = aux->next;
		free(freeaux);
	}
	*head = NULL;
}
