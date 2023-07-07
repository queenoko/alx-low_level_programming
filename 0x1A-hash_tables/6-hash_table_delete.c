#include "hash_tables.h"

/**
 * hash_table_delete - function that Delete hash table
 * @ht: Pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head1 = ht;
	hash_node_t *node1, *temp;
	unsigned long int z;

	for (z = 0; z < ht->size; z++)
	{
		if (ht->array[z] != NULL)
		{
			node1 = ht->array[z];
			while (node1 != NULL)
			{
				temp = node1->next;
				free(node1->key);
				free(node1->value);
				free(node1);
				node1 = temp;
			}
		}
	}
	free(head1->array);
	free(head1);
}
