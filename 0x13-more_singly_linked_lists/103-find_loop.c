#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head node
 *
 * Return: the address of the node where the loop starts or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	while (head)
	{
		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			return (head);
		}
	}

	return (NULL);
}
