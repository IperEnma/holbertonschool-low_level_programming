#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: head npde
 * Return: ret
 */
int pop_listint(listint_t **head)
{
	listint_t *freeaux;

	int ret = 0;

	if (!*head)
		return (0);

	ret = (*head)->n;
	freeaux = (*head)->next;
	free(*head);
	*head = freeaux;
	return (ret);
}
