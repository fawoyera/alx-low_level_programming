#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add a new node at the end of a linked list
 * @head: pointer to the list
 * @str: pointer to the node element
 *
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	if (temp == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	while (temp != NULL && temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->next = NULL;

	return (new);
}
