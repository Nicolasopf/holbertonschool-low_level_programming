#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of elements
 * @size: size of array
 * @cmp: pointer to the function to be used to compare the values
 * Return: 0 if works, -1 if fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
