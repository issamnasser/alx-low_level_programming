#include "hash_tables.h"

/**
 * key_index - gives the index of a key in a hash table
 * @key: the key string
 * @size: size of the hash table's array
 *
 * Return: the index at which the key should be stored in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}

