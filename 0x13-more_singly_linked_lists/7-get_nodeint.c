#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: header
 * @index: index
 * Return: aux
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *aux = head;

	if (!head)
		return (NULL);

	for (i = 0; aux; i++)
		aux = aux->next;

	if (index > i)
		return (NULL);
	aux = head;
	for (i = 0; i < index; i++)
	{
		aux = aux->next;
	}
	if (!aux)
		return (NULL);
	return (aux);
}
