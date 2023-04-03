/*
 * File: 6-pop_listint.c
 * Author: Queensly Udongwo
 */

#include "lists.h"

/**
 * pop_listint - Deletes the head node of listint_t list
 * @head: Pointer to the address of the head of listint_t list
 *
 * Return: 0 if linked list is empty, else The head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int r;

	if (*head == NULL)
		return (0);

	temp = *head;
	r = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (r);
}
