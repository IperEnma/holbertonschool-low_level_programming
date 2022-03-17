#ifndef NODOS
#define NODOS
typedef struct Node
{	char *str;
	int len;
	struct Node *next;
} list_t;

size_t print_list(const list_t *h);
#endif
