#include "lists.h"

/**
 * dlistint_len - returns the number or elements in dlistint_t list
 * @h: head of dlistint_t list
 *
 * Return: The number of elements in the dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_list = 0;

	while (h)
	{
		node_list++;
		h = h->next;
	}

	return (node_list);
}
