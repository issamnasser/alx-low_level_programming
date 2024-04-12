#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints the pair elements in the hash table
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int is_first_element = 1;
	hash_node_t *itr;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		itr = ht->array[i];

		while (itr != NULL)
		{
			if (is_first_element)
			{
				printf("'%s': '%s'", itr->key, itr->value);
				is_first_element = 0;
			}
			else
			{
				printf(", ");
				printf("'%s': '%s'", itr->key, itr->value);
			}
			itr = itr->next;
		}
	}
	printf("}\n");
}

