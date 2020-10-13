#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars
 * @size: bytes
 * @c: chars
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	a = malloc(sizeof(char) * size);
	if (size == 0 || a == NULL)
	{
		return (NULL);
	}
	else
	{
		for (b = 0; b < size; b++)
			a[b] = c;
		return (a);
	}
	return (NULL);
}
