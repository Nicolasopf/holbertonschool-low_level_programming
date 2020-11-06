#include "holberton.h"

/**
 * get_bit - print the value of a bit at a given index
 * @n: number to use the index
 * @index: position to bit
 * Return: the value of the bit at index, -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index < sizeof(n) * 8)
	{
		for (i = 0; i < index; i++)
			n = n >> 1;
		if (n & 1)
			return (1);
		else
			return (0);
	}
	return (-1);
}
