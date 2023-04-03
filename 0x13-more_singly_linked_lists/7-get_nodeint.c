/*
 * File: 7-get_nodeint.c
 * Author: Queensly Udongwo
 */

#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of listint_t list
 * @head: Pointer to the head of the listint_t list
 * @index: Index of the node starting at 0
 *
 * Return: NULL if node does not exist, else locate node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nthNode;

	for (nthNode = 0; nthNode < index; nthNode++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
