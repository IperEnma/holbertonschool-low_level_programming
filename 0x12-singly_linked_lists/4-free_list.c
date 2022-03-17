#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: head list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *aux;

	for (; head->next;)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
