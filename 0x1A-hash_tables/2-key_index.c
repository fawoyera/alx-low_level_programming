#include "hash_tables.h"

/**
 * key_index - compute the index of a key
 * @key: The key, string
 * @size: The size of the table array
 *
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
