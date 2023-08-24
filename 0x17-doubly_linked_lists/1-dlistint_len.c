#include "lists.h"

/**
 * dlistint_len - find the number of elements in a doubly linked list
 * @h: pointer to the first node of the list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp;
	int i = 0;

	temp = (dlistint_t *)h;
	while (temp)
	{
		i++;
		temp = temp->next;
	}

	return (i);
}
