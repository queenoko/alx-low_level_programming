#include "lists.h"

/**
 * free_dlistint - free dlistint_t list
 * @head: head of dlistint_t list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_list;

	while (head)
	{
		temp_list = head->next;
		free(head);
		head = temp_list;
	}
}
