#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to the list
 * @str: pointer to the node element
 *
 * Return: pointer to the new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;

	return (new);
}
