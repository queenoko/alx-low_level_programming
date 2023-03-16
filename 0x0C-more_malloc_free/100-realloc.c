#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory prviousely allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes for the new memory block
 *
 * Return: If new_size == old_size - ptr
 * If new_size == 0 and ptr is not NULL - NULL
 * otherwise - a pointer to the reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memo;
	char *ptr_cp, *filler;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memo = malloc(new_size);

		if (memo == NULL)
			return (NULL);

		return (memo);

	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_cp = ptr;
	memo = malloc(sizeof(*ptr_cp) * new_size);

	if (memo == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = memo;

	for (i = 0; i < old_size && i < new_size; i++)
		filler[i] = *ptr_cp++;

	free(ptr);
	return (memo);
}
