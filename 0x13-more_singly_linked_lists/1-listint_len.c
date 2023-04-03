/*
 * File: 1-listint_len.c
 * Author: Queensly Udongwo
 */

#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: Points to the head of the list
 *
 * Return: Number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t nods = 0;

	while (h)
	{
		nods++;
		h = h->next;
	}

	return (nods);
}
