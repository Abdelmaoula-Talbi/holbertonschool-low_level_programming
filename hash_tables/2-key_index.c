#include "hash_tables.h"

/**
 * key_index - generate the index of the key
 * @key: string used to generate the index
 * @size: the size of the array of the hash table
 * Return: the index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash_value = hash_djb2(key);

	index = hash_value % size;
	return (index);
}
