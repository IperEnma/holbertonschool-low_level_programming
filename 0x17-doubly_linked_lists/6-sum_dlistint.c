#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a list
 * @head: header of list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum = head->n + sum;
			head = head->next;
		}
		return (sum);
	}
	else
	{
		return (0);
	}
}
