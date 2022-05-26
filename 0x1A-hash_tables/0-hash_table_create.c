#include "hash_tables.h"
/**
 *
 *
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->array = malloc(size);
	new->size = size;
	return (new);
}
