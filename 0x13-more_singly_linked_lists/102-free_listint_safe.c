#include "lists.h"

/**
 * free_listint_safe - free a listint_t list with loops safely
 * @h: pointer to the list
 *
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t i = 0;
	int diff;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			i++;
			*h = temp;
		}
		else
		{
			free(*h);
			i++;
			break;
		}
	}

	*h = NULL;
	return (i);
}
