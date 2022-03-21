#ifndef NODOS
#define NODOS
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct nodos
{
	int n;
	struct nodos * next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
#endif
