#include "hash_tables.h"

/**
 * hash_table_set - function that Adds or updates an element in  hash table
 * @ht: pointer to hash table
 * @key: key to add, which can not be an empty string
 * @value: key value
 *
 * Return: 0 if fails, else 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_elem;
	char *value1;
	unsigned long int index, z;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value1 = strdup(value);
	if (value1 == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (z = index; ht->array[z]; z++)
	{
		if (strcmp(ht->array[z]->key, key) == 0)
		{
			free(ht->array[z]->value);
			ht->array[z]->value = value1;
			return (1);
		}
	}

	new_elem = malloc(sizeof(hash_node_t));
	if (new_elem == NULL)
	{
		free(value1);
		return (0);
	}
	new_elem->key = strdup(key);
	if (new_elem->key == NULL)
	{
		free(new_elem);
		return (0);
	}
	new_elem->value = value1;
	new_elem->next = ht->array[index];
	ht->array[index] = new_elem;

	return (1);
}
