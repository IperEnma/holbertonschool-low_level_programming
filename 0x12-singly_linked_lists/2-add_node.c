#include "lists.h"
/**
 * add_node - new node at the beginning of a list_t
 * @head: head pointer node
 * @str: string
 * Return: NodoNew
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s = NULL;
	list_t *NodoNew = NULL;

	s = strdup(str);

	if (s && head)
	{
		NodoNew = malloc(sizeof(list_t));

		NodoNew->str = s;
		NodoNew->len = strlen(s);
		NodoNew->next = *head;
		*head = NodoNew;
	}
	return (NodoNew);
}
