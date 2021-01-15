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
	hash_node_t *new;

	if (ht == NULL)
		return 0;
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return 0;
	new->key = strdup(key);
	new->value = strdup(value);
	hand(ht, new);
	return 0;
}

/*
 *
 *
 *
 *
 */

void hand(hash_table_t *ht, hash_node_t *new)
{
	unsigned long int i = key_index((unsigned char *)new->key, ht->size);
	hash_node_t *tmp = ht->array[i];

	if (ht->array[i] != NULL)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, new->key) == 0)
				break;
			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
			new->next = ht->array[i];
			ht->array[i] = new;
		}
		else
		{
			free(tmp->value);
			tmp->value = strdup(new->value);
			free(new->value);
			free(new->key);
			free(new);
		}
	}
	else
	{
		new->next = NULL;
		ht->array[i] = new;
	}
}
