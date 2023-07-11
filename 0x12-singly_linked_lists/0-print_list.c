#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the elements of a list_t list
 * @h: pointer to the list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	list_t *temp;
	int i = 0;

	temp = (list_t*)h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", temp->len, temp->str);
		i++;
		temp = temp->next;
	}
	return (i);
}
