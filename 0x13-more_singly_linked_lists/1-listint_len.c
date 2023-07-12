#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - find the number of elements in a listint_t list
 * @h: pointer to the list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	listint_t *temp;
	int i = 0;

	temp = (listint_t *)h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
