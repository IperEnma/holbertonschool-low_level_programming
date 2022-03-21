#ifndef NODOS
#define NODOS
#include <stddef.h>
#include <stdio.h>
typedef struct nodos
{
	int n;
	struct nodos * next;
} listint_t;
size_t print_listint(const listint_t *h);
#endif
