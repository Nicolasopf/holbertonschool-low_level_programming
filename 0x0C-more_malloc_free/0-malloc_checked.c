#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: bytes
 * Return: 98 fail, pointer to allocated memory in succes.
 */

void *malloc_checked(unsigned int b)
{
	void *h;

	h = malloc(b);
	if (h == NULL)
		exit(98);
	return (h);
}
