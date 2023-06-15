#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning of dlistint_t list
 * @head: pointer to head of dlistint_t list
 * @n: integer for new node to contain
 * Return: NULL if function fails, else return address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_list;

	new_list = malloc(sizeof(dlistint_t));
	if (new_list == NULL)
		return (NULL);

	new_list->n = n;
	new_list->prev = NULL;
	new_list->next = *head;
	if (*head != NULL)
		(*head)->prev = new_list;

	*head = new_list;

	return (new_list);
}
