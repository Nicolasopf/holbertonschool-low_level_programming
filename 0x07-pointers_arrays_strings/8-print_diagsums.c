#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints diagonal sums
 * @a: the matrix
 * @size: column size
 */

void print_diagsums(int *a, int size)
{
	int b;
	int n1 = 0, n2 = 0;

	for (b = 0; b < size; b++)
	{
		n1 = n1 + a[b + (b * size)];
		n2 = n2 + a[(size * (b + 1)) - (b - 1)];
	}
	printf("%d, %d\n", n1, n2);
}
