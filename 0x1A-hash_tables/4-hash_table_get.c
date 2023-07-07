#include "hash_tables.h"

/**
 * hash_table_get -  function that retrieves value associated with key.
 * @ht: pointer to hash table
 * @key: key to get value of
 *
 * Return: NULL if key cant be matched, else value associated with key ht
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node1;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node1 = ht->array[index];
	while (node1 && strcmp(node1->key, key) != 0)
		node1 = node1->next;

	return ((node1 == NULL) ? NULL : node1->value);
}
