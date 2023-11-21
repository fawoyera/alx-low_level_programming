#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: pointer to the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	if (temp == NULL)
		return;
	while (temp != NULL)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
}
