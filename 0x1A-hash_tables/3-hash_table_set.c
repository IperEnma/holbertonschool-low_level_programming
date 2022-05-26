#include "hash_tables.h"
/**
 *
 *
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	unsigned long int index = 0;

	if (strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	
	printf("SET\n========================\n");
	if (ht->array[index] == NULL)
	{
		new = malloc(sizeof(hash_node_t));
		new->key = strdup(key);
		new->value = strdup(value);
		ht->array[index] = new;
		printf("ht->array: %s\n", ht->array[index]->key);
		return (1);
	}
	else
	{
		while(ht->array[index])
		{
			printf("ESTOY EN WL HILE\n");
			printf("ht->array[index]->key: %s\n", ht->array[index]->key);
			printf("key: %s\n", key);
			if (ht->array[index]->key == key)
			{
				printf("SI ES IGUAL\n");
				/*free(ht->array[index]->value);*/
				ht->array[index]->value = strdup(value);
				return (1);
			}
			/*ht->array[index] = ht->array[index]->next;*/
		}
		new = malloc(sizeof(hash_node_t));
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = ht->array[index];
		ht->array[index] = new;
		return (1);
	}

	return (0);
}
