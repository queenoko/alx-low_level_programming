/*
 * File: 3-add_node_end.c
 * Author: Queensly Udongwo
 */

#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of the list_t list
 * @head: Pointer to the head of the list_t list
 * @str: String to be added to the list
 *
 * Return: If the function fails - NULL, else the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = duplicate;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
