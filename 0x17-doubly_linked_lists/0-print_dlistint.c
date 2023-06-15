#include "lists.h"

/**
 * print_dlistint - prints all elments of dlistint_t list
 * @h: head of dlistint_t list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_list = 0;

	while (h)
	{
		node_list++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node_list);
}
