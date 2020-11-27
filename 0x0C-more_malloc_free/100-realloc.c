#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated with a call to malloc.
 * @old_size:is the size, in bytes, of the allocated space for ptr.
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: NULL if it fails, pointer to mem space else.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem;
	char *om = ptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	mem = malloc(new_size);
	if (ptr == NULL)
		return (mem);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		mem[i] = om[i];
	free(om);
	return (mem);
}
