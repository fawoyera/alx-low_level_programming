#include "lists.h"

/**
 * get_dnodeint_at_index - find the nth node of a doubly linked list
 * @head: pointer to the first node of the list
 * @index: the given index
 *
 * Return: the addres of the nth node or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp)
	{
		if (i == index)
			return (temp);
		i++;
		temp = temp->next;
	}

	return (NULL);
}
