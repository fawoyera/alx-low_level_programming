#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print all the elements of a listint_t list
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *temp;
	int i = 0;

	temp = (listint_t *)h;
	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
