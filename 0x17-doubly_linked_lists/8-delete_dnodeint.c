#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index
 * @head: A pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 on success, else -1 if fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_list = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (temp_list == NULL)
			return (-1);
		temp_list = temp_list->next;
	}

	if (temp_list == *head)
	{
		*head = temp_list->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		temp_list->prev->next = temp_list->next;
		if (temp_list->next != NULL)
			temp_list->next->prev = temp_list->prev;
	}

	free(temp_list);
	return (1);
}
