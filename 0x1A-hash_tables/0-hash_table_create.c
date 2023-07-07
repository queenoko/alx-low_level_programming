#include "hash_tables.h"

/**
 * hash_table_create - Function htat creates hash table
 * @size: Size of array
 *
 * Return: NULL if error occurs, else pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *create_hashtable;
	unsigned long int z;

	/* space allocated for hash table */
	create_hashtable = malloc(sizeof(hash_table_t));

	if (create_hashtable == NULL)
		return (NULL);

	create_hashtable->size = size;
	create_hashtable->array = malloc(sizeof(hash_node_t *) * size);

	if (create_hashtable->array == NULL)
		return (NULL);

	for (z = 0; z < size; z++)
	{
		create_hashtable->array[z] = NULL;
	}

	return (create_hashtable);
}
