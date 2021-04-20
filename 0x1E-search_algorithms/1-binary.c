#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located or -1 if array is NULL or no match
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, low = 0, top = size - 1, pos = 0;

	if (array)
		while (low <= top)
		{
			pos = (low + top) / 2;

			printf("Searching in array: ");
			for (i = low; i <= top; i++)
			{
				if (i != top)
					printf("%d, ", array[i]);
				else
					printf("%d", array[i]);
			}
			printf("\n");

			if (array[pos] < value)
				low = pos + 1;
			else if (array[pos] > value)
				top = pos - 1;
			else
				return (pos);
		}
	return (-1);
}
