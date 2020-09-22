#include "holberton.h"

/**
 * _isalpha - return 1 if there are letters
 *
 * @c: alphabet lower and upper
 *
 * Return: 1 if letter, 0 if not
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			return (1);
		}
		return (0);
}
