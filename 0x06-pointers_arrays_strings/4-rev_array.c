#include "holberton.h"

/**
 * reverse_array - reverses array
 * @a: integer to reverse
 * @n: elements of array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}
}
