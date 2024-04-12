#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"


/**
 * insert_new_node - creates a new node and inserts it at the right index.
 * this function should be called only when the key is not already present
 * in the table
 * @ht: pointer to the hash table
 * @k: string representing the key
 * @v: the key corresponding value
 * @idx: index at which the new node should be inserted
 *
 * Return: 1 if successful, 0 otherwise
 */
int insert_new_node(hash_table_t *ht, const char *k, const char *v, int idx)
{
	hash_node_t *new_node;

	new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(k);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(v);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}


/**
 * hash_table_set - puts a key, value pair in the hash table
 * @ht: pointer to the hash table
 * @key: string representing the key
 * @value: the key corresponding value
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *itr;
	char *temp_val_ptr;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	itr = ht->array[index];

	while (itr != NULL)
	{
		if (strcmp(itr->key, key) == 0)
		{
			temp_val_ptr = strdup(value);
			if (temp_val_ptr == NULL)
				return (0);
			free(itr->value);
			itr->value = temp_val_ptr;
			return (1);
		}
		itr = itr->next;
	}

	return (insert_new_node(ht, key, value, index));
}

