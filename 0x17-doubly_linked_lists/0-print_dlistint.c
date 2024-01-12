#include "lists.h"

/**
 * print_dlistint - print all the elements of  doubly linked list
 * @h: pointer to the first node of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	int i = 0;

	temp = (dlistint_t *)h;
	while (temp)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}

	return (i);
}
