#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of dlistint_t list
 * @head: pointer to head of dlistint_t list
 * @n: integer for new node to contain
 *
 * Return: NULL if function fails else, return address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_list, *last_list;

	new_list = malloc(sizeof(dlistint_t));
	if (new_list == NULL)
		return (NULL);

	new_list->n = n;
	new_list->next = NULL;

	if (*head == NULL)
	{
		new_list->prev = NULL;
		*head = new_list;
		return (new_list);
	}

	last_list = *head;
	while (last_list->next != NULL)
		last_list = last_list->next;
	last_list->next = new_list;
	new_list->prev = last_list;

	return (new_list);

}
