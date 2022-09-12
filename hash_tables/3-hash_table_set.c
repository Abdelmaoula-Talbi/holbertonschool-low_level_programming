#include "hash_tables.h"

/**
 * hash_table_set - add an element to a given hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (!ht || !new_node || !key || !value)
		return (0);
	if (strlen(key) < 1)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	i = 0;
	while (i < ht->size)
	{
		if (i == index)
		{
			if (!ht->array[i])
				new_node->next = NULL;
			else
			{
				if (strcmp(key, ht->array[i]->key) == 0)
					free(ht->array[i]->value);
				new_node->next = ht->array[i];
			}
			ht->array[i] = new_node;
		}
		i++;
	}
	return (1);
}
