/*
 * File: 0-print_list.c
 * Author: Queensly Udongwo
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list
 * @h: list_t list
 *
 * Return: number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
