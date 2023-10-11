#include "search_algos.h"


/**
 * linear_skip - This searches for a value conatined in a skip list; assumes a
 * list with sorted values and a single skip layer with nodes at every index
 * which is a multiple of the square root of the size of the list
 *
 * @list: This is a pointer to the head of the skip list to traverse...
 * @value: value to search for
 * Return: The pointer on the first node where value is located
 * or NULL if list
 * is NULL or value not found...
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp1 = NULL, *stop = NULL;

	if (!list)
		return (NULL);

	temp = list;
	while (temp1 && temp1->express && temp1->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       temp1->express->index, temp1->express->n);
		temp1 = temp1->express;
	}
	stop = temp1;
	while (stop && stop->next != stop->express)
		stop = stop->next;
	/* value potentially lies between two express nodes */
	if (temp1->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       temp1->express->index, temp->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
		       temp1->index, temp1->express->index);
	}
	/* value is greater than last express node, potentially out of list */
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
		       temp1->index, stop->index);

	while (temp1 != stop && temp1->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       temp1->index, temp1->n);
		temp1 = temp1->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
	       temp1->index, temp1->n);

	if (temp1 == stop)
		return (NULL);
	return (temp1);
}
