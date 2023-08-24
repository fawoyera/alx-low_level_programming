#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to the first node of list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *next;

	temp = head;
	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
