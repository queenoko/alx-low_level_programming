/*
 * File: 103-find_loop.c
 * Author: Queensly Udongwo
 */

#include "lists.h"

/**
 * find_listint_loop - Finds the loop in listint_t linked list
 * @head: Pointer to the head of thr listint_t list
 *
 * Return: NULL if there is no loop, else the address
 * of the loop where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node1, *node2;

	if (head == NULL || head->next == NULL)
		return (NULL);

	node1 = head->next;
	node2 = (head->next)->next;

	while (node2)
	{
		if (node1 == node2)
		{
			node1 = head;

			while (node1 != node2)
			{
				node1 = node1->next;
				node2 = node2->next;
			}

			return (node1);
		}

		node1 = node1->next;
		node2 = (node2->next)->next;
	}

	return (NULL);
}
