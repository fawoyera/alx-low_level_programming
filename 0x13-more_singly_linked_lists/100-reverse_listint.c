#include "lists.h"

/**
 * reverse_listint - reverse a listint_t list
 * @head: pointer to the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *prev;

	prev = NULL;
	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}

	*head = prev;
	return (*head);
}
