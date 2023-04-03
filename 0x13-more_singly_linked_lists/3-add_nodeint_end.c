/*
 * File: 3-add_nodeint_end.c
 * Author: Queensly Udongwo
 */

#include "lists.h"

/**
 * add_nodeint_end - Adds node at the end of the listint_t list
 * @head: Points to the address of the head of the listint_t list
 * @n: Integer for the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastList;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	else
	{
		lastList = *head;
		while (lastList->next != NULL)
			lastList = lastList->next;
		lastList->next = newNode;
	}

	return (*head);
}
