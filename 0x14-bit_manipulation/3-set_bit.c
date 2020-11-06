#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a specific position
 * @n: pointer to num
 * @index: position to change bit
 * Return: 1 sucess, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
