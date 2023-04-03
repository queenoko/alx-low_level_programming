/*
 * File: 9-insert_nodeint.c
 * Author: Queensly Udongwo
 */

#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to listint_t list
 * to a given postion
 * @head: Pointer to the address of the head listint_t
 * @idx: Index of the listint_t where new node should be added, index 0
 * @n: integer for the new node
 *
 * Return: NULL, if function fails, else the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *copyNode = *head;
	unsigned int nodeS;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = copyNode;
		*head = newNode;
		return (newNode);
	}

	for (nodeS = 0; nodeS < (idx - 1); nodeS++)
	{
		if (copyNode == NULL || copyNode->next == NULL)
			return (NULL);

		copyNode = copyNode->next;
	}

	newNode->next = copyNode->next;
	copyNode->next = newNode;

	return (newNode);

}
