#include "lists.h"

/**
 * get_nodeint_at_index - find the nth node of a listint_t list
 * @head: pointer to the head node
 * @index: index of the node starting at 0
 *
 * Return: pointer to the nth node or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}

	return (NULL);
}
