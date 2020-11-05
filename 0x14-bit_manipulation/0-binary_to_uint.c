#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int cv = 0, i = 0, len = 0;

	if (b && b[i])
	{
		while (b[len])
		{
			if (b[len] < '0' || b[len] > '1')
				return (0);
			len++;
		}
		cv += b[i] - '0';
		for (i = 1; i < len; i++)
			cv = (cv * 2) + (b[i] - '0');
		return (cv);
	}
	return (0);
}
