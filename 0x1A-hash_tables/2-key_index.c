#include "hash_tables.h"

/**
 * key_index -  function that gives you the index of a key.
 * @key: Key to get the index
 * @size: Size of array of hash table
 *
 * Return: Index of the key using djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
