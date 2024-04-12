#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes and frees memory of the given hash table
 * @ht: pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *itr, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		itr = ht->array[i];
		while (itr != NULL)
		{
			temp = itr->next;
			free(itr->key);
			free(itr->value);
			free(itr);
			itr = temp;
		}
	}
	free(ht->array);
	free(ht);
}

