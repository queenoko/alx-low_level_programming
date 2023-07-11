#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Function that creates sorted hash table.
 * @size: size of sorted hash table.
 *
 * Return: NULL if error occurs
 * else pointer to new sorted hash table.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hasht;
	unsigned long int z;

	hasht = malloc(sizeof(shash_table_t));
	if (hasht == NULL)
		return (NULL);

	hasht->size = size;
	hasht->array = malloc(sizeof(shash_node_t *) * size);
	if (hasht->array == NULL)
		return (NULL);
	for (z = 0; z < size; z++)
		hasht->array[z] = NULL;
	hasht->shead = NULL;
	hasht->stail = NULL;

	return (hasht);
}

/**
 * shash_table_set - Adds element to sorted hash table.
 * @ht: pointer to sorted hash table.
 * @key: Non empty string key
 * @value: value associated with key.
 *
 * Return: 0 on failure, else 1
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_string, *temp;
	char *value1;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value1 = strdup(value);
	if (value1 == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value1;
			return (1);
		}
		temp = temp->snext;
	}

	new_string = malloc(sizeof(shash_node_t));
	if (new_string == NULL)
	{
		free(value1);
		return (0);
	}
	new_string->key = strdup(key);
	if (new_string->key == NULL)
	{
		free(value1);
		free(new_string);
		return (0);
	}
	new_string->value = value1;
	new_string->next = ht->array[index];
	ht->array[index] = new_string;

	if (ht->shead == NULL)
	{
		new_string->sprev = NULL;
		new_string->snext = NULL;
		ht->shead = new_string;
		ht->stail = new_string;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_string->sprev = NULL;
		new_string->snext = ht->shead;
		ht->shead->sprev = new_string;
		ht->shead = new_string;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		new_string->sprev = temp;
		new_string->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = new_string;
		else
			temp->snext->sprev = new_string;
		temp->snext = new_string;
	}

	return (1);
}

/**
 * shash_table_get - Retrieve value associated with key in sorted hash table.
 * @ht: pointer to sorted hash table.
 * @key: The key value
 *
 * Return: NULLnif key cant match
 *         else value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node_re;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node_re = ht->shead;
	while (node_re != NULL && strcmp(node_re->key, key) != 0)
		node_re = node_re->snext;

	return ((node_re == NULL) ? NULL : node_re->value);
}

/**
 * shash_table_print - Prints in order sorted hash table
 * @ht: pointer to sorted hash table.
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node_ord;

	if (ht == NULL)
		return;

	node_ord = ht->shead;
	printf("{");
	while (node_ord != NULL)
	{
		printf("'%s': '%s'", node_ord->key, node_ord->value);
		node_ord = node_ord->snext;
		if (node_ord != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints sorted hash table in reverse order.
 * @ht: pointer to the sorted hash table to print.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node_rev;

	if (ht == NULL)
		return;

	node_rev = ht->stail;
	printf("{");
	while (node_rev != NULL)
	{
		printf("'%s': '%s'", node_rev->key, node_rev->value);
		node_rev = node_rev->sprev;
		if (node_rev != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes sorted hash table.
 * @ht: pointer to the sorted hash table.
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node_del, *temp;

	if (ht == NULL)
		return;

	node_del = ht->shead;
	while (node_del)
	{
		temp = node_del->snext;
		free(node_del->key);
		free(node_del->value);
		free(node_del);
		node_del = temp;
	}

	free(head->array);
	free(head);
}
