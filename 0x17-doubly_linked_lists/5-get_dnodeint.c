#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: header of list
 * @index: index node
 * Return: addres node or NULL if faiL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < index && head->next; i++)
		head = head->next;
	if (i == index)
		return (head);
	else
		return (NULL);
}
