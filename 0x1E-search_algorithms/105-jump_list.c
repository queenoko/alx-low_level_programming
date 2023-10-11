#include "search_algos.h"

/**
 * jump_list - This Searching for an algorithm in a sorted singly
 *             linked list of integers using jump search.
 * @list: This is A pointer to the  head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it compared in the list.
 *              Uses the square root of the list size as the jump step.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *nodeL, *jumpL;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (nodeL = jumpL = list; jumpL->index + 1 < size && jumpL->n < value;)
	{
		nodeL = jumpL;
		for (step += step_size; jumpL->index < step; jumpL = jumpL->next)
		{
			if (jumpL->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jumpL->index, jumpL->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			nodeL->index, jumpL->index);

	for (; nodeL->index < jumpL->index && nodeL->n < value; nodeL = nodeL->next)
		printf("Value checked at index [%ld] = [%d]\n", nodeL->index, nodeL->n);
	printf("Value checked at index [%ld] = [%d]\n", nodeL->index, nodeL->n);

	return (nodeL->n == value ? nodeL : NULL);
}
