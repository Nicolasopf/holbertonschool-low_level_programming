#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Hash table to add or update.
 * @key: Key to set.
 * @value: Value associated to the key.
 * Return: 1 if succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new, *tmp;

	if (!ht || !key || !*key)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);

	if (ht->array[idx])
	{
		tmp = ht->array[idx];
		while (tmp)
		{
			if (!(strcmp(tmp->key, key)))
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->value = strdup(value);
	new->key = strdup(key);
	if (!new->key || !new->value)
	{
		if (new->key)
			free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
