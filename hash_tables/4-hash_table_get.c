#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key.
 * @ht: the hash table to look into.
 * @key: the key to look for.
 * Return: the value associated with the key, or NULL if @key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;
	hash_node_t *temp;

	if (!key || !ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	i = 0;
	while (i < ht->size)
	{
		if (i == index)
		{
			if (ht->array[i])
			{
				if (strcmp(ht->array[i]->key, key) == 0)
				{
					return (ht->array[i]->value);
				}
				else
				{
					temp = ht->array[i];
					while (temp)
					{
						temp = temp->next;
						if (strcmp(temp->key, key) == 0)
							return (temp->value);
					}
				}
			}
		}
		i++;
	}
	return (NULL);
}
