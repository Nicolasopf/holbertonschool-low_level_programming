#include "hash_tables.h"
/**
 * key_index - function to gives the index of a key
 * @key: key of the hash table
 * @size: Size of the array in the hash table
 * Return: Index where the key is.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
