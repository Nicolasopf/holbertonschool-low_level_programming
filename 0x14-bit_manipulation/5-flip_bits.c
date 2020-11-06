#include "holberton.h"

/**
 * flip_bits - print the number of bits that you need to flip to get from
 * one number to another
 * @n: first value
 * @m: second value
 * Return: the number of bits to flip one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, j = 0, k;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		k = (n ^ m) >> i;
		if (k & 1)
			j++;
	}
	return (j);
}
