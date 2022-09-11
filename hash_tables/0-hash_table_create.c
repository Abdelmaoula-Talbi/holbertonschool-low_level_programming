#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the array
 * Return: a pointer to the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	unsigned long int i;

	if (!new_table || !new_node)
		return (NULL);
	new_node->key = NULL;
	new_node->value = NULL;
	new_node->next = NULL;
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t) * size);
	i = 0;
	while (i < size)
	{
		new_table->array[i] = NULL;
		i++;
	}
	return (new_table);
}
