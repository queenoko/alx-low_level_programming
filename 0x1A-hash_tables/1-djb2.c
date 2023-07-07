#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash1;
	int count_djb2;

	hash1 = 5381;
	while ((count_djb2 = *str++))
	{
		hash1 = ((hash1 << 5) + hash1) + count_djb2;/* hash * 33 + count_djb2 */
	}
	return (hash1);
}
