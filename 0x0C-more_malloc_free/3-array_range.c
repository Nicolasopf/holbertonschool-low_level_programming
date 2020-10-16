#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum integer to store.
 * @max: maximum integer to store.
 * Return: a or null
 */

int *array_range(int min, int max)
{
	int *p;
	unsigned int size, i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
