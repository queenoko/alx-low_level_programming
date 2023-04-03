/*
 * File: 101-print_listint_safe.c
 * Author: Queensly Udongwo
 */

#include "lists.h"
#include <stdio.h>

size_t loop_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * loop_listint_len - Counts number of unique nodes in a looped linked list
 * @head: Checks pointer to the head of listint_t
 *
 * Return: 0 if list is not looped, else number of unique nodes in the list
 */
size_t loop_listint_len(const listint_t *head)
{
	const listint_t *node1, *node2;
	size_t nodeS = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	node1 = head->next;
	node2 = (head->next)->next;

	while (node2)
	{
		if (node1 == node2)
		{
			node1 = head;
			while (node1 != node2)
			{
				nodeS++;
				node1 = node1->next;
				node2 = node2->next;
			}

			node1 = node1->next;
			while (node1 != node2)
			{
				nodeS++;
				node1 = node1->next;
			}

			return (nodeS);
		}

		node1 = node1->next;
		node2 = (node2->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely
 * @head: Pointer to the head of the listint_t list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodeS, i = 0;

	nodeS = loop_listint_len(head);

	if (nodeS == 0)
	{
		for (; head != NULL; nodeS++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nodeS; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodeS);
}
