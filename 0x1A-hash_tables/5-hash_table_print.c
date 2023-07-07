#include "hash_tables.h"

/**
 * hash_table_print - Prints hash table
 * @ht: pointer to hash table to print
 *
 * Desc:  prints the key/value in the order that they appear
 * in the array of hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node1;
	unsigned long int z;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (z = 0; z < ht->size; z++)
	{
		if (ht->array[z] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node1 = ht->array[z];
			while (node1 != NULL)
			{
				printf("'%s': '%s'", node1->key, node1->value);
				node1 = node1->next;
				if (node1 != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
