#include "lists.h"
listint_v *add_to_list(listint_v **head, const listint_t *n);
int is_in_list(listint_v *head, listint_t *n);

/**
 * print_listint_safe - print a listint_t linked list with loops once
 * @head: pointer to the head node of list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *temp;
	listint_v *list = NULL;

	int i = 0;

	temp = (listint_t *)head;
	while (temp)
	{
		add_to_list(&list, temp);
		printf("[%p] %i\n", (void *)temp, temp->n);
		i++;
		temp = temp->next;
		if (is_in_list(list, temp))
			break;
	}

	if (is_in_list(list, temp))
		printf("-> [%p] %i\n", (void *)temp, temp->n);
	return (i);
}

/**
 * add_to_list - add the node address to the list
 * @head: pointer to the list
 * @n: new node element
 *
 * Return: address of the new element
 */
listint_v *add_to_list(listint_v **head, const listint_t *n)
{
	listint_v *new;

	new = malloc(sizeof(listint_v));
	if (new == NULL)
		exit(98);
	new->n = (listint_t *)n;
	new->next = *head;
	*head = new;

	return (new);

}

/**
 * is_in_list - check if a node element is present in a list
 * @head: pointer to the head node
 * @n: the node element to search
 *
 * Return: 1 if present and 0 otherwise
 */
int is_in_list(listint_v *head, listint_t *n)
{
	listint_v *temp;

	temp = head;
	while (temp)
	{
		if (temp->n == n)
			return (1);
		temp = temp->next;
	}

	return (0);
}
