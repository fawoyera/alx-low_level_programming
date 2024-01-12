#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at given index of dlistint_t list
 * @head: pointer to the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if success or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	while (temp)
	{
		if (i == index)
		{
			if (i == 0)
			{
				if (temp->next == NULL)
				{
					free(temp);
					*head = NULL;
					return (1);
				}
				*head = temp->next;
				temp->next->prev = NULL;
				free(temp);
				return (1);
			}
			if (temp->next == NULL)
			{
				temp->prev->next = NULL;
				free(temp);
				return (1);
			}
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
