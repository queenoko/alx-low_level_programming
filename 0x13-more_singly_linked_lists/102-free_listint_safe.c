/*
 * File: 102-free_listint_safe.c
 * Author: Queensly Udongwo
 */

#include "lists.h"

size_t loop_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * loop_listint_count - Counts the number of unique nodes in a
 * looped linked list
 * @head: Checks pointer to the head of the listint_t
 *
 * Return: 0 if list is not looped, else the number of the unique
 * nodes in the list
 */
size_t loop_listint_count(listint_t *head)
{
	listint_t *node1, *node2;
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
 * free_listint_safe - Frees a listint_t list safely containing loops
 * @h: Pointer to the address of the head of the listint-t list
 *
 * Return: the size of the list that was free’d
 * Description: Function sets the head to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodeS, i;

	nodeS = loop_listint_count(*h);

	if (nodeS == 0)
	{
		for (; h != NULL && *h != NULL; nodeS++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (i = 0; i < nodeS; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodeS);
}
