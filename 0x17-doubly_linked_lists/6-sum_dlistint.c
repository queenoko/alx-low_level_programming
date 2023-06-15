#include "lists.h"

/**
 * sum_dlistint - sum all data of dlistint_t list
 * @head: head of dlistint_t list
 *
 * Return: sum of all data in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum1 = 0;

	while (head)
	{
		sum1 += head->n;
		head = head->next;
	}

	return (sum1);
}
