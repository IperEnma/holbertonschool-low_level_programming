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

	for (; fast;)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (fast == slow)
		{
			slow = head;

			for (; fast;)
			{
				slow = slow->next;
				fast = fast->next;

				if (slow == fast)
					return (slow);
			}
		}
	}

	return (NULL);
}
