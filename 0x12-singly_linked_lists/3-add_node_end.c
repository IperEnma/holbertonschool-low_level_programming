#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head node
 * @str: string
 * Return: new
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	list_t *headaux = *head;
	list_t *new;

	if (str == NULL)
		return (NULL);

	s = strdup(str);

	new = malloc(sizeof(list_t));

	new->str = s;
	new->len = strlen(s);
	new->next = NULL;

	if (s && *head)
	{
		for (; headaux->next;)
		{
			headaux = headaux->next;
		}
		new->next = NULL;
		headaux->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
