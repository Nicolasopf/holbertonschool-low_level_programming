#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *node;

	if (!ht)
		return;
	for (idx = 0; idx < ht->size; idx++)
	{
		while (ht->array[idx])
		{
			node = ht->array[idx];
			ht->array[idx] = ht->array[idx]->next;
			free(node->key);
			free(node->value);
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}
