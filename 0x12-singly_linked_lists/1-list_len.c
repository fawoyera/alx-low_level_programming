#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - find the number of elements in a list_t list
 * @h: pointer to the list
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	list_t *temp;
	int i = 0;

	temp = (list_t *)h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
