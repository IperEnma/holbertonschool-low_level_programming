#include "lists.h"
/**
 *
 *
 *
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *aux;

	for (aux = *h; *h; *h = (*h)->next)
	{
		free(aux);
		i++;
	}
	return (i);
}
