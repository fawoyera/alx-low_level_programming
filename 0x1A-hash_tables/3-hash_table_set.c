#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: The hash table
 * @key: The key, string to add
 * @value: The value associated with the key
 *
 * Return: 1 if success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *list;
	unsigned long int index;

	if (strlen(key) < 1 || strlen(value) < 1)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	else
	{
		if (strcmp(ht->array[index]->key, key))
		{
			/* update value of element*/
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			free(node->key);
			free(node->value);
			free(node);
			return (1);
		}
		else
		{
			/* handle collision */
			list = ht->array[index];
			node->next = list;
			ht->array[index] = node;
			return (1);
		}
	}
}
