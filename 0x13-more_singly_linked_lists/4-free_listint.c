#include "lists.h"
/**
 * free_listint - that frees a listint_t list
 * @head: header
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *aux = head;
	listint_t *auxfree;

	for (; aux;)
	{
		auxfree = aux;
		aux = aux->next;
		free(auxfree);
	}
}
