#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: Hash table to look into.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int idx = 0;
	int tmpp = 0;

	if (ht)
	{
		printf("{");
		for (idx = 0; idx < ht->size; idx++)
		{
			tmp = ht->array[idx];
			while (tmp)
			{
				if (tmpp > 0)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				tmpp++;
			}
		}
		printf("}\n");
	}
}
