/*
 * File: 2-add_node.c
 * Author: Queensly Udongwo
 */

#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to the head of the list_t list
 * @str: String to be added to the list
 *
 * Return: If function fails - NULL, else the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = duplicate;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
