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

	if (key == NULL || strlen(key) < 1 || ht == NULL || value == NULL)
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
		list = ht->array[index];
		while (list)
		{
			if (strcmp(list->key, node->key) == 0)
			{
				free(list->value);
				list->value = node->value;
				free(node->key);
				free(node);
				return (1);
			}
			list = list->next;
		}
		list = ht->array[index];
		node->next = list;
		ht->array[index] = node;
		return (1);
	}
}
