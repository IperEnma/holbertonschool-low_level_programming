#ifndef NODOS
#define NODOS
/**
 * struct Node - struct
 * @str: string
 * @len: size
 * @next: next node
 */
typedef struct Node
{	char *str;
	int len;
	struct Node *next;
} list_t;
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
#endif
