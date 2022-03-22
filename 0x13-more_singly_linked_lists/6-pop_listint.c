#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: head npde
 * Return: ret
 */
int pop_listint(listint_t **head)
{
	int ret = 0;
	listint_t *aux = *head;
	*head = (*head)->next;

	if (!*head)
		return (0);

	ret = aux->n;
	free(aux);

	return (ret);
}
