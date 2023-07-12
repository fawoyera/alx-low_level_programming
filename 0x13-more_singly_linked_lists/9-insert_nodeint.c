#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to the list
 * @idx: index of the list where the new node should be added starting at 0
 * @n: new node data
 *
 * Return: address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *prev, *new, *next;
	unsigned int i = 0;

	temp = *head;
	prev = (listint_t *)head;
	while (temp || idx == 0)
	{
		next = temp;
		if (i == idx)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = next;
			prev->next = new;
			return (new);
		}
		prev = next;
		temp = temp->next;
		i++;
	}
	return (NULL);
}
