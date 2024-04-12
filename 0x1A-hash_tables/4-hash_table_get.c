#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves the key corresponding value if exists
 * @ht: pointer to the hash table
 * @key: the key string
 *
 * Return: the key corresponding value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *itr;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	itr = ht->array[index];

	while (itr != NULL)
	{
		if (strcmp(itr->key, key) == 0)
			return (itr->value);
		itr = itr->next;
	}

	return (NULL);
}

