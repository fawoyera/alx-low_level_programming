#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head node
 *
 * Return: the address of the node where the loop starts or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lag, *lead;

	lag = head;
	lead = head;
	while (lag && lead && lead->next)
	{
		lead = lead->next->next;
		lag = lag->next;
		if (lag == lead)
		{
			lag = head;
			while (lag != lead)
			{
				lag = lag->next;
				lead = lead->next;
			}
			return (lead);
		}
	}

	return (NULL);
}
