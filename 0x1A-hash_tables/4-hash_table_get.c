#include "hash_tables.h"
/**
 *
 *
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	
	index = key_index((unsigned char *)ht, ht->size);
	
	printf("ENTRE A LA FUNCION");
	printf("soy KEY HASH: %s", ht->array[index]->key);
	while (ht->array[index]->next)
	{
		if (ht->array[index]->key == key)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
