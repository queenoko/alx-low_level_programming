/*
 * File: 8-sum_listint.c
 * Author: Queensly Udongwo
 */

#include "lists.h"

/**
 * sum_listint - Returns sum of all data (n) in listint_t list
 * @head: A pointer to the head of the listint_t list
 *
 * Return: 0 if list is empty, else sum all data
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
