#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node in a given position in a list
 * @h: pointer to head of the list
 * @idx: position to insert new list
 * @n: integer for the new node to contain
 *
 * Return: Null if function fails, else address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp_list = *h, *new_list;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temp_list = temp_list->next;
		if (temp_list == NULL)
			return (NULL);
	}

	if (temp_list->next == NULL)
		return (add_dnodeint_end(h, n));

	new_list = malloc(sizeof(dlistint_t));
	if (new_list == NULL)
		return (NULL);

	new_list->n = n;
	new_list->prev = temp_list;
	new_list->next = temp_list->next;
	temp_list->next->prev = new_list;
	temp_list = new_list;

	return (new_list);
}
