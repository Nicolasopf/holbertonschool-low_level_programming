#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: X
 * @height: Y
 * Return: pointer n, NULL if fails
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **n;

	if (width <= 0 || height <= 0)
		return (NULL);
	n = malloc(sizeof(int *) * height);
	if (n == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		n[i] = malloc(sizeof(int) * width);
		if (n[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(n[k]);
			free(n);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			n[i][j] = 0;
	}
	return (n);
}
