#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: position to change a bit to 0
 * Return: 1 if works, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
