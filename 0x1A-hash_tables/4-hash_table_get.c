#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: Hash table to look into.
 * @key: Key looking for.
 * Return: Value associated, NULL if key couldn't be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (!key || !ht || !*key)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx])
	{
		node = ht->array[idx];
		while (node)
		{
			if (!strcmp(node->key, key))
				return (node->value);
			node = node->next;
		}
	}
	return (NULL);
}
