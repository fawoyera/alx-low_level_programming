#include "lists.h"

/**
 * sum_listint - sum up all of the data(n) in a listint_t list
 * @head: pointer to the head node of the list
 *
 * Return: sum of the data or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
