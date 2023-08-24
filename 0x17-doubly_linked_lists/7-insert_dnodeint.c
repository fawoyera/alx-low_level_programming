#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position of list
 * @h: pointer to the list
 * @idx: index of the list where new node should be added
 * @n: new node data
 *
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (temp)
	{
		i++;
		if (i == idx)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));

			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = temp->next;
			new->prev = temp;
			temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
	}

	return (NULL);
}
