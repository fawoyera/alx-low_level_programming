#include <stdlib.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: The table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *list, *node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		list = ht->array[i];
		while (list)
		{
			node = list;
			list = list->next;
			free(node->key);
			free(node->value);
			free(node);
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;

}
