#include "lists.h"
/**
 * stint_loop - finds the loop in a linked list
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
/** 
 * print_listint_safe - that prints a listint_t linked list
 * @head: head node
 * Return: i
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0, flag = 0;
	listint_t *end;
	const listint_t *aux;
	aux = head;

	end = find_listint_loop((void*)head);

	if (end)
	{
		while(flag < 3)
		{
			if (aux == end)
				flag++;
			if (flag == 2)
				break;
			printf("[%p] %d\n", (void *)aux, aux->n);
			aux = aux->next;
			i++;
		}
	}
	else
	{
		while (aux)
		{
			printf("[%p] %d\n", (void *)aux, aux->n);
			aux = aux->next;
		}
	}

	return (i);
}
