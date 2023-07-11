#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free a list_t list
 * @head: ponter to the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	if (temp == NULL)
		return;
	while (temp != NULL)
	{
		head = temp->next;
		free(temp->str);
		free(temp);
		temp = head;
	}
}
