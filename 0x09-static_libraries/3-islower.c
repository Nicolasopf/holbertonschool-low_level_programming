#include "holberton.h"

/**
 * _islower - check lower case
 *
 * @c: character
 *
 * Return: 1 lower case, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
