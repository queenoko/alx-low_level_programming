#include "lists.h"

/**
 * get_dnodeint_at_index - Locats node in a list
 * @head: head of the list
 * @index: node to locate
 *
 * Return: Null if node does not exist, else address of located node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
