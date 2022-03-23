#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head node
 * Return: slow or null
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	if (head == NULL)
		return (NULL);

	slow = slow->next;
	fast = fast->next->next;

	for (; fast;)
	{
		if (fast == slow)
		{
			slow = head;

			for (; slow != fast;)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
		slow = slow->next;
		fast = fast->next->next;
	}

	return (NULL);
}
