/*
 * File: 0-print_listint.c
 * Author: Queensly Udongwo
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: Points to the head of lists_t list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nod = 0;

	while (h)
	{
		nod++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nod);
}
