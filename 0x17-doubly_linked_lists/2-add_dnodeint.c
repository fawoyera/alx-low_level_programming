#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a doubly linked list
 * @head: pointer to the doubly linked list
 * @n: new node data
 *
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = (int)n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	(*head)->prev = NULL;

	return (new);
}
