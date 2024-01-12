#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a doubly linked list
 * @head: pointer to the list
 * @n: new node data
 *
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = (int)n;
	temp = *head;
	while (temp && temp->next)
		temp = temp->next;
	new->prev = temp;
	if (temp != NULL)
		temp->next = new;
	new->next = NULL;

	if (temp == NULL)
		*head = new;

	return (new);
}
