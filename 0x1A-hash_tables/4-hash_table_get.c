#include <stddef.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: The hash table
 * @key: The key of value to retrieve
 *
 * Return: the value if found, otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *list;

	if (key == NULL || strlen(key) < 1 || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	list = ht->array[index];
	if (list == NULL)
		return (NULL);

	while (list)
	{
		if (strcmp(list->key, key) == 0)
			return (list->value);
		list = list->next;
	}
	return (NULL);
}
