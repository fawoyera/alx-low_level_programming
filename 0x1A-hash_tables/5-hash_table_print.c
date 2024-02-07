#include <stddef.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: The hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *list;
	int first_print = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		list = ht->array[i];
		if (list && first_print == 0)
		{
			printf("'%s': '%s'", list->key, list->value);
			list = list->next;
			first_print = 1;
		}
		while (list)
		{
			printf(", '%s': '%s'", list->key, list->value);
			list = list->next;
		}
	}
	printf("}\n");
}
