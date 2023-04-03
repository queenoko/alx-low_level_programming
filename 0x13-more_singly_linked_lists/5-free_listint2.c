/*
 * File: 5-free_listint2.c
 * Author: Queensly Udongwo
 */

/**
 * free_listint2 - Frees listint_t list
 * @head: Pointer to the address of listint_t list
 *
 * Description: Sets head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}
