#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t
 * @h: list
 * Return: ret
 */
size_t print_list(const list_t *h)
{
	int ret = 0;

	for (; h;)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		ret = ret + 1;
		h = h->next;
	}
	return (ret);
}
