/*
 * File: 4-free_listint.c
 * Author: Queensly Udongwo
 */

#include "lists.h"

/**
 * free_listint - Frees listint_t list
 * @head: Pointer to the head of listint_t to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
