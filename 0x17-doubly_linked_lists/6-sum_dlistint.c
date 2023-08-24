#include "lists.h"

/**
 * sum_dlistint - compute the sum of all the data of a dlistnt_t list
 * @head: pointer to the first node of the list
 *
 * Return: sum of all the data of the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
