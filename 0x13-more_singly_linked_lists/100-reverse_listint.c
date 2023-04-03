/*
 * File: 100-reverse_listint.c
 * Author: Queensly Udongwo
 */

#include "lists.h"

/**
 * reverse_listint - Reverses listint_t list
 * @head: Pointer to the address of the head of listint_t list
 *
 * Return: Pointer to the first node of the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *top, *bottom;

	if (head == NULL || *head == NULL)
		return (NULL);

	bottom = NULL;

	while ((*head)->next != NULL)
	{
		top = (*head)->next;
		(*head)->next = bottom;
		bottom = *head;
		*head = top;
	}

	(*head)->next = bottom;

	return (*head);
}
