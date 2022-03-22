#include "lists.h"
/**
 * free_listint2 -  that frees a listint_t list
 * @head: header
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *freeaux;

	if (head == NULL || *head == NULL)
		return;

	for (; *head;)
	{
		freeaux = (*head)->next;
		free(*head);
		*head = freeaux;
	}
	*head = NULL;
}
