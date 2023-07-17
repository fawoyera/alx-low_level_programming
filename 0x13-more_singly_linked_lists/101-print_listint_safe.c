#include "lists.h"

/**
 * print_listint_safe - print a listint_t linked list with loops once
 * @head: pointer to the head node of list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *temp, *list = NULL;
	int i = 0, j;

	temp = (listint_t *)head;
	while (temp)
	{
		printf("[%p] %i\n", (void *)temp, temp->n);
		i++;
		temp = temp->next;
		list = (listint_t *)head;
		j = 0;
		while (j < i)
		{
			if (temp == list)
			{
				printf("-> [%p] %i\n", (void *)temp, temp->n);
				return (i);
			}
			list = list->next;
			j++;
		}
	}

	return (i);
}

