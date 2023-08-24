#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at a given index of listint_t list
 * @head: pointer to the list
 * @index: the index of the node that should be deleted, index start at 0
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	prev = (listint_t *)head;
	while (temp)
	{
		if (i == index)
		{
			if (index == 0)
				*head = temp->next;
			else
				prev->next = temp->next;
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
		i++;
	}

	return (-1);
}
