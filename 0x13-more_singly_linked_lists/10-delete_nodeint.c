/*
 * File: 10-delete_nodeint.c
 * Author: Queensly Udongwo
 */

#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of listint_t
 * @head: Pinter to the address of the head of listint_t list
 * @index: Index of the node to be deleted, starting at 0
 *
 * Return: 1 if successful, else -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copyS = *head;
	unsigned int nodeS;

	if (copyS == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copyS);
		return (1);
	}

	for (nodeS = 0; nodeS < (index - 1); nodeS++)
	{
		if (copyS->next == NULL)
			return (-1);

		copyS = copyS->next;
	}

	temp = copyS->next;
	copyS->next = temp->next;
	free(temp);
	return (1);
}
