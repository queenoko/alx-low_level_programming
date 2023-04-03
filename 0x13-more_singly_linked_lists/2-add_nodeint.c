/*
 * File: 2-add_nodeint.c
 * Author: Queensly Udongwo
 */

#include "lists.h"

/**
 * add_nodeint - Adds new node at the beginning of listint_t list
 * @head: Points to the address of the head of the listint_t list
 * @n: Integer for the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
