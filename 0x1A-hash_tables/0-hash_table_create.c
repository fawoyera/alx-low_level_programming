#include <stdlib.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of the array
 *
 * Return: pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;
	
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(table->size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
