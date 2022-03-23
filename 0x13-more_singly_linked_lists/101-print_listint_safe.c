#include "lists.h"
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
