#include "lists.h"
/**
 * sum_listint - sum of all the data (n)
 * @head: head node
 * Return: add
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	listint_t *aux = head;

	if ((*head).next == NULL)
		return (0);

	for (; aux;)
	{
		add += aux->n;
		aux = aux->next;
	}

	return (add);
}
